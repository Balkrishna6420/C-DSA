#include <iostream>
#include <vector>
#include <algorithm> // For __gcd function

using namespace std;

vector<int> lcmAndGcd(int a, int b) {
    int gcd_val = __gcd(a, b);
    int lcm_val = (a * b) / gcd_val;
    return {lcm_val, gcd_val};
}

int main() {
    int a = 5, b = 10;
    vector<int> result = lcmAndGcd(a, b);
    
    cout << "[" << result[0] << ", " << result[1] << "]" << endl; // Output: [10, 5]
    
    return 0;
}
