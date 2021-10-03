class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> d;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[abs(nums[i]) - 1] < 0)
                d.push_back(abs(nums[i]));
            else
                nums[abs(nums[i])-1] *= -1;
        }
        return d;
        
        
        
    }
};