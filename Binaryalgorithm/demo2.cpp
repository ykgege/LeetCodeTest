/*
 * Given a string s and a string t, check if s is subsequence of t.
 * A subsequence of a string is a new  string which is formed from the 
 * original string by deleting some (can be none) of the characters without 
 * disturbing the relative positions of the remaining characters.(ie,"ace" is
 * a subsequence of "abcde" while "aec" is not).
*/

//双指针解法
class Solution
{
public:
    bool isSubsequence(string s,string t)
	{
	    if(s.size() == 0)
		{
			return true;
		}
		if(t.size() == 0)
		{
			return false;
		}
		
		int low = 0;
		int high = s.size() -1;
		int sign = 0;
		
		for(int left = 0,right = t.size() -1;left<right && sign != s.size(); ++left,--right)
		{
			if(s[low] == t[left])
			{
				++low;
				++sign;
			}
			if(s[high] == t[right])
			{
				--high;
				++sign;
			}
		}
		
		if(sign < s.size())
		{
			return false;
		}
		return true;
	}
}

//2
bool isSubsequence(string s,string t)
{
	if(s.size() == 0)
		return true;
	int a = 0;
	int len  = s.size();
	
	for(int i = 0;i < t.size();i++)
	{
		if(s[a] == t[i])
			a++;
		if(a == len)
			return true;
	}
	return false;
	
}
