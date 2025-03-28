#include<iostream>
#include<string>

using namespace std ;

string get_string( string massege){
    string syntax ;
    cout << massege ;
    getline(cin,syntax) ;
    return syntax ;
}

bool isVowel(char letter ){
    string vowel_letter = "aieou" ;
    int i ; 
    letter = tolower(letter);
    for ( i = 0; i < 5 ; i++)
    {
        if (letter == vowel_letter[i])
        {
            return true ;
        }
        
    }
    return false ;
}


void printvowel(string S1){
    cout << "The vowel in the syntax are: " ;
    for (short i = 0 ; i < S1.length(); i++){   
        if ( isVowel(S1[i])){
        cout << S1[i] << "  " ;
    }}
    }


int main(){
    string syntax ;
    syntax = get_string("enter the syntax to search for vowel in it : ") ;
    printvowel(syntax);
    
    

}