#include<stdio.h>
#define pf printf
#define sf scanf
void main()
{
	int n;;
	
	pf("Enter a num:");
	sf("%d",&n);

	// method-1
	int n1=n;
	if(n1%2==0) pf("even\n");
	else pf("odd\n");

	// method-2
	
	if(n1&1) pf("odd\n");
	else pf("even\n");
	

}
