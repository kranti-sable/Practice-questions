/*Q--Enter the cost of 3 items from the user (using float data type)a pencil,
,pen and eraser you have to output the total cost of the items as 
their bill (you can add 18% GST tax)*/

#include <iostream>
using namespace std;
int main(){
    float pencil=5,pen=10,eraser=20;
    int sum =pencil+pen+eraser;
    cout<<"Bill of total price:"<<sum<<endl;
    cout<<"Bill with GST:"<<(sum+(0.18*sum))<<endl;
    return 0;
}