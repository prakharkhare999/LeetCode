class Solution {
public:
    int totalMoney(int n) {
        int result=0;
        int mondaymoney=1;
        while(n>0){
            int money=mondaymoney;
            for(int day=1;day<=min(n,7);day++){
                result+=money;
                money++;

            }
            n=n-7;
            mondaymoney++;

        }
        return result;
    }
};
