#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a"<<" "<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<" "<<endl;
    cin>>b;
    char op;
    cout<<"The operation ypu want to perform"<<" "<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-': cout<<(a-b)<<endl;
                 break;

        case '*': cout<<(a*b)<<endl;
                 break;

        case '/': cout<<(a/b)<<endl;
                 break;

        case '%': cout<<(a%b)<<endl;
                 break;

        default:  cout<<"The operation you have entered is not valid"<<endl;
                  break;
    }    
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    int note=0;
    int num=1;
    switch(1){
        case 1:note=amount/100;
               amount=amount-(100*note);
               cout<<" Number of ₹100 note "<<note<<endl;

        case 2:note=amount/50;
               amount=amount-(50*note);
               cout<<" Number of ₹50 note "<<note<<endl;

        case 3:note=amount/20;
               amount=amount-(20*note);
               cout<<" Number of ₹20 note "<<note<<endl;

        case 4:note=amount/1;
               amount=amount-(1*note);
               cout<<" Number of ₹1 note "<<note<<endl;       
    }
    return 0;

}