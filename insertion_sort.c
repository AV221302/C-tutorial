#include<stdio.h>

void insert_sort(int *arr,int n){
    int key,j;
    //loop for passes
    for (int i=1;i<n;i++){

        key=arr[i];
        j=i-1;
        //loop for each pass
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;

    }

}


int main(){
    int arr[6]={4,5,6,3,9,7};
    for(int i=0;i<6;i++){
        printf("the element of the array is :%d\n",arr[i]);
    }

    printf("Array after sorting\n");
    insert_sort(arr,6);
    for(int i=0;i<6;i++){
        printf("the element of the array is :%d\n",arr[i]);
    }

    return 0;
}