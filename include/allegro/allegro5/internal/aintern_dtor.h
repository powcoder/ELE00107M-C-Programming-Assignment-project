https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __al_included_allegro5_aintern_dtor_h
#define __al_included_allegro5_aintern_dtor_h

#ifdef __cplusplus
   extern "C" {
#endif


typedef struct _AL_DTOR_LIST _AL_DTOR_LIST;


AL_FUNC(_AL_DTOR_LIST *, _al_init_destructors, (void));
AL_FUNC(void, _al_push_destructor_owner, (void));
AL_FUNC(void, _al_pop_destructor_owner, (void));
AL_FUNC(void, _al_run_destructors, (_AL_DTOR_LIST *dtors));
AL_FUNC(void, _al_shutdown_destructors, (_AL_DTOR_LIST *dtors));
AL_FUNC(void, _al_register_destructor, (_AL_DTOR_LIST *dtors, void *object,
                                          void (*func)(void*)));
AL_FUNC(void, _al_unregister_destructor, (_AL_DTOR_LIST *dtors, void *object));
AL_FUNC(void, _al_foreach_destructor, (_AL_DTOR_LIST *dtors,
                                          void (*callback)(void *object, void (*func)(void *), void *udata),
                                          void *userdata));


#ifdef __cplusplus
   }
#endif

#endif

/* vim: set ts=8 sts=3 sw=3 et: */
