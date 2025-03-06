#include <stdio.h>

// Forward declaration of the partition function
int partition(int *arr, int low, int high);

void quicksort(int *arr, int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quicksort(arr, low, partitionIndex - 1);  // sort left subarray;
        quicksort(arr, partitionIndex + 1, high); // sort right subarray;
    }
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (i <= high && arr[i] < pivot)
        {
            i++;
        }
        while (j >= low && arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

int main()
{
    int arr[5] = {3, 5, 12, 13, 2};
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    quicksort(arr, 0, 4);
    printf("Array after the sorting\n");
    
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}