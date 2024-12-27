#include<stdio.h>
#include<locale.h>
#include<time.h>
#include <string.h>

void center(const char* message) {
	int length = strlen(message);
	int padding = (80 - length) / 2;
	for (int i = 0;i < padding ;i++)
	{
		printf("*");
	}
	printf("%*s", length, message);
	for (int i = 0;i < padding;i++)
	{
		printf("*");
	}
	printf("\n");
}

void main()
{
	setlocale(LC_ALL, "RUS");

	struct tm* mytime;
	time_t t;
	t = time(NULL);
	mytime = localtime(&t);
	for (int i = 0;i < 80;i++)
	{
		printf("*");
	}
	printf("\n");
	char array[200];
	sprintf(array,"���������� ����� %02d:%02d:%02d", mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
	center(array);
	switch (mytime->tm_wday)
	{
	case 0:
	{
		sprintf(array,"������� �����������");
		center(array);
		break;
	}
	case 1:
	{
		sprintf(array,"������� �����������");
		center(array);
		break;
	}
	case 2:
	{
		sprintf(array,"������� �������");
		center(array);
		break;
	}
	case 3:
	{
		sprintf(array,"������� �����");
		center(array);
		break;
	}
	case 4:
	{
		sprintf(array,"������� �������");
		center(array);
		break;
	}
	case 5:
	{
		sprintf(array,"������� �������");
		center(array);
		break;
	}
	case 6:
	{
		sprintf(array,"������� �������");
		center(array);
		break;
	}
	}

	sprintf(array,"%d.%d.%d", mytime->tm_mday, mytime->tm_mon, mytime->tm_year-100+2000);
	center(array);
	switch (mytime->tm_mon)
	{
	case 0:
	{
		printf("%d ������", mytime->tm_mday);
		break;
	}
	case 1:
	{
		sprintf(array,"%d �������", mytime->tm_mday);
		center(array);
		break;
	}
	case 2:
	{
		sprintf(array,"%d �����", mytime->tm_mday);
		center(array);
		break;
	}
	case 3:
	{
		sprintf(array,"%d ������", mytime->tm_mday);
		center(array);
		break;
	}
	case 4:
	{
		sprintf(array,"%d ���", mytime->tm_mday);
		center(array);
		break;
	}
	case 5:
	{
		sprintf(array,"%d ����", mytime->tm_mday);
		center(array);
		break;
	}
	case 6:
	{
		sprintf(array,"%d ����", mytime->tm_mday);
		center(array);
		break;
	}
	case 7:
	{
		sprintf(array,"%d �������", mytime->tm_mday);
		center(array);
		break;
	}
	case 8:
	{
		sprintf(array,"%d ��������", mytime->tm_mday);
		center(array);
		break;
	}
	case 9:
	{
		sprintf(array,"%d �������", mytime->tm_mday);
		center(array);
		break;
	}
	case 10:
	{
		sprintf(array,"%d ������", mytime->tm_mday);
		center(array);
		break;
	}
	case 11:
	{
		sprintf(array,"%d �������", mytime->tm_mday);
		center(array);
		break;
	}

	}

	sprintf(array,"������� %d ���� %d ����", mytime->tm_yday, mytime->tm_year - 100+2000);
	center(array);
	sprintf(array,"�� ����������� �������� %d ���� � %d �����", 6 - mytime->tm_wday, 23 - mytime->tm_hour);
	center(array);
	sprintf(array,"� ������ ���� ������ %d ����� � %d �����", mytime->tm_hour - 9, mytime->tm_min-30);
	center(array);
	sprintf(array,"�� ������ ���� �������� %d ������� � %d ����", 11 - mytime->tm_mon, 31 - mytime->tm_mday);
	center(array);
	sprintf(array,"�� ����� ���� �������� %d ����� � %d ������", 90 - mytime->tm_min, 59 - mytime->tm_sec);                          //??
	center(array);
	sprintf(array,"�� ����� ������ %d ����, �� ����� ���� %d �������", 31 - mytime->tm_mday, 11 - mytime->tm_mon);
	center(array);

	switch (mytime->tm_mon)
	{
	case 0:
	{
		sprintf(array,"����� I, ��� - %d", mytime->tm_year+1900);
		center(array);
		break;
	}
	case 1:
	{
		sprintf(array,"����� II, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 2:
	{
		sprintf(array,"����� III, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 3:
	{
		sprintf(array,"����� IV, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 4:
	{
		sprintf(array,"����� V, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 5:
	{
		sprintf(array,"����� VI, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 6:
	{
		sprintf(array,"����� VII, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 7:
	{
		sprintf(array,"����� VIII, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 8:
	{
		sprintf(array,"����� IX, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 9:
	{
		sprintf(array,"����� X, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 10:
	{
		sprintf(array,"����� XI, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}
	case 11:
	{
		sprintf(array,"����� XII, ��� - %d", mytime->tm_year + 1900);
		center(array);
		break;
	}

	}
	switch (mytime->tm_mon)
	{
	case 0:
	case 1:
	{
		sprintf(array,"���� %d ����", mytime->tm_year - 100);
		center(array);
		break;
	}
	case 2:
	case 3:
	case 4:
	{
		sprintf(array,"����� %d ����", mytime->tm_year - 100);
		center(array);
		break;
	}
	case 5:
	case 6:
	case 7:
	{
		sprintf(array,"���� %d ����", mytime->tm_year - 100);
		center(array);
		break;
	}
	case 8:
	case 9:
	case 10:
	{
		sprintf(array,"����� %d ����", mytime->tm_year - 100);
		center(array);
		break;
	}
	case 11:
	{
		sprintf(array,"���� %d ����", mytime->tm_year - 100);
		center(array);
		break;
	}
	}

	switch (mytime->tm_mon)
	{
	case 8:
	{
		sprintf(array,"���� %d ���� �����", mytime->tm_mday);
		center(array);
		break;
	}
	case 9:
	{
		sprintf(array,"���� %d ���� �����", mytime->tm_mday+30);
		center(array);
		break;
	}
	case 10:
	{
		sprintf(array,"���� %d ���� �����",mytime->tm_mday+61);
		center(array);
		break;
	}
	case 11:
	{
		sprintf(array,"���� %d ���� ����", mytime->tm_mday);
		center(array);
		break;
	}
	}

	for (int i = 0;i < 80;i++)
	{
		printf("*");
	}




}