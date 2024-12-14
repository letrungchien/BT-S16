#include<stdio.h>

int main(){
	int number=5;
	int *numberPtr = &number;
	printf("cach 1 qua bien\n");
	printf("gia tri cua bien la %d\n",number);
	printf("di chi cua bien la %d\n",&number);
	
	printf("cach 2 qua con tro\n");
	printf("gia tri cua bien la %d\n",*numberPtr);
	printf("di chi cua bien la %d\n",numberPtr);
	
	
	return 0;
}

