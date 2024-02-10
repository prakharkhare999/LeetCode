class Solution {
public:
int expendroundindex(string s,int i,int j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count=count+1;
        i--;
        j++;
    }
    return count;
}
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            //odd 
            int odds=expendroundindex(s,i,i);
            count=count+odds;
            int evens=expendroundindex(s,i,i+1);
            count=count+evens;

    
        }
        return count;


        
    }
};




//dp
/*class Solution {
public:
    int countSubstrings(string s) {
        int N = s.size();
        vector<vector<int>> dp(N, vector<int>(N, 0));
        int ans = 0;
        
        //width 1
        //each char is a palindrome itself
        for(int i = 0; i < N; i++){
            dp[i][i] = 1;
            ans++;
        }
        
        for(int width = 2; width <= N; width++){
            for(int start = 0; start + width -1 < N; start++){
                int end = start + width -1;
                //if its substring is not valid, then it's not valid
                if(start+1 <= end-1 && !dp[start+1][end-1]){
                    dp[start][end] = false;
                    continue;
                }
                dp[start][end] = (s[start] == s[end]);
                if(dp[start][end]){
                    // cout << start << " " << end << endl;
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
*/
