class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        if(nums.size() == 1)
        {
            if(nums[0] == target)
            {
                return 0;
            }
            return -1;
        }

    int pivot = 0;
    int	left = 0;
	int right = nums.size() - 1;
    while (left <= right) 
    {
       pivot = left + (right - left) / 2;
       if (nums[pivot] == target) 
		   return pivot;
       if (target < nums[pivot]) 
		   right = pivot - 1;
       else 
		   left = pivot + 1;
    }
    return -1;

    }
};