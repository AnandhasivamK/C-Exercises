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
	if(n1%2==0) printf("even\n");
	else printf("odd\n");

	// method-2
	
	if(n1&1) printf("odd\n");
	else printf("even\n");
	

}
