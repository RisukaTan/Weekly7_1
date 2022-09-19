#include<stdio.h>//65010536
int isPrime(int x) 
{
	int n = 0;
	if (x <= 2) 
	{
		return 1;
	}
	for (int i = 2; i < x - 1; i++) 
	{
		if (x % i == 0) 
		{
			n = 1;
			break;
		}
	}
	if (n != 1)
	{
		return 1;
	}
}
int main() 
{
	int a;
	printf(" Enter Your Number : ");
	scanf_s("%d", &a);
	if (isPrime(a) == 1) 
	{ 
		printf(" : Is prime number"); 
	}
	else 
	{
		printf(" : Is not prime number");
	}
	return 0;
}