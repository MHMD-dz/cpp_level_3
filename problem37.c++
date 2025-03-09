#include<iostream>
#include<string>
#include<vector>

using namespace std ;

string read_string(string messag){
    string syntax ;
    cout << messag ;
    getline(cin,syntax);
    return syntax ;
}


vector <string> splitString(string syntax , string splater ){
    vector <string> hello ;
    string word ;
    int pos ;

    while ( (pos = syntax.find(splater)) != string::npos)
    {
        word = syntax.substr(0,pos) ;
        if (word != "")
        {
            hello.push_back(word) ;
        }
        
        syntax.erase(0 , pos + splater.length() ) ;
    }
    
    if (syntax != "")
    {
        hello.push_back(syntax) ;
    }
    
    return hello ;

}

void print_vector(vector <string> hello){

    cout << "TOKENS! : " << hello.size() << endl ;
    for (string &hi : hello)
    {
        cout << hi << endl ;
    }
    
}


int main(){
    string syntax ;
    syntax = read_string("enter the syntax: ") ;
    print_vector(splitString(syntax," ")) ;
}