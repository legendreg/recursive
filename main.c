#include<stdio.h>
int test_myfactoriellep2(int n, int r)
{
	n = myfactorielle(n);
	if (n == r)
	{
		printf("Vrai\n");
	}
	else
	{
		printf("Faux\n");
	}
	return(0);
}

void test_myfactorielle(void)
{
	test_myfactoriellep2(5,120);
	test_myfactoriellep2(7,5040);
	test_myfactoriellep2(2,2);
	test_myfactoriellep2(0,1);
	test_myfactoriellep2(10,3628800);
}

int main (void)
{
	test_myfactorielle();
	return(0);
}
