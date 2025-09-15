#include<stdio.h>
int main(){
	int f;//Value in FAHRENHEIT
	float c;// VALUE IN CELCIUS
	printf("enter f value:");
	scanf("%d",&f);
	//printf("enter b value:");
	//canf("%d",&b);
	c=(f-32)/1.8;
	printf("The area of circle is %f",c);
}