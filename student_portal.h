#pragma once
#include "admission_portal.h"
#include "teacher_portal.h"
#include "admin.h"
class student_portal: virtual public  admission_portal,virtual public teacher_portal, virtual public Admin
{
   public:
   void dispaly();
   void seen();
   void fee();
};
