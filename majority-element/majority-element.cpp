class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m = nums[0];
        int c = 1;
        int l = nums.size();
        for(int i = 1; i<l; i++)
        {
            if(c == 0)
            {
                m = nums[i];
                c++;
            }
            else
            {
                if(m == nums[i])
                {
                    c++;
                }
                else
                    c--;
            }
            
        }
        return m;
    }
};