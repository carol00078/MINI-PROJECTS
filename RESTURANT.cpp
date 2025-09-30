#include <iostream>
using namespace std;
int main(){
    int select,price;
    int qty;
    float bill=0,total;
    do{
  cout<<"-------------------------------"<<endl;
   cout<<"---     CPP RESTAURANT     ---"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"--     BURGER  |  PIZZA     --"<<endl;
   cout<<"--       (1)   |  (2)       --"<<endl;
   cout<<"--      200$   |  500$      --"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"--     FRIES   |  PEPSI     --"<<endl;
   cout<<"--      (3)    |   (4)      --"<<endl;
   cout<<"--      100$   |    80$     --"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"--     VIEW    |  EXIT      --"<<endl;
   cout<<"--      (5)    |   (6)      --"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"SELECT: ";
   cin>>select;
   if (select==1 )
   {
    price=200;
    cout<<"ENTER QTY: ";
    cin>>qty;
    bill=price*qty;
    total+=bill;
    cout<<"BILL IS: "<<bill<<"(PKR)"<<endl;
   }
   else if (select==2)
   {
    price=500;
    cout<<"ENTER QTY: ";
    cin>>qty;
    bill=price*qty;
    total +=bill;
    cout<<"BILL IS: "<<bill<<"(PKR)"<<endl;
   }
   else if (select==3)
   {
    price=100;
    cout<<"ENTER QTY: ";
    cin>>qty;
    bill=price*qty;
    total +=bill;
    cout<<"BILL IS: "<<bill<<"(PKR)"<<endl;
   }
   else if (select==4)
   {
    price=80;
    cout<<"ENTER QTY: ";
    cin>>qty;
    bill=price*qty;
    total +=bill;
    cout<<"BILL IS: "<<bill<<" (PKR)"<<endl;
   }
   else if (select==5)
   {
    cout<<"TOTAL: "<<total<<endl;
   }
   
   else { cout<<"INVALID\n";}
}
while (select!=6);

return 0;
}