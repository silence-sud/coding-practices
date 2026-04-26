#include<stdio.h>
int main (){
	int m=10,n=31; 
	int j=2;
	int i=m;
	int sum=0,count=0;
	while (i<=n){
		int isprime=1;
		for(j = 2; j < i; j++){
			if (i%j==0){
				isprime=0;
				break;
			}
		}
		if (isprime==1){
			count++;
			sum+=i;
		}
		i++;
	}
	printf("%d %d",count,sum);
	return 0;
} 
