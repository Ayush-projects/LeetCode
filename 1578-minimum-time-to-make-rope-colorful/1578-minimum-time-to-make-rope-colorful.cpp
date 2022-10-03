class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        
        char temp = colors[0];
        int t_cost = 0;
        if(colors.length()==1)
        {
            return 0;        }
        
        
        vector<int> v;
        v.push_back(neededTime[0]);
        for(int i=1; i<colors.size(); i++)
        {
            if(colors[i]==temp)
            {
                v.push_back(neededTime[i]);
            }
            else
            {
                if(v.size()>1)
                {
                    t_cost += accumulate(v.begin(), v.end(), 0) - (*max_element(v.begin(), v.end())); 
                }
                v.clear();
                temp = colors[i];
                v.push_back(neededTime[i]);
            }
            // cout<<temp<<endl;
            // for(auto k: v)
            // {
            //     cout<<k<<" ";
            // }
            // cout<<endl;
        }
        
        
        if(v.size()>1)
        {
             t_cost += accumulate(v.begin(), v.end(), 0) - (*max_element(v.begin(), v.end())); 
        }
        
        
        return t_cost;
        
        
        
    }
};