class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<2){
            return nums.size();
        }
        int off=1,cm=2;
        while(cm<n){
            if(nums[cm]==nums[off-1]){
                cm++;
            }else{
                nums[off+1]=nums[cm];
                off++;
                cm++;
            }
        } 
         return off+1;
    }
};
