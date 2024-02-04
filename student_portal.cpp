#include <iostream>
#include "student_portal.h"
using namespace std;
void student_portal::dispaly()
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
void student_portal::seen()
{
    cout << "\n\n\t\t\t\t\t==========================================" << endl;
    cout << "\t\t\t\t\t       UPLOAD MARTERIAL FOR STUDENT        " << endl;
    cout << "\t\t\t\t\t==========================================\n" << endl;
    cout << "\t\t\tAssignments for students: " << assignments << endl;
    cout << "\t\t\tQuiz for students :" << quiz << endl;
    cout << "\t\t\tMid Marks :" << mid_marks << endl;
    cout << "\t\t\tFinal Marks :" << final_marks << endl;
    cout << "\t\t\tLecture Slides :" << lecture_slide << endl;
}

void student_portal::fee()
{
    cout << "\n\n   \t\t\t\t\t===============================" << endl;
    cout << "   \t\t\t\t\t ||*  STUDENT FEE VOCHER  *||" << endl;
    cout << "   \t\t\t\t\t===============================\n" << endl;
    cout << "\t\t\tSTUDENT NAME: " << s_name << endl;
    cout << "\t\t\tFATHER NAME: " << f_name << endl;
    cout << "\t\t\tREGISTERATION NO.: " << r_no << endl;
    cout << "\t\t\tFEE AMOUNT: " << fee_amount << endl;
    cout << "\t\t\tISSUSE DATE: " << d1 << "-" << m1 << "-" << y1 << endl;
    cout << "\t\t\tLAST DATE TO SUBMIT FEE: " << d2 << "-" << m2 << "-" << y2 << endl;
}