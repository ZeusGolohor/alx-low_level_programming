#include "main.h"

char **strtow(char *str)
{
	int i, a = 0, z, b, c, d = 0, e = 0, f = 0;
	char **_str, *temp;

/**	if ((str == NULL) || (strlen(str) != 0))
		return (NULL);
	for (i = 0; str[i] != NULL; i++)*/
/*	printf("working\n");*/
	for (i = 0; str[i]; i++)
	{
		if (((str[i] > 'a') && (str[i] < 'z')) || ((str[i] > 'A') && (str[i] < 'Z')) || ((str[i] > 32) && (str[i] < 48)))
		{
			e = e + 1;
			if (e == 1)
				i = i - 1;
			for (; (str[(i + 1)] == 32) && (str[i] != 32); i++)
				d = d + 1; 
		}
	}
	/*printf("%d sentences\n", d);*/
	_str = malloc((sizeof(char *) * d) + 1);
	if (_str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (((str[i] > 'a') && (str[i] < 'z')) || ((str[i] > 'A') && (str[i] < 'Z')) || ((str[i] > 32) && (str[i] < 48)))
		{
			a = a + 1;
			if (a == 1)
				i = i - 1;
			z = 0;
			c = i;
			for (; str[i] != 32; i++)
			{
				/*printf("%c", str[i]);*/
				z = z + 1;
			}
			temp = malloc((sizeof(char) * z) + 1);
			if (temp == NULL)
				return (NULL);
			for (b = 0; b < z; b++)
			{
				temp[b] = str[c];
				c++;
			}
			temp[b] = '\0';
		/*	printf("\n%d, %s\n", z, temp);*/
			if (f < d)
			{
				_str[f] = temp;
				f = f + 1;
			}
		/*	printf("_str[%d]: %s\n", (f - 1), _str[f - 1]);*/
		}
	}
	_str[d] = NULL;
	return (_str);
}
