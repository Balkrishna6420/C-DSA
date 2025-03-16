#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void sortOne(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        while(arr[start]==0){
            start++;
        }
        while(arr[end]==1){
            end--;
        }
        if(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
        
    }
}
int main(){
    int arr[7]={1,1,0,1,0,0,1};
    sortOne(arr,7);
    printArray(arr,7);
}


//sort 0 1 2
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void sort012(int *arr, int n)
{
   //   Write your code here
    int i = 0;
    int j = 0;
    int k = n - 1;
    
    while ( j <= k ) {
        if(arr[j] == 0) {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
       else if(arr[j] == 1) {
            j++;
        }
        else if(arr[j] == 2) {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}
int main(){
    int arr[7]={1,0,0,2,1,2,0};
    sort012(arr,7);
    printArray(arr,7);
}