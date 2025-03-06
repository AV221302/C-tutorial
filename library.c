#include<stdio.h>
#include<string.h>
void salting(char password[]);
void slice(char str[],int n,int m);
void countvowel(char sen[]);
void letterchecker(char Str[],char ch);
int main(){
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    printf("the length of str is :%d\n",len);
    char oldstr[]="oldStr";
    char newStr[]="newStr";
    strcpy(newStr,oldstr);
    printf("%s\n",newStr);

    char first[100]="Hello";
    char second[]="World";
    strcat(first,second);
    printf("%s\n",first);
    printf("%s\n",second);

    //compares two strings and retruns a value if it returns 0 then both str is equal and it's positive,negative depends on the ascii value
    char firstStr[]="Apple";
    char secondStr[]="Banana";

    
    printf("%d\n",strcmp(firstStr,secondStr));
    //it gives negative because of that the Ascii value of the b is more than the ascii value of a

    char ch;

    int i=0;
    while(ch!='\n'){

        scanf("%c",&ch);
        str[i]=ch;
        i++;

    }
    str[i]='\0';
    puts(str);

    //salting means that when we give our password to any company then they insert some keyword at random position 

    char password[100];
    scanf("%s",password);
    salting(password);


    char Str[]="Hello World";
    slice(Str ,3,6);

    letterchecker(Str,'W');



    return 0;
}

void salting(char password[]){
    char salt[]="123";

    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);


}

void slice(char str[],int n,int m){
    char newstr[100];
    int j=0;
    for (int i=n;i<m;i++,j++){
        newstr[j]=str[i];

    }
    newstr[j]='\0';
    printf("the slice str is:%s\n",newstr);

    char sen[56]="avanish";
    countvowel(sen);

}


void countvowel(char sen[]){
    char lst[]={'a','e','i','o','u','A','E','I','O','U'};
    int cnt=0;
    for(int i=0;sen[i]!='\0';i++){
        for(int j=0;j<10;j++){
            if (lst[j]==sen[i]){
            cnt++;
            break;
            
        }
        
        }
        
    }
    printf("the count of vowels in the str is:%d\n",cnt);
}



void letterchecker(char Str[],char ch){
    
    for(int i=0;Str[i]='\0';i++){
        if(ch==Str[i]){
            printf("yes this is find in str at index:%d",i);
            return;
        }
        else{
            printf("this is not find in str\n");
            return;
        }
    }
}