class Solution {
public:
    bool isSubsequence(string s, string t) {
      if(s==t)
      {
          return true; 
      }
        
       int j =0;
        char temp = s[j];
        string ans = "";
        
        for(int i=0; i<t.length(); i++)
        {
            if(t[i]==temp)
            {
                ans += temp;
                j++;
                temp = s[j];
                
            }
            
            
            if(ans==s)
            {
                return true;
            }
            
        }
        
        
        
        return false;
        
    }
};