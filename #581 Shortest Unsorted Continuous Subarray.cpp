class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return 0;

        int maxsofar=nums[0];
        int right=-1;
        for(int i=1;i<n;i++){
            if(nums[i]<maxsofar){
                right=i;
            }else{
                maxsofar=nums[i];
            }
        } 
         int minsofar=nums[n-1];
         int left=n;
         for(int i=n-2;i>=0;i--){
            if(nums[i]>minsofar){
                left=i;
            }else{
                minsofar=nums[i];
            }
         } 
          if(right==-1) return 0;

          return right-left+1;
    }
};
