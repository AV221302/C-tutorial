#include<stdio.h>
#include<string.h>
//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    //structure is user defined data type

    struct student s1;
    s1.roll=1664;
    s1.cgpa=9.2;
    //s1.name="Shraddha"   //we can not do this because if we define char[] then it is not reinitialigable;

    strcpy(s1.name,"Shraddha");
    printf("strudent roll number:%d\n",s1.roll);
    printf("student cgpa:%f\n",s1.cgpa);
    printf("student name:%s\n",s1.name);


    return 0;
}