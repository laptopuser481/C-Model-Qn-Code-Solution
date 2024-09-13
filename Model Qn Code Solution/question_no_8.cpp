// Write a function templates to calculate the average and multiplication of numbers. 

#include<iostream>
using namespace std;

template<typename T>

T average(T a, T b) {
    return (a + b)/2.0;
}

template<typename T>

T multiplication(T a, T b) {
    return a * b;
}

int main()
{
    int x;
    int y;
    cout << "Enter x :";
    cin >> x;
    cout << "Enter y :";
    cin >> y;
    cout << "================================================" << endl;
    cout << "Average of " << x << " and " << y << " is " << average(x,y) << "." << endl;
    cout << "Multiplication of " << x << " and " << y << " is " << multiplication(x,y) << "." << endl;
    cout << "================================================" << endl;
    return 0;
}