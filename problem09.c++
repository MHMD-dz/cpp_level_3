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

void the_middle_row(int M[3][3] , int row , int col ){
    int i , j ;
    for ( i = 0; i < row ; i++)
    {
       if (i == 1 )
       {
        cout << "[ " ;
        for ( j = 0; j < col ; j++)
        {
            cout << " " << M[i][j] << " " ;
        }
        cout << " ]"  ;
       }
       
        
    }        cout << endl ;

}
void the_middle_col(int M[3][3] , int row , int col ){
    int i , j ;
    for ( i = 0; i < row ; i++)
    {
       
        cout << "[ " ;
        for ( j = 0; j < col ; j++)
        {

            if (j==1)
            {
                cout << " " << M[i][j] << " " ;
            }
            
        }
        cout << " ]"  ;
       }
       
        cout << endl ;
    }


int main(){
    srand(time(0));
    int M[3][3] ;
    fill_matrix(M,3,3);
    print_the_matrix(M,3,3);
    cout << "--------------------------" << endl ;
    cout << " the matrix middle row is : " << endl ;
    the_middle_row(M,3,3);
    cout << "--------------------------" << endl ;
    cout << " the matrix middle col is : " << endl ;
    the_middle_col(M,3,3);

    
    

    
}