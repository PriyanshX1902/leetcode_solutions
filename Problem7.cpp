class Solution {
public:
    long long int countDigit(long long int n)
   {
    if (n == 0)
        return 0;
    return 1 + countDigit(n / 10);
    }
     long long int reverse(long long int x) {
        long long int y = 0;
        while(x){
            int digit = x%10;
            if(y> INT_MAX/10||(y== INT_MAX/10&&digit>7)){
                return 0;
            }
            if(y< INT_MIN/10||(y== INT_MIN/10&&digit<-8)){
                return 0;
            }
           
            y= y*10+digit;
            x/=10;
        }
        return y;
    }
};
