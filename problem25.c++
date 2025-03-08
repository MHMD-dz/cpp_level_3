#include<iostream>

using namespace std ;

string get_string(string message){
    string syntax ;
    cout << message ;
    getline(cin , syntax);
    return syntax ;
}

string lowerFirst(string syntax){
    int i ;
    bool isFirst = true ;
    string temp ;

    for ( i = 0 ; i < syntax.length() ; i++)
    {
        if (syntax[i] != ' ' && isFirst)
        {
            syntax[i] = tolower(syntax[i]) ;
            
        }
        isFirst = ((syntax[i] == ' ') ? true :  false );
    }
    return syntax ;
}


int main(){
    string syntax ;
    syntax = lowerFirst(get_string("enter the syntax: "));
    cout << syntax << endl ;

}