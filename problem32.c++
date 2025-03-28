#include<iostream>
#include<string>

using namespace std ;

char get_char( string massege){
    char letter;
    cout << massege ;
    cin >> letter ;
    return letter ;
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

int main(){
    char letter ;
    letter = get_char("enter an caracteur : ") ;
    if (isVowel(letter))
    {
        cout << "the caractuer \"" << letter << "\" is a vowel " << endl ;
    }
    else
    {
        cout << "the caractuer \"" << letter << "\" is not an vowel " << endl ;
    }
    
    

}