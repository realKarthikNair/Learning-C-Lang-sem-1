### 1. sparse_matrix.c
```c
int main()
{
	int a[10][10],b[20][3];
	int m,n,i,j,count=0,k=1;
	printf("Inputting matrix\n");
	printf("\nEnter the number of rows of matrix:");
	scanf("%d",&m);
	printf("\nEnter the number of columns of matrix:");
	scanf("%d",&n);
    printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element of row-%d and column-%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
    printf("\n");
	for(i=0;i<m;i++)
	{
		printf("| ");
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			if(a[i][j]!=0)
			{
				count+=1;
			}
		}
		printf(" |\n");
	}
	if(count<((m*n)/2))
	{
		printf("\nThis matrix is sparse matrix.");
		printf("\nnon-zero elements: %d",count);
		printf("\nzero elements: %d",(m*n)-count);
		//Representing into 3 tuple form
		b[0][0]=m;
		b[0][1]=n;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]!=0)
				{
					b[k][0]=i;
					b[k][1]=j;
					b[k][2]=a[i][j];
					k++;
				}
			}
		}
		k--;
		b[0][2]=k;
		printf("\nThree tuple form\n");
		for(i=0;i<=k;i++)
		{
			printf("| ");
			for(j=0;j<3;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf(" |\n");
		}
	}
	else
	{
		printf("\nThis matrix is not sparse matrix.");
	}
	
}
```

