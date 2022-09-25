class Solution {
public:

    int minBitFlips(int start, int goal) {
        
          int count = 0;
          int num = (start^goal);
          
        while(num>0)
        {
            num = num&(num-1);
            count++;
        }
        
        
        return count;
        
        
        
    }
};