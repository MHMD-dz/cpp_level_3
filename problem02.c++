#include <iostream>

using namespace std ;

int generate_random(int from, int to) {
    return (rand() % (to - from + 1)) + from;
}

void fill_the_matrix(int T[100][100] , int row , int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col ; j++) {
            T[i][j] = generate_random(1, 100);
        }
    }
}

void print_matrix(int T[100][100] , int row , int col ) {
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

int row_sum(int A[100][100] , int x){
    int  i , s =0 ;
   
        for (i = 0; i < 3; i++) {
            s += A[x][i] ;
        }
        return s ;
}

void print_row_sum(int T[100][100] , int row ){
    int i ;
    for ( i = 0; i < row; i++)
    {
        cout << "row number " << i+1 <<" sum is: " << row_sum(T,i) << endl ;
    }
    
}


int main() {
    srand(time(0));

    int M[100][100] ;

    fill_the_matrix(M , 3 , 3 );
    print_matrix(M,3,3);
    print_row_sum(M,3);
    
   
}  
