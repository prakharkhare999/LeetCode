class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
	int len = nums.size();
	vector<int> result;
	if (len == 0) return result;

	int i = 0;
	while (i < len) {
	  if (nums[i] == i + 1 || nums[nums[i] - 1] == nums[i]) ++i;
	  else swap(nums[i], nums[nums[i] - 1]);
	}

	for (int i = 0; i < len; ++i) 
	  if (nums[i] != i + 1) result.push_back(i + 1);

	return result;
  }
};
