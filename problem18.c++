#include<iostream>
#include<vector>

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

bool isExist(int M[3][3] , int row , int col , int number ){
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
    if (cont > 0)
    {
        return true ;
    }
    return false ;
}

bool isInVector(const vector<int>& vect, int number) {
    for (int num : vect) {
        if (num == number) {
            return true;
        }
    }
    return false;
}

void intersected(int M1[3][3] , int M2[3][3]  , int row , int col , vector <int> &inters){
    int i , j ; 
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (isExist(M1,3,3,M2[i][j]) && !isInVector(inters , M2[i][j]))
            {
                inters.push_back(M2[i][j]);
            }
            
        }
        
    } 
}

void print_vector( vector <int> &vect){
    cout << "[" << "\t" ;
    for (int &i : vect)
    {
        cout << i << "\t" ;
    }
    cout << "]" ;
}


int main(){
    int M1[3][3] , M2[3][3] , number , how_much ;
    vector <int> helooo ;
    fill_the_matrix(M1,3,3);
    print_the_matrix(M1,3,3);
    cout << "----------------------" << endl ;
    fill_the_matrix(M2,3,3);
    print_the_matrix(M2,3,3);
    cout << "----------------------" << endl ;
    intersected(M1,M2,3,3,helooo);
    print_vector(helooo);
    
    
}