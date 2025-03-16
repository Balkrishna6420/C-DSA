//It ignores the xtraa characyers and lower and upper case alphabets
#include <bits/stdc++.h>
bool isvalid(char ch) {

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9') {
        return true;
    }
    else {
        return false;
    }
}
char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
    // Write your code here.

    int start = 0;
    int end = s.size()-1;

    while(start<=end) {
        if(isvalid(s[start])&&isvalid(s[end])){
            if(toLowerCase( s[start] ) != toLowerCase( s[end] ) ){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        else{
            if(isvalid(s[start])){
                end--;
            }
            else{
                start++;
            }
        }
    }
    return 1;
}
