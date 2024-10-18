#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pre(vector<int>&arr,vector<int>&prefix){
    prefix[0] = arr[0];
    
    for(int i = 1; i< arr.size() ;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
}

void post(vector<int>&arr,vector<int>&post){
    int n = arr.size();
    post[0] = arr[n-1];
    int j = 1;
    for(int i= n-2; i>= 0;i--){
    post[j] = post[j-1] + arr[i];
    j++;
    }
}

int getsum(vector<int>&p,int l,int r){
    if(l == 0)
    return p[r];

    else return (p[r] - p[l-1]);
}

bool is_equali(vector<int>&pre,vector<int>&post){
    int n = pre.size();
    for(int i = 0 ;i < n ; i++){
    if(pre[i] == post[n-1-i])
    return true;
    }
    return false;
}
int main()
{
    // vector<int>arr = {2,5,8,7,4,10};

     vector<int>arr = {3,4,8,-9,20,6};
    //   vector<int>arr = {4,2,2};
    vector<int>prefix(arr.size());
    pre(arr,prefix);
    vector<int>postfix(arr.size());
    post(arr,postfix);


    bool ans = is_equali(prefix,postfix);
   if(ans)
   cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

    // int ans = getsum(prefix,1,3);

    // cout<<ans<<endl;

    return 0;
}