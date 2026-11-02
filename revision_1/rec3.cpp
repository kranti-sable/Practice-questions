#include<iostream>
using namespace std;
int tilingProblem(int n){
    if(n==0||n==1){
        return 1;
    }
    int way1=tilingProblem(n-1);
    int way2=tilingProblem(n-2);
    return way1+way2;
}
int main(){
    cout<<"Tiling (4):"<<tilingProblem(4)<<endl;
}