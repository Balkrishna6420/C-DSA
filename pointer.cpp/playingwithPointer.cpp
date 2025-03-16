#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,33,4,5,6,7,8,9,1,22};
    /*cout<<"Address of first element is"<<arr<<endl;
    cout<<"Address of first element using array is "<<&arr[0]<<endl;//these both are same
    cout<<*arr<<endl;//it will give the value at oth index;
    cout<<*arr+1<<endl;//it will increment the value at zero index by one
    cout<<*(arr+1)<<endl;//it will give the valye of first index
    cout<<*(arr+2)<<endl;//it will give the value at second index
    // we conclude that arr[i]=*(arr+i) or i[arr]=*(i+arr);
    int i=4;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl;//Both are same
    

    int temp[10];
    cout<<sizeof(temp)<<endl;//it will multiply the array size by 4 of int data type
    cout<<sizeof(&temp)<<endl;
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;//it will only give the block size whch is 8
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    
   int temp[10]={2,3,4,5,65,6,67,};
   cout<<temp<<endl;
   cout<<&temp<<endl;
   cout<<&temp[0]<<endl;//all gives the same address of temp aray
   int *p=&temp[0];
   cout<<&p<<endl;//it gives the address of pointer
   //overall & operator of array and pointer both are different
   */


   //suppose u create an array as int arr[10]:- here by default arr points the index of 0 th element becase of symbol table where symbol table sataes the mapping is done by the address and it cant be chnaged and arr=arr+1 is also not possible
   int a[10];
   //arr1 =arr1+1;//it is not possible it is not assignable but with pointer it is possible
   int *ptr=&a[0];
   cout<<ptr<<endl;
   ptr=ptr+1;
   cout<<ptr;
   //explanation address of array is 710 ;address of pointer is 923; if ptr=ptr+1 then at backend 710+1 is happeneing;



   //playing with character array ;
   #include<iostream>
   using namespace std;
   int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";


   return 0;
}