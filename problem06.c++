#include<iostream>

using namespace std ;

void fill_the_matrix( int M[3][3] , int row , int col ){
    int i , j , number = 0 ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            M[i][j] = ++number ;
        }
        
    }
}

void print_the_matrix( int M[3][3] , int row , int col) {
    int i , j ;
    for ( i = 0; i < row; i++)
    {
        cout << "[ " ;
        for ( j = 0; j < col; j++)
        {
            cout << " " << M[i][j] << " " ;
        }
        cout << " ]" << endl;
        
    }
}



int main(){
    int M[3][3] ;
    fill_the_matrix(M,3,3);
    print_the_matrix(M,3,3);

}