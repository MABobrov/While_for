#include <stdio.h>



void table_x5(void)
{
	printf("Таблица умножения на 5\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d * 5 = %d\n", i, i * 5);
	}
}

void ugaday(void) {
	int i;
	printf("Проверь свои экстрасенсорные способности!\n Угадай число: \n");
	scanf("%d", &i);
	
	while (i !=7)
	{
		if (i>7)
			printf("Соберись! число больше загаданного\n");
		else
			printf("Открой чакры! число меньше загаданного\n");
		if (i>10)
			printf("Между прочим, оно больше 10\n");
		else
			if (i<10)
			printf("Кстати, число меньше 10\n");
		else
			printf("Ты попал в десятку, но не угадал\n");
		if (i%2 == 0)
			printf("Древние Майа верили, что это число чётное\n");
		else
			printf("Шумеры знали, что это числочётное\n");
		if (i%3 == 0)
			printf("Наскальные рисунки сведетельствуют что оно делится на 3\n");
		else
			printf("Вселенная посылает сигналы о том что оно Не делится 3\n");
		
		printf("Не вешай нос! Пробуй ещё: \n");
		scanf("%d", &i);
	}
	printf("Красавчик! Угадал!\n Хорошего тебе дня!\n");
}

int main(void)
{
	table_x5();
	ugaday();
	return 0;
}
