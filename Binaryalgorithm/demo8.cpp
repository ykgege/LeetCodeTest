/*
Given an array of integers that is already sorted in ascending order, 
find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, 
where index1 must be less than index2.

Note:
    Your returned answers (both index1 and index2) are not zero-based.
    You may assume that each input would have exactly one solution and you may not use the same element twice.
*/


class Solution
{
public:
    vector<int> twoSum1(vector<int>& numbers,int target)
	{
		for(int i = 0;i<numbers.size();++i)
		{
			int low = i+1,high = numbers.size-1;
			while(low<= high)
			{
				int mid = (high - low)/2+low;
				if(numbers[mid] == target-numbers[i])
				{	
				    return {i+1,mid+1};
				}
				else if(numbers[mid]>target-numbers[i])
				{
					high = mid -1;
				}
				else
				{
					low = mid+1;
				}
				
			}
		}
		return{-1,-1};
	}
	
    vector<int> twoSum2(vector<int>& numbers, int target) {
        int low = 0, high = numbers.size() - 1;
        while (low < high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low + 1, high + 1};
            } else if (sum < target) {
                ++low;
            } else {
                --high;
            }
        }
        return {-1, -1};
    }

};
