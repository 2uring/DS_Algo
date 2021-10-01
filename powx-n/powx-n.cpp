class Solution {
public:
    double myPow(double x, int n) {
        double t;
        
        if(n == 0)
            return 1;
        if(n == 1)
            return x;
        
        
        if(n < 0)
        {
                n = abs(n);
                 if(n%2==0)
            {
                t = myPow(x, n/2);
            
             
                return 1/(t * t);
        }
         else
         {
             t = myPow(x, n/2);
             
            
             return 1/(x * t * t);
         }
            
        }
        else
        {
        if(n%2==0)
        {
            t = myPow(x, n/2);
            
            
                return t * t;
        }
         else
         {
             t = myPow(x, n/2);
             
            
             return x * t * t;
         }}
    }
};