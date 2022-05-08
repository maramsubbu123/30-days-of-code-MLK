#include <bits/stdc++.h>
using namespace std;

vector<pair<int, char> > findMostFrequent(
	vector<vector<char> >& arr, int n)
{
	unordered_map<char, int> unmap;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			unmap[arr[i][j]]++;
		}
	}
	vector<pair<int, char> > arr2;
	for (auto i : unmap) {
		arr2.push_back({ i.second, i.first });
	}
	sort(arr2.rbegin(), arr2.rend());
	return arr2;
}
int main()
{
	int N = 3;

	vector<vector<char> > arr = { { 'a', 'a', 'a' },
								{ 'b', 'a', 'c' },
								{ 'd', 'c', 'a' } };

	vector<pair<int, char> > ans
		= findMostFrequent(arr, N);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i].second << " : "
			<< ans[i].first << endl;
	}
	return 0;
}
