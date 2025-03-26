#include<bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int> > arr, int nRows, int mCols)
{
    vector<int> ans;
    
    for(int col=0; col<mCols; col++) {
        
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                //cout << arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }   
    }
    return ans;
}

int main() {
    int nRows, mCols;
    
    // Taking input for number of rows and columns
    cout << "Enter number of rows and columns: ";
    cin >> nRows >> mCols;

    // Declaring a 2D vector
    vector<vector<int>> arr(nRows, vector<int>(mCols));

    // Taking input for matrix elements
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < mCols; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the matrix
    cout << "Input Matrix: " << endl;
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < mCols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Calling wavePrint function
    vector<int> result = wavePrint(arr, nRows, mCols);

    // Printing the wave print output
    cout << "Wave Print Output: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}