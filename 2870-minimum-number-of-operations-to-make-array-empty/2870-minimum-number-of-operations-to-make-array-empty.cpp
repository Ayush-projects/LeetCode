class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        int op = 0;
        for(auto i: m)
        {

              cout<<i.first<<" "<<i.second<<endl;
              int num = i.second;
              if(num==2)
              {
                  op += 1;
                  continue;
              }
            if(num==1)
                
            {
                return -1;
            }
            if(num%3==0)
            {
                op += num/3;
    
            }else if(num%3==1)
            {   
                op += ((num/3)-1) + (num-3*((num/3)-1))/2;
              
            }
            else if(num%3==2)
            {   
                op += ((num/3)) + (num-3*((num/3)))/2;
              
            }
            
        }
        
        return op;
    }
    
    
   
    
  
};