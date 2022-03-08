#include "ft_putchar.c"
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			if ((w == 1 && h == 1) || (w == x && h == 1))
				ft_putchar('A');
			else if ((w == 1 && h == y) || (w == x && h == y))
				ft_putchar('C');
			else if ((w == 1) || (w == x) || (h == 1) || (h == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		h++;
		if (h <= y)
			ft_putchar('\n');
	}
}
