#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int,int> sum_target(vector<int>&arr,int target){
    int left = 0;
    int right = arr.size()-1;

    while(left < right){
        int sum = arr[left] + arr[right];

        // i.e pair found :
        if(sum == target)
        return {arr[left],arr[right]};
        else if(sum > target){
            right--;
        }
        else 
        left++;
    }
    // if no pair exits : 
    return {-1,-1};
}


int main()
{
    vector<int>v = {1,5,9,10,15,18};
    int target = 8;

    pair<int,int>ans = sum_target(v,target);

    cout<<ans.first<<" , "<<ans.second<<endl;

    return 0;
}