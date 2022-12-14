https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 *    Example program for the Allegro library.
 *
 *    Test config file reading and writing.
 */

#include <stdio.h>
#include "allegro5/allegro.h"

#include "common.c"

static int passed = true;

#define TEST(name, expr)                  \
do {                                      \
   if (expr)                              \
      log_printf(" PASS - %s\n", name);   \
   else {                                 \
      log_printf("!FAIL - %s\n", name);   \
      passed = false;                     \
   }                                      \
} while (0)

int main(void)
{
   ALLEGRO_CONFIG *cfg;
   const char *value;
   ALLEGRO_CONFIG_SECTION *iterator;
   ALLEGRO_CONFIG_ENTRY *iterator2;

   if (!al_init()) {
      return 1;
   }
   open_log();

   cfg = al_load_config_file("data/sample.cfg");
   if (!cfg) {
      abort_example("Couldn't load data/sample.cfg\n");
      return 1;
   }

   value = al_get_config_value(cfg, NULL, "old_var");
   TEST("global var", value && !strcmp(value, "old global value"));

   value = al_get_config_value(cfg, "section", "old_var");
   TEST("section var", value && !strcmp(value, "old section value"));

   value = al_get_config_value(cfg, "", "mysha.xpm");
   TEST("long value", value && strlen(value) == 1394);
   
   /* Test whether iterating through our whole sample.cfg returns all
    * sections and entries, in order.
    */

   value = al_get_first_config_section(cfg, &iterator);
   TEST("section1", value && !strcmp(value, ""));
   
   value = al_get_first_config_entry(cfg, value, &iterator2);
   TEST("entry1", value && !strcmp(value, "old_var"));
   
   value = al_get_next_config_entry(&iterator2);
   TEST("entry2", value && !strcmp(value, "mysha.xpm"));
   
   value = al_get_next_config_entry(&iterator2);
   TEST("entry3", value == NULL);

   value = al_get_next_config_section(&iterator);
   TEST("section2", value && !strcmp(value, "section"));
   
   value = al_get_first_config_entry(cfg, value, &iterator2);
   TEST("entry4", value && !strcmp(value, "old_var"));
   
   value = al_get_next_config_entry(&iterator2);
   TEST("entry5", value == NULL);

   value = al_get_next_config_section(&iterator);
   TEST("section3", value);
   
   value = al_get_first_config_entry(cfg, value, &iterator2);
   TEST("entry6", value);
   
   value = al_get_next_config_entry(&iterator2);
   TEST("entry7", value == NULL);
   
   value = al_get_next_config_section(&iterator);
   TEST("section4", value == NULL);
   
   

   al_set_config_value(cfg, "", "new_var", "new value");
   al_set_config_value(cfg, "section", "old_var", "new value");

   TEST("save_config", al_save_config_file("test.cfg", cfg));

   al_destroy_config(cfg);

   close_log(true);

   return passed ? 0 : 1;
}

/* vim: set sts=3 sw=3 et: */
