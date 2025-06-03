class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int large = arr[0];
        int slarge = -1; 
        for(int i=0;i<arr.size();i++){
            if(arr[i]>large){
                slarge = large;
                large = arr[i];
            }
            
            else if(arr[i]>slarge && arr[i]<large)
            slarge = arr[i];
            
            
            
        }
        return slarge;
    }
};