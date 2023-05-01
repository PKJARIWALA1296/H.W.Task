#include <stdio.h>
main(){
	int age;
	printf("\n Enter Your Age :");
	scanf("%d",&age);
	if (age>=18){
		printf("\n You are eligible for Voting.");
	}
	else{
	    printf("\n You are not eligible for Voting.");	
	}
}
