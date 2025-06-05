class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int st =0;
        int end = arr.size()-1;
        
        int priority1 = -1,priority2 = -1;
        
        while(st<=end){
            
            int mid = (st + (end - st)/2);
            
            if(arr[mid]==x){
                priority1 = mid;
                st = mid+1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else if(arr[mid]<x){
                priority2 = mid;
                st = mid+1;
            }
        }
        if(priority1 ==-1 && priority2 == -1)
        return -1;
        else if(priority1!=-1)
        return priority1;
        else
        return priority2;
    }
};
