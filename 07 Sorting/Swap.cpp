#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;

    int temp = a;
    a = b;
    b = temp;

    cout << a << endl;
    cout << b << endl;
}