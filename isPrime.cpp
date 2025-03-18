#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Number is prime"<<endl;
    }else{
        cout<<"Not a prime Number"<<endl;
    }
    return 0;
}