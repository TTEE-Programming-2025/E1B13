#include<stdio.h>
#include<stdlib.h> 
#include<windows.h>

int main(void){
	int i,num;
	char big;
	for (i=0;i<=10;i++){
		printf("**********************************************************\n");
	}      //�L�X10���Ÿ� 
	printf("**                                                      **\n");
	printf("**       jimmy's program                                **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
}     //�L�X7��2�����Ÿ� 
	printf("**                              2025.3.31�s�@            **\n");
	system("pause");//���ݨϥΪ̿�J 
	system("cls");//�M���ù�
	printf("�п�J4��Ʀr�K�X:");
	scanf("%d",&num);
	if(num==2024){
		printf("�w��");
		Sleep(500);//����5��  
		system("cls");//�M���ù�
		printf("@@@@@@@@@@@\n");
		printf("@'A'.....'Z':Uppercase@\n");
		printf("@'a'.....'z':lowercase@\n");
		printf("@'0'.....'9':Digit@\n");
		printf("@ Otherwise:Your name@\n");	
		printf("@@@@@@@@@@@\n");
		fflush(stdin); // �� input buffer �b��
		printf("�п�J�@�Ӧr��\n");	
		scanf("%c",&big);
		if(big>='A'&& big<='Z'){
			printf("Uppercase\n");//�p�G�r���O�b'A'��'Z'�����N�L�XUppercase 
		}
		else if(big>='a'&&big<='z'){
			printf("lowercase\n");//�p�G�r���O�b'a'��'z'�����N�L�Xlowercase
		}
		else if(big>='0'&&big<='9'){
			printf("Digit\n"); //�p�G�r���O�b'0'��'9'�����N�L�XDigit
		}
		else{
			printf("E1B13���R��\n");//�����O�N�L�XE1B13���R�� 
		}
	}
	else{
		printf("�K�X���~");
		return 0 ;
}
	
	return 0 ;
}
/* �b��25��printf('�w��')�b�{������|�ܧֳQ�M���ù��R��
�ҥH�n����ù��R���ɶ�,�~�|����ݨ��w���Ӧr. 
2. if-elif-else ���c�i�H�ھڤ��P���󵹤������^��,�o�O����y�{���򥻷���.
3.�o���@�~�i�H�Ǩ�{�����򥻾ާ@�M�@��if-else�����ΥH��for�j�骺�[��,�o��
�良�ӻs�@�{���ɷ|�ܦ����U*/
 
