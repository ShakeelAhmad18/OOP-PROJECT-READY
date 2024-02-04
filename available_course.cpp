#include "available_course.h"
#include <iostream>
using namespace std;
void available_course::a_course()
{
    cout << "\n\n\t\t\t\t\t\t*********( Available course )*********\n"
         << endl;
    cout << "\t\t\t\t1.FSc Pre-enginnering" << endl;
    cout << "\t\t\t\t2.Pre-Medical" << endl;
    cout << "\t\t\t\t3.ICs" << endl;
    cout << "\t\t\t\t4.F.A" << endl;
    cout << "\t\t\t\t5.I.com" << endl;
    cout << "\t\t\t\t=====================" << endl;
    cout << "ENTER OPTION:" << endl;
    cin >> option1;
}
int available_course::option1;