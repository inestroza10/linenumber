/*  Project 2: Line Number
*/

#include <stdio.h>

int main ()
{
  FILE *file;
  char c;
  int n = 2;
  file = fopen("p2_test.txt", "r");
  if (file == NULL) 
      perror ("Error Reading File");
  else
  {
	  printf("1\t");  
    do 
	{
		c = getc (file);
		printf("%c", c);
		if(c == '\n')
		{	
			printf("%d\t",n);
			n++;
		}
	} 
	while (c != EOF);
    fclose (file);
  }
	printf("\n");
  return 0;
}
