#include<stdio.h>
#include<stdlib.h> 
#include<windows.h>

void triangle(char); //�s�@�T���ήɥΪ���� 
void table(int);

int main(void)
{
	int i,num,tryno,num1; 
	char ch1,r,choice;
	for (i=0;i<=10;i++){
		printf("**********************************************************\n");
	}      //�L�X10���Ÿ� 
	printf("**                                                      **\n");
	printf("**       jimmy's program 2                                **\n");
	printf("**       E1B13                                          **\n");
	printf("**       Have a nice day                                **\n");
	for (i=0;i<=6;i++){
		printf("**********************************************************\n");
		printf("##########################################################\n");
    }     //�L�X7��2�����Ÿ� 
	printf("**                              2025.4.26�s�@            **\n");
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
			printf("---------------------\n");
			printf("< a.�e�X�����T����  >\n");
			printf("<                   >\n");
			printf("< b.��ܭ��k��      >\n");
			printf("<                   >\n");
			printf("< c. ����           >\n");
			printf("<                   >\n");
			printf("---------------------\n");
			printf("�п�J�r�� abc:");
	   		scanf(" %c",&ch1);
	    //�W�謰��2�D 
				switch(ch1) {
	        	case 'A'://��ϥε۫��UA or a�ɷ|�i�J�e�����T���μҦ��]�N�O��3�D 
	        	case 'a':
		        	system("cls");
		        	fflush(stdin);//�� input buffer �b��
		        	printf("�п�J�@�Ӧr��(�q'a'��'n')");
		        	scanf(" %c",&r);
		        	while(r<'a'||r>'n'){
		        		printf("��J���~\n");
		        		fflush(stdin);
		        		printf("�п�J�@�Ӧr��(�q'a'��'n')");
		        		scanf(" %c",&r);
					}
		        	triangle(r);//�I�s�o�禡�ña�� 
		        	getch();//���ݨϥΪ̿�J 
		        	system("cls");
		        	break ;//���h�D��� 
	        	
	        	case 'B':
	        	case 'b'://��ϥε۫��UB or b�ɷ|�i�J���k��Ҧ��]�N�O��4�D
	        		system("cls");
	        		printf("�п�J1��9�����");
	        		scanf("%d",&num1);
	        		while(num1<1||num1>9){
	        			printf("��J���~\n");
	        			printf("�п�J1��9�����");
	        			scanf("%d",&num1);
	        		}//���J<1��>9�ɨt�η|�s�A���s��J����אּ�� 
	        		table(num1);//�I�stable�禡�åN�� 
	        		getch();
	        		system("cls");
	        		break ;//���h�D���
	        	/*
	        	case'C':
	        	case'c'://��ϥε۫��UCor c�ɨt�η|�ݧA�O�_�n�~��]�N�O��5�D
	        		system("cls");
	        		fflush(stdin);//�� input buffer �b��
	        		printf("continue?(y/n):");
	        		scanf("%c",&choice);
	        		while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n'){
						printf("��J���~,�Э��s��J\n");
						fflush(stdin);
	        			printf("continue?(y/n):");
	        			scanf("%c",&choice);
					}//��choice������o�ǼƦr��,�t�η|�s�A���s��J����אּ�� 
	        		if(choice=='Y'||choice=='y'){
	        			break;
					}//�p�G��Y or y �t�η|�^��D��� 
					else if (choice=='N'||choice=='n'){
						return 0 ;
					}//�p�G��N or n�h�����{�� 
			*/		
    	}
    }   	
	system("pause");
	return 0;
} 
}
void triangle(char ch)//��3�D�禡�����e 
{   
   int i,rows,j,k;
   rows=ch-'a' +1;//�]���p�ϥΪ̿�Ja�|�L���X�өҥH�n�[+1,�~�i�H���Q�L�X 
   for(i=rows;i>=1;i--){
   	
      for(j=1;j<=i;j++){
        printf(" ");//��Ĥ@�ƨ��J�r�����Ů�B�L�X��	
	  }
	  for(j=i;j<=rows;j++){
	    k=rows-j;
		printf("%c",ch-k);
			
	  }	
	  printf("\n");
	}
}
void table(int n ){//��4�D�禡�����e 
	int i,j ;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%dx%d=%d\t",i,j,i*j);//�L�X��ϥΪ̿�J���Ʀrn*n�����k�����l 
		}
		printf("\n");
	}
}
 /*�b�o�����{���@�~�b�٨S�������e�ڬݤF��r�ԭzı�o�ܦ���ܦn��,
 �b�����F�H��,���٬Oı�o�ܦn�� ,�]�����ܦh�\��i�H�h����,���O���س��
 ���\��.�o���{�������ڧ�F�Ѱj��M�禡���[���M�ϥΤ�k,�o�b���ӴX�~�p�G
 �n�g�o���{���Ʀܥi�ড�C���|�Ψ�.�O�@�Ӧn���S����S�i�H�Ǩ�F�誺�{���@�~. */
  
	
		
