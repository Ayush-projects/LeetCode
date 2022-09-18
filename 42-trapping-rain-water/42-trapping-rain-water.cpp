class Solution {
public:
    int trap(vector<int>& height) {
          vector<int> right = height;
        vector<int> left = height;
        int n = height.size();
        
        for(int i=1; i<height.size(); i++)
        {
            right[i] = max(right[i], right[i-1]);
        }
        
        for(int i=n-2; i>=0; i--)
        {
            left[i] = max(left[i], left[i+1]);
        }
        int sol = 0;
        for(int i=0; i<n; i++)
        {
            sol += min(right[i], left[i])-height[i];
        }
        
        
        
        return sol;
    }
};