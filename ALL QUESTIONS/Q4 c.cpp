#include <iostream>
using namespace std;

int main() {
    int grade;

    // Input validation loop
    do {
        cout << "Enter your grade (0-100): ";
        cin >> grade;

        if (grade < 0 || grade > 100) {
            cout << "Invalid input. Please enter a grade between 0 and 100." << endl;
        }
    } while (grade < 0 || grade > 100);

    // Output the valid grade
    cout << "You entered a valid grade: " << grade << endl;

    return 0;
}

