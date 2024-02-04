#pragma once
#include "admission_portal.h"
#include "teacher_portal.h"
class Admin : virtual public admission_portal, virtual public teacher_portal
{
protected:
  static string r_no;
  static int fee_amount;
  static string d1;
  static string m1;
  static string y1;
  static string d2;
  static string m2;
  static string y2;
  int option4;
  int option5;
  int option6;

public:
  void input();
  void upload_fee();
  void dispaly();
};
