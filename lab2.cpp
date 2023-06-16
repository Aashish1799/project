#include<iostream>
using namespace std;

class Stack{
    int arr[100],pop,push,ind,ind1;
    public:
    Stack(){
        arr[100]={0};
        pop=0,push=0,ind=0,ind1=0;
    }
    void Push(int p);
    int Pop();

};
void Stack::Push(int p){
    arr[ind++]=p;
    ind1=ind-1;
}
int Stack::Pop(){
    if(ind1<0){
        cout<<"Stack is empty.Cannot pop element"<<endl;
        exit(0);
    }
    else{
        int m=arr[ind1];
        arr[ind1--]=-10000000;
        ind=ind1+1;
        return m;
    }
    
    int m=arr[--ind];
    arr[ind--]=-1000000;
    return m;
}


int main(){
    Stack op;
    while(true){
        int choice,val;
        cout<<"Stack Operations:"<<endl;
        cout<<"1.PUSH"<<endl;
        cout<<"2.POP"<<endl;
        cout<<"3.EXIT"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        if(choice==1){
            cout<<"Enter element to push:";
            cin>>val;
            op.Push(val);
            cout<<"Pushed element: "<<val<<endl;
        }
        else if(choice==2){
            cout<<"Popped element: "<<op.Pop()<<endl;
        }
        else{
            exit(0);
        }

    }
}
