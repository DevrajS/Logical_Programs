/*
   |DevRaj|
    Link of the problem : https://www.hackerrank.com/challenges/the-birthday-bar/problem
*/

#include<stdio.h>
int birthday(int s_count, int* s, int d, int m) {
     int count=0;
    int sum_square=0;  
    int limit=m;
    for(int i=0;i<s_count && limit<=s_count;)
    {

        for(int j= i;j<limit && j<s_count;j++)     
            sum_square=sum_square+s[j];
        
        if(sum_square==d)
            count++;
        sum_square=0;
        limit++;
        i++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int arr[]={4,5,4,2,4,5,2,3,2,1,1,5,4};
    int size,d,m;
    size=13;
    d=15;
    m=4;
    printf("%d",birthday(size,arr,d,m));
    return 0;
}