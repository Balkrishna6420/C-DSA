#include <iostream>
#include <vector>

using namespace std;

int findMax(vector<int>& arr) {
    int maxElement = arr[0]; // Assume first element is max
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    vector<int> arr = {10, 5, 20, 8, 25, 15};
    cout << "Maximum element: " << findMax(arr) << endl; // Output: 25
    return 0;
}
