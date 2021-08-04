#include<stdio.h>
#define size 30

//function prototype
void multiplyArray(int b[],size_t p);

int main(){
	int num[size],n,i;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	printf("Enter numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	multiplyArray(num,n);
	return 0;
}

void multiplyArray(int b[],size_t p){
	int m,product =1,i;
	printf("Enter the multiplier");
	scanf("%d",&m);
	for(i=0;i<p;i++){
		product = m*b[i];
		printf("%d ",product);
	}
}