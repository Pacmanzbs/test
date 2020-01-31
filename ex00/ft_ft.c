#include <unistd.h>
#include <stdio.h>
void	ft_putint(int i)
{
	write(1, &i, 1);
}



void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int a = 0;
	int* pa = &a;
	ft_ft(pa);
	int b = 1231;
	printf("a=%d\n",a);
}
