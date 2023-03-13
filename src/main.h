#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <string.h>
# include "../libft/h_file/libft.h"
# include "../mlx/mlx.h"
# include "../minilibx/mlx.h"
// # include <mlx.h>

# include "map/map.h"
# include "img/img.h"
# include "utils/utils.h"
# include "key/key.h"
# include "loop/loop.h"

# define MAP_CHARS "01NEWS \n"
// # define w_width 1920
// # define w_height 1080
# define w_width 1280
# define w_height 1024
// # define w_width 640
// # define w_height 480
# define texture_size 64

# define KEY_PRESS 2
# define KEY_RELEASE 3
# define KEY_EXIT 17

//Keyboard ARROWS
# define K_AR_L 123
# define K_AR_R 124
# define K_AR_U 126
# define K_AR_D 125
//ESC key
# define K_ESC 53
//Key keyboard
# define K_K_A 0
# define K_K_D 2
# define K_K_S 1
# define K_K_W 13

enum	e_cardinal
{
	NORTH,
	SOUTH,
	WEST,
	EAST
};

typedef struct s_math
{
	double	cameraX;
	double	rayDirX;
	double	rayDirY;
	double	sideDistX;
	double	sideDistY;
	double	deltaDistX;
	double	deltaDistY;
	double	perpWallDist;
	double	wall_x;
	double	step;
	double	texPos;
	int		mapX;
	int		mapY;
	int		stepX;
	int		stepY;
	int		hit;
	int		side;
	int		lineH;
	int		draw_start;
	int		draw_end;
	int		tex_n;
	int		texX;
	int		texY;
	int		color;
}	t_math;

typedef struct s_key
{
	int	key_up;
	int	key_down;
	int	key_right;
	int	key_left;
	int	key_rotate_r;
	int	key_rotate_l;
	int	key_esc;
}	t_key;

typedef struct s_immage
{
	void	*img;
	int		*data;
	int		img_w;
	int		img_h;
	int		bpp;
	int		line_size;
	int		endian;
}	t_img;

typedef struct s_map
{
	char	*north_texture_path;
	char	*south_texture_path;
	char	*west_texture_path;
	char	*east_texture_path;
	char	**map;
	char	**control_map;
	int		**map_int;
	int		floor_color;
	int		ceiling_color;
	int		map_width;
	int		map_height;
	int		north;
	int		south;
	int		west;
	int		east;
	int		ceil;
	int		floor;
	int		cardinal;
	int		read_line;
}	t_map;

typedef struct s_player
{
	int			direction;
	double		posX;
	double		posY;
	double		dirX;
	double		dirY;
	double		planeX;
	double		planeY;
	double		movementS;
	double		rotationS;
}	t_player;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	int			**text;
	int			**buff;
	t_img		img;
	t_key		key;
	t_map		map;
	t_player	player;
}	t_game;

#endif
