typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

void    fill(char **tab, t_point size, int y, int x, char begin_char)
{
    if(y < 0 || y >= size.y || x < 0 || x >= size.x)
        return;

    if(tab[y][x] != begin_char)
        return;
    
    tab[y][x] = 'F';

    fill(tab, size, y - 1, x, begin_char);
    fill(tab, size, y + 1, x, begin_char);
    fill(tab, size, y, x - 1, begin_char);
    fill(tab, size, y, x + 1, begin_char);

}

void    flood_fill(char **tab, t_point size, t_point begin)
{
    char begin_char;
    begin_char = tab[begin.y][begin.x];

    fill(tab, size, begin.y, begin.x, begin_char);

}

























#include<stdio.h>
int	main(void)
{
	char r0[] = "1111";
	char r1[] = "1001";
	char r2[] = "1111";

	char *tab[] = {r0, r1, r2};

	t_point size = {4, 3};  // 4 breed (x), 3 hoog (y)
	t_point begin = {1, 1}; // Start op de eerste '0' (x=1, y=1)

	flood_fill(tab, size, begin);

	for (int i = 0; i < size.y; i++)
		printf("%s\n", tab[i]);

	return (0);
}