class Solution {
public:
    bool isHappy(int n) {
        int tmp = 0;
        set<int> visited;
        
        while(true){
            tmp = 0;
            while(n > 0){
                tmp += pow((n%10), 2);
                n/=10;
            }
            n = tmp;
            if(n == 1){
                break;
            }else if(visited.find(n)!=visited.end()){
                return false;
            }
            visited.insert(n);
        }
        return true;
    }
};

//unorderedset
 unordered_set<int> usedIntegers;
        while (true) {
            // Find the sum of squares
            int sum = 0;
            while (n != 0) {
                sum += std::pow(n % 10, 2.0);
                n = n / 10;
            }

            // If sum is 1, return true
            if (sum == 1) return true;

            // Else, the new number is the current sum
            n = sum;

            // Check if we have already encountered that number
            if (usedIntegers.find(n) != usedIntegers.end())
                return false;
            usedIntegers.insert(n);
        }
    }
