#include<bits/stdc++.h>
using namespace std;
int MinValue(int arr[],int n){
    int mini= INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        // if(arr[i]<min){
        //     min=arr[i];
        // }
    }
    return mini;
}
int MaxValue(int arr[],int n){
    int maxi= INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        // if(arr[i]>max){
        //     max=arr[i];
        // }
    }
    return maxi;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    //taking input in arr
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum value in the array is"<<MaxValue(arr,size)<<endl;
    cout<<"Minimum value in the array is"<<MinValue(arr,size)<<endl;
    return 0;
}