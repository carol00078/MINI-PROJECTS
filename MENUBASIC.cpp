           //RESTURANT MENU
#include <iostream>
using namespace std;

int main(){
int select,qt;
float total=0;
do{
cout<<"-------------------------"<<endl;
cout<<"---MENU FOR RESTURANT-----"<<endl;
cout<<"-------------------------"<<endl;
cout<<"--BURGER   | PIZZA     --"<<endl;
cout<<"--  1      |   2       --"<<endl;
cout<<"-- (300)   |  (550)    --"<<endl;
cout<<"-------------------------"<<endl;
cout<<"--PEPSI    |  FRIES    --"<<endl;
cout<<"--  3      |   4       --"<<endl;
cout<<"-- (150)   |   (200)  --"<<endl;
cout<<"-------------------------"<<endl;
cout<<"-- TOTAL   |  EXIT     --"<<endl;
cout<<"--  BILL   |           --"<<endl;
cout<<"--  5      |    6      --"<<endl;
cout<<"-------------------------"<<endl;
cout<<"ENTER ITEM: "<<endl;
cin>>select;

switch (select)
{
case 1:
    cout<<"ENTER QUANTITY NO: "<<endl;
    cin>>qt;
    total +=300*qt;
    break;
case 2:
    cout<<"ENTER QUANTITY NO: "<<endl;
    cin>>qt;
    total +=550*qt;
    break;
case 3:
    cout<<"ENTER QUANTITY NO: "<<endl;
    cin>>qt;
    total +=150*qt;
    break;
case 4:
    cout<<"ENTER QUANTITY NO: "<<endl;
    cin>>qt;
    total +=200*qt;
    break;
    
 case 5:
    //system ("cls");
    cout<<"TOTAL BILL: "<<total<<endl;
    return 0;
default:
   cout<<"INVAID!!"<<endl;
    break;
}

}

while (select != 6);

return 0;
}           