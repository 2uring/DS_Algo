bool mycom(vector<int> v1, vector<int> v2)
    {
        return v2[1] < v1[1];
    }
class Solution {
    
public:
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), mycom);
        int maxSum = 0;
        
        
        for (vector<int> v: boxTypes)
        {
            if(truckSize - v[0]>=0)
            {
                truckSize-= v[0];
                maxSum += v[0]*v[1];
            }
            else
            {
                maxSum += truckSize*v[1];
                break;
            }
            
        }
        
       return maxSum; 
    }
};