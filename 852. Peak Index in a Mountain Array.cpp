class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        while(i<arr.size()){
            if(arr[i]<arr[i+1]){
                i++;
            }
            else{
                return i;
            }
        }
        return -1;
    }
};
