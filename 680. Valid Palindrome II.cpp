class Solution {
public:



bool checkpailendrome(string s,int i,int j){
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
     
    }
       return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                //ek bar i ko remove ya j ko remove
               return checkpailendrome(s,i,j-1) || checkpailendrome(s,i+1,j);
            }
            else{
                //s[i]==s[j]
                i++;
                j--;
            }
        }
        return true;
    }
};
