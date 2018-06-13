/* 
Developer :Neeraj kr. Sharma
program to find the occurence of characters in strings
*/

#include<stdio.h>
void charoccurence(int arr[]);
void getString(int []);
void main()
{
    int arr[100];
    getString(arr);
    charoccurence(arr);
}
void getString(int arr[])
{
    int c;
    int i=0;
     printf("Enter Strings : ");
   
     while( (c=getchar())!='\n')
     {
         arr[i]=c;
         i++;
     }
     arr[i]='\0'; 
}
void charoccurence(int arr[])
{
      int i=0,j=0,count;
    int c;

  for(i=0;arr[i]!='\0';i++)
    {
        count=1; 
          if(arr[i]!='#')
          {
              for(j=i+1;arr[j]!='\0';j++)
             {
             if(arr[i]==arr[j])
             {
                arr[j]='#';
               count++;
             }
            }
            printf("Occurence of %c is %d\n",arr[i],count);
          }
    }
}