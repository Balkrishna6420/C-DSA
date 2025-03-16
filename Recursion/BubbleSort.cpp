//using recursion
#include<iostream>
using namespace std;
void bubbleSortArray(int *arr,int n){
    //base case-already sorted
    if(n==0||n==1){
        return;
    }
    //1 case solve kardia -largest element ko end me rakh dia
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    bubbleSortArray(arr,n-1);

}
int main(){
    int arr[5]={4,3,2,6,8};
    bubbleSortArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}