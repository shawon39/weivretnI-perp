#include <iostream>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
}

int fun(int& y) {
	y = 20;
	cout << "Address of y = " << &y << endl;
}

int main()
{
	input();
	int x = 10;
	fun(x);
	cout << "Address of x = " << &x << endl << endl;

	int arr[] = {4, 5, 9, 20};
	for(int &a : arr) {
		a += 1;
	}
	for(int &a : arr) {
		cout << a << " ";
	}
	cout << endl;

	// checking address
	for(int a : arr) {
		cout << &a << " ";
	}
	cout << endl;
	for(int &a : arr) {
		cout << &a << " ";
	}
}

/* A pointer in C++ is a variable that holds the memory address of another variable.

A reference is an alias for an already existing variable. Once a reference is initialized 
to a variable, it cannot be changed to refer to another variable. 
Hence, a reference is similar to a const pointer. */


/* Choose auto x : when you want to work with copies.
Choose auto &x : when you want to work with original items and may modify them.
Choose auto const &x : when you want to work with original items and will not modify them. */