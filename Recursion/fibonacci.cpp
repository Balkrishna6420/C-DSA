//tc=O(2^n)
#include<iostream>
using namespace std;
int fibonacci(int n){

    //base case
    if(n==0)
     return 0;
    if(n==1)
     return 1;
    fibonacci(n-1)+fibonacci(n-2);
    
    

}
int main(){
    int n;
    cin>>n;
    int ans=fibonacci(n);
    cout<<ans<<endl;
}