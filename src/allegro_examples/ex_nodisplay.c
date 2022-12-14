https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Test that bitmap manipulation without a display works. */

#include <stdio.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"

#include "common.c"

int main(void)
{
   ALLEGRO_BITMAP *bmp;
   ALLEGRO_BITMAP *sprite;
   ALLEGRO_COLOR c1, c2, c3;
   bool rc;

   if (!al_init()) {
      abort_example("Error initialising Allegro\n");
      return 1;
   }
   al_init_image_addon();

   sprite = al_load_bitmap("data/cursor.tga");
   if (!sprite) {
      abort_example("Error loading data/cursor.tga\n");
      return 1;
   }

   bmp = al_create_bitmap(256, 256);
   if (!bmp) {
      abort_example("Error creating bitmap\n");
      return 1;
   }
   al_set_target_bitmap(bmp);

   c1 = al_map_rgb(255, 0, 0);
   c2 = al_map_rgb(0, 255, 0);
   c3 = al_map_rgb(0, 255, 255);

   al_draw_bitmap(sprite, 0, 0, 0);
   al_draw_tinted_bitmap(sprite, c1, 64, 0, ALLEGRO_FLIP_HORIZONTAL);
   al_draw_tinted_bitmap(sprite, c2, 0, 64, ALLEGRO_FLIP_VERTICAL);
   al_draw_tinted_bitmap(sprite, c3, 64, 64, ALLEGRO_FLIP_HORIZONTAL |
      ALLEGRO_FLIP_VERTICAL);

   rc = al_save_bitmap("ex_nodisplay_out.tga", bmp);

   if (rc) {
#ifdef ALLEGRO_POPUP_EXAMPLES
      al_show_native_message_box(NULL, "ex_nodisplay_out", "",
         "Saved ex_nodisplay_out.tga", NULL, 0);
#else
      printf("Saved ex_nodisplay_out.tga\n");
#endif
   }
   else {
      abort_example("Error saving ex_nodisplay_out.tga\n");
   }

   al_destroy_bitmap(sprite);
   al_destroy_bitmap(bmp);

   return 0;
}

/* vim: set sts=3 sw=3 et: */
