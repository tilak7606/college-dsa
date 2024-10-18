#include <iostream>
#include <bits/stdc++.h>
using namespace std;



 int findUnsortedSubarray(vector<int>& nums) {
         if(nums.size() == 1)
            return 0;
        
        int st = INT_MAX;
        int end = INT_MIN; 
        int min_val = nums[nums.size() - 1]; 
        
        // Traverse from right to left to find the start index of unsorted subarray
        for(int i = nums.size() - 2; i >= 0; i--) {
            if(min_val < nums[i]) {
                st = i;
            } else {
                min_val = nums[i];
            }
        }
        
        int max_val = nums[0]; 
        
     
        for(int i = 1; i < nums.size(); i++) {
            if(max_val > nums[i]) {
                end = i;
            } else {
                max_val = nums[i];
            }
        }
        
        
        if(end == INT_MIN && st == INT_MAX)
            return 0;
        cout<<end<<" "<<st<<endl;
        return (end - st + 1);
    }


int main()
{
    vector<int>nums = {2,6,4,8,10,9,15};
    int ans = findUnsortedSubarray(nums);

    return 0;
}