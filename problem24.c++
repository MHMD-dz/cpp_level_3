#include<iostream>

using namespace std ;

string get_string(string message){
    string syntax ;
    cout << message ;
    getline(cin , syntax);
    return syntax ;
}

string upper_first(string syntax){
    int i ;
    bool isFirst = true ;
    string temp ;

    for ( i = 0 ; i < syntax.length() ; i++)
    {
        if (syntax[i] != ' ' && isFirst)
        {
            syntax[i] = toupper(syntax[i]) ;
            
        }
        isFirst = ((syntax[i] == ' ') ? true :  false );
    }
    return syntax ;
}


int main(){
    string syntax ;
    syntax = upper_first(get_string("enter the syntax: "));
    cout << syntax << endl ;

}