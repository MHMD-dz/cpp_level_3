#include<iostream>

using namespace std ;

int generate_random(int from, int to) {
    return (rand() % (to - from + 1)) + from;
}

void fill_matrix( int M[3][3] , int row , int col){
    int i , j ; 
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < row; j++)
        {
            M[i][j] = generate_random(1,10) ; 
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

void matrix_miltiply(int M1[3][3] , int M2[3][3] , int M3[3][3] , int row , int col ){
    int i , j ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            M3[i][j] = M1[i][j] * M2[i][j] ;
        }
        
    }
}


int main(){
    srand(time(0));
    int M1[3][3] , M2[3][3] , M3[3][3];
    fill_matrix(M1,3,3);
    print_the_matrix(M1,3,3);
    cout << "_______________________" << endl ;

    fill_matrix(M2,3,3);
    print_the_matrix(M2,3,3);
    cout << "_______________________" << endl ;
    matrix_miltiply(M1,M2,M3,3,3);
    print_the_matrix(M3,3,3);

}