#include <iostream>
using namespace std;
void findMinMax(int arr[], int size){
      int minVal=arr[0],maxVal=arr[0];
    for(int i=1;i<size;i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    cout<<"Max value is "<<maxVal<<endl;
    cout<<"Min value is "<<minVal<<endl;
}
int main(){
    int arr[] = {22, 14, 8, 65, 3, 90};
    int size=6;
    findMinMax(arr,size);
    
}