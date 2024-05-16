#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include "Macros.h"

int main(void)
{
	// Init allegro
	al_init();
	al_set_new_display_flags(ALLEGRO_WINDOWED);
	al_set_new_display_flags(ALLEGRO_RESIZABLE);

	// Create display, event queue, and timer
	ALLEGRO_DISPLAY* display = al_create_display(1280, 720);
	ALLEGRO_EVENT_QUEUE* eventQueue = al_create_event_queue();
	ALLEGRO_TIMER* timer = al_create_timer(1.0 / FPS);
	al_set_window_title(display, "Skii");

	// Install and registers event sources
	al_install_keyboard();
	al_install_mouse();
	al_install_joystick();
	al_register_event_source(eventQueue, al_get_keyboard_event_source());
	al_register_event_source(eventQueue, al_get_display_event_source(display));
	al_register_event_source(eventQueue, al_get_timer_event_source(timer));
	al_register_event_source(eventQueue, al_get_keyboard_event_source());
	al_register_event_source(eventQueue, al_get_mouse_event_source());
	al_register_event_source(eventQueue, al_get_joystick_event_source());

	// Load bitmaps
	al_init_image_addon();

	// Create framebuffer
	Bitmap framebuffer = al_create_bitmap(FB_WIDTH, FB_HEIGHT);

	// Main game loop
	al_start_timer(timer);
	bool running = true;
	float framebufferScale = MIN((float) al_get_display_width(display) / (float) FB_WIDTH,
		(float) al_get_display_height(display) / (float) FB_HEIGHT);

	while (running)
	{
		ALLEGRO_EVENT event;
		al_wait_for_event(eventQueue, &event);

		if (event.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
		{
			// Register window resize and set framebuffer scale
			al_acknowledge_resize(display);
			framebufferScale = MIN((float) al_get_display_width(display) / (float) FB_WIDTH,
				(float) al_get_display_height(display) / (float) FB_HEIGHT);
		}

		if (event.type == ALLEGRO_EVENT_TIMER)
		{
			// Rendering

			al_clear_to_color(al_map_rgb(0, 0, 0));
			
			// Framebuffer rendering
			al_set_target_bitmap(framebuffer);
			al_clear_to_color(al_map_rgb(0, 0, 255));
			al_draw_pixel(0, 0, al_map_rgb(255, 255, 255));
			al_draw_pixel(1, 1, al_map_rgb(255, 255, 255));
			al_draw_pixel(2, 2, al_map_rgb(255, 255, 255));
			al_set_target_bitmap(al_get_backbuffer(display));

			// Calculate framebuffer scale factor then render to display
			al_draw_scaled_bitmap(framebuffer, 0, 0, FB_WIDTH, FB_HEIGHT, 
				(((float) al_get_display_width(display)) / 2.0f) - (((float) FB_WIDTH * framebufferScale) / 2.0f),
				(((float) al_get_display_height(display)) / 2.0f) - (((float) FB_HEIGHT * framebufferScale) / 2.0f),
				FB_WIDTH * framebufferScale, FB_HEIGHT * framebufferScale, 0);

			al_flip_display();
		}

		if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			running = false;
		}
	}

	// Destroy and uninstall everything after window is closed
	al_destroy_display(display);
	al_uninstall_keyboard();
	al_uninstall_mouse();
	al_uninstall_joystick();
	al_destroy_timer(timer);
	al_destroy_event_queue(eventQueue);
	al_destroy_bitmap(framebuffer);

	return 0;
}