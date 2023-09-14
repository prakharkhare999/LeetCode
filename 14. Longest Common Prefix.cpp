//easy solution

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(true){
            char curr_ch=0;
            for(auto str:strs){
                if(i>=str.size()){
                    //out of bound
                    curr_ch=0;
                    break;
                }
                //just started
                if(curr_ch==0){
                    curr_ch=str[i];
                }
                else if(str[i]!=curr_ch){
                    curr_ch=0;
                    break;

                }

            }
            if(curr_ch==0){
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }
};

















/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                if(strs.size() == 0) return "";
        int ans = INT_MAX;
        for(int i = 0; i < strs.size()-1; i++){
            ans = min(ans, (int)min(strs[i].size(), strs[i+1].size()));
            while(strs[i].substr(0, ans) != strs[i+1].substr(0, ans)){
                ans--;
            }
            if(ans == 0)return "";
        }
        return strs[0].substr(0, ans);

    }
};
*/
