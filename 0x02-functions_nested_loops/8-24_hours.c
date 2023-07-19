#include "main.h"

/**
* jack_bauer - Prints every minute of the day
*/
void jack_bauer(void)
{
	const int MAX_HOUR = 23;
	const int MAX_MINUTE = 59;

	int hour;
	int minute;

	for (hour = 0; hour <= MAX_HOUR; hour++)
	{
		for (minute = 0; minute <= MAX_MINUTE; minute++)
		{
			/* first digit of hour - 0 if it is less than 10 */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0'); /* last digit of hour */

			_putchar(':');

			/* first digit of minute - 0 if it is less than 10 */
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0'); /* last digit of minute */

			_putchar('\n');
		}
	}
}

