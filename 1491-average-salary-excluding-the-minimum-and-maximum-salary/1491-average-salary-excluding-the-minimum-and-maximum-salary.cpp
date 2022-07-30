class Solution {
public:
    double average(vector<int>& salary) {
        int max = *max_element(salary.begin(), salary.end());
    
        int min = *min_element(salary.begin(), salary.end());
      
        double sol = ((accumulate(salary.begin(), salary.end(), 0) - max - min )*1.0)/(salary.size()-2);
        return sol;
    }
};