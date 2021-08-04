/*
*Author:Barooj Un Nisa
*Dated:17-02-2021
*Description:Program that prints the rectangle of any character
*/#include<stdio.h>
int main(){
	
	//variables used
	char a;
	int length, breadth;
	
	//Takes user input
	printf("Enter any character\n");
	scanf("%c",&a);
	
	printf("Enter length\n");
	scanf("%d",&length);
	printf("Enter breadth\n");
	scanf("%d",&breadth);
	
	//while loop for printing rectangle of character
	for(int i=1; i<=length; i++){
		
		for(int j =1; j<=breadth;j++ ){
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}