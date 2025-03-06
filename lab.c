#include <stdio.h>
int main(){
    char str[56];
    fgets(str,56,stdin);
    puts(str);
    char lst[56];
    for (int i=0;str!='\0';i++){

        lst[i]=str[i];

    }
    printf("%c",lst);
}