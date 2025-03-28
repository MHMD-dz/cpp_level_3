#include<iostream>
#include<string>

using namespace std ;

string read_string(string messag){
    string syntax ;
    cout << messag ;
    getline(cin,syntax);
    return syntax ;
}

string trim_left(string syntax){
    int i , spase_size = 0 ;

    for (i = 0 ; i < syntax.length() ; i++)
    {
        
        if (syntax[i] != ' ')
        {
           break;
        }
        spase_size ++ ;
    }
    syntax.erase(0,spase_size) ;
    return syntax ;
}

string trim_right(string syntax){
    int i , spase_size = 0 ;

    for (i = syntax.length() - 1 ; i >= 0  ; i--)
    {
        
        if (syntax[i] != ' ')
        {
           break;
        }
        spase_size ++ ;
    }
    syntax.erase(syntax.length() - spase_size, spase_size);
    return syntax ; 
}
string trim( string syntax){
    syntax = trim_left(syntax) ;
    syntax = trim_right(syntax) ;
    return syntax ;
}




int main(){
    string syntax ;
    syntax = read_string("enter the syntax: ") ;
    cout << "Trim left :" << trim_left(syntax) << endl ;
    cout << "Trim right :" << trim_right(syntax) << endl ;
    cout << "Trim :" << trim(syntax) << endl ;
    
}