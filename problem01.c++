#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generate_random(int from, int to) {
    return (rand() % (to - from + 1)) + from;
}

void fill_the_matrix(int T[100][100]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            T[i][j] = generate_random(1, 100);
        }
    }
}

void print_matrix(int T[100][100]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        cout << "[ ";
        for (j = 0; j < 3; j++) {
            cout << T[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

int main() {
    int M[100][100];
    srand(time(0));
    fill_the_matrix(M);
    print_matrix(M);
}
