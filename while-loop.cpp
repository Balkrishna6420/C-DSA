// // // //to print the numbers between 1 to N using while loop;
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     int i=1;
// // //     while(i<=n){
// // //         cout<<i <<" ";
// // //         i=i+1;
// // //     }
// // //     return 0;


// // // }




// // //to print sum of N natural numbers using while loop
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int sum=0,i=1;
// //     while(i<=n){
// //         sum=sum+i;
// //         i=i+1;
        
// //     }
// //     cout<<"Value of sum is "<<sum<<endl;
// //     return 0;
// // }




// //find the sum of all even nuumbers using while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0,sum=0;
//     while(i<=n){
//         sum=sum+i;
//         i=i+2;
//     }
//     cout<<"Value of sum of even numnber is:-"<<sum<<" "<<endl;
//     return 0;
// }


//to find whether it is prime or not
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=2;
    while(i<a){
        if(a%i==0){
            cout<<"The number is not prime for value " << i <<endl;

        }
        else {
            cout<<"The number is prime for value " << i <<endl;
            }
            i=i+1;          
    }
    return 0;
}