#include<iostream>
#include<string>

using namespace std ;

string get_string( string massege){
    string syntax ;
    cout << massege ;
    getline(cin,syntax) ;
    return syntax ;
}

int print_word_number(string syntax){
    string word , space ;
    int pos = 0 , conter = 0;

    space = " " ;
    while ((pos = syntax.find(space)) != string::npos)
    {
        word = syntax.substr(0,pos) ;
        if ( word != "")
        {
           conter++;
        }
        syntax.erase(0 , pos + space.length() ) ;
        
    }
    if (syntax != "")
        {
           conter++;
        }
    return conter ;
}


int main(){
    string syntax ;
    syntax = get_string("enter the syntax: ") ;
    cout << "the worn number in the syntax is : " << print_word_number(syntax) ;
}