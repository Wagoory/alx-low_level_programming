#include "main.h"
/**
 * _abs - entry point
 *
 * @r: outputs the absolute value of integer r
 *
 * Return: return r if r is positive, return r * -1
 */
int _abs(int r)
{
	if (r < 0)
		{
		return (r * -1);
	}
	else
	{
		return (r);
	}
}
