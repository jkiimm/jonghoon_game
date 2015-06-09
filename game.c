#include<stdio.h>
#include<stdlib.h>

int main()
{
	char shout[8];
	char revive = 'y';
	int a,rotate = 2;
	int choice=1;

	printf("종훈이에게 건배를 청하는 방법 : cheers! 를 정확히 입력");
	while (revive=='y')
	{
		for(a=1;a<16;a++)
		{
			fflush(stdin);
			printf("\n종훈이에게 건배를 청하시오! \n");
			scanf("%s", shout);
			
			if((shout[0]=='c')&&(shout[1]=='h')&&(shout[2]=='e')&&(shout[3]=='e')&&(shout[4]=='r')&&(shout[5]=='s')&&(shout[6]=='!'))
			{
				printf("-------------------------------\n");
				printf("종훈이는 소주 %d잔을 마셨다!\n", a);
				printf("-------------------------------\n");
			}
			else
			{
				printf("종훈이는 술자리가 짜증난다며 묘원이를 만나러 갔다....\n");
				break;
			}
			if ((a%2==0)&&(a!=14))
				printf("제민규 : 외롭다..\n");
			if (a==2)
				printf("천강선 : 인냐 종훈이 FC미디어 혼자 가지마냐인냐 술 더 마실수 있겠냐 난 집에가서 컴프해야겄다\n");
			if (a==3)
			{
				printf("*****************************WARNING*****************************\n");
				printf("김현수 : (종훈이의 술잔을 클로즈업해서 쳐다본다) 뭐여 지금 빼는거여? 뭐여 빼는새낀 다 죽는거여\n");
				printf("김현수의 자메이카 본능이 작동하여 6잔이 됬습니다.\n");
				printf("*****************************WARNING*****************************\n");
				a=6;
			}

			if (a>7&&a<15)
			{
				printf("알림 : 종훈이가 위험합니다!!\n");
				if (a<13)
					printf("제민규 : 야이 간나새끼 술이나 더 마실수 있겠냐?ㅋㅋ 종훈이를 위해서 한잔하자\n");
			}
			if (a==13)
			{
				printf("알림 : 민...민규가 쓰러졌다 !!!\n");
				printf("김종훈 : ㅋㅋㅋ 병신졌네 동영상 찍어야지\n");
				printf("알림 : 제민규의 성이 바뀌어 식민규로 되었습니다.\n");
			}
			if (a==14)
				printf("식민규 : @#$@# 으엉......어...... 종훈아 우리집에서 자고가 지금 차 끊겨서 없어 임마\n");
			if (a==15)
				printf("김진영 : 증산?\n");

		}
		if (a==16)
			printf("종훈이는 소주 %d잔을 마시고 죽어서 공사장에서 발견되었다...\n",a-1);
		fflush(stdin);
		printf("종훈이를 부활시키겠습니까? (y/n) ");
		scanf("%c",&revive);

		if(revive=='y')
		{
			printf("\n%d차로 이동합니다...\n",rotate);
			rotate++;
		}
	}
	

	while(choice!=6)
	{
		printf("\n잘 곳을 선택하세요 : 1.민규집 2.상우집 3.강선집 4.학부방 5.모스 6.증산\n");
		scanf("%d",&choice);

		if(choice==1)
			printf("생수값 900원이 모자릅니다\n");
		if(choice==2)
			printf("상우가 자고 있어 카드키를 입력할 수 없습니다\n");
		if(choice==3)
			printf("전화를 받지 않습니다\n");
		if(choice==4)
			printf("비번이 다시 바꼈다\n");
		if(choice==5)
			printf("누구세요?\n");
		if(choice==6)
			printf("당신을 초대합니다\n");
	}
	system("PAUSE");

	return 0;
}