/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    cout<<ans<<endl;
    return ans;
}
*/

#include<iostream>
using namespace std;

int power(int a, int b) {
    //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;

    //RECURSIVE CALL
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0) {
        return ans * ans;
    }
    else {
        //if b is odd
        return a * ans * ans;
    }
}

int main() {

    int a,b;
    cin >> a >> b;
    cout << endl;
    int ans = power(a,b);

    cout << "Answer is " << ans << endl;

    return 0;
}