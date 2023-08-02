class Solution {
public:
    int heightChecker(vector<int>& heights) {
        //self implimented
        vector<int>v;
        for(int i=0;i<heights.size();i++){
            v.push_back(heights[i]);
        }
        sort(v.begin(),v.end());
        ///indi means how much time they don not match
        int indi=0;
        int j=0;

        //second loop looks different 🤣🤣🤣🤣
        for(int i=0;i<heights.size();i++){
            for(;j<=i;j++){
                 if(heights[i]!=v[j]){
                    
                    indi++;
                    

                    

                }
                
            }
            
            
        }
        
        return indi;
    }
};
