// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
	int rowWithMax1s(vector<vector<int>> a, int n, int m)
	{
		vector<pair<int, int>> v;

		int f = 0;
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == 1)
				{
					f = 1;
					sum++;
				}
			}
			v.emplace_back(sum, i);
		}

		if (f == 0)
		{
			return -1;
		}

		int maxi = 0;
		int ans;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i].first > maxi)
			{
				maxi = v[i].first;
				ans = v[i].second;
			}
		}

		return ans;
	}
};

// 6 2

//  0 0
//  0 1
//  0 0
//  0 0
//  0 1
//  0 1