#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
    complex(int a=0,int b=0){
        real=a;
        imaginary=b;
    }
    //complex(){}
    complex operator +(complex obj){
        complex obj1;
        obj1.real=this->real*obj.real;
        obj1.imaginary=imaginary*obj.imaginary;
        return obj1;
    }
    void getdata(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

int main(){
    complex a(1,2),b(4,7);
    complex c= a+b;
    c.getdata();
    
    
    return 0;
}
