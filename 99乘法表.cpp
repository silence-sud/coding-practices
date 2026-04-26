#include<stdio.h>
int main(){
	int i=1,j=1;
	int n=9; 
	while(j<=n){
		while (i<=j){
			printf("%d * %d = %d  ",i,j,i*j);
			i++;	
		}
		printf("\n");
		i=1;
		j++;
	}
	return 0;
} 
