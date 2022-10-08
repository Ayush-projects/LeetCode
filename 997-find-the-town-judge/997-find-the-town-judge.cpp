class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         if(n==1)
         {
             return 1;
         }
        unordered_map<int, int> m;
        for(int i=0; i<trust.size(); i++)
        {
            m[trust[i][0]]++;
            m[trust[i][1]] += 0;
        }
        vector<int> v(100000, 0);
        
         for(int i=0; i<trust.size(); i++)
        {
            v[trust[i][1]]++;
        }
        
        
        
       
        
        for(auto i: m)
        {
            if(i.second == 0 && v[i.first]==n-1)
                                  {
                                      return i.first;
                                  }
        }
                                  return -1;
    }
};