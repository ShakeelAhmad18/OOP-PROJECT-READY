#pragma once
#include <string>
#include "available_course.h"
using namespace std;
class admission_portal:virtual public available_course
{
protected:
  static string s_mail, password, s_name, f_name;
  static string s_cnic, f_cnic, address, e_board, f_rollno;
  static float marks, per;
  static int m, d, y;
public:
  virtual void s_data();
  virtual void dispaly();
};
