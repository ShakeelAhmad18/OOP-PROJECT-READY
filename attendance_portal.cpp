#include "attendance_portal.h"
#include <iostream>
void Attendence_Portal::set_attendence()
{
    cout << "Enter the name of the student: " << endl;
    cin >> s_name;
    cout << "Enter the college ID of the student: " << endl;
    cin >> clg_ID;
}
void Attendence_Portal::get_attendence()
{
    cout<<"\n\n\t\t\t\t\t-------------(  Student Attendence  )------------\n"<<endl;
    cout << "\t\t\tName of student: " << s_name << endl;
    cout << "\t\t\tStudent ID: " << clg_ID << endl;
}