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
	float x = 314159E-5;
	cout << "\b" << x << endl;
	cout << "\f" << x << endl;
	cout << "\n" << x << endl;
	cout << "\r" << x << endl;
	cout << "\t" << x << endl;
	cout << "\v" << x << endl;
	cout << "\\" << x << endl;
	cout << "\'" << x << endl;
	cout << "\"" << x << endl;
	cout << "\?" << x << endl;
	cout << "\0" << x << endl;
}