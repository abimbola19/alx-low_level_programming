#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file to be read
 * @letters: Maximum number of letters to read and print
 * Return: The number of letters read and printed,
 * or 0 on failure or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		error("Failed to open file");
		return (0);
	}

	char *buffer = (char *)malloc(letters + 1);/* +1 for null terminator*/
	
	if (buffer == NULL)
	{
		perror("Failed to allocate memory");
		fclose(file);
		return (0);
	}
	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
	
	buffer[bytesRead] = '\0';  /* Add null terminator at the end*/
	printf("%s", buffer);
	free(buffer);
	fclose(file);
	return (bytesRead);
}
