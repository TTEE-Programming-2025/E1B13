#include<stdio.h>
#include<stdlib.h> 
#include<windows.h>

void triangle(char); //製作三角形時用的函數 
void table(int);

int main(void)
{
	int i,num,tryno,num1; 
	char ch1,r,choice;
	for (i=0;i<=10;i++){
		printf("**********************************************************\n");
	}      //印出10次符號 
	printf("**                                                      **\n");
	printf("**       jimmy's program 2                                **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
    }     //印出7次2行交錯符號 
	printf("**                              2025.4.26製作            **\n");
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
			printf("---------------------\n");
			printf("< a.畫出直角三角形  >\n");
			printf("<                   >\n");
			printf("< b.顯示乘法表      >\n");
			printf("<                   >\n");
			printf("< c. 結束           >\n");
			printf("<                   >\n");
			printf("---------------------\n");
			printf("請輸入字元 abc:");
	   		scanf(" %c",&ch1);
	    //上方為第2題 
				switch(ch1) {
	        	case 'A'://當使用著按下A or a時會進入畫直角三角形模式也就是第3題 
	        	case 'a':
		        	system("cls");
		        	fflush(stdin);//使 input buffer 淨空
		        	printf("請輸入一個字元(從'a'到'n')");
		        	scanf(" %c",&r);
		        	while(r<'a'||r>'n'){
		        		printf("輸入錯誤\n");
		        		fflush(stdin);
		        		printf("請輸入一個字元(從'a'到'n')");
		        		scanf(" %c",&r);
					}
		        	triangle(r);//呼叫這函式並帶值 
		        	getch();//等待使用者輸入 
		        	system("cls");
		        	break ;//跳去主選單 
	        	
	        	case 'B':
	        	case 'b'://當使用著按下B or b時會進入乘法表模式也就是第4題
	        		system("cls");
	        		printf("請輸入1至9的整數");
	        		scanf("%d",&num1);
	        		while(num1<1||num1>9){
	        			printf("輸入錯誤\n");
	        			printf("請輸入1至9的整數");
	        			scanf("%d",&num1);
	        		}//當輸入<1或>9時系統會叫你重新輸入直到對為止 
	        		table(num1);//呼叫table函式並代值 
	        		getch();
	        		system("cls");
	        		break ;//跳去主選單
	        	/*
	        	case'C':
	        	case'c'://當使用著按下Cor c時系統會問你是否要繼續也就是第5題
	        		system("cls");
	        		fflush(stdin);//使 input buffer 淨空
	        		printf("continue?(y/n):");
	        		scanf("%c",&choice);
	        		while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n'){
						printf("輸入錯誤,請重新輸入\n");
						fflush(stdin);
	        			printf("continue?(y/n):");
	        			scanf("%c",&choice);
					}//當choice不等於這些數字時,系統會叫你重新輸入直到對為止 
	        		if(choice=='Y'||choice=='y'){
	        			break;
					}//如果按Y or y 系統會回到主選單 
					else if (choice=='N'||choice=='n'){
						return 0 ;
					}//如果按N or n則結束程式 
			*/		
    	}
    }   	
	system("pause");
	return 0;
} 
}
void triangle(char ch)//第3題函式的內容 
{   
   int i,rows,j,k;
   rows=ch-'a' +1;//因為如使用者輸入a會印不出來所以要加+1,才可以順利印出 
   for(i=rows;i>=1;i--){
   	
      for(j=1;j<=i;j++){
        printf(" ");//把第一排到輸入字元的空格處印出來	
	  }
	  for(j=i;j<=rows;j++){
	    k=rows-j;
		printf("%c",ch-k);
			
	  }	
	  printf("\n");
	}
}
void table(int n ){//第4題函式的內容 
	int i,j ;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%dx%d=%d\t",i,j,i*j);//印出到使用者輸入的數字n*n的乘法表的式子 
		}
		printf("\n");
	}
}
 /*在這次的程式作業在還沒有做之前我看了文字敘述覺得很有趣很好玩,
 在做完了以後,我還是覺得很好玩 ,因為有很多功能可以去嘗試,不是那種單調
 的功能.這次程式能讓我更了解迴圈和函式的觀念和使用方法,這在未來幾年如果
 要寫這類程式甚至可能式遊戲會用到.是一個好玩又有趣又可以學到東西的程式作業. */
  
	
		
