#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
	int rollno,p,c,m;
	char name[30];
}STD;
void main(){
	STD S;
	FILE *p;
	float per;
	int t,found=0;
	char rn,grade;
	p=fopen("std.db","r");
	if(p==NULL){
		printf("File NOT Found!!! \n");
	}
	else{
		printf("Enter Student Roll Number: ");
		fflush(stdin);
		scanf("%d",&rn);
		system("cls");
		printf("\t\t\t\t\tList of Students\n");
		printf("\t\t\t\t\t----------------\n");
		printf("\tRollNo.\t\tName\t\tPhysics\t\tChemistry\tMathematics \tTotal  \tPercentage \tGrade\n");
		printf("\t--------------------------------------------------------------------------------------------------------------\n");
		while(!feof(p)){
			fread(&S,sizeof(S),1,p);
			if(feof(p)) break;
			if(rn==S.rollno){
			t=S.c+S.m+S.m;
			per=t/3;
			if(per<=100 && per>=81){
				grade='A';
			}
			else if(per<=80 && per>=61){
				grade='B';
			}
			else if(per<=60 && per>=41){
				grade='B';
			}
			else if(per<=40 && per>=33){
				grade='C';
			}
			else if(per<=32 && per>=21){
				grade='D';
			}
			else {
				grade='F';
			}
			printf("\t%d\t\t%s\t\t%d\t\t%d\t\t%d \t\t%d  \t%.2f \t\t%c\n",S.rollno,S.name,S.p,S.c,S.m,t,per,grade);
			found=1;
			break;
			}
			
		}
		if(found==0){
			printf("\t\t\t\t\t\aStudent not found...\n");
		}
	}fclose(p);
}
