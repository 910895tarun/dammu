#include <stdio.h>

int main()
{
  char str[50];

	int l = 0,i=0;
  printf("input the string\t");
  gets(str);
  while(str[i]!='\0')
  {i++;

  }
printf("\n%d\n",i);

i--;
	while (i > l)
	{
		if (str[l++] != str[i--])
		{
			printf("%s \t is Not Palindrome\n", str);
			return 0;
		}
	}
	printf("%s  \t is palindrome\n", str);
}