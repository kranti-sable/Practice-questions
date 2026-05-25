#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(int r,int i){
    real=r;
    img=i;
    }
    void showresult(){
        cout<<"("<<real<<")"<<"-"<<"("<<img<<"i"<<")"<<endl;
    }
    void operator -(Complex &c2){
        int resReal=this->real-c2.real;
        int resImg=this->img-c2.img;
        Complex c3(resReal,resImg);
        cout<<"result=";
        c3.showresult();
    }
};
int main(){
    Complex c1(3,2);
    Complex c2(2,1);
    c1.showresult();
    c2.showresult();
    c1-c2;
}