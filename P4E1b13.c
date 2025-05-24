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
	}      //印出10次符號 
	printf("**                                                      **\n");
	printf("**       jimmy's program 3                                **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
    }     //印出7次2行交錯符號 
	printf("**                              2025.5.10製作            **\n");
	system("pause");//等待使用者輸入 
	system("cls");//清除螢幕
	printf("請輸入4位數字密碼:");
	scanf("%d",&num);
	if(num!=2025){
		tryno=1;
		for(i=2;i<=3;i++){
			printf("%d密碼錯誤,此為第%d次輸入\n",num,tryno);
			printf("請輸入4位數字密碼:");
			scanf("%d",&num); 
			if(num==2025)break;//3次以內密碼正確就跳出這for迴圈 
			else if (num!=2025){
				tryno++;
				if(i==3){
					printf("%d密碼錯誤,此為第%d次輸入\n",num,tryno);
	
				}
				continue;//如果錯第3次就會先顯示密碼錯誤,在結束程式 
			}
		}
	} 
	if(num==2025){
		printf("%d密碼正確",num);
		while(1){
		 	Sleep(500);//延遲5秒  
			system("cls");//清除螢幕 
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
