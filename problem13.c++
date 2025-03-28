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

bool isIdentity (int M[3][3] , int row , int col ){
    int i , j ; 
    for ( i = 0; i < row; i++)
    {
        
        for ( j = 0; j < col; j++)
        {
            if ( i == j )
            {
                if (M[i][j] != 1 )
                {
                    return false ;
                }
                
            }
            else
            {
                if (M[i][j] != 0)
                {
                    return false ;
                }
                
            }
            
            
        }
       
        
    }
    return true ;

}


int main(){
    int M[3][3] ;
    fill_the_matrix(M,3,3);
    print_the_matrix(M,3,3);

    if (isIdentity(M,3,3))
    {
        cout << " the matrix is identity !" << endl ;
    }
    else
    {
        cout << " the matrix is not identity !" << endl ;
    }
    
}