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
    int i , start , stop ;
    for ( i = 0; i < syntax.length(); i++)
    {
        if (syntax[i] == ' ')
        {
            cout << endl ;
            continue;
        }
        cout << syntax[i] ;
    }
    
}


int main(){
    string syntax ;
    syntax = get_string("enter the syntax: ") ;
    print_word(syntax);
}