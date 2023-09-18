class Solution {
public:

int binarySearch(vector<int>&arr,int l,int r){
    int result=-1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==1){
            result=mid;
            l=mid+1;
        }
        else{
            r=mid-1;

        }
       
    }
    //+1 because we need onces not index
 return result+1;
}
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        int m=mat.size();
        int n=mat[0].size();
        //pair
        vector<pair<int,int>>countonces;//once ka count
        for(int row=0;row<m;row++){
            int num_of_once=binarySearch(mat[row],0,n-1);
            countonces.push_back({num_of_once,row});


        }
        sort(begin(countonces),end(countonces));
        vector<int>result(k);
        for(int i=0;i<k;i++){
            result[i]=countonces[i].second;

        }
return result;



    }
};
