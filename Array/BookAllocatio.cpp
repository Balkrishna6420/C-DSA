#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& arr, int n, int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum=pageSum+arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=0;
            pageSum=pageSum+arr[i];
        }
    }
    return true;
} 
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m > n) {
        return -1; // Not enough books for all students
    }
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findPages(arr, n, m) << endl;
    return 0;
}
