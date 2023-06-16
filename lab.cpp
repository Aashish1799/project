#include<iostream>
using namespace std;

class BankAccount{
    int balance;
    public:
    BankAccount(){
        balance=0;
    }
    void setdata(int d){
        balance+=d;
    }
    void getdata(){
        cout<<balance<<endl;
    }
    friend void withdraw(BankAccount&,int);
};
void withdraw(BankAccount &b,int m){
    if(b.balance<=m){
        cout<<"Withdraw limit exceeded"<<endl;
    }
    else{
        b.balance=b.balance-m;
    }
}

int main(){
    BankAccount holder1;
    
    holder1.setdata(1000);
    withdraw(holder1,500);
    holder1.getdata();

    holder1.setdata(1000);
    withdraw(holder1,1500);
    holder1.getdata();
    return 0;
}