class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> mpp;
     for(int i=0;i<nums.size();i++){
        int num=nums[i];
        int need=target-num;

        if(mpp.find(need)!=mpp.end()){
            return {mpp[need],i};
        }
        mpp[num]=i;
     }
     return{-1,-1};
    }
};     
