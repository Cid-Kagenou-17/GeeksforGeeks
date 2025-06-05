class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int st = 0;
        int end = arr.size()-1;
        int firstoccurence = -1;
        int lastoccurence = -1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            if(arr[mid]==x){
                firstoccurence = mid;
                end = mid-1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else if(arr[mid]<x){
                st = mid+1;
            }
        }
        
        st = 0;
        end= arr.size()-1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            if(arr[mid]==x){
                lastoccurence = mid;
                st = mid+1;
            }
            else if(arr[mid]>x){
                end = mid-1;
            }
            else if(arr[mid]<x){
                st = mid+1;
            }
        }
        
        return {firstoccurence,lastoccurence};
    }
};