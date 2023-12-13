	//Find first and last digits of a number

/*
 * Input : 12345 
 * Output : First digit: 1
 *          last digit : 5
*/
	
#include<stdio.h>
#define pf printf
#define sf scanf

int find_first_digit(int n)
{
	while(n >= 10)
		n = n/10;
	return n;	

}
int find_last_digit(int n)
{
	return (n % 10);
}

void main()
{
	int n;
	pf("Enter a number:");
	sf("%d",&n);
	int first = find_first_digit(n);
 	int last = find_last_digit(n);
	pf("First digit: %d\nlast digit: %d\n",first,last);

}

