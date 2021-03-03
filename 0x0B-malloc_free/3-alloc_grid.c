#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array.
 * @width: first parameter.
 * @height: second parameter.
 *
 * Return: array.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int) * height);
if (grid == NULL)
{
free(grid);
return (NULL);
}
i = 0;
while (i < height)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
j = 0;
while (j <= i)
{
free(grid[j]);
j++;
}

free(grid);
return (NULL);
}
i++;
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
