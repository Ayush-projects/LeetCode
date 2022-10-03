class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int area = INT_MIN;
        
        while(i<j)
        {
              int temp = min(height[i], height[j]) * (j-i );
              if(temp > area)
              {
                  area = temp;
              }
              if(height[i]<=height[j])
              {
                  i++;
              }
             else{
                j--;
            }
        }
        
        
        return area;
    }
};


