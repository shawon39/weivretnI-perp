#include <iostream>
#include <vector>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif 
}

int main()
{
	input();

	int n;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		v.push_back(i);
	}
	for(auto x : v ) {
		cout << x << endl;
	}
	return 0;
}