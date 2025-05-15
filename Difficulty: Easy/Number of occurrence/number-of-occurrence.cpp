//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int st=0;
        int end = arr.size()-1;
        int mid;
        int startindex=-1;
        int endindex = -1;
        
        while(st<=end){
            
            mid = end + ((st-end)/2);
            if(arr[mid]<target)
            st = mid+1;
            else if(arr[mid]>target)
            end = mid-1;
            else if(arr[mid]==target){
                startindex = mid;
                end = mid-1;
                
            }
        }
        
        st =0;
        end = arr.size()-1;
        
        while(st<=end){
            
            mid = end + ((st-end)/2);
            if(arr[mid]<target)
            st = mid+1;
            else if(arr[mid]>target)
            end = mid-1;
            else if(arr[mid]==target){
                endindex = mid;
                st = mid+1;
                
            }
        }
        if(startindex == -1)
        return 0;
        else if(startindex == endindex)
        return 1;
        else
        return (endindex - startindex + 1);
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends