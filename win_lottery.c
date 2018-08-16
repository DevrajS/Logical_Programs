/*
Link of problem : https://practice.geeksforgeeks.org/problems/lottery-money/0

*/

#include<stdio.h>
void read_testcase();
void start_game();
void display_result();
int win_lottery(int number);
int numbers[100];
int results[100];
int T;
int win_lottery(int number)
{
	int money;
    int block_size=3;
    int last_element_of_block=3;

    /*Business Logic */
    while(number>last_element_of_block)
    {
    	block_size	=block_size	*2;
    	last_element_of_block = block_size	+last_element_of_block	;
    }
   money = last_element_of_block- number +1;
	/*Business Logic */
   return money;
}
void read_testcase()
{

   for (int i = 0; i <T;  ++i)
   {
   	  scanf("%d",&numbers[i]);
   }
}

void start_game()
{
	for (int i = 0; i <T ; ++i)
	{
	  results[i]=win_lottery(numbers[i]);
	}
	
}
void display_result()
{
  for (int i = 0; i < T; ++i)
  {
  	printf("%d\n",results[i] );
  }
}

int main() {
	//testcases
	scanf("%d",&T);
	read_testcase();
	start_game();
	display_result();
	return 0;
}