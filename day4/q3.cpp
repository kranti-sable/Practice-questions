/* write a program that takes a year from the user and print wether that year is a leap year or not 
hint: a leap year is exacty divisible by 4 except for century year (years ending with 00)
the century year is leap year only if it is perfecty divisiable by 400.*/
#include<iostream>
using namespace std;
int main(){
    int year=1600;
    if ((year%4==0) && (year%400==0)){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not leap year"<<endl;
    }
    return 0;
}