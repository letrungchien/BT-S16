#include<stdio.h>
   void doicho(int*in1,int*in2);  
int main(){
	int number1=10;
	int number2=15;
	 printf("gia tri cua bien numbre1 la %d\n",number1);
	 printf("gia tri cua bien number2 la %d\n",number2);
	doicho(&number1,&number2);
	printf("gia tri cua bien numbre1 la %d\n",number1);
	printf("gia tri cua bien number2 la %d\n",number2);
	
	return 0;
}
 void doicho(int*in1,int*in2){
 	int temp=*in1;
 	*in1=*in2;
 	*in2=temp;

 }
