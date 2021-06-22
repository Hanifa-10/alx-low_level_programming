#include "holberton.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
int hour, minute, hTens, hUnits, mTens, mUnits;
for (hour = 0; hour <= 23; hour++)
{
hTens = hour / 10;
hUnits = hour % 10;

for (minute - 0; minute <= 59; minute++)
{
mTens = minute / 10;
mUnits = minute % 10;

_putchar(hTens + '0');
_putchar(hUnits + '0');

_putchar(':');
			
_putchar(mTens + '0');
_putchar(mUnits + '0');

_putchar('\n');

}/* minutes */
}/* hours */
}

