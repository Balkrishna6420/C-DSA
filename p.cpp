#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans= mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans= mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;
}
int main(){
    int arr[8]={1,3,3,3,3,4,5,5};
    cout<<"First occurence of the key is at index"<<firstOccurence(arr,8,3)<<" "<<endl;
    cout<<"Last occurence of the key is at index"<<lastOccurence(arr,8,3)<<" "<<endl;
    return 0;
}