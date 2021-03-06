/* | DevRaj | 

Q. Write a program to find the majority element in the array. 
A majority element in an array A[] of size n is an element that 
appears more than n/2 times (and hence there is at most one such element). 
If input array doesn't contain a majority element, then output 
"NO Majority Element"

*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAXLENGTH 100
int arr[MAXLENGTH];
int size;
int Find_majority();
int main() {
     int testcase,tempnum,majority_num_array[MAXLENGTH];
     printf("Enter Number of Test case:");
     scanf("%d",&testcase);
     if(testcase>=1 && testcase<=100)
     {
          for (int i = 0; i <testcase; ++i)
         {
           printf("\nEnter size of the Array: ");
           scanf("%d",&size);
           if(size>=1 && size<=100)
           {
               for(int i=0;i<size;i++)
              {
                scanf("%d",&tempnum);
                if(tempnum>=0 && tempnum<=100)
                   arr[i]=tempnum;
              }
           }
           
           majority_num_array[i]=Find_majority(); 
         }
         for (int i = 0; i < testcase; ++i)
         {
            majority_num_array[i]!=-1?printf("\n%d",majority_num_array[i]):printf("\nNo majority");
         }  
     }
     else printf("test case should be greater than 0");
    
	 return 0;
}
int Find_majority()
{
    int maxcount=0,count=1;
    int matchnumber=0;
    int majority_number=0; 
    
    for(int i=0;i<size;i++)
    {
        matchnumber=arr[i];
         for(int j=i+1;j<size;j++)
         {
             if(matchnumber==arr[j])
             {
                 count++;
             }
         }
        if(maxcount<count)
        {
         majority_number=matchnumber;     
         maxcount=count;   
        }
    }
  
    int result=maxcount>size/2?majority_number:(-1);
    return result;
}