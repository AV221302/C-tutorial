#include<stdio.h>
void selectionSort(int *arr,int n){
    int indexOfMin,temp;
   
    for (int i=0;i<n;i++){
        indexOfMin=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[indexOfMin]){
                indexOfMin=j;
        }
       
        }
        temp=arr[i];

        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;


    }
    

}

int main(){
    int arr[5]={2,5,3,5,8};
    for (int i = 0; i <sizeof(arr)/4; i++)
    {
        printf("%d\n", arr[i]);
    }
    selectionSort(arr,5);
printf("Array after the sorting\n");
for (int i = 0; i <sizeof(arr)/4; i++)
{
    printf("%d\n", arr[i]);
}


    return 0;
}