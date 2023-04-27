// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Employee{
    public:
        int salary;
        int work_hours;
        int getinfo(){
            cin>>salary;
            cin>>work_hours;
            cout<<"The salary is "<<salary<<endl;
            cout<<"The work hours is "<<work_hours<<endl;
            return 0;
        }
        int Addsal(int salary){
            if(salary<500){
                return salary+10;
            }
            else{
                return salary;
            }
        }
        int Addwork(int work_hours){
            if(work_hours>6){
                return salary+5;
            }
            else{
                return salary;
            }
        }
}e;
int main() {
    e.getinfo();
    e.salary=e.Addsal(e.salary);
    e.salary=e.Addwork(e.work_hours);
    cout<<"The final salary is "<<e.salary;
    return 0;
}
