#pragma once
#include<string>
#include "student_portal.h"
using namespace std;
class Attendence_Portal:virtual public student_portal
{
  protected:
    string  clg_ID;
    public:
    void set_attendence();
    void get_attendence();
};