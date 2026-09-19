class Solution {
public:

  bool cansplit(vector<int>& nums, int k, int mid){
        int subarray=1;
        int sum=0;
        for(int i=0; i<nums.size();i++){
            if(sum+nums[i] > mid ){
                subarray++;
                sum=nums[i];
            }else{
                sum+=nums[i];
            }
        } 
         return subarray<=k;
  }
    int splitArray(vector<int>& nums, int k) {
        int low= *max_element(nums.begin(),nums.end()); 
        int high= accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = low+(high-low)/2;
            if(cansplit(nums,k,mid)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        } 
         return low;
    }
};
