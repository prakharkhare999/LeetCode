class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        //not needed for storing in variales .
        int first=prices[0];
        int second=prices[1];
        if((first+second)>money){
            return money;
        }
        else{
            return money-(first+second);
        }
    }
};
