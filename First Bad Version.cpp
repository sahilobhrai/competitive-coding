class Solution {
public:
    int firstBadVersion(int n) {
        int l=1, r=n;
        while(l<r)
        {
            int med = l/2+r/2;
            if(isBadVersion(med)) r=med;
            else l=med+1;
        }
        return r;
    }
};
