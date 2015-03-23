#pragma once
#include <vector>

class DungeonGame
{
public:
	DungeonGame(){}
	int calculateMinimumHP(std::vector<std::vector<int> > &dungeon)
	{
		int m = dungeon.size();
		int n = dungeon[0].size();
		int** dp = new int*[m];
		for (int i = 0; i < m; i++)
		{
			dp[i] = new int[n];
		}

		dp[m-1][n-1] = std::max(0-dungeon[m-1][n-1], 0);

		for (int i = m-2; i >= 0 ; i--)
		{
			dp[i][n-1] = std::max(dp[i+1][n-1]-dungeon[i][n-1], 0);
		}
		for (int j = n - 2; j >=0; j--)
		{
			dp[m-1][j] = std::max(dp[m-1][j+1]-dungeon[m-1][j], 0);
		}


		for (int i = m-2; i >= 0; i--)
		{
			for (int j = n-2; j>= 0; j--)
			{
				dp[i][j] = std::max(std::min(dp[i+1][j], dp[i][j+1]) - dungeon[i][j], 0);
			}
		}
		return dp[0][0] + 1;
	}
};