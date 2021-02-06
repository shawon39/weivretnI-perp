#include <iostream>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
}

class Student {
public:
	int id, age;
};

Student createStudent() {
	Student st;
	st.id = 1;
	st.age = 25;
	return st;
}

int main()
{
	input();
	Student std;
	std = createStudent();
	cout << std.id << endl;
	cout << std.age << endl;
}