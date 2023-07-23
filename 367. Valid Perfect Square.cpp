class Solution {
public:
    bool isPerfectSquare(int num) {
        long long newlen=num;
        if(num==1){
            return true;
        }
        for(long long i=1;i<num;i++){
            if(i*i == num){
                return true;
            }
        }
        
        
            return false;
        

        
    }
};
