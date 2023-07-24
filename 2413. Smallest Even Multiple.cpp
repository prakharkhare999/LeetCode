class Solution {
public:
    int smallestEvenMultiple(int n) {
        int p=2*n;
        int r=0;
        if(p%2==0 && p%n==0 && n%2==0){
             r=min(p,n);
             
        }
        else{
         return p;
        }
        return r;
    }
    
};
