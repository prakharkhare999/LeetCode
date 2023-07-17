class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0, remainder;
        int temp=x;

 

              while (x > 0) {
              remainder = x % 10;
              reverse = (reverse * 10 )+ remainder;
               x = x/10;
              }
             if(reverse==temp){
     return true;

 }
 else{
     return false;
 }





    }
};
