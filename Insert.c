#include<stdio.h>
typedef struct Student
{
	int rollno,p,c,m;
	char name[30];
}STD;
void main(){
	STD S;
	FILE *p;
	char ch;
	p=fopen("std.db","r");
	if(p==NULL){
		p=fopen("std.db","w");
	}
	else{
		p=fopen("std.db","a");
	}
	do{
		printf("Enter Student Roll Number: ");
		scanf("%d",&S.rollno);
		printf("Enter Student Name: ");
		fflush(stdin);
		gets(S.name);
		printf("Enter Student Physics: ");
		scanf("%d",&S.p);
		printf("Enter Student Chemistry: ");
		scanf("%d",&S.c);
		printf("Enter Student Mathematics: ");
		scanf("%d",&S.m);
		
		fwrite(&S,sizeof(S),1,p);
		printf("\aWant to add more Students? y/n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	fclose(p);
}
