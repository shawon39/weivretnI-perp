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

    int n;
    cin >> n;
    cout << n;
    return 0;
}