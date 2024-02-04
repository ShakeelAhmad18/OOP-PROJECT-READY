#include "admission_portal.h"
#include <iostream>
using namespace std;
void admission_portal::s_data()
{
    cout << "\t\t\t\t\t  ======================================" << endl;
    cout << "\t\t\t\t\t      WELCOME TO ADMISSION PORTAL   " << endl;
    cout << "\t\t\t\t\t  ======================================" << endl;
    cout << endl;
    cout << "ENTER NAME:" << endl;
    cin >> s_name;
    cout << "ENTER 13 digit CNIC:" << endl;
    cin >> s_cnic;
    cout << "ENTER DATE OF BIRTH (MM/DD/YY):" << endl;
    cin >> m;
    cin >> d;
    cin >> y;
    cout << "ENTER FAHTER NAME:" << endl;
    cin >> f_name;
    cout << "ENTER FATHER CNIC:" << endl;
    cin >> f_cnic;
    cout << "ENTER ADDRESS:" << endl;
    cin >> address;
    cout << "ENTER BOARD NAME:" << endl;
    cin >> e_board;
    cout << "ENTER MATRIC ROLL NUMBER:" << endl;
    cin >> f_rollno;
    cout << "ENTER MARKS:" << endl;
    cin >> marks;
}
void admission_portal::dispaly()
{
    cout << "\n\n\t\t\t\t\t====================================================" << endl;
    cout << "    \t\t\t\t\t     **********(  Student Details  )**********"
         << endl;
    cout << "\t\t\t\t\t====================================================\n"
         << endl;
    cout << "\t\t\tNAME:" << s_name << endl;
    cout << "\t\t\tCNIC:" << s_cnic << endl;
    cout << "\t\t\tDATE OF BIRTH:" << m << "/" << d << "/" << y << endl;
    cout << "\t\t\tFATHER NAME:" << f_name << endl;
    cout << "\t\t\tFATHER CNIC:" << f_cnic << endl;
    cout << "\t\t\tBOARD:" << e_board << endl;
    cout << "\t\t\tMARKS:" << marks << endl;
    per = marks / 1100 * 100;
    cout << "\t\t\tPERCENTAGE:" << per << endl;
    if (option1 == 1)
    {

        cout << "\n\n\t\t\t\t************( you are register for pre-engineering )************\n"
             << endl;
        cout << "\t\tyour courses are:" << endl;
        cout << "\t\t\tEnglish" << endl;
        cout << "\t\t\tUrdu" << endl;
        cout << "\t\t\tMath" << endl;
        cout << "\t\t\tIslamiyat" << endl;
        cout << "\t\t\tChemistry" << endl;
        cout << "\t\t\tPhysics" << endl;
    }
    if (option1 == 2)
    {

        cout << "\n\n\t\t\t\t************( you are register for pre-medical )************\n"
             << endl;
        cout << "\t\tyour courses are:" << endl;
        cout << "\t\t\tEnglish" << endl;
        cout << "\t\t\tUrdu" << endl;
        cout << "\t\t\tBiology" << endl;
        cout << "\t\t\tIslamiyat" << endl;
        cout << "\t\t\tChemistry" << endl;
        cout << "\t\t\tPhysics" << endl;
    }
    if (option1 == 3)
    {

        cout << "\n\n\t\t\t\t************( you are register for ICS )***********\n"
             << endl;
        cout << "\t\tyour courses are:" << endl;
        cout << "\t\t\tEnglish" << endl;
        cout << "\t\t\tUrdu" << endl;
        cout << "\t\t\tMath" << endl;
        cout << "\t\t\tIslamiyat" << endl;
        cout << "\t\t\tComputer" << endl;
        cout << "\t\t\tPhysics" << endl;
    }
    if (option1 == 4)
    {

        cout << "\n\n\t\t\t\t************( you are register for F.A )************\n"
             << endl;
        cout << "\t\tyour courses are:" << endl;
        cout << "\t\t\tEnglish" << endl;
        cout << "\t\t\tUrdu" << endl;
        cout << "\t\t\tG.Math" << endl;
        cout << "\t\t\tIslamiyat" << endl;
        cout << "\t\t\tEconomics" << endl;
        cout << "\t\t\tStatics" << endl;
    }
    if (option1 == 5)
    {

        cout << "\n\n\t\t\t\t************( you are register for I.com )************\n"
             << endl;
        cout << "\t\tyour courses are:" << endl;
        cout << "\t\t\tEnglish" << endl;
        cout << "\t\t\tUrdu" << endl;
        cout << "\t\t\tGenral Math" << endl;
        cout << "\t\t\tIslamiyat" << endl;
        cout << "\t\t\tCivics" << endl;
        cout << "\t\t\tEducation" << endl;
    }
    else
    {
        cout << "" << endl;
    }
}

string admission_portal::address;
string admission_portal::s_mail;
string admission_portal::s_name;
string admission_portal::f_cnic;
string admission_portal::f_name;
string admission_portal::f_rollno;
string admission_portal::e_board;
string admission_portal::password;
string admission_portal::s_cnic;

float admission_portal::marks;
float admission_portal::per;

int admission_portal::m;
int admission_portal::d;
int admission_portal::y;