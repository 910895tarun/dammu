#include <stdio.h>
int main()
{
  FILE *fp;
  char name[80];
  int rollno;
  puts("Writing data for file");
  fp=fopen("INPUT.txt","w");
  if(fp==NULL)
  {
    printf("\n the file could not be opened");
  }
  printf("\n enter the name and Roll number\t");
  scanf("%s",&name);
  scanf("%d",&rollno);
  fprintf(fp,"Name=%s\n",name);
  fprintf(fp,"roll_no=%d",rollno);
  fclose(fp);
  puts("Reading from file");
  fp=fopen("INPUT.txt","r");
  while(fscanf(fp,"%s",name)!=EOF)
  {
     printf("%s\n",name);
  }
  fclose(fp);
  return 0;
}