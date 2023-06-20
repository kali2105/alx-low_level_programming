#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n: from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	for (hours = 0; hours <= 23; hours++)
	{
	for (minutes = 0; minutes <= 59; minutes++)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar('\n');
	}
	}
}
