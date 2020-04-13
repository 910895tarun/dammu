#include<stdio.h>
int main()
{
  float arr[50],avg,sum=0;
  int m,i;
  printf("how many  numbers to be averaged\t");
  scanf("%d",&m);
  printf("enter the values \t");
  for(i=0;i<m;i++){
    scanf("%f",&arr[i]);
}
for(i=0;i<m;i++)
{
  sum+=arr[i];
}
avg=sum/m;
printf("\n the average of %d numbers is= %f\n",m,avg);
}