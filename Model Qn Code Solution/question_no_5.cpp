/*Create a class called lecturer that stores ID, and the name of the lecturers. From this 
class derive two classes part-time which adds pay_per_hr and fulltime which adds 
pay_per_month. Each of these three classes should have function readdata( ) to get its 
data from the user’s keyword and display the data with printdata( ). Write a program 
to create object of class fulltime and parttime and member function to read and display 
data.*/

#include<iostream>
using namespace std;


class Lecturer {
    int id;
    char name[40];
        public:
            void readdata(){
                cout << "Enter ID :";
                cin >> id;
                cout << "Enter name :";
                cin >> name;
            }
            void printdata(){
                cout << "ID: " << id << endl;
                cout << "Name: " << name << endl;
            }
};

class PartTime : public Lecturer {
    double pay_per_hr;
    public:
        void readdata() {
            Lecturer::readdata();
            cout << "Enter pay per hour :";
            cin >> pay_per_hr;
        }
        void printdata(){
            Lecturer::printdata();
            cout << "Pay Per Hour :" << pay_per_hr << endl;
        }
};

class FullTime : public Lecturer {
    double pay_per_month;
     public:
        void readdata() {
            Lecturer::readdata();
            cout << "Enter pay per month :";
            cin >> pay_per_month;
        }
        void printdata(){
            Lecturer::printdata();
            cout << "Pay Per Month :" << pay_per_month << endl;
        }
};

int main() {   
    PartTime p;
    FullTime f;

    cout << "Enter details of part time lecturer :" << endl;
    cout << "==================================" << endl;
    p.readdata();

    system("cls");

    cout << "\n\nEnter details of full time lecturer :" << endl;
    cout << "==================================" << endl;
    f.readdata();

    system("cls");

    cout << "Details of part time lecturer :" << endl;
    cout << "==================================" << endl;
    p.printdata();
    cout << "==================================" << endl;

    cout << "\n\nDetails of full time lecturer :" << endl;
    cout << "==================================" << endl;
    f.printdata();
    cout << "==================================" << endl;

    return 0;
}