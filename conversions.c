/**
 * Part of the Exeme Project, under the MIT license. See '/LICENSE' for
 * license information. SPDX-License-Identifier: MIT License.
 */

#pragma once

#include "./includes.c"

#include "./panic.c"

/**
 * Convers the char into a string.
 *
 * @param chr The char to convert into a string.
 *
 * @return char* - The repeated string.
 */
char *chrToString(char chr) {
	char *string = malloc(2);

	if (!string) {
		panic("failed to malloc string");
	}

	string[0] = chr;
	string[1] = '\0';

	return string;
}

/**
 * Converts the unsigned long into a string.
 *
 * @param num The unsigned long to convert into a string.
 *
 * @return char* - The converted string.
 */
char *ulToString(size_t num) {
	size_t length = (size_t)snprintf(NULL, 0, "%zu", num);

	char *str = malloc(length + 1);

	if (!str) {
		panic("failed to malloc string");
	}

	snprintf(str, length + 1, "%zu", num);

	return str;
}
