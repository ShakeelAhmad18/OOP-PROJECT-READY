#include <iostream>
#include "admin.h"
using namespace std;
void Admin::input()
{
    cout << "\n\t\t\t\t---------*********( UPLOAD FEE VOCHER )*********---------\n"
         << endl;
    cout << "\t\t\t\t\t 1.YES                               2.NO" << endl;
    cout << "_" << endl;
    cout << "Select options(1-2)" << endl;
    cin >> option6;
    if (option6 == 1)
    {
        cout << "Enter the registeration no. of this student: " << endl;
        cin >> r_no;
        cout << "Enter fee amount:" << endl;
        cin >> fee_amount;
        cout << "Enter the fee issuse date: " << endl;
        cin >> d1 >> m1 >> y1;
        cout << "Enter the last date of fee submition: " << endl;
        cin >> d2 >> m2 >> y2;
    }
    else
    {
        cout << "upload after some time" << endl;
    }
}
void Admin::upload_fee()
{
    cout << "\n\n\n\n\t\t\t\t\t===============================" << endl;
    cout << "\t\t\t\t\t ||*  STUDENT FEE VOCHER  *||" << endl;
    cout << "\t\t\t\t\t===============================\n\n"
         << endl;
    cout << "\t\t\tSTUDENT NAME: " << s_name << endl;
    cout << "\t\t\tFATHER NAME: " << f_name << endl;
    cout << "\t\t\tREGISTERATION NO.: " << r_no << endl;
    cout << "\t\t\tFEE AMOUNT: " << fee_amount << endl;
    cout << "\t\t\tISSUSE DATE: " << d1 << "-" << m1 << "-" << y1 << endl;
    cout << "\t\t\tLAST DATE TO SUBMIT FEE: " << d2 << "-" << m2 << "-" << y2 << endl;
}
void Admin::dispaly()
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

        cout << "\n\n\t\t\t\t************( you are register for pre-engineering )************\n" << endl;
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

        cout << "\n\n\t\t\t\t************( you are register for pre-medical )************\n" << endl;
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

        cout << "\n\n\t\t\t\t************( you are register for ICS )***********\n" << endl;
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

        cout << "\n\n\t\t\t\t************( you are register for F.A )************\n" << endl;
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

        cout << "\n\n\t\t\t\t************( you are register for I.com )************\n" << endl;
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

string Admin::r_no;
string Admin::d1;
string Admin::d2;
string Admin::m1;
string Admin::m2;
string Admin::y1;
string Admin::y2;
int Admin::fee_amount;