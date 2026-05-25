// Q-make bankaccount .
#include<iostream>
using namespace std;
class BankAccount{
    int accountNum;
    int Balance;
    public:
    void setDetails(int accVal,int balVal){
        accountNum=accVal;
        Balance=balVal;
    }
    void deposit(int amount){
        Balance=Balance+amount;
    }
    void withdraw(int amount){
        Balance=Balance-amount;
    }
    int getBalance(){
        return Balance;
    }
};
int main(){
    BankAccount ba1;
    ba1.setDetails(382724,1000);
    ba1.deposit(500);
    ba1.withdraw(1000);
    cout<<"Balance:"<<ba1.getBalance()<<endl;
    return 0;
}