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
int Find_majority(int [],int);
int main() {
     int arr[5]={4,4,3,8,2};
     int testcase,size,majority_num_array[10];

     printf("Enter Number of Test case:");
     scanf("%d",&testcase);

     for (int i = 0; i <testcase; ++i)
     {
        printf("\nEnter size of the Array: ");
        scanf("%d",&size);
        int *arrpointer=(int *)malloc(sizeof(int)*size);
        for(int i=0;i<size;i++)
         {
         scanf("%d",&arrpointer[i]);
        }
        majority_num_array[i]=Find_majority(arrpointer,size); 
     }

      for (int i = 0; i < testcase; ++i)
         {
            majority_num_array[i]?printf("\n%d",majority_num_array[i]):printf("\nNo majority");
         }    
   
      
	 return 0;
}
int Find_majority(int arr[],int size)
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
  
    int result=maxcount>size/2?majority_number:0;
    return result;
}