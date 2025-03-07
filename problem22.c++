#include<iostream>

using namespace std ;


void fibonacci(int numbr1, int numbr2 , int numbr){
   int fibo = 0 ;

   if (numbr > 0)
   {
    fibo = numbr1 + numbr2 ;
    cout << fibo << "\t" ;
    numbr1 = numbr2 ;
    numbr2 = fibo ;
    fibonacci( numbr1 , numbr2 , numbr - 1) ;
   }
   
    
}



int main(){
    fibonacci(0,1,10);
}