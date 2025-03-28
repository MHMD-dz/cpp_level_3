#include<iostream>

using namespace std ;


string merge(string T[4] , float balance){
    string account = "" ;
    for (int i = 0; i < 4 ; i++)
    {
        account += T[i] + "#//#";
    }
    account += to_string(balance);
    return account ;
}


int main(){
    string T[4] ;
    float balance ;

    cout << "Enter the account number : " ;
    cin >> T[0] ;
    cout << "Enter the account pine : " ;
    cin >> T[1] ;
    cin.ignore();
    cout << "Enter the account name : " ;
    getline(cin,T[2]) ;
    cout << "Enter the phone: " ;
    cin >> T[3] ;
    cout << "Enter the account balance : " ;
    cin >> balance ;
    cout << "client record for saving is: " << endl ;
    cout << merge(T,balance) ;

}