#include<stdio.h>
int factorial(int n);

int main(){
//	tinh n gia thua
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	int result = factorial(n);
	printf("ket qua la %d", result);
	return 0;
}

int factorial(int n){
//	phan co so
	if(n ==0){
		return 1;
	}
	
//	phann de quy
//	tinh n giai thua
	n= n*factorial(n-1);
	return n;
}
