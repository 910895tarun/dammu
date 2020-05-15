  
#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{ int i,j=1;
struct studentdetails
{
    char  studentname[100];
  char    department[20];
  char rollnumber[10];
    char  section[5];
    int   total_marks;
    float fees;
}student[1];
  for(i=0;i<2;i++)
 {
    printf("STUDENT %d NAME:\n",i+1);
    scanf("%s",&student[i].studentname);
    printf("Enter section:\n");
    scanf("%s",&student[i].section);
    printf("ENTER roll number of student%d:\n",i+1);
    scanf("%s",&student[i].rollnumber);
    printf("Enter Total marks of student%d:\n",i+1);
    scanf("%d",&student[i].total_marks);
    printf("ENTER student%d Department:\n",i+1);
    scanf("%s",&student[i].department);
    printf("enter the fee's of the student%d:",i+1);
    scanf("%f",&student[i].fees);
    printf("\n");}
    if(student[0].total_marks>student[1].total_marks)
    j=0;
    puts("Detials of student who got more marks");
    printf("STUDENT  NAME:%s\n",student[j].studentname);
    printf("section: %s\n",student[j].section);
    printf("Roll number of student:%s\n",student[j].rollnumber);
    printf("Total marks of student: %d\n",student[j].total_marks);
    printf("student Department:%s\n",student[j].department);
    printf("Fee of the student:%f",student[j].fees);
  }

