#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std ;

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
void output(vector <Sclient> hello){   
    cout << "_______________________________________________________________________________________________________________" << endl ;
    cout << "|" << setw(20) << left << " ACCOUNT NUMBER " << "|" << setw(15) << left << " PINE CODE " << "|" << setw(30) << left <<
    " CLIENT NAME " << "|" << setw(20) << left << " CLIENT PHONE " << "|"
    << setw(20) << left << " ACCOUNT BALANCE " << "|" << endl ;
    cout << "---------------------------------------------------------------------------------------------------------------" << endl ;
    for (int i = 0; i < hello.size(); i++)
    {
        cout << "|" << setw(20) << left << hello[i].ac_number << "|" << setw(15) << left << hello[i].pin << "|" << setw(30) << left <<
        hello[i].name << "|" << setw(20) << left << hello[i].phone << "|"
        << setw(17) << left << hello[i].balance <<"DA |" << endl ;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl ;
    }
    
}

int main(){
    output(fileExtracter("bank_info2.txt")); 
}