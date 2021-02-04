#include <iostream>
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
	int x[6] = {19, 10, 8, 17, 9, 15};
	char str[100];
	// cin >> str;
	// cout << str << endl;
	// cin.ignore();
	cin.get(str, 100);
	cout << str << endl;
	// string str;
	// getline(cin, str);
	// cout << str << endl;
	// getline(cin, str);
	// cout << str << endl;
}
