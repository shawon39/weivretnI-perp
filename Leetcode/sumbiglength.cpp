#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1={2,4,9}, v2={5,6,4,9}, ans;

    int x = v1.size()-1;
    int y = v2.size()-1;
    int mx = max(x,y);
    int left = 0;

    cout << mx << endl;

    for(int i=mx; i>=0; i--)
    {
        if(x>=0 && y>=0)
        {
            if( v1[x] + v2[y] + left >=10 )
            {
                ans.push_back((v1[x] + v2[y] + left)%10);
                left=1;
            }
            else {
                ans.push_back(v1[x] + v2[y] + left);
                left=0;
            }
            x--; y--;
        }
        else if(x>=0){
            if( v1[x] + left >=10 )
            {
                ans.push_back((v1[x] + left)%10);
                left=1;
            }
            else {
                ans.push_back(v1[x] + left);
                left=0;
            }
            x--;
        }
        else if(y>=0){
            if( v2[y] + left >=10 )
            {
                ans.push_back((v2[y] + left)%10);
                left=1;
            }
            else {
                ans.push_back(v2[y] + left);
                left=0;
            }
            y--;
        }
    }
    if(left) ans.push_back(1);
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    } cout << endl;
}














