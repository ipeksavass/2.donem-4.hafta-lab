#include <stdio.h>
void swap(int[],int,int);
voidfun(int[],int,int);
int main(){
	int studentNumber[20];
	int i=0,k,readNum;
	printf("enter your student number:");
	
	while(1){
		readNum=getch();
		if(readNum==13)  break;
		putchar(readNum);
		studentNumber[i]=(int)(readNum-'0');
		i++;
	}
	fun(studentNumber,0,i-1);
	printf("\n the array after fun\n");
	for(k=0;k<i;k++){
		printf("%d",studentNumber[k]);
	}
	getch();
	return 0;
}

void swap(int *array,int leftindex,int rightindex){
	int temp;
	temp=array[leftindex];
	array[leftindex]=array[rightindex];
	array[rightindex]=temp;
}

void fun(int *array,int leftindex,int rightindex){
	if(leftindex < rightindex){
		swap(array,leftindex,rightindex);
		fun(array,leftindex+1,leftindex-1);
	}
	
}
