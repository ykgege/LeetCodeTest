/*
   Interleaving String
   Give s1,s2,s3,find whether s3 is formed by the interleaving of s1 and s2.
*/
/*
   首先如果 s1 + s2 != s3,那么s3必然不可能由s1和s2交错组成。在 s1 + s2 = s3时,
可以用动态规划来求解。我们定义f(i,j)表示s1的前i个元素和s2的前j个元素是否能交错
组成s3的前i+j个元素。如果s1的第i个元素和s3的第i+j个元素相等，那么s1的前i个元素
和s2的前j个元素是否能交错组成s3的前i+j个元素取决于s1的i-1个元素和s2的前j个元素
是否能交错组成s3的前i+j-1个元素和s3的第i+j个元素相等并且f(i-1,j)为真，则f(i,j)
也为真。。。。
*/


class Solution
{
public:
    bool isInterleave(string s1,string s2,string s3)
	{
		auto f = vector<vector<int>>(s1.size()+1,vector<int> (s2.size()+1,false));
		int n = s1.size(),m = s2.size(),t = s3.size();
		if(n+m != t)
			return false;
		
		f[0][0] = true;
		for(int i = 0;i<=n;++i)
		{
			for(int j = 0;j<=m;++j)
			{
				int p = i+j-1;
				if(i>0)
				{
					f[i][j] |= (f[i-1][j] && s1[i-1] == s3[p]);
				}
				if(j>0)
				{
					f[i][j] |= (f[i][j-1] && s2[j-1] == s3[p]);
				}
			}
		}
		return f[n][m];
	}	
}