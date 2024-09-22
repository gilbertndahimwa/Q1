#include <iostream>
using namespace std;

int main() {
    float sum = 0;
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        sum += (float)numerator / denominator;
    }
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}

