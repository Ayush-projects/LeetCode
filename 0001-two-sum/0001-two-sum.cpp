class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       vector<int> sol;
        
        unordered_map<int, int> m;
        
        
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]] = i;
        }
        
        
        
        
        // for(auto i: m)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        
        
        
        for(int i=0;i<nums.size(); i++)
        {
            int n = target - nums[i];
            if(m.count(n)>0 && m[n] != i)
            {
                sol.push_back(i);
                sol.push_back(m[n]);
                break;
            }
        }
  
        
    // 3 0
    // 2 1
    // 4 2    
        
        
     
        
        
        
        
        
       return sol; 
    }
};