#include<iostream>

using namespace std ;


void fibonacci_loop( int number ){
    int firstNumber = 0 , secondNumber = 1 , fibo = 0;
    int i , temp ;
    cout << " 1\t" ;
    for ( i = 2 ; i <= number ; i++)
    {
        fibo = firstNumber + secondNumber ;
        cout << fibo << "\t" ;
        firstNumber = secondNumber ;
        secondNumber = fibo ;

    }
    
    
    
}


int main(){
    fibonacci_loop(15) ;
}