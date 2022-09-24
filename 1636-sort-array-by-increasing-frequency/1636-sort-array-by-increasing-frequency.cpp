class Solution {
public:
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        if(a.second==b.second)
        {
            return a.first > b.first;
        }
        
        
        return b.second > a.second;
        
    }
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        vector<pair<int, int>> v;
        
        
        for(auto i : m)
        {
            pair<int, int> temp;
            temp.first = i.first;
            temp.second = i.second;
            v.push_back(temp);
        }
        
        vector<int> sol;
        
        
        sort(v.begin(), v.end(), cmp);
        
        
//         for(int i=0; i<v.size(); i++)
//         {
//             cout<<v[i].first<<endl;
//         }
        
        
       
        
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v[i].second; j++)
            {
                sol.push_back(v[i].first);
            }
        }
         return sol;
    }
};