#include<iostream>
using namespace std;

void reverse(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[6]={-2,3,4,-5,8,9};
    int b[5]={12,13,15,17,19};

    reverse(a,6);
    reverse(b,5);

    printArray(a,6);
    printArray(b,5);

    return 0;
}


//Reversing using vector and two pointer concept

#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse (vector<int>v){
    int start=0;
    int end=v.size()-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
void print (vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}
int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    v.push_back(12);
    v.push_back(17);

    vector<int>ans=reverse(v);
    print(ans);
    return 0;


}