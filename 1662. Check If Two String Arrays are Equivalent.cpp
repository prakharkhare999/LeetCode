 class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
string ans1;
string ans2;

for(int i=0;i<word1.size();i++){
    ans1=ans1+word1[i];
    
}

for(int i=0;i<word2.size();i++){
        ans2=ans2+word2[i];
    
  
}

        if(ans1==ans2){
            return true;
        }
        
        return false;
            }
};
