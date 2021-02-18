/** main.c: struggle
 * created by: Kurt L. Manion
 * on: 18 February 2021
 */

#include "system.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>
#include NCURSES_INCL
#include <assert.h>

int
main()
{
	setlocale(LC_ALL, "");

	srand(time(NULL));

	return EXIT_SUCCESS;
}

/* vi: set ts=8 sw=8 noexpandtab tw=79: */
