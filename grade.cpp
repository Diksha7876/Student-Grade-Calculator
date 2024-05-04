#include <iostream>
using namespace std;

// Created a structure Student
struct Student
{
    string name;                
    float id;
    double marks, mark2;
};

int main()
{
    const int totalStudents = 15;                // Let, we have 15 number of students in our class
    Student students[totalStudents];
    int numstudent = 0;
    int sum = 0, avg;

    while (numstudent < totalStudents)
    {
        cout << "Enter the name of student " << numstudent + 1 << ": ";          
        cin >> students[numstudent].name;                                       // Take the name of student for user
        cout << "Enter the id : ";
        cin >> students[numstudent].id;                                         // Take student's id from user
        cout << "Enter the marks : "<<endl;           
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ":";
            cin >> students[numstudent].marks;                                  // Taking student's marks of each subject from user
            sum += students[numstudent].marks;                                  // It will sum the marks objected in all subjects
        }
        cout << "Enter Marks obtained in Assignment: ";
        cin >> students[numstudent].mark2;                                      // Taking marks of student obtained in assignment 
        sum += students[numstudent].mark2;
        avg = sum / 6;                                                          // Doing Average 
        cout << "\nGrade Obtained= ";                                           // Providing grades according to marks obtained
        if (avg >= 91 && avg <= 100)
            cout << "A+"<<endl<<"Excellent";
        else if (avg >= 81 && avg < 91)
            cout << "A"<<endl<<"Very Good";
        else if (avg >= 71 && avg < 81)
            cout << "B+"<<endl<<"Good";
        else if (avg >= 61 && avg < 71)
            cout << "B"<<endl<<"Work lil hard";
        else if (avg >= 51 && avg < 61)
            cout << "C+"<<endl<<"Poor";
        else if (avg >= 41 && avg < 51)
            cout << "C"<<endl<<"Very Poor";
        else if (avg >= 33 && avg < 41)
            cout << "D"<<endl<<"Need to improve youself";
        else if (avg >= 21 && avg < 33)
            cout << "E"<<endl<<"Need to work hard";
        else
            cout << "F"<<endl<<"Fail !!";

        cout<<endl;

        numstudent++; 
        
        char verify;                                                               // It will ask the user if you want to find grades of multiple students or not
        cout<<"Do you want to input data for another student ? (y/n): ";
        cin>>verify;
        if(verify!='y')
        {
            break;
        }
    }
    return 0;
}