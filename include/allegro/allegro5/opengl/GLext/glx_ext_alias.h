https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*Automatically generated by gl_mkalias.sh DO NOT EDIT!*/
#ifdef _ALLEGRO_GLX_VERSION_1_3
/*GLX1.3*/
#define glXGetFBConfigs _al_glXGetFBConfigs
#define glXChooseFBConfig _al_glXChooseFBConfig
#define glXGetFBConfigAttrib _al_glXGetFBConfigAttrib
#define glXGetVisualFromFBConfig _al_glXGetVisualFromFBConfig
#define glXCreateWindow _al_glXCreateWindow
#define glXDestroyWindow _al_glXDestroyWindow
#define glXCreatePixmap _al_glXCreatePixmap
#define glXDestroyPixmap _al_glXDestroyPixmap
#define glXCreatePbuffer _al_glXCreatePbuffer
#define glXDestroyPbuffer _al_glXDestroyPbuffer
#define glXQueryDrawable _al_glXQueryDrawable
#define glXCreateNewContext _al_glXCreateNewContext
#define glXMakeContextCurrent _al_glXMakeContextCurrent
#define glXGetCurrentReadDrawable _al_glXGetCurrentReadDrawable
#define glXGetCurrentDisplay _al_glXGetCurrentDisplay
#define glXQueryContext _al_glXQueryContext
#define glXSelectEvent _al_glXSelectEvent
#define glXGetSelectedEvent _al_glXGetSelectedEvent
#endif
#ifdef _ALLEGRO_GLX_VERSION_1_4
/*GLX1.4*/
#define glXGetProcAddress _al_glXGetProcAddress
#endif

#ifdef _ALLEGRO_GLX_ARB_get_proc_address
/*GLX_ARB_get_proc_address*/
#define glXGetProcAddressARB _al_glXGetProcAddressARB
#endif

#ifdef _ALLEGRO_GLX_ARB_create_context
#define glXCreateContextAttribsARB _al_glXCreateContextAttribsARB
#endif

#ifdef _ALLEGRO_GLX_SGI_swap_control
/*GLX_SGI_swap_control*/
#define glXSwapIntervalSGI _al_glXSwapIntervalSGI
#endif

#ifdef _ALLEGRO_GLX_SGI_video_sync
/*GLX_SGI_video_sync*/
#define glXGetVideoSyncSGI _al_glXGetVideoSyncSGI
#define glXWaitVideoSyncSGI _al_glXWaitVideoSyncSGI
#endif

#ifdef _ALLEGRO_GLX_SGI_make_current_read
/*GLX_SGI_make_current_read*/
#define glXMakeCurrentReadSGI _al_glXMakeCurrentReadSGI
#define glXGetCurrentReadDrawableSGI _al_glXGetCurrentReadDrawableSGI
#endif

#ifdef _ALLEGRO_GLX_SGIX_video_source
/*GLX_SGIX_video_source*/
/*ThisoneneedsSGI'sheaderfile<dmedia/vl.h>tobeincludedfirst*/
#ifdef _VL_H_
#define glXCreateGLXVideoSourceSGIX _al_glXCreateGLXVideoSourceSGIX
#define glXDestroyGLXVideoSourceSGIX _al_glXDestroyGLXVideoSourceSGIX
#endif
#endif

#ifdef _ALLEGRO_GLX_EXT_import_context
/*GLX_EXT_import_context*/
#define glXGetCurrentDisplayEXT _al_glXGetCurrentDisplayEXT
#define glXQueryContextInfoEXT _al_glXQueryContextInfoEXT
#define glXGetContextIDEXT _al_glXGetContextIDEXT
#define glXImportContextEXT _al_glXImportContextEXT
#define glXFreeContextEXT _al_glXFreeContextEXT
#endif

#ifdef _ALLEGRO_GLX_SGIX_fbconfig
/*GLX_SGIX_fbconfig*/
#define glXGetFBConfigAttribSGIX _al_glXGetFBConfigAttribSGIX
#define glXChooseFBConfigSGIX _al_glXChooseFBConfigSGIX
#define glXCreateGLXPixmapWithConfigSGIX _al_glXCreateGLXPixmapWithConfigSGIX
#define glXCreateContextWithConfigSGIX _al_glXCreateContextWithConfigSGIX
#define glXGetVisualFromFBConfigSGIX _al_glXGetVisualFromFBConfigSGIX
#define glXGetFBConfigFromVisualSGIX _al_glXGetFBConfigFromVisualSGIX
#endif

#ifdef _ALLEGRO_GLX_SGIX_pbuffer
/*GLX_SGIX_pbuffer*/
#define glXCreateGLXPbufferSGIX _al_glXCreateGLXPbufferSGIX
#define glXDestroyGLXPbufferSGIX _al_glXDestroyGLXPbufferSGIX
#define glXQueryGLXPbufferSGIX _al_glXQueryGLXPbufferSGIX
#define glXSelectEventSGIX _al_glXSelectEventSGIX
#define glXGetSelectedEventSGIX _al_glXGetSelectedEventSGIX
#endif

#ifdef _ALLEGRO_GLX_SGI_cushion
/*GLX_SGI_cushion*/
#define glXCushionSGI _al_glXCushionSGI
#endif

#ifdef _ALLEGRO_GLX_SGIX_video_resize
/*GLX_SGIX_video_resize*/
#define glXBindChannelToWindowSGIX _al_glXBindChannelToWindowSGIX
#define glXChannelRectSGIX _al_glXChannelRectSGIX
#define glXQueryChannelRectSGIX _al_glXQueryChannelRectSGIX
#define glXQueryChannelDeltasSGIX _al_glXQueryChannelDeltasSGIX
#define glXChannelRectSyncSGIX _al_glXChannelRectSyncSGIX
#endif

#ifdef _ALLEGRO_GLX_SGIX_dmbuffer
/*GLX_SGIX_dmbuffer*/
/*ThisoneneedsSGI'sheaderfile<dmedia/dm_buffer.h>tobeincludedfirst*/
#ifdef _DM_BUFFER_H_
#define glXAssociateDMPbufferSGIX _al_glXAssociateDMPbufferSGIX
#endif
#endif

#ifdef _ALLEGRO_GLX_SGIX_swap_group
/*GLX_SGIX_swap_group*/
#define glXJoinSwapGroupSGIX _al_glXJoinSwapGroupSGIX
#endif

#ifdef _ALLEGRO_GLX_SGIX_swap_barrier
/*GLX_SGIX_swap_barrier*/
#define glXBindSwapBarrierSGIX _al_glXBindSwapBarrierSGIX
#define glXQueryMaxSwapBarriersSGIX _al_glXQueryMaxSwapBarriersSGIX
#endif

#ifdef _ALLEGRO_GLX_SUN_get_transparent_index
/*GLX_SUN_get_transparent_index*/
#define glXGetTransparentIndexSUN _al_glXGetTransparentIndexSUN
#endif

#ifdef _ALLEGRO_GLX_MESA_copy_sub_buffer
/*GLX_MESA_copy_sub_buffer*/
#define glXCopySubBufferMESA _al_glXCopySubBufferMESA
#endif

#ifdef _ALLEGRO_GLX_MESA_pixmap_colormap
/*GLX_MESA_pixmap_colormap*/
#define glXCreateGLXPixmapMESA _al_glXCreateGLXPixmapMESA
#endif

#ifdef _ALLEGRO_GLX_MESA_release_buffers
/*GLX_MESA_release_buffers*/
#define glXReleaseBuffersMESA _al_glXReleaseBuffersMESA
#endif

#ifdef _ALLEGRO_GLX_MESA_set_3dfx_mode
/*GLX_MESA_set_3dfx_mode*/
#define glXSet3DfxModeMESA _al_glXSet3DfxModeMESA
#endif

#ifdef _ALLEGRO_GLX_OML_sync_control
/*GLX_OML_sync_control*/
#define glXGetSyncValuesOML _al_glXGetSyncValuesOML
#define glXGetMscRateOML _al_glXGetMscRateOML
#define glXSwapBuffersMscOML _al_glXSwapBuffersMscOML
#define glXWaitForMscOML _al_glXWaitForMscOML
#define glXWaitForSbcOML _al_glXWaitForSbcOML
#endif


#ifdef _ALLEGRO_GLX_SGIX_hyperpipe
#define glXQueryHyperpipeNetworkSGIX _al_glXQueryHyperpipeNetworkSGIX
#define glXHyperpipeConfigSGIX _al_glXHyperpipeConfigSGIX
#define glXQueryHyperpipeConfigSGIX _al_glXQueryHyperpipeConfigSGIX
#define glXDestroyHyperpipeConfigSGIX _al_glXDestroyHyperpipeConfigSGIX
#define glXBindHyperpipeSGIX _al_glXBindHyperpipeSGIX
#define glXQueryHyperpipeBestAttribSGIX _al_glXQueryHyperpipeBestAttribSGIX
#define glXHyperpipeAttribSGIX _al_glXHyperpipeAttribSGIX
#define glXQueryHyperpipeAttribSGIX _al_glXQueryHyperpipeAttribSGIX
#endif


#ifdef _ALLEGRO_GLX_MESA_agp_offset
#define glXGetAGPOffsetMESA _al_glXGetAGPOffsetMESA
#endif


#ifdef _ALLEGRO_GLX_EXT_texture_from_pixmap
#define glXBindTexImageEXT _al_glXBindTexImageEXT
#define glXReleaseTextImageEXT _al_glXReleaseTextImageEXT
#endif

#ifdef _ALLEGRO_GLX_NV_video_output
#define glXGetVideoDeviceNV _al_glXGetVideoDeviceNV
#define glXReleaseVideoDeviceNV _al_glXReleaseVideoDeviceNV
#define glXBindVideoImageNV _al_glXBindVideoImageNV
#define glXReleaseVideoImageNV _al_glXReleaseVideoImageNV
#define glXSendPbufferToVideoNV _al_glXSendPbufferToVideoNV
#define glXGetVideoInfoNV _al_glXGetVideoInfoNV
#endif

#ifdef _ALLEGRO_GLX_NV_swap_group
#define glXJoinSwapGroupNV _al_glXJoinSwapGroupNV
#define glXBindSwapBarrierNV _al_glXBindSwapBarrierNV
#define glXQuerySwapGroupNV _al_glXQuerySwapGroupNV
#define glXQueryMaxSwapGroupsNV _al_glXQueryMaxSwapGroupsNV
#define glXQueryFrameCountNV _al_glXQueryFrameCountNV
#define glXResetFrameCountNV _al_glXResetFrameCountNV
#endif

#ifdef _ALLEGRO_GLX_NV_video_capture
#define glXBindVideoCaptureDeviceNV _al_glXBindVideoCaptureDeviceNV
#define glXEnumerateVideoCaptureDevicesNV _al_glXEnumerateVideoCaptureDevicesNV
#define glXLockVideoCaptureDeviceNV _al_glXLockVideoCaptureDeviceNV
#define glXQueryVideoCaptureDeviceNV _al_glXQueryVideoCaptureDeviceNV
#define glXReleaseVideoCaptureDeviceNV _al_glXReleaseVideoCaptureDeviceNV
#endif

#ifdef _ALLEGRO_GLX_EXT_swap_control
#define glXSwapIntervalEXT _al_glXSwapIntervalEXT
#endif

#ifdef _ALLEGRO_GLX_NV_copy_image
#define glXCopyImageSubDataNV _al_glXCopyImageSubDataNV
#endif
