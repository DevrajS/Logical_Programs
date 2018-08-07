#include<stdio.h>
int fact(int n)
{
	int f=1;
    for (int i = n; i > 0; --i)
    {
    	f=i*f;
    }
    return f;
}
int combi(int n,int r)
{
	return (fact(n)/fact(n-r)/fact(r));
}
void pascal_triange(int row)
{	
	int col=(2*row)-1;
	int k;
	int r;
	for (int i = 1; i <= row; ++i)
	{  r=0;
		for (int j=1; j<= col; ++j)
		{
			if (j>=row+1-i &&j<=row-1+i && k)
			{
				k=0;
				printf("%2d",combi(i-1,r));
				r++;
			}
			else
			{
				k=1;
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main(int argc, char const *argv[])
{

	pascal_triange(11);
	return 0;
}