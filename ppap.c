#include <stdio.h>

int main()
{
	char name;
	int finalpoint, classpoint;
	char leader, west;
	int piece;
	char Y, N;
	int reward;
	int a, b, c, d, e;

	printf("���������:");
	scanf(" %c", &name);
	getchar();
	printf("�����ĩƽ���ɼ���:");
	scanf("%d", &finalpoint);
	getchar();
	printf("��İ༶����ɼ���:");
	scanf("%d", &classpoint);
	getchar();
	printf("���Ƿ���ѧ���ɲ�:(Y/N)");
	scanf("%c", &leader);
	getchar();
	printf("���Ƿ���������ʡ��:(Y/N)");
	scanf("%c", &west);
	getchar();
	printf("�㷢�������ƪ��:(1-10)");
	scanf("%d", &piece);
	getchar();


	if ((finalpoint > 80) && (piece >= 1))
	{
		a = 8000;
	}
	else
	{
		a = 0;
	}

	if ((finalpoint > 85) && (classpoint > 80))
	{
		b = 4000;
	}
	else
	{
		b = 0;
	}

	if (finalpoint > 90)
	{
		c = 2000;
	}
	else
	{
		c = 0;
	}

	if ((finalpoint > 85) && (west == Y))
	{
		d = 1000;
	}
	else
	{
		d = 0;
	}

	if ((classpoint > 80) && (leader == Y))
	{
		e = 850;
	}
	else
	{
		e = 0;
	}

	reward = a + b + c + d + e;
	printf("�㽫�õ�%dԪ\n", reward);

	return 0;
}


