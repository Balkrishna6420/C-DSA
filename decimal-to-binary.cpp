#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n & 1;
        ans=(bit*pow(10,i))+ans;//to print in reverse orddr in the form of 0 and 1
        n=n>>1;
        i++;
    }
    cout<<"Answer is "<<ans<<" ";
}




//to print binary to decimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
        ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"Answer is "<<ans<<" ";
}