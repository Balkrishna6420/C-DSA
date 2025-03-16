//tc=o(n)
//sc=O(n)
#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==0)
    return 1;
    // int chottiProblem=factorial(n-1);
    // int badiProblem=n*chottiProblem;
    // return badiProblem;
    //or
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}
