#include<stdio.h>
main(){
	int ch,billamt,Qty;
	char ans;
	printf("Food System Management");
	printf("test--->");
	Menu:{
	printf("\n ");
	printf("\n * * * * * Menu Card * * * * * ");
	printf("\n Code \t Item \t Price");
	printf("\n 12 \t Burger \t 99");
	printf("\n 17 \t Pizza   \t 150");
	printf("\n 18 \t Cold Coffee \t 50");
	printf("\n 20 \t French Fries \t 90");
	printf("\n 22 \t Grill Sandwich\t 110");
	printf("\n 25 \t Vadapav \t 25");
	printf("\n Enter the choise");
	scanf("%d",&ch);
	}
	switch (ch){
		case 12:
			printf("You choose Burger");
			printf("\n Enter Quantity");
			scanf("%d",&Qty);
			billamt=Qty*99;
			printf("\n Would you like to more buy? Enter Y Or N:");
			scanf("%c", &ans);
			while(ans =='Y'){
				goto Menu; 
				printf("\n Would you like to more buy? Enter Y Or N:");
				scanf("%c", &ans); 
			}
				printf("\n Your Bill is %d",&billamt);
				return 0;
			break;
		case 17:
			printf("You choose Pizza");
			printf("\n Enter Quantity");
			scanf("%d",&Qty);
			billamt=Qty*150;
			printf("\n Would you like to more buy? Enter Y Or N:");
			scanf("%c", &ans);
			while(ans =='Y'){
				goto Menu; 
				printf("\n Would you like to more buy? Enter Y Or N:");
				scanf("%c", &ans); 
			}
				printf("\n Your Bill is %d",&billamt);
				return 0;
			break;
		case 18:
			printf("You choose Cold Coffee");
			printf("\n Enter Quantity");
			scanf("%d",&Qty);
			billamt=Qty*50;
			printf("\n Would you like to more buy? Enter Y Or N:");
			scanf("%c", &ans);
			while(ans =='Y'){
				goto Menu; 
				printf("\n Would you like to more buy? Enter Y Or N:");
				scanf("%c", &ans); 
			}
				printf("\n Your Bill is %d",&billamt);
				return 0;
			break;
		case 20:
			printf("You choose French Fries");
			printf("\n Enter Quantity");
			scanf("%d",&Qty);
			billamt=Qty*90;
			printf("\n Would you like to more buy? Enter Y Or N:");
			scanf("%c", &ans);
			while(ans=='Y'){
				goto Menu; 
				printf("\n Would you like to more buy? Enter Y Or N:");
				scanf("%c", &ans); 
			}
				printf("\n Your Bill is %d",&billamt);
				return 0;
			break;
		case 22:
			printf("You choose Grill Sandwich");
			printf("\n Enter Quantity");
			scanf("%d",&Qty);
			billamt=Qty*110;
			printf("\n Would you like to more buy? Enter Y Or N:");
			scanf("%c",ans);
			if(ans=='Y'){
				goto Menu; 
				printf("\n Would you like to more buy? Enter Y Or N:");
				scanf("%c", &ans); 
			}
				printf("\n Your Bill is %d",&billamt);
				return 0;
			break;
		case 25:
			printf("You choose Vadapav");
			printf("\n Enter Quantity");
			scanf("%d",&Qty);
			billamt=Qty*25;
			printf("\n Would you like to more buy? Enter Y Or N:");
			scanf("%c", &ans);
			while(ans =='Y'){
				goto Menu;
				printf("\n Would you like to more buy? Enter Y Or N:");
				scanf("%c", &ans); 
			}
				printf("\n Your Bill is %d",&billamt);
				return 0;
			break;	
	}
}
