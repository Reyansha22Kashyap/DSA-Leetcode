class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int i=0;
        int maxending=nums[0];
        int minending=nums[0];
        int res= abs(nums[0]);
        for(i=1;i<nums.size();i++){
            
            maxending= max(nums[i],maxending+nums[i]);
            minending = min(nums[i],minending+nums[i]);

            int v1 = abs(maxending);
            int v2= abs(minending);
            res= max(res,max(v1,v2));
        } 
         return res; 
    }     
};
