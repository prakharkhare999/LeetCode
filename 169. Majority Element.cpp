class Solution {
public:
    int majorityElement(vector<int>& v) {
//striver optimal way
//moor's voting alogotithm

        int cnt=0;
        int el;
        for(int i=0;i<v.size();i++){
            if(cnt==0){
                cnt=1;
                el=v[i];

            }
            else if(v[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==el){
                cnt++;

            }
            if(cnt>(v.size()/2)){
                return el;
            }

        }
        return -1;
    }
};
