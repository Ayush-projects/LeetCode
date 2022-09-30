class Solution {
public:
     struct cmp{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        
        return a.second < b.second;
    }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(auto i: nums)
        {
            m[i]++;
        }
        
        
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp > p;
          for(auto i: m)
          {
              p.push(i);
          }
        
        
        vector<int> sol;
        
        int count = 0;
        while(count != k)
        {
            sol.push_back(p.top().first);
            p.pop();
            count++;
        }
        
        return sol;
    }
};