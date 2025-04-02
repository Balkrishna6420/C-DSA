#include<iostream>
using namespace std;
int print(int n){
    //base case
    if(n==0){
        return 1;
    }

     //processing
     cout<<n<<endl;
    //recursive relation
    print (n-1);
   

}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}