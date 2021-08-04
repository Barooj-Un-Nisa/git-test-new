/*
*Author:Barooj Un Nisa
*Dated:17-02-2021
*Description:Program to calculate area of a triangle
*/
#include<stdio.h>
#include<math.h>
double area(double,double,double);
int main(){
	double sideOne = 3,sideTwo = 5,sideThree ,temp,base,height;
	
	//Takes user input
	printf("Enter the three sides of a triangle:");
	scanf("%lf %lf %lf",&sideOne,&sideTwo,&sideThree);
	
	//checking for sides of triangle
	if(sideOne+sideTwo>sideThree || sideOne+sideThree>sideTwo || sideThree+sideTwo>sideOne){
		temp = area(sideOne,sideTwo,sideThree);
		
		//user output
		printf("The area of the triangle is %lf",temp);
	}
	else{
		
		//user output
		printf("These sides can not be the sides of a triangle");
	}
}
//function for calculating area of a triangle
double area(double sideOne,double sideTwo,double sideThree){
	double area,semiPerimeter;
	semiPerimeter=(sideOne+sideTwo+sideThree)/2.0;
	area = sqrt(semiPerimeter*(semiPerimeter-sideOne)*(semiPerimeter-sideTwo)*(semiPerimeter-sideTwo));
	return area;
}