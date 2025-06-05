class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int st = 0;
        int end = arr.size()-1;
        int firstoccurence = -1;
        int lastoccurence = -1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            if(arr[mid]==target){
                firstoccurence = mid;
                end = mid-1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else if(arr[mid]<target){
                st = mid+1;
            }
        }
        
        st = 0;
        end= arr.size()-1;
        
        while(st<=end){
            
            int mid = (st + (end-st)/2);
            if(arr[mid]==target){
                lastoccurence = mid;
                st = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else if(arr[mid]<target){
                st = mid+1;
            }
        }
        
        if(lastoccurence == -1)
        return 0;
        else if(firstoccurence == lastoccurence)
        return 1;
        else
        return (lastoccurence - firstoccurence + 1);
    }
};
