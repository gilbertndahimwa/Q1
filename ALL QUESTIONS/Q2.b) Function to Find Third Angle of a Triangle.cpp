#include<iostream>
using namespace std;

int findThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;
    cout << "Enter two angles of the triangle: ";
    cin >> angle1 >> angle2;
    cout << "The third angle is: " << findThirdAngle(angle1, angle2) << endl;
    return 0;
}

