#include "main.h"

/**
 *jack_bauer- Initialize function to print every minute of the day
 *_putchar: prints values
 */

void jack_bauer(void)
{
	int hour;

	hour = 0;

	while (hour <= 23)
	{
		int minute;

		minute = 0;

		while (minute <= 59)
		{
			_putchar ('0' + hour / 10);
			_putchar ('0' + hour % 10);
			_putchar (':');
			_putchar ('0' + minute / 10);
			_putchar ('0' + minute % 10);
			_putchar ('\n');
			minute = minute + 1;
		}
		hour = hour + 1;
	}
}
