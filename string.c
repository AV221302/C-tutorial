#include<stdio.h>
void printstring(char arr[]);
int main(){
    char name[]={'S','H','R','A','D','H','A','\t','K','H','A','P','R','A','\0'};
    
    printf("%s\n",name);
    
    //we can do this by this also
    char Name[]="SHRADDHA";

    char first_name[]="Avanish";
    char last_name[]="Patel";


    printstring(first_name);
    printstring(last_name);


    char _name[40];
    scanf("%s",_name);

    //here we are not using &name because & specifier represent an address and by the way the array is pointer itself;
    //if we are scannig using the %s then c added \0 itself

    char firstname[40];
    printf("Enter your name:");
    scanf("%s", firstname);
    printf("Your name is:%s\n",firstname);

    char fullname[50];
    printf("Enter your fullname:");
    scanf("%s",fullname);
    printf("Your fullname is :%s\n",fullname);

    //drawback of scanf() is that it cannot input multi-word strings with spaces
    

    //because of this we use gets() & puts() in the place of scanf()  because of that gets() is depresetting (it is outdated and Dangerours )so we will use fgets(str,n,file)

    //stdin means that standered input
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    char str[100];
    fgets(str,100,stdin);
    puts(str);


    //char *str can be reinitialized
    //char str[] can not be reinitialized

    char *canChange="Hello World";
    puts(canChange);
    canChange="Hello";
    puts(canChange);

    char cannotChange[]="Avanish";
    puts(cannotChange);
    //cannotChange="Manish"; it gives error





    return 0;

}

void printstring(char arr[]){

    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);

    }
    printf("\n");


}