class Solution {
public:
    int tribonacci(int n) {
       if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        if(n == 2)
            return 1;
        vector <int> x;
        
        x.push_back(0);
        x.push_back(1);
        x.push_back(1);
        for(int i = 3; i <= n; i++)
        {
            x.push_back(x[i-3]+x[i-2]+x[i-1]);
        }
        return x.back(); 
        
    }
};