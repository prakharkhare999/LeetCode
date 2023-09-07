class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>v;

        //convert elements to minutes
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,2));
             int minitus=stoi(curr.substr(3,2));
             int totalminitus=hours*60+minitus;
             v.push_back(totalminitus);

        }

//sort the vector
int mini=INT_MAX;
        sort(v.begin(),v.end());
        int n=v.size();
        //i+1 kr rhe isliye n-1 vrna loop se bhar
        for(int i=0;i<n-1;i++){

            int p=v[i+1]-v[i];
            mini=min(p,mini);

        }
        //something missing->circular nature of clock
        int lastdiff=(v[0]+1440)-v[n-1];
        mini=min(mini,lastdiff);
        return mini;
    }
};
