class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      //self impliment
        sort(arr.begin(),arr.end());
        int n=arr.size();
  int mindiff=0;
int mindiffans=INT_MAX;
vector<vector<int>>ans;
        for(int i=0;i<n-1;i++){
            mindiff=arr[i+1]-arr[i];
            mindiffans=min(mindiff,mindiffans);
            

        }
        
        int i=0;
        int j=i+1;
        while(j<n){
            if((arr[j]-arr[i])==mindiffans){
                ans.push_back({arr[i],arr[j]});
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }



        }
return ans;


    }
};
