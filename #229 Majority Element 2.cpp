class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>f;
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }

        vector<int> ans;
        for(auto &p:f ){
            if(p.second>n/3){
                ans.push_back(p.first);
            }
        } 
         return ans;
    }
};
