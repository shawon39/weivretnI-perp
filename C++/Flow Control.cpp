#include <iostream>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
}

int lol = 0;
int main()
{
	input();
	level : // works
	int i = 0;
	int arr[] = {1,2,3,4,5,6};
	for(int x : arr) {
		cout << x <<endl;
	} cout << endl;
	lol++;
	if(lol == 3 ) return 0;
 	goto level;
}