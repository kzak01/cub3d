#include "loop.h"

void	draw_img(t_game *game)
{
	int	x;
	int	y;

	y = -1;
	while (++y < W_HEIGHT)
	{
		x = -1;
		while (++x < W_WIDTH)
			game->img.data[y * W_WIDTH + x] = game->buff[y][x];
	}
	mlx_put_image_to_window(game->mlx, game->win, game->img.img, 0, 0);
}

int	game_loop(t_game *game)
{
	ray_cast(game);
	draw_img(game);
	key_used(game);
	return (0);
}
