class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mSum = nums[0];
        int l = nums.size();
        int rSum = 0;
        for(int i = 0; i < l; i++)
        {
            if(rSum < 0)
                rSum = 0;
            rSum += nums[i];
            mSum = max(mSum, rSum);
        }
        return mSum;
    }
};