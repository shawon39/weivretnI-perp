#include <iostream>
using namespace std;

input() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int fib(int n) {
  if(n<=1) {
    return n;
  }
  return fib(n-1) + fib(n-2);
}

int main()
{
    input();

    cout << fib(5);
}