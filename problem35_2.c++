#include<iostream>
#include<string>

using namespace std ;

string get_string( string massege){
    string syntax ;
    cout << massege ;
    getline(cin,syntax) ;
    return syntax ;
}

void print_word(string syntax){
    string word , space ;
    int pos = 0 ;

    space = " " ;
    while ((pos = syntax.find(space)) != string::npos)
    {
        word = syntax.substr(0,pos) ;
        if ( word != "")
        {
            cout << word << endl ;
        }
        syntax.erase(0 , pos + space.length() ) ;
        
    }
    if (syntax != "")
        {
            cout << syntax << endl ;
        }
    
}


int main(){
    string syntax ;
    syntax = get_string("enter the syntax: ") ;
    print_word(syntax);
}