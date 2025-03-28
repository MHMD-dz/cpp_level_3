#include <string>
#include <iostream>
#include <vector>
using namespace std;

string fill_stringWithVector( vector <string> hello , string splater ){
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


int main(){
    vector <string> hii ;
    string full ;
    hii = { "mohamed" , "hassnaa" , "laila" , "hello" , "futur"} ;
    full = fill_stringWithVector(hii , " / ") ;
    cout << full ;


}
