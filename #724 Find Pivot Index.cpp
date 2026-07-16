class Solution {
public:
    int pivotIndex(vector<int>& nums) { 
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        } 
         int left=0;
         if(left==sum-nums[0]){
            return 0;
         }
         for(int i=1;i<nums.size();i++){
            left+=nums[i-1];
           int right=sum-nums[i]-left;
            if(left==right){
                return i;
            }  
         }  

        return -1;
        
    }
};
