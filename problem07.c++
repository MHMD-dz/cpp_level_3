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

void matrix_transpose( int M[3][3] , int row , int col , int  T[3][3]){
    int i , j ;
    for ( i = 0; i < row; i++)
    {
        
        for ( j = 0; j < col; j++)
        {
            T[j][i] = M[i][j] ;
        }
        
        
    }
}



int main(){
    int M[3][3] , T[3][3];
    fill_the_matrix(M,3,3);
    print_the_matrix(M,3,3);
    cout << "_________________________" << endl ;
    matrix_transpose(M,3,3,T);
    cout << "The transposet matrix is :  " << endl ;
    print_the_matrix(T,3,3);

}