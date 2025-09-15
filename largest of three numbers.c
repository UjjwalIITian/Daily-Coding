#include<stdio.h>
int main(){
	int a=10,b=20,c=30;
	//printf("Enter a  number : ");
	//scanf("%d",&n);
	if(a>b&&a>c){
		printf("a is largest number");
	}
	else if(b>a&&b>c)
		printf("b is largest number");
	else{
			printf("c is largest number");
	}
}