class Solution {
public:
    int fib(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        vector <int> x;
        int a = 0;
        int b = 1;
        x.push_back(0);
        x.push_back(1);
        for(int i = 2; i <= n; i++)
        {
            x.push_back(x[i-2]+x[i-1]);
        }
        return x.back();
    }
};