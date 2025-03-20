#include<iostream>
#include<string>

using namespace std ;

string getstring(string massage){
    string syntax ;
    cout << massage ;
    getline(cin,syntax);
    return syntax ;
}

bool ispunc(char syntc){
    string hi = "';,:.¨^|-" ;
    for (int i = 0 ; i < hi.length() ; i++)
    {
        if (hi[i] == syntc)
        {
            return true ;
        }
        
    }
    return false ;
}


string removPunc( string syntax){
    for (int i = 0 ; i < syntax.length(); i++)
    {
        if (ispunc(syntax[i]))
        {
            syntax = syntax.erase(i,1);
            i-- ;
        }
        
    }
    return syntax ;
}


int main(){
    string syntax ;
    syntax = getstring("Enter the syntax: ");
    cout << "The syntax after removing punctuations: " << removPunc(syntax) ;

}