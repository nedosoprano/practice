#include "stack.h"

int main()
{
	extern char t[W];
	setlocale(LC_ALL, "ukr");
	int hours, minutes;
	printf("����i�� ���: ");
	scanf("%i%i", &hours, &minutes);
	if ((hours > 24) || (minutes > 60)) {
		printf("���i��� �������� ���\n");
		system("pause");
		return 0;
	}
	Convertion(hours, minutes);
	puts(t);
	system("pause");
	return 0;
}