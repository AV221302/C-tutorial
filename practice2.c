#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    // if (marks>30){
    //     printf("You are pass");
    // }else{
    //     printf("you are not passed");
    // }

    marks>30? printf("pass\n"):printf("not pass\n");

    //grade problem

int Marks;
printf("Enter your marks:");
scanf("%d",&Marks);

if (Marks>0 && Marks<30){
    printf("your grade is C\n");
}else if(Marks>=30 && Marks<70){
    printf("Your grade is B\n");

}else if(Marks>=70 && Marks<90){
    printf("your grade is A\n");
}else if (Marks>=90 && Marks<=100){
    printf("your grade is A+\n");
}else{
    printf("Entered number is not valid\n");
}



int _x=2;
if(_x=1){
    printf("x is equal to 1\n");
}else{
    printf("x is not equal to 1\n");
}

char ch;
printf("Enter character:");
scanf("%s", &ch);
if (ch>='A' && ch<='Z'){
    printf("Upper Case\n");
}else if (ch>='a' && ch<='z'){
    printf("Lower Case\n");
}else{
    printf("not English");
}


int n;
printf("Enter your number:");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;


}

printf("The sum of first %d number  is %d\n",n,sum);

int x;
printf("Enter your number:");
scanf("%d",&x);
for(int i=1;i<=10;i++){
    printf("%d X %d=%d\n",x,i,x*i);
}

int e;
printf("Enter your number:");
scanf("%d",&e);
while(e%2==0){
    printf("Enter your number:");
    scanf("%d",&e);
}

//using do while loop
int p;
do{
    printf("Enter number:");
    scanf("%d",&p);
    printf("%d",p);
    if(p%2!=0){
        break;
    }
}while(1);

for(int i=5;i<=50;i++){
    if(i%2==0){
        continue;
    }
    printf("%d\n",i);
}



return 0;

}

