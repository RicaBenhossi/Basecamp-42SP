#include <unistd.h>

void	generate(char k)
{
	write(1, &k, 1);
}
