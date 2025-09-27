#include <iostream>
#include <vector>
using namespace std;
class student{
    public:
    string name,subject,fathername;
    int rollno, marks;
    void add();
    void show();
    void search();  
};
void student::add(){
    cout<<"ENTER NAME: ";
    cin>>name;
    cout<<"ENTER ROLLNO: ";
    cin>>rollno;
    cout<<"ENTER FATHER NAME: ";
    cin>>fathername;
    cout<<"ENTER SUBJECT: ";
    cin>>subject;
    cout<<"ENTER MARKS: ";
    cin>>marks;
}

void student::show(){
    cout<<"-------------------------"<<endl;
    cout<<"|"<<"STUDENT NAME: "<<name<<endl;
    cout<<"|"<<"FATHER  NAME: "<<fathername<<endl;
    cout<<"|"<<"ROLL NO: "<<     rollno<<endl;
    cout<<"|"<<"SUBJECT: "<<     subject<<endl;
    cout<<"|"<<"SUBJECT MARKS: "<<marks<<endl;
    cout<<"------------------------"<<endl;
}

void student::search(){
    int r;
    cout<<"ENTER ROLLNO: ";
    cin>>r;
    if (r== rollno)
    {
    cout<<"----------------------------"<<endl;    
    cout<<"-------STUDENT DETAILS------"<<endl;    
    cout<<"-------------------------"<<endl;
    cout<<"|"<<"STUDENT NAME: "<<name<<endl;
    cout<<"|"<<"FATHER  NAME: "<<fathername<<endl;
    cout<<"|"<<"ROLL NO: "<<     rollno<<endl;
    cout<<"|"<<"SUBJECT: "<<     subject<<endl;
    cout<<"|"<<"SUBJECT MARKS: "<<marks<<endl;
    cout<<"------------------------"<<endl;
}
  else { cout<<"NOT FOUND";}  
}
int main(){
int select;
vector<student>sms;
do{
cout<<"------------------------------"<<endl;
cout<<"-----STUDENT MANAGEMENT-------"<<endl;
cout<<"------------------------------"<<endl;    
cout<<"--  01  REGISTER STUDENT    --"<<endl;
cout<<"--  02  DISPLAY STUDENTS    --"<<endl;
cout<<"--  03  SEARCH STUDENT      --"<<endl;
cout<<"------------------------------"<<endl;
cout<<"ENTER OPTION "<<endl;
cin>>select;
 system("cls");
switch (select)
{
case 1:{
    student t;
    t.add();
    sms.push_back(t);
    break;
}
case 2:{
    if (sms.empty())
    {
        cout<<"NO ENTRY MADE\n";
    }
    else {
        for (auto& a :sms)
        {
            a.show();
        }   
    }
    break;}
case 3:{
     if (sms.empty())
    {
        cout<<"NO ENTRY MADE\n";
    }
    else {
        for (auto& a :sms)
        {
            a.search();
        }   
    break;
}
default:
    cout<<"INVALID\n";
    break;
}
}
}
while (select !=4);
return 0;
}