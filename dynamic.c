#include<stdio.h>
#include<stdlib.h>

int main(){
    //use of malloc

    int *ptr;
    int n;
    printf("Enter  the size of the array you want to create\n:"); 
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("The value at %d of this array is %d\n");
    }
}