#include<stdio.h>
int main(){
    char name[40];
    fgets(name,40,stdin);
    puts(name);

    int count=0;

    for (int i=0;name[i]!='\0';i++){
        count++;
    }
    printf("the len of users input is :%d",count-1);
    //we do count-1 because of we know that the loop runs upto null character


}