class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        //self implimentation
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j){
                    if(i>=0 && j<arr.size()){
                        if(arr[i]==(2*arr[j])){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
        
    }
};
