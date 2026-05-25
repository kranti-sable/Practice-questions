//Q print student detailes
#include<iostream>
#include<string>
using namespace std;
class Person {
    public:
    string name;
    int age;
    Person(string n,int a){
        name=n;
        age=a;
    }
};
class Student:public Person{
    public:
    string studentID;
    Student(string n,int a,string stdID): Person(n,a){
         studentID=stdID;
    }
    void dispalyStudntInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"StudentID:"<<studentID<<endl;
    }
};
int main(){
    Student student("Alice",20,"ab28374");
    student.dispalyStudntInfo();
    return 0;
}