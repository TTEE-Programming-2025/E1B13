#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include <conio.h>
#include<windows.h>
struct studentdata{// set the struct
	char name[15];
	char  studentid[6];
	short int math;
	short int english;
	short int physics;// short int is number insite the two bytes
	float average;
} ;
int student(int,struct studentdata *class2 );//a function
void printdata(struct studentdata *class2,int);//b function
void search(struct studentdata *class2,char *,int);//c function
void graderank(struct studentdata *class2,int);//d function
int main(void)
{
	int i,j,num,tryno,num1,n; 
	char ch1,r,serchname[15],u;
	int count = 0;
    struct studentdata  class1[10];
	time_t seconds ;
	for (i=0;i<=10;i++){
		printf("**********************************************************\n");
	}      //Print 10 symbols
	printf("**                                                      **\n");
	printf("**       jimmy's program 4                              **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
    }     //Print 7 times 2 lines of staggered symbols
	printf("**                              2025.5.24»s§@            **\n");
	system("pause");//Waiting for user input 
	system("cls");//Clear Screen
	printf("please write the four code:");
	scanf("%d",&num);
	if(num!=2025){
		tryno=1;
		for(i=2;i<=3;i++){
			printf("%d is error ,this is %d time enter\n",num,tryno);
			printf("please write the four code:");
			scanf("%d",&num); 
			if(num==2025)break;//If the password is correct within 3 times, jump out of this for loop
			else if (num!=2025){
				tryno++;
				if(i==3){
					printf("%d is error ,this is %d time enter",num,tryno);
	
				}
				continue;//If you make a mistake for the third time, it will display the password error first, then end the program
			}
		}
	} 
	if(num==2025){
		printf("%d is correct",num);
		while(1){
		 	Sleep(500);//Delay 5 seconds 
			system("cls");//Clear Screen 
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
	   			//exercise 3
				case 'a':
					system("cls");
					fflush(stdin);//Clear the input buffer
					printf("please input the student no. n (range 5-10)");
					scanf("%d",&n);
					count=student(n,class1);//Passing values to student  functions
					system("pause");//wating user enter
					system("cls");//clean the screen
					break;
				// exercise 4
				case 'b':
					system("cls");	
					printdata(class1,count);//Passing values to printdata  functions
					system("pause");//wating user enter
					system("cls");
					break;
				// exercise 5
				case 'c':
					system("cls");
					fflush(stdin);
					printf("please input the serch name:");	
					gets(serchname);//Read the string input by the user
					printf("serch name=%s\n",serchname);
					search(class1,serchname,count);//Passing values to serchname  functions
					system("pause");
					system("cls");
					break;
				// exercise 6
				case 'd' :
					system("cls");//clean the screen
					graderank(class1,count);//Passing values to graderank  functions
					system("pause");//wating user enter
					system("cls");
					break;
				// exercise 7
				case'e':
					system("cls");//clean the screen
					fflush(stdin);//Clear the input buffer
					printf("Are you sure to leave?");
					scanf("%c",&u);
					//If the input is not y or n, an error message will be displayed 
					//and you will be prompted to re-enter the
					while(u!='y'&&u!='n'){
						printf("the enter is error\n");
						fflush(stdin);//Clear the input buffer
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
//exercise 3 function 
int student(int r,struct studentdata *class2){

	int i,k,flag=0;
	char id[15];
	float average;
	// When the input range is not 5-10, 
	//an error message will be displayed and you will be prompted to re-enter the number.
	while(r<5||r>10){
		printf("not range number\n");
		printf("please write the number n (range 5-10)");
		scanf("%d",&r);
	}
	// Use the number you just entered as the number 
	//and enter the name, ID, and score in order until that number is reached.
	for(i=0;i<r;i++){
		printf("please enter the %d students name\n",i+1);
		scanf("%s",(class2+i)->name);
		fflush(stdin);
		printf("please enter the %d students Id\n",i+1);
		gets(id);
		//Change the number to a string to prevent 
		//the 6-digit number starting with 0 from not being displayed
		while(1){
			//When the string length is not 6, an error message will be displayed
			while((strlen(id))!=6){
				printf("The range of students ID is wrong.\n");
				printf("please enter the %d students Id.\n",i+1);
				gets(id);

			}
			k=(strlen(id));
			//Check if there are other characters in the 6-digit number.
			// If there are  not, it will display an error and you need to re-enter the number.
			for(k=0;k<=5;k++){
				if(id[k]>=48 && id[k]<=57){
					if (k==5) {
						flag = 1	;// if there are,copy the id to the structure
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
				strcpy((class2+i)->studentid,id);//Copy the id to the structure
				flag=0;
				break;
			}
		}
		printf("please enter the %d students math grade\n",i+1);
		scanf("%d",&(class2+i)->math);
		//If the range is not 1-100, 
		//an error message will be displayed and you will be asked to re-enter the value.
		while((class2+i)->math>100||(class2+i)->math<0){
			printf("wrong numer range\n");
			printf("please enter the %d students math grade\n",i+1);
			scanf("%d",&(class2+i)->math);
		}
		//If the range is not 1-100, 
		//an error message will be displayed and you will be asked to re-enter the value.
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
		//Add all of them and divide by 3.0 to get the average value. 
		//The 0 is to have a decimal place at the end.
		(class2+i)->average=((class2+i)->math + (class2+i)->english + (class2+i)->physics)/3.0;
	}
	return r;
}
//exercise 4 function
void printdata(struct studentdata *class2,int j){
	int i=0;
		//List the content you just entered one by one
		for(i=0;i<j;i++){
			printf("NO%d name=%s\n",i+1,(class2+i)->name);
			printf("NO%d Student ID=%s\n",i+1,(class2+i)->studentid);
			printf("NO%d Math=%d\n",i+1,(class2+i)->math);
			printf("NO%d English=%d\n",i+1,(class2+i)->english);
			printf("NO%d Physics=%d\n",i+1,(class2+i)->physics);
			printf("NO%d Average=%.1f\n",i+1,(class2+i)->average);
		}
		
}
//exercise 5 function
void search(struct studentdata *class2,char *sname,int j){
	int i = 0,sflag=0;
	for(i=0;i<j;i++){
		//If the name entered is in the structure, the ID of the name is displayed.
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
	//If no input is given, an error message will be displayed.
	if (sflag==0)
		printf("Can't find the name=%s,the name dosen't exist!",sname)	;
}
//exercise 6 function
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
				sortflag=1;//The purpose is to see if it has been sorted
			}
		}  //If you don't need to sort, you can break out of the loop.
		if(sortflag==0){
			break;
		}
	}
	//Print the names in order of grades.
	for(i=j-1;i>=0;i--){
			printf("NO%d name=%s\n",i+1,(class2+i)->name);
			printf("NO%d Student ID=%s\n",i+1,(class2+i)->studentid);
			printf("NO%d Math=%d\n",i+1,(class2+i)->math);
			printf("NO%d English=%d\n",i+1,(class2+i)->english);
			printf("NO%d Physics=%d\n",i+1,(class2+i)->physics);
			printf("NO%d Average=%.1f\n",i+1,(class2+i)->average);	
	}
}
/*This homework, I conducted basic exercises on pointers and structures in C language, 
which gave me a deeper understanding of these two very critical concepts in C language.
this homework The difficult part of this assignment was the structure's formula transmission and structure's formula setting. 
I spent a lot of time thinking about these two formulas. 
Finally, I solved it with the help of my father's explanation and C language books. 
I get help from my father almost every time I do programming assignments. 
I am very grateful that he takes the time to help me every time.
In summary, this exercise not only helped me learn grammar, but more importantly, 
it helped me establish a basic understanding of the underlying memory operations. 
This is very helpful for further learning about dynamic memory allocation and data structures  in the future. 
*/
