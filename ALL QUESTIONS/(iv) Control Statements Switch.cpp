#include<iostream>
using namespace std;

int main() {
    int day;
    cout<<"enter the number of the day";
    cin>>day;
    cout<<day;
    switch(day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        default: cout << "Other day"; break;
    }
    return 0;
}

