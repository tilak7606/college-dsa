#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int morre_algorithm(vector<int>&arr){
    int vote = 0;
    int candidate = -1;
    for(int i = 0; i< arr.size() ;i++){
        if(vote == 0){
            candidate = arr[i];
            vote++;

        }
        else{

        if(arr[i] == candidate)
        vote++;
        else vote--;

        }
    }

    int cnt = 0;

    for(auto i : arr){
        if(i == candidate)
        cnt++;

    }

    // cout<<cnt<<endl;
    if(cnt > arr.size()/2)
    return candidate;
    else return -1;
}

int main()
{
    vector<int>arr = {1,2,5,4,5,2,4,5,5,5,5,5};

    // cout<<"Size "<<arr.size()<<endl;
    int ans= morre_algorithm(arr);
    cout<<"The candidate is "<<endl;;
    cout<<ans<<endl<<endl;

    return 0;
}