class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>f;
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }
        for(auto &p :f){
            if(p.second>n/2){
                return p.first;
            }
        } 
         return -1;
    }      
};
