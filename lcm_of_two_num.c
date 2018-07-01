/*
   Developer : Neeraj Kr. Sharma

-> program to find Lowest common multiple of two numbers

Input :

   Enter number: 54
   Enter number: 36

 Output:

   Lowest Common multiple: 108

  Limitation : Designed to calculate lcm of only two numbers. 
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int flag=1;
	int num,num2,divisor,lcm=1;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("Enter number: ");
	scanf("%d",&num2);

	divisor=2;

	while(flag)
	{
		if (num%divisor==0 && num2%divisor==0)
		{
			num/=divisor;
			num2/=divisor;
			lcm*=divisor;
		}

		else if (num<divisor && num2<divisor)
		{
			lcm=lcm*num*num2;
			flag=0;
		}

		else
			divisor++;	
	}

	printf("Lowest Common multiple: %d\n",lcm);

	return 0;
}
