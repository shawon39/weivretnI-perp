#include <iostream>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
}

struct Person {
	char name[100];
	int age;
	float salary;
};

int main()
{
	input();
	Person p;
	cin >> p.name >> p.age >> p.salary;
	cout << p.name << endl;
	cout << p.age << endl;
	cout << p.salary << endl << endl;

	// structure type pointer
	Person *ptr = &p;

	cout << (*ptr).name << endl;
	cout << (*ptr).age << endl;
	cout << (*ptr).salary << endl;
}