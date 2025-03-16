#include<iostream>
using namespace std;
int sum(int arr[], int size)
{
    if(size == 0 || size==1)
    {
        return arr[0];
    }
    int remainingPart=sum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main(){
    int arr[5]={2,3,4,5,6};
    int size=5;
    int ans=sum(arr,size);
    cout<<"The sum is"<<ans<<endl;
    return 0;
}