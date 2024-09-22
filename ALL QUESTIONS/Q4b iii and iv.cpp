#include <iostream>
#include <cstring>  // Include this header for string functions like strcpy
using namespace std;

int main() {
    // Variable declarations
    int a = 10;
    int b = 3;
    char email[20];  // Array to hold an email address

    // Perform division and output the result
    a /= b;
    cout << "a / b = \t" << a << endl;

    // Assign an email to the variable and print it
    strcpy(email, "example@mail.com");  // Use strcpy to assign an email to the array
    cout << "Assigned Email: " << email << endl;

    // Get user input for the email
    cout << "Enter your email: ";
    cin >> email;  // Store user input in the email variable
    cout << "You entered: " << email << endl;

    return 0;
}

