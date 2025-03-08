#include<iostream>
#include<string>

using namespace std ;

string get_string(string message){
    string syntax ;
    cout << message ;
    getline(cin , syntax);
    return syntax ;
}

char get_char( string massege){
    char letter;
    cout << massege ;
    cin >> letter ;
    return letter ;
}

int count_letter(string syntax , char letter){
    int i ;
    int conter = 0 ;
    char low_letter ;
    letter = tolower(letter) ;
    for ( i = 0; i < syntax.length() ; i++)
    {
        low_letter = tolower(syntax[i]) ;
        if ( low_letter == letter )
        {
            conter++;
        }
        
    }
    return conter ;
}

int count_low_letter(string syntax , char letter){
    int i ;
    int conter = 0 ;
    for ( i = 0; i < syntax.length() ; i++)
    {
        if ( syntax[i] == letter && !isupper(syntax[i]))
        {
            conter++;
        }
        
    }
    return conter ;
}


int main(){
    string syntax ;
    char letter ;
    syntax = get_string("Enter the syntax : ") ;
    letter =  get_char("enter the letter you want to search for : ") ;
    cout << "the letter \"" << letter << "\" exist " << count_low_letter(syntax, letter ) << " time in the string " << endl ;
    cout << "the letter \"" << letter << "\" or \"" << char(toupper(letter)) << "\" exist " << count_letter(syntax, letter ) << " time in the string " << endl ;
    
}
