class Solution {
public:

string cheack(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            return "";
        }
    }
    return str;
}
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        int m=words[0].size();
        for(int i=0;i<n;i++){
           
           
            if(cheack(words[i])==""){
                continue;
            }
            else{
                return words[i];

            }
        
        }
        return "";
        
    }
};
