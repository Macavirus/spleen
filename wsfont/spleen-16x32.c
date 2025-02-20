/*
 * Spleen 1.9.1
 * Copyright (c) 2018-2021, Frederic Cambus
 * https://www.cambus.net/
 *
 * Created:      2020-06-20
 * Last Updated: 2020-07-08
 *
 * Spleen is released under the BSD 2-Clause license.
 * See LICENSE file for details.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <stdio.h>
#include <time.h>

#include <dev/wscons/wsconsio.h>
#include <dev/wsfont/spleen16x32.h>

int
main(int argc, char *argv[])
{
	size_t loop;

	for (loop = 0; loop < 32 * 2 * 32; loop++)
		printf("%c", 0);

	for (loop = 0; loop < 224 * 2 * 32; loop++)
		printf("%c", spleen16x32_data[loop]);

	return 0;
}
