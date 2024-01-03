class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
         int sum = 0;
          int k = count(bank[0].begin(), bank[0].end(), '1');
         for(int i=1; i<bank.size(); i++)
         {
             int k1 = count(bank[i].begin(), bank[i].end(), '1');
             if(k1 != 0)
             {
             sum += k*k1;
             k = k1;
             }
             
               
         }
        
        return sum;
        
        
    }
};