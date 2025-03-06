#include<stdio.h>
//#include<math.h>
 
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>=18){
        printf("you are adult\n");
        printf("you can vote\n");
    }else if(age<18 && age>13){
        printf("you are teenager");
    }else{
        printf("you are child");
    }


        
        
    //else if will be exucute when the if condition will not be true but we use if multiple times if it will be exucute it will not depend on whether the if condition is true or false


    //Ternary Condition

    int marks;

    printf("Enter your marks:");
    scanf("%d",&marks);
    

    marks>80 ?printf("you are topper\n") :printf("you are not topper\n");
//switch case

int day;
printf("Enter day(1-7):");
scanf("%d",&day);
switch(day){
    case 1:printf("Monday\n");
    break;
    case 2:printf("Tuesday\n");
    break;
    case 3:printf("Wednesday\n");
    break;
     case 4:printf("Thursday\n");
    break;
    case 5:printf("Friday");
    break;
    case 6:printf("saturday\n");
    break;
    case 7:printf("sunday\n");
    break;
    default :printf("not a valid day\n");

    
}


    
char Day;
printf("Enter day:");
scanf(" %s ",&Day);
switch(Day){
    case 'm':printf("Monday\n");
    break;
    case 't':printf("Tuesday\n");
    break;
    case 'w':printf("Wednesday\n");
    break;
     case 'T':printf("Thursday\n");
    break;
    case 'f':printf("Friday\n");
    break;
    case 's':printf("saturday\n");
    break;
    case 'S':printf("sunday\n");
    break;
    default :printf("not a valid day\n");

    
}


int h;
printf("Enter your number:");
scanf("%d",&h);
if (h>=0){
    printf("positive");
    if (h%2==0){
        printf("this is an even number");}
        else{
            printf("this is a odd number");
        }
    }
else{
    printf("negative");
}

    



    





    

    return 0;
}