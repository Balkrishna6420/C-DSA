//to find any element is present in the array or not
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[6]={2,3,4,5,6,7};
    cout<<"Enter the key value which you want to search for"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,6,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
}