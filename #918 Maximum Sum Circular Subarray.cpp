class Solution{
public:
      int maxSubarraySumCircular(vector<int>&nums){
        int i=0;
        int totalsum=nums[0];
        int maxending=nums[0];
        int maxsum=nums[0];
        int minending=nums[0];
        int minsum=nums[0];
        for(i=1;i<nums.size();i++){
            totalsum=totalsum+nums[i];
            maxending=max(nums[i],maxending+nums[i]);
            maxsum=max(maxsum,maxending);

            minending=min(nums[i],minending+nums[i]);
            minsum=min(minsum,minending);
        } 
         if(maxsum<0){
            return maxsum;
         } else{
            return  max(maxsum,totalsum-minsum);
         }
      }    
};
