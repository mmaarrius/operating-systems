// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <math.h>

int main(void)
{
	/* TODO: Use standard C library functions.
	 * Be as creative as you can.
	 */

	int f = open("a.txt", O_RDWR | O_CREAT, 0644);
	if (!f) {
		return 0;
	}
	
	FILE *file = fopen("a.txt", "w");
	if (!file) {
		return 0;
	}
	fclose(file);

	return 0;
}
