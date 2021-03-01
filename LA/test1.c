#include<stdio.h>
int main()
{
    int num = 100;
    int i=1;
    int sum = 0;
    for(i=1;i<num;i++)
    {
    	sum = sum + i;
    	if(sum > num)
    		break;
    }
    if(sum>50)
        printf("Greater than 50");
    else
        printf("Less than or equal to 50");
    return 0;
/*Hello world
Comments*/
}
