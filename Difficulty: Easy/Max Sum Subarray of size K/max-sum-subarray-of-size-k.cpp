//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int i=0;
        int j=k-1;
        int prevsum =0;
        int sum = 0;
        
        while(j!=arr.size()){
            
            if(i==0){
                
                for(int m=i;m<=j;m++){
                    
                    prevsum +=arr[m];
                }
                if(prevsum>sum){
                    sum = prevsum;
                }
            }
            else{
                prevsum = prevsum - arr[i-1] + arr[j];
                if(prevsum>sum)
                    sum = prevsum;
            }
            
            i++;
            j++;
        }
        
        return sum;
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
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends