# pgm2fact
#include <stdio.h>

int main(void) {
    int num,fact=1,i;
    scanf("%d",&num);
    if(num==0)
    printf("%d",fact);
     if(num!=0)
     {
     {
     for(i=1;i<=num;i++)
     fact=fact*i;
     }
     printf("%d",fact);
     }         
       
	// your code goes here
	return 0;
}

