#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - split string into words
 *
 * @str: string
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
int i, j, k, len = 0;
char **words;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0, k = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
len++;
else
k++;
}

words = malloc((len + 2) * sizeof(char *));
memset(words, 0, (len + 2) * sizeof(char *));
if (words == NULL)
return (NULL);

words[0] = str;
for (i = 1, j = 0; str[j] != '\0'; i++)
{
if (str[j] == ' ')
{
str[j] = '\0';
words[i] = str + j + 1;
j++;
}
else
j++;
}
words[i] = NULL;

return (words);
}
