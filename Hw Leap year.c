#include <stdio.h>
main(){
	int year;
	printf("\n Enter The year :");
	scanf("%d",&year);
	if(year%4==0){
		printf("\n Given Year is Leap Year.");
	}
	else{
		printf("\n Given Year is normal Year.");
	}
}
