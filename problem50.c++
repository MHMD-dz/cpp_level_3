#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std ;

string getString(string massege ){
    string syntax ;
    cout << massege ;
    getline(cin,syntax);
    return syntax ;
}

struct Sclient{
    string name ;
    string pin ;
    string ac_number ;
    string phone ;
    string balance ;
};

vector <string> lineTOvect(string line){
    short pos = 0 ;
    string sWord = "" ;
    string Delim = "#//#" ; 
    vector <string> vString ;
    while ((pos = line.find(Delim)) != string::npos){
        sWord = line.substr(0, pos); 
            if (sWord != ""){
                vString.push_back(sWord);
            }
        line.erase(0, pos + Delim.length());
    }
    if (line != ""){
        vString.push_back(line); 
    }
    return vString ;}

Sclient lineTOstruct( string line ){
    vector <string> str ;
    Sclient client ;
    str = lineTOvect(line);
    client.ac_number = str[0] ;
    client.pin = str[1] ;
    client.name = str[2] ;
    client.phone = str[3] ;
    client.balance = str[4] ;
    return client ;
}


vector <Sclient> fileExtracter( string filename){
    ifstream file(filename) ;
    string line ;
    vector <Sclient> bank_info ;
    while (getline(file,line)){
        bank_info.push_back(lineTOstruct(line));
    }
    return bank_info ;
}

int whereExist(vector <Sclient> client , string ACN){
    for (int i = 0; i < client.size() ; i++)
    {
        if ( ACN == client[i].ac_number)
        {
            return i ;
        }
        
    }
    return -1 ;
} 

void deletAC(int number , vector <Sclient> client){
    ofstream file("bank_info.txt" , ios::out) ;
    if (file)
    for (int i = 0; i < client.size(); i++){
    {
        if (i == number)
        {
            continue;
        }
        
        file << client[i].ac_number << "#//#" << client[i].pin << "#//#" << client[i].name << "#//#" << client[i].phone << "#//#" << client[i].balance << endl;
    }
    }else{
        cout << "ERROR in reading the file " << endl ;
    }

}

void output(int number , vector <Sclient> client ){
    char delet ;
    if (number == -1)
    {
        cout << "ERROR this user dosn't exist " ;
        return;
    }
    cout << "THE INFO OF THE CLIENT ARE:" << endl ;
    cout << "the client account number: " << client[number].ac_number << endl ;
    cout << "the client account pine: " << client[number].pin << endl ;
    cout << "the client name: " << client[number].name << endl ;
    cout << "the client phone: " << client[number].phone << endl ;
    cout << "the client account balance: " << client[number].balance << endl ;
    cout << "are you sure you whant to delet this account (y/n): " ;
    cin >> delet ;
    if (delet == 'y' | delet == 'Y')
    {
        deletAC(number,client);
    }
    

    
}

int main(){
    string ACN ;
    vector <Sclient> client ;
    client = fileExtracter("bank_info2.txt") ;
    ACN = getString("Enter the acount number you whant to delete: ");
    output(whereExist(client,ACN),client);
    
}