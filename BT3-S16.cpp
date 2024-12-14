#include<stdio.h>
int tong(int*a,int*b);
int main(){
	int number1=10;
	int number2=20;
	int ketqua;
	
	ketqua=tong(&number1,&number2);
	
	printf("number1 + number2 = %d\n",ketqua);
	return 0;
}
int tong(int*a,int*b){
	return *a+*b;
}
