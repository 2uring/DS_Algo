class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int pre = 1;
        res.push_back(pre);
        for(int i = 1; i < nums.size(); i++)
        {
            pre *= nums[i-1];
            res.push_back(pre);
            
        }
        int post = 1;
        for(int i = nums.size()-2; i >=0; i--)
        {
            post= post*nums[i+1];
            res[i] *= post;
        }
        return res;
        
    }
};