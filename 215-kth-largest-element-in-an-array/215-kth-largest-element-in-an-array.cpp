class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p(nums.begin(), nums.end());
        
        while(p.size()!= (nums.size()-k+1))
        {
            p.pop();
        }
        
        return p.top();
    }
};