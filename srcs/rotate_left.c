#include "ft_ssl_md5.h"

int	rotate_left(int x, int n)
{
	return ((x << n) | (x >> (32 - n)));
}
