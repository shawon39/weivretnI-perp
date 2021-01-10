#include <iostream>
using namespace std;

int main()
{
    int arr[15];
    for(int i=0; i<15; i++) arr[i] = i+1;
    int i = 0;
    while(arr[++i] != 10) cout << arr[i] << endl;
}
