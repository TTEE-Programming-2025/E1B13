#include<stdio.h>
#include<stdlib.h> 
#include<windows.h>

int main(void){
	int i,num;
	char big;
	for (i=0;i<=10;i++){
		printf("**********************************************************\n");
	}      //印出10次符號 
	printf("**                                                      **\n");
	printf("**       jimmy's program                                **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
}     //印出7次2行交錯符號 
	printf("**                              2025.3.31製作            **\n");
	system("pause");//等待使用者輸入 
	system("cls");//清除螢幕
	printf("請輸入4位數字密碼:");
	scanf("%d",&num);
	if(num==2024){
		printf("歡迎");
		Sleep(500);//延遲5秒  
		system("cls");//清除螢幕
		printf("@@@@@@@@@@@\n");
		printf("@'A'.....'Z':Uppercase@\n");
		printf("@'a'.....'z':lowercase@\n");
		printf("@'0'.....'9':Digit@\n");
		printf("@ Otherwise:Your name@\n");	
		printf("@@@@@@@@@@@\n");
		fflush(stdin); // 使 input buffer 淨空
		printf("請輸入一個字元\n");	
		scanf("%c",&big);
		if(big>='A'&& big<='Z'){
			printf("Uppercase\n");//如果字元是在'A'到'Z'之間就印出Uppercase 
		}
		else if(big>='a'&&big<='z'){
			printf("lowercase\n");//如果字元是在'a'到'z'之間就印出lowercase
		}
		else if(big>='0'&&big<='9'){
			printf("Digit\n"); //如果字元是在'0'到'9'之間就印出Digit
		}
		else{
			printf("E1B13陳昱廷\n");//都不是就印出E1B13陳昱廷 
		}
	}
	else{
		printf("密碼錯誤");
		return 0 ;
}
	
	return 0 ;
}
/* 在第25行printf('歡迎')在程式執行會很快被清除螢幕刪除
所以要延遲螢幕刪除時間,才會明顯看到歡迎兩個字. 
2. if-elif-else 結構可以根據不同條件給予對應回應,這是控制流程的基本概念.
3.這次作業可以學到程式的基本操作和一些if-else的應用以及for迴圈的觀念,這些
對未來製作程式時會很有幫助*/
 
