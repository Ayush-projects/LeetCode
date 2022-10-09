// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int left = 0, right = n;
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(isBadVersion(mid) && mid==0)
            {
                return mid;
                
            }
            if(isBadVersion(mid) && !isBadVersion(mid-1) && (mid-1)>=0)
            {
                return mid;
            }
            if(!isBadVersion(mid))
            {
                left = mid+1;
            }
            if(isBadVersion(mid))
            {
                right = mid-1;
            }
        }
        
        return -1;
    }
};