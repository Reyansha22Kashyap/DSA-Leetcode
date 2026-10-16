class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty())
        return 0;
        int off=0,cm=1;
        while(cm<n){
            if(nums[cm]==nums[cm-1]){
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
