class Solution {
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
