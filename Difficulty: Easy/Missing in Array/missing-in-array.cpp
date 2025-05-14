//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        vector <int> v(arr.size()+2,0);
        for(int i=0;i<arr.size();i++){
            v[arr[i]]++;
        }
        for(int i=1;i<v.size();i++){
            if(v[i]==0)
            return i;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNum(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends