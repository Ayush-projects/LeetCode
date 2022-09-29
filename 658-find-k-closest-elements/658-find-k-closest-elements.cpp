class Solution {
public:
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {         
             if(a.second==b.second)
             {
                 return a.first < b.first;
             }
        
             return a.second<b.second;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
       
        vector<pair<int, int>> v;
        vector<int> sol;
        
        
        
        
        
        for(int i=0; i< arr.size(); i++)
        {  pair<int, int> temp;
           temp.first = arr[i];
            temp.second  = abs(arr[i]-x);
            v.push_back(temp);
        }
        
        
        
        
        sort(v.begin(), v.end(), cmp);
        
        
        
        for(int i=0; i<k; i++)
        {
            sol.push_back(v[i].first);
        }
        
        
        sort(sol.begin(), sol.end());
        
        return sol;
        
    }
};