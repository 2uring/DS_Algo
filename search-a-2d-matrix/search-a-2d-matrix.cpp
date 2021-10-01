class Solution {
   
    bool lsearch(vector<int> v, int t)
    {
        for(int a: v)
        {
            if(a == t)
                return true;
            
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(target < matrix[0][0] or target > matrix[m-1][n-1])
            return false;
        
        for(int i = 0; i < m; i++){
            if(i == m-1)
                return lsearch(matrix[i], target);
            if(target >= matrix[i][0] and target < matrix[i+1][0])
                return lsearch(matrix[i], target);
        
        }
        return false;
    }
};