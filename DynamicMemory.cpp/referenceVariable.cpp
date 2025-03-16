//Reference variable is defined as same memory but different names 

#include<iostream>
using namespace std;
int main(){
    int i=4;
    int &j=i;
    cout<<i<<endl;
    cout<<i++<<endl;
    cout<<j++<<endl;
    cout<<j<<endl;
}