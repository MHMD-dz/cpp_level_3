#include<iostream>

using namespace std ;
string get_string(string message){
    string hi ;
    cout << message ;
    cin >> hi ;
    return hi ;
}

string inverting(string letter){
    string temp ;
    if ( letter[0] == tolower(letter[0]))
    {
        temp = toupper(letter[0]) ;
        return temp ;
    }
    else
    {
        temp = tolower(letter[0]) ;
        return temp ;
    }
    
    
}

int main(){
    cout << inverting(get_string("Enter the letter to inverte: ")) ;
}