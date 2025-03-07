#include<iostream>

using namespace std ;

string get_string(string message){
    string syntax ;
    cout << message ;
    getline(cin , syntax);
    return syntax ;
}

void first_latter(string syntax){
    int i ;
    bool isFirst = true ;

    for ( i = 0 ; i < syntax.length() ; i++)
    {
        if (syntax[i] != ' ' && isFirst)
        {
            cout << syntax[i] << endl ;
        }
        isFirst = ((syntax[i] == ' ') ? true :  false );
    }
    
}


int main(){
    string syntax ;
    first_latter(get_string("enter the syntax: "));

}