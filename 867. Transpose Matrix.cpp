/*class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> result(A[0].size(), vector<int>(A.size()));
        for (int r = 0; r < A.size(); r++) {
            for (int c = 0; c < A[0].size(); c++) {
                result[c][r] = A[r][c];
            }
        }
        return result;
    }
};
*/
 class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       vector<vector<int>> ans(matrix[0].size(), vector<int>(matrix.size()));

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                 ans[j][i]=matrix[i][j];
            }
            
        }
        return ans;
    }
};
