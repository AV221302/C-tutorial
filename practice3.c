#include<stdio.h>
void goodBye();

void printHello();

void printNamaste();
void printBonjour();
int main(){
    goodBye();
    printHello();

char ch;
printf("Enter your first character of nationality:");
scanf("%c",&ch);
if(ch=='i'){
    printNamaste();
}else if(ch=='f'){
    printBonjour();
}else{
    printf("not valid");
}

return 0;
}

void goodBye(){
    printf("goodBye\n");
}

void printHello(){
    printf("Hello\n");
}

void printNamaste(){
    printf("Namaste");
}

void printBonjour(){
    printf("Bonjour");
}