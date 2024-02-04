#pragma once
#include <string>
using namespace std;
class teacher_portal
{
protected:
    static string t_name, t_cnic;
    static string t_id;
    static string t_mail;
    static string address;
    static string t_scale;
    static string t_edu;
    static string day, year, month;
    static string password;
    static string assignments, quiz, lecture_slide;
    static int final_marks, mid_marks;
    int option3;

public:
    void t_data();
    void upload();
    virtual void display1();
    void seen();
};
