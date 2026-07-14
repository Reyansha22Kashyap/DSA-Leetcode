class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;
        int maxending=nums[0];
        int minending=nums[0];
        int ans = nums[0];
        for(i=1;i<nums.size();i++){
            int v1=minending*nums[i];
            int v2=maxending*nums[i];
            int v3=nums[i];
            minending=min(v3,min(v1,v2));
            maxending=max(v3,max(v1,v2));
            ans= max(ans,max(minending,maxending));
        } 
          return ans;
        
    }
};
