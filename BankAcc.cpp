#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
using namespace std;
static float c_balance=0;
class bankacc{
private:
 int a_num;
 string a_type;
 float i_balance;
 string d_name;
 const int PIN=1254;
 public:
bankacc(){
    //default constructor
}
bankacc(int b,string at,float ib,string dn){
a_num=b;
a_type=at;
i_balance=ib;
d_name=dn;
}
void setdn(string n){
	d_name=n;	
}
string getdn(){
	return d_name;
}
void displayAccountDetails(){
cout<<"Account number:"<<a_num;
cout<<"\nAccount type:"<<a_type;
cout<<"\nDepositer name:"<<d_name;
cout<<"\nCurrent balance:"<<c_balance;
}
void add(int n){
c_balance=n+i_balance;
}
void deposit(){
long int deposit;
int z;
cout<<"\nENTER THE AMOUNT TO DEPOSIT:";
cin>>deposit;
local1:
cout<<"\nEnter the pin to verify:";
cin>>z;
if(z==PIN){
    c_balance = i_balance + deposit;
    cout<<"\nNow the bank balane is:"<<c_balance;}
    else{
    cout<<"\nWrong pin:(\nPlease enter the pin again:";
    goto local1;
}

}
void withdrawal(){
long int w_draw;
int z;
cout<<"ENTER THE AMOUNT TO WITHDRAW:";
cin>>w_draw;
local2:
cout<<"\nEnter the pin to verify:";
cin>>z;
if(z==PIN){
if(w_draw>i_balance){
cout<<"\nNOT ENOUGH AMOUNT IS PRESENT IN THE ACCOUNT";
}
else{
     c_balance= i_balance-w_draw;}}
     else{
        cout<<"Wrong pin:(\nPlease enter the pin again:";
        goto local2;
    }
}};
int main(){
int c,ib,anum,add,d;
string dname,atype,n;
cout<<"Account type:";
cin>>atype;
cout<<"Enter account number:";
cin>>anum;
cout<<"Enter inital balance:";
cin>>ib;
bankacc b1;
bankacc b(anum,atype,ib,dname);

do{
   cout<<"Enter\n 1 to display\n2- To add\n3- To deposit\n4- To withdraw";
cin>>c;
switch(c)
{
case 1:
b.displayAccountDetails();
break;
case 2:
cout<<"Enter the amount to add in the initial balance:";
cin>>add;
b.add(add);
break;
case 3:
cout<<"Depositer name:";
cin>>dname;
b.setdn(dname);
b.getdn();
b.deposit();
    break;
case 4:
b.withdrawal();
break;
}
   cout<<"\nDo you want to see information.\nEnter 1 to yes and 0 to terminate.";
   cin>>d;
}while(d==1);
}


