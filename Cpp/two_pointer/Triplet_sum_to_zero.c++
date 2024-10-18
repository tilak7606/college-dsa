#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet_sum(vector<int> &arr)
{
    // sort kar do :
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int left = i + 1, right = arr.size() - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0)
            {
                ans.push_back({arr[i], arr[left], arr[right]});
                while (left < right && arr[left] == arr[left + 1])
                    left++;
                while (left < right && arr[right] == arr[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum > 0)
                right--;
            else
                left++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = triplet_sum(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }
    cout << endl;

    return 0;
}