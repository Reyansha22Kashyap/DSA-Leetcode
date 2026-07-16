class Solution {
public:
    int maximumSum(vector<int>& arr) { 
        int i=0;
        int nodelete = arr[0];
        int onedelete = INT_MIN; 
        int res = arr[0];
        for( i=1;i<arr.size();i++){
            int prevnodelete = nodelete;
            int prevonedelete = onedelete;
           nodelete = max(prevnodelete+arr[i],arr[i]); 

           int v1;

           if(prevonedelete == INT_MIN)
           v1 =  arr[i];
           else{
            v1= prevonedelete+arr[i];
           }
           onedelete = max(v1, prevnodelete);
           res= max(res,max(nodelete,onedelete));
        } 
         return res;
    }
};
