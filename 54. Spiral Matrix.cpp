class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>v;
       int m=matrix.size();
       int n=matrix[0].size();
       int totalsize=m*n;

       int startingrow=0; 
       int startingcol=0;
       int endingrow=m-1;
       int endingcol=n-1;
       int count=0;

       while(count<totalsize){
         for(int i=startingcol;i<=endingcol && count<totalsize;i++){
           v.push_back(matrix[startingrow][i]);
           count++;
         }
         startingrow++;

         for(int i=startingrow;i<=endingrow && count<totalsize;i++){
           v.push_back(matrix[i][endingcol]);
           count++;
         }
         endingcol--;

         for(int i=endingcol;i>=startingcol && count<totalsize;i--){
           v.push_back(matrix[endingrow][i]);
           count++;
         }
         endingrow--;

         for(int i=endingrow;i>=startingrow && count<totalsize;i--){
           v.push_back(matrix[i][startingcol]);
           count++;

         }
         startingcol++;





       }
       return v;
        
    }
};
