#include<iostream>
#include<algorithm>
using namespace std;

bool find3Numbers(int A[], int n, int X)
{
    if (n < 3)
    {
        return false;
    }

    sort(A, A + n);

    int left = 0, right = 0, sum = 0;
    for (int i = 0; i < n - 2; i++)
    {
        left = i + 1;
        right = n - 1;
        while (left < right)
        {
            sum = A[i] + A[left] + A[right];

            if (sum == X)
            {
                return true;
            }
            else if (sum < X)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return false;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    const int n = sizeof(arr) / sizeof(arr[0]);

    cout << find3Numbers(arr, n , 13) << endl;

    return 0;
}
