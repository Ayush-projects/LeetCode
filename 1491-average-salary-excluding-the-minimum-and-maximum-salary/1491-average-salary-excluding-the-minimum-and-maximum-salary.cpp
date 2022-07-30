class Solution {
public:
    double average(vector<int>& salary) {
        int max = *max_element(salary.begin(), salary.end());
        int max_count = count(salary.begin(), salary.end(), max);
        int min = *min_element(salary.begin(), salary.end());
         int min_count = count(salary.begin(), salary.end(), min);
        double sol = ((accumulate(salary.begin(), salary.end(), 0) - max - min )*1.0)/(salary.size()-max_count-min_count);
        return sol;
    }
};