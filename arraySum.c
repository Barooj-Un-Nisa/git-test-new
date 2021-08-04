/*
*Author:Barooj Un Nisa
*Dated:27-02-2021
*Description:Program to calculate sum of elements of 1D array
*/

#include<stdio.h>
#define size 30

//function prototype
int sum(int a[],size_t p);

int main(){
	int num[size],n,i,temp;
	
	//Takes user input
	printf("Enter how many numbers:");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	temp = sum(num,n);
	
	//user output
	printf("The sum of elements of array is %d",temp);
	return 0;
}

//function to calculate sum of elements of array
int sum(int b[],size_t p){
	int i,sum = 0;
	for(i=0;i<p;i++){
		sum = sum + b[i];
	}
	return sum;
}