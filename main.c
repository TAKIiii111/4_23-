//��дһ����������Ϸ����

#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//����һ��������Ϊ��Ϸ�Ĳ˵�
void menu()
{
	//��ӡ�˵�
	printf("**********��ӭ������������Ϸ**********\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("************************************\n");
	printf("���������ѡ��\n");
}


//����һ������game��Ϊ��Ϸ������
void game()
{
	//����һ���������洢�����
	int sj = 0;
	//����һ���������洢�û����������
	int guess = 0;
	//����һ�������
	sj = rand() % 100 + 1;

	printf("------------��Ϸ��ʼ��------------\n");

	//��ʾ�û���������
	printf("��������µ�����(1-100):\n");


	//ѭ��ֱ���¶�Ϊֹ
	do
	{
		scanf("%d", &guess);
		if (guess > sj)
		{
			printf("�´��ˣ�����������:");
		}
		else if (guess < sj)
		{
			printf("��С�ˣ�����������:");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	} while (guess != sj);

}



int main()
{
	//�������������
	srand((unsigned int)time(NULL));

	//����һ���������洢�û���ѡ��
	int input = 0;

	menu();

	
	scanf("%d", &input);

	//ѭ��ֱ���û�ѡ���˳�
	do
	{
		switch (input)
		{
		case 1:
			game();
			int xz = 0;
		chonglai:
			printf("��Ϸ�������Ƿ������\n(1.���� 0.�˳�):");

			scanf("%d", &xz);
			if (xz==1)
			{
				game();
				goto chonglai;
			}
			else
			{
				printf("�˳��ɹ�\n");
				input = 0;
				break;
			}
			

		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺\n");
			menu();
			scanf("%d", &input);
			break;
		}
	} while (input);
	
	return 0;
}