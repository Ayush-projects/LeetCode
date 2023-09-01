class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        if(nums.size()<3)
        {
            return {};
        }
        sort(nums.begin(), nums.end());
        if(nums[0]>0)
        {
            return {};
        }
        
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            
            int low = i+1;
            int high = nums.size()-1;
            
            while(low<high)
            {
                int sum = nums[i] + nums[low] + nums[high];
                if(sum<0)
                {
                    low++;
                }
                if(sum>0)
                {
                    high--;
                }
                if(sum==0)
                {
                    sol.push_back({nums[i], nums[low], nums[high]});
                    int low_last = nums[low];
                    int high_last = nums[high];
                    while(low<high && low_last==nums[low])
                    {
                        low++;
                    }
                    while(low<high && high_last==nums[high])
                    {
                        high--;
                    }
                }
            }
           
        }
        
        
         return sol;
            
        
        
        
        
    }
};





