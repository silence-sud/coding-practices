#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int first=1;
	int i=1;
	while( i<n ){
		first*=10;
		i++ ; 
	}// 得到相应位数的数
	printf("first=%d\n",first); 
	//遍历100-999
	i=first;
	while (i<first*10){
		int t=i;
		int sum=0;
		do{
			int d=t%10;//d是最低位 
			t/=10;
			int p=1;
			int j=0;
			while (j<n){
				p*=d;
				j++;//求幂 
			}
			sum += p;
		}while( t>0 );
		if ( sum==i){
			printf("%d\n",i);
		}
		i++;//100向999推进 
	}  
	return 0;
} 
