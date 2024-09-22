#include<iostream>
using namespace std;

// Function declaration and definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    cout << "Sum: " << add(x, y) << endl; // Calling the function
    return 0;
}

