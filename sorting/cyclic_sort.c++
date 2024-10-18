#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void cyclic_sort(vector<int>&nums){
    int i = 0;
    while(i != nums.size()-1){
        if(nums[i] != i+1){
            swap(nums[i],nums[nums[i]-1]);
        }
        else i++;
    }
}


int missing_num(vector<int>&nums){
     int i = 0;
    while(i != nums.size()){
        if(nums[i] < nums.size() && nums[i] != i ){
            swap(nums[i],nums[nums[i]]);
        }
        else i++;
}

for(int i =0 ; i< nums.size();i++){
    if(nums[i] != i)
    return i;
}
return -1;
}

int main()
{
    vector<int>nums = {0,3,2,4,6,1};
    // cyclic_sort(nums);

    int ans = missing_num(nums);
    cout<<ans<<endl;

    for(auto i : nums)
    cout<<i<<" ";

    cout<<endl;

    return 0;
}