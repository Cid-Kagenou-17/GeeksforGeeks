//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int mid;
        int index = -1;
        int st =0,end = arr.size()-1;
        while(st<=end){
            mid = end + ((st-end)/2);
            
            if(arr[mid]>x)
            end = mid-1;
            else if(arr[mid]<x)
            st = mid+1;
            else if(arr[mid]==x){
                index = mid;
                st = mid+1;
            }
        }
        if(index == -1 && st>end)
        return end;
        else
        return index;
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
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, x);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends