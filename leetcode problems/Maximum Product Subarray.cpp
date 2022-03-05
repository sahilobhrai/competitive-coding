class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=1,b=1,sum=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++){
            a*=nums[i];
            b*=nums[n-i-1];
            sum=max({sum,a,b});
            if (a == 0) a = 1;
            if (b == 0) b = 1;
        }
        return sum;
    }
};
