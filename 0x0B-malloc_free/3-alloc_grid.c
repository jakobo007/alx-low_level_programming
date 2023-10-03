#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function prototype
 * @width: Array width
 * @height: hiegt
 * Return: Pointer
*/
int **alloc_grid(int width, int height)
{
int a, b;
int **xy;
if (width <= 0 || height <= 0)
{
return (NULL);
}
xy = malloc(height * sizeof(int *));
if (xy == NULL)
{
free(xy);
return (NULL);
}
for (a = 0; a < height; a++)
{
xy[a] = malloc(width * sizeof(int));
if (xy[a] == NULL)
{
for (a--; a >= 0; a--)
free(xy);
free(xy[a]);
return (NULL);
}
}
for (a = 0; a < height; a++)
for (b = 0; b < width; b++)
xy[a][b] = 0;
return (xy);
}
