/*
Arranging Coins
You have a total of n coins want to form in a staircase shape, where every K-th row
must have exactly k coins.
Given n ,find the total number of full staircase rows that can be formed.
n is a non-negative integer and fits within the range of a 32-bit signed integer.
*/

// 公式 k(k+1)/2 = n

class Solution
{
public:
    int arrangeCoins(int n)
	{
		int low = 1;
		int high = n;
		while(low < high)
		{
			long mid = low + (high-low)/2;
			long sum = mid*(mid + 1)/2;
			if(sum>n)
			{
				high = mid -1;
			}
			else if(sum == n)
			{
				return mid;
			}
			else
			{
				low = mid +1;
			}
		}
		return low -1;
	}	
}


class Solution {
public:
    int arrangeCoins(int n) 
    {
        if(n == 1)
        {
            return 1;
        }
        int i ;
        for( i = 1;i<=n;++i)
        {
            if(i == n)
            {
                return i;
            }
            n = n-i;
        }
        return i-1;
    }
};