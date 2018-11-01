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

	printf("你的名字是:");
	scanf(" %c", &name);
	getchar();
	printf("你的期末平均成绩是:");
	scanf("%d", &finalpoint);
	getchar();
	printf("你的班级评议成绩是:");
	scanf("%d", &classpoint);
	getchar();
	printf("你是否是学生干部:(Y/N)");
	scanf("%c", &leader);
	getchar();
	printf("你是否来自西部省份:(Y/N)");
	scanf("%c", &west);
	getchar();
	printf("你发表的论文篇数:(1-10)");
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
	printf("你将得到%d元\n", reward);

	return 0;
}


