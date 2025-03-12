#include<iostream>
#include<string>

using namespace std ;

string read_string(string messag){
    string syntax ;
    cout << messag ;
    getline(cin,syntax);
    return syntax ;
}

string replace_word( string syntax , string rword , string nword){
    string word , newstr ;
    int pos = 0 ;
    while ((pos = syntax.find(" ")) != string::npos)
    {
        word = syntax.substr(0,pos) ;
        if ( word == rword)
        {
            word = nword ;
        }
        newstr += word + " ";
        
        syntax.erase(0 , pos + 1 ) ;
        
    }
    if (syntax == rword) {
        syntax = nword;
    }
    newstr += syntax;
    return newstr ;
}

int main(){
    string syntax , rword , nword;
    syntax = read_string("Enter the syntax: ") ;
    rword = read_string("Enter the word you want to replace: ") ;
    nword = read_string("Enter the new word : ") ;
    cout << "the string after the changes are: " << replace_word(syntax,rword,nword) << endl ;

}