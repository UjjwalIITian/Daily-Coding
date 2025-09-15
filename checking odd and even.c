#include<stdio.h>
int main(){
	int n;
	printf("Enter a  number : ");
	scanf("%d",&n);
	if(n%2==0){
		printf("This number %d is even",n);
	}
	else{
		printf("This number %d is odd",n);
	}
}