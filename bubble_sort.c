#include <stdio.h>
void bubble_sort(int *arr,int len)
{
    int issorted=0;
    
    for (int i = 0; i < len - 1; i++)
    {
        printf("working on pass number%d\n",i+1);
        issorted=1;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                issorted=0;
            }
        }
        if (issorted){
            return ;
        }
    }
}

    int main()
    {
        int arr[6] = {6, 3, 2, 5, 1, 8};

        //int arr[6]={1,2,3,4,5,6};

        for (int i = 0; i <sizeof(arr)/4; i++)
        {
            printf("%d\n", arr[i]);
        }

        bubble_sort(arr,6);
        printf("the sorted arr\n");
        for (int i = 0; i <sizeof(arr)/4; i++)
        {
            printf("%d\n", arr[i]);
        }

        return 0;
    }