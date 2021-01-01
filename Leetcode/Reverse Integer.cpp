#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseInt(int x) {
    if(!x) return 0;
    while(x%10 == 0) x/=10;
    string limit = "2147483647";
    string str = to_string(x);
    string str2 = str;
    if(str2[0]=='-') std::reverse(str2.begin()+1, str2.end());
    else std::reverse(str2.begin(), str2.end());
    int s,cnt=0,mark=0;
    if(str[0] == '-') s = 1;
    else s = 0;
    for(int i=s; i<str.length(); i++) cnt++;
    if(cnt < 10) {
        return stoi(str2);
    }
    else {
        for(int i=s, j=0; i<str2.length(); i++, j++){
            if(limit[j] > str2[i]) { mark = 1; break; }
            else if(limit[j] < str2[i]) { mark = 0; break; }
        }
        if(mark) return stoi(str2);
        else return 0;
    }
}

int main() {
    int x;
    cin >> x;
    cout << reverseInt(x) << endl;
    return 0;
}

//-2147483412
//-2143847412
