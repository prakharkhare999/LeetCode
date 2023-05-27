class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int row=a.size();
   int col=a[0].size();

   int s=0;
   int e=row*col-1;

   int mid=s+(e-s)/2;
   while(s<=e){
int element=a[mid/col][mid%col];
if(element == target){
    return 1;
} 
if(element<target){
    s=mid+1;
}
 else {
  e = mid - 1;
}
mid = s + (e - s) / 2;
   }
   return 0;
    }
};
