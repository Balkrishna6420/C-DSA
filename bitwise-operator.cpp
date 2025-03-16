#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=2;
    int b=3;
    cout<<" a&b= "<<(a&b)<<endl;
    cout<<" a|b= "<<(a|b)<<endl;
    cout<<" ~a= " <<(~a)<<endl;
    cout<<" a^b= "<<(a^b)<<endl;
    cout<<" Left shift "<<(17<<1)<<endl;//generally gives result as its multiple
    cout<<" Left shift "<<(17<<2)<<endl;
    cout<<" Right shift "<<(19>>1)<<endl;//generally gives result as its division approx value
    cout<<" Right shift "<<(21>>2)<<endl;
    int i=7;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
}