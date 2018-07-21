/*
 -| DevRaj |

Program to calculate LCM (Least common multiple) of two numbers

Explain :
 Lcm means smallest common multiple of numbers may be two or more.

 For eg :  The smallest number which can be divisible by all the given numbers
 than the number will be lcm of those given numbers.
 
*/

#include<stdio.h>
int lcm(int num1,int num2)
{
  
	for (int lcm = 1;lcm <=num2*num1 ; lcm++) // in worst case it will run till num1*num2
	{
		if (lcm%num1==0 && lcm %num2==0)
		{
			return lcm;
		}
	}
}

int main(int argc, char const *argv[])
{
	int num1,num2,result;
	printf("Enter number");
	scanf("%d %d",&num1,&num2);
    result=lcm(num1,num2);
    printf("Lcm = %d \n",result);
	return 0;
}