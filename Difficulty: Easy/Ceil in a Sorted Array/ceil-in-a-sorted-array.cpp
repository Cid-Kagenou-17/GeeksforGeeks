// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int st = 0;
        int end = arr.size()-1;
        int p1=-1;
        int p2=-1;
        
        while(st<=end){
            
            int mid = (st + (end - st)/2);
            
            if(arr[mid]==x){
                p1 = mid;
                end = mid-1;
            }
            else if(arr[mid]>x){
                p2 = mid;
                end = mid-1;
            }
            else if(arr[mid]<x){
                st = mid+1;
            }
        }
        
        if(p1 == -1 && p2 == -1)
        return -1;
        else if(p1!=-1)
        return p1;
        else
        return p2;
    }
};