#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include <conio.h>
#include<windows.h>
struct studentdata{
	char name[15];
	int  studentid;
	short int math;
	short int english;
	short int physics;
	
};
void student(int );
void setseat(char );
char seats [9][9];
int main(void)
{
	int i,j,num,tryno,num1,n; 
	char ch1,r,choice,answer;
	int count = 0,findseat=0;
	int row,col,rowseat,colseat,mode;
	char input;
	struct studentdata  class1[10];
	time_t seconds ;
	for (i=0;i<=10;i++){
		printf("**********************************************************\n");
	}      //�L�X10���Ÿ� 
	printf("**                                                      **\n");
	printf("**       jimmy's program 3                                **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
    }     //�L�X7��2�����Ÿ� 
	printf("**                              2025.5.10�s�@            **\n");
	system("pause");//���ݨϥΪ̿�J 
	system("cls");//�M���ù�
	printf("�п�J4��Ʀr�K�X:");
	scanf("%d",&num);
	if(num!=2025){
		tryno=1;
		for(i=2;i<=3;i++){
			printf("%d�K�X���~,������%d����J\n",num,tryno);
			printf("�п�J4��Ʀr�K�X:");
			scanf("%d",&num); 
			if(num==2025)break;//3���H���K�X���T�N���X�ofor�j�� 
			else if (num!=2025){
				tryno++;
				if(i==3){
					printf("%d�K�X���~,������%d����J\n",num,tryno);
	
				}
				continue;//�p�G����3���N�|����ܱK�X���~,�b�����{�� 
			}
		}
	} 
	if(num==2025){
		printf("%d�K�X���T",num);
		while(1){
		 	Sleep(500);//����5��  
			system("cls");//�M���ù� 
			printf("----[Grade System]---------------\n");
			printf("|    a.Enter student grades     |\n");
			printf("|                               |\n");
			printf("|   b.display students grades   |\n");
			printf("|                               |\n");
			printf("|   c.search for student grades |\n");
			printf("|                               |\n");
			printf("|    d.Grade ranking            |\n");
			printf("|                               |\n");
			printf("|    e.Exit system              |\n");
			printf("---------------------------------\n");
			printf("please write the characters abcde  :");
	   		scanf(" %c",&ch1);
	   		switch(ch1){
				case'a':
					system("cls");
					printf("please write the student no n (range 5-10)");
					scanf("%d",&n);
					student(n);
					
					}
	   		system("pause");
	   		return 0;
	   	}
		}
}
void student(int r)
{
	int n,i ;
	
	while(r<5||r>10){
		printf("not range number\n");
		printf("please write the number n (range 5-10)");
		scanf("%d",&r);
	}
	for(i=0;i<=r;i++){
		printf("please enter the %d students name\n",n);
		scanf("%s",&class1.name); 
	}
}
