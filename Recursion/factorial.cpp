#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n-1);
}

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // -----------------------------------

    cout << factorial(5) << endl;
}