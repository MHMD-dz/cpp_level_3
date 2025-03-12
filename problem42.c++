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
    string news , word ;
    int pos ;
    for (int i = 1; i < syntax.length(); i++)
    {
        pos = (syntax.find(" ")) ;
        word = (syntax.substr(0,pos)) ;
        if (word == rword)
        {
            word = nword ;
        }
        news += (word + " ") ;
        syntax = syntax.erase(0,pos+1);
        
    }
    news = news.erase(news.length());
    return news ;
}

int main(){
    string syntax , rword , nword;
    syntax = read_string("Enter the syntax: ") ;
    rword = read_string("Enter the word you want to replace: ") ;
    nword = read_string("Enter the new word : ") ;
    cout << "the string after the changes are: " << replace_word(syntax,rword,nword) << endl ;

}