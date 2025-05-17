//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int st = 0;
        int end = arr.size()-1;
        int index = -1,i=-1;
        
        while(st<=end){
            
            int mid = (st+end)/2;
            
            if(arr[mid]==x){
                index = mid;
                st = mid+1;
            }
            
            else if(arr[mid]<x){
                i = mid;
                st = mid+1;
            }
            
            else if(arr[mid]>x){
                end = mid-1;
            }
        }
        
        if(index == -1 && i==-1)
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