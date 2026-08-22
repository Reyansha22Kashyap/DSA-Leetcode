class Solution {
public:
    int nextIndex(int i, vector<int>& nums) {
        int n = nums.size();
        return ((i + nums[i]) % n + n) % n;
    }

    bool sameDirection(int i, bool forward, vector<int>& nums) {
        return (nums[i] > 0) == forward;
    }

    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            bool forward = nums[i] > 0;

            int slow = i;
            int fast = i;

            while(sameDirection(slow, forward, nums) &&
                  sameDirection(fast, forward, nums) &&
                  sameDirection(nextIndex(fast, nums), forward, nums)) {

                slow = nextIndex(slow, nums);

                fast = nextIndex(fast, nums);
                fast = nextIndex(fast, nums);

                // Reject 1-element cycle
                if(slow == nextIndex(slow, nums))
                    break;

                if(slow == fast)
                    return true;
            }
        }

        return false;
    }
};
