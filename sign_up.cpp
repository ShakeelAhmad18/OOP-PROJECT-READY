#include "sign_up.h"
#include<iostream>
using namespace std;
void sign_up::data()
{
       {
   cout<<endl;
   cout<<"\t\t\t    ------------************(       SIGN UP       )************------------ "<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"ENTER EMAIL-ID:"<<endl;
   cin>>Email;
    while (true)
        {
            cout << "ENTER 6-Digit PASSWORD:" << endl;
            cin >> password;
            if (password.length() >= 6)
            {
                cout<<"\n\n"<<endl;
                cout<<"\t\t\t\t\t   **---YOU  ARE SUCESSFULLY  SIGN UP--**"<<endl;
                cout<<"\n\n"<<endl;
                break;
            }
            else
            {
                cout << "PLEASE ENTER 6 DIGIT PASSWORD!!!" << endl;
            }
        }
    }
}
