### 1. pointer_to_a_function_problem1.c
```c

int sum(int x,int y);
int sub(int x,int y);
int mult(int x,int y);
int div(int x,int y);

int sum(int x, int y)
{
	return x+y;
}
	
int sub(int x,int y)
{
	return x-y;
}
int mult(int x, int y)
{
	return x*y;
}
int div(int x, int y)
{
	return x/y;
}



int main()
{
	int choice,x,y;
	int (* ptr[4])(int,int);
	printf("0 for Addition\n 1 for Subtraction\n 2 for Multiplication\n 3 for Division\n");
	scanf("%d",&choice);
	printf("Enter first number:\n");
	scanf("%d",&x);
	printf("Enter second number:\n");
	scanf("%d",&y);
	ptr[0]=&sum;
	ptr[1]=&sub;
	ptr[2]=&mult;
	ptr[3]=&div;
	printf("%d\n", ptr[choice](x,y));
}

```

