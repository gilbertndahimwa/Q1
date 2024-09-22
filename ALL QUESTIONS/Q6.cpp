#include <iostream>
using namespace std;

void bar(int *a)
{
    for (int j = 0; j < 4; j++)
    {
        a[j] = j * 100;
    }
}

int main() // Change 'void' to 'int'
{
    int a[4] = {10, 20, 30, 40};
    bar(a);
    for (int i = 3; i >= 0; i--)
    {
        cout << a[i] << "<";
    }

    system("pause");
    return 0; // Add return statement
}

