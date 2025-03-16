#include<iostream>
using namespace std;
void reachHome(int src,int dest){
    cout<<"source"<<src<<"Destinstion"<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"pahunch gaya"<<endl;
        return;
    }
    //processing-ek step aage badh jao
    src++;
    //recursive relation
    reachHome(src,dest);
}
int main(){
    int src=1;
    int dest=10;
    cout<<endl;
    reachHome(src,dest);
}