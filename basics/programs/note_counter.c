#include <stdio.h>

int main()
{
	int n;
	printf("Enter amount: ");
	scanf ("%d",&n);
	while (n!=0)
	{
		if (n>=2000)
		{
			int n_2000=n/2000;
			n=n%2000;
			printf("%d 2000 notes\n",n_2000);
		}
		else if (n>=500)
		{
			int n_500=n/500;
			n=n%500;
			printf("%d 500 notes\n",n_500);
		}
		else if (n>=200)
		{
			int n_200=n/200;
			n=n%200;
			printf("%d 200 notes\n",n_200);
		}
		else if (n>=100)
		{
			int n_100=n/100;
			n=n%100;
			printf("%d 100 notes\n",n_100);
		}
		else if (n>=50)
		{
			int n_50=n/50;
			n=n%50;
			printf("%d 50 notes\n",n_50);
		}
		else if (n>=20)
		{
			int n_20=n/20;
			n=n%20;
			printf("%d 20 notes\n",n_20);
		}
		else if (n>=10)
		{
			int n_10=n/10;
			n=n%10;
			printf("%d 10 notes\n",n_10);
		}
		else if (n>=5)
		{
			int n_5=n/5;
			n=n%5;
			printf("%d 5 notes\n",n_5);
		}
		else if (n>=2)
		{
			int n_2=n/2;
			n=n%2;
			printf("%d 2 notes\n",n_2);
		}
		else if (n>=1)
		{
			int n_1=n/1;
			n=n%1;
			printf("%d 1 notes\n",n_1);
		}
	}
}

