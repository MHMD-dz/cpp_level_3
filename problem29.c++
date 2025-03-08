#include<iostream>
#include<string>

using namespace std ;

string get_string(string message){
    string syntax ;
    cout << message ;
    getline(cin , syntax);
    return syntax ;
}


bool chackingIf_upper(char letter){
    
    return isupper(letter) ;

}

void syntax_info(string syntax){
    int i , upper = 0 , lower = 0 ;
    for ( i = 0; i < syntax.length(); i++)
    {
        if (chackingIf_upper(syntax[i]) && syntax[i] != ' ')
        {
            upper++ ;
        }
        else if (!chackingIf_upper(syntax[i]) && syntax[i] != ' '){
         lower++ ;
        }
    }
    cout << "the string upper case are : " << upper << " cases " << endl ;
    cout << "the string lower case are : " << lower << " cases " << endl ;
}

int main(){
    string syntax ;
    syntax = get_string("Enter the syntax: ") ;
    cout << "the string ength is: " << syntax.length() << endl ;
    syntax_info(syntax) ;
}