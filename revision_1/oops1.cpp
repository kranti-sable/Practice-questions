#include<iostream>
using namespace std;
class BankAccount{
private:
    double balance;
public:
    string AccHolder;
    BankAccount(string name,double startBalance){
       AccHolder=name;
       balance = startBalance;
       cout<<"parameter constructor"<<endl; 
    }
    void deposit(double amount){
         balance+=amount;
        } 
    double getBalance(){
           return balance; 
        }
    BankAccount(const BankAccount &original){
        AccHolder=original.AccHolder;
        balance=original.balance;
        cout<<"copy constructor"<<endl;
    }
    ~BankAccount() {
    cout << "Destructor called: Account for " << AccHolder << " closed." << endl;
}
};
int main(){
    BankAccount b1("Kranti",50000.0);
    b1.deposit(15000.0);
    BankAccount b2 = b1;
cout << "b2 Holder: " << b2.AccHolder << endl;
cout << "b2 Balance: " << b2.getBalance() << endl;
}