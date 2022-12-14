https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*         ______   ___    ___
 *        /\  _  \ /\_ \  /\_ \
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      Main header file for the entire Allegro library.
 *      (separate modules can be included from the allegro/ directory)
 *
 *      By Shawn Hargreaves.
 *
 *      Vincent Penquerc'h split the original allegro.h into separate headers.
 *
 *      See readme.txt for copyright information.
 */


#ifndef __al_included_allegro5_allegro_h
#define __al_included_allegro5_allegro_h


#include "allegro5/base.h"

#include "allegro5/system.h"
#include "allegro5/memory.h"
#include "allegro5/debug.h"
#include "allegro5/error.h"

#include "allegro5/utf8.h"

#include "allegro5/altime.h"

#include "allegro5/events.h"

#include "allegro5/mouse.h"
#include "allegro5/timer.h"
#include "allegro5/keyboard.h"
#include "allegro5/joystick.h"

#include "allegro5/threads.h"

#include "allegro5/display.h"
#include "allegro5/transformations.h"
#include "allegro5/bitmap_io.h"
#include "allegro5/bitmap.h"

#include "allegro5/tls.h"

#include "allegro5/file.h"
#include "allegro5/fshook.h"
#include "allegro5/path.h"

#include "allegro5/fmaths.h"

#include "allegro5/config.h"


#ifndef ALLEGRO_NO_COMPATIBILITY
   #include "allegro5/alcompat.h"
#endif


#ifdef ALLEGRO_EXTRA_HEADER
   #include ALLEGRO_EXTRA_HEADER
#endif


#endif


