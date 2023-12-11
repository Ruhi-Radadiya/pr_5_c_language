//Q.2 Write a Program to find the largest element from a given 2D array.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 7
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 9
//a[2][2] = 6
//
//Output:
//The largest element is: 9
#include<stdio.h>
void main()
{
	int row,column,large;
	
	printf("enter the row size:");
	scanf("%d",&row);
	printf("enter the column size:");
	scanf("%d",&column);
	
	int i,j,a[row][column];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			large=a[i][j];
		}
	}
	printf("the largest element is : %d\n",large);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			large>a[i][j];
		}
	}	
}