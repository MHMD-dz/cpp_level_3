#include <iostream>

using namespace std ;

int generate_random(int from, int to) {
    return (rand() % (to - from + 1)) + from;
}

void fill_the_matrix(int T[100][100] , int col , int row) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col ; j++) {
            T[i][j] = generate_random(1, 10);
        }
    }
}

void print_matrix(int T[100][100] , int col , int row ) {
    int i, j;
    for (i = 0; i < row; i++) {
        cout << "[ ";
        for (j = 0; j < col; j++) {
            cout << T[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl ;
}

void col_sum(int A[100][100] , int x , int T[100]){
    int  i , j ;
    T[i] = 0 ;
    for (i = 0; i < x ; i++)
    {
        for (j = 0; j < 3; j++) {
            T[i] += A[j][i] ;
        }
     }    
}

void print_col_sum(int T[100][100] , int col , int  A[100]){
    int i ;
    for ( i = 0; i < col; i++)
    {
        cout << "col number " << i+1 <<" sum is: " << A[i] << endl ;
    }
    
}


int main() {
    srand(time(0));

    int M[100][100] , T[100];

    fill_the_matrix(M , 3 , 3 );
    print_matrix(M,3,3);
    col_sum(M , 3 , T);
    print_col_sum(M,3,T);
    
   
}  
