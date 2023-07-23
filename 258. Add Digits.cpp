class Solution {
public:
    int addDigits(int num) {
      int sum=0;
        while(num>9)
        {
            while(num)
            {
                sum+=(num%10);
                num/=10;
            }
            num=sum;
            sum=0;
        }
        return num;
    }
};



//another solution is 😂😂😂😂😂
/*class Solution {
public:
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        int sum;
        while(num!=0){
           int rem=num%10;
            sum=sum+rem;
           num=num/10;

        }
        int sum2=0;
        while(sum!=0){
            int rem1=sum%10;
             sum2=sum2+rem1;
           sum=sum/10;

        }
        if(sum2==10){
            return 1;
        }
        if(sum2==11){
            return 2;
        }
        if(sum2==12){
            return 3;
        }
        if(sum2==13){
            return 4;
        }
        return sum2;
    }
};
*/
