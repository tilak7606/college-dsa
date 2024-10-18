 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 
 
 int binary(int *arr,int n,int key){
    int left = 0;
    int right = n-1;
    int ans = -1;


    int mid = (left + right)/2;
    while(left <= right){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key)
        left = mid + 1;
        else 
        right = mid - 1;

        mid = (left + right)/2;

    }
    return -1;
 }


 pair<int,int> occ(int *arr,int n,int key){
    int left = 0;
    int right =n-1;
    int mid = (left + right)/2;
    int locc = -1;

    while(left <= right){
        if(arr[mid] == key){
            locc=  mid;
            right = mid -1;

        }
        else if(arr[mid] < key)
        left= mid+1;
        else 
        right = mid -1;

        mid = (left + right)/2;
    }

    left = 0;
    right = n-1;
    mid = (left + right)/2;
    int rocc = -1;
    
    while(left <= right){
        if(arr[mid] == key){
            rocc = mid;
            left = mid+1;
        }
        else if(arr[mid] < key)
        left= mid+1;
        else 
        right = mid -1;

        mid = (left + right)/2;

    }
    return {locc,rocc};
    
 }

 int count_occ(int *arr,int n,int key)
{
    int mid = binary(arr,n,key);
    if(mid == -1)
    return -1;

    int count = 1;
    int left =mid-1;
    while(left > 0 && arr[left] == key){
        count++;
        left--;
    }

    left =mid+1;
    while(left < n && arr[left] == key){
        left++;
        count++;
    }

    return count;

} 
 int main()
 {
    int arr[12] = {1,2,3,3,3,3,3,3,4,4,4,5};
    
    int cnt = count_occ(arr,12,3);
   cout<<cnt<<endl;

pair<int,int>ans = occ(arr,12,3);
int real_ans = ans.second-ans.first+1;
cout<<real_ans<<endl;
    return 0;
 }