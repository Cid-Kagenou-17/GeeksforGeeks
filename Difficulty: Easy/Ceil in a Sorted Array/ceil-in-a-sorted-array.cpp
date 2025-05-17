//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int st =0;
        int end = arr.size()-1;
        int i=-1,index = -1;
        
        while(st<=end){
            
            int mid = (st+end)/2;
            
            if(arr[mid]==x){
                index = mid;
                end = mid-1;
            }
            else if(arr[mid]>x){
                i=mid;
                end = mid-1;
            }
            else if(arr[mid]<x)
            st = mid+1;
            
        }
        
        if(i==-1 && index == -1)
        return -1;
        else if(index!=-1)
        return index;
        else
        return i;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string xs;
        getline(cin, xs);
        int x = stoi(xs);
        Solution ob;
        int ans = ob.findCeil(arr, x);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends