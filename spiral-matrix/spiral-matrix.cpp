class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0, r = n, t = 0, b = m;
        
        do 
        {
            // top row left to right
            for(int i = l; i < r; i++)
                result.push_back(matrix[t][i]);
            t++;
            
            //right column top ->down
            for(int i = t; i < b; i++)
                result.push_back(matrix[i][r-1]);
            r--;
            
            if (!(l<r and t<b))
                break;
            //bottom row right -> left
            for(int i = r-1; i>=l; i--)
                result.push_back(matrix[b-1][i]);
            b--;
            
            //left column down->up
            for(int i = b-1; i >=t; i--)
                result.push_back(matrix[i][l]);
            l++;
            
        }
        while(l < r and t < b);
        return result;
        
        
        
    }
};