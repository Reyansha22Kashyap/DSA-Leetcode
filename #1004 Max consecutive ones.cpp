class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0,high=0,res=INT_MIN,zero=0;
        int n=nums.size();
        for(high=0;high<n;high++){
            if(nums[high]==0)
            zero++; 
        while(zero>k){ 
                if(nums[low]==0)
                zero--;
                low++;
            }
            int len=high-low+1;
            res=max(res,len);
        } 
          return res;
    }
};
