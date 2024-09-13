/*Write a program to read a height of a
person in Feet and Inches and convert it into Meter using class type to class type
conversion method. (1 meter= 3.28084 feet, 1 feet=12 inch.)*/

#include <iostream>

using namespace std;

class Height;

class Meter
{
    float meters;

public:
    Meter()
    {
        meters = 0;
    }

    Meter(float meters)
    {
        this->meters = meters;
    }
    void display()
    {
        cout << "Meters :" << meters << endl;
    }
};
class Height
{
    float feet, inches;

public:
    Height()
    {
        feet = 0;
        inches = 0;
    }
    Height(float feet, float inches)
    {
        this->feet = feet;
        this->inches = inches;
    }
    operator Meter()
    {
        float totalInches = feet * 12 + inches;
        float totalFeet = totalInches / 12;
        float meters = totalFeet / 3.28084;
        return Meter(meters);
    }
};
int main()
{
    float feet, inches;

    cout << "Enter feet :";
    cin >> feet;
    cout << "Enter inches :";
    cin >> inches;

    Height h(feet, inches);

    Meter m;

    m = h;

    m.display();

    return 0;
}