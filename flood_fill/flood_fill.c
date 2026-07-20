typedef struct s_point
{
int x;
int y;
} t_point;

void fill(char **tab, t_point size, t_point cur, char target)
{
    if(cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x)
        return;
    if(tab[cur.y][cur.x] != target)
        return;
    tab[cur.y][cur.x] = 'F';

    fill(tab, size, (t_point){cur.x - 1, cur.y}, target);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, target);
    fill(tab, size, (t_point){cur.x, cur.y - 1}, target);
    fill(tab, size, (t_point){cur.x, cur.y + 1}, target);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    fill(tab, size, begin, target);
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
