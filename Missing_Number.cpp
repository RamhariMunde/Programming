/*
Given an array of size N-1 such that it only contains 
distinct integers in the range of 1 to N. Find the missing element.
*/
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {

        int result;

        sort(array.begin(),array.end()); // sort the array first

     

           for ( int i = 0 ; i < array.size() ; i++){

           

               if(array.size() < n && array[i]== i+1){

                result = array[i] + 1;

            }
                  else if (array[i] > i + 1  ){

                   result = ++i;

                   break;

           }
             }

    return result;
}

};
//Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
