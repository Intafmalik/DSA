#include <iostream>
using namespace std;

void insertionSorted(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int currrent = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > currrent)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = currrent;
    }
}
void printSortedAry(int ary[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ary[i] << " ";
    }
}
int main()
{
    int n = 5;
    int arr[] = {2, 3, 1, 5, 4};
    insertionSorted(arr, n);
    printSortedAry(arr, n);
    return 0;
}