/*Write a class student with roll, name, address, marks 
as member variables. Use a member function to write record of students in a binary 
file and another member function to read records from file. Write a program to search 
a specific record of student using roll number as key from user input. */
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

class Student {
    int roll;
    char address[20];
    float marks;
        public:
            void getData() {
                cout << "Enter roll :" << endl;
                cin >> roll;
                cout << "Enter Address :" << endl;
                cin >> address;
                cout << "Enter marks :" << endl;
                cin >> marks;
            }
            void showData() {
                cout << "==============================" << endl;
                cout << "Roll : " << roll << endl;
                cout << "Address : " << address << endl;
                cout << "Marks : " << marks << endl;
                cout << "==============================" << endl;

            }

            void writeRecords() {
                fstream file;
                file.open("student.bin",ios::app | ios::out | ios::binary);
                getData();
                file.write(reinterpret_cast<char *>(this),sizeof(*this));
                file.close();
            }

            void readRecords() {
                int rollno;
                cout << "Enter a desired roll number :";
                cin >> rollno;
                fstream file;
                file.open("student.bin",ios::in|ios::binary);
                while (file.read(reinterpret_cast<char *>(this),sizeof(*this)))
                {
                    if(roll==rollno) {
                    showData();
                }
                }
                file.close();
            }

};
int main()
{
    Student s;
    
    int choice;

    while (true)
    {
        cout << "1.Add Student Details\n2.View Student Details\n3.Exit\nEnter your choice :";
        cin >> choice;
        
        switch(choice) {
            case 1:
                system("cls");
                s.writeRecords();
                cout << "Press any key to continue......"<<endl;
                getch();
                system("cls");
                break;
            case 2:
                system("cls");
                s.readRecords();
                cout << "Press any key to continue......"<<endl;
                getch();
                system("cls");
                break;
            case 3:
                cout << "Exiting......." ;
                return 0;
            default:
                cerr << "Invailid Choice.";
        }
    }
    return 0;
}