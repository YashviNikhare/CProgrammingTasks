#include<stdio.h>
#include<stdlib.h>
void main(){
	int choice;
	char fake;
	do{
		system("cls");
		printf("Enter your choice\n1] Insert Record\n2] Display Record\n3] Search Record\n4] Exit\n");
		scanf("%d",&choice);
		system("cls");
		switch(choice){
			case 1:
				system("Insert");
				break;
			case 2:
				system("Display");
				break;
			case 3:
				system("Search");
				break;
			case 4:
				printf("Have a Good Day :)\n");
				break;
			default:
				printf("\aWrong Option\n");
		}
		printf("\n\n\n\t\tPress any key to continue...\n");
		fflush(stdin);
		scanf("%c",&fake);
	}while(choice!=4);
}
