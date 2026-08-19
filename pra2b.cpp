

#include <iostream>
using namespace std;

// Function using Call by Value
void callByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    cout << "Inside Call by Value: ";
    cout << "x = " << x << ", y = " << y << endl;
}

// Function using Call by Reference
void callByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

    cout << "Inside Call by Reference: ";
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;

    cout << "Before Call by Value: ";
    cout << "a = " << a << ", b = " << b << endl;

    callByValue(a, b);

    cout << "After Call by Value: ";
    cout << "a = " << a << ", b = " << b << endl;

    cout << endl;

    cout << "Before Call by Reference: ";
    cout << "a = " << a << ", b = " << b << endl;

    callByReference(a, b);

    cout << "After Call by Reference: ";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}