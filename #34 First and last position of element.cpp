class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        vector<int>result(2,-1);
        while(low<=high){
            int guess=(low+high)/2;
            if(nums[guess]<target)
            low=guess+1;
            else if(nums[guess]>target)
            high=guess-1;
            else{
                result[0]=guess;
                high=guess-1;
            }

        } 
            low=0,high=n-1;
            while(low<=high){
                int guess=(low+high)/2;
                if(nums[guess]<target)
                low=guess+1;
                else if(nums[guess]>target)
                high=guess-1;
                else{
                    result[1]=guess;
                    low=guess+1;
                }
            } 
             return result;
    }
};
