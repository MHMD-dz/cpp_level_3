#include<iostream>
#include<string>
#include<fstream>

using namespace std ;

int client_numbers = 1 ;

struct Sclient{
    string name ;
    string pin ;
    string ac_number ;
    string phone ;
    string balance ;
};

Sclient fill_struct(){
    Sclient client ;
    cout << "Enter the acount number: " ;
    cin >> client.ac_number ;
    cout << "Enter the acount pine: " ;
    cin >> client.pin ;
    cin.ignore();
    cout << "Enter the name: " ;
    getline(cin,client.name);
    cout << "Enter the phone number: " ;
    cin >> client.phone ;
    cout << "Enter the acount balance: " ;
    cin >> client.balance ;
    return client ;
}

void writ_info_toFile(Sclient client){
    ofstream file("bank_info.txt" , ios::app) ;
    if (file)
    {
        file << "THE INFO OF CLIENT NUMBER °" << client_numbers << " ARE:" << endl ;
        file << "the client account number: " << client.ac_number << endl ;
        file << "the client account pine: " << client.pin << endl ;
        file << "the client name: " << client.name << endl ;
        file << "the client phone: " << client.phone << endl ;
        file << "the client account balance: " << client.balance << endl ;
        file << "----------------------------------------------------" << endl ;
        client_numbers ++ ;
    }else{
        cout << "ERROR in reading the file " << endl ;
    }
    
}



int main(){
    Sclient client ;
    bool more ;
    char linu ;
    do{
    more = false ;
    client = fill_struct() ;
    writ_info_toFile(client);
    cout << "Do you want to enter another client banck account info (y/n): " ;
    cin >> linu ;
    if (tolower(linu) == 'y')
    {
        more = true ;
    }
    } while (more);
}