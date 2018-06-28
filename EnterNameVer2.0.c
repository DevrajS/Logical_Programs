
/*
Enter name version 2.0
Developer : Neeraj Kr. sharma
   Q. program to Enter names of minimum size 10 characters and print it on the std output device using array of 
   character pointers.
   Dry Run:
      Input :
               ramesh
               dinesh
               shyam
      output:
      			ramesh
      			dinesh
      			shyam         
  
*/
#include<stdio.h>
int main()
{
	char *p[3];  //Array of character pointers

	for (int i = 0; i < 3; ++i)
	
		p[i]=(char *)malloc(sizeof(char)*10);
	
	printf("Enter Names:\n");
	for (int i = 0; i < 3; ++i)
		
			scanf("%s",p[i]);
			
	for (int i = 0; i < 3; ++i)
	
		printf("%s\n",p[i]);
	
    
	return 0;
}