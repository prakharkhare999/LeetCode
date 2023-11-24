class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        
        sort(begin(piles), end(piles));
        
        int result = 0;
        
        int Bob = 0, Me = n-2, Alice = n-1;
        
        while(Me > Bob) {
            
            result += piles[Me];
        
            Me    -= 2;    
            Bob   += 1;
            Alice -= 2; //(You can remove this becasue it's required. I Used it for the sake of completeness)
        }
        
        return result;
    }
};


