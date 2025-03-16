/*selection sort:-
best case and worst case tc=O(n^2),space complexity=O(1);Use case-for small size array*/
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={9,7,6,10,8};
    selectionSort(arr,5);
    printArray(arr,5);
}

/*selection sort --  in every round the smallest value takes their correct place.
bubble sort - in every round the largest value takes their correct place.
 The best case tc is O(n) when there us no swap possible  and the worst case tc is O(n^2)
 ALSO WE USE BOOL SWAAPED TO DETERMINE THE BEST CASE OF TIME COMPLEXITY*/

#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false; 
        for(int j =0; j<n-i; j++) { 
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }       
        if(swapped == false) {
            //already sorted
            break;
        }       
    }
}

/*In insertion sort we do not swap but shift like cards 
he best case tc is O(n) when there us no swap possible  and the worst case tc is O(n^2)*/


#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}