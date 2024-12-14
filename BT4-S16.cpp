#include<stdio.h>
 void inmang(int arr[],int*n);
int main(){
	int arr[]={1,2,3,4,5,6};
	int length=sizeof(arr)/sizeof(int);
	
	inmang(arr,&length);
	
	return 0;
}
void inmang(int arr[],int*n){
	for(int i=0;i<*n;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}

}
