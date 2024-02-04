#include "sign_up.h"
#include "available_course.h"
#include "student_portal.h"
#include "attendance_portal.h"
#include "admin.h"
#include "college.h"
#include <iostream>
using namespace std;
void intermedaite_fun(admission_portal *a1)
{
    a1->dispaly();
}
void intermediate_fun1(teacher_portal *q)
{
    q->display1();
}

 college::college()
{
      
    int option2;
    int option;
    while (true)
    {
        cout << endl;
        cout << "==========================================================================================================================" << endl;
        cout << "               ***********************|          COLLEGE MANAGEMENT SYSTEM          |***********************" << endl;
        cout << "==========================================================================================================================\n\n"
             << endl;
        cout << "\t\t\t\t\t\t1.Student Portal" << endl;
        cout << "\t\t\t\t\t\t2.Teacher Portal" << endl;
        cout << "\t\t\t\t\t\t3.Admin Portal" << endl;
        cout << "\t\t\t\t\t\t4.Admission Portal" << endl;
        cout << "\t\t\t\t\t\t5.EXIT" << endl;
        cout << "_" << endl;
        cout << "Select Option (1-5):" << endl;
        cin >> option;
        if (option == 4)
        {
            available_course obj2;
            admission_portal o;
            sign_up ob;
            ob.data();
            o.s_data();
            obj2.a_course();
            admission_portal *obj4 = &o;
            intermedaite_fun(obj4);
        }
        if (option == 2)
        {
            teacher_portal obj1;
            sign_up ob1;
            ob1.data();
            obj1.t_data();
            obj1.upload();
            obj1.display1();
            obj1.seen();
            Attendence_Portal q;
            cout << "\n\n   \t\t\t\t\t\tTake attenendence?" << endl;
            cout << "   \t\t\t\t\t\t==================\n"
                 << endl;
            cout << "\t\t\t\t 1.YES                             2.NO" << endl;
            cout << "_" << endl;
            cout << "Select option(1-2)" << endl;
            cin >> option2;
            switch (option2)
            {
            case 2:
                break;
            case 1:
                q.set_attendence();
                q.get_attendence();
            default:
                break;
            }
        }
        if (option == 5)
        {
            break;
        }
        if (option == 1)
        {
            sign_up u;
            u.data();
            student_portal t;
            student_portal *obj3 = &t;
            intermedaite_fun(obj3);
            t.seen();
            t.fee();
        }
        if (option == 3)
        {
            Admin a;
            sign_up q;
            q.data();
            a.input();
            Admin *obj5 = &a;
            intermediate_fun1(obj5);
            intermedaite_fun(obj5);
            Attendence_Portal l;
            l.get_attendence();
            a.upload_fee();
        }
    }
}