class Solution {
public:
    char findTheDifference(string s, string t) {
        //approach 1
        //1 map
      
      
      
       /*
        unordered_map<char,int>mp;
        for(auto &ch:s){
            mp[ch]++;
        }
        for(auto &ch:t){
            if(mp.find(ch)==mp.end()){
                return  ch;
            }
        }
        return 'x';//never come here
        */



       //approach 2
        //   find sun of each string and take the diff the diff is ans
       
       /*  int sum_s=0;
         for(char &ch:s){
             sum_s+=ch;
         }

          int sum_t=0;
         for(char &ch:t){
             sum_t+=ch;
         }
         //sum_t jayada hoga because it contain a extra character
        return (char)(sum_t-sum_s);

*/


//approach 3
        //xor

int Xor=0;
for(char &ch:s){
    Xor^=ch;
}
for(char &ch:t){
    Xor^=ch;
}
return (char)Xor;






   
    }
};
