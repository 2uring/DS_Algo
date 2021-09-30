class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int t = 100;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    if(i == 0)
                        t = 0;
                    else
                    {
                        matrix[0][j] = 0;
                        matrix[i][0] = 0;
                    }
                   
                }
            }
        }
            
       for(int j = 1; j < n; j++)
       {
           if(matrix[0][j] == 0)
               for(int i = 0; i < m; i++)
                   matrix[i][j] = 0;
       }
        
        
        
        
        for(int i = 1; i < m; i++)
        {
            if(matrix[i][0] == 0)
                for(int j = 1; j < n; j++)
                    matrix[i][j] = 0;
        }
        
        if(matrix[0][0] == 0)
            for(int i = 0; i < m; i++)
                matrix[i][0] = 0;
        if(t == 0)
            for(int j = 0; j < n; j++)
                matrix[0][j] = 0;
    }
    
};