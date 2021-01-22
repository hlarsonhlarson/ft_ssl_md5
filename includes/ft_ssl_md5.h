#include <stdio.h>
#include <stddef.h>

#define A 0x67452301;
#define B 0xefcdab89;
#define C 0x98badcfe;
#define D 0x10325476;

size_t	ft_strlen(char *string);
uint32_t fun_F(uint32_t X, uint32_t Y, uint32_t Z);
uint32_t fun_G(uint32_t X, uint32_t Y, uint32_t Z);
uint32_t fun_H(uint32_t X, uint32_t Y, uint32_t Z);
uint32_t fun_I(uint32_t X, uint32_t Y, uint32_t Z);
