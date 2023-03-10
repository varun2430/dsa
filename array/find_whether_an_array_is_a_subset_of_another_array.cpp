#include<iostream>
#include<unordered_map>
using namespace std;

// can be done in O(nLog(n) + mLog(m)) and constant space using sorting
bool isSubset(int a1[], int a2[], int n, int m)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (freq[a2[i]] > 0)
        {
            freq[a2[i]]--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
    const int n = sizeof(arr1) / sizeof(arr1[0]);
    const int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << isSubset(arr1, arr2, n, m) << endl;

    return 0;
}
