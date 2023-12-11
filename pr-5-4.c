//Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
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
//Enter row number: 0
//Elements of row 0: 2, 7, 1
//The sum of a row 0: 10
//
//Enter column number: 2
//Elements of column 2: 1, 4, 6
//The sum of column 2: 11
#include<stdio.h>
void main(){
	
	int i,j,row,column;

	printf("Enter size of row:- ");
	scanf("%d",&row);
	printf("Enter size of column:- ");
	scanf("%d",&column);
	 
	int a[row][column];
	 	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Enter a[%d][%d]:- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int rowsum=0;
	int columnsum=0;
	int x,y;

  	printf("enter row number:- ");
 	scanf("%d",&x);
 	
	 for(i=0;i<row;i++){
        for(j=0;j<column;j++){
        	if(i==x){
        		printf("%d ",a[x][j]);
        		rowsum=rowsum+a[x][j] ;
			}
        }        
    }
    printf("\nsum of Elements of row = %d",rowsum);
    
    printf("\nenter column number:- ");
 	scanf("%d",&y);
  	
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
        		if(j==y){
        		printf("%d ",a[i][y]);
        		columnsum=columnsum+a[i][y] ;
			}
        }
    }
     printf("\nsum of Elements of col = %d",columnsum);    
}