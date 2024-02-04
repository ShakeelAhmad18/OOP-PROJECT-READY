#pragma once
#include "admission_portal.h"
#include "teacher_portal.h"
using namespace std;
class sign_up:virtual public admission_portal,virtual public teacher_portal
{
    public:
    string password;
    string Email;
     void data();
 };
 