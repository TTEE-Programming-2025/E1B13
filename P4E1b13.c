#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include <conio.h>
#include<windows.h>
struct studentdata{
	char name[15];
	char  studentid[6];
	short int math;
	short int english;
	short int physics;
	float average;
} ;
int student(int,struct studentdata *class2 );
void printdata(struct studentdata *class2,int);
void search(struct studentdata *class2,char *,int);
void graderank(struct studentdata *class2,int);
void setseat(char );
char seats [9][9];
int main(void)
{
	int i,j,num,tryno,num1,n; 
	char ch1,r,serchname[15],u;
	int count = 0;
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
	printf("please write the four code:");
	scanf("%d",&num);
	if(num!=2025){
		tryno=1;
		for(i=2;i<=3;i++){
			printf("%d is error ,this is %d time enter\n",num,tryno);
			printf("please write the four code:");
			scanf("%d",&num); 
			if(num==2025)break;//3次以內密碼正確就跳出這for迴圈 
			else if (num!=2025){
				tryno++;
				if(i==3){
					printf("%d is error ,this is %d time enter",num,tryno);
	
				}
				continue;//如果錯第3次就會先顯示密碼錯誤,在結束程式 
			}
		}
	} 
	if(num==2025){
		printf("%d is correct",num);
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
				case 'a':
					system("cls");
					fflush(stdin);
					printf("please input the student no. n (range 5-10)");
					scanf("%d",&n);
					count=student(n,class1);
					getch();
					system("cls");
					break;
				case 'b':	
					printdata(class1,count);
					getch();
					system("cls");
					break;
				case 'c':
					system("cls");
					fflush(stdin);
					printf("please input the serch name:");	
					gets(serchname);
					printf("serch name=%s\n",serchname);
					search(class1,serchname,count);
					getch();
					system("cls");
					break;
				case 'd' :
					graderank(class1,count);
					getch();
					system("cls");
					break;
				case'e':
					system("cls");
					fflush(stdin);
					printf("Are you sure to leave?");
					scanf("%c",&u);
					while(u!='y'&&u!='n'){
						printf("the enter is error\n");
						fflush(stdin);
						printf("Are you sure to leave?");
						scanf("%c",&u);
					}
					if (u=='n'){
						break;				 
					}
					else if(u=='y'){
						return 0;
					}
						   		
	   	}
	}
	system("pause");
	return 0;
	}	
} 
int student(int r,struct studentdata *class2){

//	struct studentdata class2[10];
	int i,k,flag=0;
	char id[15];
	float average;
	//char buffer[35];
	while(r<5||r>10){
		printf("not range number\n");
		printf("please write the number n (range 5-10)");
		scanf("%d",&r);
	}
	for(i=0;i<r;i++){
		printf("please enter the %d students name\n",i+1);
		scanf("%s",(class2+i)->name);
		fflush(stdin);
		printf("please enter the %d students Id\n",i+1);
		gets(id);
	//	k=(class2+i)->studentid;
		//printf("wrong numerjjj range\n");
		while(1){
			
			while((strlen(id))!=6){
				printf("string=%s,length=%d\n",id,strlen(id));
				printf("The range of students ID is wrong.\n");
				printf("please enter the %d students Id.\n",i+1);
				gets(id);
//				scanf("%d",&(class2+i)->studentid);
			}
//			k=strlen((class2+i)->studentid)
			k=(strlen(id));
			for(k=0;k<=5;k++){
				if(id[k]>=48 && id[k]<=57){
					if (k==5) {
						flag = 1	;
					} 
				}
				else{
					printf("The range of students ID is wrong.\n");
					printf("please enter the %d students Id.\n",i+1);
					gets(id);
					break;	
				}
				
			}
			if(flag==1){
				strcpy((class2+i)->studentid,id);
				flag=0;
				break;
			}
		}
		printf("please enter the %d students math grade\n",i+1);
		scanf("%d",&(class2+i)->math);
		while((class2+i)->math>100||(class2+i)->math<0){
			printf("wrong numer range\n");
			printf("please enter the %d students math grade\n",i+1);
			scanf("%d",&(class2+i)->math);
		}
		printf("please enter the %d students english grade\n",i+1);
		scanf("%d",&(class2+i)->english);
		while((class2+i)->english>100||(class2+i)->english<0){
			printf("wrong numer range\n");
			printf("please enter the %d students english grade\n",i+1);
			scanf("%d",&(class2+i)->english);
		}
		printf("please enter the %d students physics grade\n",i+1);
		scanf("%d",&(class2+i)->physics);
		while((class2+i)->physics>100||(class2+i)->physics<0){
			printf("wrong numer range\n");
			printf("please enter the %d students physics grade\n",i+1);
			scanf("%d",&(class2+i)->physics);
		}
		(class2+i)->average=((class2+i)->math + (class2+i)->english + (class2+i)->physics)/3.0;
	}
	return r;
}
void printdata(struct studentdata *class2,int j){
	int i=0;
		for(i=0;i<j;i++){
			printf("NO%d name=%s\n",i+1,(class2+i)->name);
			printf("NO%d Student ID=%s\n",i+1,(class2+i)->studentid);
			printf("NO%d Math=%d\n",i+1,(class2+i)->math);
			printf("NO%d English=%d\n",i+1,(class2+i)->english);
			printf("NO%d Physics=%d\n",i+1,(class2+i)->physics);
			printf("NO%d Average=%.1f\n",i+1,(class2+i)->average);
		}
		
}
void search(struct studentdata *class2,char *sname,int j){
	int i = 0,sflag=0;
	for(i=0;i<j;i++){
		if(strcmp((class2+i)->name,sname)==0){
			printf("NO%d name=%s\n",i+1,(class2+i)->name);
			printf("NO%d Student ID=%s\n",i+1,(class2+i)->studentid);
			printf("NO%d Math=%d\n",i+1,(class2+i)->math);
			printf("NO%d English=%d\n",i+1,(class2+i)->english);
			printf("NO%d Physics=%d\n",i+1,(class2+i)->physics);
			printf("NO%d Average=%.1f\n",i+1,(class2+i)->average);
			sflag=1;
			break ;
		}
	}
	if (sflag==0)
		printf("Can't find the name=%s,the name dosen't exist!",sname)	;
}
void graderank(struct studentdata *class2,int j){
	int i=0,k=0,sortflag;
	float tempmin;
	struct studentdata  temp;
	for(i=j-1;i>=0;i--){
		sortflag=0;
		for(k=0;k<i;k++){
			if((class2+k)->average > (class2+k+1)->average){
				temp=class2[k];
				class2[k]=class2[k+1];
				class2[k+1]=temp;
				sortflag=1;//目的看有沒有排序過 
			}
		}  //如果不用排序就跳脫迴圈 
		if(sortflag==0){
			break;
		}
	}
	for(i=j-1;i>=0;i--){
			printf("NO%d name=%s\n",i+1,(class2+i)->name);
			printf("NO%d Student ID=%s\n",i+1,(class2+i)->studentid);
			printf("NO%d Math=%d\n",i+1,(class2+i)->math);
			printf("NO%d English=%d\n",i+1,(class2+i)->english);
			printf("NO%d Physics=%d\n",i+1,(class2+i)->physics);
			printf("NO%d Average=%.1f\n",i+1,(class2+i)->average);	
	}
}

