#include<iostream>
#include<vector>

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

int minimalOfMatrix(int M[3][3] , int row , int col){
    int i , j ;
    int min = M[0][0] ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (min > M[i][j] )
            {
                min = M[i][j] ;
            }
            
        }
        
    }
    return min ;
}


int maximalOfMatrix(int M[3][3] , int row , int col){
    int i , j ;
    int max = M[0][0] ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (max < M[i][j] )
            {
                max = M[i][j] ;
            }
            
        }
        
    }
    return max ;
}


int main(){
    int M1[3][3]  ;
    fill_the_matrix(M1,3,3);
    print_the_matrix(M1,3,3);
    cout << "----------------------" << endl ;
    cout << " the max valuer of the matrix is : " << maximalOfMatrix(M1,3,3) << endl ;
    cout << " the min valuer of the matrix is : " << minimalOfMatrix(M1,3,3) << endl;
}