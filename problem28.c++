#include<iostream>
#include<string>

using namespace std ;

string get_string(string message){
    string syntax ;
    cout << message ;
    getline(cin , syntax);
    return syntax ;
}


char inverting(char letter){
    
    return isupper(letter) ? tolower(letter) : toupper(letter) ;

}

string syntax_invert(string syntax){
    int i ;
    for ( i = 0; i < syntax.length(); i++)
    {
        syntax[i] = inverting(syntax[i]) ;
    }
    return syntax ;
}

int main(){
    int syntax ;
    cout << syntax_invert(get_string("Enter the syntax to inverte: ")) ;
}