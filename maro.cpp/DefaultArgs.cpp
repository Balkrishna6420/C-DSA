#include<iostream>
using namespace std;

void print(int arr[], int n  , int start = 0) {//here giving default args as0 and now there is no need to give start as a parameter in main function

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);
    return 0;
}