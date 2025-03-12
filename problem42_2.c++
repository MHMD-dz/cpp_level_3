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
    int pos = syntax.find(rword) ;
    while ( pos != string::npos)
    {
        syntax = syntax.replace(pos,rword.length(),nword) ;
        pos = syntax.find(rword,pos + nword.length());
    }
    return syntax ;
}

int main(){
    string syntax , rword , nword;
    syntax = read_string("Enter the syntax: ") ;
    rword = read_string("Enter the word you want to replace: ") ;
    nword = read_string("Enter the new word : ") ;
    cout << "the string after the changes are: " << replace_word(syntax,rword,nword) << endl ;

}