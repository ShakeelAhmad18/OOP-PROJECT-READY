#include "teacher_portal.h"
#include <iostream>
using namespace std;
void teacher_portal::t_data()
{
   cout << "\n\n\t\t\t\t------------*******( Teacher Portal )*******------------\n" << endl;
    cout << endl;
    cout << "ENTER NAME :" << endl;
    cin >> t_name;
    cout << "ENTER ID:" << endl;
    cin >> t_id;
    cout << "ENTER CNIC:" << endl;
    cin >> t_cnic;
    cout << "ENTER SCALE:" << endl;
    cin >> t_scale;
    cout << "ENTER DATE OF BIRTH:(DD/MM/YYYY)" << endl;
    cin >> day;
    cin >> month;
    cin >> year;
    cout << "ENTER EDUCATION:" << endl;
    cin >> t_edu;
}
void teacher_portal::upload()
{
    cout << "\n\n\t\t\t\t==============( Upload material for students )============\n\n"
         << endl;
    cout << "\t\t\t1. Upload Assignment" << endl;
    cout << "\t\t\t2. Upload Quiz" << endl;
    cout << "\t\t\t3. Upload Mid Marks" << endl;
    cout << "\t\t\t4. Upload Final Marks" << endl;
    cout << "\t\t\t5. Upload Lecture's Slide" << endl;
    cout << "Select option(1-5)" << endl;
    cin >> option3;
    switch (option3)
    {
    case 1:
        cout << "upload assignments:" << endl;
        cin >> assignments;
        break;
    case 2:
        cout << "upload quiz:" << endl;
        cin >> quiz;
        break;
    case 3:
        cout << "upload mid marks:" << endl;
        cin >> mid_marks;
        break;
    case 4:
        cout << "upload final marks:" << endl;
        cin >> final_marks;
        break;
    case 5:
        cout << "upload lecture's slide:" << endl;
        cin >> lecture_slide;
        break;
    default:
        break;
    }
}
void teacher_portal::display1()
{
    cout << "\n\n\t\t\t\t------------*******( Teacher Portal )*******------------" << endl;
    cout << "\t\t\t\t________________________________________________________\n\n"
         << endl;
    cout << "\t\t\tNAME:" << t_name << endl;
    cout << "\t\t\tCNIC:" << t_cnic << endl;
    cout << "\t\t\tDATE OF BIRTH:" << day << "/" << month << "/" << year << endl;
    cout << "\t\t\tID:" << t_id << endl;
    cout << "\t\t\tEDUCATION:" << t_edu << endl;
    cout << "\t\t\tSCALE:" << t_scale << endl;
}
void teacher_portal::seen()
{
    cout << "\n\n\t\t\t\t\t==========================================" << endl;
    cout << "\t\t\t\t\t       UPLOAD MARTERIAL FOR STUDENT        " << endl;
    cout << "\t\t\t\t\t==========================================\n\n" << endl;
    cout << "\t\t\t\t\tAssignments for students: " << assignments << endl;
    cout << "\t\t\t\t\tQuiz for students :" << quiz << endl;
    cout << "\t\t\t\t\tMid Marks :" << mid_marks << endl;
    cout << "\t\t\t\t\tFinal Marks :" << final_marks << endl;
    cout << "\t\t\t\t\tLecture Slides :" << lecture_slide << endl;
}

string teacher_portal::t_name;
string teacher_portal::t_id;
string teacher_portal::t_mail;
string teacher_portal::t_cnic;
string teacher_portal::address;
string teacher_portal::t_scale;
string teacher_portal::t_edu;
string teacher_portal::day;
string teacher_portal::year;
string teacher_portal::month;
string teacher_portal::password;

string teacher_portal::assignments;
string teacher_portal::quiz;
string teacher_portal::lecture_slide;
int teacher_portal::mid_marks;
int teacher_portal::final_marks;