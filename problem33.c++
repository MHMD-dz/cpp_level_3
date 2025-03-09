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


short Countvowel(string S1){
    short Counter = 0;
    for (short i = 0 ; i < S1.length(); i++){   
        if ( isVowel(S1[i])){
        Counter++;
    }}
    return Counter;
    }


int main(){
    string syntax ;
    syntax = get_string("enter the syntax to search for vowel in it : ") ;
    cout << "The number of vowel in the syntax is: " << Countvowel(syntax) << endl ;
    
    

}