class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> seen;
        for(int i = 0; i < nums.size(); i++)
            {
                if(seen.find(nums[i]) == seen.end())
                    seen[nums[i]] = 1;
                else
                    return true;
            }
            return false;
    }
};