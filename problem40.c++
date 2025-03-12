#include <string>
#include <iostream>
#include <vector>
using namespace std;

string fill_string( vector <string> hello , string splater ){
    string hi ;
    for ( int i = 0 ; i < hello.size() ; i++)
    {
        hi += hello[i]; ;
        if ( i+1 < hello.size() )
        {
            hi = hi.append(splater) ;
        }
        
    }
    
    return hi ;
}

string fill_string( string hello[10] , int size , string splater ){
    string hi ;
    for ( int i = 0 ; i < size ; i++)
    {
        hi += hello[i] ;

        if ( i < size-1)
        {
            hi += splater ;
        }
        
        
    }

    
    
    
    return hi ;
}

int main(){
    vector <string> hii ;
    string hello[6] = { "mohamed" , "hassnaa" , "laila" , "hello" , "futur" } ;
    string full ;
    hii = { "mohamed" , "hassnaa" , "laila" , "hello" , "futur"} ;
    full = fill_string(hii , " / ") ;
    cout << full << endl;
    full = fill_string( hello , 5 , " / ") ;
    cout << full ;


}
