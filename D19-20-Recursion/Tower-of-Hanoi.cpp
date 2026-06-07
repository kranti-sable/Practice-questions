//Q--TOWER OF HANOI 
#include<iostream>
using namespace std;
void hanoi(int n,char sou,char help,char dest){
    if(n==0){
        return ;
    }
    hanoi(n-1,sou,dest,help);
    cout<<"move disk "<<n<<" from "<<sou<<" to "<<dest<<endl;
    hanoi(n-1,help, sou,dest);

}
int main(){
    hanoi(3,'A','B','C');
}