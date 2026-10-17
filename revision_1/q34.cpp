#include<iostream>
#include<vector>
using namespace std;
bool binSearchRow(vector<int> &row,int target){
    int start=0,end=row.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(row[mid]==target){
            return true;
        }else if(row[mid]>target){
           end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return false;
}
bool searchmatrix(vector<vector<int>> &matrix,int target){
    int row=matrix.size();
    int cols=matrix[0].size();
    for(int i=0;i<row;i++){
        if(target>=matrix[i][0] && target <= matrix[i][cols-1]){
            return binSearchRow(matrix[i],target);
        }
    }
    return false;
}
int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=13;
    if(searchmatrix(matrix,target)){
        cout<<"Target is found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
}
