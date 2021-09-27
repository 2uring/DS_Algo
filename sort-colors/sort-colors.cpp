class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int p0 = 0, p2 = 0; 
        int temp = 0;
        
        if(n>1)
        {
            
            p0 = 0;
            p2 = n-1;
            int i = 0;
            while(i <= p2)
            {
                if(nums[i] == 0)
                {
                    temp = nums[p0];
                    nums[p0] = 0;
                    nums[i] = temp;
                    p0++;
                    i++;
                }
                else if(nums[i] == 2)
                {
                    temp = nums[p2];
                    nums[p2] = 2;
                    nums[i] = temp;
                    p2--;
                    if(temp ==1 )
                        i++;
                }
                else
                    i++;
            }
            
        }
        
    }
};