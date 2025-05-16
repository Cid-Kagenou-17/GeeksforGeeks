//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int N = arr.size();
        if(arr[0]<arr[N-1])
        return 0;
        else{
            int st=0,end =N-1;
            while(st<=end){
                int mid = (st+end)/2;
                
                if(arr[mid]<=arr[(mid-1+N)%N] && arr[mid]<=arr[(mid+1)%N])
                return mid;
                
                else if(arr[mid]<=arr[end])
                end = mid-1;
                
                else if(arr[mid]>=arr[st])
                st = mid+1;
            }
            
            
        }
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends