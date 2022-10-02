class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> left;
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            left.push_back(sum);
        }
        
        vector<int> right(nums.size(), 0);
        sum = 0;
        for(int i=nums.size()-1; i>=0; i--)
        {
            sum += nums[i];
            right[i] = sum;
        }
        
      
       for(int i=0; i<nums.size(); i++)
       {
           int left_sum = left[i] - nums[i];
           int right_sum = right[i]- nums[i];
           
           if(left_sum==right_sum)
           {
               return i;
           }
       }
        
        return -1;
        
    }
};