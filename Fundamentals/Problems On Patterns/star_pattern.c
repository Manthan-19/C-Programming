#include<stdio.h>
void Pattern(int iRow, int iCol)
{
// Logic
	
	for(int i=1;i<=iRow;i++)
	{	
			for(int j=1;j<=iCol;j++)
			{
				printf(" * ");
			}			
			printf("\n");
		
	}	
	
}

int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows:");
scanf("%d",&iValue1);
printf("Enter number of columns:");
scanf("%d",&iValue2);
Pattern(iValue1, iValue2);
return 0;
}
