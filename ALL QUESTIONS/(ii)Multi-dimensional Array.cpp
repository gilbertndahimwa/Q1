#include<iostream>
using namespace std;

int main() {
    int matrix[2][5] = {{1, 2, 3,4,5}, {4, 5, 6}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

