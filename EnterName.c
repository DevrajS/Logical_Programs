
/*
Developer : Neeraj Kr. sharma
   Q. program to Enter names of minimum size 10 characters and print it on the std output device.
   Dry Run:
      Input :
               ramesh
               dinesh
               shyam
      output:
      			ramesh
      			dinesh
      			shyam         
  Comment : I have used totally different approach for this.
*/
#include<stdio.h>
int main()
{
	int i=0,c,limit=0;
	char buffer[32];

	printf("Enter names(press ctrl+z to exit):\n");
	while((c=getchar())!=EOF)
	{
		limit++;
		 if(limit<=11){

		 	if(c=='\n'){
				buffer[i++]='\n';
				limit=0;
		    }
			else
			    buffer[i++]=c;
		 }
		 else
		 {
		 	printf("Name greater than 10 characters is not allowed\n");
		 	break;
		 }  
	}
	
	 buffer[i]='\0';
	
	 i=0;
	 printf("Following are the Entered Names:\n");
     while(buffer[i]!='\0')
     {

     	putchar(buffer[i]);
     	i++;
     }

	return 0;
}