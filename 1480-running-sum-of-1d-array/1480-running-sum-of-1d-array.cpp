class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sol;
        int sum = 0;
        for(auto i: nums)
        {
            sum += i;
            sol.push_back(sum);
        }
        return sol;
    }
};