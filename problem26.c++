#include<iostream>

using namespace std ;

string get_string(string message){
    string syntax ;
    cout << message ;
    getline(cin , syntax);
    return syntax ;
}

string to_upper(string syntax){
    int i ;
    string temp ;
    for ( i = 0; i < syntax.length() ; i++)
    {
        syntax[i] = toupper(syntax[i]) ;
    }
    return syntax ;
    
}

string to_lower(string syntax){
    int i ;
    string temp ;
    for ( i = 0; i < syntax.length() ; i++)
    {
        syntax[i] = tolower(syntax[i]) ;
    }

    return syntax ;
    
}

int main(){
    string syntax ;
    syntax = get_string("Enter the syntax: ") ;
    syntax = to_upper(syntax) ;
    cout << "The syntax after uppering: " << syntax << endl ;
    syntax = to_lower(syntax) ;
    cout << "The syntax after lowering: " << syntax << endl ;

}