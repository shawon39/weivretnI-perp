#include <iostream>
#include <vector>
using namespace std;

void input() {
    #ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif 
}

int searchInsertion(vector<int>& nums, int target) 
{
    int low = 0, high = nums.size()-1, mid;
    while(low <= high) {
        mid = (low+high)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] >= target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(nums[mid] > target) return mid;
    else return mid+1;
}

int main()
{
    input();

    int n, target;
    vector<int> nums;
    cin >> n >> target;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        nums.push_back(x);
    }
    int pos = searchInsertion(nums, target);
    cout << pos << endl;
    return 0;
}