class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int prev=0;
        int result=0;

        int m=bank[0].size();
        for(int i=0;i<n;i++){
             int curr=0;
             for(auto &ch:bank[i]){
                 if(ch=='1'){
                     curr++;
                 }


             }
result +=(curr*prev);
           if(curr!=0){
               prev=curr;
           }
           
        }
        return result;
        
    }
};
