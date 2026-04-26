#include <stdio.h> 

int main()
{ 
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0; 
	printf("我已经想好了一个数");
	do{
	  printf("猜猜这个数"); 
	  scanf("%d",&a); 
	  count ++; 
	  if(a>number){
		printf("猜大了");
	  } else if(a<number){
		printf("猜小了"); 
	  } 
	}while(a!=number);
	printf("猜对了，一共猜了%d次\n",count); 

}
