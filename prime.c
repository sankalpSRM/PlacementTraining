//1st Program
#include <stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	if (x > 3 &&(x %2==0 || x % 3  == 0))
		printf("Not prime");
	else{
		for(int i = 5; i*i<=x; i+=6)
			if (x % i == 0 || x % (i+2)==0){
				printf("Not prime");
				return 0;
			}			
		printf("Prime");
	}
		
	return 0;
}
//2nd Program
#include <stdio.h>
#include<math.h>
int main(){
	int x;
	scanf("%d", &x);
	for (int i = 2; i<=sqrt(x); i++){
		if ( x % i == 0){
			printf("Not prime");
			return 0;
		}
	}
	printf("Prime");	
	return 0;
}
