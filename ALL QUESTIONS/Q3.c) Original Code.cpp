#include<iostream>
using namespace std;

int main() {
    const int LENGTH = 21;
    char message[LENGTH];
    int i;
    
    cout << "Enter a sentence on the line below." << endl;
    cin >> message[0]; // Reads the first word
    i = 0;
    
    while (i < LENGTH - 1 && message[i] != '\n') {
        ++i;
        cin >> message[i]; // Reads subsequent words, if possible (stops at space)
    }
    
    message[i] = '\0'; // Terminates the string
    cout << message << endl;
    
    return 0;
}

