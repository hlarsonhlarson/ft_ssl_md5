#include "ft_ssl_md5.h"

int main(int argc, char **argv)
{
	argv[0] = NULL;
	if (argc != 1)
	{
		printf("Hi");
		return (-1);
	}
	char *c = "Hello, world!";
	for (size_t i=0;i<ft_strlen(c);i++){
		printf("%x ", c[i]);
	}
	printf("%s",c);
	return (0);
}
