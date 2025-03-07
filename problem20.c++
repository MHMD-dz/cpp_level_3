#include<iostream>

using namespace std ;

void fill_the_matrix(int M[3][3] , int row , int col){
    int i , j ;
    cout << " filling the matrix : " << endl ;
    cout << "______________________" << endl ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            cout << "M[" << i+1 << "][" << j+1 << "]: " ;
            cin >> M[i][j] ;
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

bool isPalindrom (int M[3][3] , int row , int col ){
    int i , j ; 
    
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col ; j++)
        {
        if (M[i][j] != M[i][col - j - 1])
        {
            return false ;
        }
            
        }
    }
    return true ;
 
}

int main(){
    int M[3][3] ;
    fill_the_matrix(M,3,3);
    print_the_matrix(M,3,3);

    if (isPalindrom(M,3,3))
    {
        cout << " the matrix is palindrom !" << endl ;
    }
    else
    {
        cout << " the matrix is not palindrom !" << endl ;
    }
    
}