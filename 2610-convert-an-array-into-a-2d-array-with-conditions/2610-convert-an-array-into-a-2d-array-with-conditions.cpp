class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> sol;
        for(int i=0; i<nums.size(); i++)
        {
            if(sol.size()==0)
                {
                    vector<int> temp;
                    temp.push_back(nums[0]);
                    sol.push_back(temp);
                    continue;
                }   
          int test = -1;
            for(int j=0; j<sol.size(); j++)
            {
               
                int row = -1;
                 for(int k=0; k<sol[j].size(); k++)
                 {
                     if(sol[j][k]==nums[i])
                     {
                          row = j;
                     }
                 }
                
                if(row==-1)
                {
                    
                    sol[j].push_back(nums[i]);
                    test = 1;
                    break;
                }   
            }
               if(test==-1)
               {
                   vector<int> lol;
                   lol.push_back(nums[i]);
                   sol.push_back(lol);
               }
    
        }
        return sol;
    }
};