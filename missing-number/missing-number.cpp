class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0;
        int b=nums[0];
        int n = nums.size();
        if(n == 1)
            return !(nums[0] and 1);
        for(int i = 1; i<n; i++)
        {
            a = a ^ i;
            b = b ^ nums[i];
        }
        a = a ^ n;
        return a ^ b;
            
        
    }
};