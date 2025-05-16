//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int st = 0, end = arr.size()-1;
        int mid;
        int startindex = -1,endindex = -1;
        
        while(st<=end){
            
            mid = st + ((end - st)/2);
            
            if(arr[mid]<x){
                st = mid+1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else if(arr[mid]==x){
                startindex = mid;
                end = mid-1;
            }
        }
        
        st = 0;
        end = arr.size()-1;
        
        while(st<=end){
            
            mid = st + ((end - st)/2);
            
            if(arr[mid]<x){
                st = mid+1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else if(arr[mid]==x){
                endindex = mid;
                st = mid+1;
            }
        }
        
        return {startindex, endindex};
        
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends