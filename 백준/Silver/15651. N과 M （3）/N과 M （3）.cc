#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

void dfs(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << v[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++)
	{

		v.push_back(i + 1);
		dfs(cnt + 1);
		v.pop_back();
	

	}

	

}


int main(void)
{
	cin >> n >> m;

	dfs(0);


	return 0;
}