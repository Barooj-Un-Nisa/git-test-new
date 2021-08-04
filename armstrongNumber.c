/*
*Author:Barooj Un Nisa
*Dated:09/02/2021
*Description:Program that prints all three digit armstrong numbers
*/
#include<stdio.h>
int main(){
	//variables used
	int sum=0,remainder,temp,number = 123,count;
	
	//logic for printing armstrong numbers
	for(number=100;number<=999;number++){
		
		sum = 0;
		temp=number;
		//logic to check whether a number is armstrong or not
		for(count = 1;count <= 3;count++){
			remainder = temp%10;
			sum += remainder*remainder*remainder;
			temp /= 10;
		}
		if(sum==number){
			printf("%d\n", number);
		}
	}
	return 0;
}