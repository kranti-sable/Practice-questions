#include<iostream>
using namespace std;
class Employee{
    protected:
    double salary;
    public:
    string name;
    Employee(double salary,string name){
        this->salary = salary;
        this->name = name;
    }
    virtual void work(){
        cout<<"Employee is working"<<endl;
    }

};
class Developer: public Employee{
    public:
    string favlanguage;
    Developer(double salary,string name,string lang):Employee(salary, name){
        favlanguage=lang;
    }
    void work()override{
       cout << name << " is writing " << favlanguage << " code" << endl; 
    }

};
int main() {
    Developer dev(60000.0, "Kranti", "C++");
    dev.work();

    // Demonstrating runtime polymorphism using a base pointer
    Employee* empPtr = &dev;
    empPtr->work();

    return 0;
}