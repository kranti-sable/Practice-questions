#include<iostream>
using namespace std;
void maxsubarraysum(int arr[],int size){
    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < size; i++) {
        currsum += arr[i];
        maxsum = max(maxsum, currsum);

        if (currsum < 0) {
            currsum = 0;
        }
    }
  cout << maxsum << endl;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=9;
    maxsubarraysum(arr,size);
    return 0;
}