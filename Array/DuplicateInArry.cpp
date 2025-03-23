/*You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.*/
#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
	
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 4};  
    cout << "Duplicate element is " << findDuplicate(arr) << endl;
    return 0;
}