class Solution {
public:
    string reverseVowels(string s) {
        string temp = s;
        unordered_map<char, int> m;
        m['a'] =1; m['A'] = 1; m['e'] = 1; m['E'] = 1; m['i'] = 1; m['I'] = 1; m['o']=1; m['O'] = 1; m['u'] = 1; m['U'] = 1;
        
        
        
        vector<char> v;
        for(int i=0; i<s.size(); i++)
        {
            if(m[s[i]]==1)
            {
             v.push_back(s[i]);
            }
        }
        
        
       
        
        
        reverse(v.begin(), v.end());
        
        
        int j =0;
        for(int i=0; i<s.length(); i++)
        {
            if(m[s[i]] ==1)
            {
                s[i] = v[j++];
                
            }
        }
        
        
        return s;
        
    }
};