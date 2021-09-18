class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector <int> mc;
        mc.push_back(0);
        mc.push_back(0);
        
        
        for(int i = 2; i <= cost.size(); i++)
        {
            mc.push_back(min(mc[i-1]+cost[i-1], mc[i-2]+cost[i-2]));
        }
        // int l = mc.size(); 
        // mc.push_back(min(mc[l-1]+cost[l-1], mc[l-2]+cost[l-2]));
        return mc.back();
        
    }
};