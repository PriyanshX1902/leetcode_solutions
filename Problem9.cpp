class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int y = x;
        long long int z = 0;
        while(y){
            z*=10;
            z += y%10;
            
            y/=10;
        }
        if(z==x){
            return true;
        }
        return false;
        
        
    }
};
