#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include <conio.h>
#include<windows.h>
void printseats();
void setseat(char );
char seats [9][9];
int main(void)
{
	int i,j,num,tryno,num1,needseats,index; 
	char ch1,r,choice,answer;
	int count = 0,findseat=0,error=0;
	int row,col,rowseat,colseat,mode;
	char str[40];
	for (i=0;i<=10;i++){
		printf("**********************************************************\n");
	}      //Print 10 symbols
	printf("**                                                      **\n");
	printf("**       jimmy's program 3                                **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
    }     //Print out 7 times 2 lines of staggered symbols 
	printf("**                              make by 2025.5.10         **\n");
	system("pause");//Wait for user input
	system("cls");//clean the screen 
	// code system 
	printf("please write the 4 numbers code:");
	scanf("%d",&num);
	if(num!=2025){
		tryno=1;
		for(i=2;i<=3;i++){
			printf("%d is error ,this is %d time enter\n",num,tryno);
			printf("Please enter a 4-digit password:");
			scanf("%d",&num); 
			if(num==2025)break;//If the password is correct within 3 times, this loop will be exited.
			else if (num!=2025){
				tryno++;
				if(i==3){
					printf("%d is error ,this is %d time enter\n",num,tryno);
	
				}
				continue;//If you make a mistake for the third time, it will display the password error first, then end the program 
			}
		}
	} 
	if(num==2025){
		printf("%dis correct ",num);// If the password is correct, this message will be displayed
		for (i=0;i<9;i++){
	   			for(j=0;j<9;j++){
	   				seats[i][j]='-';
				   }
			}//First make 9*9'-'
		srand(time(NULL));//Generate random numbers using the current system time as the seed of the random number
	   	count =0;
		while(count<10){
			row = rand() % 9;
			col = rand()% 9;
			if(seats[row][col]!='*'){
				seats[row][col]='*';
				count++;
			}
		}//Randomly pick 10 '*' in this 9*9 array
		//If it is not placed before the menu, it will be overwritten by '-' after 10 print '*'.
		//But it won't be random every time it enters 'a'
		while(1){
		 	Sleep(500);//delay 5 seconds
			system("cls");//clean the screen 
			printf("----[Booking System]-------\n");
			printf("<    a.Available seats     >\n");
			printf("<                          >\n");
			printf("<    b.Arrange for you     >\n");
			printf("<                          >\n");
			printf("<    c.Choose by yourself  >\n");
			printf("<                          >\n");
			printf("<    d.Exit                >\n");
			printf("---------------------\n");
			printf("please write the char abcd:");
	   		scanf(" %c",&ch1);
	   	
	   		switch(ch1){
				case'a':
					system("cls");
					fflush(stdin);
						printseats();//call printseats function
						printf("Press any key to return to the main menu");
						getch();//Waiting for input
						system("cls");
						break;
				case'b':
					system("cls");
					fflush(stdin);//Clear the input buffer
					printf("please enter your seat people(1-4)");
					scanf("%d",&needseats);
					// exercise 4
					if(needseats>0 && needseats<5){
					    findseat=0;
						switch(needseats){					
						case 1:
							while(findseat==0){
								srand(time(NULL));
								row = rand() % 9;
								col = rand()% 9;
							    if(seats[row][col]=='-'){
							       		seats[row][col]='@';
							       		findseat=1;
						  		}	
							}	
							printseats();					  
						    break;//If the user enters 1 digit, the system will randomly select a position and replace '-' with '@', and jump out of the CASE loop to the line asking Y/N
						case 2:
							while(findseat==0){
							 	srand(time(NULL));
							 	row = rand() % 9;
								col = rand()% 9;
								if(col+1 >8) continue;//If you use random number extraction to find a position PLUS 1 greater than 9, you will continue to search
							   	if(seats[row][col]=='-' && seats[row][col+1]=='-'){
							       		seats[row][col]='@';
							       		seats[row][col+1]='@';
							       		findseat=1;
						  		}	
							}	
							printseats();					  
						    break;//If the user enters 2 digits, the system will randomly select 2 adjacent positions, replace '-' with '@', and jump out of the CASE loop to the line asking Y/N
						case 3:
							while(findseat==0){
							 	srand(time(NULL));
							 	row = rand() % 9;
								col = rand()% 9;
								if(col+2 >8) continue;//If you use random number extraction to find a position PLUS 2  greater than 9, you will continue to search
							   	if(seats[row][col]=='-' && seats[row][col+1]=='-' && seats[row][col+2]=='-'){
							       		seats[row][col]='@';
							       		seats[row][col+1]='@';
							       		seats[row][col+2]='@';
							       		findseat=1;
						  		}	
							}	
							printseats();					  
						    break;//If the user enters 2 digits, the system will randomly select 2 adjacent positions, replace '-' with '@', and jump out of the CASE loop to the line asking Y/N	
						case 4:
							for(i=0;i<9;i++){
								for(j=0;j<9;j++){
								   if(j+3==9) break;//If you use random number extraction to find a position PLUS 3 equal to 9, you will continue to search
							       if((seats[i][j]=='-') && (seats[i][j+1]=='-') && (seats[i][j+2]=='-')&& (seats[i][j+3]=='-')){
							       	 seats[i][j]='@';
							       	 seats[i][j+1]='@';
							       	 seats[i][j+2]='@';
							       	 seats[i][j+3]='@';
							       	 findseat=1;
							       	 break;
						  			}	
							   }//When looking for 4 seats, we will first look for a position that does not exist, and then look for a position where 2 seats are adjacent and side by side.
								if(findseat==1){
								   break;
								}//If 4 adjacent seats are found first, the program will not search any further.
							}	
							if(findseat==0){
								for(i=0;i<9;i++){
									for(j=0;j<9;j++){
								   			if(j+1==9||i+1==9) break;
							       			if((seats[i][j]=='-') && (seats[i][j+1]=='-') && (seats[i+1][j]=='-')&& (seats[i+1][j+1]=='-')){
							       	 			seats[i][j]='@';
							       	 			seats[i][j+1]='@';
							       	 			seats[i+1][j]='@';
							       	 			seats[i+1][j+1]='@';
							       	 			findseat=1;
							       				break;
						  					}	
							   		}//This is the program for two adjacent seats side by side			
									if(findseat==1){
								  	    break;
									}
								}	
							}
							if(findseat==0){
								printf("not 4 people available\n ") ;	
							}
							printseats();	  
						    break;	
						}//If both methods fail to find the seat, the program will remind you that the 4 seats cannot be found and print the current seating chart.
					}
					else{
		        		printf("Input error\n");
					}//If you enter more than 4 seats, it will show an input error.
						if(findseat==0){
							Sleep(500);
							break;
						}
			     		printf("Are you satisfied with the seating arrangement?(y/n)\n");
			     		fflush(stdin);//Clear the input buffer
				    	scanf("%c",&answer);
				  		if(answer=='y'){
							system("cls");
							setseat('y');
							break;
				    	}//If you are satisfied = enter 'y' and the program will change the original '@' to '*' to indicate that the reservation is completed
						else if (answer=='n'){
							system("cls");
							setseat('n');
							break;
							//If you are not satisfied = enter n, the program will change the original '@' to '-' to indicate that the reservation failed
						}else{
							printf("Input error!! Cancel the recommended seat\n");
							setseat('n');
							Sleep(500);
							break;
						}//If you enter other characters, the program will pop up an input error message and change the original '@' to '-' to indicate that the reservation failed.
				//exercise 5
				case'c':
					system("cls");
					do{
					error=0;
					printf("Enter the seat number, e.g. 1-2, 2-9 \n");
					fflush(stdin);//Clear the input buffer
					gets(str);//Read a line of text from the keyboard and store it in the variable str
					i =0;
					index=0;
					row=0;
					col=0;
					while(str[i]!= '\0'){
						index=(i+1)%4; //Divide the number-number into 4 parts, 0 is 1, 3 is number-2, +1 is to prevent 0%4 from adding a blank in front
						switch(index){
							case 1:
							case 3:
								if(str[i]>=49 && str[i]<=57 ){
									if(index==1){
										row=str[i]-'0';//Because the characters need to be converted to integers 
									}
									else{
										col=str[i]-'0';
									}
									
								}//If the number is between 1-9, the characters will be converted to numbers
								else{
									printf("Wrong seat entry, \n");	
									error =1;
									break;
								}//If the number is outside 1-9 characters, an error message will be displayed
								break ;
							case 2:
								if(str[i]!=45){
									printf("Wrong seat entry,case 2 \n");	
									error =1;
								}//If the character is not '-', an error message will be displayed
								 
								break ;
							case 0:
								if(str[i]!=44 ){ 
									printf("Wrong seat entry,case 0 \n");	
									error =1;
								}//If the character is not ',' an error message will be displayed
								else{
									
									if(seats[row-1][col-1]=='*'){
										printf("Wrong seat entry,%d-%d be reserved \n",row,col);	
										setseat('n');
										error =1;
										break;
									}//If the seat is already reserved, an error message will be displayed instead of showing that the seat is already reserved.
									else{
										seats[row-1][col-1]='@';
									}//If everything is correct, the name will be added with '@' and confirmed by pressing any key. The change of '@' to '*' indicates that the reservation is successful.	
								}
								break;	
									
						}
						if(error==1){
 						    break;
 						}//If it is wrong, jump out of the loop
						i++;
					}
					if(str[0]== '\0'){
						printf("Wrong seat entry,'0' \n");
						error =1;		
					}//If the input is blank, an error message will be displayed
					else {
							if(seats[row-1][col-1] =='*'){
								printf("Wrong seat entry,%d-%d be reserved \n",row,col);	
								setseat('n');
								error =1;
							}//If the seat is already reserved, an error message will be displayed instead of showing that the seat is already reserved.
							else{
								seats[row-1][col-1] ='@';
							}//If everything is correct, the name will be added with '@' and confirmed by pressing any key. The change of '@' to '*' indicates that the reservation is successful.
			
					}
					
								
					}while(error==1)	;
					
					printseats();
					setseat('y');
					printf("Press any key to return to the main menu");//Enter any key to jump back to the main screen and save your seat
					getch();//Waiting for input
				break;	
				// exercise 6
				case'd':
					system("cls");
	        		fflush(stdin);//
	        		printf("Continue?(y/n):");
	        		scanf("%c",&choice);
	        		while(choice!='y'&&choice!='n'){
						printf("Input error, please re-enter\n");
						fflush(stdin);//Clear the input buffer
	        			printf("continue?(y/n):");
	        			scanf("%c",&choice);
					}//When the choice is not equal to these numbers, the system will ask you to re-enter until it is correct.
	        		if(choice=='y'){
	        			break;
					}//If you press Y or y the system will return to the main menu
					else if (choice=='n'){
						return 0 ;
					}//If you press N or n, the program ends.			    
		   	} 
		        	
				
		}	
	}
				
			
	   
		
system("pause");
return 0;
}
//Function to print out the seating chart
void printseats(){
	int i,j;
	printf("seating chart(-:vacant seat *:Booked)\n");
	printf("\n\\123456789\n");
		for(i=8;i>=0;i--){
			printf("%d",i+1);
			for(j=0;j<9;j++){
				printf("%c",seats[i][j]);
				}//Print the array and space it
			printf("\n");
			}
}
//Seat system reservation success or failure function
void setseat(char CH1){
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(seats[i][j]=='@'){
				if (CH1=='y') {
					seats[i][j]='*';
				}//If you press y, the '@' will change to '*' to indicate success
				else if(CH1=='n'){
					seats[i][j]='-';
				}//If you press n, the '@' will change to '-' to indicate fail
			}	
		}
	}	
}
/* This time I learned how to use character arrays and create a simple positioning system. This was the longest time I spent on this project 
because it was more difficult, 
but it was fun to finish because it felt like the reservation system out there. I felt that if I just changed the numbers a bit more,
 it could become a high-speed train version or a cinema version. If I have to make a simple reservation system in the future, 
 I will apply his ideas. This is a very practical project.*/
