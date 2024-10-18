#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void shell_sort(int *arr,int n){
    

    for(int gap = n/2; gap > 0; gap /= 2){
        for(int j = gap; j < n;j++){
            for(int i = j- gap; i >=0 ;i = i-gap){
                if(arr[i+gap] > arr[i])
                break;
                else{
                    swap(arr[i+gap],arr[i]);
                }
            }
        }
    }
}


int main()
{
    int arr[6] = {20,15,14,78,98,78};
    shell_sort(arr,6);
    for(int i = 0; i < 6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}