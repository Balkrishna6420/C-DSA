#include<bits/stdc++.h>
using namespace std;
int RowSum(int arr[][4],int row, int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<" "<<endl;
}
int main(){
    int arr[3][4];
    //taking input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //taking output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    RowSum(arr,3,4);

}