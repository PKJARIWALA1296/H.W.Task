#include <stdio.h>
main(){
	char ch;
	printf("\n Enter the Character :");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
		printf("\n Given Character is Vowel.");
	}
	else{
		printf("\n Given Character is Consonants.");
	}
}
