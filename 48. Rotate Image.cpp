class Solution {
public:
//trick
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=m;//same size
        //transpose
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse
        for(int i=0;i<m;i++){
        reverse(matrix[i].begin(),matrix[i].end());
        }


        
    }
};





















/*class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            int low=0;
            int high=matrix.size()-1;
            while(low<high){
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
            }
        }
        
    }
};
*/
