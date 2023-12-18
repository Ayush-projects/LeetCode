class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val=nums[0];
        int index = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==val)
            {
                continue;
            }
            else
            {
                nums[index++] = val;
                val = nums[i];
                
                
                
            }
            
            
           // cout<<i<<" "<<index<<" "<<val<<endl;
            
        }
       
        nums[index] = val;
        for(auto i: nums)
        {
            //cout<<i<<" ";
        }
        
        return index+1;
    }
};