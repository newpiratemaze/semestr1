#include<stdio.h>
#include<locale.h>


void main() {
	setlocale(LC_ALL, "RUS");

	int h, m;

	printf("Введите час: ");
	scanf_s("%d", &h);

	printf("Введите минуту ");
	scanf_s("%d", &m);

	int totalm = h * 60 + m;
	int t0 = 0;
	int t0p1 = 32;
	int t1 = 1 * 60 + 5;
	int t1p1 = 1 * 60 + 38;
	int t2 = 2 * 60 + 10;
	int t2p1 = 2 * 60 + 43;
	int t3 = 3 * 60 + 16;
	int t3p1 = 3 * 60 + 49;
	int t4 = 4 * 60 + 21;
	int t4p1 = 4 * 60 + 54;
	int t5 = 5 * 60 + 27;
	int t5p1 = 6*60;
	int t6 = 6 * 60 + 32;
	int t6p1 = 7 * 60 + 4;
	int t7 = 7 * 60 + 38;
	int t7p1 = 8 * 60 + 10;
	int t8 = 8 * 60 + 43;
	int t8p1 = 9 * 60 + 16;
	int t9 = 9 * 60 + 48;
	int t9p1 = 10* 60 + 21;
	int t10 = 10 * 60 + 54;
	int t10p1 = 11 * 60 + 27;
	
	int t12 = 12 * 60;

	if ((totalm > t0) && (totalm < t0p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t0p1 - totalm);

	}
	else if ((totalm > t0p1) && (totalm < t1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t1 - totalm);
	}
	else if ((totalm > t1) && (totalm < t1p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t1p1 - totalm);
	}
	else if ((totalm > t1p1) && (totalm < t2))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t2 - totalm);
	}
	else if ((totalm > t2) && (totalm < t2p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t2p1 - totalm);
	}
	else if ((totalm > t2p1) && (totalm < t3))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t3 - totalm);
	}
	else if ((totalm > t3) && (totalm < t3p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t3p1 - totalm);
	}
	else if ((totalm > t3p1) && (totalm < t4))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t4 - totalm);
	}
	else if ((totalm > t4) && (totalm < t4p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t4p1 - totalm);
	}
	else if ((totalm > t4p1) && (totalm < t5))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t5 - totalm);
	}
	else if ((totalm > t5) && (totalm < t5p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t5p1 - totalm);
	}
	else if ((totalm > t5p1) && (totalm < t6))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t6 - totalm);
	}
	else if ((totalm > t6) && (totalm < t6p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t6p1 - totalm);
	}
	else if ((totalm > t6p1) && (totalm < t7))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t7 - totalm);
	}
	else if ((totalm > t7) && (totalm < t7p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t7p1 - totalm);
	}
	else if ((totalm > t7p1) && (totalm < t8))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t8 - totalm);
	}
	else if ((totalm > t8) && (totalm < t8p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t8p1 - totalm);
	}
	else if ((totalm > t8p1) && (totalm < t9))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t9 - totalm);
	}
	else if ((totalm > t9) && (totalm < t9p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t9p1 - totalm);
	}
	else if ((totalm > t9p1) && (totalm < t10))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t10 - totalm);
	}
	else if ((totalm > t10) && (totalm < t10p1))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t10p1 - totalm);
	}
	else if ((totalm > t10p1) && (totalm < t12))
	{
		printf("Через %d мин. часовая и минутная стрелки будут находиться на одной линии", t12 - totalm);
	}
	




}