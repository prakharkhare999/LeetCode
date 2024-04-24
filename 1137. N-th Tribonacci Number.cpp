// give tle

class Solution {
public:
    int tribonacci(int n) {
        if(n==1 || n==2){
            return 1;
        }
        if(n==0 ){
            return 0;
        }
        return tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);
        
    }
};


// another
 class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        }
        
        int a = 0, b = 1, c = 1;
        int nextTrib;
        
        for (int i = 3; i <= n; i++) {
            nextTrib = a + b + c;
            a = b;
            b = c;
            c = nextTrib;
        }
        
        return c;
    }
};
