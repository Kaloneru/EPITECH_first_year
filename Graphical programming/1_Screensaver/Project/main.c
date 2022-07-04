/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** ouais
*/
#include "include.h"

void middle(framebuffer_t *framebuffer, sfSprite* sprite, sfTexture* texture, sfRenderWindow* window, char **argv)
{
        fonction(framebuffer, argv);
        sfTexture_updateFromPixels(texture, framebuffer->pixels, 800, 600, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
}

void end(framebuffer_t *framebuffer, sfSprite* sprite, sfTexture* texture, sfRenderWindow* window)
{
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}

int display_window(char **argv)
{
    sfVideoMode mode = {800, 600, 12};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "window", sfResize | sfClose, NULL);
    if (!window)
	return EXIT_FAILURE;
    framebuffer = framebuffer_create(800, 600);
    texture = sfTexture_create(800, 600);
    if (!texture)
	return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    while (sfRenderWindow_isOpen(window))
    {
     	while (sfRenderWindow_pollEvent(window, &event))
	{
            if (event.type == sfEvtClosed)
		sfRenderWindow_close(window);
	}
        middle(framebuffer, sprite, texture, window, argv);
    }
    end(framebuffer, sprite, texture, window);
    return EXIT_SUCCESS;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (my_strcmp(argv[1], "-d") == 0) {
	fonctiond();
        return 0;
    }
    if (my_strcmp(argv[1], "-h") == 0) {
        fonctionh();
        return 0;
    }
    display_window(argv);
}
