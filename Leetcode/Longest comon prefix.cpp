#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> str;

    cout << str.size() << endl;

    int i, j, br=0;
    string ans = "";
    for(j=0; j<200; j++) {
        for(i=0; i<str.size()-1; i++)
        {
            if(str[i][j] != str[i+1][j]) {
                br = 1;
                break;
            }
            else if(str.size()-2 == i) {
                ans += str[i][j];
            }
        }
        if(br) break;
    }
    cout << "Last => " << ans <<endl;
    return 0;
}
