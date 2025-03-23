#include <bits/stdc++.h>
using namespace std;

void SwapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}
int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {7, 8, 9, 10, 11};

    SwapAlternate(arr1, 6);
    PrintArray(arr1, 6);
    return 0;
}