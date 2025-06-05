// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int st=0;
        int N = arr.size();
        int end = N-1;
        if(arr[0]<=arr[N-1]){
            return 0;
        }
        else{
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            
            if(arr[mid]<=arr[(mid-1+N)%N] && arr[mid]<=arr[(mid+1+N)%N])
            return mid;
            else if(arr[mid]>=arr[0])
            st = mid+1;
            else
            end = mid-1;
        }
        }
        return 0;
        
    }
};
