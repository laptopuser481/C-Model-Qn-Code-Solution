// Write a suitable program to show the concept of pass by reference and return by reference.

#include <iostream>
using namespace std;

void passByReference(int& x) {
    x = 20;
}

int& returnByReference() {
   static int y = 10; 
    return y;
}

int main() {
    int x = 5;
    cout << "Before passByReference: " << x << endl;
    passByReference(x);
    cout << "After passByReference: " << x << endl;

    int& z = returnByReference();
    cout << "Before modifying returnByReference: " << z << endl;
    z = 30;
    cout << "After modifying returnByReference: " << z << endl;

    return 0;
}