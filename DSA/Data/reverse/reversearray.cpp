#include <iostream>

using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (1)
    {
        if (start == end)
        {
            break;
        }
        if (start - end == 1)
        {
            break;
        }
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        end--;
        start++;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    printArray(arr, n);
}