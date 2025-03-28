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

int sum_of_matrix(int M[3][3] , int row , int col ){
    int i , j ;
    int s = 0 ;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            s += M[i][j] ;
        }
        
    }
    return s ;
}


int main(){
    srand(time(0));
    int M1[3][3] ;
    fill_matrix(M1,3,3);
    print_the_matrix(M1,3,3);
   

    
    cout << "The sum of the matrix element is: " << sum_of_matrix(M1,3,3);
    

}