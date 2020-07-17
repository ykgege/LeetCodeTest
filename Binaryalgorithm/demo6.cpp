/*
 Search Insert Position
 
 Give a sorted array and a target value,return the index if the target is found . 
 if not, return the index where it would be if it were inserted in order.
  You may assume no duplicates in the array.

*/

class Solution 
{
public:
    int searchInsert(vector<int>& nums,int target)
    {
		int n = nums.size();
		int left = 0;
		int right = n-1;
		int ans = n;
		while(left <= right)
		{
			int mid = (right - left)/2 +left;
			if(target <= nums[mid])
			{
				ans = mid;
				right = mid -1;
			}
			else
			{
				left = mid - 1;
			}
		}
		return ans;
	}	
}


