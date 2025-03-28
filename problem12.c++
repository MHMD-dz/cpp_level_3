#include<iostream>

using namespace std ;

int generate_random(int from, int to) {
    return (rand() % (to - from + 1)) + from;
}

void fill_matrix( int M[3][3] , int row , int col){
    int i , j ; 
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
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

bool checking( int M1[3][3] , int M2[3][3] , int row , int col){
    int i , j ;
    for ( i = 0; i < row ; i++)
    {
        for ( j = 0; j < col ; j++)
        {
            if (M1[i][j] != M2[i][j])
            {
                return false ;
            }
        }
    }
    return true ;
}



void print_result(int M1[3][3] , int M2[3][3] , int row , int col){
    int i , j ;
    bool hi = checking(M1,M2,row,col) ;
            if (!hi)
            {
                cout << "the two matrix are not equal " << endl ;
                return;
            }
                cout << "the two matrix are equal" << endl ;
}


int main(){
    srand(time(0));
    int M1[3][3] , M2[3][3] , sum1 , sum2;
    fill_matrix(M1,3,3);
    print_the_matrix(M1,3,3);
    cout << "----------------------" << endl ;
    fill_matrix(M2,3,3);
    print_the_matrix(M2,3,3);
    cout << "----------------------" << endl ;
    print_result(M1,M2,3,3);
    

}