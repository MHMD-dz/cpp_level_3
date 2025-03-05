#include<iostream>

using namespace std ;

int get_number(string masseg){
    int number ;
    cout <<  masseg << endl ;
    cin >> number  ;
    return number ;
}


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


int main(){
    int M[3][3] , number , how_much ;
    fill_the_matrix(M,3,3);
    print_the_matrix(M,3,3);

    number = get_number("enter the number you want to search for: ") ;
    how_much = search(M,3,3,number) ;
    if ( 0  <  how_much )
    {
        cout << " the number exist in the matrix " << how_much  << " time "<< endl ;
    }
    else
    {
        cout << "the number dosn't exist in the matrix !" << endl ;
    }
    
}