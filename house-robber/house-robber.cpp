class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        if(nums.size() == 2)
            return max(nums[0], nums[1]);
        if(nums.size() == 3)
            return max(nums[1], nums[0]+nums[2]);
        vector <int> s;
        s.push_back(nums[0]);
        s.push_back(max(nums[0], nums[1]));
        s.push_back(max(s[0]+nums[2], s[1]));
        
        
        for(int i = 3; i < nums.size(); i++)
        {
            s.push_back(max(s[i-2]+nums[i], s[i-3]+nums[i])); 
            
        }
        
        int l = s.size();
        return max(s[l-1], s[l-2]);
        
        
       
        
    }
};