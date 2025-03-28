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

bool isSparce (int M[3][3] , int row , int col ){
    int i , j ; 
    int numbr = 0 , zero = 0 ;
    for ( i = 0; i < row; i++)
    {
        
        for ( j = 0; j < col; j++)
        {
            if (  M[i][j] != 0)
            {
                    numbr++ ;
            }
            else if (M[i][j] == 0)
            {
                zero++;
            }
        }       
        
    }
    if (numbr > zero)
    {
        return false ;
    }
    return true ;
 
}


int main(){
    int M[3][3] ;
    fill_the_matrix(M,3,3);
    print_the_matrix(M,3,3);

    if (isSparce(M,3,3))
    {
        cout << " the matrix is sparce !" << endl ;
    }
    else
    {
        cout << " the matrix is not sparce !" << endl ;
    }
    
}