#include <stdio.h>

void merge(int A[],int mid,int l,int h){
    int B[h+1];

    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=h){
        B[k]=A[j];
        j++;
        k++;
    }

    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }

}

void mergesort(int A[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,h);
        merge(A,mid,l,h);
    }
}



int main(){
    int arr[5]={2,5,3,5,8};
    for (int i = 0; i <sizeof(arr)/4; i++)
    {
        printf("%d\n", arr[i]);
    }
    mergesort(arr,0,4);
printf("Array after the sorting\n");
for (int i = 0; i <sizeof(arr)/4; i++)
{  printf("%d\n", arr[i]);
}
    return 0;

}