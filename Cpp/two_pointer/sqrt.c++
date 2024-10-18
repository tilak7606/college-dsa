#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
   int x = 4;
   int right = x/2;
   int left = 2;
   int pivot = (left + right )/2;
   int num = pivot * pivot;

   while(left <= right){
    if(num > x){
        right = pivot-1;

    }
    else if(num < x)
    left = pivot + 1;
    pivot = (left + right )/2;
     num = pivot * pivot;
   }

   cout<<right<<endl;

    return 0;
}