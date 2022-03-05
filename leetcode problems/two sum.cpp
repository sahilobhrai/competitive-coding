/*1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



--------------------------------------------------------------------------------------------------------------
solution:*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool flag=false;
        int f,l;
        for(int i=0;i<nums.size()-1;i++){
             for(int j=i+1;j<nums.size();j++){
                 if(nums[i]+nums[j]==target){
                     f=i;
                     l=j;
                     flag=true;
                 }
             }
        } if (flag==true);
        return {f,l};
        
    } 
};
