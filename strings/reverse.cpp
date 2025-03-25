#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    void reverseString(vector<char>& s) {
        int st=0;
        int e = s.size()-1;

        while(st<=e) {
            swap(s[st++], s[e--]);
        }
    }
};
int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution sol;
    
    cout << "Original string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    
    sol.reverseString(s);
    
    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    
    return 0;
}
