class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxwater=0;
        while(i<j){
            int w=j-i;
            int h=min(height[i],height[j]);
            int area=w*h;
            maxwater=max(maxwater,area);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }

        }
        return maxwater;
    }
};
