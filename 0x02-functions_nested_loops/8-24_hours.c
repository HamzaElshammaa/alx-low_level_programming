#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			char hour_str[3], minute_str[3];

			snprintf(hour_str, sizeof(hour_str), "%02d", hour);
			snprintf(minute_str, sizeof(minute_str), "%02d", minute);

			printf("%s:%s\n", hour_str, minute_str);
		}
	}

}
