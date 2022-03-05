
#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
sort(nums.begin(),nums.end());
int ans=1;
for(int i=0;i<nums.size();i++)
{
if(nums[i]==ans)
ans++;
}
return ans;
}
int main() {
vector<int>arr={0, -9, 1, 2, -4 ,5};
cout << firstMissingPositive(arr);
return 0;
}
