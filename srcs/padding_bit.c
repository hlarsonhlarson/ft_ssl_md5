#include "ft_ssl_md5.h"

char	*prepare_message(char *string)
{
	unsigned int offset;
	unsigned int padding_length;

	offset = ft_strlen(string) % 64;
	padding_length = offset < 56 ? 56 - offset : (56 + 64) - offset;
}
