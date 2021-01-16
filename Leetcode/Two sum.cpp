class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            int x = target - nums[i];
            if(mp.find(x) != mp.end()) {
                ans.push_back(mp.at(x));
                ans.push_back(i);
                return ans;
            }
            else {
                mp.insert({nums[i], i});
            }
        }
        return ans;
    }
};