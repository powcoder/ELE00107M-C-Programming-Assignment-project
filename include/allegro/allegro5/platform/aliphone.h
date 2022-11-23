https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef ALLEGRO_IPHONE
   #error bad include
#endif

#ifndef ALLEGRO_LIB_BUILD
#define ALLEGRO_MAGIC_MAIN
#define main _al_mangled_main
#ifdef __cplusplus
   extern "C" int _al_mangled_main(int, char **);
#endif
#endif
