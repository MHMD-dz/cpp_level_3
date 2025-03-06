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

int search(int M[3][3] , int row , int col , int number ){
    int i , j ;
    int cont = 0 ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (M[i][j] == number )
            {
                cont++ ;
            }
            
        }
        
    }
    return cont ;
}


bool isSparce (int M[3][3] , int row , int col ){
    int elem_numbr;
    elem_numbr = col * row ;
    if (search(M,row,col,0) >= (elem_numbr/2))
    {
        return true ;
    }
    return false ;
    
 
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