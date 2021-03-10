#include <stdlib.h>
#include <stdio.h>
/**
* array_iterator - given as a parameter on each element of an array
* @array: content of array.
* @size: size of the array.
* @action: pointer to the function.
*
* Return: None.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL)
while (i < size)
{
action(array[i]);
i++;
}
}
