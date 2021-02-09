#include "holberton.h"
/**
 * jack_bauer - print jack bauer's day
 *
 * Return: Void.
 */

void jack_bauer(void)
{
	int hour1, hour2, minute1, minute2;

	for (hour1 = 0; hour1 <= 2; hour1++)
	{
		if (hour1 == 2 && hour2 == 4)
		{
			break;
		}

		for (hour2 = 0; hour2 < 10; hour2++)
		{
			if (hour1 == 2 && hour2 == 4)
			{
				break;
			}
			for (minute1 = 0; minute1 < 6; minute1++)
			{
				if (hour1 == 2 && hour2 == 4)
				{
					break;
				}
				for (minute2 = 0; minute2 < 10; minute2++)
				{
					if (hour1 == 2 && hour2 == 4)
					{
						break;
					}
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
