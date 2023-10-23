class Solution {
public:
    bool isPowerOfFour(int n) {
  /*   approach 1
        while(n%4==0){
            n=n/4;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
        return false;
        */

        if(n <= 0) return false;
        
        int a = (log(n)/log(4)); 
        /*
            4^a = n
            a = log(n) to base 4
            a = log(n) to base e / log(4) to base e
        */
        
        if(n == pow(4, a))
            return true;
        
        return false;
    }
};
        
    
