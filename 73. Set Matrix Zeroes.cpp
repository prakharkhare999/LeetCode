class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstRowContainsZero = false;
        bool firstColContainsZero = false;
        
        for(int i = 0;i<matrix.size();i++){
            if(matrix[i][0] == 0){
                firstColContainsZero = true;
                break;
            }
        }
        
        for(int j = 0;j<matrix[0].size();j++){
            if(matrix[0][j] == 0){
                firstRowContainsZero = true;
                break;
            }
        }
        
        for(int i =1;i<matrix.size();i++){
            for(int j = 1;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i =1;i<matrix.size();i++){
            for(int j = 1;j<matrix[i].size();j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(firstRowContainsZero){
            for(int j=  0;j<matrix[0].size();j++){
                matrix[0][j] = 0;
            }
        }
        
        if(firstColContainsZero){
            for(int i=  0; i < matrix.size();i++){
                matrix[i][0] = 0;
            }
        }
    }
};
