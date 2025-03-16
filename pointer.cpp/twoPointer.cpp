#include<iostream>
using namespace std;
int main(){
    int num=5;
    int* i=&num;
    int** p =&i;
    cout<<num<<endl;
    cout<<* i<<endl;
    cout<<** p<<endl;//Here all will print the value of num

    //to print the address value holoded by the first value there are thtee steps
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<&num<<endl;//all must be same

    //to orint the address of first pointer
    cout<<&i<<endl;
    cout<<p<<endl;

}