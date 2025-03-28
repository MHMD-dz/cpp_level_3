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

void print_reversed_vector(vector <string> hello){

    cout << "TOKENS! : " << hello.size() << endl ;
    for (int i = hello.size() - 1 ; i >= 0; i--)
    {
        cout << hello[i] << " " ;
    }
    
    
}


int main(){
    string syntax ;
    syntax = read_string("enter the syntax: ") ;
    print_reversed_vector(splitString(syntax," ")) ;
}