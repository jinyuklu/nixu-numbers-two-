#include<stdio.h>
int main()

{  
 int x; 

scanf("%d",&x);
int digit;
int a;
	digit=x%10;
	x/=10;
	x=x%10;
	a=10*digit+x;
	
	

printf("%d\n",a);
return 0;
} 
