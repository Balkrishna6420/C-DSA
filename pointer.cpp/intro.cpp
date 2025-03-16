#include<iostream>
using namespace std;
int main(){
    // int num=5;
    // cout<<num<<endl;
    // int *ptr=&num;
    // cout<<"Address of num is "<<ptr<<" "<<endl;
    // cout<<"Value of num is"<<*ptr<<endl;

    // double d=6;
    // double *p2=&d;
    // cout<<"Adress of d is"<<p2<<endl;
    // cout<<"Value of p2 is"<<*p2<<endl;

    // cout<<"Size of integer is "<<sizeof(num)<<endl;
    // cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    // cout<<"Size of double is "<<sizeof(d)<<endl;

    int num=6;
    int *ptr=&num;
    cout<<"VAlue of num is"<<*ptr<<endl;
    (*ptr)++;
    cout<<"Value of num will be "<<*ptr<<endl;

    //copying a pointer;
    int *q=ptr;
    cout<<"Value  of q is"<<*ptr<<endl;

}