#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * create_file - Create a file with specified permissions and content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file
 * Return: 1 on success, -1 on failure
 * If filename is NULL, return -1.
 * If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_result = write(file_descriptor, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
