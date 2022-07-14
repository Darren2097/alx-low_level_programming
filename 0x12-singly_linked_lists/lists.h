#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_t
 * @str: string
 * @len: length of string
 * @next: points to the next node
 */

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
