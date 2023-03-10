#include<iostream>
void print_array(int arr[], int n);

void noAlgoSort(int arr[], int n)
{
    int low = 0;
    int cur = 0;
    int high = n-1;
 
    while (cur <= high) {

        if(arr[cur] == 0)
        {
            std::swap(arr[low], arr[cur]);
            low++;
            cur++;
        }
        else if(arr[cur] == 1)
        {
            cur++;
        }
        else if(arr[cur] == 2)
        {
            std::swap(arr[cur], arr[high]);
            high--;
        }
    }
}

void print_array(int arr[], int n)
{
    for(int i=0 ; i < n ; i++)
    {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    const int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);
    noAlgoSort(arr, n);
    print_array(arr, n);

    return 0;
}
