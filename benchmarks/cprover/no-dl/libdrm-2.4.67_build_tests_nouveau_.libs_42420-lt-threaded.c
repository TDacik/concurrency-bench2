// #anon_enum_DRM_ADD_COMMAND=0_DRM_RM_COMMAND=1_DRM_INST_HANDLER=2_DRM_UNINST_HANDLER=3
// file ../include/drm/drm.h line 165
enum anonymous_23 { DRM_ADD_COMMAND=0, DRM_RM_COMMAND=1, DRM_INST_HANDLER=2, DRM_UNINST_HANDLER=3 };

// #anon_enum_DRM_CONTEXT_PRESERVED=1_DRM_CONTEXT_2DONLY=2
// file ../xf86drm.h line 229
enum anonymous_9 { DRM_CONTEXT_PRESERVED=1, DRM_CONTEXT_2DONLY=2 };

// #anon_enum_DRM_DMA_BLOCK=1_DRM_DMA_WHILE_LOCKED=2_DRM_DMA_PRIORITY=4_DRM_DMA_WAIT=16_DRM_DMA_SMALLER_OK=32_DRM_DMA_LARGER_OK=64
// file ../xf86drm.h line 185
enum anonymous_20 { DRM_DMA_BLOCK=1, DRM_DMA_WHILE_LOCKED=2, DRM_DMA_PRIORITY=4, DRM_DMA_WAIT=16, DRM_DMA_SMALLER_OK=32, DRM_DMA_LARGER_OK=64 };

// #anon_enum_DRM_DRAWABLE_CLIPRECTS=0
// file ../include/drm/drm.h line 437
enum anonymous_12 { DRM_DRAWABLE_CLIPRECTS=0 };

// #anon_enum_DRM_FRAME_BUFFER=0_DRM_REGISTERS=1_DRM_SHM=2_DRM_AGP=3_DRM_SCATTER_GATHER=4_DRM_CONSISTENT=5
// file ../xf86drm.h line 163
enum anonymous_6 { DRM_FRAME_BUFFER=0, DRM_REGISTERS=1, DRM_SHM=2, DRM_AGP=3, DRM_SCATTER_GATHER=4, DRM_CONSISTENT=5 };

// #anon_enum_DRM_LOCK_READY=1_DRM_LOCK_QUIESCENT=2_DRM_LOCK_FLUSH=4_DRM_LOCK_FLUSH_ALL=8_DRM_HALT_ALL_QUEUES=16_DRM_HALT_CUR_QUEUES=32
// file ../xf86drm.h line 217
enum anonymous_13 { DRM_LOCK_READY=1, DRM_LOCK_QUIESCENT=2, DRM_LOCK_FLUSH=4, DRM_LOCK_FLUSH_ALL=8, DRM_HALT_ALL_QUEUES=16, DRM_HALT_CUR_QUEUES=32 };

// #anon_enum_DRM_MODE_CONNECTED=1_DRM_MODE_DISCONNECTED=2_DRM_MODE_UNKNOWNCONNECTION=3
// file ../xf86drmMode.h line 273
enum anonymous_21 { DRM_MODE_CONNECTED=1, DRM_MODE_DISCONNECTED=2, DRM_MODE_UNKNOWNCONNECTION=3 };

// #anon_enum_DRM_MODE_SUBPIXEL_UNKNOWN=1_DRM_MODE_SUBPIXEL_HORIZONTAL_RGB=2_DRM_MODE_SUBPIXEL_HORIZONTAL_BGR=3_DRM_MODE_SUBPIXEL_VERTICAL_RGB=4_DRM_MODE_SUBPIXEL_VERTICAL_BGR=5_DRM_MODE_SUBPIXEL_NONE=6
// file ../xf86drmMode.h line 279
enum anonymous_22 { DRM_MODE_SUBPIXEL_UNKNOWN=1, DRM_MODE_SUBPIXEL_HORIZONTAL_RGB=2, DRM_MODE_SUBPIXEL_HORIZONTAL_BGR=3, DRM_MODE_SUBPIXEL_VERTICAL_RGB=4, DRM_MODE_SUBPIXEL_VERTICAL_BGR=5, DRM_MODE_SUBPIXEL_NONE=6 };

// #anon_enum_DRM_PAGE_ALIGN=1_DRM_AGP_BUFFER=2_DRM_SG_BUFFER=4_DRM_FB_BUFFER=8_DRM_PCI_BUFFER_RO=16
// file ../xf86drm.h line 209
enum anonymous_8 { DRM_PAGE_ALIGN=1, DRM_AGP_BUFFER=2, DRM_SG_BUFFER=4, DRM_FB_BUFFER=8, DRM_PCI_BUFFER_RO=16 };

// #anon_enum_DRM_RESTRICTED=1_DRM_READ_ONLY=2_DRM_LOCKED=4_DRM_KERNEL=8_DRM_WRITE_COMBINING=16_DRM_CONTAINS_LOCK=32_DRM_REMOVABLE=64
// file ../xf86drm.h line 172
enum anonymous_7 { DRM_RESTRICTED=1, DRM_READ_ONLY=2, DRM_LOCKED=4, DRM_KERNEL=8, DRM_WRITE_COMBINING=16, DRM_CONTAINS_LOCK=32, DRM_REMOVABLE=64 };

// #anon_enum_DRM_VBLANK_ABSOLUTE=0_DRM_VBLANK_RELATIVE=1_DRM_VBLANK_HIGH_CRTC_MASK=62_DRM_VBLANK_EVENT=67108864_DRM_VBLANK_FLIP=134217728_DRM_VBLANK_NEXTONMISS=268435456_DRM_VBLANK_SECONDARY=536870912_DRM_VBLANK_SIGNAL=1073741824
// file ../xf86drm.h line 314
enum anonymous_24 { DRM_VBLANK_ABSOLUTE=0, DRM_VBLANK_RELATIVE=1, DRM_VBLANK_HIGH_CRTC_MASK=62, DRM_VBLANK_EVENT=67108864, DRM_VBLANK_FLIP=134217728, DRM_VBLANK_NEXTONMISS=268435456, DRM_VBLANK_SECONDARY=536870912, DRM_VBLANK_SIGNAL=1073741824 };

// #anon_enum__DRM_PAGE_ALIGN=1__DRM_AGP_BUFFER=2__DRM_SG_BUFFER=4__DRM_FB_BUFFER=8__DRM_PCI_BUFFER_RO=16
// file ../include/drm/drm.h line 330
enum anonymous_19 { _DRM_PAGE_ALIGN=1, _DRM_AGP_BUFFER=2, _DRM_SG_BUFFER=4, _DRM_FB_BUFFER=8, _DRM_PCI_BUFFER_RO=16 };

// tag-#anon#ST[*{S8}_S8_'BusID'||S32'fd'||S32'refcount'||S32'type'||U32'_pad0'|]
// file ../xf86drm.c line 2605
struct anonymous_5;

// tag-#anon#ST[S32'atomic'|]
// file ../../xf86atomic.h line 45
struct anonymous_28;

// tag-#anon#ST[SYM#tag-nouveau_fifo#'base'||U32'notify'||U32'_pad0'|]
// file ../../nouveau/nouveau.h line 264
struct anonymous_18;

// tag-#anon#ST[U32'handle'||U32'grclass'|]
// file ../../include/drm/nouveau_drm.h line 41
struct anonymous_17;

// tag-#anon#ST[U32'memtype'||U32'tile_mode'|]
// file ../../../nouveau/nouveau.h line 101
struct anonymous_11;

// tag-#anon#ST[U32'surf_flags'||U32'surf_pitch'|]
// file ../../../nouveau/nouveau.h line 94
struct anonymous_10;

// tag-#anon#ST[U64'value'||*{cS8}_cS8_'long_format'||*{cS8}_cS8_'long_name'||*{cS8}_cS8_'rate_format'||*{cS8}_cS8_'rate_name'||S32'isvalue'||U32'_pad0'||*{cS8}_cS8_'mult_names'||S32'mult'||S32'verbose'|]
// file ../xf86drm.h line 144
struct anonymous_16;

// tag-#anon#ST[U64'value'||ENtag-drm_stat_type#{U32}_U32_'type'||U32'_pad0'|]
// file ../include/drm/drm.h line 260
struct anonymous;

// tag-#anon#UN[*{SYM#tag-_drmPciBusInfo#}_SYM#tag-_drmPciBusInfo#_'pci'|]
// file ../xf86drm.h line 785
union anonymous_14;

// tag-#anon#UN[*{SYM#tag-_drmPciDeviceInfo#}_SYM#tag-_drmPciDeviceInfo#_'pci'|]
// file ../xf86drm.h line 788
union anonymous_15;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_27;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_26;

// tag-HashBucket
// file ../xf86drmHash.h line 32
struct HashBucket;

// tag-HashTable
// file ../xf86drmHash.h line 38
struct HashTable;

// tag-RandomState
// file ../xf86drmRandom.h line 27
struct RandomState;

// tag-SLEntry
// file ../xf86drmSL.c line 56
struct SLEntry;

// tag-SkipList
// file ../xf86drmSL.c line 64
struct SkipList;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_drmBuf
// file ../xf86drm.h line 247
struct _drmBuf;

// tag-_drmBufDesc
// file ../xf86drm.h line 235
struct _drmBufDesc;

// tag-_drmBufInfo
// file ../xf86drm.h line 242
struct _drmBufInfo;

// tag-_drmBufMap
// file ../xf86drm.h line 260
struct _drmBufMap;

// tag-_drmDMAReq
// file ../xf86drm.h line 285
struct _drmDMAReq;

// tag-_drmDevice
// file ../xf86drm.h line 781
struct _drmDevice;

// tag-_drmEventContext
// file ../xf86drm.h line 733
struct _drmEventContext;

// tag-_drmModeAtomicReq
// file ../xf86drmMode.h line 488
struct _drmModeAtomicReq;

// tag-_drmModeAtomicReqItem
// file ../xf86drmMode.c line 1162
struct _drmModeAtomicReqItem;

// tag-_drmModeConnector
// file ../xf86drmMode.h line 288
struct _drmModeConnector;

// tag-_drmModeCrtc
// file ../xf86drmMode.h line 252
struct _drmModeCrtc;

// tag-_drmModeEncoder
// file ../xf86drmMode.h line 265
struct _drmModeEncoder;

// tag-_drmModeFB
// file ../xf86drmMode.h line 213
struct _drmModeFB;

// tag-_drmModeModeInfo
// file ../xf86drmMode.h line 201
struct _drmModeModeInfo;

// tag-_drmModeObjectProperties
// file ../xf86drmMode.h line 312
struct _drmModeObjectProperties;

// tag-_drmModePlane
// file ../xf86drmMode.h line 318
struct _drmModePlane;

// tag-_drmModePlaneRes
// file ../xf86drmMode.h line 333
struct _drmModePlaneRes;

// tag-_drmModeProperty
// file ../xf86drmMode.h line 231
struct _drmModeProperty;

// tag-_drmModePropertyBlob
// file ../xf86drmMode.h line 225
struct _drmModePropertyBlob;

// tag-_drmModeRes
// file ../xf86drmMode.h line 183
struct _drmModeRes;

// tag-_drmPciBusInfo
// file ../xf86drm.h line 766
struct _drmPciBusInfo;

// tag-_drmPciDeviceInfo
// file ../xf86drm.h line 773
struct _drmPciDeviceInfo;

// tag-_drmServerInfo
// file ../xf86drm.h line 109
struct _drmServerInfo;

// tag-_drmSetVersion
// file ../xf86drm.h line 345
struct _drmSetVersion;

// tag-_drmStats
// file ../xf86drm.h line 142
struct _drmStats;

// tag-_drmVBlank
// file ../xf86drm.h line 340
union _drmVBlank;

// tag-_drmVBlankReply
// file ../xf86drm.h line 333
struct _drmVBlankReply;

// tag-_drmVBlankReq
// file ../xf86drm.h line 327
struct _drmVBlankReq;

// tag-_drmVersion
// file ../../../xf86drm.h line 130
struct _drmVersion;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-drmHashEntry
// file ../xf86drm.h line 115
struct drmHashEntry;

// tag-drm_agp_binding
// file ../include/drm/drm.h line 543
struct drm_agp_binding;

// tag-drm_agp_buffer
// file ../include/drm/drm.h line 531
struct drm_agp_buffer;

// tag-drm_agp_info
// file ../include/drm/drm.h line 555
struct drm_agp_info;

// tag-drm_agp_mode
// file ../include/drm/drm.h line 522
struct drm_agp_mode;

// tag-drm_auth
// file ../include/drm/drm.h line 451
struct drm_auth;

// tag-drm_buf_desc
// file ../include/drm/drm.h line 325
struct drm_buf_desc;

// tag-drm_buf_free
// file ../include/drm/drm.h line 354
struct drm_buf_free;

// tag-drm_buf_info
// file ../include/drm/drm.h line 346
struct drm_buf_info;

// tag-drm_buf_map
// file ../include/drm/drm.h line 374
struct drm_buf_map;

// tag-drm_buf_pub
// file ../include/drm/drm.h line 364
struct drm_buf_pub;

// tag-drm_client
// file ../include/drm/drm.h line 226
struct drm_client;

// tag-drm_clip_rect
// file ../include/drm/drm.h line 85
struct drm_clip_rect;

// tag-drm_control
// file ../include/drm/drm.h line 164
struct drm_control;

// tag-drm_ctx
// file ../include/drm/drm.h line 414
struct drm_ctx;

// tag-drm_ctx_flags
// file ../include/drm/drm.h line 404
enum drm_ctx_flags { _DRM_CONTEXT_PRESERVED=1, _DRM_CONTEXT_2DONLY=2 };

// tag-drm_ctx_priv_map
// file ../include/drm/drm.h line 201
struct drm_ctx_priv_map;

// tag-drm_ctx_res
// file ../include/drm/drm.h line 422
struct drm_ctx_res;

// tag-drm_dma
// file ../include/drm/drm.h line 391
struct drm_dma;

// tag-drm_dma_flags
// file ../include/drm/drm.h line 299
enum drm_dma_flags { _DRM_DMA_BLOCK=1, _DRM_DMA_WHILE_LOCKED=2, _DRM_DMA_PRIORITY=4, _DRM_DMA_WAIT=16, _DRM_DMA_SMALLER_OK=32, _DRM_DMA_LARGER_OK=64 };

// tag-drm_draw
// file ../include/drm/drm.h line 430
struct drm_draw;

// tag-drm_event
// file ../include/drm/drm.h line 795
struct drm_event;

// tag-drm_event_vblank
// file ../include/drm/drm.h line 803
struct drm_event_vblank;

// tag-drm_gem_close
// file ../../../include/drm/drm.h line 588
struct drm_gem_close;

// tag-drm_gem_flink
// file ../../include/drm/drm.h line 595
struct drm_gem_flink;

// tag-drm_gem_open
// file ../../include/drm/drm.h line 604
struct drm_gem_open;

// tag-drm_get_cap
// file ../include/drm/drm.h line 616
struct drm_get_cap;

// tag-drm_irq_busid
// file ../include/drm/drm.h line 460
struct drm_irq_busid;

// tag-drm_lock
// file ../include/drm/drm.h line 286
struct drm_lock;

// tag-drm_lock_flags
// file ../include/drm/drm.h line 269
enum drm_lock_flags { _DRM_LOCK_READY=1, _DRM_LOCK_QUIESCENT=2, _DRM_LOCK_FLUSH=4, _DRM_LOCK_FLUSH_ALL=8, _DRM_HALT_ALL_QUEUES=16, _DRM_HALT_CUR_QUEUES=32 };

// tag-drm_map
// file ../include/drm/drm.h line 212
struct drm_map;

// tag-drm_map_flags
// file ../include/drm/drm.h line 190
enum drm_map_flags { _DRM_RESTRICTED=1, _DRM_READ_ONLY=2, _DRM_LOCKED=4, _DRM_KERNEL=8, _DRM_WRITE_COMBINING=16, _DRM_CONTAINS_LOCK=32, _DRM_REMOVABLE=64, _DRM_DRIVER=128 };

// tag-drm_map_type
// file ../include/drm/drm.h line 177
enum drm_map_type { _DRM_FRAME_BUFFER=0, _DRM_REGISTERS=1, _DRM_SHM=2, _DRM_AGP=3, _DRM_SCATTER_GATHER=4, _DRM_CONSISTENT=5, _DRM_GEM=6 };

// tag-drm_mode_atomic
// file ../include/drm/drm_mode.h line 524
struct drm_mode_atomic;

// tag-drm_mode_card_res
// file ../include/drm/drm_mode.h line 107
struct drm_mode_card_res;

// tag-drm_mode_connector_set_property
// file ../include/drm/drm_mode.h line 279
struct drm_mode_connector_set_property;

// tag-drm_mode_create_blob
// file ../include/drm/drm_mode.h line 539
struct drm_mode_create_blob;

// tag-drm_mode_crtc
// file ../include/drm/drm_mode.h line 120
struct drm_mode_crtc;

// tag-drm_mode_crtc_lut
// file ../include/drm/drm_mode.h line 446
struct drm_mode_crtc_lut;

// tag-drm_mode_crtc_page_flip
// file ../include/drm/drm_mode.h line 482
struct drm_mode_crtc_page_flip;

// tag-drm_mode_cursor
// file ../include/drm/drm_mode.h line 422
struct drm_mode_cursor;

// tag-drm_mode_cursor2
// file ../include/drm/drm_mode.h line 433
struct drm_mode_cursor2;

// tag-drm_mode_destroy_blob
// file ../include/drm/drm_mode.h line 551
struct drm_mode_destroy_blob;

// tag-drm_mode_fb_cmd
// file ../include/drm/drm_mode.h line 315
struct drm_mode_fb_cmd;

// tag-drm_mode_fb_cmd2
// file ../include/drm/drm_mode.h line 328
struct drm_mode_fb_cmd2;

// tag-drm_mode_fb_dirty_cmd
// file ../include/drm/drm_mode.h line 392
struct drm_mode_fb_dirty_cmd;

// tag-drm_mode_get_blob
// file ../include/drm/drm_mode.h line 309
struct drm_mode_get_blob;

// tag-drm_mode_get_connector
// file ../include/drm/drm_mode.h line 219
struct drm_mode_get_connector;

// tag-drm_mode_get_encoder
// file ../include/drm/drm_mode.h line 180
struct drm_mode_get_encoder;

// tag-drm_mode_get_plane
// file ../include/drm/drm_mode.h line 153
struct drm_mode_get_plane;

// tag-drm_mode_get_plane_res
// file ../include/drm/drm_mode.h line 166
struct drm_mode_get_plane_res;

// tag-drm_mode_get_property
// file ../include/drm/drm_mode.h line 267
struct drm_mode_get_property;

// tag-drm_mode_mode_cmd
// file ../include/drm/drm_mode.h line 400
struct drm_mode_mode_cmd;

// tag-drm_mode_modeinfo
// file ../include/drm/drm_mode.h line 95
struct drm_mode_modeinfo;

// tag-drm_mode_obj_get_properties
// file ../include/drm/drm_mode.h line 294
struct drm_mode_obj_get_properties;

// tag-drm_mode_obj_set_property
// file ../include/drm/drm_mode.h line 302
struct drm_mode_obj_set_property;

// tag-drm_mode_property_enum
// file ../include/drm/drm_mode.h line 262
struct drm_mode_property_enum;

// tag-drm_mode_set_plane
// file ../include/drm/drm_mode.h line 138
struct drm_mode_set_plane;

// tag-drm_nouveau_channel_alloc
// file ../../include/drm/nouveau_drm.h line 30
struct drm_nouveau_channel_alloc;

// tag-drm_nouveau_channel_free
// file ../../include/drm/nouveau_drm.h line 48
struct drm_nouveau_channel_free;

// tag-drm_nouveau_gem_cpu_prep
// file ../../include/drm/nouveau_drm.h line 178
struct drm_nouveau_gem_cpu_prep;

// tag-drm_nouveau_gem_info
// file ../../include/drm/nouveau_drm.h line 107
struct drm_nouveau_gem_info;

// tag-drm_nouveau_gem_new
// file ../../include/drm/nouveau_drm.h line 117
struct drm_nouveau_gem_new;

// tag-drm_nouveau_gem_pushbuf
// file ../../include/drm/nouveau_drm.h line 161
struct drm_nouveau_gem_pushbuf;

// tag-drm_nouveau_gem_pushbuf_bo
// file ../../include/drm/nouveau_drm.h line 130
struct drm_nouveau_gem_pushbuf_bo;

// tag-drm_nouveau_gem_pushbuf_bo_presumed
// file ../../include/drm/nouveau_drm.h line 124
struct drm_nouveau_gem_pushbuf_bo_presumed;

// tag-drm_nouveau_gem_pushbuf_push
// file ../../include/drm/nouveau_drm.h line 154
struct drm_nouveau_gem_pushbuf_push;

// tag-drm_nouveau_gem_pushbuf_reloc
// file ../../include/drm/nouveau_drm.h line 143
struct drm_nouveau_gem_pushbuf_reloc;

// tag-drm_nouveau_getparam
// file ../../include/drm/nouveau_drm.h line 85
struct drm_nouveau_getparam;

// tag-drm_nouveau_gpuobj_free
// file ../../include/drm/nouveau_drm.h line 65
struct drm_nouveau_gpuobj_free;

// tag-drm_nouveau_grobj_alloc
// file ../../include/drm/nouveau_drm.h line 52
struct drm_nouveau_grobj_alloc;

// tag-drm_nouveau_notifierobj_alloc
// file ../../include/drm/nouveau_drm.h line 58
struct drm_nouveau_notifierobj_alloc;

// tag-drm_nouveau_setparam
// file ../../include/drm/nouveau_drm.h line 90
struct drm_nouveau_setparam;

// tag-drm_prime_handle
// file ../include/drm/drm.h line 652
struct drm_prime_handle;

// tag-drm_scatter_gather
// file ../include/drm/drm.h line 572
struct drm_scatter_gather;

// tag-drm_set_client_cap
// file ../include/drm/drm.h line 646
struct drm_set_client_cap;

// tag-drm_set_version
// file ../include/drm/drm.h line 580
struct drm_set_version;

// tag-drm_stat_type
// file ../include/drm/drm.h line 235
enum drm_stat_type { _DRM_STAT_LOCK=0, _DRM_STAT_OPENS=1, _DRM_STAT_CLOSES=2, _DRM_STAT_IOCTLS=3, _DRM_STAT_LOCKS=4, _DRM_STAT_UNLOCKS=5, _DRM_STAT_VALUE=6, _DRM_STAT_BYTE=7, _DRM_STAT_COUNT=8, _DRM_STAT_IRQ=9, _DRM_STAT_PRIMARY=10, _DRM_STAT_SECONDARY=11, _DRM_STAT_DMA=12, _DRM_STAT_SPECIAL=13, _DRM_STAT_MISSED=14 };

// tag-drm_stats
// file ../include/drm/drm.h line 258
struct drm_stats;

// tag-drm_unique
// file ../include/drm/drm.h line 145
struct drm_unique;

// tag-drm_update_draw
// file ../include/drm/drm.h line 441
struct drm_update_draw;

// tag-drm_vblank_seq_type
// file ../include/drm/drm.h line 467
enum drm_vblank_seq_type { _DRM_VBLANK_ABSOLUTE=0, _DRM_VBLANK_RELATIVE=1, _DRM_VBLANK_EVENT=67108864, _DRM_VBLANK_FLIP=134217728, _DRM_VBLANK_NEXTONMISS=268435456, _DRM_VBLANK_SECONDARY=536870912, _DRM_VBLANK_SIGNAL=1073741824 };

// tag-drm_version
// file ../include/drm/drm.h line 128
struct drm_version;

// tag-drm_wait_vblank
// file ../include/drm/drm.h line 499
union drm_wait_vblank;

// tag-drm_wait_vblank_reply
// file ../include/drm/drm.h line 487
struct drm_wait_vblank_reply;

// tag-drm_wait_vblank_request
// file ../include/drm/drm.h line 481
struct drm_wait_vblank_request;

// tag-nouveau_bo
// file ../../../nouveau/nouveau.h line 127
struct nouveau_bo;

// tag-nouveau_bo_config
// file ../../../nouveau/nouveau.h line 93
union nouveau_bo_config;

// tag-nouveau_bo_priv
// file ../../nouveau/private.h line 81
struct nouveau_bo_priv;

// tag-nouveau_bufbin_priv
// file ../../nouveau/bufctx.c line 47
struct nouveau_bufbin_priv;

// tag-nouveau_bufctx
// file ../../nouveau/nouveau.h line 171
struct nouveau_bufctx;

// tag-nouveau_bufctx_priv
// file ../../nouveau/bufctx.c line 52
struct nouveau_bufctx_priv;

// tag-nouveau_bufref
// file ../../nouveau/nouveau.h line 159
struct nouveau_bufref;

// tag-nouveau_bufref_priv
// file ../../nouveau/bufctx.c line 41
struct nouveau_bufref_priv;

// tag-nouveau_client
// file ../../nouveau/nouveau.h line 85
struct nouveau_client;

// tag-nouveau_client_kref
// file ../../nouveau/private.h line 25
struct nouveau_client_kref;

// tag-nouveau_client_priv
// file ../../nouveau/private.h line 30
struct nouveau_client_priv;

// tag-nouveau_device
// file ../../../nouveau/nouveau.h line 62
struct nouveau_device;

// tag-nouveau_device_priv
// file ../../nouveau/private.h line 96
struct nouveau_device_priv;

// tag-nouveau_drm
// file ../../nouveau/nouveau.h line 44
struct nouveau_drm;

// tag-nouveau_fifo
// file ../../nouveau/nouveau.h line 236
struct nouveau_fifo;

// tag-nouveau_list
// file ../../nouveau/nouveau.h line 154
struct nouveau_list;

// tag-nouveau_mclass
// file ../../nouveau/nouveau.h line 18
struct nouveau_mclass;

// tag-nouveau_object
// file ../../../nouveau/nouveau.h line 24
struct nouveau_object;

// tag-nouveau_pushbuf
// file ../../nouveau/nouveau.h line 192
struct nouveau_pushbuf;

// tag-nouveau_pushbuf_krec
// file ../../nouveau/nouveau.h line 191
struct nouveau_pushbuf_krec;

// tag-nouveau_pushbuf_priv
// file ../../nouveau/pushbuf.c line 57
struct nouveau_pushbuf_priv;

// tag-nouveau_pushbuf_refn
// file ../../nouveau/nouveau.h line 204
struct nouveau_pushbuf_refn;

// tag-nouveau_sclass
// file ../../nouveau/nouveau.h line 8
struct nouveau_sclass;

// tag-nv04_fifo
// file ../../nouveau/nouveau.h line 243
struct nv04_fifo;

// tag-nv04_notify
// file ../../nouveau/nouveau.h line 271
struct nv04_notify;

// tag-nv_device_info_v0
// file ../../nouveau/nvif/cl0080.h line 13
struct nv_device_info_v0;

// tag-nv_device_v0
// file ../../nouveau/nvif/cl0080.h line 4
struct nv_device_v0;

// tag-nvc0_fifo
// file ../../nouveau/nouveau.h line 250
struct nvc0_fifo;

// tag-nve0_fifo
// file ../../nouveau/nouveau.h line 263
struct nve0_fifo;

// tag-nvif_ioctl_del
// file ../../nouveau/nvif/ioctl.h line 62
struct nvif_ioctl_del;

// tag-nvif_ioctl_mthd_v0
// file ../../nouveau/nvif/ioctl.h line 124
struct nvif_ioctl_mthd_v0;

// tag-nvif_ioctl_new_v0
// file ../../nouveau/nvif/ioctl.h line 50
struct nvif_ioctl_new_v0;

// tag-nvif_ioctl_sclass_oclass_v0
// file ../../nouveau/nvif/ioctl.h line 43
struct nvif_ioctl_sclass_oclass_v0;

// tag-nvif_ioctl_sclass_v0
// file ../../nouveau/nvif/ioctl.h line 38
struct nvif_ioctl_sclass_v0;

// tag-nvif_ioctl_v0
// file ../../nouveau/nvif/ioctl.h line 6
struct nvif_ioctl_v0;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#include <assert.h>
#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef FENCE
#define FENCE(x) ((void)0)
#endif

// DRM_IOCTL
// file ../xf86drmMode.c line 68
static inline signed int DRM_IOCTL(signed int fd, unsigned long int cmd, void *arg);
// DRM_IOCTL_link1
// file ../xf86drmMode.c line 68
static inline signed int DRM_IOCTL_link1(signed int fd_link1, unsigned long int cmd_link1, void *arg_link1);
// HashFind
// file ../xf86drmHash.c line 147
static struct HashBucket * HashFind(struct HashTable *table, unsigned long int key, unsigned long int *h);
// HashFind_link1
// file ../xf86drmHash.c line 147
static struct HashBucket * HashFind_link1(struct HashTable *table_link1, unsigned long int key_link1, unsigned long int *h_link1);
// HashHash
// file ../xf86drmHash.c line 79
static unsigned long int HashHash(unsigned long int key);
// HashHash_link1
// file ../xf86drmHash.c line 79
static unsigned long int HashHash_link1(unsigned long int key_link1);
// SLCreateEntry
// file ../xf86drmSL.c line 72
static struct SLEntry * SLCreateEntry(signed int max_level, unsigned long int key, void *value);
// SLCreateEntry_link1
// file ../xf86drmSL.c line 72
static struct SLEntry * SLCreateEntry_link1(signed int max_level_link1, unsigned long int key_link1, void *value_link1);
// SLLocate
// file ../xf86drmSL.c line 137
static struct SLEntry * SLLocate(void *l, unsigned long int key, struct SLEntry **update);
// SLLocate_link1
// file ../xf86drmSL.c line 137
static struct SLEntry * SLLocate_link1(void *l_link1, unsigned long int key_link1, struct SLEntry **update_link1);
// SLRandomLevel
// file ../xf86drmSL.c line 89
static signed int SLRandomLevel(void);
// SLRandomLevel_link1
// file ../xf86drmSL.c line 89
static signed int SLRandomLevel_link1(void);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __sync_add_and_fetch
// file gcc_builtin_headers_generic.h line 99
signed int __sync_add_and_fetch();
// __sync_fetch_and_add
// file gcc_builtin_headers_generic.h line 93
signed int __sync_fetch_and_add();
// _drmModeGetConnector
// file ../xf86drmMode.c line 474
static struct _drmModeConnector * _drmModeGetConnector(signed int fd, unsigned int connector_id, signed int probe);
// _drmModeGetConnector_link1
// file ../xf86drmMode.c line 474
static struct _drmModeConnector * _drmModeGetConnector_link1(signed int fd_link1, unsigned int connector_id_link1, signed int probe_link1);
// abi16_bo_info
// file ../../nouveau/private.h line 120
void abi16_bo_info(struct nouveau_bo *bo, struct drm_nouveau_gem_info *info);
// abi16_bo_init
// file ../../nouveau/private.h line 121
signed int abi16_bo_init(struct nouveau_bo *bo, unsigned int alignment, union nouveau_bo_config *config);
// abi16_chan_nv04
// file ../../nouveau/abi16.c line 39
static signed int abi16_chan_nv04(struct nouveau_object *obj);
// abi16_chan_nvc0
// file ../../nouveau/abi16.c line 63
static signed int abi16_chan_nvc0(struct nouveau_object *obj);
// abi16_chan_nve0
// file ../../nouveau/abi16.c line 84
static signed int abi16_chan_nve0(struct nouveau_object *obj);
// abi16_delete
// file ../../nouveau/private.h line 118
void abi16_delete(struct nouveau_object *obj);
// abi16_engobj
// file ../../nouveau/abi16.c line 110
static signed int abi16_engobj(struct nouveau_object *obj);
// abi16_ntfy
// file ../../nouveau/abi16.c line 151
static signed int abi16_ntfy(struct nouveau_object *obj);
// abi16_object
// file ../../nouveau/private.h line 117
_Bool abi16_object(struct nouveau_object *obj, signed int (**func)(struct nouveau_object *));

//

// abi16_sclass
// file ../../nouveau/private.h line 119
signed int abi16_sclass(struct nouveau_object *obj, struct nouveau_sclass **psclass);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cli_kref_get
// file ../../nouveau/private.h line 43
static inline struct drm_nouveau_gem_pushbuf_bo * cli_kref_get(struct nouveau_client *client, struct nouveau_bo *bo);
// cli_kref_set
// file ../../nouveau/private.h line 63
static inline void cli_kref_set(struct nouveau_client *client, struct nouveau_bo *bo, struct drm_nouveau_gem_pushbuf_bo *kref, struct nouveau_pushbuf *push);
// cli_push_get
// file ../../nouveau/private.h line 53
static inline struct nouveau_pushbuf * cli_push_get(struct nouveau_client *client, struct nouveau_bo *bo);
// cli_push_get_link1
// file ../../nouveau/private.h line 53
static inline struct nouveau_pushbuf * cli_push_get_link1(struct nouveau_client *client_link1, struct nouveau_bo *bo_link1);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// debug_init
// file ../../nouveau/nouveau.c line 57
static void debug_init(char *args);
// dirfd
// file /usr/include/dirent.h line 223
extern signed int dirfd(struct __dirstream *);
// dlsym
// file /usr/include/dlfcn.h line 64
extern void * dlsym(void *, const char *);
// drmAddBufs
// file ../xf86drm.c line 1131
extern signed int drmAddBufs(signed int fd, signed int count, signed int size, enum anonymous_8 flags, signed int agp_offset);
// drmAddContextPrivateMapping
// file ../xf86drm.c line 2267
extern signed int drmAddContextPrivateMapping(signed int fd, unsigned int ctx_id, unsigned int handle);
// drmAddContextTag
// file ../xf86drm.c line 2238
extern signed int drmAddContextTag(signed int fd, unsigned int context, void *tag);
// drmAddMap
// file ../xf86drm.c line 1086
extern signed int drmAddMap(signed int fd, unsigned int offset, unsigned int size, enum anonymous_6 type, enum anonymous_7 flags, unsigned int *handle);
// drmAgpAcquire
// file ../xf86drm.c line 1689
extern signed int drmAgpAcquire(signed int fd);
// drmAgpAlloc
// file ../xf86drm.c line 1755
extern signed int drmAgpAlloc(signed int fd, unsigned long int size, unsigned long int type, unsigned long int *address, unsigned int *handle);
// drmAgpBase
// file ../xf86drm.c line 1927
extern unsigned long int drmAgpBase(signed int fd);
// drmAgpBind
// file ../xf86drm.c line 1810
extern signed int drmAgpBind(signed int fd, unsigned int handle, unsigned long int offset);
// drmAgpDeviceId
// file ../xf86drm.c line 2042
extern unsigned int drmAgpDeviceId(signed int fd);
// drmAgpEnable
// file ../xf86drm.c line 1727
extern signed int drmAgpEnable(signed int fd, unsigned long int mode);
// drmAgpFree
// file ../xf86drm.c line 1785
extern signed int drmAgpFree(signed int fd, unsigned int handle);
// drmAgpGetMode
// file ../xf86drm.c line 1904
extern unsigned long int drmAgpGetMode(signed int fd);
// drmAgpMemoryAvail
// file ../xf86drm.c line 1996
extern unsigned long int drmAgpMemoryAvail(signed int fd);
// drmAgpMemoryUsed
// file ../xf86drm.c line 1973
extern unsigned long int drmAgpMemoryUsed(signed int fd);
// drmAgpRelease
// file ../xf86drm.c line 1707
extern signed int drmAgpRelease(signed int fd);
// drmAgpSize
// file ../xf86drm.c line 1950
extern unsigned long int drmAgpSize(signed int fd);
// drmAgpUnbind
// file ../xf86drm.c line 1835
extern signed int drmAgpUnbind(signed int fd, unsigned int handle);
// drmAgpVendorId
// file ../xf86drm.c line 2019
extern unsigned int drmAgpVendorId(signed int fd);
// drmAgpVersionMajor
// file ../xf86drm.c line 1858
extern signed int drmAgpVersionMajor(signed int fd);
// drmAgpVersionMinor
// file ../xf86drm.c line 1881
extern signed int drmAgpVersionMinor(signed int fd);
// drmAllocCpy
// file ../xf86drmMode.c line 78
static void * drmAllocCpy(char *array, signed int count, signed int entry_size);
// drmAllocCpy_link1
// file ../xf86drmMode.c line 78
static void * drmAllocCpy_link1(char *array_link1, signed int count_link1, signed int entry_size_link1);
// drmAuthMagic
// file ../xf86drm.c line 1025
extern signed int drmAuthMagic(signed int fd, unsigned int magic);
// drmAvailable
// file ../xf86drm.c line 477
extern signed int drmAvailable(void);
// drmCheckModesettingSupported
// file ../xf86drmMode.c line 734
extern signed int drmCheckModesettingSupported(const char *busid);
// drmClose
// file ../../../xf86drm.h line 573
extern signed int drmClose(signed int fd);
// drmCloseOnce
// file ../xf86drm.c line 2654
extern void drmCloseOnce(signed int fd);
// drmCommandNone
// file ../xf86drm.c line 2506
extern signed int drmCommandNone(signed int fd, unsigned long int drmCommandIndex);
// drmCommandRead
// file ../xf86drm.c line 2533
extern signed int drmCommandRead(signed int fd, unsigned long int drmCommandIndex, void *data, unsigned long int size);
// drmCommandWrite
// file ../../xf86drm.h line 594
extern signed int drmCommandWrite(signed int fd, unsigned long int drmCommandIndex, void *data, unsigned long int size);
// drmCommandWriteRead
// file ../../xf86drm.h line 596
extern signed int drmCommandWriteRead(signed int fd, unsigned long int drmCommandIndex, void *data, unsigned long int size);
// drmCompareBusInfo
// file ../xf86drm.c line 2904
static signed int drmCompareBusInfo(struct _drmDevice *a, struct _drmDevice *b);
// drmCompareBusInfo_link1
// file ../xf86drm.c line 2904
static signed int drmCompareBusInfo_link1(struct _drmDevice *a_link1, struct _drmDevice *b_link1);
// drmCopyVersion
// file ../xf86drm.c line 816
static void drmCopyVersion(struct _drmVersion *d, const struct drm_version *s);
// drmCopyVersion_link1
// file ../xf86drm.c line 816
static void drmCopyVersion_link1(struct _drmVersion *d_link1, const struct drm_version *s_link1);
// drmCreateContext
// file ../xf86drm.c line 1549
extern signed int drmCreateContext(signed int fd, unsigned int *handle);
// drmCreateDrawable
// file ../xf86drm.c line 1637
extern signed int drmCreateDrawable(signed int fd, unsigned int *handle);
// drmCtlInstHandler
// file ../xf86drm.c line 2158
extern signed int drmCtlInstHandler(signed int fd, signed int irq);
// drmCtlUninstHandler
// file ../xf86drm.c line 2182
extern signed int drmCtlUninstHandler(signed int fd);
// drmDMA
// file ../xf86drm.c line 1410
extern signed int drmDMA(signed int fd, struct _drmDMAReq *request);
// drmDebugPrint
// file ../xf86drm.c line 123
static signed int drmDebugPrint(const char *format, void **ap);
// drmDebugPrint_link1
// file ../xf86drm.c line 123
static signed int drmDebugPrint_link1(const char *format_link1, void **ap_link1);
// drmDelContextTag
// file ../xf86drm.c line 2249
extern signed int drmDelContextTag(signed int fd, unsigned int context);
// drmDestroyContext
// file ../xf86drm.c line 1626
extern signed int drmDestroyContext(signed int fd, unsigned int handle);
// drmDestroyDrawable
// file ../xf86drm.c line 1648
extern signed int drmDestroyDrawable(signed int fd, unsigned int handle);
// drmDropMaster
// file ../xf86drm.c line 2678
extern signed int drmDropMaster(signed int fd);
// drmError
// file ../xf86drm.c line 2121
extern signed int drmError(signed int err, const char *label);
// drmFinish
// file ../xf86drm.c line 2194
extern signed int drmFinish(signed int fd, signed int context, enum anonymous_13 flags);
// drmFoldDuplicatedDevices
// file ../xf86drm.c line 3052
static void drmFoldDuplicatedDevices(struct _drmDevice **local_devices, signed int count);
// drmFoldDuplicatedDevices_link1
// file ../xf86drm.c line 3052
static void drmFoldDuplicatedDevices_link1(struct _drmDevice **local_devices_link1, signed int count_link1);
// drmFree
// file ../xf86drm.c line 158
extern void drmFree(void *pt);
// drmFreeBufs
// file ../xf86drm.c line 1198
extern signed int drmFreeBufs(signed int fd, signed int count, signed int *list);
// drmFreeBusid
// file ../xf86drm.c line 951
extern void drmFreeBusid(const char *busid);
// drmFreeDevice
// file ../xf86drm.c line 2979
extern void drmFreeDevice(struct _drmDevice **device);
// drmFreeDevices
// file ../xf86drm.c line 2988
extern void drmFreeDevices(struct _drmDevice **devices, signed int count);
// drmFreeKernelVersion
// file ../xf86drm.c line 795
static void drmFreeKernelVersion(struct drm_version *v);
// drmFreeKernelVersion_link1
// file ../xf86drm.c line 795
static void drmFreeKernelVersion_link1(struct drm_version *v_link1);
// drmFreeReservedContextList
// file ../xf86drm.c line 1526
extern void drmFreeReservedContextList(unsigned int *pt);
// drmFreeVersion
// file ../../../xf86drm.h line 577
extern void drmFreeVersion(struct _drmVersion *v);
// drmGetBufInfo
// file ../xf86drm.c line 1285
extern struct _drmBufInfo * drmGetBufInfo(signed int fd);
// drmGetBusid
// file ../xf86drm.c line 969
extern char * drmGetBusid(signed int fd);
// drmGetCap
// file ../xf86drm.c line 916
extern signed int drmGetCap(signed int fd, unsigned long int capability, unsigned long int *value);
// drmGetClient
// file ../xf86drm.c line 2316
extern signed int drmGetClient(signed int fd, signed int idx, signed int *auth, signed int *pid, signed int *uid, unsigned long int *magic, unsigned long int *iocs);
// drmGetContextFlags
// file ../xf86drm.c line 1592
extern signed int drmGetContextFlags(signed int fd, unsigned int context, enum anonymous_9 *flags);
// drmGetContextPrivateMapping
// file ../xf86drm.c line 2281
extern signed int drmGetContextPrivateMapping(signed int fd, unsigned int ctx_id, unsigned int *handle);
// drmGetContextTag
// file ../xf86drm.c line 2256
extern void * drmGetContextTag(signed int fd, unsigned int context);
// drmGetDevice
// file ../xf86drm.c line 3078
extern signed int drmGetDevice(signed int fd, struct _drmDevice **device);
// drmGetDeviceNameFromFd
// file ../xf86drm.c line 2683
extern char * drmGetDeviceNameFromFd(signed int fd);
// drmGetDevices
// file ../xf86drm.c line 3194
extern signed int drmGetDevices(struct _drmDevice **devices, signed int max_devices);
// drmGetEntry
// file ../xf86drm.c line 186
extern struct drmHashEntry * drmGetEntry(signed int fd);
// drmGetHashTable
// file ../xf86drm.c line 148
extern void * drmGetHashTable(void);
// drmGetInterruptFromBusID
// file ../xf86drm.c line 2225
extern signed int drmGetInterruptFromBusID(signed int fd, signed int busnum, signed int devnum, signed int funcnum);
// drmGetKeyFromFd
// file ../xf86drm.c line 177
static unsigned long int drmGetKeyFromFd(signed int fd);
// drmGetKeyFromFd_link1
// file ../xf86drm.c line 177
static unsigned long int drmGetKeyFromFd_link1(signed int fd_link1);
// drmGetLibVersion
// file ../xf86drm.c line 895
extern struct _drmVersion * drmGetLibVersion(signed int fd);
// drmGetLock
// file ../xf86drm.c line 1453
extern signed int drmGetLock(signed int fd, unsigned int context, enum anonymous_13 flags);
// drmGetMagic
// file ../xf86drm.c line 1012
extern signed int drmGetMagic(signed int fd, unsigned int *magic);
// drmGetMap
// file ../xf86drm.c line 2297
extern signed int drmGetMap(signed int fd, signed int idx, unsigned int *offset, unsigned int *size, enum anonymous_6 *type, enum anonymous_7 *flags, unsigned int *handle, signed int *mtrr);
// drmGetMaxNodeName
// file ../xf86drm.c line 2939
static signed int drmGetMaxNodeName(void);
// drmGetMaxNodeName_link1
// file ../xf86drm.c line 2939
static signed int drmGetMaxNodeName_link1(void);
// drmGetMinorBase
// file ../xf86drm.c line 501
static signed int drmGetMinorBase(signed int type);
// drmGetMinorBase_link1
// file ../xf86drm.c line 501
static signed int drmGetMinorBase_link1(signed int type_link1);
// drmGetMinorName
// file ../xf86drm.c line 532
static const char * drmGetMinorName(signed int type);
// drmGetMinorName_link1
// file ../xf86drm.c line 532
static const char * drmGetMinorName_link1(signed int type_link1);
// drmGetMinorNameForFD
// file ../xf86drm.c line 2763
static char * drmGetMinorNameForFD(signed int fd, signed int type);
// drmGetMinorNameForFD_link1
// file ../xf86drm.c line 2763
static char * drmGetMinorNameForFD_link1(signed int fd_link1, signed int type_link1);
// drmGetMinorType
// file ../xf86drm.c line 515
static signed int drmGetMinorType(signed int minor);
// drmGetMinorType_link1
// file ../xf86drm.c line 515
static signed int drmGetMinorType_link1(signed int minor_link1);
// drmGetNodeType
// file ../xf86drm.c line 2922
static signed int drmGetNodeType(const char *name);
// drmGetNodeType_link1
// file ../xf86drm.c line 2922
static signed int drmGetNodeType_link1(const char *name_link1);
// drmGetNodeTypeFromFd
// file ../xf86drm.c line 2709
extern signed int drmGetNodeTypeFromFd(signed int fd);
// drmGetPrimaryDeviceNameFromFd
// file ../xf86drm.c line 2825
extern char * drmGetPrimaryDeviceNameFromFd(signed int fd);
// drmGetRenderDeviceNameFromFd
// file ../xf86drm.c line 2830
extern char * drmGetRenderDeviceNameFromFd(signed int fd);
// drmGetReservedContextList
// file ../xf86drm.c line 1493
extern unsigned int * drmGetReservedContextList(signed int fd, signed int *count);
// drmGetStats
// file ../xf86drm.c line 2333
extern signed int drmGetStats(signed int fd, struct _drmStats *stats);
// drmGetVersion
// file ../../../xf86drm.h line 574
extern struct _drmVersion * drmGetVersion(signed int fd);
// drmHandleEvent
// file ../xf86drmMode.c line 873
extern signed int drmHandleEvent(signed int fd, struct _drmEventContext *evctx);
// drmHashCreate
// file ../xf86drm.h line 695
extern void * drmHashCreate(void);
// drmHashDelete
// file ../xf86drm.h line 699
extern signed int drmHashDelete(void *t, unsigned long int key);
// drmHashDestroy
// file ../xf86drm.h line 696
extern signed int drmHashDestroy(void *t);
// drmHashFirst
// file ../xf86drmHash.c line 244
extern signed int drmHashFirst(void *t, unsigned long int *key, void **value);
// drmHashInsert
// file ../xf86drm.h line 698
extern signed int drmHashInsert(void *t, unsigned long int key, void *value);
// drmHashLookup
// file ../xf86drm.h line 697
extern signed int drmHashLookup(void *t, unsigned long int key, void **value);
// drmHashNext
// file ../xf86drmHash.c line 227
extern signed int drmHashNext(void *t, unsigned long int *key, void **value);
// drmIoctl
// file ../../xf86drm.h line 121
extern signed int drmIoctl(signed int fd, unsigned long int request, void *arg);
// drmMalloc
// file ../xf86drm.c line 153
extern void * drmMalloc(signed int size);
// drmMap
// file ../xf86drm.c line 1250
extern signed int drmMap(signed int fd, unsigned int handle, unsigned int size, void **address);
// drmMapBufs
// file ../xf86drm.c line 1335
extern struct _drmBufMap * drmMapBufs(signed int fd);
// drmMarkBufs
// file ../xf86drm.c line 1147
extern signed int drmMarkBufs(signed int fd, double low, double high);
// drmMatchBusID
// file ../xf86drm.c line 220
static signed int drmMatchBusID(const char *id1, const char *id2, signed int pci_domain_ok);
// drmMatchBusID_link1
// file ../xf86drm.c line 220
static signed int drmMatchBusID_link1(const char *id1_link1, const char *id2_link1, signed int pci_domain_ok_link1);
// drmModeAddFB
// file ../xf86drmMode.c line 251
extern signed int drmModeAddFB(signed int fd, unsigned int width, unsigned int height, unsigned char depth, unsigned char bpp, unsigned int pitch, unsigned int bo_handle, unsigned int *buf_id);
// drmModeAddFB2
// file ../xf86drmMode.c line 273
extern signed int drmModeAddFB2(signed int fd, unsigned int width, unsigned int height, unsigned int pixel_format, unsigned int *bo_handles, unsigned int *pitches, unsigned int *offsets, unsigned int *buf_id, unsigned int flags);
// drmModeAtomicAddProperty
// file ../xf86drmMode.c line 1262
extern signed int drmModeAtomicAddProperty(struct _drmModeAtomicReq *req, unsigned int object_id, unsigned int property_id, unsigned long int value);
// drmModeAtomicAlloc
// file ../xf86drmMode.c line 1176
extern struct _drmModeAtomicReq * drmModeAtomicAlloc(void);
// drmModeAtomicCommit
// file ../xf86drmMode.c line 1313
extern signed int drmModeAtomicCommit(signed int fd, struct _drmModeAtomicReq *req, unsigned int flags, void *user_data);
// drmModeAtomicDuplicate
// file ../xf86drmMode.c line 1191
extern struct _drmModeAtomicReq * drmModeAtomicDuplicate(struct _drmModeAtomicReq *old);
// drmModeAtomicFree
// file ../xf86drmMode.c line 1290
extern void drmModeAtomicFree(struct _drmModeAtomicReq *req);
// drmModeAtomicGetCursor
// file ../xf86drmMode.c line 1249
extern signed int drmModeAtomicGetCursor(struct _drmModeAtomicReq *req);
// drmModeAtomicMerge
// file ../xf86drmMode.c line 1220
extern signed int drmModeAtomicMerge(struct _drmModeAtomicReq *base, struct _drmModeAtomicReq *augment);
// drmModeAtomicSetCursor
// file ../xf86drmMode.c line 1256
extern void drmModeAtomicSetCursor(struct _drmModeAtomicReq *req, signed int cursor);
// drmModeAttachMode
// file ../xf86drmMode.c line 589
extern signed int drmModeAttachMode(signed int fd, unsigned int connector_id, struct _drmModeModeInfo *mode_info);
// drmModeConnectorSetProperty
// file ../xf86drmMode.c line 715
extern signed int drmModeConnectorSetProperty(signed int fd, unsigned int connector_id, unsigned int property_id, unsigned long int value);
// drmModeCreatePropertyBlob
// file ../xf86drmMode.c line 1419
extern signed int drmModeCreatePropertyBlob(signed int fd, const void *data, unsigned long int length, unsigned int *id);
// drmModeCrtcGetGamma
// file ../xf86drmMode.c line 843
extern signed int drmModeCrtcGetGamma(signed int fd, unsigned int crtc_id, unsigned int size, unsigned short int *red, unsigned short int *green, unsigned short int *blue);
// drmModeCrtcSetGamma
// file ../xf86drmMode.c line 858
extern signed int drmModeCrtcSetGamma(signed int fd, unsigned int crtc_id, unsigned int size, unsigned short int *red, unsigned short int *green, unsigned short int *blue);
// drmModeDestroyPropertyBlob
// file ../xf86drmMode.c line 1443
extern signed int drmModeDestroyPropertyBlob(signed int fd, unsigned int id);
// drmModeDetachMode
// file ../xf86drmMode.c line 600
extern signed int drmModeDetachMode(signed int fd, unsigned int connector_id, struct _drmModeModeInfo *mode_info);
// drmModeDirtyFB
// file ../xf86drmMode.c line 327
extern signed int drmModeDirtyFB(signed int fd, unsigned int bufferId, struct drm_clip_rect *clips, unsigned int num_clips);
// drmModeFreeConnector
// file ../xf86drmMode.c line 136
extern void drmModeFreeConnector(struct _drmModeConnector *ptr);
// drmModeFreeCrtc
// file ../xf86drmMode.c line 128
extern void drmModeFreeCrtc(struct _drmModeCrtc *ptr);
// drmModeFreeEncoder
// file ../xf86drmMode.c line 148
extern void drmModeFreeEncoder(struct _drmModeEncoder *ptr);
// drmModeFreeFB
// file ../xf86drmMode.c line 119
extern void drmModeFreeFB(struct _drmModeFB *ptr);
// drmModeFreeModeInfo
// file ../xf86drmMode.c line 99
extern void drmModeFreeModeInfo(struct _drmModeModeInfo *ptr);
// drmModeFreeObjectProperties
// file ../xf86drmMode.c line 1139
extern void drmModeFreeObjectProperties(struct _drmModeObjectProperties *ptr);
// drmModeFreePlane
// file ../xf86drmMode.c line 1015
extern void drmModeFreePlane(struct _drmModePlane *ptr);
// drmModeFreePlaneResources
// file ../xf86drmMode.c line 1069
extern void drmModeFreePlaneResources(struct _drmModePlaneRes *ptr);
// drmModeFreeProperty
// file ../xf86drmMode.c line 665
extern void drmModeFreeProperty(struct _drmModeProperty *ptr);
// drmModeFreePropertyBlob
// file ../xf86drmMode.c line 706
extern void drmModeFreePropertyBlob(struct _drmModePropertyBlob *ptr);
// drmModeFreeResources
// file ../xf86drmMode.c line 107
extern void drmModeFreeResources(struct _drmModeRes *ptr);
// drmModeGetConnector
// file ../xf86drmMode.c line 579
extern struct _drmModeConnector * drmModeGetConnector(signed int fd, unsigned int connector_id);
// drmModeGetConnectorCurrent
// file ../xf86drmMode.c line 584
extern struct _drmModeConnector * drmModeGetConnectorCurrent(signed int fd, unsigned int connector_id);
// drmModeGetCrtc
// file ../xf86drmMode.c line 344
extern struct _drmModeCrtc * drmModeGetCrtc(signed int fd, unsigned int crtcId);
// drmModeGetEncoder
// file ../xf86drmMode.c line 447
struct _drmModeEncoder * drmModeGetEncoder(signed int fd, unsigned int encoder_id);
// drmModeGetFB
// file ../xf86drmMode.c line 302
extern struct _drmModeFB * drmModeGetFB(signed int fd, unsigned int buf);
// drmModeGetPlane
// file ../xf86drmMode.c line 964
extern struct _drmModePlane * drmModeGetPlane(signed int fd, unsigned int plane_id);
// drmModeGetPlaneResources
// file ../xf86drmMode.c line 1024
extern struct _drmModePlaneRes * drmModeGetPlaneResources(signed int fd);
// drmModeGetProperty
// file ../xf86drmMode.c line 611
extern struct _drmModeProperty * drmModeGetProperty(signed int fd, unsigned int property_id);
// drmModeGetPropertyBlob
// file ../xf86drmMode.c line 675
extern struct _drmModePropertyBlob * drmModeGetPropertyBlob(signed int fd, unsigned int blob_id);
// drmModeGetResources
// file ../xf86drmMode.c line 157
extern struct _drmModeRes * drmModeGetResources(signed int fd);
// drmModeMoveCursor
// file ../xf86drmMode.c line 431
signed int drmModeMoveCursor(signed int fd, unsigned int crtcId, signed int x, signed int y);
// drmModeObjectGetProperties
// file ../xf86drmMode.c line 1078
extern struct _drmModeObjectProperties * drmModeObjectGetProperties(signed int fd, unsigned int object_id, unsigned int object_type);
// drmModeObjectSetProperty
// file ../xf86drmMode.c line 1148
extern signed int drmModeObjectSetProperty(signed int fd, unsigned int object_id, unsigned int object_type, unsigned int property_id, unsigned long int value);
// drmModePageFlip
// file ../xf86drmMode.c line 924
extern signed int drmModePageFlip(signed int fd, unsigned int crtc_id, unsigned int fb_id, unsigned int flags, void *user_data);
// drmModeRmFB
// file ../xf86drmMode.c line 297
extern signed int drmModeRmFB(signed int fd, unsigned int bufferId);
// drmModeSetCrtc
// file ../xf86drmMode.c line 376
signed int drmModeSetCrtc(signed int fd, unsigned int crtcId, unsigned int bufferId, unsigned int x, unsigned int y, unsigned int *connectors, signed int count, struct _drmModeModeInfo *mode);
// drmModeSetCursor
// file ../xf86drmMode.c line 401
signed int drmModeSetCursor(signed int fd, unsigned int crtcId, unsigned int bo_handle, unsigned int width, unsigned int height);
// drmModeSetCursor2
// file ../xf86drmMode.c line 415
signed int drmModeSetCursor2(signed int fd, unsigned int crtcId, unsigned int bo_handle, unsigned int width, unsigned int height, signed int hot_x, signed int hot_y);
// drmModeSetPlane
// file ../xf86drmMode.c line 938
extern signed int drmModeSetPlane(signed int fd, unsigned int plane_id, unsigned int crtc_id, unsigned int fb_id, unsigned int flags, signed int crtc_x, signed int crtc_y, unsigned int crtc_w, unsigned int crtc_h, unsigned int src_x, unsigned int src_y, unsigned int src_w, unsigned int src_h);
// drmMsg
// file ../xf86drm.c line 129
extern void drmMsg(const char *format, ...);
// drmOpen
// file ../../xf86drm.h line 561
extern signed int drmOpen(const char *name, const char *busid);
// drmOpenByBusid
// file ../xf86drm.c line 560
static signed int drmOpenByBusid(const char *busid, signed int type);
// drmOpenByBusid_link1
// file ../xf86drm.c line 560
static signed int drmOpenByBusid_link1(const char *busid_link1, signed int type_link1);
// drmOpenByName
// file ../xf86drm.c line 624
static signed int drmOpenByName(const char *name, signed int type);
// drmOpenByName_link1
// file ../xf86drm.c line 624
static signed int drmOpenByName_link1(const char *name_link1, signed int type_link1);
// drmOpenControl
// file ../xf86drm.c line 756
extern signed int drmOpenControl(signed int minor);
// drmOpenDevice
// file ../xf86drm.c line 308
static signed int drmOpenDevice(unsigned long int dev, signed int minor, signed int type);
// drmOpenDevice_link1
// file ../xf86drm.c line 308
static signed int drmOpenDevice_link1(unsigned long int dev_link1, signed int minor_link1, signed int type_link1);
// drmOpenMinor
// file ../xf86drm.c line 437
static signed int drmOpenMinor(signed int minor, signed int create, signed int type);
// drmOpenMinor_link1
// file ../xf86drm.c line 437
static signed int drmOpenMinor_link1(signed int minor_link1, signed int create_link1, signed int type_link1);
// drmOpenOnce
// file ../xf86drm.c line 2614
extern signed int drmOpenOnce(void *unused, const char *BusID, signed int *newlyopened);
// drmOpenOnceWithType
// file ../xf86drm.c line 2621
extern signed int drmOpenOnceWithType(const char *BusID, signed int *newlyopened, signed int type);
// drmOpenRender
// file ../xf86drm.c line 761
extern signed int drmOpenRender(signed int minor);
// drmOpenWithType
// file ../../../xf86drm.h line 568
extern signed int drmOpenWithType(const char *name, const char *busid, signed int type);
// drmParsePciBusInfo
// file ../xf86drm.c line 2862
static signed int drmParsePciBusInfo(signed int maj, signed int min, struct _drmPciBusInfo *info);
// drmParsePciBusInfo_link1
// file ../xf86drm.c line 2862
static signed int drmParsePciBusInfo_link1(signed int maj_link1, signed int min_link1, struct _drmPciBusInfo *info_link1);
// drmParsePciDeviceInfo
// file ../xf86drm.c line 2948
static signed int drmParsePciDeviceInfo(const char *d_name, struct _drmPciDeviceInfo *device);
// drmParsePciDeviceInfo_link1
// file ../xf86drm.c line 2948
static signed int drmParsePciDeviceInfo_link1(const char *d_name_link1, struct _drmPciDeviceInfo *device_link1);
// drmParseSubsystemType
// file ../xf86drm.c line 2835
static signed int drmParseSubsystemType(signed int maj, signed int min);
// drmParseSubsystemType_link1
// file ../xf86drm.c line 2835
static signed int drmParseSubsystemType_link1(signed int maj_link1, signed int min_link1);
// drmPrimeFDToHandle
// file ../../xf86drm.h line 759
extern signed int drmPrimeFDToHandle(signed int fd, signed int prime_fd, unsigned int *handle);
// drmPrimeHandleToFD
// file ../../xf86drm.h line 758
extern signed int drmPrimeHandleToFD(signed int fd, unsigned int handle, unsigned int flags, signed int *prime_fd);
// drmProcessPciDevice
// file ../xf86drm.c line 2999
static signed int drmProcessPciDevice(struct _drmDevice **device, const char *d_name, const char *node, signed int node_type, signed int maj, signed int min, _Bool fetch_deviceinfo);
// drmProcessPciDevice_link1
// file ../xf86drm.c line 2999
static signed int drmProcessPciDevice_link1(struct _drmDevice **device_link1, const char *d_name_link1, const char *node_link1, signed int node_type_link1, signed int maj_link1, signed int min_link1, _Bool fetch_deviceinfo_link1);
// drmRandom
// file ../xf86drm.h line 706
extern unsigned long int drmRandom(void *state);
// drmRandomCreate
// file ../xf86drm.h line 704
extern void * drmRandomCreate(unsigned long int seed);
// drmRandomDestroy
// file ../xf86drm.h line 705
extern signed int drmRandomDestroy(void *state);
// drmRandomDouble
// file ../xf86drmRandom.c line 132
extern double drmRandomDouble(void *state);
// drmRmMap
// file ../xf86drm.c line 1103
extern signed int drmRmMap(signed int fd, unsigned int handle);
// drmSLCreate
// file ../xf86drmSL.c line 100
extern void * drmSLCreate(void);
// drmSLDelete
// file ../xf86drmSL.c line 187
extern signed int drmSLDelete(void *l, unsigned long int key);
// drmSLDestroy
// file ../xf86drmSL.c line 117
extern signed int drmSLDestroy(void *l);
// drmSLDump
// file ../xf86drmSL.c line 286
extern void drmSLDump(void *l);
// drmSLFirst
// file ../xf86drmSL.c line 275
extern signed int drmSLFirst(void *l, unsigned long int *key, void **value);
// drmSLInsert
// file ../xf86drmSL.c line 154
extern signed int drmSLInsert(void *l, unsigned long int key, void *value);
// drmSLLookup
// file ../xf86drmSL.c line 214
extern signed int drmSLLookup(void *l, unsigned long int key, void **value);
// drmSLLookupNeighbors
// file ../xf86drmSL.c line 230
extern signed int drmSLLookupNeighbors(void *l, unsigned long int key, unsigned long int *prev_key, void **prev_value, unsigned long int *next_key, void **next_value);
// drmSLNext
// file ../xf86drmSL.c line 256
extern signed int drmSLNext(void *l, unsigned long int *key, void **value);
// drmScatterGatherAlloc
// file ../xf86drm.c line 2053
extern signed int drmScatterGatherAlloc(signed int fd, unsigned long int size, unsigned int *handle);
// drmScatterGatherFree
// file ../xf86drm.c line 2067
extern signed int drmScatterGatherFree(signed int fd, unsigned int handle);
// drmSetBusid
// file ../xf86drm.c line 998
extern signed int drmSetBusid(signed int fd, const char *busid);
// drmSetClientCap
// file ../xf86drm.c line 932
extern signed int drmSetClientCap(signed int fd, unsigned long int capability, unsigned long int value);
// drmSetContextFlags
// file ../xf86drm.c line 1571
extern signed int drmSetContextFlags(signed int fd, unsigned int context, enum anonymous_9 flags);
// drmSetInterfaceVersion
// file ../xf86drm.c line 2471
extern signed int drmSetInterfaceVersion(signed int fd, struct _drmSetVersion *version);
// drmSetMaster
// file ../xf86drm.c line 2673
extern signed int drmSetMaster(signed int fd);
// drmSetServerInfo
// file ../xf86drm.c line 108
extern void drmSetServerInfo(struct _drmServerInfo *info);
// drmSwitchToContext
// file ../xf86drm.c line 1560
extern signed int drmSwitchToContext(signed int fd, unsigned int context);
// drmUnlock
// file ../xf86drm.c line 1484
extern signed int drmUnlock(signed int fd, unsigned int context);
// drmUnmap
// file ../xf86drm.c line 1280
extern signed int drmUnmap(void *address, unsigned int size);
// drmUnmapBufs
// file ../xf86drm.c line 1381
extern signed int drmUnmapBufs(struct _drmBufMap *bufs);
// drmUpdateDrawableInfo
// file ../xf86drm.c line 1659
extern signed int drmUpdateDrawableInfo(signed int fd, unsigned int handle, enum anonymous_12 type, unsigned int num, void *data);
// drmWaitVBlank
// file ../xf86drm.c line 2089
extern signed int drmWaitVBlank(signed int fd, union _drmVBlank *vbl);
// drm_munmap
// file ../../libdrm_macros.h line 74
static inline signed int drm_munmap(void *addr, unsigned long int length);
// drm_munmap_link1
// file ../libdrm_macros.h line 74
static inline signed int drm_munmap_link1(void *addr_link1, unsigned long int length_link1);
// drm_munmap_link2
// file ../libdrm_macros.h line 74
static inline signed int drm_munmap_link2(void *addr_link2, unsigned long int length_link2);
// ffs
// file /usr/include/string.h line 522
extern signed int ffs(signed int);
// fpathconf
// file /usr/include/unistd.h line 616
extern signed long int fpathconf(signed int, signed int);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 213
extern signed int fstat(signed int, struct stat *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getpagesize
// file /usr/include/unistd.h line 978
extern signed int getpagesize(void);
// gnu_dev_major
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 27
extern unsigned int gnu_dev_major(unsigned long long int);
// gnu_dev_makedev
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 33
extern unsigned long long int gnu_dev_makedev(unsigned int, unsigned int);
// gnu_dev_minor
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 30
extern unsigned int gnu_dev_minor(unsigned long long int);
// ioctl
// file ../../../tests/nouveau/threaded.c line 43
extern signed int ioctl(signed int fd, unsigned long int request, ...);
// log2
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 144
extern double log2(double);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 57
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// nouveau_bo
// file ../../nouveau/private.h line 91
static inline struct nouveau_bo_priv * nouveau_bo(struct nouveau_bo *bo);
// nouveau_bo_link1
// file ../../nouveau/private.h line 91
static inline struct nouveau_bo_priv * nouveau_bo_link1(struct nouveau_bo *bo_link1);
// nouveau_bo_link2
// file ../../nouveau/private.h line 91
static inline struct nouveau_bo_priv * nouveau_bo_link2(struct nouveau_bo *bo_link2);
// nouveau_bo_del
// file ../../nouveau/nouveau.c line 595
static void nouveau_bo_del(struct nouveau_bo *bo);
// nouveau_bo_make_global
// file ../../nouveau/nouveau.c line 705
static void nouveau_bo_make_global(struct nouveau_bo_priv *nvbo);
// nouveau_bo_map
// file ../../nouveau/nouveau.c line 864
signed int nouveau_bo_map(struct nouveau_bo *bo, unsigned int access, struct nouveau_client *client);
// nouveau_bo_name_get
// file ../../nouveau/nouveau.c line 758
signed int nouveau_bo_name_get(struct nouveau_bo *bo, unsigned int *name);
// nouveau_bo_name_ref
// file ../../nouveau/nouveau.c line 729
signed int nouveau_bo_name_ref(struct nouveau_device *dev, unsigned int name, struct nouveau_bo **pbo);
// nouveau_bo_new
// file ../../../nouveau/nouveau.h line 137
signed int nouveau_bo_new(struct nouveau_device *dev, unsigned int flags, unsigned int align, unsigned long int size, union nouveau_bo_config *config, struct nouveau_bo **pbo);
// nouveau_bo_prime_handle_ref
// file ../../../nouveau/nouveau.h line 150
signed int nouveau_bo_prime_handle_ref(struct nouveau_device *dev, signed int prime_fd, struct nouveau_bo **bo);
// nouveau_bo_ref
// file ../../../nouveau/nouveau.h line 145
void nouveau_bo_ref(struct nouveau_bo *bo, struct nouveau_bo **pref);
// nouveau_bo_set_prime
// file ../../../nouveau/nouveau.h line 152
signed int nouveau_bo_set_prime(struct nouveau_bo *bo, signed int *prime_fd);
// nouveau_bo_wait
// file ../../nouveau/nouveau.c line 829
signed int nouveau_bo_wait(struct nouveau_bo *bo, unsigned int access, struct nouveau_client *client);
// nouveau_bo_wrap
// file ../../nouveau/nouveau.c line 717
signed int nouveau_bo_wrap(struct nouveau_device *dev, unsigned int handle, struct nouveau_bo **pbo);
// nouveau_bo_wrap_locked
// file ../../nouveau/nouveau.c line 652
static signed int nouveau_bo_wrap_locked(struct nouveau_device *dev, unsigned int handle, struct nouveau_bo **pbo, signed int name);
// nouveau_bufctx
// file ../../nouveau/bufctx.c line 60
static inline struct nouveau_bufctx_priv * nouveau_bufctx(struct nouveau_bufctx *bctx);
// nouveau_bufctx_del
// file ../../nouveau/bufctx.c line 86
void nouveau_bufctx_del(struct nouveau_bufctx **pbctx);
// nouveau_bufctx_mthd
// file ../../nouveau/bufctx.c line 148
struct nouveau_bufref * nouveau_bufctx_mthd(struct nouveau_bufctx *bctx, signed int bin, unsigned int packet, struct nouveau_bo *bo, unsigned long int data, unsigned int flags, unsigned int vor, unsigned int tor);
// nouveau_bufctx_new
// file ../../nouveau/bufctx.c line 66
signed int nouveau_bufctx_new(struct nouveau_client *client, signed int bins, struct nouveau_bufctx **pbctx);
// nouveau_bufctx_refn
// file ../../nouveau/bufctx.c line 121
struct nouveau_bufref * nouveau_bufctx_refn(struct nouveau_bufctx *bctx, signed int bin, struct nouveau_bo *bo, unsigned int flags);
// nouveau_bufctx_reset
// file ../../nouveau/bufctx.c line 103
void nouveau_bufctx_reset(struct nouveau_bufctx *bctx, signed int bin);
// nouveau_client
// file ../../nouveau/private.h line 37
static inline struct nouveau_client_priv * nouveau_client(struct nouveau_client *client);
// nouveau_client_link1
// file ../../nouveau/private.h line 37
static inline struct nouveau_client_priv * nouveau_client_link1(struct nouveau_client *client_link1);
// nouveau_client_del
// file ../../nouveau/nouveau.c line 579
void nouveau_client_del(struct nouveau_client **pclient);
// nouveau_client_new
// file ../../nouveau/nouveau.c line 540
signed int nouveau_client_new(struct nouveau_device *dev, struct nouveau_client **pclient);
// nouveau_device
// file ../../nouveau/private.h line 108
static inline struct nouveau_device_priv * nouveau_device(struct nouveau_device *dev);
// nouveau_device_link1
// file ../../nouveau/private.h line 108
static inline struct nouveau_device_priv * nouveau_device_link1(struct nouveau_device *dev_link1);
// nouveau_device_link2
// file ../../nouveau/private.h line 108
static inline struct nouveau_device_priv * nouveau_device_link2(struct nouveau_device *dev_link2);
// nouveau_device_del
// file ../../../nouveau/nouveau.h line 76
void nouveau_device_del(struct nouveau_device **pdev);
// nouveau_device_new
// file ../../nouveau/nouveau.c line 368
signed int nouveau_device_new(struct nouveau_object *parent, signed int oclass, void *data, unsigned int size, struct nouveau_device **pdev);
// nouveau_device_open
// file ../../nouveau/nouveau.c line 490
signed int nouveau_device_open(const char *busid, struct nouveau_device **pdev);
// nouveau_device_open_existing
// file ../../nouveau/nouveau.c line 361
signed int nouveau_device_open_existing(struct nouveau_device **pdev, signed int close, signed int fd, unsigned int ctx);
// nouveau_device_wrap
// file ../../../nouveau/nouveau.h line 82
signed int nouveau_device_wrap(signed int fd, signed int close, struct nouveau_device **pdev);
// nouveau_drm
// file ../../nouveau/nouveau.h line 52
static inline struct nouveau_drm * nouveau_drm(struct nouveau_object *obj);
// nouveau_drm_link1
// file ../../nouveau/nouveau.h line 52
static inline struct nouveau_drm * nouveau_drm_link1(struct nouveau_object *obj_link1);
// nouveau_drm_link2
// file ../../nouveau/nouveau.h line 52
static inline struct nouveau_drm * nouveau_drm_link2(struct nouveau_object *obj_link2);
// nouveau_drm_del
// file ../../nouveau/nouveau.c line 322
void nouveau_drm_del(struct nouveau_drm **pdrm);
// nouveau_drm_new
// file ../../nouveau/nouveau.c line 329
signed int nouveau_drm_new(signed int fd, struct nouveau_drm **pdrm);
// nouveau_getparam
// file ../../nouveau/nouveau.c line 521
signed int nouveau_getparam(struct nouveau_device *dev, unsigned long int param, unsigned long int *value);
// nouveau_object_del
// file ../../nouveau/nouveau.c line 311
void nouveau_object_del(struct nouveau_object **pobj);
// nouveau_object_fini
// file ../../nouveau/nouveau.c line 215
static void nouveau_object_fini(struct nouveau_object *obj);
// nouveau_object_init
// file ../../nouveau/nouveau.c line 235
static signed int nouveau_object_init(struct nouveau_object *parent, unsigned int handle, signed int oclass, void *data, unsigned int size, struct nouveau_object *obj);

//

// nouveau_object_ioctl
// file ../../nouveau/nouveau.c line 68
static signed int nouveau_object_ioctl(struct nouveau_object *obj, void *data, unsigned int size);
// nouveau_object_mclass
// file ../../nouveau/nouveau.c line 188
signed int nouveau_object_mclass(struct nouveau_object *obj, struct nouveau_mclass *mclass);
// nouveau_object_mthd
// file ../../nouveau/nouveau.c line 96
signed int nouveau_object_mthd(struct nouveau_object *obj, unsigned int mthd, void *data, unsigned int size);
// nouveau_object_new
// file ../../nouveau/nouveau.c line 290
signed int nouveau_object_new(struct nouveau_object *parent, unsigned long int handle, unsigned int oclass, void *data, unsigned int length, struct nouveau_object **pobj);
// nouveau_object_sclass_get
// file ../../nouveau/nouveau.c line 138
signed int nouveau_object_sclass_get(struct nouveau_object *obj, struct nouveau_sclass **psclass);
// nouveau_object_sclass_put
// file ../../nouveau/nouveau.c line 131
void nouveau_object_sclass_put(struct nouveau_sclass **psclass);
// nouveau_pushbuf
// file ../../nouveau/pushbuf.c line 74
static inline struct nouveau_pushbuf_priv * nouveau_pushbuf(struct nouveau_pushbuf *push);
// nouveau_pushbuf_bufctx
// file ../../nouveau/pushbuf.c line 633
struct nouveau_bufctx * nouveau_pushbuf_bufctx(struct nouveau_pushbuf *push, struct nouveau_bufctx *ctx);
// nouveau_pushbuf_data
// file ../../nouveau/pushbuf.c line 705
void nouveau_pushbuf_data(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned long int offset, unsigned long int length);
// nouveau_pushbuf_del
// file ../../nouveau/pushbuf.c line 607
void nouveau_pushbuf_del(struct nouveau_pushbuf **ppush);
// nouveau_pushbuf_kick
// file ../../nouveau/nouveau.h line 228

// nouveau_pushbuf_new
// file ../../nouveau/pushbuf.c line 536

// nouveau_pushbuf_refd
// file ../../nouveau/pushbuf.c line 757
unsigned int nouveau_pushbuf_refd(struct nouveau_pushbuf *push, struct nouveau_bo *bo);
// nouveau_pushbuf_refn
// file ../../nouveau/pushbuf.c line 736
signed int nouveau_pushbuf_refn(struct nouveau_pushbuf *push, struct nouveau_pushbuf_refn *refs, signed int nr);
// nouveau_pushbuf_reloc
// file ../../nouveau/pushbuf.c line 743
void nouveau_pushbuf_reloc(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int data, unsigned int flags, unsigned int vor, unsigned int tor);
// nouveau_pushbuf_space
// file ../../nouveau/pushbuf.c line 641
signed int nouveau_pushbuf_space(struct nouveau_pushbuf *push, unsigned int dwords, unsigned int relocs, unsigned int pushes);
// nouveau_pushbuf_validate
// file ../../nouveau/pushbuf.c line 751
signed int nouveau_pushbuf_validate(struct nouveau_pushbuf *push);
// nouveau_setparam
// file ../../nouveau/nouveau.c line 532
signed int nouveau_setparam(struct nouveau_device *dev, unsigned long int param, unsigned long int value);
// old_ioctl_object
//
signed int old_ioctl_object(signed int, unsigned long int, ...);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openclose
// file ../../../tests/nouveau/threaded.c line 61
static void * openclose(void *dev);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_26 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_26 *, const union anonymous_27 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_26 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_26 *);
// pushbuf_dump
// file ../../nouveau/pushbuf.c line 267
static void pushbuf_dump(struct nouveau_pushbuf_krec *krec, signed int krec_id, signed int chid);
// pushbuf_flush
// file ../../nouveau/pushbuf.c line 395
static signed int pushbuf_flush(struct nouveau_pushbuf *push);
// pushbuf_kref
// file ../../nouveau/pushbuf.c line 151
static struct drm_nouveau_gem_pushbuf_bo * pushbuf_kref(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int flags);
// pushbuf_kref_fits
// file ../../nouveau/pushbuf.c line 83
static _Bool pushbuf_kref_fits(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int *domains);
// pushbuf_krel
// file ../../nouveau/pushbuf.c line 223
static unsigned int pushbuf_krel(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int data, unsigned int flags, unsigned int vor, unsigned int tor);
// pushbuf_refn
// file ../../nouveau/pushbuf.c line 455
static signed int pushbuf_refn(struct nouveau_pushbuf *push, _Bool retry, struct nouveau_pushbuf_refn *refs, signed int nr);
// pushbuf_refn_fail
// file ../../nouveau/pushbuf.c line 437
static void pushbuf_refn_fail(struct nouveau_pushbuf *push, signed int sref, signed int srel);
// pushbuf_submit
// file ../../nouveau/pushbuf.c line 310

// pushbuf_validate
// file ../../nouveau/pushbuf.c line 485
static signed int pushbuf_validate(struct nouveau_pushbuf *push, _Bool retry);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// readdir_r
// file /usr/include/dirent.h line 183
extern signed int readdir_r(struct __dirstream *, struct dirent *, struct dirent ** restrict );
// readlink
// file /usr/include/unistd.h line 809
extern signed long int readlink(const char *, char *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sort_req_list
// file ../xf86drmMode.c line 1300
static signed int sort_req_list(const void *misc, const void *other);
// sort_req_list_link1
// file ../xf86drmMode.c line 1300
static signed int sort_req_list_link1(const void *misc_link1, const void *other_link1);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);

struct anonymous_5
{
  // BusID
  char *BusID;
  // fd
  signed int fd;
  // refcount
  signed int refcount;
  // type
  signed int type;
};

struct anonymous_28
{
  // atomic
  signed int atomic;
};

struct nouveau_fifo
{
  // object
  struct nouveau_object *object;
  // channel
  unsigned int channel;
  // pushbuf
  unsigned int pushbuf;
  // unused1
  unsigned long int unused1[3l];
};

struct anonymous_18
{
  // base
  struct nouveau_fifo base;
  // notify
  unsigned int notify;
};

struct anonymous_17
{
  // handle
  unsigned int handle;
  // grclass
  unsigned int grclass;
};

struct anonymous_11
{
  // memtype
  unsigned int memtype;
  // tile_mode
  unsigned int tile_mode;
};

struct anonymous_10
{
  // surf_flags
  unsigned int surf_flags;
  // surf_pitch
  unsigned int surf_pitch;
};

struct anonymous_16
{
  // value
  unsigned long int value;
  // long_format
  const char *long_format;
  // long_name
  const char *long_name;
  // rate_format
  const char *rate_format;
  // rate_name
  const char *rate_name;
  // isvalue
  signed int isvalue;
  // mult_names
  const char *mult_names;
  // mult
  signed int mult;
  // verbose
  signed int verbose;
};

struct anonymous
{
  // value
  unsigned long int value;
  // type
  enum drm_stat_type type;
};

union anonymous_14
{
  // pci
  struct _drmPciBusInfo *pci;
};

union anonymous_15
{
  // pci
  struct _drmPciDeviceInfo *pci;
};

union anonymous_27
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous_26
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct HashBucket
{
  // key
  unsigned long int key;
  // value
  void *value;
  // next
  struct HashBucket *next;
};

struct HashTable
{
  // magic
  unsigned long int magic;
  // entries
  unsigned long int entries;
  // hits
  unsigned long int hits;
  // partials
  unsigned long int partials;
  // misses
  unsigned long int misses;
  // buckets
  struct HashBucket *buckets[512l];
  // p0
  signed int p0;
  // p1
  struct HashBucket *p1;
};

struct RandomState
{
  // magic
  unsigned long int magic;
  // a
  unsigned long int a;
  // m
  unsigned long int m;
  // q
  unsigned long int q;
  // r
  unsigned long int r;
  // check
  unsigned long int check;
  // seed
  unsigned long int seed;
};

struct SLEntry
{
  // magic
  unsigned long int magic;
  // key
  unsigned long int key;
  // value
  void *value;
  // levels
  signed int levels;
  // forward
  struct SLEntry *forward[1l];
};

struct SkipList
{
  // magic
  unsigned long int magic;
  // level
  signed int level;
  // count
  signed int count;
  // head
  struct SLEntry *head;
  // p0
  struct SLEntry *p0;
};

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

struct _drmBuf
{
  // idx
  signed int idx;
  // total
  signed int total;
  // used
  signed int used;
  // address
  void *address;
};

struct _drmBufDesc
{
  // count
  signed int count;
  // size
  signed int size;
  // low_mark
  signed int low_mark;
  // high_mark
  signed int high_mark;
};

struct _drmBufInfo
{
  // count
  signed int count;
  // list
  struct _drmBufDesc *list;
};

struct _drmBufMap
{
  // count
  signed int count;
  // list
  struct _drmBuf *list;
};

struct _drmDMAReq
{
  // context
  unsigned int context;
  // send_count
  signed int send_count;
  // send_list
  signed int *send_list;
  // send_sizes
  signed int *send_sizes;
  // flags
  enum anonymous_20 flags;
  // request_count
  signed int request_count;
  // request_size
  signed int request_size;
  // request_list
  signed int *request_list;
  // request_sizes
  signed int *request_sizes;
  // granted_count
  signed int granted_count;
};

struct _drmDevice
{
  // nodes
  char **nodes;
  // available_nodes
  signed int available_nodes;
  // bustype
  signed int bustype;
  // businfo
  union anonymous_14 businfo;
  // deviceinfo
  union anonymous_15 deviceinfo;
};

struct _drmEventContext
{
  // version
  signed int version;
  // vblank_handler
  void (*vblank_handler)(signed int, unsigned int, unsigned int, unsigned int, void *);
  // page_flip_handler
  void (*page_flip_handler)(signed int, unsigned int, unsigned int, unsigned int, void *);
};

struct _drmModeAtomicReq
{
  // cursor
  unsigned int cursor;
  // size_items
  unsigned int size_items;
  // items
  struct _drmModeAtomicReqItem *items;
};

struct _drmModeAtomicReqItem
{
  // object_id
  unsigned int object_id;
  // property_id
  unsigned int property_id;
  // value
  unsigned long int value;
};

struct _drmModeConnector
{
  // connector_id
  unsigned int connector_id;
  // encoder_id
  unsigned int encoder_id;
  // connector_type
  unsigned int connector_type;
  // connector_type_id
  unsigned int connector_type_id;
  // connection
  enum anonymous_21 connection;
  // mmWidth
  unsigned int mmWidth;
  // mmHeight
  unsigned int mmHeight;
  // subpixel
  enum anonymous_22 subpixel;
  // count_modes
  signed int count_modes;
  // modes
  struct _drmModeModeInfo *modes;
  // count_props
  signed int count_props;
  // props
  unsigned int *props;
  // prop_values
  unsigned long int *prop_values;
  // count_encoders
  signed int count_encoders;
  // encoders
  unsigned int *encoders;
};

struct _drmModeModeInfo
{
  // clock
  unsigned int clock;
  // hdisplay
  unsigned short int hdisplay;
  // hsync_start
  unsigned short int hsync_start;
  // hsync_end
  unsigned short int hsync_end;
  // htotal
  unsigned short int htotal;
  // hskew
  unsigned short int hskew;
  // vdisplay
  unsigned short int vdisplay;
  // vsync_start
  unsigned short int vsync_start;
  // vsync_end
  unsigned short int vsync_end;
  // vtotal
  unsigned short int vtotal;
  // vscan
  unsigned short int vscan;
  // vrefresh
  unsigned int vrefresh;
  // flags
  unsigned int flags;
  // type
  unsigned int type;
  // name
  char name[32l];
};

struct _drmModeCrtc
{
  // crtc_id
  unsigned int crtc_id;
  // buffer_id
  unsigned int buffer_id;
  // x
  unsigned int x;
  // y
  unsigned int y;
  // width
  unsigned int width;
  // height
  unsigned int height;
  // mode_valid
  signed int mode_valid;
  // mode
  struct _drmModeModeInfo mode;
  // gamma_size
  signed int gamma_size;
};

struct _drmModeEncoder
{
  // encoder_id
  unsigned int encoder_id;
  // encoder_type
  unsigned int encoder_type;
  // crtc_id
  unsigned int crtc_id;
  // possible_crtcs
  unsigned int possible_crtcs;
  // possible_clones
  unsigned int possible_clones;
};

struct _drmModeFB
{
  // fb_id
  unsigned int fb_id;
  // width
  unsigned int width;
  // height
  unsigned int height;
  // pitch
  unsigned int pitch;
  // bpp
  unsigned int bpp;
  // depth
  unsigned int depth;
  // handle
  unsigned int handle;
};

struct _drmModeObjectProperties
{
  // count_props
  unsigned int count_props;
  // props
  unsigned int *props;
  // prop_values
  unsigned long int *prop_values;
};

struct _drmModePlane
{
  // count_formats
  unsigned int count_formats;
  // formats
  unsigned int *formats;
  // plane_id
  unsigned int plane_id;
  // crtc_id
  unsigned int crtc_id;
  // fb_id
  unsigned int fb_id;
  // crtc_x
  unsigned int crtc_x;
  // crtc_y
  unsigned int crtc_y;
  // x
  unsigned int x;
  // y
  unsigned int y;
  // possible_crtcs
  unsigned int possible_crtcs;
  // gamma_size
  unsigned int gamma_size;
};

struct _drmModePlaneRes
{
  // count_planes
  unsigned int count_planes;
  // planes
  unsigned int *planes;
};

struct _drmModeProperty
{
  // prop_id
  unsigned int prop_id;
  // flags
  unsigned int flags;
  // name
  char name[32l];
  // count_values
  signed int count_values;
  // values
  unsigned long int *values;
  // count_enums
  signed int count_enums;
  // enums
  struct drm_mode_property_enum *enums;
  // count_blobs
  signed int count_blobs;
  // blob_ids
  unsigned int *blob_ids;
};

struct _drmModePropertyBlob
{
  // id
  unsigned int id;
  // length
  unsigned int length;
  // data
  void *data;
};

struct _drmModeRes
{
  // count_fbs
  signed int count_fbs;
  // fbs
  unsigned int *fbs;
  // count_crtcs
  signed int count_crtcs;
  // crtcs
  unsigned int *crtcs;
  // count_connectors
  signed int count_connectors;
  // connectors
  unsigned int *connectors;
  // count_encoders
  signed int count_encoders;
  // encoders
  unsigned int *encoders;
  // min_width
  unsigned int min_width;
  // max_width
  unsigned int max_width;
  // min_height
  unsigned int min_height;
  // max_height
  unsigned int max_height;
};

struct _drmPciBusInfo
{
  // domain
  unsigned short int domain;
  // bus
  unsigned char bus;
  // dev
  unsigned char dev;
  // func
  unsigned char func;
};

struct _drmPciDeviceInfo
{
  // vendor_id
  unsigned short int vendor_id;
  // device_id
  unsigned short int device_id;
  // subvendor_id
  unsigned short int subvendor_id;
  // subdevice_id
  unsigned short int subdevice_id;
  // revision_id
  unsigned char revision_id;
};

struct _drmServerInfo
{
  // debug_print
  signed int (*debug_print)(const char *, void **);
  // load_module
  signed int (*load_module)(const char *);
  // get_perms
  void (*get_perms)(unsigned int *, unsigned int *);
};

struct _drmSetVersion
{
  // drm_di_major
  signed int drm_di_major;
  // drm_di_minor
  signed int drm_di_minor;
  // drm_dd_major
  signed int drm_dd_major;
  // drm_dd_minor
  signed int drm_dd_minor;
};

struct _drmStats
{
  // count
  unsigned long int count;
  // data
  struct anonymous_16 data[15l];
};

struct _drmVBlankReq
{
  // type
  enum anonymous_24 type;
  // sequence
  unsigned int sequence;
  // signal
  unsigned long int signal;
};

struct _drmVBlankReply
{
  // type
  enum anonymous_24 type;
  // sequence
  unsigned int sequence;
  // tval_sec
  signed long int tval_sec;
  // tval_usec
  signed long int tval_usec;
};

union _drmVBlank
{
  // request
  struct _drmVBlankReq request;
  // reply
  struct _drmVBlankReply reply;
};

struct _drmVersion
{
  // version_major
  signed int version_major;
  // version_minor
  signed int version_minor;
  // version_patchlevel
  signed int version_patchlevel;
  // name_len
  signed int name_len;
  // name
  char *name;
  // date_len
  signed int date_len;
  // date
  char *date;
  // desc_len
  signed int desc_len;
  // desc
  char *desc;
};

struct dirent
{
  // d_ino
  unsigned long int d_ino;
  // d_off
  signed long int d_off;
  // d_reclen
  unsigned short int d_reclen;
  // d_type
  unsigned char d_type;
  // d_name
  char d_name[256l];
};

struct drmHashEntry
{
  // fd
  signed int fd;
  // f
  void (*f)(signed int, void *, void *);
  // tagTable
  void *tagTable;
};

struct drm_agp_binding
{
  // handle
  unsigned long int handle;
  // offset
  unsigned long int offset;
};

struct drm_agp_buffer
{
  // size
  unsigned long int size;
  // handle
  unsigned long int handle;
  // type
  unsigned long int type;
  // physical
  unsigned long int physical;
};

struct drm_agp_info
{
  // agp_version_major
  signed int agp_version_major;
  // agp_version_minor
  signed int agp_version_minor;
  // mode
  unsigned long int mode;
  // aperture_base
  unsigned long int aperture_base;
  // aperture_size
  unsigned long int aperture_size;
  // memory_allowed
  unsigned long int memory_allowed;
  // memory_used
  unsigned long int memory_used;
  // id_vendor
  unsigned short int id_vendor;
  // id_device
  unsigned short int id_device;
};

struct drm_agp_mode
{
  // mode
  unsigned long int mode;
};

struct drm_auth
{
  // magic
  unsigned int magic;
};

struct drm_buf_desc
{
  // count
  signed int count;
  // size
  signed int size;
  // low_mark
  signed int low_mark;
  // high_mark
  signed int high_mark;
  // flags
  enum anonymous_19 flags;
  // agp_start
  unsigned long int agp_start;
};

struct drm_buf_free
{
  // count
  signed int count;
  // list
  signed int *list;
};

struct drm_buf_info
{
  // count
  signed int count;
  // list
  struct drm_buf_desc *list;
};

struct drm_buf_map
{
  // count
  signed int count;
  // virtual
  void *virtual;
  // list
  struct drm_buf_pub *list;
};

struct drm_buf_pub
{
  // idx
  signed int idx;
  // total
  signed int total;
  // used
  signed int used;
  // address
  void *address;
};

struct drm_client
{
  // idx
  signed int idx;
  // auth
  signed int auth;
  // pid
  unsigned long int pid;
  // uid
  unsigned long int uid;
  // magic
  unsigned long int magic;
  // iocs
  unsigned long int iocs;
};

struct drm_clip_rect
{
  // x1
  unsigned short int x1;
  // y1
  unsigned short int y1;
  // x2
  unsigned short int x2;
  // y2
  unsigned short int y2;
};

struct drm_control
{
  // func
  enum anonymous_23 func;
  // irq
  signed int irq;
};

struct drm_ctx
{
  // handle
  unsigned int handle;
  // flags
  enum drm_ctx_flags flags;
};

struct drm_ctx_priv_map
{
  // ctx_id
  unsigned int ctx_id;
  // handle
  void *handle;
};

struct drm_ctx_res
{
  // count
  signed int count;
  // contexts
  struct drm_ctx *contexts;
};

struct drm_dma
{
  // context
  signed int context;
  // send_count
  signed int send_count;
  // send_indices
  signed int *send_indices;
  // send_sizes
  signed int *send_sizes;
  // flags
  enum drm_dma_flags flags;
  // request_count
  signed int request_count;
  // request_size
  signed int request_size;
  // request_indices
  signed int *request_indices;
  // request_sizes
  signed int *request_sizes;
  // granted_count
  signed int granted_count;
};

struct drm_draw
{
  // handle
  unsigned int handle;
};

struct drm_event
{
  // type
  unsigned int type;
  // length
  unsigned int length;
};

struct drm_event_vblank
{
  // base
  struct drm_event base;
  // user_data
  unsigned long long int user_data;
  // tv_sec
  unsigned int tv_sec;
  // tv_usec
  unsigned int tv_usec;
  // sequence
  unsigned int sequence;
  // reserved
  unsigned int reserved;
};

struct drm_gem_close
{
  // handle
  unsigned int handle;
  // pad
  unsigned int pad;
};

struct drm_gem_flink
{
  // handle
  unsigned int handle;
  // name
  unsigned int name;
};

struct drm_gem_open
{
  // name
  unsigned int name;
  // handle
  unsigned int handle;
  // size
  unsigned long long int size;
};

struct drm_get_cap
{
  // capability
  unsigned long long int capability;
  // value
  unsigned long long int value;
};

struct drm_irq_busid
{
  // irq
  signed int irq;
  // busnum
  signed int busnum;
  // devnum
  signed int devnum;
  // funcnum
  signed int funcnum;
};

struct drm_lock
{
  // context
  signed int context;
  // flags
  enum drm_lock_flags flags;
};

struct drm_map
{
  // offset
  unsigned long int offset;
  // size
  unsigned long int size;
  // type
  enum drm_map_type type;
  // flags
  enum drm_map_flags flags;
  // handle
  void *handle;
  // mtrr
  signed int mtrr;
};

struct drm_mode_atomic
{
  // flags
  unsigned int flags;
  // count_objs
  unsigned int count_objs;
  // objs_ptr
  unsigned long long int objs_ptr;
  // count_props_ptr
  unsigned long long int count_props_ptr;
  // props_ptr
  unsigned long long int props_ptr;
  // prop_values_ptr
  unsigned long long int prop_values_ptr;
  // reserved
  unsigned long long int reserved;
  // user_data
  unsigned long long int user_data;
};

struct drm_mode_card_res
{
  // fb_id_ptr
  unsigned long long int fb_id_ptr;
  // crtc_id_ptr
  unsigned long long int crtc_id_ptr;
  // connector_id_ptr
  unsigned long long int connector_id_ptr;
  // encoder_id_ptr
  unsigned long long int encoder_id_ptr;
  // count_fbs
  unsigned int count_fbs;
  // count_crtcs
  unsigned int count_crtcs;
  // count_connectors
  unsigned int count_connectors;
  // count_encoders
  unsigned int count_encoders;
  // min_width
  unsigned int min_width;
  // max_width
  unsigned int max_width;
  // min_height
  unsigned int min_height;
  // max_height
  unsigned int max_height;
};

struct drm_mode_connector_set_property
{
  // value
  unsigned long long int value;
  // prop_id
  unsigned int prop_id;
  // connector_id
  unsigned int connector_id;
};

struct drm_mode_create_blob
{
  // data
  unsigned long long int data;
  // length
  unsigned int length;
  // blob_id
  unsigned int blob_id;
};

struct drm_mode_modeinfo
{
  // clock
  unsigned int clock;
  // hdisplay
  unsigned short int hdisplay;
  // hsync_start
  unsigned short int hsync_start;
  // hsync_end
  unsigned short int hsync_end;
  // htotal
  unsigned short int htotal;
  // hskew
  unsigned short int hskew;
  // vdisplay
  unsigned short int vdisplay;
  // vsync_start
  unsigned short int vsync_start;
  // vsync_end
  unsigned short int vsync_end;
  // vtotal
  unsigned short int vtotal;
  // vscan
  unsigned short int vscan;
  // vrefresh
  unsigned int vrefresh;
  // flags
  unsigned int flags;
  // type
  unsigned int type;
  // name
  char name[32l];
};

struct drm_mode_crtc
{
  // set_connectors_ptr
  unsigned long long int set_connectors_ptr;
  // count_connectors
  unsigned int count_connectors;
  // crtc_id
  unsigned int crtc_id;
  // fb_id
  unsigned int fb_id;
  // x
  unsigned int x;
  // y
  unsigned int y;
  // gamma_size
  unsigned int gamma_size;
  // mode_valid
  unsigned int mode_valid;
  // mode
  struct drm_mode_modeinfo mode;
};

struct drm_mode_crtc_lut
{
  // crtc_id
  unsigned int crtc_id;
  // gamma_size
  unsigned int gamma_size;
  // red
  unsigned long long int red;
  // green
  unsigned long long int green;
  // blue
  unsigned long long int blue;
};

struct drm_mode_crtc_page_flip
{
  // crtc_id
  unsigned int crtc_id;
  // fb_id
  unsigned int fb_id;
  // flags
  unsigned int flags;
  // reserved
  unsigned int reserved;
  // user_data
  unsigned long long int user_data;
};

struct drm_mode_cursor
{
  // flags
  unsigned int flags;
  // crtc_id
  unsigned int crtc_id;
  // x
  signed int x;
  // y
  signed int y;
  // width
  unsigned int width;
  // height
  unsigned int height;
  // handle
  unsigned int handle;
};

struct drm_mode_cursor2
{
  // flags
  unsigned int flags;
  // crtc_id
  unsigned int crtc_id;
  // x
  signed int x;
  // y
  signed int y;
  // width
  unsigned int width;
  // height
  unsigned int height;
  // handle
  unsigned int handle;
  // hot_x
  signed int hot_x;
  // hot_y
  signed int hot_y;
};

struct drm_mode_destroy_blob
{
  // blob_id
  unsigned int blob_id;
};

struct drm_mode_fb_cmd
{
  // fb_id
  unsigned int fb_id;
  // width
  unsigned int width;
  // height
  unsigned int height;
  // pitch
  unsigned int pitch;
  // bpp
  unsigned int bpp;
  // depth
  unsigned int depth;
  // handle
  unsigned int handle;
};

struct drm_mode_fb_cmd2
{
  // fb_id
  unsigned int fb_id;
  // width
  unsigned int width;
  // height
  unsigned int height;
  // pixel_format
  unsigned int pixel_format;
  // flags
  unsigned int flags;
  // handles
  unsigned int handles[4l];
  // pitches
  unsigned int pitches[4l];
  // offsets
  unsigned int offsets[4l];
  // modifier
  unsigned long long int modifier[4l];
};

struct drm_mode_fb_dirty_cmd
{
  // fb_id
  unsigned int fb_id;
  // flags
  unsigned int flags;
  // color
  unsigned int color;
  // num_clips
  unsigned int num_clips;
  // clips_ptr
  unsigned long long int clips_ptr;
};

struct drm_mode_get_blob
{
  // blob_id
  unsigned int blob_id;
  // length
  unsigned int length;
  // data
  unsigned long long int data;
};

struct drm_mode_get_connector
{
  // encoders_ptr
  unsigned long long int encoders_ptr;
  // modes_ptr
  unsigned long long int modes_ptr;
  // props_ptr
  unsigned long long int props_ptr;
  // prop_values_ptr
  unsigned long long int prop_values_ptr;
  // count_modes
  unsigned int count_modes;
  // count_props
  unsigned int count_props;
  // count_encoders
  unsigned int count_encoders;
  // encoder_id
  unsigned int encoder_id;
  // connector_id
  unsigned int connector_id;
  // connector_type
  unsigned int connector_type;
  // connector_type_id
  unsigned int connector_type_id;
  // connection
  unsigned int connection;
  // mm_width
  unsigned int mm_width;
  // mm_height
  unsigned int mm_height;
  // subpixel
  unsigned int subpixel;
};

struct drm_mode_get_encoder
{
  // encoder_id
  unsigned int encoder_id;
  // encoder_type
  unsigned int encoder_type;
  // crtc_id
  unsigned int crtc_id;
  // possible_crtcs
  unsigned int possible_crtcs;
  // possible_clones
  unsigned int possible_clones;
};

struct drm_mode_get_plane
{
  // plane_id
  unsigned int plane_id;
  // crtc_id
  unsigned int crtc_id;
  // fb_id
  unsigned int fb_id;
  // possible_crtcs
  unsigned int possible_crtcs;
  // gamma_size
  unsigned int gamma_size;
  // count_format_types
  unsigned int count_format_types;
  // format_type_ptr
  unsigned long long int format_type_ptr;
};

struct drm_mode_get_plane_res
{
  // plane_id_ptr
  unsigned long long int plane_id_ptr;
  // count_planes
  unsigned int count_planes;
};

struct drm_mode_get_property
{
  // values_ptr
  unsigned long long int values_ptr;
  // enum_blob_ptr
  unsigned long long int enum_blob_ptr;
  // prop_id
  unsigned int prop_id;
  // flags
  unsigned int flags;
  // name
  char name[32l];
  // count_values
  unsigned int count_values;
  // count_enum_blobs
  unsigned int count_enum_blobs;
};

struct drm_mode_mode_cmd
{
  // connector_id
  unsigned int connector_id;
  // mode
  struct drm_mode_modeinfo mode;
};

struct drm_mode_obj_get_properties
{
  // props_ptr
  unsigned long long int props_ptr;
  // prop_values_ptr
  unsigned long long int prop_values_ptr;
  // count_props
  unsigned int count_props;
  // obj_id
  unsigned int obj_id;
  // obj_type
  unsigned int obj_type;
};

struct drm_mode_obj_set_property
{
  // value
  unsigned long long int value;
  // prop_id
  unsigned int prop_id;
  // obj_id
  unsigned int obj_id;
  // obj_type
  unsigned int obj_type;
};

struct drm_mode_property_enum
{
  // value
  unsigned long long int value;
  // name
  char name[32l];
};

struct drm_mode_set_plane
{
  // plane_id
  unsigned int plane_id;
  // crtc_id
  unsigned int crtc_id;
  // fb_id
  unsigned int fb_id;
  // flags
  unsigned int flags;
  // crtc_x
  signed int crtc_x;
  // crtc_y
  signed int crtc_y;
  // crtc_w
  unsigned int crtc_w;
  // crtc_h
  unsigned int crtc_h;
  // src_x
  unsigned int src_x;
  // src_y
  unsigned int src_y;
  // src_h
  unsigned int src_h;
  // src_w
  unsigned int src_w;
};

struct drm_nouveau_channel_alloc
{
  // fb_ctxdma_handle
  unsigned int fb_ctxdma_handle;
  // tt_ctxdma_handle
  unsigned int tt_ctxdma_handle;
  // channel
  signed int channel;
  // pushbuf_domains
  unsigned int pushbuf_domains;
  // notifier_handle
  unsigned int notifier_handle;
  // subchan
  struct anonymous_17 subchan[8l];
  // nr_subchan
  unsigned int nr_subchan;
};

struct drm_nouveau_channel_free
{
  // channel
  signed int channel;
};

struct drm_nouveau_gem_cpu_prep
{
  // handle
  unsigned int handle;
  // flags
  unsigned int flags;
};

struct drm_nouveau_gem_info
{
  // handle
  unsigned int handle;
  // domain
  unsigned int domain;
  // size
  unsigned long int size;
  // offset
  unsigned long int offset;
  // map_handle
  unsigned long int map_handle;
  // tile_mode
  unsigned int tile_mode;
  // tile_flags
  unsigned int tile_flags;
};

struct drm_nouveau_gem_new
{
  // info
  struct drm_nouveau_gem_info info;
  // channel_hint
  unsigned int channel_hint;
  // align
  unsigned int align;
};

struct drm_nouveau_gem_pushbuf
{
  // channel
  unsigned int channel;
  // nr_buffers
  unsigned int nr_buffers;
  // buffers
  unsigned long int buffers;
  // nr_relocs
  unsigned int nr_relocs;
  // nr_push
  unsigned int nr_push;
  // relocs
  unsigned long int relocs;
  // push
  unsigned long int push;
  // suffix0
  unsigned int suffix0;
  // suffix1
  unsigned int suffix1;
  // vram_available
  unsigned long int vram_available;
  // gart_available
  unsigned long int gart_available;
};

struct drm_nouveau_gem_pushbuf_bo_presumed
{
  // valid
  unsigned int valid;
  // domain
  unsigned int domain;
  // offset
  unsigned long int offset;
};

struct drm_nouveau_gem_pushbuf_bo
{
  // user_priv
  unsigned long int user_priv;
  // handle
  unsigned int handle;
  // read_domains
  unsigned int read_domains;
  // write_domains
  unsigned int write_domains;
  // valid_domains
  unsigned int valid_domains;
  // presumed
  struct drm_nouveau_gem_pushbuf_bo_presumed presumed;
};

struct drm_nouveau_gem_pushbuf_push
{
  // bo_index
  unsigned int bo_index;
  // pad
  unsigned int pad;
  // offset
  unsigned long int offset;
  // length
  unsigned long int length;
};

struct drm_nouveau_gem_pushbuf_reloc
{
  // reloc_bo_index
  unsigned int reloc_bo_index;
  // reloc_bo_offset
  unsigned int reloc_bo_offset;
  // bo_index
  unsigned int bo_index;
  // flags
  unsigned int flags;
  // data
  unsigned int data;
  // vor
  unsigned int vor;
  // tor
  unsigned int tor;
};

struct drm_nouveau_getparam
{
  // param
  unsigned long int param;
  // value
  unsigned long int value;
};

struct drm_nouveau_gpuobj_free
{
  // channel
  signed int channel;
  // handle
  unsigned int handle;
};

struct drm_nouveau_grobj_alloc
{
  // channel
  signed int channel;
  // handle
  unsigned int handle;
  // class
  signed int class;
};

struct drm_nouveau_notifierobj_alloc
{
  // channel
  unsigned int channel;
  // handle
  unsigned int handle;
  // size
  unsigned int size;
  // offset
  unsigned int offset;
};

struct drm_nouveau_setparam
{
  // param
  unsigned long int param;
  // value
  unsigned long int value;
};

struct drm_prime_handle
{
  // handle
  unsigned int handle;
  // flags
  unsigned int flags;
  // fd
  signed int fd;
};

struct drm_scatter_gather
{
  // size
  unsigned long int size;
  // handle
  unsigned long int handle;
};

struct drm_set_client_cap
{
  // capability
  unsigned long long int capability;
  // value
  unsigned long long int value;
};

struct drm_set_version
{
  // drm_di_major
  signed int drm_di_major;
  // drm_di_minor
  signed int drm_di_minor;
  // drm_dd_major
  signed int drm_dd_major;
  // drm_dd_minor
  signed int drm_dd_minor;
};

struct drm_stats
{
  // count
  unsigned long int count;
  // data
  struct anonymous data[15l];
};

struct drm_unique
{
  // unique_len
  unsigned long int unique_len;
  // unique
  char *unique;
};

struct drm_update_draw
{
  // handle
  unsigned int handle;
  // type
  unsigned int type;
  // num
  unsigned int num;
  // data
  unsigned long long int data;
};

struct drm_version
{
  // version_major
  signed int version_major;
  // version_minor
  signed int version_minor;
  // version_patchlevel
  signed int version_patchlevel;
  // name_len
  unsigned long int name_len;
  // name
  char *name;
  // date_len
  unsigned long int date_len;
  // date
  char *date;
  // desc_len
  unsigned long int desc_len;
  // desc
  char *desc;
};

struct drm_wait_vblank_request
{
  // type
  enum drm_vblank_seq_type type;
  // sequence
  unsigned int sequence;
  // signal
  unsigned long int signal;
};

struct drm_wait_vblank_reply
{
  // type
  enum drm_vblank_seq_type type;
  // sequence
  unsigned int sequence;
  // tval_sec
  signed long int tval_sec;
  // tval_usec
  signed long int tval_usec;
};

union drm_wait_vblank
{
  // request
  struct drm_wait_vblank_request request;
  // reply
  struct drm_wait_vblank_reply reply;
};

union nouveau_bo_config
{
  // nv04
  struct anonymous_10 nv04;
  // nv50
  struct anonymous_11 nv50;
  // nvc0
  struct anonymous_11 nvc0;
  // data
  unsigned int data[8l];
};

struct nouveau_bo
{
  // device
  struct nouveau_device *device;
  // handle
  unsigned int handle;
  // size
  unsigned long int size;
  // flags
  unsigned int flags;
  // offset
  unsigned long int offset;
  // map
  void *map;
  // config
  union nouveau_bo_config config;
};

struct nouveau_list
{
  // prev
  struct nouveau_list *prev;
  // next
  struct nouveau_list *next;
};

struct nouveau_bo_priv
{
  // base
  struct nouveau_bo base;
  // head
  struct nouveau_list head;
  // refcnt
  struct anonymous_28 refcnt;
  // map_handle
  unsigned long int map_handle;
  // name
  unsigned int name;
  // access
  unsigned int access;
};

struct nouveau_bufbin_priv
{
  // list
  struct nouveau_bufref_priv *list;
  // relocs
  signed int relocs;
};

struct nouveau_bufctx
{
  // client
  struct nouveau_client *client;
  // head
  struct nouveau_list head;
  // pending
  struct nouveau_list pending;
  // current
  struct nouveau_list current;
  // relocs
  signed int relocs;
};

struct nouveau_bufctx_priv
{
  // base
  struct nouveau_bufctx base;
  // free
  struct nouveau_bufref_priv *free;
  // nr_bins
  signed int nr_bins;
  // bins
  struct nouveau_bufbin_priv bins[0l];
};

struct nouveau_bufref
{
  // thead
  struct nouveau_list thead;
  // bo
  struct nouveau_bo *bo;
  // packet
  unsigned int packet;
  // flags
  unsigned int flags;
  // data
  unsigned int data;
  // vor
  unsigned int vor;
  // tor
  unsigned int tor;
  // priv_data
  unsigned int priv_data;
  // priv
  void *priv;
};

struct nouveau_bufref_priv
{
  // base
  struct nouveau_bufref base;
  // next
  struct nouveau_bufref_priv *next;
  // bufctx
  struct nouveau_bufctx *bufctx;
};

struct nouveau_client
{
  // device
  struct nouveau_device *device;
  // id
  signed int id;
};

struct nouveau_client_kref
{
  // kref
  struct drm_nouveau_gem_pushbuf_bo *kref;
  // push
  struct nouveau_pushbuf *push;
};

struct nouveau_client_priv
{
  // base
  struct nouveau_client base;
  // kref
  struct nouveau_client_kref *kref;
  // kref_nr
  unsigned int kref_nr;
};

struct nouveau_object
{
  // parent
  struct nouveau_object *parent;
  // handle
  unsigned long int handle;
  // oclass
  unsigned int oclass;
  // length
  unsigned int length;
  // data
  void *data;
};

struct nouveau_device
{
  // object
  struct nouveau_object object;
  // fd
  signed int fd;
  // lib_version
  unsigned int lib_version;
  // drm_version
  unsigned int drm_version;
  // chipset
  unsigned int chipset;
  // vram_size
  unsigned long int vram_size;
  // gart_size
  unsigned long int gart_size;
  // vram_limit
  unsigned long int vram_limit;
  // gart_limit
  unsigned long int gart_limit;
};

struct nouveau_device_priv
{
  // base
  struct nouveau_device base;
  // close
  signed int close;
  // lock
  union anonymous_26 lock;
  // bo_list
  struct nouveau_list bo_list;
  // client
  unsigned int *client;
  // nr_client
  signed int nr_client;
  // have_bo_usage
  _Bool have_bo_usage;
  // gart_limit_percent
  signed int gart_limit_percent;
  // vram_limit_percent
  signed int vram_limit_percent;
};

struct nouveau_drm
{
  // client
  struct nouveau_object client;
  // fd
  signed int fd;
  // version
  unsigned int version;
  // nvif
  _Bool nvif;
};

struct nouveau_mclass
{
  // oclass
  signed int oclass;
  // version
  signed int version;
  // data
  void *data;
};

struct nouveau_pushbuf
{
  // client
  struct nouveau_client *client;
  // channel
  struct nouveau_object *channel;
  // bufctx
  struct nouveau_bufctx *bufctx;
  // kick_notify
  void (*kick_notify)(struct nouveau_pushbuf *);
  // user_priv
  void *user_priv;
  // rsvd_kick
  unsigned int rsvd_kick;
  // flags
  unsigned int flags;
  // cur
  unsigned int *cur;
  // end
  unsigned int *end;
};

struct nouveau_pushbuf_krec
{
  // next
  struct nouveau_pushbuf_krec *next;
  // buffer
  struct drm_nouveau_gem_pushbuf_bo buffer[1024l];
  // reloc
  struct drm_nouveau_gem_pushbuf_reloc reloc[1024l];
  // push
  struct drm_nouveau_gem_pushbuf_push push[512l];
  // nr_buffer
  signed int nr_buffer;
  // nr_reloc
  signed int nr_reloc;
  // nr_push
  signed int nr_push;
  // vram_used
  unsigned long int vram_used;
  // gart_used
  unsigned long int gart_used;
};

struct nouveau_pushbuf_priv
{
  // base
  struct nouveau_pushbuf base;
  // list
  struct nouveau_pushbuf_krec *list;
  // krec
  struct nouveau_pushbuf_krec *krec;
  // bctx_list
  struct nouveau_list bctx_list;
  // bo
  struct nouveau_bo *bo;
  // type
  unsigned int type;
  // suffix0
  unsigned int suffix0;
  // suffix1
  unsigned int suffix1;
  // ptr
  unsigned int *ptr;
  // bgn
  unsigned int *bgn;
  // bo_next
  signed int bo_next;
  // bo_nr
  signed int bo_nr;
  // bos
  struct nouveau_bo *bos[0l];
};

struct nouveau_pushbuf_refn
{
  // bo
  struct nouveau_bo *bo;
  // flags
  unsigned int flags;
};

struct nouveau_sclass
{
  // oclass
  signed int oclass;
  // minver
  signed int minver;
  // maxver
  signed int maxver;
};

struct nv04_fifo
{
  // base
  struct nouveau_fifo base;
  // vram
  unsigned int vram;
  // gart
  unsigned int gart;
  // notify
  unsigned int notify;
};

struct nv04_notify
{
  // object
  struct nouveau_object *object;
  // offset
  unsigned int offset;
  // length
  unsigned int length;
};

struct nv_device_info_v0
{
  // version
  unsigned char version;
  // platform
  unsigned char platform;
  // chipset
  unsigned short int chipset;
  // revision
  unsigned char revision;
  // family
  unsigned char family;
  // pad06
  unsigned char pad06[2l];
  // ram_size
  unsigned long long int ram_size;
  // ram_user
  unsigned long long int ram_user;
  // chip
  char chip[16l];
  // name
  char name[64l];
};

struct nv_device_v0
{
  // version
  unsigned char version;
  // pad01
  unsigned char pad01[7l];
  // device
  unsigned long long int device;
};

struct nvc0_fifo
{
  // base
  struct nouveau_fifo base;
  // notify
  unsigned int notify;
};

struct nve0_fifo
{
  // _anon0
  struct anonymous_18 _anon0;
  // engine
  unsigned int engine;
};

struct nvif_ioctl_del
{
};

struct nvif_ioctl_mthd_v0
{
  // version
  unsigned char version;
  // method
  unsigned char method;
  // pad02
  unsigned char pad02[6l];
  // data
  unsigned char data[0l];
};

struct nvif_ioctl_new_v0
{
  // version
  unsigned char version;
  // pad01
  unsigned char pad01[6l];
  // route
  unsigned char route;
  // token
  unsigned long long int token;
  // object
  unsigned long long int object;
  // handle
  unsigned int handle;
  // oclass
  signed int oclass;
  // data
  unsigned char data[0l];
};

struct nvif_ioctl_sclass_oclass_v0
{
  // oclass
  signed int oclass;
  // minver
  signed short int minver;
  // maxver
  signed short int maxver;
};

struct nvif_ioctl_sclass_v0
{
  // version
  unsigned char version;
  // count
  unsigned char count;
  // pad02
  unsigned char pad02[6l];
  // oclass
  struct nvif_ioctl_sclass_oclass_v0 oclass[0l];
};

struct nvif_ioctl_v0
{
  // version
  unsigned char version;
  // type
  unsigned char type;
  // pad02
  unsigned char pad02[4l];
  // owner
  unsigned char owner;
  // route
  unsigned char route;
  // token
  unsigned long long int token;
  // object
  unsigned long long int object;
  // data
  unsigned char data[0l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct stat
{
  // st_dev
  unsigned long int st_dev;
  // st_ino
  unsigned long int st_ino;
  // st_nlink
  unsigned long int st_nlink;
  // st_mode
  unsigned int st_mode;
  // st_uid
  unsigned int st_uid;
  // st_gid
  unsigned int st_gid;
  // __pad0
  signed int __pad0;
  // st_rdev
  unsigned long int st_rdev;
  // st_size
  signed long int st_size;
  // st_blksize
  signed long int st_blksize;
  // st_blocks
  signed long int st_blocks;
  // st_atim
  struct timespec st_atim;
  // st_mtim
  struct timespec st_mtim;
  // st_ctim
  struct timespec st_ctim;
  // __glibc_reserved
  signed long int __glibc_reserved[3l];
};


// connection
// file ../xf86drm.c line 2610
static struct anonymous_5 connection[16l];
// connection_link1
// file ../xf86drm.c line 2610
static struct anonymous_5 connection_link1[16l];
// drmHashTable
// file ../xf86drm.c line 146
static void *drmHashTable = (void *)0;
// drmHashTable_link1
// file ../xf86drm.c line 146
static void *drmHashTable_link1 = (void *)0;
// drm_server_info
// file ../xf86drm.c line 106
static struct _drmServerInfo *drm_server_info;
// drm_server_info_link1
// file ../xf86drm.c line 106
static struct _drmServerInfo *drm_server_info_link1;
// failed
// file ../../../tests/nouveau/threaded.c line 39
static signed int failed;
// import_fd
// file ../../../tests/nouveau/threaded.c line 41
static signed int import_fd;
// nouveau_debug
// file ../../nouveau/private.h line 13
unsigned int nouveau_debug = (unsigned int)0;
// nr_fds
// file ../xf86drm.c line 2612
static signed int nr_fds = 0;
// nr_fds_link1
// file ../xf86drm.c line 2612
static signed int nr_fds_link1 = 0;
// old_ioctl
// file ../../../tests/nouveau/threaded.c line 38
static signed int (*old_ioctl)(signed int, unsigned long int, ...);
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// DRM_IOCTL
// file ../xf86drmMode.c line 68
static inline signed int DRM_IOCTL(signed int fd, unsigned long int cmd, void *arg)
{
  signed int ret;
  ret=drmIoctl(fd, cmd, arg);
  signed int tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  if(!(ret >= 0))
  {
    return_value___errno_location_1=__errno_location();
    tmp_if_expr_2 = -(*return_value___errno_location_1);
  }

  else
    tmp_if_expr_2 = ret;
  return tmp_if_expr_2;
}

// DRM_IOCTL_link1
// file ../xf86drmMode.c line 68
static inline signed int DRM_IOCTL_link1(signed int fd_link1, unsigned long int cmd_link1, void *arg_link1)
{
  signed int ret_link1;
  ret_link1=drmIoctl(fd_link1, cmd_link1, arg_link1);
  signed int tmp_if_expr_2_link1;
  signed int *return_value___errno_location_1_link1;
  if(!(ret_link1 >= 0))
  {
    return_value___errno_location_1_link1=__errno_location();
    tmp_if_expr_2_link1 = -(*return_value___errno_location_1_link1);
  }

  else
    tmp_if_expr_2_link1 = ret_link1;
  return tmp_if_expr_2_link1;
}

// HashFind
// file ../xf86drmHash.c line 147
static struct HashBucket * HashFind(struct HashTable *table, unsigned long int key, unsigned long int *h)
{
  unsigned long int hash;
  hash=HashHash(key);
  struct HashBucket *prev = (struct HashBucket *)(void *)0;
  struct HashBucket *bucket;
  if(!(h == ((unsigned long int *)NULL)))
    *h = hash;

  bucket = table->buckets[(signed long int)hash];
  for( ; !(bucket == ((struct HashBucket *)NULL)); bucket = bucket->next)
  {
    if(bucket->key == key)
    {
      if(!(prev == ((struct HashBucket *)NULL)))
      {
        prev->next = bucket->next;
        bucket->next = table->buckets[(signed long int)hash];
        table->buckets[(signed long int)hash] = bucket;
        table->partials = table->partials + 1ul;
      }

      else
        table->hits = table->hits + 1ul;
      return bucket;
    }

    prev = bucket;
  }
  table->misses = table->misses + 1ul;
  return (struct HashBucket *)(void *)0;
}

// HashFind_link1
// file ../xf86drmHash.c line 147
static struct HashBucket * HashFind_link1(struct HashTable *table_link1, unsigned long int key_link1, unsigned long int *h_link1)
{
  unsigned long int hash_link1;
  hash_link1=HashHash_link1(key_link1);
  struct HashBucket *prev_link1 = (struct HashBucket *)(void *)0;
  struct HashBucket *bucket_link1;
  if(!(h_link1 == ((unsigned long int *)NULL)))
    *h_link1 = hash_link1;

  bucket_link1 = table_link1->buckets[(signed long int)hash_link1];
  for( ; !(bucket_link1 == ((struct HashBucket *)NULL)); bucket_link1 = bucket_link1->next)
  {
    if(bucket_link1->key == key_link1)
    {
      if(!(prev_link1 == ((struct HashBucket *)NULL)))
      {
        prev_link1->next = bucket_link1->next;
        bucket_link1->next = table_link1->buckets[(signed long int)hash_link1];
        table_link1->buckets[(signed long int)hash_link1] = bucket_link1;
        table_link1->partials = table_link1->partials + 1ul;
      }

      else
        table_link1->hits = table_link1->hits + 1ul;
      return bucket_link1;
    }

    prev_link1 = bucket_link1;
  }
  table_link1->misses = table_link1->misses + 1ul;
  return (struct HashBucket *)(void *)0;
}

// HashHash
// file ../xf86drmHash.c line 79
static unsigned long int HashHash(unsigned long int key)
{
  unsigned long int hash = (unsigned long int)0;
  unsigned long int tmp = key;
  signed int i;
  static unsigned long int scatter[256l];
  static signed int init = 0;
  if(init == 0)
  {
    void *state;
    state=drmRandomCreate((unsigned long int)37);
    i = 0;
    for( ; !(i >= 256); i = i + 1)
      scatter[(signed long int)i]=drmRandom(state);
    drmRandomDestroy(state);
    init = init + 1;
  }

  for( ; !(tmp == 0ul); tmp = tmp >> 8)
    hash = (hash << 1) + scatter[(signed long int)(tmp & (unsigned long int)0xff)];
  hash = hash % (unsigned long int)512;
  return hash;
}

// HashHash_link1
// file ../xf86drmHash.c line 79
static unsigned long int HashHash_link1(unsigned long int key_link1)
{
  unsigned long int hash_link1 = (unsigned long int)0;
  unsigned long int tmp_link1 = key_link1;
  signed int i_link1;
  static unsigned long int scatter_link1[256l];
  static signed int init_link1 = 0;
  if(init_link1 == 0)
  {
    void *state_link1;
    state_link1=drmRandomCreate((unsigned long int)37);
    i_link1 = 0;
    for( ; !(i_link1 >= 256); i_link1 = i_link1 + 1)
      scatter_link1[(signed long int)i_link1]=drmRandom(state_link1);
    drmRandomDestroy(state_link1);
    init_link1 = init_link1 + 1;
  }

  for( ; !(tmp_link1 == 0ul); tmp_link1 = tmp_link1 >> 8)
    hash_link1 = (hash_link1 << 1) + scatter_link1[(signed long int)(tmp_link1 & (unsigned long int)0xff)];
  hash_link1 = hash_link1 % (unsigned long int)512;
  return hash_link1;
}

// SLCreateEntry
// file ../xf86drmSL.c line 72
static struct SLEntry * SLCreateEntry(signed int max_level, unsigned long int key, void *value)
{
  struct SLEntry *entry;
  if(max_level >= 17 || !(max_level >= 0))
    max_level = 16;

  void *return_value_drmMalloc_1;
  return_value_drmMalloc_1=drmMalloc((signed int)(sizeof(struct SLEntry) /*40ul*/  + (unsigned long int)(max_level + 1) * sizeof(struct SLEntry *) /*8ul*/ ));
  entry = (struct SLEntry *)return_value_drmMalloc_1;
  if(entry == ((struct SLEntry *)NULL))
    return (struct SLEntry *)(void *)0;

  else
  {
    entry->magic = 0x00fab1edLU;
    entry->key = key;
    entry->value = value;
    entry->levels = max_level + 1;
    return entry;
  }
}

// SLCreateEntry_link1
// file ../xf86drmSL.c line 72
static struct SLEntry * SLCreateEntry_link1(signed int max_level_link1, unsigned long int key_link1, void *value_link1)
{
  struct SLEntry *entry_link1;
  if(max_level_link1 >= 17 || !(max_level_link1 >= 0))
    max_level_link1 = 16;

  void *return_value_drmMalloc_1_link1;
  return_value_drmMalloc_1_link1=drmMalloc((signed int)(sizeof(struct SLEntry) /*40ul*/  + (unsigned long int)(max_level_link1 + 1) * sizeof(struct SLEntry *) /*8ul*/ ));
  entry_link1 = (struct SLEntry *)return_value_drmMalloc_1_link1;
  if(entry_link1 == ((struct SLEntry *)NULL))
    return (struct SLEntry *)(void *)0;

  else
  {
    entry_link1->magic = 0x00fab1edLU;
    entry_link1->key = key_link1;
    entry_link1->value = value_link1;
    entry_link1->levels = max_level_link1 + 1;
    return entry_link1;
  }
}

// SLLocate
// file ../xf86drmSL.c line 137
static struct SLEntry * SLLocate(void *l, unsigned long int key, struct SLEntry **update)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *entry;
  signed int i;
  if(!(list->magic == 0xfacade00LU))
    return (struct SLEntry *)(void *)0;

  else
  {
    i = list->level;
    entry = list->head;
    for( ; i >= 0; i = i - 1)
    {
      for( ; !(entry->forward[(signed long int)i] == ((struct SLEntry *)NULL)); entry = entry->forward[(signed long int)i])
        if(entry->forward[(signed long int)i]->key >= key)
          break;

      update[(signed long int)i] = entry;
    }
    return entry->forward[(signed long int)0];
  }
}

// SLLocate_link1
// file ../xf86drmSL.c line 137
static struct SLEntry * SLLocate_link1(void *l_link1, unsigned long int key_link1, struct SLEntry **update_link1)
{
  struct SkipList *list_link1 = (struct SkipList *)l_link1;
  struct SLEntry *entry_link1;
  signed int i_link1;
  if(!(list_link1->magic == 0xfacade00LU))
    return (struct SLEntry *)(void *)0;

  else
  {
    i_link1 = list_link1->level;
    entry_link1 = list_link1->head;
    for( ; i_link1 >= 0; i_link1 = i_link1 - 1)
    {
      for( ; !(entry_link1->forward[(signed long int)i_link1] == ((struct SLEntry *)NULL)); entry_link1 = entry_link1->forward[(signed long int)i_link1])
        if(entry_link1->forward[(signed long int)i_link1]->key >= key_link1)
          break;

      update_link1[(signed long int)i_link1] = entry_link1;
    }
    return entry_link1->forward[(signed long int)0];
  }
}

// SLRandomLevel
// file ../xf86drmSL.c line 89
static signed int SLRandomLevel(void)
{
  signed int level = 1;
  static void *state = (void *)0;
  if(state == NULL)
    state=drmRandomCreate(0xc01055a1LU);

  unsigned long int return_value_drmRandom_1;
  do
  {
    return_value_drmRandom_1=drmRandom(state);
    if((1ul & return_value_drmRandom_1) == 0ul)
      break;

    if(level >= 16)
      break;

    level = level + 1;
  }
  while((_Bool)1);
  return level;
}

// SLRandomLevel_link1
// file ../xf86drmSL.c line 89
static signed int SLRandomLevel_link1(void)
{
  signed int level_link1 = 1;
  static void *state_link1 = (void *)0;
  if(state_link1 == NULL)
    state_link1=drmRandomCreate(0xc01055a1LU);

  unsigned long int return_value_drmRandom_1_link1;
  do
  {
    return_value_drmRandom_1_link1=drmRandom(state_link1);
    if((1ul & return_value_drmRandom_1_link1) == 0ul)
      break;

    if(level_link1 >= 16)
      break;

    level_link1 = level_link1 + 1;
  }
  while((_Bool)1);
  return level_link1;
}

// _drmModeGetConnector
// file ../xf86drmMode.c line 474
static struct _drmModeConnector * _drmModeGetConnector(signed int fd, unsigned int connector_id, signed int probe)
{
  struct drm_mode_get_connector conn;
  struct drm_mode_get_connector counts;
  struct _drmModeConnector *r = (struct _drmModeConnector *)(void *)0;
  struct drm_mode_modeinfo stack_mode;
  memset((void *)&conn, 0, sizeof(struct drm_mode_get_connector) /*80ul*/ );
  conn.connector_id = connector_id;
  if(probe == 0)
  {
    conn.count_modes = (unsigned int)1;
    conn.modes_ptr = (unsigned long int)&stack_mode;
  }

  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA7 << 0)) | sizeof(struct drm_mode_get_connector) /*80ul*/  << 0 + 8 + 8, (void *)&conn);
  signed int return_value_drmIoctl_6;
  void *return_value_drmAllocCpy_8;
  void *return_value_drmAllocCpy_9;
  void *return_value_drmAllocCpy_10;
  void *return_value_drmAllocCpy_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_18;
  _Bool tmp_if_expr_17;
  if(!(return_value_drmIoctl_1 == 0))
    return ((struct _drmModeConnector *)NULL);

  else
  {
    do
    {

    retry:
      ;
      counts = conn;
      if(!(conn.count_props == 0u))
      {
        void *return_value_drmMalloc_2;
        return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)conn.count_props * sizeof(unsigned int) /*4ul*/ ));
        conn.props_ptr = (unsigned long int)return_value_drmMalloc_2;
        if(conn.props_ptr == 0ull)
          goto err_allocs;

        void *return_value_drmMalloc_3;
        return_value_drmMalloc_3=drmMalloc((signed int)((unsigned long int)conn.count_props * sizeof(unsigned long int) /*8ul*/ ));
        conn.prop_values_ptr = (unsigned long int)return_value_drmMalloc_3;
        if(conn.prop_values_ptr == 0ull)
          goto err_allocs;

      }

      if(!(conn.count_modes == 0u))
      {
        void *return_value_drmMalloc_4;
        return_value_drmMalloc_4=drmMalloc((signed int)((unsigned long int)conn.count_modes * sizeof(struct drm_mode_modeinfo) /*68ul*/ ));
        conn.modes_ptr = (unsigned long int)return_value_drmMalloc_4;
        if(conn.modes_ptr == 0ull)
          goto err_allocs;

      }

      else
      {
        conn.count_modes = (unsigned int)1;
        conn.modes_ptr = (unsigned long int)&stack_mode;
      }
      if(!(conn.count_encoders == 0u))
      {
        void *return_value_drmMalloc_5;
        return_value_drmMalloc_5=drmMalloc((signed int)((unsigned long int)conn.count_encoders * sizeof(unsigned int) /*4ul*/ ));
        conn.encoders_ptr = (unsigned long int)return_value_drmMalloc_5;
        if(conn.encoders_ptr == 0ull)
          goto err_allocs;

      }

      return_value_drmIoctl_6=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA7 << 0)) | sizeof(struct drm_mode_get_connector) /*80ul*/  << 0 + 8 + 8, (void *)&conn);
      if(!(return_value_drmIoctl_6 == 0))
        goto err_allocs;

      if(counts.count_encoders >= conn.count_encoders && counts.count_modes >= conn.count_modes && counts.count_props >= conn.count_props)
        break;

      drmFree((void *)(unsigned long int)conn.props_ptr);
      drmFree((void *)(unsigned long int)conn.prop_values_ptr);
      if(!((struct drm_mode_modeinfo *)conn.modes_ptr == &stack_mode))
        drmFree((void *)(unsigned long int)conn.modes_ptr);

      drmFree((void *)(unsigned long int)conn.encoders_ptr);
    }
    while((_Bool)1);
    void *return_value_drmMalloc_7;
    return_value_drmMalloc_7=drmMalloc((signed int)sizeof(struct _drmModeConnector) /*88ul*/ );
    r = (struct _drmModeConnector *)return_value_drmMalloc_7;
    if(!(r == ((struct _drmModeConnector *)NULL)))
    {
      r->connector_id = conn.connector_id;
      r->encoder_id = conn.encoder_id;
      r->connection = (enum anonymous_21)conn.connection;
      r->mmWidth = conn.mm_width;
      r->mmHeight = conn.mm_height;
      r->subpixel = (enum anonymous_22)(conn.subpixel + (unsigned int)1);
      r->count_modes = (signed int)conn.count_modes;
      r->count_props = (signed int)conn.count_props;
      return_value_drmAllocCpy_8=drmAllocCpy((char *)(void *)(unsigned long int)conn.props_ptr, (signed int)conn.count_props, (signed int)sizeof(unsigned int) /*4ul*/ );
      r->props = (unsigned int *)return_value_drmAllocCpy_8;
      return_value_drmAllocCpy_9=drmAllocCpy((char *)(void *)(unsigned long int)conn.prop_values_ptr, (signed int)conn.count_props, (signed int)sizeof(unsigned long int) /*8ul*/ );
      r->prop_values = (unsigned long int *)return_value_drmAllocCpy_9;
      return_value_drmAllocCpy_10=drmAllocCpy((char *)(void *)(unsigned long int)conn.modes_ptr, (signed int)conn.count_modes, (signed int)sizeof(struct drm_mode_modeinfo) /*68ul*/ );
      r->modes = (struct _drmModeModeInfo *)return_value_drmAllocCpy_10;
      r->count_encoders = (signed int)conn.count_encoders;
      return_value_drmAllocCpy_11=drmAllocCpy((char *)(void *)(unsigned long int)conn.encoders_ptr, (signed int)conn.count_encoders, (signed int)sizeof(unsigned int) /*4ul*/ );
      r->encoders = (unsigned int *)return_value_drmAllocCpy_11;
      r->connector_type = conn.connector_type;
      r->connector_type_id = conn.connector_type_id;
      if(!(r->count_props == 0))
        tmp_if_expr_12 = !(r->props != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_12 = (_Bool)0;
      if(tmp_if_expr_12)
        tmp_if_expr_14 = (_Bool)1;

      else
      {
        if(!(r->count_props == 0))
          tmp_if_expr_13 = !(r->prop_values != ((unsigned long int *)NULL)) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_13 = (_Bool)0;
        tmp_if_expr_14 = tmp_if_expr_13 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_14)
        tmp_if_expr_16 = (_Bool)1;

      else
      {
        if(!(r->count_modes == 0))
          tmp_if_expr_15 = !(r->modes != ((struct _drmModeModeInfo *)NULL)) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_15 = (_Bool)0;
        tmp_if_expr_16 = tmp_if_expr_15 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_16)
        tmp_if_expr_18 = (_Bool)1;

      else
      {
        if(!(r->count_encoders == 0))
          tmp_if_expr_17 = !(r->encoders != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_17 = (_Bool)0;
        tmp_if_expr_18 = tmp_if_expr_17 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_18)
      {
        drmFree((void *)r->props);
        drmFree((void *)r->prop_values);
        drmFree((void *)r->modes);
        drmFree((void *)r->encoders);
        drmFree((void *)r);
        r = ((struct _drmModeConnector *)NULL);
      }

    }


  err_allocs:
    ;
    drmFree((void *)(unsigned long int)conn.prop_values_ptr);
    drmFree((void *)(unsigned long int)conn.props_ptr);
    if(!((struct drm_mode_modeinfo *)conn.modes_ptr == &stack_mode))
      drmFree((void *)(unsigned long int)conn.modes_ptr);

    drmFree((void *)(unsigned long int)conn.encoders_ptr);
    return r;
  }
}

// _drmModeGetConnector_link1
// file ../xf86drmMode.c line 474
static struct _drmModeConnector * _drmModeGetConnector_link1(signed int fd_link1, unsigned int connector_id_link1, signed int probe_link1)
{
  struct drm_mode_get_connector conn_link1;
  struct drm_mode_get_connector counts_link1;
  struct _drmModeConnector *r_link1 = (struct _drmModeConnector *)(void *)0;
  struct drm_mode_modeinfo stack_mode_link1;
  memset((void *)&conn_link1, 0, sizeof(struct drm_mode_get_connector) /*80ul*/ );
  conn_link1.connector_id = connector_id_link1;
  if(probe_link1 == 0)
  {
    conn_link1.count_modes = (unsigned int)1;
    conn_link1.modes_ptr = (unsigned long int)&stack_mode_link1;
  }

  signed int return_value_drmIoctl_1_link1;
  return_value_drmIoctl_1_link1=drmIoctl(fd_link1, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA7 << 0)) | sizeof(struct drm_mode_get_connector) /*80ul*/  << 0 + 8 + 8, (void *)&conn_link1);
  signed int return_value_drmIoctl_6_link1;
  void *return_value_drmAllocCpy_8_link1;
  void *return_value_drmAllocCpy_9_link1;
  void *return_value_drmAllocCpy_10_link1;
  void *return_value_drmAllocCpy_11_link1;
  _Bool tmp_if_expr_12_link1;
  _Bool tmp_if_expr_14_link1;
  _Bool tmp_if_expr_13_link1;
  _Bool tmp_if_expr_16_link1;
  _Bool tmp_if_expr_15_link1;
  _Bool tmp_if_expr_18_link1;
  _Bool tmp_if_expr_17_link1;
  if(!(return_value_drmIoctl_1_link1 == 0))
    return ((struct _drmModeConnector *)NULL);

  else
  {
    do
    {

    retry:
      ;
      counts_link1 = conn_link1;
      if(!(conn_link1.count_props == 0u))
      {
        void *return_value_drmMalloc_2_link1;
        return_value_drmMalloc_2_link1=drmMalloc((signed int)((unsigned long int)conn_link1.count_props * sizeof(unsigned int) /*4ul*/ ));
        conn_link1.props_ptr = (unsigned long int)return_value_drmMalloc_2_link1;
        if(conn_link1.props_ptr == 0ull)
          goto err_allocs;

        void *return_value_drmMalloc_3_link1;
        return_value_drmMalloc_3_link1=drmMalloc((signed int)((unsigned long int)conn_link1.count_props * sizeof(unsigned long int) /*8ul*/ ));
        conn_link1.prop_values_ptr = (unsigned long int)return_value_drmMalloc_3_link1;
        if(conn_link1.prop_values_ptr == 0ull)
          goto err_allocs;

      }

      if(!(conn_link1.count_modes == 0u))
      {
        void *return_value_drmMalloc_4_link1;
        return_value_drmMalloc_4_link1=drmMalloc((signed int)((unsigned long int)conn_link1.count_modes * sizeof(struct drm_mode_modeinfo) /*68ul*/ ));
        conn_link1.modes_ptr = (unsigned long int)return_value_drmMalloc_4_link1;
        if(conn_link1.modes_ptr == 0ull)
          goto err_allocs;

      }

      else
      {
        conn_link1.count_modes = (unsigned int)1;
        conn_link1.modes_ptr = (unsigned long int)&stack_mode_link1;
      }
      if(!(conn_link1.count_encoders == 0u))
      {
        void *return_value_drmMalloc_5_link1;
        return_value_drmMalloc_5_link1=drmMalloc((signed int)((unsigned long int)conn_link1.count_encoders * sizeof(unsigned int) /*4ul*/ ));
        conn_link1.encoders_ptr = (unsigned long int)return_value_drmMalloc_5_link1;
        if(conn_link1.encoders_ptr == 0ull)
          goto err_allocs;

      }

      return_value_drmIoctl_6_link1=drmIoctl(fd_link1, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA7 << 0)) | sizeof(struct drm_mode_get_connector) /*80ul*/  << 0 + 8 + 8, (void *)&conn_link1);
      if(!(return_value_drmIoctl_6_link1 == 0))
        goto err_allocs;

      if(counts_link1.count_encoders >= conn_link1.count_encoders && counts_link1.count_modes >= conn_link1.count_modes && counts_link1.count_props >= conn_link1.count_props)
        break;

      drmFree((void *)(unsigned long int)conn_link1.props_ptr);
      drmFree((void *)(unsigned long int)conn_link1.prop_values_ptr);
      if(!((struct drm_mode_modeinfo *)conn_link1.modes_ptr == &stack_mode_link1))
        drmFree((void *)(unsigned long int)conn_link1.modes_ptr);

      drmFree((void *)(unsigned long int)conn_link1.encoders_ptr);
    }
    while((_Bool)1);
    void *return_value_drmMalloc_7_link1;
    return_value_drmMalloc_7_link1=drmMalloc((signed int)sizeof(struct _drmModeConnector) /*88ul*/ );
    r_link1 = (struct _drmModeConnector *)return_value_drmMalloc_7_link1;
    if(!(r_link1 == ((struct _drmModeConnector *)NULL)))
    {
      r_link1->connector_id = conn_link1.connector_id;
      r_link1->encoder_id = conn_link1.encoder_id;
      r_link1->connection = (enum anonymous_21)conn_link1.connection;
      r_link1->mmWidth = conn_link1.mm_width;
      r_link1->mmHeight = conn_link1.mm_height;
      r_link1->subpixel = (enum anonymous_22)(conn_link1.subpixel + (unsigned int)1);
      r_link1->count_modes = (signed int)conn_link1.count_modes;
      r_link1->count_props = (signed int)conn_link1.count_props;
      return_value_drmAllocCpy_8_link1=drmAllocCpy_link1((char *)(void *)(unsigned long int)conn_link1.props_ptr, (signed int)conn_link1.count_props, (signed int)sizeof(unsigned int) /*4ul*/ );
      r_link1->props = (unsigned int *)return_value_drmAllocCpy_8_link1;
      return_value_drmAllocCpy_9_link1=drmAllocCpy_link1((char *)(void *)(unsigned long int)conn_link1.prop_values_ptr, (signed int)conn_link1.count_props, (signed int)sizeof(unsigned long int) /*8ul*/ );
      r_link1->prop_values = (unsigned long int *)return_value_drmAllocCpy_9_link1;
      return_value_drmAllocCpy_10_link1=drmAllocCpy_link1((char *)(void *)(unsigned long int)conn_link1.modes_ptr, (signed int)conn_link1.count_modes, (signed int)sizeof(struct drm_mode_modeinfo) /*68ul*/ );
      r_link1->modes = (struct _drmModeModeInfo *)return_value_drmAllocCpy_10_link1;
      r_link1->count_encoders = (signed int)conn_link1.count_encoders;
      return_value_drmAllocCpy_11_link1=drmAllocCpy_link1((char *)(void *)(unsigned long int)conn_link1.encoders_ptr, (signed int)conn_link1.count_encoders, (signed int)sizeof(unsigned int) /*4ul*/ );
      r_link1->encoders = (unsigned int *)return_value_drmAllocCpy_11_link1;
      r_link1->connector_type = conn_link1.connector_type;
      r_link1->connector_type_id = conn_link1.connector_type_id;
      if(!(r_link1->count_props == 0))
        tmp_if_expr_12_link1 = !(r_link1->props != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_12_link1 = (_Bool)0;
      if(tmp_if_expr_12_link1)
        tmp_if_expr_14_link1 = (_Bool)1;

      else
      {
        if(!(r_link1->count_props == 0))
          tmp_if_expr_13_link1 = !(r_link1->prop_values != ((unsigned long int *)NULL)) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_13_link1 = (_Bool)0;
        tmp_if_expr_14_link1 = tmp_if_expr_13_link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_14_link1)
        tmp_if_expr_16_link1 = (_Bool)1;

      else
      {
        if(!(r_link1->count_modes == 0))
          tmp_if_expr_15_link1 = !(r_link1->modes != ((struct _drmModeModeInfo *)NULL)) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_15_link1 = (_Bool)0;
        tmp_if_expr_16_link1 = tmp_if_expr_15_link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_16_link1)
        tmp_if_expr_18_link1 = (_Bool)1;

      else
      {
        if(!(r_link1->count_encoders == 0))
          tmp_if_expr_17_link1 = !(r_link1->encoders != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_17_link1 = (_Bool)0;
        tmp_if_expr_18_link1 = tmp_if_expr_17_link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_18_link1)
      {
        drmFree((void *)r_link1->props);
        drmFree((void *)r_link1->prop_values);
        drmFree((void *)r_link1->modes);
        drmFree((void *)r_link1->encoders);
        drmFree((void *)r_link1);
        r_link1 = ((struct _drmModeConnector *)NULL);
      }

    }


  err_allocs:
    ;
    drmFree((void *)(unsigned long int)conn_link1.prop_values_ptr);
    drmFree((void *)(unsigned long int)conn_link1.props_ptr);
    if(!((struct drm_mode_modeinfo *)conn_link1.modes_ptr == &stack_mode_link1))
      drmFree((void *)(unsigned long int)conn_link1.modes_ptr);

    drmFree((void *)(unsigned long int)conn_link1.encoders_ptr);
    return r_link1;
  }
}

// abi16_bo_info
// file ../../nouveau/private.h line 120
void abi16_bo_info(struct nouveau_bo *bo, struct drm_nouveau_gem_info *info)
{
  struct nouveau_bo_priv *nvbo;
  nvbo=nouveau_bo_link2(bo);
  nvbo->map_handle = info->map_handle;
  bo->handle = info->handle;
  bo->size = info->size;
  bo->offset = info->offset;
  bo->flags = (unsigned int)0;
  if(!((2u & info->domain) == 0u))
    bo->flags = bo->flags | (unsigned int)0x00000001;

  if(!((4u & info->domain) == 0u))
    bo->flags = bo->flags | (unsigned int)0x00000002;

  if((8u & info->tile_flags) == 0u)
    bo->flags = bo->flags | (unsigned int)0x40000000;

  if(!(nvbo->map_handle == 0ul))
    bo->flags = bo->flags | 0x80000000;

  _Bool tmp_if_expr_1;
  if(bo->device->chipset >= 192u)
  {
    bo->config.nvc0.memtype = (info->tile_flags & (unsigned int)0xff00) >> 8;
    bo->config.nvc0.tile_mode = info->tile_mode;
  }

  else
  {
    if(bo->device->chipset >= 128u)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = bo->device->chipset == (unsigned int)0x50 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      bo->config.nv50.memtype = (info->tile_flags & (unsigned int)0x07f00) >> 8 | (info->tile_flags & (unsigned int)0x30000) >> 9;
      bo->config.nv50.tile_mode = info->tile_mode << 4;
    }

    else
    {
      bo->config.nv04.surf_flags = info->tile_flags & (unsigned int)7;
      bo->config.nv04.surf_pitch = info->tile_mode;
    }
  }
}

// abi16_bo_init
// file ../../nouveau/private.h line 121
signed int abi16_bo_init(struct nouveau_bo *bo, unsigned int alignment, union nouveau_bo_config *config)
{
  struct nouveau_device *dev = bo->device;
  struct nouveau_drm *drm;
  drm=nouveau_drm_link2(&dev->object);
  struct drm_nouveau_gem_new req = { .info={ .handle=0u, .domain=0u, .size=0ul, .offset=0ul, .map_handle=0ul,
    .tile_mode=0u, .tile_flags=0u }, .channel_hint=0u,
    .align=0u };
  struct drm_nouveau_gem_info *info = &req.info;
  signed int ret;
  if(!((1u & bo->flags) == 0u))
    info->domain = info->domain | (unsigned int)(1 << 1);

  if(!((2u & bo->flags) == 0u))
    info->domain = info->domain | (unsigned int)(1 << 2);

  if(info->domain == 0u)
    info->domain = info->domain | (unsigned int)(1 << 1 | 1 << 2);

  if(!((0x80000000 & bo->flags) == 0u))
    info->domain = info->domain | (unsigned int)(1 << 3);

  if(!((268435456u & bo->flags) == 0u))
    info->domain = info->domain | (unsigned int)(1 << 4);

  if((1073741824u & bo->flags) == 0u)
    info->tile_flags = (unsigned int)0x00000008;

  info->size = bo->size;
  req.align = alignment;
  _Bool tmp_if_expr_1;
  if(!(config == ((union nouveau_bo_config *)NULL)))
  {
    if(dev->chipset >= 192u)
    {
      info->tile_flags = (config->nvc0.memtype & (unsigned int)0xff) << 8;
      info->tile_mode = config->nvc0.tile_mode;
    }

    else
    {
      if(dev->chipset >= 128u)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = dev->chipset == (unsigned int)0x50 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        info->tile_flags = (config->nv50.memtype & (unsigned int)0x07f) << 8 | (config->nv50.memtype & (unsigned int)0x180) << 9;
        info->tile_mode = config->nv50.tile_mode >> 4;
      }

      else
      {
        info->tile_flags = config->nv04.surf_flags & (unsigned int)7;
        info->tile_mode = config->nv04.surf_pitch;
      }
    }
  }

  struct nouveau_device_priv *return_value_nouveau_device_2;
  return_value_nouveau_device_2=nouveau_device_link2(dev);
  if(return_value_nouveau_device_2->have_bo_usage == (_Bool)0)
    info->tile_flags = info->tile_flags & (unsigned int)0x0000ff00;

  ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x40, (void *)&req, sizeof(struct drm_nouveau_gem_new) /*48ul*/ );
  if(ret == 0)
    abi16_bo_info(bo, &req.info);

  return ret;
}

// abi16_chan_nv04
// file ../../nouveau/abi16.c line 39
static signed int abi16_chan_nv04(struct nouveau_object *obj)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm_link2(obj);
  struct nv04_fifo *nv04 = (struct nv04_fifo *)obj->data;
  struct drm_nouveau_channel_alloc req = { .fb_ctxdma_handle=nv04->vram, .tt_ctxdma_handle=nv04->gart, .channel=0,
    .pushbuf_domains=0u, .notifier_handle=0u, .subchan={ { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u } },
    .nr_subchan=0u };
  signed int ret;
  ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x02, (void *)&req, sizeof(struct drm_nouveau_channel_alloc) /*88ul*/ );
  if(!(ret == 0))
    return ret;

  else
  {
    nv04->base.channel = (unsigned int)req.channel;
    nv04->base.pushbuf = req.pushbuf_domains;
    nv04->notify = req.notifier_handle;
    nv04->base.object->handle = (unsigned long int)req.channel;
    nv04->base.object->length = (unsigned int)sizeof(struct nv04_fifo) /*56ul*/ ;
    return 0;
  }
}

// abi16_chan_nvc0
// file ../../nouveau/abi16.c line 63
static signed int abi16_chan_nvc0(struct nouveau_object *obj)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm_link2(obj);
  struct drm_nouveau_channel_alloc req = { .fb_ctxdma_handle=0u, .tt_ctxdma_handle=0u, .channel=0,
    .pushbuf_domains=0u, .notifier_handle=0u, .subchan={ { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u } },
    .nr_subchan=0u };
  struct nvc0_fifo *nvc0 = (struct nvc0_fifo *)obj->data;
  signed int ret;
  ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x02, (void *)&req, sizeof(struct drm_nouveau_channel_alloc) /*88ul*/ );
  if(!(ret == 0))
    return ret;

  else
  {
    nvc0->base.channel = (unsigned int)req.channel;
    nvc0->base.pushbuf = req.pushbuf_domains;
    nvc0->notify = req.notifier_handle;
    nvc0->base.object->handle = (unsigned long int)req.channel;
    nvc0->base.object->length = (unsigned int)sizeof(struct nvc0_fifo) /*48ul*/ ;
    return 0;
  }
}

// abi16_chan_nve0
// file ../../nouveau/abi16.c line 84
static signed int abi16_chan_nve0(struct nouveau_object *obj)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm_link2(obj);
  struct drm_nouveau_channel_alloc req = { .fb_ctxdma_handle=0u, .tt_ctxdma_handle=0u, .channel=0,
    .pushbuf_domains=0u, .notifier_handle=0u, .subchan={ { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u }, { .handle=0u, .grclass=0u } },
    .nr_subchan=0u };
  struct nve0_fifo *nve0 = (struct nve0_fifo *)obj->data;
  signed int ret;
  if((unsigned long int)obj->length >= 49ul)
  {
    req.fb_ctxdma_handle = 0xffffffff;
    req.tt_ctxdma_handle = nve0->engine;
  }

  ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x02, (void *)&req, sizeof(struct drm_nouveau_channel_alloc) /*88ul*/ );
  if(!(ret == 0))
    return ret;

  else
  {
    nve0->_anon0.base.channel = (unsigned int)req.channel;
    nve0->_anon0.base.pushbuf = req.pushbuf_domains;
    nve0->_anon0.notify = req.notifier_handle;
    nve0->_anon0.base.object->handle = (unsigned long int)req.channel;
    nve0->_anon0.base.object->length = (unsigned int)sizeof(struct nve0_fifo) /*56ul*/ ;
    return 0;
  }
}

// abi16_delete
// file ../../nouveau/private.h line 118
void abi16_delete(struct nouveau_object *obj)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm_link2(obj);
  if(obj->oclass == 0x80000001)
  {
    struct drm_nouveau_channel_free abi16_delete__1__1__req;
    abi16_delete__1__1__req.channel = (signed int)obj->handle;
    drmCommandWrite(drm->fd, (unsigned long int)0x03, (void *)&abi16_delete__1__1__req, sizeof(struct drm_nouveau_channel_free) /*4ul*/ );
  }

  else
  {
    struct drm_nouveau_gpuobj_free req;
    req.channel = (signed int)obj->parent->handle;
    req.handle = (unsigned int)obj->handle;
    drmCommandWrite(drm->fd, (unsigned long int)0x06, (void *)&req, sizeof(struct drm_nouveau_gpuobj_free) /*8ul*/ );
  }
}

// abi16_engobj
// file ../../nouveau/abi16.c line 110
static signed int abi16_engobj(struct nouveau_object *obj)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm_link2(obj);
  struct drm_nouveau_grobj_alloc req = { .channel=(signed int)obj->parent->handle, .handle=(unsigned int)obj->handle,
    .class=(signed int)obj->oclass };
  signed int ret;
  if(!(req.class == -4))
  {
    if(req.class == -5)
      goto __CPROVER_DUMP_L2;

    if(req.class == -6)
      goto __CPROVER_DUMP_L3;

    if(req.class == -7)
      goto __CPROVER_DUMP_L4;

  }

  else
  {
    req.class = 0x006e;
    goto __CPROVER_DUMP_L5;

  __CPROVER_DUMP_L2:
    ;
    req.class = 0x016e;
    goto __CPROVER_DUMP_L5;

  __CPROVER_DUMP_L3:
    ;
    req.class = 0x506e;
    goto __CPROVER_DUMP_L5;

  __CPROVER_DUMP_L4:
    ;
    req.class = 0x906e;
  }

__CPROVER_DUMP_L5:
  ;
  ret=drmCommandWrite(drm->fd, (unsigned long int)0x04, (void *)&req, sizeof(struct drm_nouveau_grobj_alloc) /*12ul*/ );
  if(!(ret == 0))
    return ret;

  else
  {
    obj->length = (unsigned int)sizeof(struct nouveau_object *) /*8ul*/ ;
    return 0;
  }
}

// abi16_ntfy
// file ../../nouveau/abi16.c line 151
static signed int abi16_ntfy(struct nouveau_object *obj)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm_link2(obj);
  struct nv04_notify *ntfy = (struct nv04_notify *)obj->data;
  struct drm_nouveau_notifierobj_alloc req = { .channel=(unsigned int)obj->parent->handle, .handle=(unsigned int)ntfy->object->handle,
    .size=ntfy->length,
    .offset=0u };
  signed int ret;
  ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x05, (void *)&req, sizeof(struct drm_nouveau_notifierobj_alloc) /*16ul*/ );
  if(!(ret == 0))
    return ret;

  else
  {
    ntfy->offset = req.offset;
    ntfy->object->length = (unsigned int)sizeof(struct nv04_notify) /*16ul*/ ;
    return 0;
  }
}

// abi16_object
// file ../../nouveau/private.h line 117
_Bool abi16_object(struct nouveau_object *obj, signed int (**func)(struct nouveau_object *))
{
  struct nouveau_object *parent = obj->parent;
  _Bool tmp_if_expr_1;
  if(!(parent->length == 0u))
    tmp_if_expr_1 = parent->oclass == 0x80000000 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    if(parent->length == 0u)
      tmp_if_expr_2 = parent->oclass == (unsigned int)0x00000080 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
  {
    if(obj->oclass == 0x80000001)
    {
      struct nouveau_device *dev = (struct nouveau_device *)(void *)parent;
      if(!(dev->chipset >= 192u))
        *func = abi16_chan_nv04;

      else
        if(!(dev->chipset >= 224u))
          *func = abi16_chan_nvc0;

        else
          *func = abi16_chan_nve0;
      return (_Bool)1;
    }

  }

  else
    if(!(parent->length == 0u))
    {
      if(parent->oclass == 0x80000001)
      {
        if(obj->oclass == 0x80000002)
        {
          *func = abi16_ntfy;
          return (_Bool)1;
        }

        *func = abi16_engobj;
        return (_Bool)0;
      }

    }

  *func = (signed int (*)(struct nouveau_object *))(void *)0;
  return (_Bool)0;
}

// abi16_sclass
// file ../../nouveau/private.h line 119
signed int abi16_sclass(struct nouveau_object *obj, struct nouveau_sclass **psclass)
{
  struct nouveau_sclass *sclass;
  struct nouveau_device *dev;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)8, sizeof(struct nouveau_sclass) /*12ul*/ );
  sclass = (struct nouveau_sclass *)return_value_calloc_1;
  struct nouveau_sclass *tmp_post_2;
  struct nouveau_sclass *tmp_post_3;
  struct nouveau_sclass *tmp_post_4;
  if(sclass == ((struct nouveau_sclass *)NULL))
    return -12;

  else
  {
    *psclass = sclass;
    if(obj->oclass == 0x80000001)
    {
      dev = (struct nouveau_device *)obj->parent;
      if(dev->chipset >= 152u)
      {
        if(!(dev->chipset == 160u))
        {
          if(!(dev->chipset >= 192u))
          {
            tmp_post_2 = sclass;
            sclass = sclass + 1l;
            *tmp_post_2 = (struct nouveau_sclass){ .oclass=0x000085b1, .minver=-1, .maxver=-1 };
            tmp_post_3 = sclass;
            sclass = sclass + 1l;
            *tmp_post_3 = (struct nouveau_sclass){ .oclass=0x000085b2, .minver=-1, .maxver=-1 };
            tmp_post_4 = sclass;
            sclass = sclass + 1l;
            *tmp_post_4 = (struct nouveau_sclass){ .oclass=0x000085b3, .minver=-1, .maxver=-1 };
          }

        }

      }

    }

    return (signed int)(sclass - *psclass);
  }
}

// cli_kref_get
// file ../../nouveau/private.h line 43
static inline struct drm_nouveau_gem_pushbuf_bo * cli_kref_get(struct nouveau_client *client, struct nouveau_bo *bo)
{
  struct nouveau_client_priv *pcli;
  pcli=nouveau_client_link1(client);
  struct drm_nouveau_gem_pushbuf_bo *kref = (struct drm_nouveau_gem_pushbuf_bo *)(void *)0;
  if(!(bo->handle >= pcli->kref_nr))
    kref = (pcli->kref + (signed long int)bo->handle)->kref;

  return kref;
}

// cli_kref_set
// file ../../nouveau/private.h line 63
static inline void cli_kref_set(struct nouveau_client *client, struct nouveau_bo *bo, struct drm_nouveau_gem_pushbuf_bo *kref, struct nouveau_pushbuf *push)
{
  struct nouveau_client_priv *pcli;
  pcli=nouveau_client_link1(client);
  if(bo->handle >= pcli->kref_nr)
  {
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)pcli->kref, sizeof(struct nouveau_client_kref) /*16ul*/  * (unsigned long int)bo->handle * (unsigned long int)2);
    pcli->kref = (struct nouveau_client_kref *)return_value_realloc_1;
    for( ; !(pcli->kref_nr >= 2u * bo->handle); pcli->kref_nr = pcli->kref_nr + 1u)
    {
      (pcli->kref + (signed long int)pcli->kref_nr)->kref = (struct drm_nouveau_gem_pushbuf_bo *)(void *)0;
      (pcli->kref + (signed long int)pcli->kref_nr)->push = (struct nouveau_pushbuf *)(void *)0;
    }
  }

  (pcli->kref + (signed long int)bo->handle)->kref = kref;
  (pcli->kref + (signed long int)bo->handle)->push = push;
}

// cli_push_get
// file ../../nouveau/private.h line 53
static inline struct nouveau_pushbuf * cli_push_get(struct nouveau_client *client, struct nouveau_bo *bo)
{
  struct nouveau_client_priv *pcli;
  pcli=nouveau_client(client);
  struct nouveau_pushbuf *push = (struct nouveau_pushbuf *)(void *)0;
  if(!(bo->handle >= pcli->kref_nr))
    push = (pcli->kref + (signed long int)bo->handle)->push;

  return push;
}

// cli_push_get_link1
// file ../../nouveau/private.h line 53
static inline struct nouveau_pushbuf * cli_push_get_link1(struct nouveau_client *client_link1, struct nouveau_bo *bo_link1)
{
  struct nouveau_client_priv *pcli_link1;
  pcli_link1=nouveau_client_link1(client_link1);
  struct nouveau_pushbuf *push_link1 = (struct nouveau_pushbuf *)(void *)0;
  if(!(bo_link1->handle >= pcli_link1->kref_nr))
    push_link1 = (pcli_link1->kref + (signed long int)bo_link1->handle)->push;

  return push_link1;
}

// debug_init
// file ../../nouveau/nouveau.c line 57
static void debug_init(char *args)
{
  if(!(args == ((char *)NULL)))
  {
    signed int n;
    signed long int return_value_strtol_1;
    return_value_strtol_1=strtol(args, (char ** restrict )(void *)0, 0);
    n = (signed int)return_value_strtol_1;
    if(n >= 0)
      nouveau_debug = (unsigned int)n;

  }

}

// drmAddBufs
// file ../xf86drm.c line 1131
extern signed int drmAddBufs(signed int fd, signed int count, signed int size, enum anonymous_8 flags, signed int agp_offset)
{
  struct drm_buf_desc request;
  memset((void *)&request, 0, sizeof(struct drm_buf_desc) /*32ul*/ );
  request.count = count;
  request.size = size;
  request.flags = (enum anonymous_19)flags;
  request.agp_start = (unsigned long int)agp_offset;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x16 << 0)) | sizeof(struct drm_buf_desc) /*32ul*/  << 0 + 8 + 8, (void *)&request);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return request.count;
}

// drmAddContextPrivateMapping
// file ../xf86drm.c line 2267
extern signed int drmAddContextPrivateMapping(signed int fd, unsigned int ctx_id, unsigned int handle)
{
  struct drm_ctx_priv_map map;
  memset((void *)&map, 0, sizeof(struct drm_ctx_priv_map) /*16ul*/ );
  map.ctx_id = ctx_id;
  map.handle = (void *)(unsigned long int)handle;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x1c << 0)) | sizeof(struct drm_ctx_priv_map) /*16ul*/  << 0 + 8 + 8, (void *)&map);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAddContextTag
// file ../xf86drm.c line 2238
extern signed int drmAddContextTag(signed int fd, unsigned int context, void *tag)
{
  struct drmHashEntry *entry;
  entry=drmGetEntry(fd);
  signed int return_value_drmHashInsert_1;
  return_value_drmHashInsert_1=drmHashInsert(entry->tagTable, (unsigned long int)context, tag);
  if(!(return_value_drmHashInsert_1 == 0))
  {
    drmHashDelete(entry->tagTable, (unsigned long int)context);
    drmHashInsert(entry->tagTable, (unsigned long int)context, tag);
  }

  return 0;
}

// drmAddMap
// file ../xf86drm.c line 1086
extern signed int drmAddMap(signed int fd, unsigned int offset, unsigned int size, enum anonymous_6 type, enum anonymous_7 flags, unsigned int *handle)
{
  struct drm_map map;
  memset((void *)&map, 0, sizeof(struct drm_map) /*40ul*/ );
  map.offset = (unsigned long int)offset;
  map.size = (unsigned long int)size;
  map.type = (enum drm_map_type)type;
  map.flags = (enum drm_map_flags)flags;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x15 << 0)) | sizeof(struct drm_map) /*40ul*/  << 0 + 8 + 8, (void *)&map);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    if(!(handle == ((unsigned int *)NULL)))
      *handle = (unsigned int)(unsigned long int)map.handle;

    return 0;
  }
}

// drmAgpAcquire
// file ../xf86drm.c line 1689
extern signed int drmAgpAcquire(signed int fd)
{
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x30 << 0) | (unsigned int)(0 << 0 + 8 + 8)), (void *)0);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAgpAlloc
// file ../xf86drm.c line 1755
extern signed int drmAgpAlloc(signed int fd, unsigned long int size, unsigned long int type, unsigned long int *address, unsigned int *handle)
{
  struct drm_agp_buffer b;
  memset((void *)&b, 0, sizeof(struct drm_agp_buffer) /*32ul*/ );
  *handle = (unsigned int)0;
  b.size = size;
  b.type = type;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x34 << 0)) | sizeof(struct drm_agp_buffer) /*32ul*/  << 0 + 8 + 8, (void *)&b);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    if(!(address == ((unsigned long int *)NULL)))
      *address = b.physical;

    *handle = (unsigned int)b.handle;
    return 0;
  }
}

// drmAgpBase
// file ../xf86drm.c line 1927
extern unsigned long int drmAgpBase(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned long int)0;

  else
    return i.aperture_base;
}

// drmAgpBind
// file ../xf86drm.c line 1810
extern signed int drmAgpBind(signed int fd, unsigned int handle, unsigned long int offset)
{
  struct drm_agp_binding b;
  memset((void *)&b, 0, sizeof(struct drm_agp_binding) /*16ul*/ );
  b.handle = (unsigned long int)handle;
  b.offset = offset;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x36 << 0)) | sizeof(struct drm_agp_binding) /*16ul*/  << 0 + 8 + 8, (void *)&b);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAgpDeviceId
// file ../xf86drm.c line 2042
extern unsigned int drmAgpDeviceId(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned int)0;

  else
    return (unsigned int)i.id_device;
}

// drmAgpEnable
// file ../xf86drm.c line 1727
extern signed int drmAgpEnable(signed int fd, unsigned long int mode)
{
  struct drm_agp_mode m;
  memset((void *)&m, 0, sizeof(struct drm_agp_mode) /*8ul*/ );
  m.mode = mode;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x32 << 0)) | sizeof(struct drm_agp_mode) /*8ul*/  << 0 + 8 + 8, (void *)&m);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAgpFree
// file ../xf86drm.c line 1785
extern signed int drmAgpFree(signed int fd, unsigned int handle)
{
  struct drm_agp_buffer b;
  memset((void *)&b, 0, sizeof(struct drm_agp_buffer) /*32ul*/ );
  b.handle = (unsigned long int)handle;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x35 << 0)) | sizeof(struct drm_agp_buffer) /*32ul*/  << 0 + 8 + 8, (void *)&b);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAgpGetMode
// file ../xf86drm.c line 1904
extern unsigned long int drmAgpGetMode(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned long int)0;

  else
    return i.mode;
}

// drmAgpMemoryAvail
// file ../xf86drm.c line 1996
extern unsigned long int drmAgpMemoryAvail(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned long int)0;

  else
    return i.memory_allowed;
}

// drmAgpMemoryUsed
// file ../xf86drm.c line 1973
extern unsigned long int drmAgpMemoryUsed(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned long int)0;

  else
    return i.memory_used;
}

// drmAgpRelease
// file ../xf86drm.c line 1707
extern signed int drmAgpRelease(signed int fd)
{
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x31 << 0) | (unsigned int)(0 << 0 + 8 + 8)), (void *)0);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAgpSize
// file ../xf86drm.c line 1950
extern unsigned long int drmAgpSize(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned long int)0;

  else
    return i.aperture_size;
}

// drmAgpUnbind
// file ../xf86drm.c line 1835
extern signed int drmAgpUnbind(signed int fd, unsigned int handle)
{
  struct drm_agp_binding b;
  memset((void *)&b, 0, sizeof(struct drm_agp_binding) /*16ul*/ );
  b.handle = (unsigned long int)handle;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x37 << 0)) | sizeof(struct drm_agp_binding) /*16ul*/  << 0 + 8 + 8, (void *)&b);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAgpVendorId
// file ../xf86drm.c line 2019
extern unsigned int drmAgpVendorId(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned int)0;

  else
    return (unsigned int)i.id_vendor;
}

// drmAgpVersionMajor
// file ../xf86drm.c line 1858
extern signed int drmAgpVersionMajor(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return i.agp_version_major;
}

// drmAgpVersionMinor
// file ../xf86drm.c line 1881
extern signed int drmAgpVersionMinor(signed int fd)
{
  struct drm_agp_info i;
  memset((void *)&i, 0, sizeof(struct drm_agp_info) /*56ul*/ );
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x33 << 0)) | sizeof(struct drm_agp_info) /*56ul*/  << 0 + 8 + 8, (void *)&i);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return i.agp_version_minor;
}

// drmAllocCpy
// file ../xf86drmMode.c line 78
static void * drmAllocCpy(char *array, signed int count, signed int entry_size)
{
  char *r;
  signed int i;
  if(array == ((char *)NULL) || count == 0 || entry_size == 0)
    return NULL;

  else
  {
    void *return_value_drmMalloc_1;
    return_value_drmMalloc_1=drmMalloc(count * entry_size);
    r = (char *)return_value_drmMalloc_1;
    if(r == ((char *)NULL))
      return NULL;

    else
    {
      i = 0;
      for( ; !(i >= count); i = i + 1)
        memcpy((void *)(r + (signed long int)(entry_size * i)), (const void *)(array + (signed long int)(entry_size * i)), (unsigned long int)entry_size);
      return (void *)r;
    }
  }
}

// drmAllocCpy_link1
// file ../xf86drmMode.c line 78
static void * drmAllocCpy_link1(char *array_link1, signed int count_link1, signed int entry_size_link1)
{
  char *r_link1;
  signed int i_link1;
  if(array_link1 == ((char *)NULL) || count_link1 == 0 || entry_size_link1 == 0)
    return NULL;

  else
  {
    void *return_value_drmMalloc_1_link1;
    return_value_drmMalloc_1_link1=drmMalloc(count_link1 * entry_size_link1);
    r_link1 = (char *)return_value_drmMalloc_1_link1;
    if(r_link1 == ((char *)NULL))
      return NULL;

    else
    {
      i_link1 = 0;
      for( ; !(i_link1 >= count_link1); i_link1 = i_link1 + 1)
        memcpy((void *)(r_link1 + (signed long int)(entry_size_link1 * i_link1)), (const void *)(array_link1 + (signed long int)(entry_size_link1 * i_link1)), (unsigned long int)entry_size_link1);
      return (void *)r_link1;
    }
  }
}

// drmAuthMagic
// file ../xf86drm.c line 1025
extern signed int drmAuthMagic(signed int fd, unsigned int magic)
{
  struct drm_auth auth;
  memset((void *)&auth, 0, sizeof(struct drm_auth) /*4ul*/ );
  auth.magic = magic;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x11 << 0)) | sizeof(struct drm_auth) /*4ul*/  << 0 + 8 + 8, (void *)&auth);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmAvailable
// file ../xf86drm.c line 477
extern signed int drmAvailable(void)
{
  struct _drmVersion *version;
  signed int retval = 0;
  signed int fd;
  fd=drmOpenMinor(0, 1, 0);
  if(!(fd >= 0))
  {
    signed int return_value_access_1;
    return_value_access_1=access("/proc/dri/0", 4);
    if(return_value_access_1 == 0)
      return 1;

    return 0;
  }

  version=drmGetVersion(fd);
  if(!(version == ((struct _drmVersion *)NULL)))
  {
    retval = 1;
    drmFreeVersion(version);
  }

  close(fd);
  return retval;
}

// drmCheckModesettingSupported
// file ../xf86drmMode.c line 734
extern signed int drmCheckModesettingSupported(const char *busid)
{
  char pci_dev_dir[1024l];
  signed int domain;
  signed int bus;
  signed int dev;
  signed int func;
  struct __dirstream *sysdir;
  struct dirent *dent;
  signed int found = 0;
  signed int ret;
  ret=sscanf(busid, "pci:%04x:%02x:%02x.%d", &domain, &bus, &dev, &func);
  if(!(ret == 4))
    return -22;

  else
  {
    sprintf(pci_dev_dir, "/sys/bus/pci/devices/%04x:%02x:%02x.%d/drm", domain, bus, dev, func);
    sysdir=opendir(pci_dev_dir);
    if(!(sysdir == ((struct __dirstream *)NULL)))
    {
      dent=readdir(sysdir);
      while(!(dent == ((struct dirent *)NULL)))
      {
        signed int return_value_strncmp_1;
        return_value_strncmp_1=strncmp(dent->d_name, "controlD", (unsigned long int)8);
        if(return_value_strncmp_1 == 0)
        {
          found = 1;
          break;
        }

        dent=readdir(sysdir);
      }
      closedir(sysdir);
      if(found == 0)
        goto __CPROVER_DUMP_L5;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      sprintf(pci_dev_dir, "/sys/bus/pci/devices/%04x:%02x:%02x.%d/", domain, bus, dev, func);
      sysdir=opendir(pci_dev_dir);
      if(sysdir == ((struct __dirstream *)NULL))
        return -22;

      else
      {
        dent=readdir(sysdir);
        while(!(dent == ((struct dirent *)NULL)))
        {
          signed int return_value_strncmp_2;
          return_value_strncmp_2=strncmp(dent->d_name, "drm:controlD", (unsigned long int)12);
          if(return_value_strncmp_2 == 0)
          {
            found = 1;
            break;
          }

          dent=readdir(sysdir);
        }
        closedir(sysdir);
        if(!(found == 0))
          return 0;

        else
          return -38;
      }
    }
  }
}

// drmClose
// file ../../../xf86drm.h line 573
extern signed int drmClose(signed int fd)
{
  unsigned long int key;
  key=drmGetKeyFromFd(fd);
  struct drmHashEntry *entry;
  entry=drmGetEntry(fd);
  drmHashDestroy(entry->tagTable);
  entry->fd = 0;
  entry->f = (void (*)(signed int, void *, void *))(void *)0;
  entry->tagTable = (void *)0;
  drmHashDelete(drmHashTable, key);
  drmFree((void *)entry);
  signed int return_value_close_1;
  return_value_close_1=close(fd);
  return return_value_close_1;
}

// drmCloseOnce
// file ../xf86drm.c line 2654
extern void drmCloseOnce(signed int fd)
{
  signed int i = 0;
  for( ; !(i >= nr_fds); i = i + 1)
    if(fd == connection[(signed long int)i].fd)
    {
      connection[(signed long int)i].refcount = connection[(signed long int)i].refcount - 1;
      if(connection[(signed long int)i].refcount == 0)
      {
        drmClose(connection[(signed long int)i].fd);
        free((void *)connection[(signed long int)i].BusID);
        nr_fds = nr_fds - 1;
        if(!(i >= nr_fds))
          connection[(signed long int)i] = connection[(signed long int)nr_fds];

        goto __CPROVER_DUMP_L5;
      }

    }


__CPROVER_DUMP_L5:
  ;
}

// drmCommandNone
// file ../xf86drm.c line 2506
extern signed int drmCommandNone(signed int fd, unsigned long int drmCommandIndex)
{
  unsigned long int request = (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8)) | (unsigned long int)0x40 + drmCommandIndex << 0 | (unsigned long int)(0 << 0 + 8 + 8);
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, request, (void *)0);
  if(!(return_value_drmIoctl_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  return 0;
}

// drmCommandRead
// file ../xf86drm.c line 2533
extern signed int drmCommandRead(signed int fd, unsigned long int drmCommandIndex, void *data, unsigned long int size)
{
  unsigned long int request = (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8)) | (unsigned long int)0x40 + drmCommandIndex << 0 | size << 0 + 8 + 8;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, request, data);
  if(!(return_value_drmIoctl_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  return 0;
}

// drmCommandWrite
// file ../../xf86drm.h line 594
extern signed int drmCommandWrite(signed int fd, unsigned long int drmCommandIndex, void *data, unsigned long int size)
{
  unsigned long int request = (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8)) | (unsigned long int)0x40 + drmCommandIndex << 0 | size << 0 + 8 + 8;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, request, data);
  if(!(return_value_drmIoctl_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  return 0;
}

// drmCommandWriteRead
// file ../../xf86drm.h line 596
extern signed int drmCommandWriteRead(signed int fd, unsigned long int drmCommandIndex, void *data, unsigned long int size)
{
  unsigned long int request = (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8)) | (unsigned long int)0x40 + drmCommandIndex << 0 | size << 0 + 8 + 8;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, request, data);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmCompareBusInfo
// file ../xf86drm.c line 2904
static signed int drmCompareBusInfo(struct _drmDevice *a, struct _drmDevice *b)
{
  signed int return_value_memcmp_1;
  if(a == ((struct _drmDevice *)NULL) || b == ((struct _drmDevice *)NULL))
    return -1;

  else
    if(!(a->bustype == b->bustype))
      return -1;

    else
    {
      if(a->bustype == 0)
      {
        return_value_memcmp_1=memcmp((const void *)a->businfo.pci, (const void *)b->businfo.pci, sizeof(struct _drmPciBusInfo) /*6ul*/ );
        return return_value_memcmp_1;
      }

      goto __CPROVER_DUMP_L5;

    __CPROVER_DUMP_L5:
      ;
      return -1;
    }
}

// drmCompareBusInfo_link1
// file ../xf86drm.c line 2904
static signed int drmCompareBusInfo_link1(struct _drmDevice *a_link1, struct _drmDevice *b_link1)
{
  signed int return_value_memcmp_1_link1;
  if(a_link1 == ((struct _drmDevice *)NULL) || b_link1 == ((struct _drmDevice *)NULL))
    return -1;

  else
    if(!(a_link1->bustype == b_link1->bustype))
      return -1;

    else
    {
      if(a_link1->bustype == 0)
      {
        return_value_memcmp_1_link1=memcmp((const void *)a_link1->businfo.pci, (const void *)b_link1->businfo.pci, sizeof(struct _drmPciBusInfo) /*6ul*/ );
        return return_value_memcmp_1_link1;
      }

      goto __CPROVER_DUMP_L5;

    __CPROVER_DUMP_L5:
      ;
      return -1;
    }
}

// drmCopyVersion
// file ../xf86drm.c line 816
static void drmCopyVersion(struct _drmVersion *d, const struct drm_version *s)
{
  d->version_major = s->version_major;
  d->version_minor = s->version_minor;
  d->version_patchlevel = s->version_patchlevel;
  d->name_len = (signed int)s->name_len;
  d->name=strdup(s->name);
  d->date_len = (signed int)s->date_len;
  d->date=strdup(s->date);
  d->desc_len = (signed int)s->desc_len;
  d->desc=strdup(s->desc);
}

// drmCopyVersion_link1
// file ../xf86drm.c line 816
static void drmCopyVersion_link1(struct _drmVersion *d_link1, const struct drm_version *s_link1)
{
  d_link1->version_major = s_link1->version_major;
  d_link1->version_minor = s_link1->version_minor;
  d_link1->version_patchlevel = s_link1->version_patchlevel;
  d_link1->name_len = (signed int)s_link1->name_len;
  d_link1->name=strdup(s_link1->name);
  d_link1->date_len = (signed int)s_link1->date_len;
  d_link1->date=strdup(s_link1->date);
  d_link1->desc_len = (signed int)s_link1->desc_len;
  d_link1->desc=strdup(s_link1->desc);
}

// drmCreateContext
// file ../xf86drm.c line 1549
extern signed int drmCreateContext(signed int fd, unsigned int *handle)
{
  struct drm_ctx ctx;
  memset((void *)&ctx, 0, sizeof(struct drm_ctx) /*8ul*/ );
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x20 << 0)) | sizeof(struct drm_ctx) /*8ul*/  << 0 + 8 + 8, (void *)&ctx);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    *handle = ctx.handle;
    return 0;
  }
}

// drmCreateDrawable
// file ../xf86drm.c line 1637
extern signed int drmCreateDrawable(signed int fd, unsigned int *handle)
{
  struct drm_draw draw;
  memset((void *)&draw, 0, sizeof(struct drm_draw) /*4ul*/ );
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x27 << 0)) | sizeof(struct drm_draw) /*4ul*/  << 0 + 8 + 8, (void *)&draw);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    *handle = draw.handle;
    return 0;
  }
}

// drmCtlInstHandler
// file ../xf86drm.c line 2158
extern signed int drmCtlInstHandler(signed int fd, signed int irq)
{
  struct drm_control ctl;
  memset((void *)&ctl, 0, sizeof(struct drm_control) /*8ul*/ );
  ctl.func = (enum anonymous_23)DRM_INST_HANDLER;
  ctl.irq = irq;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x14 << 0)) | sizeof(struct drm_control) /*8ul*/  << 0 + 8 + 8, (void *)&ctl);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmCtlUninstHandler
// file ../xf86drm.c line 2182
extern signed int drmCtlUninstHandler(signed int fd)
{
  struct drm_control ctl;
  memset((void *)&ctl, 0, sizeof(struct drm_control) /*8ul*/ );
  ctl.func = (enum anonymous_23)DRM_UNINST_HANDLER;
  ctl.irq = 0;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x14 << 0)) | sizeof(struct drm_control) /*8ul*/  << 0 + 8 + 8, (void *)&ctl);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmDMA
// file ../xf86drm.c line 1410
extern signed int drmDMA(signed int fd, struct _drmDMAReq *request)
{
  struct drm_dma dma;
  signed int ret;
  signed int i = 0;
  dma.context = (signed int)request->context;
  dma.send_count = request->send_count;
  dma.send_indices = request->send_list;
  dma.send_sizes = request->send_sizes;
  dma.flags = (enum drm_dma_flags)request->flags;
  dma.request_count = request->request_count;
  dma.request_size = request->request_size;
  dma.request_indices = request->request_list;
  dma.request_sizes = request->request_sizes;
  dma.granted_count = 0;
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  _Bool tmp_if_expr_4;
  signed int tmp_post_3;
  do
  {
    ret=ioctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x29 << 0)) | sizeof(struct drm_dma) /*64ul*/  << 0 + 8 + 8, &dma);
    if(!(ret == 0))
    {
      return_value___errno_location_1=__errno_location();
      tmp_if_expr_2 = *return_value___errno_location_1 == 11 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      tmp_post_3 = i;
      i = i + 1;
      tmp_if_expr_4 = tmp_post_3 < 16 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
  }
  while(tmp_if_expr_4);
  if(ret == 0)
  {
    request->granted_count = dma.granted_count;
    return 0;
  }

  else
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    return -(*return_value___errno_location_5);
  }
}

// drmDebugPrint
// file ../xf86drm.c line 123
static signed int drmDebugPrint(const char *format, void **ap)
{
  signed int return_value_vfprintf_1;
  return_value_vfprintf_1=vfprintf(stderr, format, ap);
  return return_value_vfprintf_1;
}

// drmDebugPrint_link1
// file ../xf86drm.c line 123
static signed int drmDebugPrint_link1(const char *format_link1, void **ap_link1)
{
  signed int return_value_vfprintf_1_link1;
  return_value_vfprintf_1_link1=vfprintf(stderr, format_link1, ap_link1);
  return return_value_vfprintf_1_link1;
}

// drmDelContextTag
// file ../xf86drm.c line 2249
extern signed int drmDelContextTag(signed int fd, unsigned int context)
{
  struct drmHashEntry *entry;
  entry=drmGetEntry(fd);
  signed int return_value_drmHashDelete_1;
  return_value_drmHashDelete_1=drmHashDelete(entry->tagTable, (unsigned long int)context);
  return return_value_drmHashDelete_1;
}

// drmDestroyContext
// file ../xf86drm.c line 1626
extern signed int drmDestroyContext(signed int fd, unsigned int handle)
{
  struct drm_ctx ctx;
  memset((void *)&ctx, 0, sizeof(struct drm_ctx) /*8ul*/ );
  ctx.handle = handle;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x21 << 0)) | sizeof(struct drm_ctx) /*8ul*/  << 0 + 8 + 8, (void *)&ctx);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmDestroyDrawable
// file ../xf86drm.c line 1648
extern signed int drmDestroyDrawable(signed int fd, unsigned int handle)
{
  struct drm_draw draw;
  memset((void *)&draw, 0, sizeof(struct drm_draw) /*4ul*/ );
  draw.handle = handle;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x28 << 0)) | sizeof(struct drm_draw) /*4ul*/  << 0 + 8 + 8, (void *)&draw);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmDropMaster
// file ../xf86drm.c line 2678
extern signed int drmDropMaster(signed int fd)
{
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x1f << 0) | (unsigned int)(0 << 0 + 8 + 8)), (void *)0);
  return return_value_drmIoctl_1;
}

// drmError
// file ../xf86drm.c line 2121
extern signed int drmError(signed int err, const char *label)
{
  if(!(err == -1001))
  {
    if(err == -1002)
      goto __CPROVER_DUMP_L2;

    if(err == -1003)
      goto __CPROVER_DUMP_L3;

    if(err == -1004)
      goto __CPROVER_DUMP_L4;

  }

  else
  {
    fprintf(stderr, "%s: no device\n", label);
    goto __CPROVER_DUMP_L7;

  __CPROVER_DUMP_L2:
    ;
    fprintf(stderr, "%s: no access\n", label);
    goto __CPROVER_DUMP_L7;

  __CPROVER_DUMP_L3:
    ;
    fprintf(stderr, "%s: not root\n", label);
    goto __CPROVER_DUMP_L7;

  __CPROVER_DUMP_L4:
    ;
    fprintf(stderr, "%s: invalid args\n", label);
    goto __CPROVER_DUMP_L7;
  }
  if(!(err >= 0))
    err = -err;

  char *return_value_strerror_1;
  return_value_strerror_1=strerror(err);
  fprintf(stderr, "%s: error %d (%s)\n", label, err, return_value_strerror_1);
  goto __CPROVER_DUMP_L7;

__CPROVER_DUMP_L7:
  ;
  return 1;
}

// drmFinish
// file ../xf86drm.c line 2194
extern signed int drmFinish(signed int fd, signed int context, enum anonymous_13 flags)
{
  struct drm_lock lock;
  memset((void *)&lock, 0, sizeof(struct drm_lock) /*8ul*/ );
  lock.context = context;
  if(!((DRM_LOCK_READY & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_READY;

  if(!((DRM_LOCK_QUIESCENT & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_QUIESCENT;

  if(!((DRM_LOCK_FLUSH & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_FLUSH;

  if(!((DRM_LOCK_FLUSH_ALL & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_FLUSH_ALL;

  if(!((DRM_HALT_ALL_QUEUES & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_HALT_ALL_QUEUES;

  if(!((DRM_HALT_CUR_QUEUES & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_HALT_CUR_QUEUES;

  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x2c << 0)) | sizeof(struct drm_lock) /*8ul*/  << 0 + 8 + 8, (void *)&lock);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmFoldDuplicatedDevices
// file ../xf86drm.c line 3052
static void drmFoldDuplicatedDevices(struct _drmDevice **local_devices, signed int count)
{
  signed int node_type;
  signed int i;
  signed int j;
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= count); j = j + 1)
    {
      signed int return_value_drmCompareBusInfo_3;
      return_value_drmCompareBusInfo_3=drmCompareBusInfo(local_devices[(signed long int)i], local_devices[(signed long int)j]);
      if(return_value_drmCompareBusInfo_3 == 0)
      {
        local_devices[(signed long int)i]->available_nodes = local_devices[(signed long int)i]->available_nodes | local_devices[(signed long int)j]->available_nodes;
        double return_value_log2_1;
        return_value_log2_1=log2((double)local_devices[(signed long int)j]->available_nodes);
        node_type = (signed int)return_value_log2_1;
        signed int return_value_drmGetMaxNodeName_2;
        return_value_drmGetMaxNodeName_2=drmGetMaxNodeName();
        memcpy((void *)local_devices[(signed long int)i]->nodes[(signed long int)node_type], (const void *)local_devices[(signed long int)j]->nodes[(signed long int)node_type], (unsigned long int)return_value_drmGetMaxNodeName_2);
        drmFreeDevice(&local_devices[(signed long int)j]);
      }

    }
  }
}

// drmFoldDuplicatedDevices_link1
// file ../xf86drm.c line 3052
static void drmFoldDuplicatedDevices_link1(struct _drmDevice **local_devices_link1, signed int count_link1)
{
  signed int node_type_link1;
  signed int i_link1;
  signed int j_link1;
  i_link1 = 0;
  for( ; !(i_link1 >= count_link1); i_link1 = i_link1 + 1)
  {
    j_link1 = i_link1 + 1;
    for( ; !(j_link1 >= count_link1); j_link1 = j_link1 + 1)
    {
      signed int return_value_drmCompareBusInfo_3_link1;
      return_value_drmCompareBusInfo_3_link1=drmCompareBusInfo_link1(local_devices_link1[(signed long int)i_link1], local_devices_link1[(signed long int)j_link1]);
      if(return_value_drmCompareBusInfo_3_link1 == 0)
      {
        local_devices_link1[(signed long int)i_link1]->available_nodes = local_devices_link1[(signed long int)i_link1]->available_nodes | local_devices_link1[(signed long int)j_link1]->available_nodes;
        double return_value_log2_1_link1;
        return_value_log2_1_link1=log2((double)local_devices_link1[(signed long int)j_link1]->available_nodes);
        node_type_link1 = (signed int)return_value_log2_1_link1;
        signed int return_value_drmGetMaxNodeName_2_link1;
        return_value_drmGetMaxNodeName_2_link1=drmGetMaxNodeName_link1();
        memcpy((void *)local_devices_link1[(signed long int)i_link1]->nodes[(signed long int)node_type_link1], (const void *)local_devices_link1[(signed long int)j_link1]->nodes[(signed long int)node_type_link1], (unsigned long int)return_value_drmGetMaxNodeName_2_link1);
        drmFreeDevice(&local_devices_link1[(signed long int)j_link1]);
      }

    }
  }
}

// drmFree
// file ../xf86drm.c line 158
extern void drmFree(void *pt)
{
  free(pt);
}

// drmFreeBufs
// file ../xf86drm.c line 1198
extern signed int drmFreeBufs(signed int fd, signed int count, signed int *list)
{
  struct drm_buf_free request;
  memset((void *)&request, 0, sizeof(struct drm_buf_free) /*16ul*/ );
  request.count = count;
  request.list = list;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x1a << 0)) | sizeof(struct drm_buf_free) /*16ul*/  << 0 + 8 + 8, (void *)&request);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmFreeBusid
// file ../xf86drm.c line 951
extern void drmFreeBusid(const char *busid)
{
  drmFree((void *)busid);
}

// drmFreeDevice
// file ../xf86drm.c line 2979
extern void drmFreeDevice(struct _drmDevice **device)
{
  if(!(device == ((struct _drmDevice **)NULL)))
  {
    free((void *)*device);
    *device = (struct _drmDevice *)(void *)0;
  }

}

// drmFreeDevices
// file ../xf86drm.c line 2988
extern void drmFreeDevices(struct _drmDevice **devices, signed int count)
{
  signed int i;
  _Bool tmp_if_expr_1;
  if(!(devices == ((struct _drmDevice **)NULL)))
  {
    i = 0;
    do
    {
      if(!(i >= count))
        tmp_if_expr_1 = devices[(signed long int)i] != (struct _drmDevice *)(void *)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      drmFreeDevice(&devices[(signed long int)i]);
      i = i + 1;
    }
    while((_Bool)1);
  }

}

// drmFreeKernelVersion
// file ../xf86drm.c line 795
static void drmFreeKernelVersion(struct drm_version *v)
{
  if(!(v == ((struct drm_version *)NULL)))
  {
    drmFree((void *)v->name);
    drmFree((void *)v->date);
    drmFree((void *)v->desc);
    drmFree((void *)v);
  }

}

// drmFreeKernelVersion_link1
// file ../xf86drm.c line 795
static void drmFreeKernelVersion_link1(struct drm_version *v_link1)
{
  if(!(v_link1 == ((struct drm_version *)NULL)))
  {
    drmFree((void *)v_link1->name);
    drmFree((void *)v_link1->date);
    drmFree((void *)v_link1->desc);
    drmFree((void *)v_link1);
  }

}

// drmFreeReservedContextList
// file ../xf86drm.c line 1526
extern void drmFreeReservedContextList(unsigned int *pt)
{
  drmFree((void *)pt);
}

// drmFreeVersion
// file ../../../xf86drm.h line 577
extern void drmFreeVersion(struct _drmVersion *v)
{
  if(!(v == ((struct _drmVersion *)NULL)))
  {
    drmFree((void *)v->name);
    drmFree((void *)v->date);
    drmFree((void *)v->desc);
    drmFree((void *)v);
  }

}

// drmGetBufInfo
// file ../xf86drm.c line 1285
extern struct _drmBufInfo * drmGetBufInfo(signed int fd)
{
  struct drm_buf_info info;
  struct _drmBufInfo *retval;
  signed int i;
  memset((void *)&info, 0, sizeof(struct drm_buf_info) /*16ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x18 << 0)) | sizeof(struct drm_buf_info) /*16ul*/  << 0 + 8 + 8, (void *)&info);
  if(!(return_value_drmIoctl_1 == 0))
    return (struct _drmBufInfo *)(void *)0;

  else
  {
    if(!(info.count == 0))
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)info.count * sizeof(struct drm_buf_desc) /*32ul*/ ));
      info.list = (struct drm_buf_desc *)return_value_drmMalloc_2;
      if(info.list == ((struct drm_buf_desc *)NULL))
        return (struct _drmBufInfo *)(void *)0;

      signed int return_value_drmIoctl_3;
      return_value_drmIoctl_3=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x18 << 0)) | sizeof(struct drm_buf_info) /*16ul*/  << 0 + 8 + 8, (void *)&info);
      if(!(return_value_drmIoctl_3 == 0))
      {
        drmFree((void *)info.list);
        return (struct _drmBufInfo *)(void *)0;
      }

      void *return_value_drmMalloc_4;
      return_value_drmMalloc_4=drmMalloc((signed int)sizeof(struct _drmBufInfo) /*16ul*/ );
      retval = (struct _drmBufInfo *)return_value_drmMalloc_4;
      retval->count = info.count;
      void *return_value_drmMalloc_5;
      return_value_drmMalloc_5=drmMalloc((signed int)((unsigned long int)info.count * sizeof(struct _drmBufDesc) /*16ul*/ ));
      retval->list = (struct _drmBufDesc *)return_value_drmMalloc_5;
      i = 0;
      for( ; !(i >= info.count); i = i + 1)
      {
        (retval->list + (signed long int)i)->count = (info.list + (signed long int)i)->count;
        (retval->list + (signed long int)i)->size = (info.list + (signed long int)i)->size;
        (retval->list + (signed long int)i)->low_mark = (info.list + (signed long int)i)->low_mark;
        (retval->list + (signed long int)i)->high_mark = (info.list + (signed long int)i)->high_mark;
      }
      drmFree((void *)info.list);
      return retval;
    }

    return (struct _drmBufInfo *)(void *)0;
  }
}

// drmGetBusid
// file ../xf86drm.c line 969
extern char * drmGetBusid(signed int fd)
{
  struct drm_unique u;
  memset((void *)&u, 0, sizeof(struct drm_unique) /*16ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x01 << 0)) | sizeof(struct drm_unique) /*16ul*/  << 0 + 8 + 8, (void *)&u);
  if(!(return_value_drmIoctl_1 == 0))
    return (char *)(void *)0;

  else
  {
    void *return_value_drmMalloc_2;
    return_value_drmMalloc_2=drmMalloc((signed int)(u.unique_len + (unsigned long int)1));
    u.unique = (char *)return_value_drmMalloc_2;
    signed int return_value_drmIoctl_3;
    return_value_drmIoctl_3=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x01 << 0)) | sizeof(struct drm_unique) /*16ul*/  << 0 + 8 + 8, (void *)&u);
    if(!(return_value_drmIoctl_3 == 0))
      return (char *)(void *)0;

    else
    {
      u.unique[(signed long int)u.unique_len] = (char)0;
      return u.unique;
    }
  }
}

// drmGetCap
// file ../xf86drm.c line 916
extern signed int drmGetCap(signed int fd, unsigned long int capability, unsigned long int *value)
{
  struct drm_get_cap cap;
  signed int ret;
  memset((void *)&cap, 0, sizeof(struct drm_get_cap) /*16ul*/ );
  cap.capability = capability;
  ret=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x0c << 0)) | sizeof(struct drm_get_cap) /*16ul*/  << 0 + 8 + 8, (void *)&cap);
  if(!(ret == 0))
    return ret;

  else
  {
    *value = cap.value;
    return 0;
  }
}

// drmGetClient
// file ../xf86drm.c line 2316
extern signed int drmGetClient(signed int fd, signed int idx, signed int *auth, signed int *pid, signed int *uid, unsigned long int *magic, unsigned long int *iocs)
{
  struct drm_client client;
  memset((void *)&client, 0, sizeof(struct drm_client) /*40ul*/ );
  client.idx = idx;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x05 << 0)) | sizeof(struct drm_client) /*40ul*/  << 0 + 8 + 8, (void *)&client);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    *auth = client.auth;
    *pid = (signed int)client.pid;
    *uid = (signed int)client.uid;
    *magic = client.magic;
    *iocs = client.iocs;
    return 0;
  }
}

// drmGetContextFlags
// file ../xf86drm.c line 1592
extern signed int drmGetContextFlags(signed int fd, unsigned int context, enum anonymous_9 *flags)
{
  struct drm_ctx ctx;
  memset((void *)&ctx, 0, sizeof(struct drm_ctx) /*8ul*/ );
  ctx.handle = context;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x23 << 0)) | sizeof(struct drm_ctx) /*8ul*/  << 0 + 8 + 8, (void *)&ctx);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    *flags = (enum anonymous_9)0;
    if(!((_DRM_CONTEXT_PRESERVED & (signed int)ctx.flags) == 0))
      *flags = *flags | (enum anonymous_9)DRM_CONTEXT_PRESERVED;

    if(!((_DRM_CONTEXT_2DONLY & (signed int)ctx.flags) == 0))
      *flags = *flags | (enum anonymous_9)DRM_CONTEXT_2DONLY;

    return 0;
  }
}

// drmGetContextPrivateMapping
// file ../xf86drm.c line 2281
extern signed int drmGetContextPrivateMapping(signed int fd, unsigned int ctx_id, unsigned int *handle)
{
  struct drm_ctx_priv_map map;
  memset((void *)&map, 0, sizeof(struct drm_ctx_priv_map) /*16ul*/ );
  map.ctx_id = ctx_id;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x1d << 0)) | sizeof(struct drm_ctx_priv_map) /*16ul*/  << 0 + 8 + 8, (void *)&map);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    if(!(handle == ((unsigned int *)NULL)))
      *handle = (unsigned int)(unsigned long int)map.handle;

    return 0;
  }
}

// drmGetContextTag
// file ../xf86drm.c line 2256
extern void * drmGetContextTag(signed int fd, unsigned int context)
{
  struct drmHashEntry *entry;
  entry=drmGetEntry(fd);
  void *value;
  signed int return_value_drmHashLookup_1;
  return_value_drmHashLookup_1=drmHashLookup(entry->tagTable, (unsigned long int)context, &value);
  if(!(return_value_drmHashLookup_1 == 0))
    return (void *)0;

  else
    return value;
}

// drmGetDevice
// file ../xf86drm.c line 3078
extern signed int drmGetDevice(signed int fd, struct _drmDevice **device)
{
  struct _drmDevice **local_devices;
  struct _drmDevice *d;
  struct __dirstream *sysdir;
  struct dirent *dent;
  struct stat sbuf;
  char node[4097l];
  signed int node_type;
  signed int subsystem_type;
  signed int maj;
  signed int min;
  signed int ret;
  signed int i;
  signed int node_count;
  signed int max_count = 16;
  signed int *return_value___errno_location_1;
  _Bool tmp_if_expr_12;
  if(device == ((struct _drmDevice **)NULL) || fd == -1)
    return -22;

  else
  {
    signed int return_value_fstat_2;
    return_value_fstat_2=fstat(fd, &sbuf);
    if(!(return_value_fstat_2 == 0))
    {
      return_value___errno_location_1=__errno_location();
      return -(*return_value___errno_location_1);
    }

    else
    {
      unsigned int return_value_gnu_dev_major_3;
      return_value_gnu_dev_major_3=gnu_dev_major(sbuf.st_rdev);
      maj = (signed int)return_value_gnu_dev_major_3;
      unsigned int return_value_gnu_dev_minor_4;
      return_value_gnu_dev_minor_4=gnu_dev_minor(sbuf.st_rdev);
      min = (signed int)return_value_gnu_dev_minor_4;
      if(!((61440u & sbuf.st_mode) == 8192u) || !(maj == 226))
        return -22;

      else
      {
        subsystem_type=drmParseSubsystemType(maj, min);
        void *return_value_calloc_5;
        return_value_calloc_5=calloc((unsigned long int)max_count, sizeof(struct _drmDevice *) /*8ul*/ );
        local_devices = (struct _drmDevice **)return_value_calloc_5;
        if(local_devices == ((struct _drmDevice **)NULL))
          return -12;

        else
        {
          sysdir=opendir("/dev/dri");
          if(sysdir == ((struct __dirstream *)NULL))
          {
            signed int *return_value___errno_location_6;
            return_value___errno_location_6=__errno_location();
            ret = -(*return_value___errno_location_6);
            goto free_locals;
          }

          i = 0;
          do
          {
            dent=readdir(sysdir);
            if(dent == ((struct dirent *)NULL))
              break;

            node_type=drmGetNodeType(dent->d_name);
            if(node_type >= 0)
            {
              snprintf(node, (unsigned long int)4096, "%s/%s", (const void *)"/dev/dri", (const void *)dent->d_name);
              signed int return_value_stat_7;
              return_value_stat_7=stat(node, &sbuf);
              if(return_value_stat_7 == 0)
              {
                unsigned int return_value_gnu_dev_major_8;
                return_value_gnu_dev_major_8=gnu_dev_major(sbuf.st_rdev);
                maj = (signed int)return_value_gnu_dev_major_8;
                unsigned int return_value_gnu_dev_minor_9;
                return_value_gnu_dev_minor_9=gnu_dev_minor(sbuf.st_rdev);
                min = (signed int)return_value_gnu_dev_minor_9;
                if((61440u & sbuf.st_mode) == 8192u && maj == 226)
                {
                  signed int return_value_drmParseSubsystemType_10;
                  return_value_drmParseSubsystemType_10=drmParseSubsystemType(maj, min);
                  if(return_value_drmParseSubsystemType_10 == subsystem_type)
                  {
                    if(subsystem_type == 0)
                    {
                      ret=drmProcessPciDevice(&d, dent->d_name, node, node_type, maj, min, (_Bool)1);
                      if(!(ret == 0))
                        goto free_devices;

                      goto __CPROVER_DUMP_L11;
                    }

                    fprintf(stderr, "The subsystem type is not supported yet\n");
                    continue;

                  __CPROVER_DUMP_L11:
                    ;
                    if(i >= max_count)
                    {
                      struct _drmDevice **temp;
                      max_count = max_count + 16;
                      void *return_value_realloc_11;
                      return_value_realloc_11=realloc((void *)local_devices, (unsigned long int)max_count * sizeof(struct _drmDevice *) /*8ul*/ );
                      temp = (struct _drmDevice **)return_value_realloc_11;
                      if(temp == ((struct _drmDevice **)NULL))
                        goto free_devices;

                      local_devices = temp;
                    }

                    local_devices[(signed long int)i] = d;
                    i = i + 1;
                  }

                }

              }

            }

          }
          while((_Bool)1);
          node_count = i;
          drmFoldDuplicatedDevices(local_devices, node_count);
          *device = local_devices[(signed long int)0];
          i = 1;
          do
          {
            if(!(i >= node_count))
              tmp_if_expr_12 = local_devices[(signed long int)i] != ((struct _drmDevice *)NULL) ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_12 = (_Bool)0;
            if(!tmp_if_expr_12)
              break;

            drmFreeDevice(&local_devices[(signed long int)i]);
            i = i + 1;
          }
          while((_Bool)1);
          closedir(sysdir);
          free((void *)local_devices);
          return 0;

        free_devices:
          ;
          drmFreeDevices(local_devices, i);
          closedir(sysdir);

        free_locals:
          ;
          free((void *)local_devices);
          return ret;
        }
      }
    }
  }
}

// drmGetDeviceNameFromFd
// file ../xf86drm.c line 2683
extern char * drmGetDeviceNameFromFd(signed int fd)
{
  char name[128l];
  struct stat sbuf;
  unsigned long int d;
  signed int i;
  fstat(fd, &sbuf);
  d = sbuf.st_rdev;
  i = 0;
  for( ; !(i >= 16); i = i + 1)
  {
    snprintf(name, sizeof(char [128l]) /*128ul*/ , "%s/card%d", (const void *)"/dev/dri", i);
    signed int return_value_stat_1;
    return_value_stat_1=stat(name, &sbuf);
    if(return_value_stat_1 == 0)
    {
      if(sbuf.st_rdev == d)
        break;

    }

  }
  if(i == 16)
    return (char *)(void *)0;

  else
  {
    char *return_value_strdup_2;
    return_value_strdup_2=strdup(name);
    return return_value_strdup_2;
  }
}

// drmGetDevices
// file ../xf86drm.c line 3194
extern signed int drmGetDevices(struct _drmDevice **devices, signed int max_devices)
{
  struct _drmDevice **local_devices;
  struct _drmDevice *device;
  struct __dirstream *sysdir;
  struct dirent *dent;
  struct stat sbuf;
  char node[4097l];
  signed int node_type;
  signed int subsystem_type;
  signed int maj;
  signed int min;
  signed int ret;
  signed int i;
  signed int node_count;
  signed int device_count;
  signed int max_count = 16;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)max_count, sizeof(struct _drmDevice *) /*8ul*/ );
  local_devices = (struct _drmDevice **)return_value_calloc_1;
  _Bool tmp_if_expr_7;
  if(local_devices == ((struct _drmDevice **)NULL))
    return -12;

  else
  {
    sysdir=opendir("/dev/dri");
    if(sysdir == ((struct __dirstream *)NULL))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      ret = -(*return_value___errno_location_2);
      goto free_locals;
    }

    i = 0;
    do
    {
      dent=readdir(sysdir);
      if(dent == ((struct dirent *)NULL))
        break;

      node_type=drmGetNodeType(dent->d_name);
      if(node_type >= 0)
      {
        snprintf(node, (unsigned long int)4096, "%s/%s", (const void *)"/dev/dri", (const void *)dent->d_name);
        signed int return_value_stat_3;
        return_value_stat_3=stat(node, &sbuf);
        if(return_value_stat_3 == 0)
        {
          unsigned int return_value_gnu_dev_major_4;
          return_value_gnu_dev_major_4=gnu_dev_major(sbuf.st_rdev);
          maj = (signed int)return_value_gnu_dev_major_4;
          unsigned int return_value_gnu_dev_minor_5;
          return_value_gnu_dev_minor_5=gnu_dev_minor(sbuf.st_rdev);
          min = (signed int)return_value_gnu_dev_minor_5;
          if((61440u & sbuf.st_mode) == 8192u && maj == 226)
          {
            subsystem_type=drmParseSubsystemType(maj, min);
            if(subsystem_type >= 0)
            {
              if(subsystem_type == 0)
              {
                ret=drmProcessPciDevice(&device, dent->d_name, node, node_type, maj, min, devices != (struct _drmDevice **)(void *)0);
                if(!(ret == 0))
                  goto free_devices;

                goto __CPROVER_DUMP_L8;
              }

              fprintf(stderr, "The subsystem type is not supported yet\n");
              continue;

            __CPROVER_DUMP_L8:
              ;
              if(i >= max_count)
              {
                struct _drmDevice **temp;
                max_count = max_count + 16;
                void *return_value_realloc_6;
                return_value_realloc_6=realloc((void *)local_devices, (unsigned long int)max_count * sizeof(struct _drmDevice *) /*8ul*/ );
                temp = (struct _drmDevice **)return_value_realloc_6;
                if(temp == ((struct _drmDevice **)NULL))
                  goto free_devices;

                local_devices = temp;
              }

              local_devices[(signed long int)i] = device;
              i = i + 1;
            }

          }

        }

      }

    }
    while((_Bool)1);
    node_count = i;
    drmFoldDuplicatedDevices(local_devices, node_count);
    device_count = 0;
    i = 0;
    do
    {
      if(!(i >= node_count))
        tmp_if_expr_7 = local_devices[(signed long int)i] != ((struct _drmDevice *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_7 = (_Bool)0;
      if(!tmp_if_expr_7)
        break;

      if(!(devices == ((struct _drmDevice **)NULL)) && !(device_count >= max_devices))
        devices[(signed long int)device_count] = local_devices[(signed long int)i];

      else
        drmFreeDevice(&local_devices[(signed long int)i]);
      device_count = device_count + 1;
      i = i + 1;
    }
    while((_Bool)1);
    closedir(sysdir);
    free((void *)local_devices);
    return device_count;

  free_devices:
    ;
    drmFreeDevices(local_devices, i);
    closedir(sysdir);

  free_locals:
    ;
    free((void *)local_devices);
    return ret;
  }
}

// drmGetEntry
// file ../xf86drm.c line 186
extern struct drmHashEntry * drmGetEntry(signed int fd)
{
  unsigned long int key;
  key=drmGetKeyFromFd(fd);
  void *value;
  struct drmHashEntry *entry;
  if(drmHashTable == NULL)
    drmHashTable=drmHashCreate();

  signed int return_value_drmHashLookup_2;
  return_value_drmHashLookup_2=drmHashLookup(drmHashTable, key, &value);
  if(!(return_value_drmHashLookup_2 == 0))
  {
    void *return_value_drmMalloc_1;
    return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct drmHashEntry) /*24ul*/ );
    entry = (struct drmHashEntry *)return_value_drmMalloc_1;
    entry->fd = fd;
    entry->f = (void (*)(signed int, void *, void *))(void *)0;
    entry->tagTable=drmHashCreate();
    drmHashInsert(drmHashTable, key, (void *)entry);
  }

  else
    entry = (struct drmHashEntry *)value;
  return entry;
}

// drmGetHashTable
// file ../xf86drm.c line 148
extern void * drmGetHashTable(void)
{
  return drmHashTable;
}

// drmGetInterruptFromBusID
// file ../xf86drm.c line 2225
extern signed int drmGetInterruptFromBusID(signed int fd, signed int busnum, signed int devnum, signed int funcnum)
{
  struct drm_irq_busid p;
  memset((void *)&p, 0, sizeof(struct drm_irq_busid) /*16ul*/ );
  p.busnum = busnum;
  p.devnum = devnum;
  p.funcnum = funcnum;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x03 << 0)) | sizeof(struct drm_irq_busid) /*16ul*/  << 0 + 8 + 8, (void *)&p);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return p.irq;
}

// drmGetKeyFromFd
// file ../xf86drm.c line 177
static unsigned long int drmGetKeyFromFd(signed int fd)
{
  struct stat st;
  st.st_rdev = (unsigned long int)0;
  fstat(fd, &st);
  return st.st_rdev;
}

// drmGetKeyFromFd_link1
// file ../xf86drm.c line 177
static unsigned long int drmGetKeyFromFd_link1(signed int fd_link1)
{
  struct stat st_link1;
  st_link1.st_rdev = (unsigned long int)0;
  fstat(fd_link1, &st_link1);
  return st_link1.st_rdev;
}

// drmGetLibVersion
// file ../xf86drm.c line 895
extern struct _drmVersion * drmGetLibVersion(signed int fd)
{
  struct drm_version *version;
  void *return_value_drmMalloc_1;
  return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct drm_version) /*64ul*/ );
  version = (struct drm_version *)return_value_drmMalloc_1;
  version->version_major = 1;
  version->version_minor = 3;
  version->version_patchlevel = 0;
  return (struct _drmVersion *)version;
}

// drmGetLock
// file ../xf86drm.c line 1453
extern signed int drmGetLock(signed int fd, unsigned int context, enum anonymous_13 flags)
{
  struct drm_lock lock;
  memset((void *)&lock, 0, sizeof(struct drm_lock) /*8ul*/ );
  lock.context = (signed int)context;
  lock.flags = (enum drm_lock_flags)0;
  if(!((DRM_LOCK_READY & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_READY;

  if(!((DRM_LOCK_QUIESCENT & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_QUIESCENT;

  if(!((DRM_LOCK_FLUSH & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_FLUSH;

  if(!((DRM_LOCK_FLUSH_ALL & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_LOCK_FLUSH_ALL;

  if(!((DRM_HALT_ALL_QUEUES & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_HALT_ALL_QUEUES;

  if(!((DRM_HALT_CUR_QUEUES & (signed int)flags) == 0))
    lock.flags = lock.flags | (enum drm_lock_flags)_DRM_HALT_CUR_QUEUES;

  signed int return_value_drmIoctl_1;
  do
  {
    return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x2a << 0)) | sizeof(struct drm_lock) /*8ul*/  << 0 + 8 + 8, (void *)&lock);
    if(return_value_drmIoctl_1 == 0)
      break;

  }
  while((_Bool)1);
  return 0;
}

// drmGetMagic
// file ../xf86drm.c line 1012
extern signed int drmGetMagic(signed int fd, unsigned int *magic)
{
  struct drm_auth auth;
  memset((void *)&auth, 0, sizeof(struct drm_auth) /*4ul*/ );
  *magic = (unsigned int)0;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x02 << 0)) | sizeof(struct drm_auth) /*4ul*/  << 0 + 8 + 8, (void *)&auth);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    *magic = auth.magic;
    return 0;
  }
}

// drmGetMap
// file ../xf86drm.c line 2297
extern signed int drmGetMap(signed int fd, signed int idx, unsigned int *offset, unsigned int *size, enum anonymous_6 *type, enum anonymous_7 *flags, unsigned int *handle, signed int *mtrr)
{
  struct drm_map map;
  memset((void *)&map, 0, sizeof(struct drm_map) /*40ul*/ );
  map.offset = (unsigned long int)idx;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x04 << 0)) | sizeof(struct drm_map) /*40ul*/  << 0 + 8 + 8, (void *)&map);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    *offset = (unsigned int)map.offset;
    *size = (unsigned int)map.size;
    *type = (enum anonymous_6)map.type;
    *flags = (enum anonymous_7)map.flags;
    *handle = (unsigned int)(unsigned long int)map.handle;
    *mtrr = map.mtrr;
    return 0;
  }
}

// drmGetMaxNodeName
// file ../xf86drm.c line 2939
static signed int drmGetMaxNodeName(void)
{
  return (signed int)(sizeof(char [9l]) /*9ul*/  + (sizeof(char [5l]) /*5ul*/  > sizeof(char [9l]) /*9ul*/  ? (sizeof(char [5l]) /*5ul*/  > sizeof(char [8l]) /*8ul*/  ? sizeof(char [5l]) /*5ul*/  : sizeof(char [8l]) /*8ul*/ ) : (sizeof(char [9l]) /*9ul*/  > sizeof(char [8l]) /*8ul*/  ? sizeof(char [9l]) /*9ul*/  : sizeof(char [8l]) /*8ul*/ )) + (unsigned long int)3);
}

// drmGetMaxNodeName_link1
// file ../xf86drm.c line 2939
static signed int drmGetMaxNodeName_link1(void)
{
  return (signed int)(sizeof(char [9l]) /*9ul*/  + (sizeof(char [5l]) /*5ul*/  > sizeof(char [9l]) /*9ul*/  ? (sizeof(char [5l]) /*5ul*/  > sizeof(char [8l]) /*8ul*/  ? sizeof(char [5l]) /*5ul*/  : sizeof(char [8l]) /*8ul*/ ) : (sizeof(char [9l]) /*9ul*/  > sizeof(char [8l]) /*8ul*/  ? sizeof(char [9l]) /*9ul*/  : sizeof(char [8l]) /*8ul*/ )) + (unsigned long int)3);
}

// drmGetMinorBase
// file ../xf86drm.c line 501
static signed int drmGetMinorBase(signed int type)
{
  switch(type)
  {
    case 0:
      return 0;
    case 1:
      return 64;
    case 2:
      return 128;
    default:
      return -1;
  }
}

// drmGetMinorBase_link1
// file ../xf86drm.c line 501
static signed int drmGetMinorBase_link1(signed int type_link1)
{
  switch(type_link1)
  {
    case 0:
      return 0;
    case 1:
      return 64;
    case 2:
      return 128;
    default:
      return -1;
  }
}

// drmGetMinorName
// file ../xf86drm.c line 532
static const char * drmGetMinorName(signed int type)
{
  switch(type)
  {
    case 0:
      return "card";
    case 1:
      return "controlD";
    case 2:
      return "renderD";
    default:
      return (const char *)(void *)0;
  }
}

// drmGetMinorName_link1
// file ../xf86drm.c line 532
static const char * drmGetMinorName_link1(signed int type_link1)
{
  switch(type_link1)
  {
    case 0:
      return "card";
    case 1:
      return "controlD";
    case 2:
      return "renderD";
    default:
      return (const char *)(void *)0;
  }
}

// drmGetMinorNameForFD
// file ../xf86drm.c line 2763
static char * drmGetMinorNameForFD(signed int fd, signed int type)
{
  struct __dirstream *sysdir;
  struct dirent *pent;
  struct dirent *ent;
  struct stat sbuf;
  const char *name;
  name=drmGetMinorName(type);
  signed int len;
  char dev_name[64l];
  char buf[64l];
  signed long int name_max;
  signed int maj;
  signed int min;
  void *return_value_malloc_6;
  signed int return_value_readdir_r_7;
  if(name == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(name);
    len = (signed int)return_value_strlen_1;
    signed int return_value_fstat_2;
    return_value_fstat_2=fstat(fd, &sbuf);
    if(!(return_value_fstat_2 == 0))
      return (char *)(void *)0;

    else
    {
      unsigned int return_value_gnu_dev_major_3;
      return_value_gnu_dev_major_3=gnu_dev_major(sbuf.st_rdev);
      maj = (signed int)return_value_gnu_dev_major_3;
      unsigned int return_value_gnu_dev_minor_4;
      return_value_gnu_dev_minor_4=gnu_dev_minor(sbuf.st_rdev);
      min = (signed int)return_value_gnu_dev_minor_4;
      if(!((61440u & sbuf.st_mode) == 8192u) || !(maj == 226))
        return (char *)(void *)0;

      else
      {
        snprintf(buf, sizeof(char [64l]) /*64ul*/ , "/sys/dev/char/%d:%d/device/drm", maj, min);
        sysdir=opendir(buf);
        if(sysdir == ((struct __dirstream *)NULL))
          return (char *)(void *)0;

        else
        {
          signed int return_value_dirfd_5;
          return_value_dirfd_5=dirfd(sysdir);
          name_max=fpathconf(return_value_dirfd_5, 3);
          if(!(name_max == -1l))
          {
            return_value_malloc_6=malloc(19ul + (unsigned long int)name_max + (unsigned long int)1);
            pent = (struct dirent *)return_value_malloc_6;
            if(!(pent == ((struct dirent *)NULL)))
            {
              do
              {
                return_value_readdir_r_7=readdir_r(sysdir, pent, &ent);
                if(!(return_value_readdir_r_7 == 0))
                  break;

                if(ent == ((struct dirent *)NULL))
                  break;

                signed int return_value_strncmp_9;
                return_value_strncmp_9=strncmp(ent->d_name, name, (unsigned long int)len);
                if(return_value_strncmp_9 == 0)
                {
                  snprintf(dev_name, sizeof(char [64l]) /*64ul*/ , "/dev/dri/%s", (const void *)ent->d_name);
                  free((void *)pent);
                  closedir(sysdir);
                  char *return_value_strdup_8;
                  return_value_strdup_8=strdup(dev_name);
                  return return_value_strdup_8;
                }

              }
              while((_Bool)1);
              free((void *)pent);
            }

          }


        out_close_dir:
          ;
          closedir(sysdir);
          return (char *)(void *)0;
        }
      }
    }
  }
}

// drmGetMinorNameForFD_link1
// file ../xf86drm.c line 2763
static char * drmGetMinorNameForFD_link1(signed int fd_link1, signed int type_link1)
{
  struct __dirstream *sysdir_link1;
  struct dirent *pent_link1;
  struct dirent *ent_link1;
  struct stat sbuf_link1;
  const char *name_link1;
  name_link1=drmGetMinorName_link1(type_link1);
  signed int len_link1;
  char dev_name_link1[64l];
  char buf_link1[64l];
  signed long int name_max_link1;
  signed int maj_link1;
  signed int min_link1;
  void *return_value_malloc_6_link1;
  signed int return_value_readdir_r_7_link1;
  if(name_link1 == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen_1_link1;
    return_value_strlen_1_link1=strlen(name_link1);
    len_link1 = (signed int)return_value_strlen_1_link1;
    signed int return_value_fstat_2_link1;
    return_value_fstat_2_link1=fstat(fd_link1, &sbuf_link1);
    if(!(return_value_fstat_2_link1 == 0))
      return (char *)(void *)0;

    else
    {
      unsigned int return_value_gnu_dev_major_3_link1;
      return_value_gnu_dev_major_3_link1=gnu_dev_major(sbuf_link1.st_rdev);
      maj_link1 = (signed int)return_value_gnu_dev_major_3_link1;
      unsigned int return_value_gnu_dev_minor_4_link1;
      return_value_gnu_dev_minor_4_link1=gnu_dev_minor(sbuf_link1.st_rdev);
      min_link1 = (signed int)return_value_gnu_dev_minor_4_link1;
      if(!((61440u & sbuf_link1.st_mode) == 8192u) || !(maj_link1 == 226))
        return (char *)(void *)0;

      else
      {
        snprintf(buf_link1, sizeof(char [64l]) /*64ul*/ , "/sys/dev/char/%d:%d/device/drm", maj_link1, min_link1);
        sysdir_link1=opendir(buf_link1);
        if(sysdir_link1 == ((struct __dirstream *)NULL))
          return (char *)(void *)0;

        else
        {
          signed int return_value_dirfd_5_link1;
          return_value_dirfd_5_link1=dirfd(sysdir_link1);
          name_max_link1=fpathconf(return_value_dirfd_5_link1, 3);
          if(!(name_max_link1 == -1l))
          {
            return_value_malloc_6_link1=malloc(19ul + (unsigned long int)name_max_link1 + (unsigned long int)1);
            pent_link1 = (struct dirent *)return_value_malloc_6_link1;
            if(!(pent_link1 == ((struct dirent *)NULL)))
            {
              do
              {
                return_value_readdir_r_7_link1=readdir_r(sysdir_link1, pent_link1, &ent_link1);
                if(!(return_value_readdir_r_7_link1 == 0))
                  break;

                if(ent_link1 == ((struct dirent *)NULL))
                  break;

                signed int return_value_strncmp_9_link1;
                return_value_strncmp_9_link1=strncmp(ent_link1->d_name, name_link1, (unsigned long int)len_link1);
                if(return_value_strncmp_9_link1 == 0)
                {
                  snprintf(dev_name_link1, sizeof(char [64l]) /*64ul*/ , "/dev/dri/%s", (const void *)ent_link1->d_name);
                  free((void *)pent_link1);
                  closedir(sysdir_link1);
                  char *return_value_strdup_8_link1;
                  return_value_strdup_8_link1=strdup(dev_name_link1);
                  return return_value_strdup_8_link1;
                }

              }
              while((_Bool)1);
              free((void *)pent_link1);
            }

          }


        out_close_dir:
          ;
          closedir(sysdir_link1);
          return (char *)(void *)0;
        }
      }
    }
  }
}

// drmGetMinorType
// file ../xf86drm.c line 515
static signed int drmGetMinorType(signed int minor)
{
  signed int type = minor >> 6;
  if(!(minor >= 0))
    return -1;

  else
  {
    if(type == 0 || type == 1 || type == 2)
      return type;

    return -1;
  }
}

// drmGetMinorType_link1
// file ../xf86drm.c line 515
static signed int drmGetMinorType_link1(signed int minor_link1)
{
  signed int type_link1 = minor_link1 >> 6;
  if(!(minor_link1 >= 0))
    return -1;

  else
  {
    if(type_link1 == 0 || type_link1 == 1 || type_link1 == 2)
      return type_link1;

    return -1;
  }
}

// drmGetNodeType
// file ../xf86drm.c line 2922
static signed int drmGetNodeType(const char *name)
{
  signed int return_value_strncmp_1;
  return_value_strncmp_1=strncmp(name, "card", sizeof(char [5l]) /*5ul*/  - (unsigned long int)1);
  if(return_value_strncmp_1 == 0)
    return 0;

  else
  {
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(name, "controlD", sizeof(char [9l]) /*9ul*/  - (unsigned long int)1);
    if(return_value_strncmp_2 == 0)
      return 1;

    else
    {
      signed int return_value_strncmp_3;
      return_value_strncmp_3=strncmp(name, "renderD", sizeof(char [8l]) /*8ul*/  - (unsigned long int)1);
      if(return_value_strncmp_3 == 0)
        return 2;

      else
        return -22;
    }
  }
}

// drmGetNodeType_link1
// file ../xf86drm.c line 2922
static signed int drmGetNodeType_link1(const char *name_link1)
{
  signed int return_value_strncmp_1_link1;
  return_value_strncmp_1_link1=strncmp(name_link1, "card", sizeof(char [5l]) /*5ul*/  - (unsigned long int)1);
  if(return_value_strncmp_1_link1 == 0)
    return 0;

  else
  {
    signed int return_value_strncmp_2_link1;
    return_value_strncmp_2_link1=strncmp(name_link1, "controlD", sizeof(char [9l]) /*9ul*/  - (unsigned long int)1);
    if(return_value_strncmp_2_link1 == 0)
      return 1;

    else
    {
      signed int return_value_strncmp_3_link1;
      return_value_strncmp_3_link1=strncmp(name_link1, "renderD", sizeof(char [8l]) /*8ul*/  - (unsigned long int)1);
      if(return_value_strncmp_3_link1 == 0)
        return 2;

      else
        return -22;
    }
  }
}

// drmGetNodeTypeFromFd
// file ../xf86drm.c line 2709
extern signed int drmGetNodeTypeFromFd(signed int fd)
{
  struct stat sbuf;
  signed int maj;
  signed int min;
  signed int type;
  signed int return_value_fstat_1;
  return_value_fstat_1=fstat(fd, &sbuf);
  signed int *return_value___errno_location_5;
  if(!(return_value_fstat_1 == 0))
    return -1;

  else
  {
    unsigned int return_value_gnu_dev_major_2;
    return_value_gnu_dev_major_2=gnu_dev_major(sbuf.st_rdev);
    maj = (signed int)return_value_gnu_dev_major_2;
    unsigned int return_value_gnu_dev_minor_3;
    return_value_gnu_dev_minor_3=gnu_dev_minor(sbuf.st_rdev);
    min = (signed int)return_value_gnu_dev_minor_3;
    if(!((61440u & sbuf.st_mode) == 8192u) || !(maj == 226))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = 22;
      return -1;
    }

    type=drmGetMinorType(min);
    if(type == -1)
    {
      return_value___errno_location_5=__errno_location();
      *return_value___errno_location_5 = 19;
    }

    return type;
  }
}

// drmGetPrimaryDeviceNameFromFd
// file ../xf86drm.c line 2825
extern char * drmGetPrimaryDeviceNameFromFd(signed int fd)
{
  char *return_value_drmGetMinorNameForFD_1;
  return_value_drmGetMinorNameForFD_1=drmGetMinorNameForFD(fd, 0);
  return return_value_drmGetMinorNameForFD_1;
}

// drmGetRenderDeviceNameFromFd
// file ../xf86drm.c line 2830
extern char * drmGetRenderDeviceNameFromFd(signed int fd)
{
  char *return_value_drmGetMinorNameForFD_1;
  return_value_drmGetMinorNameForFD_1=drmGetMinorNameForFD(fd, 2);
  return return_value_drmGetMinorNameForFD_1;
}

// drmGetReservedContextList
// file ../xf86drm.c line 1493
extern unsigned int * drmGetReservedContextList(signed int fd, signed int *count)
{
  struct drm_ctx_res res;
  struct drm_ctx *list;
  unsigned int *retval;
  signed int i;
  memset((void *)&res, 0, sizeof(struct drm_ctx_res) /*16ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x26 << 0)) | sizeof(struct drm_ctx_res) /*16ul*/  << 0 + 8 + 8, (void *)&res);
  if(!(return_value_drmIoctl_1 == 0))
    return (unsigned int *)(void *)0;

  else
    if(res.count == 0)
      return (unsigned int *)(void *)0;

    else
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)res.count * sizeof(struct drm_ctx) /*8ul*/ ));
      list = (struct drm_ctx *)return_value_drmMalloc_2;
      if(list == ((struct drm_ctx *)NULL))
        return (unsigned int *)(void *)0;

      else
      {
        void *return_value_drmMalloc_3;
        return_value_drmMalloc_3=drmMalloc((signed int)((unsigned long int)res.count * sizeof(unsigned int) /*4ul*/ ));
        retval = (unsigned int *)return_value_drmMalloc_3;
        if(retval == ((unsigned int *)NULL))
        {
          drmFree((void *)list);
          return (unsigned int *)(void *)0;
        }

        else
        {
          res.contexts = list;
          signed int return_value_drmIoctl_4;
          return_value_drmIoctl_4=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x26 << 0)) | sizeof(struct drm_ctx_res) /*16ul*/  << 0 + 8 + 8, (void *)&res);
          if(!(return_value_drmIoctl_4 == 0))
            return (unsigned int *)(void *)0;

          else
          {
            i = 0;
            for( ; !(i >= res.count); i = i + 1)
              retval[(signed long int)i] = (list + (signed long int)i)->handle;
            drmFree((void *)list);
            *count = res.count;
            return retval;
          }
        }
      }
    }
}

// drmGetStats
// file ../xf86drm.c line 2333
extern signed int drmGetStats(signed int fd, struct _drmStats *stats)
{
  struct drm_stats s;
  unsigned int i;
  memset((void *)&s, 0, sizeof(struct drm_stats) /*248ul*/ );
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x06 << 0)) | sizeof(struct drm_stats) /*248ul*/  << 0 + 8 + 8, (void *)&s);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    stats->count = (unsigned long int)0;
    memset((void *)stats, 0, sizeof(struct _drmStats) /*968ul*/ );
    if(s.count >= 16ul)
      return -1;

    else
    {
      stats->count = s.count;
      i = (unsigned int)0;
      for( ; !((unsigned long int)i >= s.count); i = i + 1u)
      {
        stats->data[(signed long int)i].value = s.data[(signed long int)i].value;
        switch((signed int)s.data[(signed long int)i].type)
        {
          case _DRM_STAT_LOCK:
          {
            stats->data[(signed long int)i].long_name = "Lock";
            stats->data[(signed long int)i].rate_name = "Lock";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%8.8s";
            stats->data[(signed long int)i].isvalue = 1;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_OPENS:
          {
            stats->data[(signed long int)i].long_name = "Opens";
            stats->data[(signed long int)i].rate_name = "O";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            stats->data[(signed long int)i].verbose = 1;
            break;
          }
          case _DRM_STAT_CLOSES:
          {
            stats->data[(signed long int)i].long_name = "Closes";
            stats->data[(signed long int)i].rate_name = "Lock";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            stats->data[(signed long int)i].verbose = 1;
            break;
          }
          case _DRM_STAT_IOCTLS:
          {
            stats->data[(signed long int)i].long_name = "Ioctls";
            stats->data[(signed long int)i].rate_name = "Ioc/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_LOCKS:
          {
            stats->data[(signed long int)i].long_name = "Locks";
            stats->data[(signed long int)i].rate_name = "Lck/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_UNLOCKS:
          {
            stats->data[(signed long int)i].long_name = "Unlocks";
            stats->data[(signed long int)i].rate_name = "Unl/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_IRQ:
          {
            stats->data[(signed long int)i].long_name = "IRQs";
            stats->data[(signed long int)i].rate_name = "IRQ/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_PRIMARY:
          {
            stats->data[(signed long int)i].long_name = "Primary Bytes";
            stats->data[(signed long int)i].rate_name = "PB/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "KGM";
            stats->data[(signed long int)i].mult = 1024;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_SECONDARY:
          {
            stats->data[(signed long int)i].long_name = "Secondary Bytes";
            stats->data[(signed long int)i].rate_name = "SB/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "KGM";
            stats->data[(signed long int)i].mult = 1024;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_DMA:
          {
            stats->data[(signed long int)i].long_name = "DMA";
            stats->data[(signed long int)i].rate_name = "DMA/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_SPECIAL:
          {
            stats->data[(signed long int)i].long_name = "Special DMA";
            stats->data[(signed long int)i].rate_name = "dma/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_MISSED:
          {
            stats->data[(signed long int)i].long_name = "Miss";
            stats->data[(signed long int)i].rate_name = "Ms/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_VALUE:
          {
            stats->data[(signed long int)i].long_name = "Value";
            stats->data[(signed long int)i].rate_name = "Value";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%8.8s";
            stats->data[(signed long int)i].isvalue = 1;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_BYTE:
          {
            stats->data[(signed long int)i].long_name = "Bytes";
            stats->data[(signed long int)i].rate_name = "B/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "KGM";
            stats->data[(signed long int)i].mult = 1024;
            stats->data[(signed long int)i].verbose = 0;
            break;
          }
          case _DRM_STAT_COUNT:

          default:
          {
            stats->data[(signed long int)i].long_name = "Count";
            stats->data[(signed long int)i].rate_name = "Cnt/s";
            stats->data[(signed long int)i].long_format = "%-20.20s";
            stats->data[(signed long int)i].rate_format = "%5.5s";
            stats->data[(signed long int)i].isvalue = 0;
            stats->data[(signed long int)i].mult_names = "kgm";
            stats->data[(signed long int)i].mult = 1000;
            stats->data[(signed long int)i].verbose = 0;
          }
        }
      }
      return 0;
    }
  }
}

// drmGetVersion
// file ../../../xf86drm.h line 574
extern struct _drmVersion * drmGetVersion(signed int fd)
{
  struct _drmVersion *retval;
  struct drm_version *version;
  void *return_value_drmMalloc_1;
  return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct drm_version) /*64ul*/ );
  version = (struct drm_version *)return_value_drmMalloc_1;
  memset((void *)&(*version), 0, sizeof(struct drm_version) /*64ul*/ );
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x00 << 0)) | sizeof(struct drm_version) /*64ul*/  << 0 + 8 + 8, (void *)version);
  void *return_value_drmMalloc_3;
  void *return_value_drmMalloc_4;
  void *return_value_drmMalloc_5;
  if(!(return_value_drmIoctl_2 == 0))
  {
    drmFreeKernelVersion(version);
    return (struct _drmVersion *)(void *)0;
  }

  else
  {
    if(!(version->name_len == 0ul))
    {
      return_value_drmMalloc_3=drmMalloc((signed int)(version->name_len + (unsigned long int)1));
      version->name = (char *)return_value_drmMalloc_3;
    }

    if(!(version->date_len == 0ul))
    {
      return_value_drmMalloc_4=drmMalloc((signed int)(version->date_len + (unsigned long int)1));
      version->date = (char *)return_value_drmMalloc_4;
    }

    if(!(version->desc_len == 0ul))
    {
      return_value_drmMalloc_5=drmMalloc((signed int)(version->desc_len + (unsigned long int)1));
      version->desc = (char *)return_value_drmMalloc_5;
    }

    signed int return_value_drmIoctl_8;
    return_value_drmIoctl_8=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x00 << 0)) | sizeof(struct drm_version) /*64ul*/  << 0 + 8 + 8, (void *)version);
    if(!(return_value_drmIoctl_8 == 0))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      char *return_value_strerror_7;
      return_value_strerror_7=strerror(*return_value___errno_location_6);
      drmMsg("DRM_IOCTL_VERSION: %s\n", return_value_strerror_7);
      drmFreeKernelVersion(version);
      return (struct _drmVersion *)(void *)0;
    }

    if(!(version->name_len == 0ul))
      version->name[(signed long int)version->name_len] = (char)0;

    if(!(version->date_len == 0ul))
      version->date[(signed long int)version->date_len] = (char)0;

    if(!(version->desc_len == 0ul))
      version->desc[(signed long int)version->desc_len] = (char)0;

    void *return_value_drmMalloc_9;
    return_value_drmMalloc_9=drmMalloc((signed int)sizeof(struct _drmVersion) /*56ul*/ );
    retval = (struct _drmVersion *)return_value_drmMalloc_9;
    drmCopyVersion(retval, version);
    drmFreeKernelVersion(version);
    return retval;
  }
}

// drmHandleEvent
// file ../xf86drmMode.c line 873
extern signed int drmHandleEvent(signed int fd, struct _drmEventContext *evctx)
{
  char buffer[1024l];
  signed int len;
  signed int i;
  struct drm_event *e;
  struct drm_event_vblank *vblank;
  signed long int return_value_read_1;
  return_value_read_1=read(fd, (void *)buffer, sizeof(char [1024l]) /*1024ul*/ );
  len = (signed int)return_value_read_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(len == 0)
    return 0;

  else
    if(!(len >= (signed int)sizeof(struct drm_event) /*8*/ ))
      return -1;

    else
    {
      i = 0;
      for( ; !(i >= len); i = i + (signed int)e->length)
      {
        e = (struct drm_event *)&buffer[(signed long int)i];
        switch(e->type)
        {
          case (unsigned int)0x01:
          {
            if(!(evctx->version >= 1))
              tmp_if_expr_2 = (_Bool)1;

            else
              tmp_if_expr_2 = evctx->vblank_handler == (void (*)(signed int, unsigned int, unsigned int, unsigned int, void *))(void *)0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_2)
              break;

            vblank = (struct drm_event_vblank *)e;
            evctx->vblank_handler(fd, vblank->sequence, vblank->tv_sec, vblank->tv_usec, (void *)(unsigned long int)vblank->user_data);
          }
          case (unsigned int)0x02:
          {
            if(!(evctx->version >= 2))
              tmp_if_expr_3 = (_Bool)1;

            else
              tmp_if_expr_3 = evctx->page_flip_handler == (void (*)(signed int, unsigned int, unsigned int, unsigned int, void *))(void *)0 ? (_Bool)1 : (_Bool)0;
            if(!tmp_if_expr_3)
            {
              vblank = (struct drm_event_vblank *)e;
              evctx->page_flip_handler(fd, vblank->sequence, vblank->tv_sec, vblank->tv_usec, (void *)(unsigned long int)vblank->user_data);
            }

          }
        }
      }
      return 0;
    }
}

// drmHashCreate
// file ../xf86drm.h line 695
extern void * drmHashCreate(void)
{
  struct HashTable *table;
  signed int i;
  void *return_value_drmMalloc_1;
  return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct HashTable) /*4152ul*/ );
  table = (struct HashTable *)return_value_drmMalloc_1;
  if(table == ((struct HashTable *)NULL))
    return (void *)0;

  else
  {
    table->magic = (unsigned long int)0xdeadbeef;
    table->entries = (unsigned long int)0;
    table->hits = (unsigned long int)0;
    table->partials = (unsigned long int)0;
    table->misses = (unsigned long int)0;
    i = 0;
    for( ; !(i >= 512); i = i + 1)
      table->buckets[(signed long int)i] = (struct HashBucket *)(void *)0;
    return (void *)table;
  }
}

// drmHashDelete
// file ../xf86drm.h line 699
extern signed int drmHashDelete(void *t, unsigned long int key)
{
  struct HashTable *table = (struct HashTable *)t;
  unsigned long int hash;
  struct HashBucket *bucket;
  if(!(table->magic == 3735928559ul))
    return -1;

  else
  {
    bucket=HashFind(table, key, &hash);
    if(bucket == ((struct HashBucket *)NULL))
      return 1;

    else
    {
      table->buckets[(signed long int)hash] = bucket->next;
      drmFree((void *)bucket);
      return 0;
    }
  }
}

// drmHashDestroy
// file ../xf86drm.h line 696
extern signed int drmHashDestroy(void *t)
{
  struct HashTable *table = (struct HashTable *)t;
  struct HashBucket *bucket;
  struct HashBucket *next;
  signed int i;
  if(!(table->magic == 3735928559ul))
    return -1;

  else
  {
    i = 0;
    for( ; !(i >= 512); i = i + 1)
    {
      bucket = table->buckets[(signed long int)i];
      for( ; !(bucket == ((struct HashBucket *)NULL)); bucket = next)
      {
        next = bucket->next;
        drmFree((void *)bucket);
      }
    }
    drmFree((void *)table);
    return 0;
  }
}

// drmHashFirst
// file ../xf86drmHash.c line 244
extern signed int drmHashFirst(void *t, unsigned long int *key, void **value)
{
  struct HashTable *table = (struct HashTable *)t;
  if(!(table->magic == 3735928559ul))
    return -1;

  else
  {
    table->p0 = 0;
    table->p1 = table->buckets[(signed long int)0];
    signed int return_value_drmHashNext_1;
    return_value_drmHashNext_1=drmHashNext((void *)table, key, value);
    return return_value_drmHashNext_1;
  }
}

// drmHashInsert
// file ../xf86drm.h line 698
extern signed int drmHashInsert(void *t, unsigned long int key, void *value)
{
  struct HashTable *table = (struct HashTable *)t;
  struct HashBucket *bucket;
  unsigned long int hash;
  if(!(table->magic == 3735928559ul))
    return -1;

  else
  {
    struct HashBucket *return_value_HashFind_1;
    return_value_HashFind_1=HashFind(table, key, &hash);
    if(!(return_value_HashFind_1 == ((struct HashBucket *)NULL)))
      return 1;

    else
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)sizeof(struct HashBucket) /*24ul*/ );
      bucket = (struct HashBucket *)return_value_drmMalloc_2;
      if(bucket == ((struct HashBucket *)NULL))
        return -1;

      else
      {
        bucket->key = key;
        bucket->value = value;
        bucket->next = table->buckets[(signed long int)hash];
        table->buckets[(signed long int)hash] = bucket;
        return 0;
      }
    }
  }
}

// drmHashLookup
// file ../xf86drm.h line 697
extern signed int drmHashLookup(void *t, unsigned long int key, void **value)
{
  struct HashTable *table = (struct HashTable *)t;
  struct HashBucket *bucket;
  _Bool tmp_if_expr_1;
  if(table == ((struct HashTable *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = table->magic != (unsigned long int)0xdeadbeef ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
  {
    bucket=HashFind(table, key, (unsigned long int *)(void *)0);
    if(bucket == ((struct HashBucket *)NULL))
      return 1;

    else
    {
      *value = bucket->value;
      return 0;
    }
  }
}

// drmHashNext
// file ../xf86drmHash.c line 227
extern signed int drmHashNext(void *t, unsigned long int *key, void **value)
{
  struct HashTable *table = (struct HashTable *)t;
  for( ; !(table->p0 >= 512); table->p0 = table->p0 + 1)
  {
    if(!(table->p1 == ((struct HashBucket *)NULL)))
    {
      *key = table->p1->key;
      *value = table->p1->value;
      table->p1 = table->p1->next;
      return 1;
    }

    table->p1 = table->buckets[(signed long int)table->p0];
  }
  return 0;
}

// drmIoctl
// file ../../xf86drm.h line 121
extern signed int drmIoctl(signed int fd, unsigned long int request, void *arg)
{
  signed int ret;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_1;
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  do
  {
    ret=ioctl(fd, request, arg);
    if(ret == -1)
    {
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 4)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value___errno_location_2=__errno_location();
        tmp_if_expr_3 = *return_value___errno_location_2 == 11 ? (_Bool)1 : (_Bool)0;
      }
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
  }
  while(tmp_if_expr_4);
  return ret;
}

// drmMalloc
// file ../xf86drm.c line 153
extern void * drmMalloc(signed int size)
{
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, (unsigned long int)size);
  return return_value_calloc_1;
}

// drmMap
// file ../xf86drm.c line 1250
extern signed int drmMap(signed int fd, unsigned int handle, unsigned int size, void **address)
{
  signed int return_value_getpagesize_1;
  signed int *return_value___errno_location_2;
  if(!(fd >= 0))
    return -22;

  else
  {
    static unsigned long int pagesize_mask = (unsigned long int)0;
    if(pagesize_mask == 0ul)
    {
      return_value_getpagesize_1=getpagesize();
      pagesize_mask = (unsigned long int)(return_value_getpagesize_1 - 1);
    }

    size = (unsigned int)((unsigned long int)size + pagesize_mask & ~pagesize_mask);
    *address=mmap(NULL, (unsigned long int)size, 0x1 | 0x2, 0x01, fd, (signed long int)handle);
    if(*address == (void *)-1)
    {
      return_value___errno_location_2=__errno_location();
      return -(*return_value___errno_location_2);
    }

    else
      return 0;
  }
}

// drmMapBufs
// file ../xf86drm.c line 1335
extern struct _drmBufMap * drmMapBufs(signed int fd)
{
  struct drm_buf_map bufs;
  struct _drmBufMap *retval;
  signed int i;
  memset((void *)&bufs, 0, sizeof(struct drm_buf_map) /*24ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x19 << 0)) | sizeof(struct drm_buf_map) /*24ul*/  << 0 + 8 + 8, (void *)&bufs);
  if(!(return_value_drmIoctl_1 == 0))
    return (struct _drmBufMap *)(void *)0;

  else
    if(bufs.count == 0)
      return (struct _drmBufMap *)(void *)0;

    else
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)bufs.count * sizeof(struct drm_buf_pub) /*24ul*/ ));
      bufs.list = (struct drm_buf_pub *)return_value_drmMalloc_2;
      if(bufs.list == ((struct drm_buf_pub *)NULL))
        return (struct _drmBufMap *)(void *)0;

      else
      {
        signed int return_value_drmIoctl_3;
        return_value_drmIoctl_3=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x19 << 0)) | sizeof(struct drm_buf_map) /*24ul*/  << 0 + 8 + 8, (void *)&bufs);
        if(!(return_value_drmIoctl_3 == 0))
        {
          drmFree((void *)bufs.list);
          return (struct _drmBufMap *)(void *)0;
        }

        else
        {
          void *return_value_drmMalloc_4;
          return_value_drmMalloc_4=drmMalloc((signed int)sizeof(struct _drmBufMap) /*16ul*/ );
          retval = (struct _drmBufMap *)return_value_drmMalloc_4;
          retval->count = bufs.count;
          void *return_value_drmMalloc_5;
          return_value_drmMalloc_5=drmMalloc((signed int)((unsigned long int)bufs.count * sizeof(struct _drmBuf) /*24ul*/ ));
          retval->list = (struct _drmBuf *)return_value_drmMalloc_5;
          i = 0;
          for( ; !(i >= bufs.count); i = i + 1)
          {
            (retval->list + (signed long int)i)->idx = (bufs.list + (signed long int)i)->idx;
            (retval->list + (signed long int)i)->total = (bufs.list + (signed long int)i)->total;
            (retval->list + (signed long int)i)->used = 0;
            (retval->list + (signed long int)i)->address = (bufs.list + (signed long int)i)->address;
          }
          drmFree((void *)bufs.list);
          return retval;
        }
      }
    }
}

// drmMarkBufs
// file ../xf86drm.c line 1147
extern signed int drmMarkBufs(signed int fd, double low, double high)
{
  struct drm_buf_info info;
  signed int i;
  memset((void *)&info, 0, sizeof(struct drm_buf_info) /*16ul*/ );
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x18 << 0)) | sizeof(struct drm_buf_info) /*16ul*/  << 0 + 8 + 8, (void *)&info);
  if(!(return_value_drmIoctl_1 == 0))
    return -22;

  else
    if(info.count == 0)
      return -22;

    else
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)info.count * sizeof(struct drm_buf_desc) /*32ul*/ ));
      info.list = (struct drm_buf_desc *)return_value_drmMalloc_2;
      if(info.list == ((struct drm_buf_desc *)NULL))
        return -12;

      else
      {
        signed int return_value_drmIoctl_4;
        return_value_drmIoctl_4=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x18 << 0)) | sizeof(struct drm_buf_info) /*16ul*/  << 0 + 8 + 8, (void *)&info);
        if(!(return_value_drmIoctl_4 == 0))
        {
          signed int retval;
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          retval = -(*return_value___errno_location_3);
          drmFree((void *)info.list);
          return retval;
        }

        i = 0;
        for( ; !(i >= info.count); i = i + 1)
        {
          (info.list + (signed long int)i)->low_mark = (signed int)(low * (double)(info.list + (signed long int)i)->count);
          (info.list + (signed long int)i)->high_mark = (signed int)(high * (double)(info.list + (signed long int)i)->count);
          signed int return_value_drmIoctl_6;
          return_value_drmIoctl_6=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x17 << 0)) | sizeof(struct drm_buf_desc) /*32ul*/  << 0 + 8 + 8, (void *)&info.list[(signed long int)i]);
          if(!(return_value_drmIoctl_6 == 0))
          {
            signed int drmMarkBufs__1__2__1__1__retval;
            signed int *return_value___errno_location_5;
            return_value___errno_location_5=__errno_location();
            drmMarkBufs__1__2__1__1__retval = -(*return_value___errno_location_5);
            drmFree((void *)info.list);
            return drmMarkBufs__1__2__1__1__retval;
          }

        }
        drmFree((void *)info.list);
        return 0;
      }
    }
}

// drmMatchBusID
// file ../xf86drm.c line 220
static signed int drmMatchBusID(const char *id1, const char *id2, signed int pci_domain_ok)
{
  signed int return_value_strcasecmp_1;
  return_value_strcasecmp_1=strcasecmp(id1, id2);
  if(return_value_strcasecmp_1 == 0)
    return 1;

  else
  {
    signed int return_value_strncasecmp_2;
    return_value_strncasecmp_2=strncasecmp(id1, "pci", (unsigned long int)3);
    if(return_value_strncasecmp_2 == 0)
    {
      unsigned int o1;
      unsigned int b1;
      unsigned int d1;
      unsigned int f1;
      unsigned int o2;
      unsigned int b2;
      unsigned int d2;
      unsigned int f2;
      signed int ret;
      ret=sscanf(id1, "pci:%04x:%02x:%02x.%u", &o1, &b1, &d1, &f1);
      if(!(ret == 4))
      {
        o1 = (unsigned int)0;
        ret=sscanf(id1, "PCI:%u:%u:%u", &b1, &d1, &f1);
        if(!(ret == 3))
          return 0;

      }

      ret=sscanf(id2, "pci:%04x:%02x:%02x.%u", &o2, &b2, &d2, &f2);
      if(!(ret == 4))
      {
        o2 = (unsigned int)0;
        ret=sscanf(id2, "PCI:%u:%u:%u", &b2, &d2, &f2);
        if(!(ret == 3))
          return 0;

      }

      if(pci_domain_ok == 0)
      {
        o2 = (unsigned int)0;
        o1 = o2;
      }

      if(!(b1 == b2) || !(d1 == d2) || !(f1 == f2) || !(o1 == o2))
        return 0;

      else
        return 1;
    }

    return 0;
  }
}

// drmMatchBusID_link1
// file ../xf86drm.c line 220
static signed int drmMatchBusID_link1(const char *id1_link1, const char *id2_link1, signed int pci_domain_ok_link1)
{
  signed int return_value_strcasecmp_1_link1;
  return_value_strcasecmp_1_link1=strcasecmp(id1_link1, id2_link1);
  if(return_value_strcasecmp_1_link1 == 0)
    return 1;

  else
  {
    signed int return_value_strncasecmp_2_link1;
    return_value_strncasecmp_2_link1=strncasecmp(id1_link1, "pci", (unsigned long int)3);
    if(return_value_strncasecmp_2_link1 == 0)
    {
      unsigned int o1_link1;
      unsigned int b1_link1;
      unsigned int d1_link1;
      unsigned int f1_link1;
      unsigned int o2_link1;
      unsigned int b2_link1;
      unsigned int d2_link1;
      unsigned int f2_link1;
      signed int ret_link1;
      ret_link1=sscanf(id1_link1, "pci:%04x:%02x:%02x.%u", &o1_link1, &b1_link1, &d1_link1, &f1_link1);
      if(!(ret_link1 == 4))
      {
        o1_link1 = (unsigned int)0;
        ret_link1=sscanf(id1_link1, "PCI:%u:%u:%u", &b1_link1, &d1_link1, &f1_link1);
        if(!(ret_link1 == 3))
          return 0;

      }

      ret_link1=sscanf(id2_link1, "pci:%04x:%02x:%02x.%u", &o2_link1, &b2_link1, &d2_link1, &f2_link1);
      if(!(ret_link1 == 4))
      {
        o2_link1 = (unsigned int)0;
        ret_link1=sscanf(id2_link1, "PCI:%u:%u:%u", &b2_link1, &d2_link1, &f2_link1);
        if(!(ret_link1 == 3))
          return 0;

      }

      if(pci_domain_ok_link1 == 0)
      {
        o2_link1 = (unsigned int)0;
        o1_link1 = o2_link1;
      }

      if(!(b1_link1 == b2_link1) || !(d1_link1 == d2_link1) || !(f1_link1 == f2_link1) || !(o1_link1 == o2_link1))
        return 0;

      else
        return 1;
    }

    return 0;
  }
}

// drmModeAddFB
// file ../xf86drmMode.c line 251
extern signed int drmModeAddFB(signed int fd, unsigned int width, unsigned int height, unsigned char depth, unsigned char bpp, unsigned int pitch, unsigned int bo_handle, unsigned int *buf_id)
{
  struct drm_mode_fb_cmd f;
  signed int ret;
  memset((void *)&f, 0, sizeof(struct drm_mode_fb_cmd) /*28ul*/ );
  f.width = width;
  f.height = height;
  f.pitch = pitch;
  f.bpp = (unsigned int)bpp;
  f.depth = (unsigned int)depth;
  f.handle = bo_handle;
  ret=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAE << 0)) | sizeof(struct drm_mode_fb_cmd) /*28ul*/  << 0 + 8 + 8, (void *)&f);
  if(!(ret == 0))
    return ret;

  else
  {
    *buf_id = f.fb_id;
    return 0;
  }
}

// drmModeAddFB2
// file ../xf86drmMode.c line 273
extern signed int drmModeAddFB2(signed int fd, unsigned int width, unsigned int height, unsigned int pixel_format, unsigned int *bo_handles, unsigned int *pitches, unsigned int *offsets, unsigned int *buf_id, unsigned int flags)
{
  struct drm_mode_fb_cmd2 f;
  signed int ret;
  memset((void *)&f, 0, sizeof(struct drm_mode_fb_cmd2) /*104ul*/ );
  f.width = width;
  f.height = height;
  f.pixel_format = pixel_format;
  f.flags = flags;
  memcpy((void *)f.handles, (const void *)bo_handles, (unsigned long int)4 * sizeof(unsigned int) /*4ul*/ );
  memcpy((void *)f.pitches, (const void *)pitches, (unsigned long int)4 * sizeof(unsigned int) /*4ul*/ );
  memcpy((void *)f.offsets, (const void *)offsets, (unsigned long int)4 * sizeof(unsigned int) /*4ul*/ );
  ret=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB8 << 0)) | sizeof(struct drm_mode_fb_cmd2) /*104ul*/  << 0 + 8 + 8, (void *)&f);
  if(!(ret == 0))
    return ret;

  else
  {
    *buf_id = f.fb_id;
    return 0;
  }
}

// drmModeAtomicAddProperty
// file ../xf86drmMode.c line 1262
extern signed int drmModeAtomicAddProperty(struct _drmModeAtomicReq *req, unsigned int object_id, unsigned int property_id, unsigned long int value)
{
  if(req == ((struct _drmModeAtomicReq *)NULL))
    return -22;

  else
  {
    if(req->cursor >= req->size_items)
    {
      struct _drmModeAtomicReqItem *new;
      req->size_items = req->size_items + (unsigned int)16;
      void *return_value_realloc_1;
      return_value_realloc_1=realloc((void *)req->items, (unsigned long int)req->size_items * sizeof(struct _drmModeAtomicReqItem) /*16ul*/ );
      new = (struct _drmModeAtomicReqItem *)return_value_realloc_1;
      if(new == ((struct _drmModeAtomicReqItem *)NULL))
      {
        req->size_items = req->size_items - (unsigned int)16;
        return -12;
      }

      req->items = new;
    }

    (req->items + (signed long int)req->cursor)->object_id = object_id;
    (req->items + (signed long int)req->cursor)->property_id = property_id;
    (req->items + (signed long int)req->cursor)->value = value;
    req->cursor = req->cursor + 1u;
    return (signed int)req->cursor;
  }
}

// drmModeAtomicAlloc
// file ../xf86drmMode.c line 1176
extern struct _drmModeAtomicReq * drmModeAtomicAlloc(void)
{
  struct _drmModeAtomicReq *req;
  void *return_value_drmMalloc_1;
  return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct _drmModeAtomicReq) /*16ul*/ );
  req = (struct _drmModeAtomicReq *)return_value_drmMalloc_1;
  if(req == ((struct _drmModeAtomicReq *)NULL))
    return (struct _drmModeAtomicReq *)(void *)0;

  else
  {
    req->items = (struct _drmModeAtomicReqItem *)(void *)0;
    req->cursor = (unsigned int)0;
    req->size_items = (unsigned int)0;
    return req;
  }
}

// drmModeAtomicCommit
// file ../xf86drmMode.c line 1313
extern signed int drmModeAtomicCommit(signed int fd, struct _drmModeAtomicReq *req, unsigned int flags, void *user_data)
{
  struct _drmModeAtomicReq *sorted;
  struct drm_mode_atomic atomic;
  unsigned int *objs_ptr = (unsigned int *)(void *)0;
  unsigned int *count_props_ptr = (unsigned int *)(void *)0;
  unsigned int *props_ptr = (unsigned int *)(void *)0;
  unsigned long int *prop_values_ptr = (unsigned long int *)(void *)0;
  unsigned int last_obj_id = (unsigned int)0;
  unsigned int i;
  signed int obj_idx = -1;
  signed int ret = -1;
  _Bool tmp_if_expr_1;
  if(req == ((struct _drmModeAtomicReq *)NULL))
    return -22;

  else
    if(req->cursor == 0u)
      return 0;

    else
    {
      sorted=drmModeAtomicDuplicate(req);
      if(sorted == ((struct _drmModeAtomicReq *)NULL))
        return -12;

      else
      {
        memset((void *)&atomic, 0, sizeof(struct drm_mode_atomic) /*56ul*/ );
        qsort((void *)sorted->items, (unsigned long int)sorted->cursor, sizeof(struct _drmModeAtomicReqItem) /*16ul*/ , sort_req_list);
        i = (unsigned int)0;
        for( ; !(i >= sorted->cursor); i = i + 1u)
        {
          if(!((sorted->items + (signed long int)i)->object_id == last_obj_id))
          {
            atomic.count_objs = atomic.count_objs + 1u;
            last_obj_id = (sorted->items + (signed long int)i)->object_id;
          }

          if(!(i == sorted->cursor + 4294967295u))
          {
            if(!((sorted->items + (signed long int)i)->object_id == (sorted->items + (signed long int)(1u + i))->object_id))
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = (sorted->items + (signed long int)i)->property_id != (sorted->items + (signed long int)(i + (unsigned int)1))->property_id ? (_Bool)1 : (_Bool)0;
            if(!tmp_if_expr_1)
            {
              memmove((void *)&sorted->items[(signed long int)i], (const void *)&sorted->items[(signed long int)(i + (unsigned int)1)], (unsigned long int)((sorted->cursor - i) - (unsigned int)1) * sizeof(struct _drmModeAtomicReqItem) /*16ul*/ );
              sorted->cursor = sorted->cursor - 1u;
            }

          }

        }
        void *return_value_drmMalloc_2;
        return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)atomic.count_objs * sizeof(unsigned int) /*4ul*/ ));
        objs_ptr = (unsigned int *)return_value_drmMalloc_2;
        if(objs_ptr == ((unsigned int *)NULL))
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = 12;
          goto out;
        }

        void *return_value_drmMalloc_4;
        return_value_drmMalloc_4=drmMalloc((signed int)((unsigned long int)atomic.count_objs * sizeof(unsigned int) /*4ul*/ ));
        count_props_ptr = (unsigned int *)return_value_drmMalloc_4;
        if(count_props_ptr == ((unsigned int *)NULL))
        {
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          *return_value___errno_location_5 = 12;
          goto out;
        }

        void *return_value_drmMalloc_6;
        return_value_drmMalloc_6=drmMalloc((signed int)((unsigned long int)sorted->cursor * sizeof(unsigned int) /*4ul*/ ));
        props_ptr = (unsigned int *)return_value_drmMalloc_6;
        if(props_ptr == ((unsigned int *)NULL))
        {
          signed int *return_value___errno_location_7;
          return_value___errno_location_7=__errno_location();
          *return_value___errno_location_7 = 12;
          goto out;
        }

        void *return_value_drmMalloc_8;
        return_value_drmMalloc_8=drmMalloc((signed int)((unsigned long int)sorted->cursor * sizeof(unsigned long int) /*8ul*/ ));
        prop_values_ptr = (unsigned long int *)return_value_drmMalloc_8;
        if(prop_values_ptr == ((unsigned long int *)NULL))
        {
          signed int *return_value___errno_location_9;
          return_value___errno_location_9=__errno_location();
          *return_value___errno_location_9 = 12;
          goto out;
        }

        i = (unsigned int)0;
        last_obj_id = (unsigned int)0;
        for( ; !(i >= sorted->cursor); i = i + 1u)
        {
          if(!((sorted->items + (signed long int)i)->object_id == last_obj_id))
          {
            obj_idx = obj_idx + 1;
            objs_ptr[(signed long int)obj_idx] = (sorted->items + (signed long int)i)->object_id;
            last_obj_id = objs_ptr[(signed long int)obj_idx];
          }

          count_props_ptr[(signed long int)obj_idx] = count_props_ptr[(signed long int)obj_idx] + 1u;
          props_ptr[(signed long int)i] = (sorted->items + (signed long int)i)->property_id;
          prop_values_ptr[(signed long int)i] = (sorted->items + (signed long int)i)->value;
        }
        atomic.flags = flags;
        atomic.objs_ptr = (unsigned long int)objs_ptr;
        atomic.count_props_ptr = (unsigned long int)count_props_ptr;
        atomic.props_ptr = (unsigned long int)props_ptr;
        atomic.prop_values_ptr = (unsigned long int)prop_values_ptr;
        atomic.user_data = (unsigned long int)user_data;
        ret=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xBC << 0)) | sizeof(struct drm_mode_atomic) /*56ul*/  << 0 + 8 + 8, (void *)&atomic);

      out:
        ;
        drmFree((void *)objs_ptr);
        drmFree((void *)count_props_ptr);
        drmFree((void *)props_ptr);
        drmFree((void *)prop_values_ptr);
        drmModeAtomicFree(sorted);
        return ret;
      }
    }
}

// drmModeAtomicDuplicate
// file ../xf86drmMode.c line 1191
extern struct _drmModeAtomicReq * drmModeAtomicDuplicate(struct _drmModeAtomicReq *old)
{
  struct _drmModeAtomicReq *new;
  if(old == ((struct _drmModeAtomicReq *)NULL))
    return (struct _drmModeAtomicReq *)(void *)0;

  else
  {
    void *return_value_drmMalloc_1;
    return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct _drmModeAtomicReq) /*16ul*/ );
    new = (struct _drmModeAtomicReq *)return_value_drmMalloc_1;
    if(new == ((struct _drmModeAtomicReq *)NULL))
      return (struct _drmModeAtomicReq *)(void *)0;

    else
    {
      new->cursor = old->cursor;
      new->size_items = old->size_items;
      if(!(old->size_items == 0u))
      {
        void *return_value_drmMalloc_2;
        return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)old->size_items * sizeof(struct _drmModeAtomicReqItem) /*16ul*/ ));
        new->items = (struct _drmModeAtomicReqItem *)return_value_drmMalloc_2;
        if(new->items == ((struct _drmModeAtomicReqItem *)NULL))
        {
          free((void *)new);
          return (struct _drmModeAtomicReq *)(void *)0;
        }

        memcpy((void *)new->items, (const void *)old->items, (unsigned long int)old->size_items * sizeof(struct _drmModeAtomicReqItem) /*16ul*/ );
      }

      else
        new->items = (struct _drmModeAtomicReqItem *)(void *)0;
      return new;
    }
  }
}

// drmModeAtomicFree
// file ../xf86drmMode.c line 1290
extern void drmModeAtomicFree(struct _drmModeAtomicReq *req)
{
  if(!(req == ((struct _drmModeAtomicReq *)NULL)))
  {
    if(!(req->items == ((struct _drmModeAtomicReqItem *)NULL)))
      drmFree((void *)req->items);

    drmFree((void *)req);
  }

}

// drmModeAtomicGetCursor
// file ../xf86drmMode.c line 1249
extern signed int drmModeAtomicGetCursor(struct _drmModeAtomicReq *req)
{
  if(req == ((struct _drmModeAtomicReq *)NULL))
    return -22;

  else
    return (signed int)req->cursor;
}

// drmModeAtomicMerge
// file ../xf86drmMode.c line 1220
extern signed int drmModeAtomicMerge(struct _drmModeAtomicReq *base, struct _drmModeAtomicReq *augment)
{
  _Bool tmp_if_expr_1;
  if(base == ((struct _drmModeAtomicReq *)NULL))
    return -22;

  else
  {
    if(augment == ((struct _drmModeAtomicReq *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = augment->cursor == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      return 0;

    else
    {
      if(augment->cursor + base->cursor >= base->size_items)
      {
        struct _drmModeAtomicReqItem *new;
        signed int saved_size = (signed int)base->size_items;
        base->size_items = base->cursor + augment->cursor;
        void *return_value_realloc_2;
        return_value_realloc_2=realloc((void *)base->items, (unsigned long int)base->size_items * sizeof(struct _drmModeAtomicReqItem) /*16ul*/ );
        new = (struct _drmModeAtomicReqItem *)return_value_realloc_2;
        if(new == ((struct _drmModeAtomicReqItem *)NULL))
        {
          base->size_items = (unsigned int)saved_size;
          return -12;
        }

        base->items = new;
      }

      memcpy((void *)&base->items[(signed long int)base->cursor], (const void *)augment->items, (unsigned long int)augment->cursor * sizeof(struct _drmModeAtomicReqItem) /*16ul*/ );
      base->cursor = base->cursor + augment->cursor;
      return 0;
    }
  }
}

// drmModeAtomicSetCursor
// file ../xf86drmMode.c line 1256
extern void drmModeAtomicSetCursor(struct _drmModeAtomicReq *req, signed int cursor)
{
  if(!(req == ((struct _drmModeAtomicReq *)NULL)))
    req->cursor = (unsigned int)cursor;

}

// drmModeAttachMode
// file ../xf86drmMode.c line 589
extern signed int drmModeAttachMode(signed int fd, unsigned int connector_id, struct _drmModeModeInfo *mode_info)
{
  struct drm_mode_mode_cmd res;
  memset((void *)&res, 0, sizeof(struct drm_mode_mode_cmd) /*72ul*/ );
  memcpy((void *)&res.mode, (const void *)mode_info, sizeof(struct drm_mode_modeinfo) /*68ul*/ );
  res.connector_id = connector_id;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA8 << 0)) | sizeof(struct drm_mode_mode_cmd) /*72ul*/  << 0 + 8 + 8, (void *)&res);
  return return_value_DRM_IOCTL_1;
}

// drmModeConnectorSetProperty
// file ../xf86drmMode.c line 715
extern signed int drmModeConnectorSetProperty(signed int fd, unsigned int connector_id, unsigned int property_id, unsigned long int value)
{
  struct drm_mode_connector_set_property osp;
  memset((void *)&osp, 0, sizeof(struct drm_mode_connector_set_property) /*16ul*/ );
  osp.connector_id = connector_id;
  osp.prop_id = property_id;
  osp.value = value;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAB << 0)) | sizeof(struct drm_mode_connector_set_property) /*16ul*/  << 0 + 8 + 8, (void *)&osp);
  return return_value_DRM_IOCTL_1;
}

// drmModeCreatePropertyBlob
// file ../xf86drmMode.c line 1419
extern signed int drmModeCreatePropertyBlob(signed int fd, const void *data, unsigned long int length, unsigned int *id)
{
  struct drm_mode_create_blob create;
  signed int ret;
  if(length >= 4294967295ul)
    return -34;

  else
  {
    memset((void *)&create, 0, sizeof(struct drm_mode_create_blob) /*16ul*/ );
    create.length = (unsigned int)length;
    create.data = (unsigned long int)data;
    create.blob_id = (unsigned int)0;
    *id = (unsigned int)0;
    ret=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xBD << 0)) | sizeof(struct drm_mode_create_blob) /*16ul*/  << 0 + 8 + 8, (void *)&create);
    if(!(ret == 0))
      return ret;

    else
    {
      *id = create.blob_id;
      return 0;
    }
  }
}

// drmModeCrtcGetGamma
// file ../xf86drmMode.c line 843
extern signed int drmModeCrtcGetGamma(signed int fd, unsigned int crtc_id, unsigned int size, unsigned short int *red, unsigned short int *green, unsigned short int *blue)
{
  struct drm_mode_crtc_lut l;
  memset((void *)&l, 0, sizeof(struct drm_mode_crtc_lut) /*32ul*/ );
  l.crtc_id = crtc_id;
  l.gamma_size = size;
  l.red = (unsigned long int)red;
  l.green = (unsigned long int)green;
  l.blue = (unsigned long int)blue;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA4 << 0)) | sizeof(struct drm_mode_crtc_lut) /*32ul*/  << 0 + 8 + 8, (void *)&l);
  return return_value_DRM_IOCTL_1;
}

// drmModeCrtcSetGamma
// file ../xf86drmMode.c line 858
extern signed int drmModeCrtcSetGamma(signed int fd, unsigned int crtc_id, unsigned int size, unsigned short int *red, unsigned short int *green, unsigned short int *blue)
{
  struct drm_mode_crtc_lut l;
  memset((void *)&l, 0, sizeof(struct drm_mode_crtc_lut) /*32ul*/ );
  l.crtc_id = crtc_id;
  l.gamma_size = size;
  l.red = (unsigned long int)red;
  l.green = (unsigned long int)green;
  l.blue = (unsigned long int)blue;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA5 << 0)) | sizeof(struct drm_mode_crtc_lut) /*32ul*/  << 0 + 8 + 8, (void *)&l);
  return return_value_DRM_IOCTL_1;
}

// drmModeDestroyPropertyBlob
// file ../xf86drmMode.c line 1443
extern signed int drmModeDestroyPropertyBlob(signed int fd, unsigned int id)
{
  struct drm_mode_destroy_blob destroy;
  memset((void *)&destroy, 0, sizeof(struct drm_mode_destroy_blob) /*4ul*/ );
  destroy.blob_id = id;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xBE << 0)) | sizeof(struct drm_mode_destroy_blob) /*4ul*/  << 0 + 8 + 8, (void *)&destroy);
  return return_value_DRM_IOCTL_1;
}

// drmModeDetachMode
// file ../xf86drmMode.c line 600
extern signed int drmModeDetachMode(signed int fd, unsigned int connector_id, struct _drmModeModeInfo *mode_info)
{
  struct drm_mode_mode_cmd res;
  memset((void *)&res, 0, sizeof(struct drm_mode_mode_cmd) /*72ul*/ );
  memcpy((void *)&res.mode, (const void *)mode_info, sizeof(struct drm_mode_modeinfo) /*68ul*/ );
  res.connector_id = connector_id;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA9 << 0)) | sizeof(struct drm_mode_mode_cmd) /*72ul*/  << 0 + 8 + 8, (void *)&res);
  return return_value_DRM_IOCTL_1;
}

// drmModeDirtyFB
// file ../xf86drmMode.c line 327
extern signed int drmModeDirtyFB(signed int fd, unsigned int bufferId, struct drm_clip_rect *clips, unsigned int num_clips)
{
  struct drm_mode_fb_dirty_cmd dirty;
  memset((void *)&dirty, 0, sizeof(struct drm_mode_fb_dirty_cmd) /*24ul*/ );
  dirty.fb_id = bufferId;
  dirty.clips_ptr = (unsigned long int)clips;
  dirty.num_clips = num_clips;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB1 << 0)) | sizeof(struct drm_mode_fb_dirty_cmd) /*24ul*/  << 0 + 8 + 8, (void *)&dirty);
  return return_value_DRM_IOCTL_1;
}

// drmModeFreeConnector
// file ../xf86drmMode.c line 136
extern void drmModeFreeConnector(struct _drmModeConnector *ptr)
{
  if(!(ptr == ((struct _drmModeConnector *)NULL)))
  {
    drmFree((void *)ptr->encoders);
    drmFree((void *)ptr->prop_values);
    drmFree((void *)ptr->props);
    drmFree((void *)ptr->modes);
    drmFree((void *)ptr);
  }

}

// drmModeFreeCrtc
// file ../xf86drmMode.c line 128
extern void drmModeFreeCrtc(struct _drmModeCrtc *ptr)
{
  if(!(ptr == ((struct _drmModeCrtc *)NULL)))
    drmFree((void *)ptr);

}

// drmModeFreeEncoder
// file ../xf86drmMode.c line 148
extern void drmModeFreeEncoder(struct _drmModeEncoder *ptr)
{
  drmFree((void *)ptr);
}

// drmModeFreeFB
// file ../xf86drmMode.c line 119
extern void drmModeFreeFB(struct _drmModeFB *ptr)
{
  if(!(ptr == ((struct _drmModeFB *)NULL)))
    drmFree((void *)ptr);

}

// drmModeFreeModeInfo
// file ../xf86drmMode.c line 99
extern void drmModeFreeModeInfo(struct _drmModeModeInfo *ptr)
{
  if(!(ptr == ((struct _drmModeModeInfo *)NULL)))
    drmFree((void *)ptr);

}

// drmModeFreeObjectProperties
// file ../xf86drmMode.c line 1139
extern void drmModeFreeObjectProperties(struct _drmModeObjectProperties *ptr)
{
  if(!(ptr == ((struct _drmModeObjectProperties *)NULL)))
  {
    drmFree((void *)ptr->props);
    drmFree((void *)ptr->prop_values);
    drmFree((void *)ptr);
  }

}

// drmModeFreePlane
// file ../xf86drmMode.c line 1015
extern void drmModeFreePlane(struct _drmModePlane *ptr)
{
  if(!(ptr == ((struct _drmModePlane *)NULL)))
  {
    drmFree((void *)ptr->formats);
    drmFree((void *)ptr);
  }

}

// drmModeFreePlaneResources
// file ../xf86drmMode.c line 1069
extern void drmModeFreePlaneResources(struct _drmModePlaneRes *ptr)
{
  if(!(ptr == ((struct _drmModePlaneRes *)NULL)))
  {
    drmFree((void *)ptr->planes);
    drmFree((void *)ptr);
  }

}

// drmModeFreeProperty
// file ../xf86drmMode.c line 665
extern void drmModeFreeProperty(struct _drmModeProperty *ptr)
{
  if(!(ptr == ((struct _drmModeProperty *)NULL)))
  {
    drmFree((void *)ptr->values);
    drmFree((void *)ptr->enums);
    drmFree((void *)ptr);
  }

}

// drmModeFreePropertyBlob
// file ../xf86drmMode.c line 706
extern void drmModeFreePropertyBlob(struct _drmModePropertyBlob *ptr)
{
  if(!(ptr == ((struct _drmModePropertyBlob *)NULL)))
  {
    drmFree(ptr->data);
    drmFree((void *)ptr);
  }

}

// drmModeFreeResources
// file ../xf86drmMode.c line 107
extern void drmModeFreeResources(struct _drmModeRes *ptr)
{
  if(!(ptr == ((struct _drmModeRes *)NULL)))
  {
    drmFree((void *)ptr->fbs);
    drmFree((void *)ptr->crtcs);
    drmFree((void *)ptr->connectors);
    drmFree((void *)ptr->encoders);
    drmFree((void *)ptr);
  }

}

// drmModeGetConnector
// file ../xf86drmMode.c line 579
extern struct _drmModeConnector * drmModeGetConnector(signed int fd, unsigned int connector_id)
{
  struct _drmModeConnector *return_value__drmModeGetConnector_1;
  return_value__drmModeGetConnector_1=_drmModeGetConnector(fd, connector_id, 1);
  return return_value__drmModeGetConnector_1;
}

// drmModeGetConnectorCurrent
// file ../xf86drmMode.c line 584
extern struct _drmModeConnector * drmModeGetConnectorCurrent(signed int fd, unsigned int connector_id)
{
  struct _drmModeConnector *return_value__drmModeGetConnector_1;
  return_value__drmModeGetConnector_1=_drmModeGetConnector(fd, connector_id, 0);
  return return_value__drmModeGetConnector_1;
}

// drmModeGetCrtc
// file ../xf86drmMode.c line 344
extern struct _drmModeCrtc * drmModeGetCrtc(signed int fd, unsigned int crtcId)
{
  struct drm_mode_crtc crtc;
  struct _drmModeCrtc *r;
  memset((void *)&crtc, 0, sizeof(struct drm_mode_crtc) /*104ul*/ );
  crtc.crtc_id = crtcId;
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA1 << 0)) | sizeof(struct drm_mode_crtc) /*104ul*/  << 0 + 8 + 8, (void *)&crtc);
  if(!(return_value_drmIoctl_1 == 0))
    return ((struct _drmModeCrtc *)NULL);

  else
  {
    void *return_value_drmMalloc_2;
    return_value_drmMalloc_2=drmMalloc((signed int)sizeof(struct _drmModeCrtc) /*100ul*/ );
    r = (struct _drmModeCrtc *)return_value_drmMalloc_2;
    if(r == ((struct _drmModeCrtc *)NULL))
      return ((struct _drmModeCrtc *)NULL);

    else
    {
      r->crtc_id = crtc.crtc_id;
      r->x = crtc.x;
      r->y = crtc.y;
      r->mode_valid = (signed int)crtc.mode_valid;
      if(!(r->mode_valid == 0))
      {
        memcpy((void *)&r->mode, (const void *)&crtc.mode, sizeof(struct drm_mode_modeinfo) /*68ul*/ );
        r->width = (unsigned int)crtc.mode.hdisplay;
        r->height = (unsigned int)crtc.mode.vdisplay;
      }

      r->buffer_id = crtc.fb_id;
      r->gamma_size = (signed int)crtc.gamma_size;
      return r;
    }
  }
}

// drmModeGetEncoder
// file ../xf86drmMode.c line 447
struct _drmModeEncoder * drmModeGetEncoder(signed int fd, unsigned int encoder_id)
{
  struct drm_mode_get_encoder enc;
  struct _drmModeEncoder *r = (struct _drmModeEncoder *)(void *)0;
  memset((void *)&enc, 0, sizeof(struct drm_mode_get_encoder) /*20ul*/ );
  enc.encoder_id = encoder_id;
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA6 << 0)) | sizeof(struct drm_mode_get_encoder) /*20ul*/  << 0 + 8 + 8, (void *)&enc);
  if(!(return_value_drmIoctl_1 == 0))
    return ((struct _drmModeEncoder *)NULL);

  else
  {
    void *return_value_drmMalloc_2;
    return_value_drmMalloc_2=drmMalloc((signed int)sizeof(struct _drmModeEncoder) /*20ul*/ );
    r = (struct _drmModeEncoder *)return_value_drmMalloc_2;
    if(r == ((struct _drmModeEncoder *)NULL))
      return ((struct _drmModeEncoder *)NULL);

    else
    {
      r->encoder_id = enc.encoder_id;
      r->crtc_id = enc.crtc_id;
      r->encoder_type = enc.encoder_type;
      r->possible_crtcs = enc.possible_crtcs;
      r->possible_clones = enc.possible_clones;
      return r;
    }
  }
}

// drmModeGetFB
// file ../xf86drmMode.c line 302
extern struct _drmModeFB * drmModeGetFB(signed int fd, unsigned int buf)
{
  struct drm_mode_fb_cmd info;
  struct _drmModeFB *r;
  memset((void *)&info, 0, sizeof(struct drm_mode_fb_cmd) /*28ul*/ );
  info.fb_id = buf;
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAD << 0)) | sizeof(struct drm_mode_fb_cmd) /*28ul*/  << 0 + 8 + 8, (void *)&info);
  if(!(return_value_drmIoctl_1 == 0))
    return (struct _drmModeFB *)(void *)0;

  else
  {
    void *return_value_drmMalloc_2;
    return_value_drmMalloc_2=drmMalloc((signed int)sizeof(struct _drmModeFB) /*28ul*/ );
    r = (struct _drmModeFB *)return_value_drmMalloc_2;
    if(r == ((struct _drmModeFB *)NULL))
      return (struct _drmModeFB *)(void *)0;

    else
    {
      r->fb_id = info.fb_id;
      r->width = info.width;
      r->height = info.height;
      r->pitch = info.pitch;
      r->bpp = info.bpp;
      r->handle = info.handle;
      r->depth = info.depth;
      return r;
    }
  }
}

// drmModeGetPlane
// file ../xf86drmMode.c line 964
extern struct _drmModePlane * drmModeGetPlane(signed int fd, unsigned int plane_id)
{
  struct drm_mode_get_plane ovr;
  struct drm_mode_get_plane counts;
  struct _drmModePlane *r = ((struct _drmModePlane *)NULL);
  signed int return_value_drmIoctl_1;
  signed int return_value_drmIoctl_3;
  do
  {

  retry:
    ;
    memset((void *)&ovr, 0, sizeof(struct drm_mode_get_plane) /*32ul*/ );
    ovr.plane_id = plane_id;
    return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB6 << 0)) | sizeof(struct drm_mode_get_plane) /*32ul*/  << 0 + 8 + 8, (void *)&ovr);
    if(!(return_value_drmIoctl_1 == 0))
      return ((struct _drmModePlane *)NULL);

    counts = ovr;
    if(!(ovr.count_format_types == 0u))
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)ovr.count_format_types * sizeof(unsigned int) /*4ul*/ ));
      ovr.format_type_ptr = (unsigned long int)return_value_drmMalloc_2;
      if(ovr.format_type_ptr == 0ull)
        goto err_allocs;

    }

    return_value_drmIoctl_3=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB6 << 0)) | sizeof(struct drm_mode_get_plane) /*32ul*/  << 0 + 8 + 8, (void *)&ovr);
    if(!(return_value_drmIoctl_3 == 0))
      goto err_allocs;

    if(counts.count_format_types >= ovr.count_format_types)
      break;

    drmFree((void *)(unsigned long int)ovr.format_type_ptr);
  }
  while((_Bool)1);
  void *return_value_drmMalloc_4;
  return_value_drmMalloc_4=drmMalloc((signed int)sizeof(struct _drmModePlane) /*56ul*/ );
  r = (struct _drmModePlane *)return_value_drmMalloc_4;
  void *return_value_drmAllocCpy_5;
  if(!(r == ((struct _drmModePlane *)NULL)))
  {
    r->count_formats = ovr.count_format_types;
    r->plane_id = ovr.plane_id;
    r->crtc_id = ovr.crtc_id;
    r->fb_id = ovr.fb_id;
    r->possible_crtcs = ovr.possible_crtcs;
    r->gamma_size = ovr.gamma_size;
    return_value_drmAllocCpy_5=drmAllocCpy((char *)(void *)(unsigned long int)ovr.format_type_ptr, (signed int)ovr.count_format_types, (signed int)sizeof(unsigned int) /*4ul*/ );
    r->formats = (unsigned int *)return_value_drmAllocCpy_5;
    if(!(ovr.count_format_types == 0u))
    {
      if(r->formats == ((unsigned int *)NULL))
      {
        drmFree((void *)r->formats);
        drmFree((void *)r);
        r = ((struct _drmModePlane *)NULL);
      }

    }

  }


err_allocs:
  ;
  drmFree((void *)(unsigned long int)ovr.format_type_ptr);
  return r;
}

// drmModeGetPlaneResources
// file ../xf86drmMode.c line 1024
extern struct _drmModePlaneRes * drmModeGetPlaneResources(signed int fd)
{
  struct drm_mode_get_plane_res res;
  struct drm_mode_get_plane_res counts;
  struct _drmModePlaneRes *r = ((struct _drmModePlaneRes *)NULL);
  signed int return_value_drmIoctl_1;
  signed int return_value_drmIoctl_3;
  do
  {

  retry:
    ;
    memset((void *)&res, 0, sizeof(struct drm_mode_get_plane_res) /*16ul*/ );
    return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB5 << 0)) | sizeof(struct drm_mode_get_plane_res) /*16ul*/  << 0 + 8 + 8, (void *)&res);
    if(!(return_value_drmIoctl_1 == 0))
      return ((struct _drmModePlaneRes *)NULL);

    counts = res;
    if(!(res.count_planes == 0u))
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)res.count_planes * sizeof(unsigned int) /*4ul*/ ));
      res.plane_id_ptr = (unsigned long int)return_value_drmMalloc_2;
      if(res.plane_id_ptr == 0ull)
        goto err_allocs;

    }

    return_value_drmIoctl_3=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB5 << 0)) | sizeof(struct drm_mode_get_plane_res) /*16ul*/  << 0 + 8 + 8, (void *)&res);
    if(!(return_value_drmIoctl_3 == 0))
      goto err_allocs;

    if(counts.count_planes >= res.count_planes)
      break;

    drmFree((void *)(unsigned long int)res.plane_id_ptr);
  }
  while((_Bool)1);
  void *return_value_drmMalloc_4;
  return_value_drmMalloc_4=drmMalloc((signed int)sizeof(struct _drmModePlaneRes) /*16ul*/ );
  r = (struct _drmModePlaneRes *)return_value_drmMalloc_4;
  void *return_value_drmAllocCpy_5;
  if(!(r == ((struct _drmModePlaneRes *)NULL)))
  {
    r->count_planes = res.count_planes;
    return_value_drmAllocCpy_5=drmAllocCpy((char *)(void *)(unsigned long int)res.plane_id_ptr, (signed int)res.count_planes, (signed int)sizeof(unsigned int) /*4ul*/ );
    r->planes = (unsigned int *)return_value_drmAllocCpy_5;
    if(!(res.count_planes == 0u))
    {
      if(r->planes == ((unsigned int *)NULL))
      {
        drmFree((void *)r->planes);
        drmFree((void *)r);
        r = ((struct _drmModePlaneRes *)NULL);
      }

    }

  }


err_allocs:
  ;
  drmFree((void *)(unsigned long int)res.plane_id_ptr);
  return r;
}

// drmModeGetProperty
// file ../xf86drmMode.c line 611
extern struct _drmModeProperty * drmModeGetProperty(signed int fd, unsigned int property_id)
{
  struct drm_mode_get_property prop;
  struct _drmModeProperty *r;
  memset((void *)&prop, 0, sizeof(struct drm_mode_get_property) /*64ul*/ );
  prop.prop_id = property_id;
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAA << 0)) | sizeof(struct drm_mode_get_property) /*64ul*/  << 0 + 8 + 8, (void *)&prop);
  void *return_value_drmMalloc_2;
  void *return_value_drmMalloc_3;
  void *return_value_drmMalloc_7;
  void *return_value_drmAllocCpy_8;
  if(!(return_value_drmIoctl_1 == 0))
    return ((struct _drmModeProperty *)NULL);

  else
  {
    if(!(prop.count_values == 0u))
    {
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)prop.count_values * sizeof(unsigned long int) /*8ul*/ ));
      prop.values_ptr = (unsigned long int)return_value_drmMalloc_2;
    }

    if(!((40u & prop.flags) == 0u) && !(prop.count_enum_blobs == 0u))
    {
      return_value_drmMalloc_3=drmMalloc((signed int)((unsigned long int)prop.count_enum_blobs * sizeof(struct drm_mode_property_enum) /*40ul*/ ));
      prop.enum_blob_ptr = (unsigned long int)return_value_drmMalloc_3;
    }

    if(!((16u & prop.flags) == 0u) && !(prop.count_enum_blobs == 0u))
    {
      void *return_value_drmMalloc_4;
      return_value_drmMalloc_4=drmMalloc((signed int)((unsigned long int)prop.count_enum_blobs * sizeof(unsigned int) /*4ul*/ ));
      prop.values_ptr = (unsigned long int)return_value_drmMalloc_4;
      void *return_value_drmMalloc_5;
      return_value_drmMalloc_5=drmMalloc((signed int)((unsigned long int)prop.count_enum_blobs * sizeof(unsigned int) /*4ul*/ ));
      prop.enum_blob_ptr = (unsigned long int)return_value_drmMalloc_5;
    }

    signed int return_value_drmIoctl_6;
    return_value_drmIoctl_6=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAA << 0)) | sizeof(struct drm_mode_get_property) /*64ul*/  << 0 + 8 + 8, (void *)&prop);
    if(!(return_value_drmIoctl_6 == 0))
      r = (struct _drmModeProperty *)(void *)0;

    else
    {
      return_value_drmMalloc_7=drmMalloc((signed int)sizeof(struct _drmModeProperty) /*88ul*/ );
      r = (struct _drmModeProperty *)return_value_drmMalloc_7;
      if(r == ((struct _drmModeProperty *)NULL))
        return (struct _drmModeProperty *)(void *)0;

      r->prop_id = prop.prop_id;
      r->count_values = (signed int)prop.count_values;
      r->flags = prop.flags;
      if(!(prop.count_values == 0u))
      {
        return_value_drmAllocCpy_8=drmAllocCpy((char *)(void *)(unsigned long int)prop.values_ptr, (signed int)prop.count_values, (signed int)sizeof(unsigned long int) /*8ul*/ );
        r->values = (unsigned long int *)return_value_drmAllocCpy_8;
      }

      if(!((40u & prop.flags) == 0u))
      {
        r->count_enums = (signed int)prop.count_enum_blobs;
        void *return_value_drmAllocCpy_9;
        return_value_drmAllocCpy_9=drmAllocCpy((char *)(void *)(unsigned long int)prop.enum_blob_ptr, (signed int)prop.count_enum_blobs, (signed int)sizeof(struct drm_mode_property_enum) /*40ul*/ );
        r->enums = (struct drm_mode_property_enum *)return_value_drmAllocCpy_9;
      }

      else
        if(!((16u & prop.flags) == 0u))
        {
          void *return_value_drmAllocCpy_10;
          return_value_drmAllocCpy_10=drmAllocCpy((char *)(void *)(unsigned long int)prop.values_ptr, (signed int)prop.count_enum_blobs, (signed int)sizeof(unsigned int) /*4ul*/ );
          r->values = (unsigned long int *)return_value_drmAllocCpy_10;
          void *return_value_drmAllocCpy_11;
          return_value_drmAllocCpy_11=drmAllocCpy((char *)(void *)(unsigned long int)prop.enum_blob_ptr, (signed int)prop.count_enum_blobs, (signed int)sizeof(unsigned int) /*4ul*/ );
          r->blob_ids = (unsigned int *)return_value_drmAllocCpy_11;
          r->count_blobs = (signed int)prop.count_enum_blobs;
        }

      strncpy(r->name, prop.name, (unsigned long int)32);
      r->name[(signed long int)(32 - 1)] = (char)0;
    }

  err_allocs:
    ;
    drmFree((void *)(unsigned long int)prop.values_ptr);
    drmFree((void *)(unsigned long int)prop.enum_blob_ptr);
    return r;
  }
}

// drmModeGetPropertyBlob
// file ../xf86drmMode.c line 675
extern struct _drmModePropertyBlob * drmModeGetPropertyBlob(signed int fd, unsigned int blob_id)
{
  struct drm_mode_get_blob blob;
  struct _drmModePropertyBlob *r;
  memset((void *)&blob, 0, sizeof(struct drm_mode_get_blob) /*16ul*/ );
  blob.blob_id = blob_id;
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAC << 0)) | sizeof(struct drm_mode_get_blob) /*16ul*/  << 0 + 8 + 8, (void *)&blob);
  void *return_value_drmMalloc_2;
  void *return_value_drmMalloc_4;
  if(!(return_value_drmIoctl_1 == 0))
    return (struct _drmModePropertyBlob *)(void *)0;

  else
  {
    if(!(blob.length == 0u))
    {
      return_value_drmMalloc_2=drmMalloc((signed int)blob.length);
      blob.data = (unsigned long int)return_value_drmMalloc_2;
    }

    signed int return_value_drmIoctl_3;
    return_value_drmIoctl_3=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAC << 0)) | sizeof(struct drm_mode_get_blob) /*16ul*/  << 0 + 8 + 8, (void *)&blob);
    if(!(return_value_drmIoctl_3 == 0))
      r = (struct _drmModePropertyBlob *)(void *)0;

    else
    {
      return_value_drmMalloc_4=drmMalloc((signed int)sizeof(struct _drmModePropertyBlob) /*16ul*/ );
      r = (struct _drmModePropertyBlob *)return_value_drmMalloc_4;
      if(!(r == ((struct _drmModePropertyBlob *)NULL)))
      {
        r->id = blob.blob_id;
        r->length = blob.length;
        r->data=drmAllocCpy((char *)(void *)(unsigned long int)blob.data, 1, (signed int)blob.length);
      }

    }

  err_allocs:
    ;
    drmFree((void *)(unsigned long int)blob.data);
    return r;
  }
}

// drmModeGetResources
// file ../xf86drmMode.c line 157
extern struct _drmModeRes * drmModeGetResources(signed int fd)
{
  struct drm_mode_card_res res;
  struct drm_mode_card_res counts;
  struct _drmModeRes *r = ((struct _drmModeRes *)NULL);
  signed int return_value_drmIoctl_1;
  signed int return_value_drmIoctl_6;
  do
  {

  retry:
    ;
    memset((void *)&res, 0, sizeof(struct drm_mode_card_res) /*64ul*/ );
    return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA0 << 0)) | sizeof(struct drm_mode_card_res) /*64ul*/  << 0 + 8 + 8, (void *)&res);
    if(!(return_value_drmIoctl_1 == 0))
      return ((struct _drmModeRes *)NULL);

    counts = res;
    if(!(res.count_fbs == 0u))
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)res.count_fbs * sizeof(unsigned int) /*4ul*/ ));
      res.fb_id_ptr = (unsigned long int)return_value_drmMalloc_2;
      if(res.fb_id_ptr == 0ull)
        goto err_allocs;

    }

    if(!(res.count_crtcs == 0u))
    {
      void *return_value_drmMalloc_3;
      return_value_drmMalloc_3=drmMalloc((signed int)((unsigned long int)res.count_crtcs * sizeof(unsigned int) /*4ul*/ ));
      res.crtc_id_ptr = (unsigned long int)return_value_drmMalloc_3;
      if(res.crtc_id_ptr == 0ull)
        goto err_allocs;

    }

    if(!(res.count_connectors == 0u))
    {
      void *return_value_drmMalloc_4;
      return_value_drmMalloc_4=drmMalloc((signed int)((unsigned long int)res.count_connectors * sizeof(unsigned int) /*4ul*/ ));
      res.connector_id_ptr = (unsigned long int)return_value_drmMalloc_4;
      if(res.connector_id_ptr == 0ull)
        goto err_allocs;

    }

    if(!(res.count_encoders == 0u))
    {
      void *return_value_drmMalloc_5;
      return_value_drmMalloc_5=drmMalloc((signed int)((unsigned long int)res.count_encoders * sizeof(unsigned int) /*4ul*/ ));
      res.encoder_id_ptr = (unsigned long int)return_value_drmMalloc_5;
      if(res.encoder_id_ptr == 0ull)
        goto err_allocs;

    }

    return_value_drmIoctl_6=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA0 << 0)) | sizeof(struct drm_mode_card_res) /*64ul*/  << 0 + 8 + 8, (void *)&res);
    if(!(return_value_drmIoctl_6 == 0))
      goto err_allocs;

    if(counts.count_connectors >= res.count_connectors && counts.count_crtcs >= res.count_crtcs && counts.count_encoders >= res.count_encoders && counts.count_fbs >= res.count_fbs)
      break;

    drmFree((void *)(unsigned long int)res.fb_id_ptr);
    drmFree((void *)(unsigned long int)res.crtc_id_ptr);
    drmFree((void *)(unsigned long int)res.connector_id_ptr);
    drmFree((void *)(unsigned long int)res.encoder_id_ptr);
  }
  while((_Bool)1);
  void *return_value_drmMalloc_7;
  return_value_drmMalloc_7=drmMalloc((signed int)sizeof(struct _drmModeRes) /*80ul*/ );
  r = (struct _drmModeRes *)return_value_drmMalloc_7;
  void *return_value_drmAllocCpy_8;
  void *return_value_drmAllocCpy_9;
  void *return_value_drmAllocCpy_10;
  void *return_value_drmAllocCpy_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_18;
  _Bool tmp_if_expr_17;
  if(!(r == ((struct _drmModeRes *)NULL)))
  {
    r->min_width = res.min_width;
    r->max_width = res.max_width;
    r->min_height = res.min_height;
    r->max_height = res.max_height;
    r->count_fbs = (signed int)res.count_fbs;
    r->count_crtcs = (signed int)res.count_crtcs;
    r->count_connectors = (signed int)res.count_connectors;
    r->count_encoders = (signed int)res.count_encoders;
    return_value_drmAllocCpy_8=drmAllocCpy((char *)(void *)(unsigned long int)res.fb_id_ptr, (signed int)res.count_fbs, (signed int)sizeof(unsigned int) /*4ul*/ );
    r->fbs = (unsigned int *)return_value_drmAllocCpy_8;
    return_value_drmAllocCpy_9=drmAllocCpy((char *)(void *)(unsigned long int)res.crtc_id_ptr, (signed int)res.count_crtcs, (signed int)sizeof(unsigned int) /*4ul*/ );
    r->crtcs = (unsigned int *)return_value_drmAllocCpy_9;
    return_value_drmAllocCpy_10=drmAllocCpy((char *)(void *)(unsigned long int)res.connector_id_ptr, (signed int)res.count_connectors, (signed int)sizeof(unsigned int) /*4ul*/ );
    r->connectors = (unsigned int *)return_value_drmAllocCpy_10;
    return_value_drmAllocCpy_11=drmAllocCpy((char *)(void *)(unsigned long int)res.encoder_id_ptr, (signed int)res.count_encoders, (signed int)sizeof(unsigned int) /*4ul*/ );
    r->encoders = (unsigned int *)return_value_drmAllocCpy_11;
    if(!(res.count_fbs == 0u))
      tmp_if_expr_12 = !(r->fbs != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_12 = (_Bool)0;
    if(tmp_if_expr_12)
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      if(!(res.count_crtcs == 0u))
        tmp_if_expr_13 = !(r->crtcs != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_13 = (_Bool)0;
      tmp_if_expr_14 = tmp_if_expr_13 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_14)
      tmp_if_expr_16 = (_Bool)1;

    else
    {
      if(!(res.count_connectors == 0u))
        tmp_if_expr_15 = !(r->connectors != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_15 = (_Bool)0;
      tmp_if_expr_16 = tmp_if_expr_15 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_16)
      tmp_if_expr_18 = (_Bool)1;

    else
    {
      if(!(res.count_encoders == 0u))
        tmp_if_expr_17 = !(r->encoders != ((unsigned int *)NULL)) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_17 = (_Bool)0;
      tmp_if_expr_18 = tmp_if_expr_17 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_18)
    {
      drmFree((void *)r->fbs);
      drmFree((void *)r->crtcs);
      drmFree((void *)r->connectors);
      drmFree((void *)r->encoders);
      drmFree((void *)r);
      r = ((struct _drmModeRes *)NULL);
    }

  }


err_allocs:
  ;
  drmFree((void *)(unsigned long int)res.fb_id_ptr);
  drmFree((void *)(unsigned long int)res.crtc_id_ptr);
  drmFree((void *)(unsigned long int)res.connector_id_ptr);
  drmFree((void *)(unsigned long int)res.encoder_id_ptr);
  return r;
}

// drmModeMoveCursor
// file ../xf86drmMode.c line 431
signed int drmModeMoveCursor(signed int fd, unsigned int crtcId, signed int x, signed int y)
{
  struct drm_mode_cursor arg;
  memset((void *)&arg, 0, sizeof(struct drm_mode_cursor) /*28ul*/ );
  arg.flags = (unsigned int)(1 << 1);
  arg.crtc_id = crtcId;
  arg.x = x;
  arg.y = y;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA3 << 0)) | sizeof(struct drm_mode_cursor) /*28ul*/  << 0 + 8 + 8, (void *)&arg);
  return return_value_DRM_IOCTL_1;
}

// drmModeObjectGetProperties
// file ../xf86drmMode.c line 1078
extern struct _drmModeObjectProperties * drmModeObjectGetProperties(signed int fd, unsigned int object_id, unsigned int object_type)
{
  struct drm_mode_obj_get_properties properties;
  struct _drmModeObjectProperties *ret = (struct _drmModeObjectProperties *)(void *)0;
  unsigned int count;
  signed int return_value_drmIoctl_1;
  signed int return_value_drmIoctl_4;
  do
  {

  retry:
    ;
    memset((void *)&properties, 0, sizeof(struct drm_mode_obj_get_properties) /*32ul*/ );
    properties.obj_id = object_id;
    properties.obj_type = object_type;
    return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB9 << 0)) | sizeof(struct drm_mode_obj_get_properties) /*32ul*/  << 0 + 8 + 8, (void *)&properties);
    if(!(return_value_drmIoctl_1 == 0))
      return ((struct _drmModeObjectProperties *)NULL);

    count = properties.count_props;
    if(!(count == 0u))
    {
      void *return_value_drmMalloc_2;
      return_value_drmMalloc_2=drmMalloc((signed int)((unsigned long int)count * sizeof(unsigned int) /*4ul*/ ));
      properties.props_ptr = (unsigned long int)return_value_drmMalloc_2;
      if(properties.props_ptr == 0ull)
        goto err_allocs;

      void *return_value_drmMalloc_3;
      return_value_drmMalloc_3=drmMalloc((signed int)((unsigned long int)count * sizeof(unsigned long int) /*8ul*/ ));
      properties.prop_values_ptr = (unsigned long int)return_value_drmMalloc_3;
      if(properties.prop_values_ptr == 0ull)
        goto err_allocs;

    }

    return_value_drmIoctl_4=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB9 << 0)) | sizeof(struct drm_mode_obj_get_properties) /*32ul*/  << 0 + 8 + 8, (void *)&properties);
    if(!(return_value_drmIoctl_4 == 0))
      goto err_allocs;

    if(count >= properties.count_props)
      break;

    drmFree((void *)(unsigned long int)properties.props_ptr);
    drmFree((void *)(unsigned long int)properties.prop_values_ptr);
  }
  while((_Bool)1);
  count = properties.count_props;
  void *return_value_drmMalloc_5;
  return_value_drmMalloc_5=drmMalloc((signed int)sizeof(struct _drmModeObjectProperties) /*24ul*/ );
  ret = (struct _drmModeObjectProperties *)return_value_drmMalloc_5;
  void *return_value_drmAllocCpy_6;
  void *return_value_drmAllocCpy_7;
  _Bool tmp_if_expr_8;
  if(!(ret == ((struct _drmModeObjectProperties *)NULL)))
  {
    ret->count_props = count;
    return_value_drmAllocCpy_6=drmAllocCpy((char *)(void *)(unsigned long int)properties.props_ptr, (signed int)count, (signed int)sizeof(unsigned int) /*4ul*/ );
    ret->props = (unsigned int *)return_value_drmAllocCpy_6;
    return_value_drmAllocCpy_7=drmAllocCpy((char *)(void *)(unsigned long int)properties.prop_values_ptr, (signed int)count, (signed int)sizeof(unsigned long int) /*8ul*/ );
    ret->prop_values = (unsigned long int *)return_value_drmAllocCpy_7;
    if(!(ret->count_props == 0u))
    {
      if(ret->props == ((unsigned int *)NULL))
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = !(ret->prop_values != ((unsigned long int *)NULL)) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
      {
        drmFree((void *)ret->props);
        drmFree((void *)ret->prop_values);
        drmFree((void *)ret);
        ret = (struct _drmModeObjectProperties *)(void *)0;
      }

    }

  }


err_allocs:
  ;
  drmFree((void *)(unsigned long int)properties.props_ptr);
  drmFree((void *)(unsigned long int)properties.prop_values_ptr);
  return ret;
}

// drmModeObjectSetProperty
// file ../xf86drmMode.c line 1148
extern signed int drmModeObjectSetProperty(signed int fd, unsigned int object_id, unsigned int object_type, unsigned int property_id, unsigned long int value)
{
  struct drm_mode_obj_set_property prop;
  memset((void *)&prop, 0, sizeof(struct drm_mode_obj_set_property) /*24ul*/ );
  prop.value = value;
  prop.prop_id = property_id;
  prop.obj_id = object_id;
  prop.obj_type = object_type;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xBA << 0)) | sizeof(struct drm_mode_obj_set_property) /*24ul*/  << 0 + 8 + 8, (void *)&prop);
  return return_value_DRM_IOCTL_1;
}

// drmModePageFlip
// file ../xf86drmMode.c line 924
extern signed int drmModePageFlip(signed int fd, unsigned int crtc_id, unsigned int fb_id, unsigned int flags, void *user_data)
{
  struct drm_mode_crtc_page_flip flip;
  memset((void *)&flip, 0, sizeof(struct drm_mode_crtc_page_flip) /*24ul*/ );
  flip.fb_id = fb_id;
  flip.crtc_id = crtc_id;
  flip.user_data = (unsigned long int)user_data;
  flip.flags = flags;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB0 << 0)) | sizeof(struct drm_mode_crtc_page_flip) /*24ul*/  << 0 + 8 + 8, (void *)&flip);
  return return_value_DRM_IOCTL_1;
}

// drmModeRmFB
// file ../xf86drmMode.c line 297
extern signed int drmModeRmFB(signed int fd, unsigned int bufferId)
{
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xAF << 0)) | sizeof(unsigned int) /*4ul*/  << 0 + 8 + 8, (void *)&bufferId);
  return return_value_DRM_IOCTL_1;
}

// drmModeSetCrtc
// file ../xf86drmMode.c line 376
signed int drmModeSetCrtc(signed int fd, unsigned int crtcId, unsigned int bufferId, unsigned int x, unsigned int y, unsigned int *connectors, signed int count, struct _drmModeModeInfo *mode)
{
  struct drm_mode_crtc crtc;
  memset((void *)&crtc, 0, sizeof(struct drm_mode_crtc) /*104ul*/ );
  crtc.x = x;
  crtc.y = y;
  crtc.crtc_id = crtcId;
  crtc.fb_id = bufferId;
  crtc.set_connectors_ptr = (unsigned long int)connectors;
  crtc.count_connectors = (unsigned int)count;
  if(!(mode == ((struct _drmModeModeInfo *)NULL)))
  {
    memcpy((void *)&crtc.mode, (const void *)mode, sizeof(struct drm_mode_modeinfo) /*68ul*/ );
    crtc.mode_valid = (unsigned int)1;
  }

  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA2 << 0)) | sizeof(struct drm_mode_crtc) /*104ul*/  << 0 + 8 + 8, (void *)&crtc);
  return return_value_DRM_IOCTL_1;
}

// drmModeSetCursor
// file ../xf86drmMode.c line 401
signed int drmModeSetCursor(signed int fd, unsigned int crtcId, unsigned int bo_handle, unsigned int width, unsigned int height)
{
  struct drm_mode_cursor arg;
  memset((void *)&arg, 0, sizeof(struct drm_mode_cursor) /*28ul*/ );
  arg.flags = (unsigned int)(1 << 0);
  arg.crtc_id = crtcId;
  arg.width = width;
  arg.height = height;
  arg.handle = bo_handle;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xA3 << 0)) | sizeof(struct drm_mode_cursor) /*28ul*/  << 0 + 8 + 8, (void *)&arg);
  return return_value_DRM_IOCTL_1;
}

// drmModeSetCursor2
// file ../xf86drmMode.c line 415
signed int drmModeSetCursor2(signed int fd, unsigned int crtcId, unsigned int bo_handle, unsigned int width, unsigned int height, signed int hot_x, signed int hot_y)
{
  struct drm_mode_cursor2 arg;
  memset((void *)&arg, 0, sizeof(struct drm_mode_cursor2) /*36ul*/ );
  arg.flags = (unsigned int)(1 << 0);
  arg.crtc_id = crtcId;
  arg.width = width;
  arg.height = height;
  arg.handle = bo_handle;
  arg.hot_x = hot_x;
  arg.hot_y = hot_y;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xBB << 0)) | sizeof(struct drm_mode_cursor2) /*36ul*/  << 0 + 8 + 8, (void *)&arg);
  return return_value_DRM_IOCTL_1;
}

// drmModeSetPlane
// file ../xf86drmMode.c line 938
extern signed int drmModeSetPlane(signed int fd, unsigned int plane_id, unsigned int crtc_id, unsigned int fb_id, unsigned int flags, signed int crtc_x, signed int crtc_y, unsigned int crtc_w, unsigned int crtc_h, unsigned int src_x, unsigned int src_y, unsigned int src_w, unsigned int src_h)
{
  struct drm_mode_set_plane s;
  memset((void *)&s, 0, sizeof(struct drm_mode_set_plane) /*48ul*/ );
  s.plane_id = plane_id;
  s.crtc_id = crtc_id;
  s.fb_id = fb_id;
  s.flags = flags;
  s.crtc_x = crtc_x;
  s.crtc_y = crtc_y;
  s.crtc_w = crtc_w;
  s.crtc_h = crtc_h;
  s.src_x = src_x;
  s.src_y = src_y;
  s.src_w = src_w;
  s.src_h = src_h;
  signed int return_value_DRM_IOCTL_1;
  return_value_DRM_IOCTL_1=DRM_IOCTL(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0xB7 << 0)) | sizeof(struct drm_mode_set_plane) /*48ul*/  << 0 + 8 + 8, (void *)&s);
  return return_value_DRM_IOCTL_1;
}

// drmMsg
// file ../xf86drm.c line 129
extern void drmMsg(const char *format, ...)
{
  void **ap;
  const char *env;
  env=getenv("LIBGL_DEBUG");
  _Bool tmp_if_expr_2;
  char *return_value_strstr_1;
  if(!(env == ((const char *)NULL)))
  {
    return_value_strstr_1=strstr(env, "verbose");
    tmp_if_expr_2 = return_value_strstr_1 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    if(!(drm_server_info == ((struct _drmServerInfo *)NULL)))
      tmp_if_expr_3 = drm_server_info->debug_print != ((signed int (*)(const char *, void **))NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_4)
  {
    ap = (void **)&format;
    if(!(drm_server_info == ((struct _drmServerInfo *)NULL)))
      drm_server_info->debug_print(format, ap);

    else
      drmDebugPrint(format, ap);
    ap = ((void **)NULL);
  }

}

// drmOpen
// file ../../xf86drm.h line 561
extern signed int drmOpen(const char *name, const char *busid)
{
  signed int return_value_drmOpenWithType_1;
  return_value_drmOpenWithType_1=drmOpenWithType(name, busid, 0);
  return return_value_drmOpenWithType_1;
}

// drmOpenByBusid
// file ../xf86drm.c line 560
static signed int drmOpenByBusid(const char *busid, signed int type)
{
  signed int i;
  signed int pci_domain_ok = 1;
  signed int fd;
  const char *buf;
  struct _drmSetVersion sv;
  signed int base;
  base=drmGetMinorBase(type);
  signed int return_value_drmMatchBusID_2;
  if(!(base >= 0))
    return -1;

  else
  {
    drmMsg("drmOpenByBusid: Searching for BusID %s\n", busid);
    i = base;
    for( ; !(i >= 16 + base); i = i + 1)
    {
      fd=drmOpenMinor(i, 1, type);
      drmMsg("drmOpenByBusid: drmOpenMinor returns %d\n", fd);
      if(fd >= 0)
      {
        sv.drm_di_major = 1;
        sv.drm_di_minor = 4;
        sv.drm_dd_major = -1;
        sv.drm_dd_minor = -1;
        signed int return_value_drmSetInterfaceVersion_1;
        return_value_drmSetInterfaceVersion_1=drmSetInterfaceVersion(fd, &sv);
        if(!(return_value_drmSetInterfaceVersion_1 == 0))
        {
          pci_domain_ok = 0;
          sv.drm_di_major = 1;
          sv.drm_di_minor = 1;
          sv.drm_dd_major = -1;
          sv.drm_dd_minor = -1;
          drmMsg("drmOpenByBusid: Interface 1.4 failed, trying 1.1\n");
          drmSetInterfaceVersion(fd, &sv);
        }

        buf=drmGetBusid(fd);
        drmMsg("drmOpenByBusid: drmGetBusid reports %s\n", buf);
        if(!(buf == ((const char *)NULL)))
        {
          return_value_drmMatchBusID_2=drmMatchBusID(buf, busid, pci_domain_ok);
          if(!(return_value_drmMatchBusID_2 == 0))
          {
            drmFreeBusid(buf);
            return fd;
          }

        }

        if(!(buf == ((const char *)NULL)))
          drmFreeBusid(buf);

        close(fd);
      }

    }
    return -1;
  }
}

// drmOpenByBusid_link1
// file ../xf86drm.c line 560
static signed int drmOpenByBusid_link1(const char *busid_link1, signed int type_link1)
{
  signed int i_link1;
  signed int pci_domain_ok_link1 = 1;
  signed int fd_link1;
  const char *buf_link1;
  struct _drmSetVersion sv_link1;
  signed int base_link1;
  base_link1=drmGetMinorBase_link1(type_link1);
  signed int return_value_drmMatchBusID_2_link1;
  if(!(base_link1 >= 0))
    return -1;

  else
  {
    drmMsg("drmOpenByBusid: Searching for BusID %s\n", busid_link1);
    i_link1 = base_link1;
    for( ; !(i_link1 >= 16 + base_link1); i_link1 = i_link1 + 1)
    {
      fd_link1=drmOpenMinor_link1(i_link1, 1, type_link1);
      drmMsg("drmOpenByBusid: drmOpenMinor returns %d\n", fd_link1);
      if(fd_link1 >= 0)
      {
        sv_link1.drm_di_major = 1;
        sv_link1.drm_di_minor = 4;
        sv_link1.drm_dd_major = -1;
        sv_link1.drm_dd_minor = -1;
        signed int return_value_drmSetInterfaceVersion_1_link1;
        return_value_drmSetInterfaceVersion_1_link1=drmSetInterfaceVersion(fd_link1, &sv_link1);
        if(!(return_value_drmSetInterfaceVersion_1_link1 == 0))
        {
          pci_domain_ok_link1 = 0;
          sv_link1.drm_di_major = 1;
          sv_link1.drm_di_minor = 1;
          sv_link1.drm_dd_major = -1;
          sv_link1.drm_dd_minor = -1;
          drmMsg("drmOpenByBusid: Interface 1.4 failed, trying 1.1\n");
          drmSetInterfaceVersion(fd_link1, &sv_link1);
        }

        buf_link1=drmGetBusid(fd_link1);
        drmMsg("drmOpenByBusid: drmGetBusid reports %s\n", buf_link1);
        if(!(buf_link1 == ((const char *)NULL)))
        {
          return_value_drmMatchBusID_2_link1=drmMatchBusID_link1(buf_link1, busid_link1, pci_domain_ok_link1);
          if(!(return_value_drmMatchBusID_2_link1 == 0))
          {
            drmFreeBusid(buf_link1);
            return fd_link1;
          }

        }

        if(!(buf_link1 == ((const char *)NULL)))
          drmFreeBusid(buf_link1);

        close(fd_link1);
      }

    }
    return -1;
  }
}

// drmOpenByName
// file ../xf86drm.c line 624
static signed int drmOpenByName(const char *name, signed int type)
{
  signed int i;
  signed int fd;
  struct _drmVersion *version;
  char *id;
  signed int base;
  base=drmGetMinorBase(type);
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  if(!(base >= 0))
    return -1;

  else
  {
    i = base;
    for( ; !(i >= 16 + base); i = i + 1)
    {
      fd=drmOpenMinor(i, 1, type);
      if(fd >= 0)
      {
        version=drmGetVersion(fd);
        if(!(version == ((struct _drmVersion *)NULL)))
        {
          signed int return_value_strcmp_2;
          return_value_strcmp_2=strcmp(version->name, name);
          if(return_value_strcmp_2 == 0)
          {
            drmFreeVersion(version);
            id=drmGetBusid(fd);
            drmMsg("drmGetBusid returned '%s'\n", id != ((char *)NULL) ? id : "NULL");
            if(id == ((char *)NULL))
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = !(*id != 0) ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_1)
            {
              if(!(id == ((char *)NULL)))
                drmFreeBusid(id);

              return fd;
            }

            else
              drmFreeBusid(id);
          }

          else
            drmFreeVersion(version);
        }

        close(fd);
      }

    }
    i = 0;
    for( ; !(i >= 8); i = i + 1)
    {
      char proc_name[64l];
      char buf[512l];
      char *driver;
      char *pt;
      char *devstring;
      signed int retcode;
      sprintf(proc_name, "/proc/dri/%d/name", i);
      fd=open(proc_name, 0, 0);
      if(fd >= 0)
      {
        signed long int return_value_read_3;
        return_value_read_3=read(fd, (void *)buf, sizeof(char [512l]) /*512ul*/  - (unsigned long int)1);
        retcode = (signed int)return_value_read_3;
        close(fd);
        if(!(retcode == 0))
        {
          buf[(signed long int)(retcode - 1)] = (char)0;
          pt = buf;
          driver = pt;
          do
          {
            if(!(*pt == 0))
              tmp_if_expr_4 = (signed int)*pt != 32 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_4 = (_Bool)0;
            if(!tmp_if_expr_4)
              break;

            pt = pt + 1l;
          }
          while((_Bool)1);
          if(!(*pt == 0))
          {
            *pt = (char)0;
            signed int return_value_strcmp_9;
            return_value_strcmp_9=strcmp(driver, name);
            if(return_value_strcmp_9 == 0)
            {
              pt = pt + 1l;
              devstring = pt;
              do
              {
                if(!(*pt == 0))
                  tmp_if_expr_5 = (signed int)*pt != 32 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_5 = (_Bool)0;
                if(!tmp_if_expr_5)
                  break;

                pt = pt + 1l;
              }
              while((_Bool)1);
              if(!(*pt == 0))
              {
                pt = pt + 1l;
                signed int return_value_drmOpenByBusid_6;
                return_value_drmOpenByBusid_6=drmOpenByBusid(pt, type);
                return return_value_drmOpenByBusid_6;
              }

              else
              {
                signed long int return_value_strtol_7;
                return_value_strtol_7=strtol(devstring, (char ** restrict )(void *)0, 0);
                signed int return_value_drmOpenDevice_8;
                return_value_drmOpenDevice_8=drmOpenDevice((unsigned long int)return_value_strtol_7, i, type);
                return return_value_drmOpenDevice_8;
              }
            }

          }

        }

      }

    }
    return -1;
  }
}

// drmOpenByName_link1
// file ../xf86drm.c line 624
static signed int drmOpenByName_link1(const char *name_link1, signed int type_link1)
{
  signed int i_link1;
  signed int fd_link1;
  struct _drmVersion *version_link1;
  char *id_link1;
  signed int base_link1;
  base_link1=drmGetMinorBase_link1(type_link1);
  _Bool tmp_if_expr_1_link1;
  _Bool tmp_if_expr_4_link1;
  _Bool tmp_if_expr_5_link1;
  if(!(base_link1 >= 0))
    return -1;

  else
  {
    i_link1 = base_link1;
    for( ; !(i_link1 >= 16 + base_link1); i_link1 = i_link1 + 1)
    {
      fd_link1=drmOpenMinor_link1(i_link1, 1, type_link1);
      if(fd_link1 >= 0)
      {
        version_link1=drmGetVersion(fd_link1);
        if(!(version_link1 == ((struct _drmVersion *)NULL)))
        {
          signed int return_value_strcmp_2_link1;
          return_value_strcmp_2_link1=strcmp(version_link1->name, name_link1);
          if(return_value_strcmp_2_link1 == 0)
          {
            drmFreeVersion(version_link1);
            id_link1=drmGetBusid(fd_link1);
            drmMsg("drmGetBusid returned '%s'\n", id_link1 != ((char *)NULL) ? id_link1 : "NULL");
            if(id_link1 == ((char *)NULL))
              tmp_if_expr_1_link1 = (_Bool)1;

            else
              tmp_if_expr_1_link1 = !(*id_link1 != 0) ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_1_link1)
            {
              if(!(id_link1 == ((char *)NULL)))
                drmFreeBusid(id_link1);

              return fd_link1;
            }

            else
              drmFreeBusid(id_link1);
          }

          else
            drmFreeVersion(version_link1);
        }

        close(fd_link1);
      }

    }
    i_link1 = 0;
    for( ; !(i_link1 >= 8); i_link1 = i_link1 + 1)
    {
      char proc_name_link1[64l];
      char buf_link1[512l];
      char *driver_link1;
      char *pt_link1;
      char *devstring_link1;
      signed int retcode_link1;
      sprintf(proc_name_link1, "/proc/dri/%d/name", i_link1);
      fd_link1=open(proc_name_link1, 0, 0);
      if(fd_link1 >= 0)
      {
        signed long int return_value_read_3_link1;
        return_value_read_3_link1=read(fd_link1, (void *)buf_link1, sizeof(char [512l]) /*512ul*/  - (unsigned long int)1);
        retcode_link1 = (signed int)return_value_read_3_link1;
        close(fd_link1);
        if(!(retcode_link1 == 0))
        {
          buf_link1[(signed long int)(retcode_link1 - 1)] = (char)0;
          pt_link1 = buf_link1;
          driver_link1 = pt_link1;
          do
          {
            if(!(*pt_link1 == 0))
              tmp_if_expr_4_link1 = (signed int)*pt_link1 != 32 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_4_link1 = (_Bool)0;
            if(!tmp_if_expr_4_link1)
              break;

            pt_link1 = pt_link1 + 1l;
          }
          while((_Bool)1);
          if(!(*pt_link1 == 0))
          {
            *pt_link1 = (char)0;
            signed int return_value_strcmp_9_link1;
            return_value_strcmp_9_link1=strcmp(driver_link1, name_link1);
            if(return_value_strcmp_9_link1 == 0)
            {
              pt_link1 = pt_link1 + 1l;
              devstring_link1 = pt_link1;
              do
              {
                if(!(*pt_link1 == 0))
                  tmp_if_expr_5_link1 = (signed int)*pt_link1 != 32 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_5_link1 = (_Bool)0;
                if(!tmp_if_expr_5_link1)
                  break;

                pt_link1 = pt_link1 + 1l;
              }
              while((_Bool)1);
              if(!(*pt_link1 == 0))
              {
                pt_link1 = pt_link1 + 1l;
                signed int return_value_drmOpenByBusid_6_link1;
                return_value_drmOpenByBusid_6_link1=drmOpenByBusid_link1(pt_link1, type_link1);
                return return_value_drmOpenByBusid_6_link1;
              }

              else
              {
                signed long int return_value_strtol_7_link1;
                return_value_strtol_7_link1=strtol(devstring_link1, (char ** restrict )(void *)0, 0);
                signed int return_value_drmOpenDevice_8_link1;
                return_value_drmOpenDevice_8_link1=drmOpenDevice_link1((unsigned long int)return_value_strtol_7_link1, i_link1, type_link1);
                return return_value_drmOpenDevice_8_link1;
              }
            }

          }

        }

      }

    }
    return -1;
  }
}

// drmOpenControl
// file ../xf86drm.c line 756
extern signed int drmOpenControl(signed int minor)
{
  signed int return_value_drmOpenMinor_1;
  return_value_drmOpenMinor_1=drmOpenMinor(minor, 0, 1);
  return return_value_drmOpenMinor_1;
}

// drmOpenDevice
// file ../xf86drm.c line 308
static signed int drmOpenDevice(unsigned long int dev, signed int minor, signed int type)
{
  struct stat st;
  const char *dev_name;
  char buf[64l];
  signed int fd;
  unsigned int devmode = (unsigned int)(0400 | 0200 | 0400 >> 3 | 0200 >> 3 | (0400 >> 3) >> 3 | (0200 >> 3) >> 3);
  unsigned int serv_mode;
  unsigned int serv_group;
  switch(type)
  {
    case 0:
    {
      dev_name = "%s/card%d";
      break;
    }
    case 1:
    {
      dev_name = "%s/controlD%d";
      break;
    }
    case 2:
    {
      dev_name = "%s/renderD%d";
      break;
    }
    default:
      return -22;
  }
  sprintf(buf, dev_name, (const void *)"/dev/dri", minor);
  drmMsg("drmOpenDevice: node name is %s\n", (const void *)buf);
  if(!(drm_server_info == ((struct _drmServerInfo *)NULL)))
  {
    if(!(drm_server_info->get_perms == ((void (*)(unsigned int *, unsigned int *))NULL)))
    {
      drm_server_info->get_perms(&serv_group, &serv_mode);
      devmode = serv_mode != 0u ? serv_mode : (unsigned int)(0400 | 0200 | 0400 >> 3 | 0200 >> 3 | (0400 >> 3) >> 3 | (0200 >> 3) >> 3);
      devmode = devmode & (unsigned int)~(0100 | 0100 >> 3 | (0100 >> 3) >> 3);
    }

  }

  signed int udev_count = 0;
  signed int return_value_stat_1;
  signed int return_value_stat_2;
  do
  {

  wait_for_udev:
    ;
    return_value_stat_1=stat("/dev/dri", &st);
    if(!(return_value_stat_1 == 0))
    {
      usleep((unsigned int)20);
      udev_count = udev_count + 1;
      if(udev_count == 50)
        return -1;

      goto wait_for_udev;
    }

    return_value_stat_2=stat(buf, &st);
    if(return_value_stat_2 == 0)
      break;

    usleep((unsigned int)20);
    udev_count = udev_count + 1;
    if(udev_count == 50)
      return -1;

  }
  while((_Bool)1);
  fd=open(buf, 02, 0);
  char *tmp_if_expr_5;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  if(!(fd >= 0))
  {
    return_value___errno_location_3=__errno_location();
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    tmp_if_expr_5 = return_value_strerror_4;
  }

  else
    tmp_if_expr_5 = "OK";
  drmMsg("drmOpenDevice: open result is %d, (%s)\n", fd, tmp_if_expr_5);
  if(fd >= 0)
    return fd;

  else
  {
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    return -(*return_value___errno_location_6);
  }
}

// drmOpenDevice_link1
// file ../xf86drm.c line 308
static signed int drmOpenDevice_link1(unsigned long int dev_link1, signed int minor_link1, signed int type_link1)
{
  struct stat st_link1;
  const char *dev_name_link1;
  char buf_link1[64l];
  signed int fd_link1;
  unsigned int devmode_link1 = (unsigned int)(0400 | 0200 | 0400 >> 3 | 0200 >> 3 | (0400 >> 3) >> 3 | (0200 >> 3) >> 3);
  unsigned int serv_mode_link1;
  unsigned int serv_group_link1;
  switch(type_link1)
  {
    case 0:
    {
      dev_name_link1 = "%s/card%d";
      break;
    }
    case 1:
    {
      dev_name_link1 = "%s/controlD%d";
      break;
    }
    case 2:
    {
      dev_name_link1 = "%s/renderD%d";
      break;
    }
    default:
      return -22;
  }
  sprintf(buf_link1, dev_name_link1, (const void *)"/dev/dri", minor_link1);
  drmMsg("drmOpenDevice: node name is %s\n", (const void *)buf_link1);
  if(!(drm_server_info_link1 == ((struct _drmServerInfo *)NULL)))
  {
    if(!(drm_server_info_link1->get_perms == ((void (*)(unsigned int *, unsigned int *))NULL)))
    {
      drm_server_info_link1->get_perms(&serv_group_link1, &serv_mode_link1);
      devmode_link1 = serv_mode_link1 != 0u ? serv_mode_link1 : (unsigned int)(0400 | 0200 | 0400 >> 3 | 0200 >> 3 | (0400 >> 3) >> 3 | (0200 >> 3) >> 3);
      devmode_link1 = devmode_link1 & (unsigned int)~(0100 | 0100 >> 3 | (0100 >> 3) >> 3);
    }

  }

  signed int udev_count_link1 = 0;
  signed int return_value_stat_1_link1;
  signed int return_value_stat_2_link1;
  do
  {

  wait_for_udev:
    ;
    return_value_stat_1_link1=stat("/dev/dri", &st_link1);
    if(!(return_value_stat_1_link1 == 0))
    {
      usleep((unsigned int)20);
      udev_count_link1 = udev_count_link1 + 1;
      if(udev_count_link1 == 50)
        return -1;

      goto wait_for_udev;
    }

    return_value_stat_2_link1=stat(buf_link1, &st_link1);
    if(return_value_stat_2_link1 == 0)
      break;

    usleep((unsigned int)20);
    udev_count_link1 = udev_count_link1 + 1;
    if(udev_count_link1 == 50)
      return -1;

  }
  while((_Bool)1);
  fd_link1=open(buf_link1, 02, 0);
  char *tmp_if_expr_5_link1;
  signed int *return_value___errno_location_3_link1;
  char *return_value_strerror_4_link1;
  if(!(fd_link1 >= 0))
  {
    return_value___errno_location_3_link1=__errno_location();
    return_value_strerror_4_link1=strerror(*return_value___errno_location_3_link1);
    tmp_if_expr_5_link1 = return_value_strerror_4_link1;
  }

  else
    tmp_if_expr_5_link1 = "OK";
  drmMsg("drmOpenDevice: open result is %d, (%s)\n", fd_link1, tmp_if_expr_5_link1);
  if(fd_link1 >= 0)
    return fd_link1;

  else
  {
    signed int *return_value___errno_location_6_link1;
    return_value___errno_location_6_link1=__errno_location();
    return -(*return_value___errno_location_6_link1);
  }
}

// drmOpenMinor
// file ../xf86drm.c line 437
static signed int drmOpenMinor(signed int minor, signed int create, signed int type)
{
  signed int fd;
  char buf[64l];
  const char *dev_name;
  unsigned long long int return_value_gnu_dev_makedev_1;
  signed int return_value_drmOpenDevice_2;
  if(!(create == 0))
  {
    return_value_gnu_dev_makedev_1=gnu_dev_makedev((unsigned int)226, (unsigned int)minor);
    return_value_drmOpenDevice_2=drmOpenDevice(return_value_gnu_dev_makedev_1, minor, type);
    return return_value_drmOpenDevice_2;
  }

  else
  {
    switch(type)
    {
      case 0:
      {
        dev_name = "%s/card%d";
        break;
      }
      case 1:
      {
        dev_name = "%s/controlD%d";
        break;
      }
      case 2:
      {
        dev_name = "%s/renderD%d";
        break;
      }
      default:
        return -22;
    }
    sprintf(buf, dev_name, (const void *)"/dev/dri", minor);
    fd=open(buf, 02, 0);
    if(fd >= 0)
      return fd;

    else
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      return -(*return_value___errno_location_3);
    }
  }
}

// drmOpenMinor_link1
// file ../xf86drm.c line 437
static signed int drmOpenMinor_link1(signed int minor_link1, signed int create_link1, signed int type_link1)
{
  signed int fd_link1;
  char buf_link1[64l];
  const char *dev_name_link1;
  unsigned long long int return_value_gnu_dev_makedev_1_link1;
  signed int return_value_drmOpenDevice_2_link1;
  if(!(create_link1 == 0))
  {
    return_value_gnu_dev_makedev_1_link1=gnu_dev_makedev((unsigned int)226, (unsigned int)minor_link1);
    return_value_drmOpenDevice_2_link1=drmOpenDevice_link1(return_value_gnu_dev_makedev_1_link1, minor_link1, type_link1);
    return return_value_drmOpenDevice_2_link1;
  }

  else
  {
    switch(type_link1)
    {
      case 0:
      {
        dev_name_link1 = "%s/card%d";
        break;
      }
      case 1:
      {
        dev_name_link1 = "%s/controlD%d";
        break;
      }
      case 2:
      {
        dev_name_link1 = "%s/renderD%d";
        break;
      }
      default:
        return -22;
    }
    sprintf(buf_link1, dev_name_link1, (const void *)"/dev/dri", minor_link1);
    fd_link1=open(buf_link1, 02, 0);
    if(fd_link1 >= 0)
      return fd_link1;

    else
    {
      signed int *return_value___errno_location_3_link1;
      return_value___errno_location_3_link1=__errno_location();
      return -(*return_value___errno_location_3_link1);
    }
  }
}

// drmOpenOnce
// file ../xf86drm.c line 2614
extern signed int drmOpenOnce(void *unused, const char *BusID, signed int *newlyopened)
{
  signed int return_value_drmOpenOnceWithType_1;
  return_value_drmOpenOnceWithType_1=drmOpenOnceWithType(BusID, newlyopened, 0);
  return return_value_drmOpenOnceWithType_1;
}

// drmOpenOnceWithType
// file ../xf86drm.c line 2621
extern signed int drmOpenOnceWithType(const char *BusID, signed int *newlyopened, signed int type)
{
  signed int i;
  signed int fd;
  i = 0;
  signed int return_value_strcmp_1;
  for( ; !(i >= nr_fds); i = i + 1)
  {
    return_value_strcmp_1=strcmp(BusID, connection[(signed long int)i].BusID);
    if(return_value_strcmp_1 == 0)
    {
      if(connection[(signed long int)i].type == type)
      {
        connection[(signed long int)i].refcount = connection[(signed long int)i].refcount + 1;
        *newlyopened = 0;
        return connection[(signed long int)i].fd;
      }

    }

  }
  fd=drmOpenWithType((const char *)(void *)0, BusID, type);
  signed int return_value_strcmp_2;
  if(nr_fds == 16 || !(fd >= 0))
    return fd;

  else
  {
    connection[(signed long int)nr_fds].BusID=strdup(BusID);
    connection[(signed long int)nr_fds].fd = fd;
    connection[(signed long int)nr_fds].refcount = 1;
    connection[(signed long int)nr_fds].type = type;
    *newlyopened = 1;
    nr_fds = nr_fds + 1;
    return fd;
  }
}

// drmOpenRender
// file ../xf86drm.c line 761
extern signed int drmOpenRender(signed int minor)
{
  signed int return_value_drmOpenMinor_1;
  return_value_drmOpenMinor_1=drmOpenMinor(minor, 0, 2);
  return return_value_drmOpenMinor_1;
}

// drmOpenWithType
// file ../../../xf86drm.h line 568
extern signed int drmOpenWithType(const char *name, const char *busid, signed int type)
{
  signed int return_value_drmAvailable_1;
  return_value_drmAvailable_1=drmAvailable();
  if(return_value_drmAvailable_1 == 0)
  {
    if(!(name == ((const char *)NULL)))
    {
      if(!(drm_server_info == ((struct _drmServerInfo *)NULL)))
      {
        if(!(drm_server_info->load_module == ((signed int (*)(const char *))NULL)))
        {
          signed int return_value;
          return_value=drm_server_info->load_module(name);
          if(return_value == 0)
          {
            drmMsg("[drm] failed to load kernel module \"%s\"\n", name);
            return -1;
          }

        }

      }

    }

  }

  if(!(busid == ((const char *)NULL)))
  {
    signed int fd;
    fd=drmOpenByBusid(busid, type);
    if(fd >= 0)
      return fd;

  }

  signed int return_value_drmOpenByName_2;
  if(!(name == ((const char *)NULL)))
  {
    return_value_drmOpenByName_2=drmOpenByName(name, type);
    return return_value_drmOpenByName_2;
  }

  else
    return -1;
}

// drmParsePciBusInfo
// file ../xf86drm.c line 2862
static signed int drmParsePciBusInfo(signed int maj, signed int min, struct _drmPciBusInfo *info)
{
  char path[4097l];
  char data[129l];
  char *str;
  signed int domain;
  signed int bus;
  signed int dev;
  signed int func;
  signed int fd;
  signed int ret;
  snprintf(path, (unsigned long int)4096, "/sys/dev/char/%d:%d/device/uevent", maj, min);
  fd=open(path, 00);
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_3;
  if(!(fd >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    signed long int return_value_read_2;
    return_value_read_2=read(fd, (void *)data, sizeof(char [129l]) /*129ul*/ );
    ret = (signed int)return_value_read_2;
    data[(signed long int)128] = (char)0;
    close(fd);
    if(!(ret >= 0))
    {
      return_value___errno_location_3=__errno_location();
      return -(*return_value___errno_location_3);
    }

    else
    {
      str=strstr(data, "PCI_SLOT_NAME=");
      if(str == ((char *)NULL))
        return -22;

      else
      {
        signed int return_value_sscanf_4;
        return_value_sscanf_4=sscanf(str, "PCI_SLOT_NAME=%04x:%02x:%02x.%1u", &domain, &bus, &dev, &func);
        if(!(return_value_sscanf_4 == 4))
          return -22;

        else
        {
          info->domain = (unsigned short int)domain;
          info->bus = (unsigned char)bus;
          info->dev = (unsigned char)dev;
          info->func = (unsigned char)func;
          return 0;
        }
      }
    }
  }
}

// drmParsePciBusInfo_link1
// file ../xf86drm.c line 2862
static signed int drmParsePciBusInfo_link1(signed int maj_link1, signed int min_link1, struct _drmPciBusInfo *info_link1)
{
  char path_link1[4097l];
  char data_link1[129l];
  char *str_link1;
  signed int domain_link1;
  signed int bus_link1;
  signed int dev_link1;
  signed int func_link1;
  signed int fd_link1;
  signed int ret_link1;
  snprintf(path_link1, (unsigned long int)4096, "/sys/dev/char/%d:%d/device/uevent", maj_link1, min_link1);
  fd_link1=open(path_link1, 00);
  signed int *return_value___errno_location_1_link1;
  signed int *return_value___errno_location_3_link1;
  if(!(fd_link1 >= 0))
  {
    return_value___errno_location_1_link1=__errno_location();
    return -(*return_value___errno_location_1_link1);
  }

  else
  {
    signed long int return_value_read_2_link1;
    return_value_read_2_link1=read(fd_link1, (void *)data_link1, sizeof(char [129l]) /*129ul*/ );
    ret_link1 = (signed int)return_value_read_2_link1;
    data_link1[(signed long int)128] = (char)0;
    close(fd_link1);
    if(!(ret_link1 >= 0))
    {
      return_value___errno_location_3_link1=__errno_location();
      return -(*return_value___errno_location_3_link1);
    }

    else
    {
      str_link1=strstr(data_link1, "PCI_SLOT_NAME=");
      if(str_link1 == ((char *)NULL))
        return -22;

      else
      {
        signed int return_value_sscanf_4_link1;
        return_value_sscanf_4_link1=sscanf(str_link1, "PCI_SLOT_NAME=%04x:%02x:%02x.%1u", &domain_link1, &bus_link1, &dev_link1, &func_link1);
        if(!(return_value_sscanf_4_link1 == 4))
          return -22;

        else
        {
          info_link1->domain = (unsigned short int)domain_link1;
          info_link1->bus = (unsigned char)bus_link1;
          info_link1->dev = (unsigned char)dev_link1;
          info_link1->func = (unsigned char)func_link1;
          return 0;
        }
      }
    }
  }
}

// drmParsePciDeviceInfo
// file ../xf86drm.c line 2948
static signed int drmParsePciDeviceInfo(const char *d_name, struct _drmPciDeviceInfo *device)
{
  char path[4097l];
  unsigned char config[64l];
  signed int fd;
  signed int ret;
  snprintf(path, (unsigned long int)4096, "/sys/class/drm/%s/device/config", d_name);
  fd=open(path, 00);
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_3;
  if(!(fd >= 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    signed long int return_value_read_2;
    return_value_read_2=read(fd, (void *)config, sizeof(unsigned char [64l]) /*64ul*/ );
    ret = (signed int)return_value_read_2;
    close(fd);
    if(!(ret >= 0))
    {
      return_value___errno_location_3=__errno_location();
      return -(*return_value___errno_location_3);
    }

    else
    {
      device->vendor_id = (unsigned short int)((signed int)config[(signed long int)0] | (signed int)config[(signed long int)1] << 8);
      device->device_id = (unsigned short int)((signed int)config[(signed long int)2] | (signed int)config[(signed long int)3] << 8);
      device->revision_id = config[(signed long int)8];
      device->subvendor_id = (unsigned short int)((signed int)config[(signed long int)44] | (signed int)config[(signed long int)45] << 8);
      device->subdevice_id = (unsigned short int)((signed int)config[(signed long int)46] | (signed int)config[(signed long int)47] << 8);
      return 0;
    }
  }
}

// drmParsePciDeviceInfo_link1
// file ../xf86drm.c line 2948
static signed int drmParsePciDeviceInfo_link1(const char *d_name_link1, struct _drmPciDeviceInfo *device_link1)
{
  char path_link1[4097l];
  unsigned char config_link1[64l];
  signed int fd_link1;
  signed int ret_link1;
  snprintf(path_link1, (unsigned long int)4096, "/sys/class/drm/%s/device/config", d_name_link1);
  fd_link1=open(path_link1, 00);
  signed int *return_value___errno_location_1_link1;
  signed int *return_value___errno_location_3_link1;
  if(!(fd_link1 >= 0))
  {
    return_value___errno_location_1_link1=__errno_location();
    return -(*return_value___errno_location_1_link1);
  }

  else
  {
    signed long int return_value_read_2_link1;
    return_value_read_2_link1=read(fd_link1, (void *)config_link1, sizeof(unsigned char [64l]) /*64ul*/ );
    ret_link1 = (signed int)return_value_read_2_link1;
    close(fd_link1);
    if(!(ret_link1 >= 0))
    {
      return_value___errno_location_3_link1=__errno_location();
      return -(*return_value___errno_location_3_link1);
    }

    else
    {
      device_link1->vendor_id = (unsigned short int)((signed int)config_link1[(signed long int)0] | (signed int)config_link1[(signed long int)1] << 8);
      device_link1->device_id = (unsigned short int)((signed int)config_link1[(signed long int)2] | (signed int)config_link1[(signed long int)3] << 8);
      device_link1->revision_id = config_link1[(signed long int)8];
      device_link1->subvendor_id = (unsigned short int)((signed int)config_link1[(signed long int)44] | (signed int)config_link1[(signed long int)45] << 8);
      device_link1->subdevice_id = (unsigned short int)((signed int)config_link1[(signed long int)46] | (signed int)config_link1[(signed long int)47] << 8);
      return 0;
    }
  }
}

// drmParseSubsystemType
// file ../xf86drm.c line 2835
static signed int drmParseSubsystemType(signed int maj, signed int min)
{
  char path[4097l];
  char link[4097l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *name;
  snprintf(path, (unsigned long int)4096, "/sys/dev/char/%d:%d/device/subsystem", maj, min);
  signed long int return_value_readlink_2;
  return_value_readlink_2=readlink(path, link, (unsigned long int)4096);
  signed int *return_value___errno_location_1;
  if(!(return_value_readlink_2 >= 0l))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    name=strrchr(link, 47);
    if(name == ((char *)NULL))
      return -22;

    else
    {
      signed int return_value_strncmp_3;
      return_value_strncmp_3=strncmp(name, "/pci", (unsigned long int)4);
      if(return_value_strncmp_3 == 0)
        return 0;

      else
        return -22;
    }
  }
}

// drmParseSubsystemType_link1
// file ../xf86drm.c line 2835
static signed int drmParseSubsystemType_link1(signed int maj_link1, signed int min_link1)
{
  char path_link1[4097l];
  char link_link1[4097l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *name_link1;
  snprintf(path_link1, (unsigned long int)4096, "/sys/dev/char/%d:%d/device/subsystem", maj_link1, min_link1);
  signed long int return_value_readlink_2_link1;
  return_value_readlink_2_link1=readlink(path_link1, link_link1, (unsigned long int)4096);
  signed int *return_value___errno_location_1_link1;
  if(!(return_value_readlink_2_link1 >= 0l))
  {
    return_value___errno_location_1_link1=__errno_location();
    return -(*return_value___errno_location_1_link1);
  }

  else
  {
    name_link1=strrchr(link_link1, 47);
    if(name_link1 == ((char *)NULL))
      return -22;

    else
    {
      signed int return_value_strncmp_3_link1;
      return_value_strncmp_3_link1=strncmp(name_link1, "/pci", (unsigned long int)4);
      if(return_value_strncmp_3_link1 == 0)
        return 0;

      else
        return -22;
    }
  }
}

// drmPrimeFDToHandle
// file ../../xf86drm.h line 759
extern signed int drmPrimeFDToHandle(signed int fd, signed int prime_fd, unsigned int *handle)
{
  struct drm_prime_handle args;
  signed int ret;
  memset((void *)&args, 0, sizeof(struct drm_prime_handle) /*12ul*/ );
  args.fd = prime_fd;
  ret=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x2e << 0)) | sizeof(struct drm_prime_handle) /*12ul*/  << 0 + 8 + 8, (void *)&args);
  if(!(ret == 0))
    return ret;

  else
  {
    *handle = args.handle;
    return 0;
  }
}

// drmPrimeHandleToFD
// file ../../xf86drm.h line 758
extern signed int drmPrimeHandleToFD(signed int fd, unsigned int handle, unsigned int flags, signed int *prime_fd)
{
  struct drm_prime_handle args;
  signed int ret;
  memset((void *)&args, 0, sizeof(struct drm_prime_handle) /*12ul*/ );
  args.fd = -1;
  args.handle = handle;
  args.flags = flags;
  ret=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x2d << 0)) | sizeof(struct drm_prime_handle) /*12ul*/  << 0 + 8 + 8, (void *)&args);
  if(!(ret == 0))
    return ret;

  else
  {
    *prime_fd = args.fd;
    return 0;
  }
}

// drmProcessPciDevice
// file ../xf86drm.c line 2999
static signed int drmProcessPciDevice(struct _drmDevice **device, const char *d_name, const char *node, signed int node_type, signed int maj, signed int min, _Bool fetch_deviceinfo)
{
  signed int max_node_str;
  max_node_str=drmGetMaxNodeName();
  signed int ret;
  signed int i;
  char *addr;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _drmDevice) /*32ul*/  + (unsigned long int)3 * (sizeof(void *) /*8ul*/  + (unsigned long int)max_node_str) + sizeof(struct _drmPciBusInfo) /*6ul*/  + sizeof(struct _drmPciDeviceInfo) /*10ul*/ );
  *device = (struct _drmDevice *)return_value_calloc_1;
  if(*device == ((struct _drmDevice *)NULL))
    return -12;

  else
  {
    addr = (char *)*device;
    (*device)->bustype = 0;
    (*device)->available_nodes = 1 << node_type;
    addr = addr + (signed long int)sizeof(struct _drmDevice) /*32ul*/ ;
    (*device)->nodes = (char **)addr;
    addr = addr + (signed long int)((unsigned long int)3 * sizeof(void *) /*8ul*/ );
    i = 0;
    for( ; !(i >= 3); i = i + 1)
    {
      (*device)->nodes[(signed long int)i] = addr;
      addr = addr + (signed long int)max_node_str;
    }
    memcpy((void *)(*device)->nodes[(signed long int)node_type], (const void *)node, (unsigned long int)max_node_str);
    (*device)->businfo.pci = (struct _drmPciBusInfo *)addr;
    ret=drmParsePciBusInfo(maj, min, (*device)->businfo.pci);
    if(ret == 0)
    {
      if(!(fetch_deviceinfo == (_Bool)0))
      {
        addr = addr + (signed long int)sizeof(struct _drmPciBusInfo) /*6ul*/ ;
        (*device)->deviceinfo.pci = (struct _drmPciDeviceInfo *)addr;
        ret=drmParsePciDeviceInfo(d_name, (*device)->deviceinfo.pci);
        if(!(ret == 0))
          goto free_device;

      }

      return 0;
    }

    else
    {

    free_device:
      ;
      free((void *)*device);
      *device = (struct _drmDevice *)(void *)0;
      return ret;
    }
  }
}

// drmProcessPciDevice_link1
// file ../xf86drm.c line 2999
static signed int drmProcessPciDevice_link1(struct _drmDevice **device_link1, const char *d_name_link1, const char *node_link1, signed int node_type_link1, signed int maj_link1, signed int min_link1, _Bool fetch_deviceinfo_link1)
{
  signed int max_node_str_link1;
  max_node_str_link1=drmGetMaxNodeName_link1();
  signed int ret_link1;
  signed int i_link1;
  char *addr_link1;
  void *return_value_calloc_1_link1;
  return_value_calloc_1_link1=calloc((unsigned long int)1, sizeof(struct _drmDevice) /*32ul*/  + (unsigned long int)3 * (sizeof(void *) /*8ul*/  + (unsigned long int)max_node_str_link1) + sizeof(struct _drmPciBusInfo) /*6ul*/  + sizeof(struct _drmPciDeviceInfo) /*10ul*/ );
  *device_link1 = (struct _drmDevice *)return_value_calloc_1_link1;
  if(*device_link1 == ((struct _drmDevice *)NULL))
    return -12;

  else
  {
    addr_link1 = (char *)*device_link1;
    (*device_link1)->bustype = 0;
    (*device_link1)->available_nodes = 1 << node_type_link1;
    addr_link1 = addr_link1 + (signed long int)sizeof(struct _drmDevice) /*32ul*/ ;
    (*device_link1)->nodes = (char **)addr_link1;
    addr_link1 = addr_link1 + (signed long int)((unsigned long int)3 * sizeof(void *) /*8ul*/ );
    i_link1 = 0;
    for( ; !(i_link1 >= 3); i_link1 = i_link1 + 1)
    {
      (*device_link1)->nodes[(signed long int)i_link1] = addr_link1;
      addr_link1 = addr_link1 + (signed long int)max_node_str_link1;
    }
    memcpy((void *)(*device_link1)->nodes[(signed long int)node_type_link1], (const void *)node_link1, (unsigned long int)max_node_str_link1);
    (*device_link1)->businfo.pci = (struct _drmPciBusInfo *)addr_link1;
    ret_link1=drmParsePciBusInfo_link1(maj_link1, min_link1, (*device_link1)->businfo.pci);
    if(ret_link1 == 0)
    {
      if(!(fetch_deviceinfo_link1 == (_Bool)0))
      {
        addr_link1 = addr_link1 + (signed long int)sizeof(struct _drmPciBusInfo) /*6ul*/ ;
        (*device_link1)->deviceinfo.pci = (struct _drmPciDeviceInfo *)addr_link1;
        ret_link1=drmParsePciDeviceInfo_link1(d_name_link1, (*device_link1)->deviceinfo.pci);
        if(!(ret_link1 == 0))
          goto free_device;

      }

      return 0;
    }

    else
    {

    free_device:
      ;
      free((void *)*device_link1);
      *device_link1 = (struct _drmDevice *)(void *)0;
      return ret_link1;
    }
  }
}

// drmRandom
// file ../xf86drm.h line 706
extern unsigned long int drmRandom(void *state)
{
  struct RandomState *s = (struct RandomState *)state;
  unsigned long int hi;
  unsigned long int lo;
  hi = s->seed / s->q;
  lo = s->seed % s->q;
  s->seed = s->a * lo - s->r * hi;
  if(s->r * hi >= s->a * lo)
    s->seed = s->seed + s->m;

  return s->seed;
}

// drmRandomCreate
// file ../xf86drm.h line 704
extern void * drmRandomCreate(unsigned long int seed)
{
  struct RandomState *state;
  void *return_value_drmMalloc_1;
  return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct RandomState) /*56ul*/ );
  state = (struct RandomState *)return_value_drmMalloc_1;
  if(state == ((struct RandomState *)NULL))
    return (void *)0;

  else
  {
    state->magic = (unsigned long int)0xfeedbeef;
    state->a = (unsigned long int)48271;
    state->m = (unsigned long int)2147483647;
    state->check = (unsigned long int)399268537;
    state->q = state->m / state->a;
    state->r = state->m % state->a;
    state->seed = seed;
    if(!(state->seed >= 1ul))
      state->seed = (unsigned long int)1;

    if(state->seed >= state->m)
      state->seed = state->m - (unsigned long int)1;

    return (void *)state;
  }
}

// drmRandomDestroy
// file ../xf86drm.h line 705
extern signed int drmRandomDestroy(void *state)
{
  drmFree(state);
  return 0;
}

// drmRandomDouble
// file ../xf86drmRandom.c line 132
extern double drmRandomDouble(void *state)
{
  struct RandomState *s = (struct RandomState *)state;
  unsigned long int return_value_drmRandom_1;
  return_value_drmRandom_1=drmRandom(state);
  return (double)return_value_drmRandom_1 / (double)s->m;
}

// drmRmMap
// file ../xf86drm.c line 1103
extern signed int drmRmMap(signed int fd, unsigned int handle)
{
  struct drm_map map;
  memset((void *)&map, 0, sizeof(struct drm_map) /*40ul*/ );
  map.handle = (void *)(unsigned long int)handle;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x1b << 0)) | sizeof(struct drm_map) /*40ul*/  << 0 + 8 + 8, (void *)&map);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmSLCreate
// file ../xf86drmSL.c line 100
extern void * drmSLCreate(void)
{
  struct SkipList *list;
  signed int i;
  void *return_value_drmMalloc_1;
  return_value_drmMalloc_1=drmMalloc((signed int)sizeof(struct SkipList) /*32ul*/ );
  list = (struct SkipList *)return_value_drmMalloc_1;
  if(list == ((struct SkipList *)NULL))
    return (void *)0;

  else
  {
    list->magic = 0xfacade00LU;
    list->level = 0;
    list->head=SLCreateEntry(16, (unsigned long int)0, (void *)0);
    list->count = 0;
    i = 0;
    for( ; !(i >= 17); i = i + 1)
      list->head->forward[(signed long int)i] = (struct SLEntry *)(void *)0;
    return (void *)list;
  }
}

// drmSLDelete
// file ../xf86drmSL.c line 187
extern signed int drmSLDelete(void *l, unsigned long int key)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *update[17l];
  struct SLEntry *entry;
  signed int i;
  _Bool tmp_if_expr_1;
  if(!(list->magic == 0xfacade00LU))
    return -1;

  else
  {
    entry=SLLocate((void *)list, key, update);
    if(entry == ((struct SLEntry *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = entry->key != key ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      return 1;

    else
    {
      i = 0;
      for( ; list->level >= i; i = i + 1)
        if(update[(signed long int)i]->forward[(signed long int)i] == entry)
          update[(signed long int)i]->forward[(signed long int)i] = entry->forward[(signed long int)i];

      entry->magic = 0xdecea5edLU;
      drmFree((void *)entry);
      for( ; !(list->level == 0); list->level = list->level - 1)
        if(!(list->head->forward[(signed long int)list->level] == ((struct SLEntry *)NULL)))
          break;

      list->count = list->count - 1;
      return 0;
    }
  }
}

// drmSLDestroy
// file ../xf86drmSL.c line 117
extern signed int drmSLDestroy(void *l)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *entry;
  struct SLEntry *next;
  if(!(list->magic == 0xfacade00LU))
    return -1;

  else
  {
    entry = list->head;
    for( ; !(entry == ((struct SLEntry *)NULL)); entry = next)
    {
      if(!(entry->magic == 0x00fab1edLU))
        return -1;

      next = entry->forward[(signed long int)0];
      entry->magic = 0xdecea5edLU;
      drmFree((void *)entry);
    }
    list->magic = 0xdecea5edLU;
    drmFree((void *)list);
    return 0;
  }
}

// drmSLDump
// file ../xf86drmSL.c line 286
extern void drmSLDump(void *l)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *entry;
  signed int i;
  if(!(list->magic == 0xfacade00LU))
    printf("Bad magic: 0x%08lx (expected 0x%08lx)\n", list->magic, 0xfacade00LU);

  else
  {
    printf("Level = %d, count = %d\n", list->level, list->count);
    entry = list->head;
    for( ; !(entry == ((struct SLEntry *)NULL)); entry = entry->forward[(signed long int)0])
    {
      if(!(entry->magic == 0x00fab1edLU))
        printf("Bad magic: 0x%08lx (expected 0x%08lx)\n", list->magic, 0x00fab1edLU);

      printf("\nEntry %p <0x%08lx, %p> has %2d levels\n", entry, entry->key, entry->value, entry->levels);
      i = 0;
      for( ; !(i >= entry->levels); i = i + 1)
        if(!(entry->forward[(signed long int)i] == ((struct SLEntry *)NULL)))
          printf("   %2d: %p <0x%08lx, %p>\n", i, entry->forward[(signed long int)i], entry->forward[(signed long int)i]->key, entry->forward[(signed long int)i]->value);

        else
          printf("   %2d: %p\n", i, entry->forward[(signed long int)i]);
    }
  }
}

// drmSLFirst
// file ../xf86drmSL.c line 275
extern signed int drmSLFirst(void *l, unsigned long int *key, void **value)
{
  struct SkipList *list = (struct SkipList *)l;
  if(!(list->magic == 0xfacade00LU))
    return -1;

  else
  {
    list->p0 = list->head->forward[(signed long int)0];
    signed int return_value_drmSLNext_1;
    return_value_drmSLNext_1=drmSLNext((void *)list, key, value);
    return return_value_drmSLNext_1;
  }
}

// drmSLInsert
// file ../xf86drmSL.c line 154
extern signed int drmSLInsert(void *l, unsigned long int key, void *value)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *entry;
  struct SLEntry *update[17l];
  signed int level;
  signed int i;
  if(!(list->magic == 0xfacade00LU))
    return -1;

  else
  {
    entry=SLLocate((void *)list, key, update);
    if(!(entry == ((struct SLEntry *)NULL)))
    {
      if(!(entry->key == key))
        goto __CPROVER_DUMP_L2;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      level=SLRandomLevel();
      if(!(list->level >= level))
      {
        list->level = list->level + 1;
        level = list->level;
        update[(signed long int)level] = list->head;
      }

      entry=SLCreateEntry(level, key, value);
      i = 0;
      for( ; level >= i; i = i + 1)
      {
        entry->forward[(signed long int)i] = update[(signed long int)i]->forward[(signed long int)i];
        update[(signed long int)i]->forward[(signed long int)i] = entry;
      }
      list->count = list->count + 1;
      return 0;
    }
  }
}

// drmSLLookup
// file ../xf86drmSL.c line 214
extern signed int drmSLLookup(void *l, unsigned long int key, void **value)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *update[17l];
  struct SLEntry *entry;
  entry=SLLocate((void *)list, key, update);
  if(!(entry == ((struct SLEntry *)NULL)))
  {
    if(!(entry->key == key))
      goto __CPROVER_DUMP_L1;

    *value = (void *)entry;
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    *value = (void *)0;
    return -1;
  }
}

// drmSLLookupNeighbors
// file ../xf86drmSL.c line 230
extern signed int drmSLLookupNeighbors(void *l, unsigned long int key, unsigned long int *prev_key, void **prev_value, unsigned long int *next_key, void **next_value)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *update[17l] = { ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL), ((struct SLEntry *)NULL) };
  signed int retcode = 0;
  SLLocate((void *)list, key, update);
  *next_key = key;
  *prev_key = *next_key;
  *next_value = (void *)0;
  *prev_value = *next_value;
  if(!(update[0l] == ((struct SLEntry *)NULL)))
  {
    *prev_key = update[(signed long int)0]->key;
    *prev_value = update[(signed long int)0]->value;
    retcode = retcode + 1;
    if(!(update[0l]->forward[0l] == ((struct SLEntry *)NULL)))
    {
      *next_key = update[(signed long int)0]->forward[(signed long int)0]->key;
      *next_value = update[(signed long int)0]->forward[(signed long int)0]->value;
      retcode = retcode + 1;
    }

  }

  return retcode;
}

// drmSLNext
// file ../xf86drmSL.c line 256
extern signed int drmSLNext(void *l, unsigned long int *key, void **value)
{
  struct SkipList *list = (struct SkipList *)l;
  struct SLEntry *entry;
  if(!(list->magic == 0xfacade00LU))
    return -1;

  else
  {
    entry = list->p0;
    if(!(entry == ((struct SLEntry *)NULL)))
    {
      list->p0 = entry->forward[(signed long int)0];
      *key = entry->key;
      *value = entry->value;
      return 1;
    }

    else
    {
      list->p0 = (struct SLEntry *)(void *)0;
      return 0;
    }
  }
}

// drmScatterGatherAlloc
// file ../xf86drm.c line 2053
extern signed int drmScatterGatherAlloc(signed int fd, unsigned long int size, unsigned int *handle)
{
  struct drm_scatter_gather sg;
  memset((void *)&sg, 0, sizeof(struct drm_scatter_gather) /*16ul*/ );
  *handle = (unsigned int)0;
  sg.size = size;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x38 << 0)) | sizeof(struct drm_scatter_gather) /*16ul*/  << 0 + 8 + 8, (void *)&sg);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
  {
    *handle = (unsigned int)sg.handle;
    return 0;
  }
}

// drmScatterGatherFree
// file ../xf86drm.c line 2067
extern signed int drmScatterGatherFree(signed int fd, unsigned int handle)
{
  struct drm_scatter_gather sg;
  memset((void *)&sg, 0, sizeof(struct drm_scatter_gather) /*16ul*/ );
  sg.handle = (unsigned long int)handle;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x39 << 0)) | sizeof(struct drm_scatter_gather) /*16ul*/  << 0 + 8 + 8, (void *)&sg);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmSetBusid
// file ../xf86drm.c line 998
extern signed int drmSetBusid(signed int fd, const char *busid)
{
  struct drm_unique u;
  memset((void *)&u, 0, sizeof(struct drm_unique) /*16ul*/ );
  u.unique = (char *)busid;
  u.unique_len=strlen(busid);
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x10 << 0)) | sizeof(struct drm_unique) /*16ul*/  << 0 + 8 + 8, (void *)&u);
  if(!(return_value_drmIoctl_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  return 0;
}

// drmSetClientCap
// file ../xf86drm.c line 932
extern signed int drmSetClientCap(signed int fd, unsigned long int capability, unsigned long int value)
{
  struct drm_set_client_cap cap;
  memset((void *)&cap, 0, sizeof(struct drm_set_client_cap) /*16ul*/ );
  cap.capability = capability;
  cap.value = value;
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x0d << 0)) | sizeof(struct drm_set_client_cap) /*16ul*/  << 0 + 8 + 8, (void *)&cap);
  return return_value_drmIoctl_1;
}

// drmSetContextFlags
// file ../xf86drm.c line 1571
extern signed int drmSetContextFlags(signed int fd, unsigned int context, enum anonymous_9 flags)
{
  struct drm_ctx ctx;
  memset((void *)&ctx, 0, sizeof(struct drm_ctx) /*8ul*/ );
  ctx.handle = context;
  if(!((DRM_CONTEXT_PRESERVED & (signed int)flags) == 0))
    ctx.flags = ctx.flags | (enum drm_ctx_flags)_DRM_CONTEXT_PRESERVED;

  if(!((DRM_CONTEXT_2DONLY & (signed int)flags) == 0))
    ctx.flags = ctx.flags | (enum drm_ctx_flags)_DRM_CONTEXT_2DONLY;

  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x22 << 0)) | sizeof(struct drm_ctx) /*8ul*/  << 0 + 8 + 8, (void *)&ctx);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmSetInterfaceVersion
// file ../xf86drm.c line 2471
extern signed int drmSetInterfaceVersion(signed int fd, struct _drmSetVersion *version)
{
  signed int retcode = 0;
  struct drm_set_version sv;
  memset((void *)&sv, 0, sizeof(struct drm_set_version) /*16ul*/ );
  sv.drm_di_major = version->drm_di_major;
  sv.drm_di_minor = version->drm_di_minor;
  sv.drm_dd_major = version->drm_dd_major;
  sv.drm_dd_minor = version->drm_dd_minor;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x07 << 0)) | sizeof(struct drm_set_version) /*16ul*/  << 0 + 8 + 8, (void *)&sv);
  if(!(return_value_drmIoctl_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    retcode = -(*return_value___errno_location_1);
  }

  version->drm_di_major = sv.drm_di_major;
  version->drm_di_minor = sv.drm_di_minor;
  version->drm_dd_major = sv.drm_dd_major;
  version->drm_dd_minor = sv.drm_dd_minor;
  return retcode;
}

// drmSetMaster
// file ../xf86drm.c line 2673
extern signed int drmSetMaster(signed int fd)
{
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x1e << 0) | (unsigned int)(0 << 0 + 8 + 8)), (void *)0);
  return return_value_drmIoctl_1;
}

// drmSetServerInfo
// file ../xf86drm.c line 108
extern void drmSetServerInfo(struct _drmServerInfo *info)
{
  drm_server_info = info;
}

// drmSwitchToContext
// file ../xf86drm.c line 1560
extern signed int drmSwitchToContext(signed int fd, unsigned int context)
{
  struct drm_ctx ctx;
  memset((void *)&ctx, 0, sizeof(struct drm_ctx) /*8ul*/ );
  ctx.handle = context;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x24 << 0)) | sizeof(struct drm_ctx) /*8ul*/  << 0 + 8 + 8, (void *)&ctx);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmUnlock
// file ../xf86drm.c line 1484
extern signed int drmUnlock(signed int fd, unsigned int context)
{
  struct drm_lock lock;
  memset((void *)&lock, 0, sizeof(struct drm_lock) /*8ul*/ );
  lock.context = (signed int)context;
  signed int return_value_drmIoctl_1;
  return_value_drmIoctl_1=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x2b << 0)) | sizeof(struct drm_lock) /*8ul*/  << 0 + 8 + 8, (void *)&lock);
  return return_value_drmIoctl_1;
}

// drmUnmap
// file ../xf86drm.c line 1280
extern signed int drmUnmap(void *address, unsigned int size)
{
  signed int return_value_drm_munmap_1;
  return_value_drm_munmap_1=drm_munmap_link1(address, (unsigned long int)size);
  return return_value_drm_munmap_1;
}

// drmUnmapBufs
// file ../xf86drm.c line 1381
extern signed int drmUnmapBufs(struct _drmBufMap *bufs)
{
  signed int i = 0;
  for( ; !(i >= bufs->count); i = i + 1)
    drm_munmap_link1((bufs->list + (signed long int)i)->address, (unsigned long int)(bufs->list + (signed long int)i)->total);
  drmFree((void *)bufs->list);
  drmFree((void *)bufs);
  return 0;
}

// drmUpdateDrawableInfo
// file ../xf86drm.c line 1659
extern signed int drmUpdateDrawableInfo(signed int fd, unsigned int handle, enum anonymous_12 type, unsigned int num, void *data)
{
  struct drm_update_draw update;
  memset((void *)&update, 0, sizeof(struct drm_update_draw) /*24ul*/ );
  update.handle = handle;
  update.type = (unsigned int)type;
  update.num = num;
  update.data = (unsigned long int)data;
  signed int return_value_drmIoctl_2;
  return_value_drmIoctl_2=drmIoctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x3f << 0)) | sizeof(struct drm_update_draw) /*24ul*/  << 0 + 8 + 8, (void *)&update);
  signed int *return_value___errno_location_1;
  if(!(return_value_drmIoctl_2 == 0))
  {
    return_value___errno_location_1=__errno_location();
    return -(*return_value___errno_location_1);
  }

  else
    return 0;
}

// drmWaitVBlank
// file ../xf86drm.c line 2089
extern signed int drmWaitVBlank(signed int fd, union _drmVBlank *vbl)
{
  struct timespec timeout;
  struct timespec cur;
  signed int ret;
  ret=clock_gettime(1, &timeout);
  if(!(ret >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "clock_gettime failed: %s\n", return_value_strerror_2);
    goto out;
  }

  timeout.tv_sec = timeout.tv_sec + 1l;
  signed int *return_value___errno_location_6;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  do
  {
    ret=ioctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x3a << 0)) | sizeof(union drm_wait_vblank) /*24ul*/  << 0 + 8 + 8, vbl);
    vbl->request.type = vbl->request.type & (enum anonymous_24)~DRM_VBLANK_RELATIVE;
    if(!(ret == 0))
    {
      return_value___errno_location_6=__errno_location();
      if(*return_value___errno_location_6 == 4)
      {
        clock_gettime(1, &cur);
        if(cur.tv_sec == timeout.tv_sec && cur.tv_nsec >= timeout.tv_nsec || !(1l + timeout.tv_sec >= cur.tv_sec))
        {
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          *return_value___errno_location_5 = 16;
          ret = -1;
          break;
        }

      }

    }

    if(!(ret == 0))
    {
      return_value___errno_location_3=__errno_location();
      tmp_if_expr_4 = *return_value___errno_location_3 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
  }
  while(tmp_if_expr_4);

out:
  ;
  return ret;
}

// drm_munmap
// file ../../libdrm_macros.h line 74
static inline signed int drm_munmap(void *addr, unsigned long int length)
{

__CPROVER_DUMP_L1:
  ;
  signed int return_value_munmap_1;
  return_value_munmap_1=munmap(addr, length);
  return return_value_munmap_1;
}

// drm_munmap_link1
// file ../libdrm_macros.h line 74
static inline signed int drm_munmap_link1(void *addr_link1, unsigned long int length_link1)
{

__CPROVER_DUMP_L1:
  ;
  signed int return_value_munmap_1_link1;
  return_value_munmap_1_link1=munmap(addr_link1, length_link1);
  return return_value_munmap_1_link1;
}

// drm_munmap_link2
// file ../libdrm_macros.h line 74
static inline signed int drm_munmap_link2(void *addr_link2, unsigned long int length_link2)
{

__CPROVER_DUMP_L1:
  ;
  signed int return_value_munmap_1_link2;
  return_value_munmap_1_link2=munmap(addr_link2, length_link2);
  return return_value_munmap_1_link2;
}

// ioctl
// file ../../../tests/nouveau/threaded.c line 43
extern signed int ioctl(signed int fd, unsigned long int request, ...)
{
  __builtin_va_list va;
  signed int ret;
  void *arg;
  va_start(va, request);
  arg=va_arg(va, __typeof__(arg));
  ret=old_ioctl(fd, request, arg);
  va_end(va);
  signed int *return_value___errno_location_1;
  if(request == 1074291721ul && !(ret >= 0))
  {
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 22)
      failed = 1;

  }

  return ret;
}

// main
// file ../../../tests/nouveau/threaded.c line 74
signed int main(signed int argc, char **argv)
{
  struct _drmVersion *version;
  const char *device = (const char *)(void *)0;
  signed int err;
  signed int fd;
  signed int fd2;
  struct nouveau_device *nvdev;
  struct nouveau_device *nvdev2;
  struct nouveau_bo *bo;
  unsigned long int t1;
  unsigned long int t2;
  void *return_value_dlsym_1;
  return_value_dlsym_1=dlsym((void *)-1l, "ioctl");
  old_ioctl = (signed int (*)(signed int, unsigned long int, ...))return_value_dlsym_1;
  signed int *return_value___errno_location_2;
  if(!(argc >= 2))
  {
    fd=drmOpenWithType("nouveau", (const char *)(void *)0, 2);
    if(fd >= 0)
      fd2=drmOpenWithType("nouveau", (const char *)(void *)0, 2);

  }

  else
  {
    device = argv[(signed long int)1];
    fd=open(device, 02);
    if(fd >= 0)
      fd2=open(device, 02);

    else
    {
      return_value___errno_location_2=__errno_location();
      fd = -(*return_value___errno_location_2);
      fd2 = fd;
    }
  }
  if(!(fd >= 0))
  {
    fprintf(stderr, "Opening nouveau render node failed with %i\n", fd);
    return device != ((const char *)NULL) ? -fd : 77;
  }

  else
  {
    if(!(fd2 >= 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      fprintf(stderr, "Opening second nouveau render node failed with %i\n", -(*return_value___errno_location_3));
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      return *return_value___errno_location_4;
    }

    version=drmGetVersion(fd);
    if(!(version == ((struct _drmVersion *)NULL)))
    {
      printf("Version: %d.%d.%d\n", version->version_major, version->version_minor, version->version_patchlevel);
      printf("  Name: %s\n", version->name);
      printf("  Date: %s\n", version->date);
      printf("  Description: %s\n", version->desc);
      drmFreeVersion(version);
    }

    err=nouveau_device_wrap(fd, 0, &nvdev);
    if(err == 0)
      err=nouveau_device_wrap(fd2, 0, &nvdev2);

    if(!(err >= 0))
      return 1;

    else
    {
      err=nouveau_bo_new(nvdev2, (unsigned int)0x00000002, (unsigned int)0, (unsigned long int)4096, (union nouveau_bo_config *)(void *)0, &bo);
      if(err == 0)
        err=nouveau_bo_set_prime(bo, &import_fd);

      if(err == 0)
      {
        pthread_create(&t1, (const union pthread_attr_t *)(void *)0, openclose, (void *)nvdev);
        pthread_create(&t2, (const union pthread_attr_t *)(void *)0, openclose, (void *)nvdev);
      }

      pthread_join(t1, (void **)(void *)0);
      pthread_join(t2, (void **)(void *)0);
      close(import_fd);
      nouveau_bo_ref((struct nouveau_bo *)(void *)0, &bo);
      nouveau_device_del(&nvdev2);
      nouveau_device_del(&nvdev);
      if(!(device == ((const char *)NULL)))
      {
        close(fd2);
        close(fd);
      }

      else
      {
        drmClose(fd2);
        drmClose(fd);
      }
      if(!(failed == 0))
        fprintf(stderr, "DRM_IOCTL_GEM_CLOSE failed with EINVAL,\nrace in opening/closing bo is likely.\n");

      return failed;
    }
  }
}

// nouveau_bo
// file ../../nouveau/private.h line 91
static inline struct nouveau_bo_priv * nouveau_bo(struct nouveau_bo *bo)
{
  return (struct nouveau_bo_priv *)bo;
}

// nouveau_bo_link1
// file ../../nouveau/private.h line 91
static inline struct nouveau_bo_priv * nouveau_bo_link1(struct nouveau_bo *bo_link1)
{
  return (struct nouveau_bo_priv *)bo_link1;
}

// nouveau_bo_link2
// file ../../nouveau/private.h line 91
static inline struct nouveau_bo_priv * nouveau_bo_link2(struct nouveau_bo *bo_link2)
{
  return (struct nouveau_bo_priv *)bo_link2;
}

// nouveau_bo_del
// file ../../nouveau/nouveau.c line 595
static void nouveau_bo_del(struct nouveau_bo *bo)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&bo->device->object);
  struct nouveau_device_priv *nvdev;
  nvdev=nouveau_device(bo->device);
  struct nouveau_bo_priv *nvbo;
  nvbo=nouveau_bo(bo);
  struct drm_gem_close req = { .handle=bo->handle, .pad=0u };
  if(!(nvbo->head.next == ((struct nouveau_list *)NULL)))
  {
    pthread_mutex_lock(&nvdev->lock);
    if(nvbo->refcnt.atomic == 0)
    {
      do
      {
        (&nvbo->head)->prev->next = (&nvbo->head)->next;
        (&nvbo->head)->next->prev = (&nvbo->head)->prev;
      }
      while((_Bool)0);
      drmIoctl(drm->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x09 << 0)) | sizeof(struct drm_gem_close) /*8ul*/  << 0 + 8 + 8, (void *)&req);
    }

    pthread_mutex_unlock(&nvdev->lock);
  }

  else
    drmIoctl(drm->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x09 << 0)) | sizeof(struct drm_gem_close) /*8ul*/  << 0 + 8 + 8, (void *)&req);
  if(!(bo->map == NULL))
    drm_munmap(bo->map, bo->size);

  free((void *)nvbo);
}

// nouveau_bo_make_global
// file ../../nouveau/nouveau.c line 705
static void nouveau_bo_make_global(struct nouveau_bo_priv *nvbo)
{
  if(nvbo->head.next == ((struct nouveau_list *)NULL))
  {
    struct nouveau_device_priv *nvdev;
    nvdev=nouveau_device(nvbo->base.device);
    pthread_mutex_lock(&nvdev->lock);
    if(nvbo->head.next == ((struct nouveau_list *)NULL))
      do
      {
        (&nvbo->head)->prev = &nvdev->bo_list;
        (&nvbo->head)->next = (&nvdev->bo_list)->next;
        (&nvdev->bo_list)->next->prev = &nvbo->head;
        (&nvdev->bo_list)->next = &nvbo->head;
      }
      while((_Bool)0);

    pthread_mutex_unlock(&nvdev->lock);
  }

}

// nouveau_bo_map
// file ../../nouveau/nouveau.c line 864
signed int nouveau_bo_map(struct nouveau_bo *bo, unsigned int access, struct nouveau_client *client)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&bo->device->object);
  struct nouveau_bo_priv *nvbo;
  nvbo=nouveau_bo(bo);
  if(bo->map == NULL)
  {
    bo->map=mmap(NULL, bo->size, 0x1 | 0x2, 0x01, drm->fd, (signed long int)nvbo->map_handle);
    if(bo->map == (void *)-1)
    {
      bo->map = (void *)0;
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      return -(*return_value___errno_location_1);
    }

  }

  signed int return_value_nouveau_bo_wait_2;
  return_value_nouveau_bo_wait_2=nouveau_bo_wait(bo, access, client);
  return return_value_nouveau_bo_wait_2;
}

// nouveau_bo_name_get
// file ../../nouveau/nouveau.c line 758
signed int nouveau_bo_name_get(struct nouveau_bo *bo, unsigned int *name)
{
  struct drm_gem_flink req = { .handle=bo->handle, .name=0u };
  struct nouveau_drm *drm;
  drm=nouveau_drm(&bo->device->object);
  struct nouveau_bo_priv *nvbo;
  nvbo=nouveau_bo(bo);
  *name = nvbo->name;
  if(*name == 0u)
  {
    signed int ret;
    ret=drmIoctl(drm->fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x0a << 0)) | sizeof(struct drm_gem_flink) /*8ul*/  << 0 + 8 + 8, (void *)&req);
    if(!(ret == 0))
    {
      *name = (unsigned int)0;
      return ret;
    }

    *name = req.name;
    nvbo->name = *name;
    nouveau_bo_make_global(nvbo);
  }

  return 0;
}

// nouveau_bo_name_ref
// file ../../nouveau/nouveau.c line 729
signed int nouveau_bo_name_ref(struct nouveau_device *dev, unsigned int name, struct nouveau_bo **pbo)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&dev->object);
  struct nouveau_device_priv *nvdev;
  nvdev=nouveau_device(dev);
  struct nouveau_bo_priv *nvbo;
  struct drm_gem_open req = { .name=name, .handle=0u, .size=0ull };
  signed int ret;
  pthread_mutex_lock(&nvdev->lock);
  nvbo = (struct nouveau_bo_priv *)((char *)(&nvdev->bo_list)->next - (signed long int)80ul);
  for( ; !(&nvbo->head == &nvdev->bo_list); nvbo = (struct nouveau_bo_priv *)((char *)nvbo->head.next - (signed long int)80ul))
    if(nvbo->name == name)
    {
      ret=nouveau_bo_wrap_locked(dev, nvbo->base.handle, pbo, (signed int)name);
      pthread_mutex_unlock(&nvdev->lock);
      return ret;
    }

  ret=drmIoctl(drm->fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(100 << 0 + 8) | (unsigned int)(0x0b << 0)) | sizeof(struct drm_gem_open) /*16ul*/  << 0 + 8 + 8, (void *)&req);
  if(ret == 0)
    ret=nouveau_bo_wrap_locked(dev, req.handle, pbo, (signed int)name);

  pthread_mutex_unlock(&nvdev->lock);
  return ret;
}

// nouveau_bo_new
// file ../../../nouveau/nouveau.h line 137
signed int nouveau_bo_new(struct nouveau_device *dev, unsigned int flags, unsigned int align, unsigned long int size, union nouveau_bo_config *config, struct nouveau_bo **pbo)
{
  struct nouveau_bo_priv *nvbo;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct nouveau_bo_priv) /*120ul*/ );
  nvbo = (struct nouveau_bo_priv *)return_value_calloc_1;
  struct nouveau_bo *bo = &nvbo->base;
  signed int ret;
  if(nvbo == ((struct nouveau_bo_priv *)NULL))
    return -12;

  else
  {
    (&nvbo->refcnt)->atomic = 1;
    bo->device = dev;
    bo->flags = flags;
    bo->size = size;
    ret=abi16_bo_init(bo, align, config);
    if(!(ret == 0))
    {
      free((void *)nvbo);
      return ret;
    }

    else
    {
      *pbo = bo;
      return 0;
    }
  }
}

// nouveau_bo_prime_handle_ref
// file ../../../nouveau/nouveau.h line 150
signed int nouveau_bo_prime_handle_ref(struct nouveau_device *dev, signed int prime_fd, struct nouveau_bo **bo)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&dev->object);
  struct nouveau_device_priv *nvdev;
  nvdev=nouveau_device(dev);
  signed int ret;
  unsigned int handle;
  nouveau_bo_ref((struct nouveau_bo *)(void *)0, bo);
  pthread_mutex_lock(&nvdev->lock);
  ret=drmPrimeFDToHandle(drm->fd, prime_fd, &handle);
  if(ret == 0)
    ret=nouveau_bo_wrap_locked(dev, handle, bo, 0);

  pthread_mutex_unlock(&nvdev->lock);
  return ret;
}

// nouveau_bo_ref
// file ../../../nouveau/nouveau.h line 145
void nouveau_bo_ref(struct nouveau_bo *bo, struct nouveau_bo **pref)
{
  struct nouveau_bo *ref = *pref;
  if(!(bo == ((struct nouveau_bo *)NULL)))
  {
    struct nouveau_bo_priv *return_value_nouveau_bo_1;
    return_value_nouveau_bo_1=nouveau_bo(bo);
    __CPROVER_atomic_begin();
    *(&(&return_value_nouveau_bo_1->refcnt)->atomic) = *(&(&return_value_nouveau_bo_1->refcnt)->atomic) + 1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
  }

  if(!(ref == ((struct nouveau_bo *)NULL)))
  {
    struct nouveau_bo_priv *return_value_nouveau_bo_2;
    return_value_nouveau_bo_2=nouveau_bo(ref);
    signed int return_value___sync_add_and_fetch_3;
    __CPROVER_atomic_begin();
    *(&(&return_value_nouveau_bo_2->refcnt)->atomic) = *(&(&return_value_nouveau_bo_2->refcnt)->atomic) + -1;
    return_value___sync_add_and_fetch_3 = *(&(&return_value_nouveau_bo_2->refcnt)->atomic);
    FENCE(WRfence);
    __CPROVER_atomic_end();
    if(return_value___sync_add_and_fetch_3 == 0)
      nouveau_bo_del(ref);

  }

  *pref = bo;
}

// nouveau_bo_set_prime
// file ../../../nouveau/nouveau.h line 152
signed int nouveau_bo_set_prime(struct nouveau_bo *bo, signed int *prime_fd)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&bo->device->object);
  struct nouveau_bo_priv *nvbo;
  nvbo=nouveau_bo(bo);
  signed int ret;
  ret=drmPrimeHandleToFD(drm->fd, nvbo->base.handle, (unsigned int)02000000, prime_fd);
  if(!(ret == 0))
    return ret;

  else
  {
    nouveau_bo_make_global(nvbo);
    return 0;
  }
}

// nouveau_bo_wait
// file ../../nouveau/nouveau.c line 829
signed int nouveau_bo_wait(struct nouveau_bo *bo, unsigned int access, struct nouveau_client *client)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&bo->device->object);
  struct nouveau_bo_priv *nvbo;
  nvbo=nouveau_bo(bo);
  struct drm_nouveau_gem_cpu_prep req;
  struct nouveau_pushbuf *push;
  signed int ret = 0;
  if((768u & access) == 0u)
    return 0;

  else
  {
    push=cli_push_get(client, bo);
    if(!(push == ((struct nouveau_pushbuf *)NULL)))
    {
      if(!(push->channel == ((struct nouveau_object *)NULL)))
        nouveau_pushbuf_kick(push, push->channel);

    }

    if(nvbo->head.next == ((struct nouveau_list *)NULL))
    {
      if(!((512u & nvbo->access) == 0u))
        goto __CPROVER_DUMP_L3;

      if(!((512u & access) == 0u))
        goto __CPROVER_DUMP_L3;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      req.handle = bo->handle;
      req.flags = (unsigned int)0;
      if(!((512u & access) == 0u))
        req.flags = req.flags | (unsigned int)0x00000004;

      if(!((1024u & access) == 0u))
        req.flags = req.flags | (unsigned int)0x00000001;

      ret=drmCommandWrite(drm->fd, (unsigned long int)0x42, (void *)&req, sizeof(struct drm_nouveau_gem_cpu_prep) /*8ul*/ );
      if(ret == 0)
        nvbo->access = (unsigned int)0;

      return ret;
    }
  }
}

// nouveau_bo_wrap
// file ../../nouveau/nouveau.c line 717
signed int nouveau_bo_wrap(struct nouveau_device *dev, unsigned int handle, struct nouveau_bo **pbo)
{
  struct nouveau_device_priv *nvdev;
  nvdev=nouveau_device(dev);
  signed int ret;
  pthread_mutex_lock(&nvdev->lock);
  ret=nouveau_bo_wrap_locked(dev, handle, pbo, 0);
  pthread_mutex_unlock(&nvdev->lock);
  return ret;
}

// nouveau_bo_wrap_locked
// file ../../nouveau/nouveau.c line 652
static signed int nouveau_bo_wrap_locked(struct nouveau_device *dev, unsigned int handle, struct nouveau_bo **pbo, signed int name)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&dev->object);
  struct nouveau_device_priv *nvdev;
  nvdev=nouveau_device(dev);
  struct drm_nouveau_gem_info req = { .handle=handle, .domain=0u, .size=0ul, .offset=0ul,
    .map_handle=0ul, .tile_mode=0u, .tile_flags=0u };
  struct nouveau_bo_priv *nvbo;
  signed int ret;
  nvbo = (struct nouveau_bo_priv *)((char *)(&nvdev->bo_list)->next - (signed long int)80ul);
  for( ; !(&nvbo->head == &nvdev->bo_list); nvbo = (struct nouveau_bo_priv *)((char *)nvbo->head.next - (signed long int)80ul))
    if(nvbo->base.handle == handle)
    {
      signed int return_value___sync_add_and_fetch_1;
      __CPROVER_atomic_begin();
      *(&(&nvbo->refcnt)->atomic) = *(&(&nvbo->refcnt)->atomic) + 1;
      return_value___sync_add_and_fetch_1 = *(&(&nvbo->refcnt)->atomic);
      FENCE(WRfence);
      __CPROVER_atomic_end();
      if(return_value___sync_add_and_fetch_1 == 1)
      {
        do
        {
          (&nvbo->head)->prev->next = (&nvbo->head)->next;
          (&nvbo->head)->next->prev = (&nvbo->head)->prev;
        }
        while((_Bool)0);
        if(name == 0)
          name = (signed int)nvbo->name;

        break;
      }

      *pbo = &nvbo->base;
      return 0;
    }

  ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x44, (void *)&req, sizeof(struct drm_nouveau_gem_info) /*40ul*/ );
  if(!(ret == 0))
    return ret;

  else
  {
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct nouveau_bo_priv) /*120ul*/ );
    nvbo = (struct nouveau_bo_priv *)return_value_calloc_2;
    if(!(nvbo == ((struct nouveau_bo_priv *)NULL)))
    {
      (&nvbo->refcnt)->atomic = 1;
      nvbo->base.device = dev;
      abi16_bo_info(&nvbo->base, &req);
      nvbo->name = (unsigned int)name;
      do
      {
        (&nvbo->head)->prev = &nvdev->bo_list;
        (&nvbo->head)->next = (&nvdev->bo_list)->next;
        (&nvdev->bo_list)->next->prev = &nvbo->head;
        (&nvdev->bo_list)->next = &nvbo->head;
      }
      while((_Bool)0);
      *pbo = &nvbo->base;
      return 0;
    }

    else
      return -12;
  }
}

// nouveau_bufctx
// file ../../nouveau/bufctx.c line 60
static inline struct nouveau_bufctx_priv * nouveau_bufctx(struct nouveau_bufctx *bctx)
{
  return (struct nouveau_bufctx_priv *)bctx;
}

// nouveau_bufctx_del
// file ../../nouveau/bufctx.c line 86
void nouveau_bufctx_del(struct nouveau_bufctx **pbctx)
{
  struct nouveau_bufctx_priv *pctx;
  pctx=nouveau_bufctx(*pbctx);
  struct nouveau_bufref_priv *pref;
  signed int tmp_post_1;
  if(!(pctx == ((struct nouveau_bufctx_priv *)NULL)))
  {
    do
    {
      tmp_post_1 = pctx->nr_bins;
      pctx->nr_bins = pctx->nr_bins - 1;
      if(tmp_post_1 == 0)
        break;

      nouveau_bufctx_reset(&pctx->base, pctx->nr_bins);
    }
    while((_Bool)1);
    do
    {
      pref = pctx->free;
      if(pref == ((struct nouveau_bufref_priv *)NULL))
        break;

      pctx->free = pref->next;
      free((void *)pref);
    }
    while((_Bool)1);
    free((void *)pctx);
    *pbctx = (struct nouveau_bufctx *)(void *)0;
  }

}

// nouveau_bufctx_mthd
// file ../../nouveau/bufctx.c line 148
struct nouveau_bufref * nouveau_bufctx_mthd(struct nouveau_bufctx *bctx, signed int bin, unsigned int packet, struct nouveau_bo *bo, unsigned long int data, unsigned int flags, unsigned int vor, unsigned int tor)
{
  struct nouveau_bufctx_priv *pctx;
  pctx=nouveau_bufctx(bctx);
  struct nouveau_bufbin_priv *pbin = &pctx->bins[(signed long int)bin];
  struct nouveau_bufref *bref;
  bref=nouveau_bufctx_refn(bctx, bin, bo, flags);
  if(!(bref == ((struct nouveau_bufref *)NULL)))
  {
    bref->packet = packet;
    bref->data = (unsigned int)data;
    bref->vor = vor;
    bref->tor = tor;
    pbin->relocs = pbin->relocs + 1;
    bctx->relocs = bctx->relocs + 1;
  }

  return bref;
}

// nouveau_bufctx_new
// file ../../nouveau/bufctx.c line 66
signed int nouveau_bufctx_new(struct nouveau_client *client, signed int bins, struct nouveau_bufctx **pbctx)
{
  struct nouveau_bufctx_priv *priv;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct nouveau_bufctx_priv) /*80ul*/  + sizeof(struct nouveau_bufbin_priv) /*16ul*/  * (unsigned long int)bins);
  priv = (struct nouveau_bufctx_priv *)return_value_calloc_1;
  if(!(priv == ((struct nouveau_bufctx_priv *)NULL)))
  {
    do
    {
      (&priv->base.head)->prev = &priv->base.head;
      (&priv->base.head)->next = &priv->base.head;
    }
    while((_Bool)0);
    do
    {
      (&priv->base.pending)->prev = &priv->base.pending;
      (&priv->base.pending)->next = &priv->base.pending;
    }
    while((_Bool)0);
    do
    {
      (&priv->base.current)->prev = &priv->base.current;
      (&priv->base.current)->next = &priv->base.current;
    }
    while((_Bool)0);
    priv->base.client = client;
    priv->nr_bins = bins;
    *pbctx = &priv->base;
    return 0;
  }

  else
    return -12;
}

// nouveau_bufctx_refn
// file ../../nouveau/bufctx.c line 121
struct nouveau_bufref * nouveau_bufctx_refn(struct nouveau_bufctx *bctx, signed int bin, struct nouveau_bo *bo, unsigned int flags)
{
  struct nouveau_bufctx_priv *pctx;
  pctx=nouveau_bufctx(bctx);
  struct nouveau_bufbin_priv *pbin = &pctx->bins[(signed long int)bin];
  struct nouveau_bufref_priv *pref = pctx->free;
  void *return_value_malloc_1;
  if(pref == ((struct nouveau_bufref_priv *)NULL))
  {
    return_value_malloc_1=malloc(sizeof(struct nouveau_bufref_priv) /*72ul*/ );
    pref = (struct nouveau_bufref_priv *)return_value_malloc_1;
  }

  else
    pctx->free = pref->next;
  if(!(pref == ((struct nouveau_bufref_priv *)NULL)))
  {
    pref->base.bo = bo;
    pref->base.flags = flags;
    pref->base.packet = (unsigned int)0;
    do
    {
      (&pref->base.thead)->next = &bctx->pending;
      (&pref->base.thead)->prev = (&bctx->pending)->prev;
      (&bctx->pending)->prev->next = &pref->base.thead;
      (&bctx->pending)->prev = &pref->base.thead;
    }
    while((_Bool)0);
    pref->bufctx = bctx;
    pref->next = pbin->list;
    pbin->list = pref;
  }

  return &pref->base;
}

// nouveau_bufctx_reset
// file ../../nouveau/bufctx.c line 103
void nouveau_bufctx_reset(struct nouveau_bufctx *bctx, signed int bin)
{
  struct nouveau_bufctx_priv *pctx;
  pctx=nouveau_bufctx(bctx);
  struct nouveau_bufbin_priv *pbin = &pctx->bins[(signed long int)bin];
  struct nouveau_bufref_priv *pref;
  do
  {
    pref = pbin->list;
    if(pref == ((struct nouveau_bufref_priv *)NULL))
      break;

    do
    {
      (&pref->base.thead)->prev->next = (&pref->base.thead)->next;
      (&pref->base.thead)->next->prev = (&pref->base.thead)->prev;
      (&pref->base.thead)->next = &pref->base.thead;
      (&pref->base.thead)->prev = &pref->base.thead;
    }
    while((_Bool)0);
    pbin->list = pref->next;
    pref->next = pctx->free;
    pctx->free = pref;
  }
  while((_Bool)1);
  bctx->relocs = bctx->relocs - pbin->relocs;
  pbin->relocs = 0;
}

// nouveau_client
// file ../../nouveau/private.h line 37
static inline struct nouveau_client_priv * nouveau_client(struct nouveau_client *client)
{
  return (struct nouveau_client_priv *)client;
}

// nouveau_client_link1
// file ../../nouveau/private.h line 37
static inline struct nouveau_client_priv * nouveau_client_link1(struct nouveau_client *client_link1)
{
  return (struct nouveau_client_priv *)client_link1;
}

// nouveau_client_del
// file ../../nouveau/nouveau.c line 579
void nouveau_client_del(struct nouveau_client **pclient)
{
  struct nouveau_client_priv *pcli;
  pcli=nouveau_client(*pclient);
  struct nouveau_device_priv *nvdev;
  if(!(pcli == ((struct nouveau_client_priv *)NULL)))
  {
    signed int id = pcli->base.id;
    nvdev=nouveau_device(pcli->base.device);
    pthread_mutex_lock(&nvdev->lock);
    nvdev->client[(signed long int)(id / 32)] = nvdev->client[(signed long int)(id / 32)] & (unsigned int)~(1 << id % 32);
    pthread_mutex_unlock(&nvdev->lock);
    free((void *)pcli->kref);
    free((void *)pcli);
  }

}

// nouveau_client_new
// file ../../nouveau/nouveau.c line 540
signed int nouveau_client_new(struct nouveau_device *dev, struct nouveau_client **pclient)
{
  struct nouveau_device_priv *nvdev;
  nvdev=nouveau_device(dev);
  struct nouveau_client_priv *pcli;
  signed int id = 0;
  signed int i;
  signed int ret = -12;
  unsigned int *clients;
  pthread_mutex_lock(&nvdev->lock);
  i = 0;
  for( ; !(i >= nvdev->nr_client); i = i + 1)
  {
    signed int return_value_ffs_1;
    return_value_ffs_1=ffs((signed int)nvdev->client[(signed long int)i]);
    id = return_value_ffs_1 - 1;
    if(id >= 0)
      goto out;

  }
  void *return_value_realloc_2;
  return_value_realloc_2=realloc((void *)nvdev->client, sizeof(unsigned int) /*4ul*/  * (unsigned long int)(i + 1));
  clients = (unsigned int *)return_value_realloc_2;
  void *return_value_calloc_3;
  if(!(clients == ((unsigned int *)NULL)))
  {
    nvdev->client = clients;
    nvdev->client[(signed long int)i] = (unsigned int)0;
    nvdev->nr_client = nvdev->nr_client + 1;

  out:
    ;
    return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct nouveau_client_priv) /*32ul*/ );
    pcli = (struct nouveau_client_priv *)return_value_calloc_3;
    if(!(pcli == ((struct nouveau_client_priv *)NULL)))
    {
      nvdev->client[(signed long int)i] = nvdev->client[(signed long int)i] | (unsigned int)(1 << id);
      pcli->base.device = dev;
      pcli->base.id = i * 32 + id;
      ret = 0;
    }

    *pclient = &pcli->base;
  }


unlock:
  ;
  pthread_mutex_unlock(&nvdev->lock);
  return ret;
}

// nouveau_device
// file ../../nouveau/private.h line 108
static inline struct nouveau_device_priv * nouveau_device(struct nouveau_device *dev)
{
  return (struct nouveau_device_priv *)dev;
}

// nouveau_device_link1
// file ../../nouveau/private.h line 108
static inline struct nouveau_device_priv * nouveau_device_link1(struct nouveau_device *dev_link1)
{
  return (struct nouveau_device_priv *)dev_link1;
}

// nouveau_device_link2
// file ../../nouveau/private.h line 108
static inline struct nouveau_device_priv * nouveau_device_link2(struct nouveau_device *dev_link2)
{
  return (struct nouveau_device_priv *)dev_link2;
}

// nouveau_device_del
// file ../../../nouveau/nouveau.h line 76
void nouveau_device_del(struct nouveau_device **pdev)
{
  struct nouveau_device_priv *nvdev;
  nvdev=nouveau_device(*pdev);
  if(!(nvdev == ((struct nouveau_device_priv *)NULL)))
  {
    free((void *)nvdev->client);
    pthread_mutex_destroy(&nvdev->lock);
    if(nvdev->base.fd >= 0)
    {
      struct nouveau_drm *drm;
      drm=nouveau_drm(&nvdev->base.object);
      nouveau_drm_del(&drm);
      if(!(nvdev->close == 0))
        drmClose(nvdev->base.fd);

    }

    free((void *)nvdev);
    *pdev = (struct nouveau_device *)(void *)0;
  }

}

// nouveau_device_new
// file ../../nouveau/nouveau.c line 368
signed int nouveau_device_new(struct nouveau_object *parent, signed int oclass, void *data, unsigned int size, struct nouveau_device **pdev)
{
  struct nv_device_info_v0 info = { .version=0, .platform=0, .chipset=0, .revision=0, .family=0,
    .pad06={ 0, 0 }, .ram_size=0ull, .ram_user=0ull,
    .chip={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .name={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
  /* tag-#anon#lUN[lSYM#tag-nv_device_v0#'v0'|] */
union anonymous_25
{
  // v0
  struct nv_device_v0 v0;
};

/* */
  ;
  union anonymous_25 *args = (union anonymous_25 *)data;
  unsigned int argc = size;
  struct nouveau_drm *drm;
  drm=nouveau_drm(parent);
  struct nouveau_device_priv *nvdev;
  struct nouveau_device *dev;
  unsigned long int v;
  char *tmp;
  signed int ret = -38;
  _Bool tmp_if_expr_2;
  signed int tmp_statement_expression_1;
  if(!(oclass == 0x00000080))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    void **_data = &data;
    unsigned int *_size = &size;
    signed int _ret = ret;
    signed int _vl = 0;
    signed int _vh = 0;
    if(_ret == -38)
    {
      if((unsigned long int)*_size >= sizeof(struct nv_device_v0) /*16ul*/ )
      {
        if((signed int)args->v0.version >= _vl)
        {
          if(_vh >= (signed int)args->v0.version)
          {
            *_data = (void *)((unsigned char *)*_data + (signed long int)sizeof(struct nv_device_v0) /*16ul*/ );
            *_size = (unsigned int)((unsigned long int)*_size - sizeof(struct nv_device_v0) /*16ul*/ );
            _ret = 0;
            _ret = *_size != 0u ? -7 : 0;
            *_data = (void *)0;
            *_size = (unsigned int)0;
          }

        }

      }

    }

    tmp_statement_expression_1 = _ret;
    tmp_if_expr_2 = tmp_statement_expression_1 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return ret;

  else
  {
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct nouveau_device_priv) /*168ul*/ );
    nvdev = (struct nouveau_device_priv *)return_value_calloc_3;
    if(nvdev == ((struct nouveau_device_priv *)NULL))
      return -12;

    else
    {
      *pdev = &nvdev->base;
      dev = *pdev;
      dev->fd = -1;
      if(!(drm->nvif == (_Bool)0))
      {
        ret=nouveau_object_init(parent, (unsigned int)0, oclass, (void *)args, argc, &dev->object);
        if(!(ret == 0))
          goto done;

        info.version = (unsigned char)0;
        ret=nouveau_object_mthd(&dev->object, (unsigned int)0x00, (void *)&info, (unsigned int)sizeof(struct nv_device_info_v0) /*104ul*/ );
        if(!(ret == 0))
          goto done;

        nvdev->base.chipset = (unsigned int)info.chipset;
        nvdev->have_bo_usage = (_Bool)1;
      }

      else
        if(args->v0.device == 18446744073709551615ull)
        {
          nvdev->base.object.parent = &drm->client;
          nvdev->base.object.handle = ~0ULL;
          nvdev->base.object.oclass = 0x80000000;
          nvdev->base.object.length = (unsigned int)~0;
          ret=nouveau_getparam(dev, (unsigned long int)11, &v);
          if(!(ret == 0))
            goto done;

          nvdev->base.chipset = (unsigned int)v;
          ret=nouveau_getparam(dev, (unsigned long int)15, &v);
          if(ret == 0)
            nvdev->have_bo_usage = v != (unsigned long int)0;

        }

        else
          return -38;
      ret=nouveau_getparam(dev, (unsigned long int)8, &v);
      if(ret == 0)
      {
        nvdev->base.vram_size = v;
        ret=nouveau_getparam(dev, (unsigned long int)9, &v);
        if(ret == 0)
        {
          nvdev->base.gart_size = v;
          tmp=getenv("NOUVEAU_LIBDRM_VRAM_LIMIT_PERCENT");
          if(!(tmp == ((char *)NULL)))
            nvdev->vram_limit_percent=atoi(tmp);

          else
            nvdev->vram_limit_percent = 80;
          nvdev->base.vram_limit = (nvdev->base.vram_size * (unsigned long int)nvdev->vram_limit_percent) / (unsigned long int)100;
          tmp=getenv("NOUVEAU_LIBDRM_GART_LIMIT_PERCENT");
          if(!(tmp == ((char *)NULL)))
            nvdev->gart_limit_percent=atoi(tmp);

          else
            nvdev->gart_limit_percent = 80;
          nvdev->base.gart_limit = (nvdev->base.gart_size * (unsigned long int)nvdev->gart_limit_percent) / (unsigned long int)100;
          ret=pthread_mutex_init(&nvdev->lock, (const union anonymous_27 *)(void *)0);
          do
          {
            (&nvdev->bo_list)->prev = &nvdev->bo_list;
            (&nvdev->bo_list)->next = &nvdev->bo_list;
          }
          while((_Bool)0);
        }

      }


    done:
      ;
      if(!(ret == 0))
        nouveau_device_del(pdev);

      return ret;
    }
  }
}

// nouveau_device_open
// file ../../nouveau/nouveau.c line 490
signed int nouveau_device_open(const char *busid, struct nouveau_device **pdev)
{
  signed int ret = -19;
  signed int fd;
  fd=drmOpen("nouveau", busid);
  if(fd >= 0)
  {
    ret=nouveau_device_wrap(fd, 1, pdev);
    if(!(ret == 0))
      drmClose(fd);

  }

  return ret;
}

// nouveau_device_open_existing
// file ../../nouveau/nouveau.c line 361
signed int nouveau_device_open_existing(struct nouveau_device **pdev, signed int close, signed int fd, unsigned int ctx)
{
  return -13;
}

// nouveau_device_wrap
// file ../../../nouveau/nouveau.h line 82
signed int nouveau_device_wrap(signed int fd, signed int close, struct nouveau_device **pdev)
{
  struct nouveau_drm *drm;
  struct nouveau_device_priv *nvdev;
  signed int ret;
  ret=nouveau_drm_new(fd, &drm);
  if(!(ret == 0))
    return ret;

  else
  {
    drm->nvif = (_Bool)0;
    struct nv_device_v0 literal_1 = { .version=0, .pad01={ 0, 0, 0, 0, 0, 0, 0 }, .device=~0ULL };
    ret=nouveau_device_new(&drm->client, 0x00000080, (void *)&literal_1, (unsigned int)sizeof(struct nv_device_v0) /*16ul*/ , pdev);
    if(!(ret == 0))
    {
      nouveau_drm_del(&drm);
      return ret;
    }

    else
    {
      nvdev=nouveau_device(*pdev);
      nvdev->base.fd = drm->fd;
      nvdev->base.drm_version = drm->version;
      nvdev->close = close;
      return 0;
    }
  }
}

// nouveau_drm
// file ../../nouveau/nouveau.h line 52
static inline struct nouveau_drm * nouveau_drm(struct nouveau_object *obj)
{
  for( ; !(obj == ((struct nouveau_object *)NULL)); obj = obj->parent)
    if(obj->parent == ((struct nouveau_object *)NULL))
      break;

  return (struct nouveau_drm *)obj;
}

// nouveau_drm_link1
// file ../../nouveau/nouveau.h line 52
static inline struct nouveau_drm * nouveau_drm_link1(struct nouveau_object *obj_link1)
{
  for( ; !(obj_link1 == ((struct nouveau_object *)NULL)); obj_link1 = obj_link1->parent)
    if(obj_link1->parent == ((struct nouveau_object *)NULL))
      break;

  return (struct nouveau_drm *)obj_link1;
}

// nouveau_drm_link2
// file ../../nouveau/nouveau.h line 52
static inline struct nouveau_drm * nouveau_drm_link2(struct nouveau_object *obj_link2)
{
  for( ; !(obj_link2 == ((struct nouveau_object *)NULL)); obj_link2 = obj_link2->parent)
    if(obj_link2->parent == ((struct nouveau_object *)NULL))
      break;

  return (struct nouveau_drm *)obj_link2;
}

// nouveau_drm_del
// file ../../nouveau/nouveau.c line 322
void nouveau_drm_del(struct nouveau_drm **pdrm)
{
  free((void *)*pdrm);
  *pdrm = (struct nouveau_drm *)(void *)0;
}

// nouveau_drm_new
// file ../../nouveau/nouveau.c line 329
signed int nouveau_drm_new(signed int fd, struct nouveau_drm **pdrm)
{
  struct nouveau_drm *drm;
  struct _drmVersion *ver;
  char *return_value_getenv_1;
  return_value_getenv_1=getenv("NOUVEAU_LIBDRM_DEBUG");
  debug_init(return_value_getenv_1);
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct nouveau_drm) /*48ul*/ );
  drm = (struct nouveau_drm *)return_value_calloc_2;
  if(drm == ((struct nouveau_drm *)NULL))
    return -12;

  else
  {
    drm->fd = fd;
    ver=drmGetVersion(fd);
    if(ver == ((struct _drmVersion *)NULL))
    {
      nouveau_drm_del(&drm);
      return -22;
    }

    else
    {
      *pdrm = drm;
      drm->version = (unsigned int)(ver->version_major << 24 | ver->version_minor << 8 | ver->version_patchlevel);
      drm->nvif = drm->version >= (unsigned int)0x01000301;
      drmFreeVersion(ver);
      return 0;
    }
  }
}

// nouveau_getparam
// file ../../nouveau/nouveau.c line 521
signed int nouveau_getparam(struct nouveau_device *dev, unsigned long int param, unsigned long int *value)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&dev->object);
  struct drm_nouveau_getparam r = { .param=param, .value=0ul };
  signed int fd = drm->fd;
  signed int ret;
  ret=drmCommandWriteRead(fd, (unsigned long int)0x00, (void *)&r, sizeof(struct drm_nouveau_getparam) /*16ul*/ );
  *value = r.value;
  return ret;
}

// nouveau_object_del
// file ../../nouveau/nouveau.c line 311
void nouveau_object_del(struct nouveau_object **pobj)
{
  struct nouveau_object *obj = *pobj;
  if(!(obj == ((struct nouveau_object *)NULL)))
  {
    nouveau_object_fini(obj);
    free((void *)obj);
    *pobj = (struct nouveau_object *)(void *)0;
  }

}

// nouveau_object_fini
// file ../../nouveau/nouveau.c line 215
static void nouveau_object_fini(struct nouveau_object *obj)
{
  /* tag-#anon#lST[lSYM#tag-nvif_ioctl_v0#'ioctl'||lSYM#tag-nvif_ioctl_del#'del'|] */
struct anonymous_3
{
  // ioctl
  struct nvif_ioctl_v0 ioctl;
  // del
  struct nvif_ioctl_del del;
};

/* */
  ;
  struct anonymous_3 args = { .ioctl={ .version=0, .type=(unsigned char)0x03, .pad02={ 0, 0, 0, 0 },
    .owner=0, .route=0, .token=0ull,
    .object=0ull, .data={  } }, .del={  } };
  if(!(obj->data == NULL))
  {
    abi16_delete(obj);
    free(obj->data);
    obj->data = (void *)0;
  }

  else
    nouveau_object_ioctl(obj, (void *)&args, (unsigned int)sizeof(struct anonymous_3) /*24ul*/ );
}

// nouveau_object_init
// file ../../nouveau/nouveau.c line 235
static signed int nouveau_object_init(struct nouveau_object *parent, unsigned int handle, signed int oclass, void *data, unsigned int size, struct nouveau_object *obj)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(parent);
  /* tag-#anon#lST[lSYM#tag-nvif_ioctl_v0#'ioctl'||lSYM#tag-nvif_ioctl_new_v0#'new'|] */
struct anonymous_4
{
  // ioctl
  struct nvif_ioctl_v0 ioctl;
  // new
  struct nvif_ioctl_new_v0 new;
};

/* */
  ;
  struct anonymous_4 *args;
  unsigned int argc = (unsigned int)(sizeof(struct anonymous_4) /*56ul*/  + (unsigned long int)size);
  signed int (*func)(struct nouveau_object *);
  signed int ret = -38;
  obj->parent = parent;
  obj->handle = (unsigned long int)handle;
  obj->oclass = (unsigned int)oclass;
  obj->length = (unsigned int)0;
  obj->data = (void *)0;
  _Bool return_value_abi16_object_2;
  return_value_abi16_object_2=abi16_object(obj, &func);
  _Bool tmp_if_expr_3;
  if(return_value_abi16_object_2 == (_Bool)0)
    tmp_if_expr_3 = drm->nvif != (_Bool)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  if(tmp_if_expr_3)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)argc);
    args = (struct anonymous_4 *)return_value_malloc_1;
    if(args == ((struct anonymous_4 *)NULL))
      return -12;

    args->ioctl.version = (unsigned char)0;
    args->ioctl.type = (unsigned char)0x02;
    args->new.version = (unsigned char)0;
    args->new.route = (unsigned char)0x00;
    args->new.token = (unsigned long int)(void *)obj;
    args->new.object = (unsigned long int)(void *)obj;
    args->new.handle = handle;
    args->new.oclass = oclass;
    memcpy((void *)args->new.data, data, (unsigned long int)size);
    ret=nouveau_object_ioctl(parent, (void *)args, argc);
    memcpy(data, (const void *)args->new.data, (unsigned long int)size);
    free((void *)args);
  }

  else
    if(!(func == ((signed int (*)(struct nouveau_object *))NULL)))
    {
      obj->length = (unsigned int)(size != 0u ? (unsigned long int)size : sizeof(struct nouveau_object *) /*8ul*/ );
      obj->data=malloc((unsigned long int)obj->length);
      if(obj->data == NULL)
        return -12;

      if(!(data == NULL))
        memcpy(obj->data, data, (unsigned long int)obj->length);

      *((struct nouveau_object **)obj->data) = obj;
      ret=func(obj);
    }

  if(!(ret == 0))
  {
    nouveau_object_fini(obj);
    return ret;
  }

  else
    return 0;
}

// nouveau_object_ioctl
// file ../../nouveau/nouveau.c line 68
static signed int nouveau_object_ioctl(struct nouveau_object *obj, void *data, unsigned int size)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(obj);
  /* tag-#anon#lUN[lSYM#tag-nvif_ioctl_v0#'v0'|] */
union anonymous_0
{
  // v0
  struct nvif_ioctl_v0 v0;
};

/* */
  ;
  union anonymous_0 *args = (union anonymous_0 *)data;
  unsigned int argc = size;
  signed int ret = -38;
  signed int tmp_statement_expression_1;
  void **_data = &data;
  unsigned int *_size = &size;
  signed int _ret = ret;
  signed int _vl = 0;
  signed int _vh = 0;
  if(_ret == -38)
  {
    if((unsigned long int)*_size >= sizeof(struct nvif_ioctl_v0) /*24ul*/ )
    {
      if((signed int)args->v0.version >= _vl)
      {
        if(_vh >= (signed int)args->v0.version)
        {
          *_data = (void *)((unsigned char *)*_data + (signed long int)sizeof(struct nvif_ioctl_v0) /*24ul*/ );
          *_size = (unsigned int)((unsigned long int)*_size - sizeof(struct nvif_ioctl_v0) /*24ul*/ );
          _ret = 0;
        }

      }

    }

  }

  tmp_statement_expression_1 = _ret;
  ret = tmp_statement_expression_1;
  if(ret == 0)
  {
    if(obj->length == 0u)
    {
      if(!(obj == &drm->client))
        args->v0.object = (unsigned long int)(void *)obj;

      else
        args->v0.object = (unsigned long long int)0;
      args->v0.owner = (unsigned char)0xff;
      args->v0.route = (unsigned char)0x00;
    }

    else
    {
      args->v0.route = (unsigned char)0xff;
      args->v0.token = obj->handle;
    }
  }

  else
    return ret;
  signed int return_value_drmCommandWriteRead_2;
  return_value_drmCommandWriteRead_2=drmCommandWriteRead(drm->fd, (unsigned long int)0x07, (void *)args, (unsigned long int)argc);
  return return_value_drmCommandWriteRead_2;
}

// nouveau_object_mclass
// file ../../nouveau/nouveau.c line 188
signed int nouveau_object_mclass(struct nouveau_object *obj, struct nouveau_mclass *mclass)
{
  struct nouveau_sclass *sclass;
  signed int ret = -19;
  signed int cnt;
  signed int i;
  signed int j;
  cnt=nouveau_object_sclass_get(obj, &sclass);
  _Bool tmp_if_expr_1;
  if(!(cnt >= 0))
    return cnt;

  else
  {
    i = 0;
    do
    {
      if(!(ret >= 0))
        tmp_if_expr_1 = (mclass + (signed long int)i)->oclass != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      j = 0;
      for( ; !(j >= cnt); j = j + 1)
        if((mclass + (signed long int)i)->oclass == (sclass + (signed long int)j)->oclass)
        {
          if((mclass + (signed long int)i)->version >= (sclass + (signed long int)j)->minver)
          {
            if((sclass + (signed long int)j)->maxver >= (mclass + (signed long int)i)->version)
            {
              ret = i;
              break;
            }

          }

        }

      i = i + 1;
    }
    while((_Bool)1);
    nouveau_object_sclass_put(&sclass);
    return ret;
  }
}

// nouveau_object_mthd
// file ../../nouveau/nouveau.c line 96
signed int nouveau_object_mthd(struct nouveau_object *obj, unsigned int mthd, void *data, unsigned int size)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(obj);
  /* tag-#anon#lST[lSYM#tag-nvif_ioctl_v0#'ioctl'||lSYM#tag-nvif_ioctl_mthd_v0#'mthd'|] */
struct anonymous_1
{
  // ioctl
  struct nvif_ioctl_v0 ioctl;
  // mthd
  struct nvif_ioctl_mthd_v0 mthd;
};

/* */
  ;
  struct anonymous_1 *args;
  unsigned int argc = (unsigned int)(sizeof(struct anonymous_1) /*32ul*/  + (unsigned long int)size);
  unsigned char stack[128l];
  signed int ret;
  if(drm->nvif == (_Bool)0)
    return -38;

  else
  {
    if((unsigned long int)argc >= 129ul)
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)argc);
      args = (struct anonymous_1 *)return_value_malloc_1;
      if(args == ((struct anonymous_1 *)NULL))
        return -12;

    }

    else
      args = (struct anonymous_1 *)(void *)stack;
    args->ioctl.version = (unsigned char)0;
    args->ioctl.type = (unsigned char)0x04;
    args->mthd.version = (unsigned char)0;
    args->mthd.method = (unsigned char)mthd;
    memcpy((void *)args->mthd.data, data, (unsigned long int)size);
    ret=nouveau_object_ioctl(obj, (void *)args, argc);
    memcpy(data, (const void *)args->mthd.data, (unsigned long int)size);
    if(!(args == (struct anonymous_1 *)stack))
      free((void *)args);

    return ret;
  }
}

// nouveau_object_new
// file ../../nouveau/nouveau.c line 290
signed int nouveau_object_new(struct nouveau_object *parent, unsigned long int handle, unsigned int oclass, void *data, unsigned int length, struct nouveau_object **pobj)
{
  struct nouveau_object *obj;
  signed int ret;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct nouveau_object) /*32ul*/ );
  obj = (struct nouveau_object *)return_value_malloc_1;
  if(obj == ((struct nouveau_object *)NULL))
    return -12;

  else
  {
    ret=nouveau_object_init(parent, (unsigned int)handle, (signed int)oclass, data, length, obj);
    if(!(ret == 0))
    {
      free((void *)obj);
      return ret;
    }

    else
    {
      *pobj = obj;
      return 0;
    }
  }
}

// nouveau_object_sclass_get
// file ../../nouveau/nouveau.c line 138
signed int nouveau_object_sclass_get(struct nouveau_object *obj, struct nouveau_sclass **psclass)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(obj);
  /* tag-#anon#lST[lSYM#tag-nvif_ioctl_v0#'ioctl'||lSYM#tag-nvif_ioctl_sclass_v0#'sclass'|] */
struct anonymous_2
{
  // ioctl
  struct nvif_ioctl_v0 ioctl;
  // sclass
  struct nvif_ioctl_sclass_v0 sclass;
};

/* */
  ;
  struct anonymous_2 *args = (struct anonymous_2 *)(void *)0;
  struct nouveau_sclass *sclass;
  signed int ret;
  signed int cnt = 0;
  signed int i;
  unsigned int size;
  signed int return_value_abi16_sclass_1;
  if(drm->nvif == (_Bool)0)
  {
    return_value_abi16_sclass_1=abi16_sclass(obj, psclass);
    return return_value_abi16_sclass_1;
  }

  else
  {
    while((_Bool)1)
    {
      size = (unsigned int)(sizeof(struct anonymous_2) /*32ul*/  + (unsigned long int)cnt * sizeof(struct nvif_ioctl_sclass_oclass_v0) /*8ul*/ );
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)size);
      args = (struct anonymous_2 *)return_value_malloc_2;
      if(args == ((struct anonymous_2 *)NULL))
        return -12;

      args->ioctl.version = (unsigned char)0;
      args->ioctl.type = (unsigned char)0x01;
      args->sclass.version = (unsigned char)0;
      args->sclass.count = (unsigned char)cnt;
      ret=nouveau_object_ioctl(obj, (void *)args, size);
      if(ret == 0)
      {
        if(cnt >= (signed int)args->sclass.count)
          break;

      }

      cnt = (signed int)args->sclass.count;
      free((void *)args);
      if(!(ret == 0))
        return ret;

    }
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)args->sclass.count, sizeof(struct nouveau_sclass) /*12ul*/ );
    sclass = (struct nouveau_sclass *)return_value_calloc_3;
    if(!(sclass == ((struct nouveau_sclass *)NULL)))
    {
      i = 0;
      for( ; !(i >= (signed int)args->sclass.count); i = i + 1)
      {
        (sclass + (signed long int)i)->oclass = args->sclass.oclass[(signed long int)i].oclass;
        (sclass + (signed long int)i)->minver = (signed int)args->sclass.oclass[(signed long int)i].minver;
        (sclass + (signed long int)i)->maxver = (signed int)args->sclass.oclass[(signed long int)i].maxver;
      }
      *psclass = sclass;
      ret = (signed int)args->sclass.count;
    }

    else
      ret = -12;
    free((void *)args);
    return ret;
  }
}

// nouveau_object_sclass_put
// file ../../nouveau/nouveau.c line 131
void nouveau_object_sclass_put(struct nouveau_sclass **psclass)
{
  free((void *)*psclass);
  *psclass = (struct nouveau_sclass *)(void *)0;
}

// nouveau_pushbuf
// file ../../nouveau/pushbuf.c line 74
static inline struct nouveau_pushbuf_priv * nouveau_pushbuf(struct nouveau_pushbuf *push)
{
  return (struct nouveau_pushbuf_priv *)push;
}

// nouveau_pushbuf_bufctx
// file ../../nouveau/pushbuf.c line 633
struct nouveau_bufctx * nouveau_pushbuf_bufctx(struct nouveau_pushbuf *push, struct nouveau_bufctx *ctx)
{
  struct nouveau_bufctx *prev = push->bufctx;
  push->bufctx = ctx;
  return prev;
}

// nouveau_pushbuf_data
// file ../../nouveau/pushbuf.c line 705
void nouveau_pushbuf_data(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned long int offset, unsigned long int length)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct drm_nouveau_gem_pushbuf_push *kpsh;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  _Bool tmp_if_expr_3;
  unsigned int *tmp_post_1;
  unsigned int *tmp_post_2;
  if(!(bo == nvpb->bo))
  {
    if(!(nvpb->bgn == push->cur))
    {
      if(!(nvpb->suffix0 == 0u))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = nvpb->suffix1 != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
      {
        tmp_post_1 = push->cur;
        push->cur = push->cur + 1l;
        *tmp_post_1 = nvpb->suffix0;
        tmp_post_2 = push->cur;
        push->cur = push->cur + 1l;
        *tmp_post_2 = nvpb->suffix1;
      }

      nouveau_pushbuf_data(push, nvpb->bo, (unsigned long int)((nvpb->bgn - nvpb->ptr) * (signed long int)4), (unsigned long int)((push->cur - nvpb->bgn) * (signed long int)4));
      nvpb->bgn = push->cur;
    }

  }

  signed int tmp_post_4;
  if(!(bo == ((struct nouveau_bo *)NULL)))
  {
    kref=cli_kref_get(push->client, bo);
    /* assertion kref */
    assert(kref != ((struct drm_nouveau_gem_pushbuf_bo *)NULL));
    tmp_post_4 = krec->nr_push;
    krec->nr_push = krec->nr_push + 1;
    kpsh = &krec->push[(signed long int)tmp_post_4];
    kpsh->bo_index = (unsigned int)(kref - krec->buffer);
    kpsh->offset = offset;
    kpsh->length = length;
  }

}

// nouveau_pushbuf_del
// file ../../nouveau/pushbuf.c line 607
void nouveau_pushbuf_del(struct nouveau_pushbuf **ppush)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(*ppush);
  signed int tmp_post_1;
  struct drm_nouveau_gem_pushbuf_bo *tmp_post_2;
  signed int tmp_post_3;
  if(!(nvpb == ((struct nouveau_pushbuf_priv *)NULL)))
  {
    struct drm_nouveau_gem_pushbuf_bo *kref;
    struct nouveau_pushbuf_krec *krec;
    do
    {
      krec = nvpb->list;
      if(krec == ((struct nouveau_pushbuf_krec *)NULL))
        break;

      kref = krec->buffer;
      do
      {
        tmp_post_1 = krec->nr_buffer;
        krec->nr_buffer = krec->nr_buffer - 1;
        if(tmp_post_1 == 0)
          break;

        unsigned long int priv;
        tmp_post_2 = kref;
        kref = kref + 1l;
        priv = tmp_post_2->user_priv;
        struct nouveau_bo *bo = (struct nouveau_bo *)(void *)priv;
        cli_kref_set(nvpb->base.client, bo, (struct drm_nouveau_gem_pushbuf_bo *)(void *)0, (struct nouveau_pushbuf *)(void *)0);
        nouveau_bo_ref((struct nouveau_bo *)(void *)0, &bo);
      }
      while((_Bool)1);
      nvpb->list = krec->next;
      free((void *)krec);
    }
    while((_Bool)1);
    do
    {
      tmp_post_3 = nvpb->bo_nr;
      nvpb->bo_nr = nvpb->bo_nr - 1;
      if(tmp_post_3 == 0)
        break;

      nouveau_bo_ref((struct nouveau_bo *)(void *)0, &nvpb->bos[(signed long int)nvpb->bo_nr]);
    }
    while((_Bool)1);
    nouveau_bo_ref((struct nouveau_bo *)(void *)0, &nvpb->bo);
    free((void *)nvpb);
  }

  *ppush = (struct nouveau_pushbuf *)(void *)0;
}

// nouveau_pushbuf_kick
// file ../../nouveau/nouveau.h line 228

{
  signed int return_value_pushbuf_submit_1;
  if(push->channel == ((struct nouveau_object *)NULL))
  {
    return_value_pushbuf_submit_1=pushbuf_submit(push, chan);
    return return_value_pushbuf_submit_1;
  }

  else
  {
    pushbuf_flush(push);
    signed int return_value_pushbuf_validate_2;
    return_value_pushbuf_validate_2=pushbuf_validate(push, (_Bool)0);
    return return_value_pushbuf_validate_2;
  }
}

// nouveau_pushbuf_new
// file ../../nouveau/pushbuf.c line 536

{
  struct nouveau_drm *drm;
  drm=nouveau_drm_link1(&client->device->object);
  struct nouveau_fifo *fifo = (struct nouveau_fifo *)chan->data;
  struct nouveau_pushbuf_priv *nvpb;
  struct nouveau_pushbuf *push;
  struct drm_nouveau_gem_pushbuf req = { .channel=0u, .nr_buffers=0u, .buffers=0ul, .nr_relocs=0u,
    .nr_push=0u, .relocs=0ul, .push=0ul,
    .suffix0=0u, .suffix1=0u, .vram_available=0ul,
    .gart_available=0ul };
  signed int ret;
  if(!(chan->oclass == 0x80000001))
    return -22;

  else
  {
    req.channel = fifo->channel;
    req.nr_push = (unsigned int)0;
    ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x41, (void *)&req, sizeof(struct drm_nouveau_gem_pushbuf) /*64ul*/ );
    if(!(ret == 0))
      return ret;

    else
    {
      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct nouveau_pushbuf_priv) /*144ul*/  + (unsigned long int)nr * sizeof(struct nouveau_bo *) /*8ul*/ );
      nvpb = (struct nouveau_pushbuf_priv *)return_value_calloc_1;
      if(nvpb == ((struct nouveau_pushbuf_priv *)NULL))
        return -12;

      else
      {
        nvpb->suffix0 = req.suffix0;
        nvpb->suffix1 = req.suffix1;
        void *return_value_calloc_2;
        return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct nouveau_pushbuf_krec) /*81960ul*/ );
        nvpb->krec = (struct nouveau_pushbuf_krec *)return_value_calloc_2;
        nvpb->list = nvpb->krec;
        if(nvpb->krec == ((struct nouveau_pushbuf_krec *)NULL))
        {
          free((void *)nvpb);
          return -12;
        }

        else
        {
          push = &nvpb->base;
          push->client = client;
          push->channel = immediate != (_Bool)0 ? chan : (struct nouveau_object *)(void *)0;
          push->flags = (unsigned int)0x00000100;
          if(!((4u & fifo->pushbuf) == 0u))
          {
            push->flags = push->flags | (unsigned int)0x00000002;
            nvpb->type = (unsigned int)0x00000002;
          }

          else
            if(!((2u & fifo->pushbuf) == 0u))
            {
              push->flags = push->flags | (unsigned int)0x00000001;
              nvpb->type = (unsigned int)0x00000001;
            }

          nvpb->type = nvpb->type | 0x80000000;
          nvpb->bo_nr = 0;
          for( ; !(nvpb->bo_nr >= nr); nvpb->bo_nr = nvpb->bo_nr + 1)
          {
            ret=nouveau_bo_new(client->device, nvpb->type, (unsigned int)0, (unsigned long int)size, (union nouveau_bo_config *)(void *)0, &nvpb->bos[(signed long int)nvpb->bo_nr]);
            if(!(ret == 0))
            {
              nouveau_pushbuf_del(&push);
              return ret;
            }

          }
          do
          {
            (&nvpb->bctx_list)->prev = &nvpb->bctx_list;
            (&nvpb->bctx_list)->next = &nvpb->bctx_list;
          }
          while((_Bool)0);
          *ppush = push;
          return 0;
        }
      }
    }
  }
}

// nouveau_pushbuf_refd
// file ../../nouveau/pushbuf.c line 757
unsigned int nouveau_pushbuf_refd(struct nouveau_pushbuf *push, struct nouveau_bo *bo)
{
  struct drm_nouveau_gem_pushbuf_bo *kref;
  unsigned int flags = (unsigned int)0;
  struct nouveau_pushbuf *return_value_cli_push_get_1;
  return_value_cli_push_get_1=cli_push_get_link1(push->client, bo);
  if(return_value_cli_push_get_1 == push)
  {
    kref=cli_kref_get(push->client, bo);
    /* assertion kref */
    assert(kref != ((struct drm_nouveau_gem_pushbuf_bo *)NULL));
    if(!(kref->read_domains == 0u))
      flags = flags | (unsigned int)0x00000100;

    if(!(kref->write_domains == 0u))
      flags = flags | (unsigned int)0x00000200;

  }

  return flags;
}

// nouveau_pushbuf_refn
// file ../../nouveau/pushbuf.c line 736
signed int nouveau_pushbuf_refn(struct nouveau_pushbuf *push, struct nouveau_pushbuf_refn *refs, signed int nr)
{
  signed int return_value_pushbuf_refn_1;
  return_value_pushbuf_refn_1=pushbuf_refn(push, (_Bool)1, refs, nr);
  return return_value_pushbuf_refn_1;
}

// nouveau_pushbuf_reloc
// file ../../nouveau/pushbuf.c line 743
void nouveau_pushbuf_reloc(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int data, unsigned int flags, unsigned int vor, unsigned int tor)
{
  *push->cur=pushbuf_krel(push, bo, data, flags, vor, tor);
  push->cur = push->cur + 1l;
}

// nouveau_pushbuf_space
// file ../../nouveau/pushbuf.c line 641
signed int nouveau_pushbuf_space(struct nouveau_pushbuf *push, unsigned int dwords, unsigned int relocs, unsigned int pushes)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct nouveau_client *client = push->client;
  struct nouveau_bo *bo = (struct nouveau_bo *)(void *)0;
  _Bool flushed = (_Bool)0;
  signed int ret = 0;
  signed int tmp_post_1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  struct drm_nouveau_gem_pushbuf_bo *return_value_pushbuf_kref_2;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  signed int tmp_if_expr_8;
  signed int return_value_pushbuf_validate_7;
  if(push->cur + (signed long int)dwords >= push->end)
  {
    if(!(nvpb->bo_next >= nvpb->bo_nr))
    {
      tmp_post_1 = nvpb->bo_next;
      nvpb->bo_next = nvpb->bo_next + 1;
      nouveau_bo_ref(nvpb->bos[(signed long int)tmp_post_1], &bo);
      if(nvpb->bo_next == nvpb->bo_nr)
      {
        if(!(push->channel == ((struct nouveau_object *)NULL)))
          nvpb->bo_next = 0;

      }

      goto __CPROVER_DUMP_L3;
    }

    ret=nouveau_bo_new(client->device, nvpb->type, (unsigned int)0, nvpb->bos[(signed long int)0]->size, (union nouveau_bo_config *)(void *)0, &bo);
    if(ret == 0)
      goto __CPROVER_DUMP_L3;

    return ret;
  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    pushes = pushes + 1u;
    if(!(bo == ((struct nouveau_bo *)NULL)))
    {
      if(!(push->channel == ((struct nouveau_object *)NULL)))
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_pushbuf_kref_2=pushbuf_kref(push, bo, push->flags);
        tmp_if_expr_3 = !(return_value_pushbuf_kref_2 != ((struct drm_nouveau_gem_pushbuf_bo *)NULL)) ? (_Bool)1 : (_Bool)0;
      }
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = (unsigned int)krec->nr_reloc + relocs >= (unsigned int)1024 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = (unsigned int)krec->nr_push + pushes >= (unsigned int)512 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
    {
      if(!(nvpb->bo == ((struct nouveau_bo *)NULL)))
      {
        if(!(krec->nr_buffer == 0))
          pushbuf_flush(push);

      }

      flushed = (_Bool)1;
    }

    if(!(bo == ((struct nouveau_bo *)NULL)))
    {
      ret=nouveau_bo_map(bo, (unsigned int)0x00000200, push->client);
      if(!(ret == 0))
        return ret;

      nouveau_pushbuf_data(push, (struct nouveau_bo *)(void *)0, (unsigned long int)0, (unsigned long int)0);
      nouveau_bo_ref(bo, &nvpb->bo);
      nouveau_bo_ref((struct nouveau_bo *)(void *)0, &bo);
      nvpb->bgn = (unsigned int *)nvpb->bo->map;
      nvpb->ptr = nvpb->bgn;
      push->cur = nvpb->bgn;
      push->end = push->cur + (signed long int)(nvpb->bo->size / (unsigned long int)4);
      push->end = push->end - (signed long int)((unsigned int)2 + push->rsvd_kick);
    }

    pushbuf_kref(push, nvpb->bo, push->flags);
    if(!(flushed == (_Bool)0))
    {
      return_value_pushbuf_validate_7=pushbuf_validate(push, (_Bool)0);
      tmp_if_expr_8 = return_value_pushbuf_validate_7;
    }

    else
      tmp_if_expr_8 = 0;
    return tmp_if_expr_8;
  }
}

// nouveau_pushbuf_validate
// file ../../nouveau/pushbuf.c line 751
signed int nouveau_pushbuf_validate(struct nouveau_pushbuf *push)
{
  signed int return_value_pushbuf_validate_1;
  return_value_pushbuf_validate_1=pushbuf_validate(push, (_Bool)1);
  return return_value_pushbuf_validate_1;
}

// nouveau_setparam
// file ../../nouveau/nouveau.c line 532
signed int nouveau_setparam(struct nouveau_device *dev, unsigned long int param, unsigned long int value)
{
  struct nouveau_drm *drm;
  drm=nouveau_drm(&dev->object);
  struct drm_nouveau_setparam r = { .param=param, .value=value };
  signed int return_value_drmCommandWrite_1;
  return_value_drmCommandWrite_1=drmCommandWrite(drm->fd, (unsigned long int)0x01, (void *)&r, sizeof(struct drm_nouveau_setparam) /*16ul*/ );
  return return_value_drmCommandWrite_1;
}

// openclose
// file ../../../tests/nouveau/threaded.c line 61
static void * openclose(void *dev)
{
  struct nouveau_device *nvdev = (struct nouveau_device *)dev;
  struct nouveau_bo *bo = (struct nouveau_bo *)(void *)0;
  signed int i = 0;
  for( ; !(i >= 100000); i = i + 1)
  {
    signed int return_value_nouveau_bo_prime_handle_ref_1;
    return_value_nouveau_bo_prime_handle_ref_1=nouveau_bo_prime_handle_ref(nvdev, import_fd, &bo);
    if(return_value_nouveau_bo_prime_handle_ref_1 == 0)
      nouveau_bo_ref((struct nouveau_bo *)(void *)0, &bo);

  }
  return (void *)0;
}

// pushbuf_dump
// file ../../nouveau/pushbuf.c line 267
static void pushbuf_dump(struct nouveau_pushbuf_krec *krec, signed int krec_id, signed int chid)
{
  struct drm_nouveau_gem_pushbuf_reloc *krel;
  struct drm_nouveau_gem_pushbuf_push *kpsh;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  struct nouveau_bo *bo;
  unsigned int *bgn;
  unsigned int *end;
  signed int i;
  fprintf(stderr, "nouveau: ch%d: krec %d pushes %d bufs %d relocs %d\n", chid, krec_id, krec->nr_push, krec->nr_buffer, krec->nr_reloc);
  kref = krec->buffer;
  i = 0;
  for( ; !(i >= krec->nr_buffer); kref = kref + 1l)
  {
    fprintf(stderr, "nouveau: ch%d: buf %08x %08x %08x %08x %08x\n", chid, i, kref->handle, kref->valid_domains, kref->read_domains, kref->write_domains);
    i = i + 1;
  }
  krel = krec->reloc;
  i = 0;
  for( ; !(i >= krec->nr_reloc); krel = krel + 1l)
  {
    fprintf(stderr, "nouveau: ch%d: rel %08x %08x %08x %08x %08x %08x %08x\n", chid, krel->reloc_bo_index, krel->reloc_bo_offset, krel->bo_index, krel->flags, krel->data, krel->vor, krel->tor);
    i = i + 1;
  }
  kpsh = krec->push;
  i = 0;
  unsigned int *tmp_post_1;
  for( ; !(i >= krec->nr_push); kpsh = kpsh + 1l)
  {
    kref = krec->buffer + (signed long int)kpsh->bo_index;
    bo = (struct nouveau_bo *)(void *)(unsigned long int)kref->user_priv;
    bgn = (unsigned int *)((char *)bo->map + (signed long int)kpsh->offset);
    end = bgn + (signed long int)(kpsh->length / (unsigned long int)4);
    fprintf(stderr, "nouveau: ch%d: psh %08x %010llx %010llx\n", chid, kpsh->bo_index, (unsigned long long int)kpsh->offset, (unsigned long long int)(kpsh->offset + kpsh->length));
    while(!(bgn >= end))
    {
      tmp_post_1 = bgn;
      bgn = bgn + 1l;
      fprintf(stderr, "nouveau: \t0x%08x\n", *tmp_post_1);
    }
    i = i + 1;
  }
}

// pushbuf_flush
// file ../../nouveau/pushbuf.c line 395
static signed int pushbuf_flush(struct nouveau_pushbuf *push)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  struct nouveau_bufctx *bctx;
  struct nouveau_bufctx *btmp;
  struct nouveau_bo *bo;
  signed int ret = 0;
  signed int i;
  if(!(push->channel == ((struct nouveau_object *)NULL)))
    ret=pushbuf_submit(push, push->channel);

  else
  {
    nouveau_pushbuf_data(push, (struct nouveau_bo *)(void *)0, (unsigned long int)0, (unsigned long int)0);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct nouveau_pushbuf_krec) /*81960ul*/ );
    krec->next = (struct nouveau_pushbuf_krec *)return_value_malloc_1;
    nvpb->krec = krec->next;
  }
  kref = krec->buffer;
  i = 0;
  for( ; !(i >= krec->nr_buffer); kref = kref + 1l)
  {
    bo = (struct nouveau_bo *)(void *)(unsigned long int)kref->user_priv;
    cli_kref_set(push->client, bo, (struct drm_nouveau_gem_pushbuf_bo *)(void *)0, (struct nouveau_pushbuf *)(void *)0);
    if(!(push->channel == ((struct nouveau_object *)NULL)))
      nouveau_bo_ref((struct nouveau_bo *)(void *)0, &bo);

    i = i + 1;
  }
  krec = nvpb->krec;
  krec->vram_used = (unsigned long int)0;
  krec->gart_used = (unsigned long int)0;
  krec->nr_buffer = 0;
  krec->nr_reloc = 0;
  krec->nr_push = 0;
  bctx = (struct nouveau_bufctx *)((char *)(&nvpb->bctx_list)->next - (signed long int)8ul);
  btmp = (struct nouveau_bufctx *)((char *)bctx->head.next - (signed long int)8ul);
  for( ; !(&bctx->head == &nvpb->bctx_list); btmp = (struct nouveau_bufctx *)((char *)btmp->head.next - (signed long int)8ul))
  {
    if(!(bctx->current.next == &bctx->current))
    {
      (&bctx->current)->next->prev = &bctx->pending;
      (&bctx->current)->prev->next = (&bctx->pending)->next;
      (&bctx->pending)->next->prev = (&bctx->current)->prev;
      (&bctx->pending)->next = (&bctx->current)->next;
    }

    do
    {
      (&bctx->current)->prev = &bctx->current;
      (&bctx->current)->next = &bctx->current;
    }
    while((_Bool)0);
    do
    {
      (&bctx->head)->prev->next = (&bctx->head)->next;
      (&bctx->head)->next->prev = (&bctx->head)->prev;
      (&bctx->head)->next = &bctx->head;
      (&bctx->head)->prev = &bctx->head;
    }
    while((_Bool)0);
    bctx = btmp;
  }
  return ret;
}

// pushbuf_kref
// file ../../nouveau/pushbuf.c line 151
static struct drm_nouveau_gem_pushbuf_bo * pushbuf_kref(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int flags)
{
  struct nouveau_device *dev = push->client->device;
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct nouveau_pushbuf *fpush;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  unsigned int domains;
  unsigned int domains_wr;
  unsigned int domains_rd;
  domains = (unsigned int)0;
  if(!((1u & flags) == 0u))
    domains = domains | (unsigned int)(1 << 1);

  if(!((2u & flags) == 0u))
    domains = domains | (unsigned int)(1 << 2);

  domains_wr = domains * (unsigned int)!(!((flags & (unsigned int)0x00000200) != 0u));
  domains_rd = domains * (unsigned int)!(!((flags & (unsigned int)0x00000100) != 0u));
  fpush=cli_push_get_link1(push->client, bo);
  if(!(fpush == ((struct nouveau_pushbuf *)NULL)) && !(fpush == push))
    pushbuf_flush(fpush);

  kref=cli_kref_get(push->client, bo);
  _Bool tmp_if_expr_2;
  _Bool return_value_pushbuf_kref_fits_1;
  signed int tmp_post_3;
  if(!(kref == ((struct drm_nouveau_gem_pushbuf_bo *)NULL)))
  {
    if((kref->valid_domains & domains) == 0u)
      return (struct drm_nouveau_gem_pushbuf_bo *)(void *)0;

    if(!((4u & kref->valid_domains) == 0u))
    {
      if(domains == 2u)
      {
        if(!(dev->vram_limit >= bo->size + krec->vram_used))
          return (struct drm_nouveau_gem_pushbuf_bo *)(void *)0;

        krec->vram_used = krec->vram_used + bo->size;
        krec->gart_used = krec->gart_used - bo->size;
      }

    }

    kref->valid_domains = kref->valid_domains & domains;
    kref->write_domains = kref->write_domains | domains_wr;
    kref->read_domains = kref->read_domains | domains_rd;
  }

  else
  {
    if(krec->nr_buffer == 1024)
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      return_value_pushbuf_kref_fits_1=pushbuf_kref_fits(push, bo, &domains);
      tmp_if_expr_2 = !(return_value_pushbuf_kref_fits_1 != (_Bool)0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
      return (struct drm_nouveau_gem_pushbuf_bo *)(void *)0;

    tmp_post_3 = krec->nr_buffer;
    krec->nr_buffer = krec->nr_buffer + 1;
    kref = &krec->buffer[(signed long int)tmp_post_3];
    kref->user_priv = (unsigned long int)bo;
    kref->handle = bo->handle;
    kref->valid_domains = domains;
    kref->write_domains = domains_wr;
    kref->read_domains = domains_rd;
    kref->presumed.valid = (unsigned int)1;
    kref->presumed.offset = bo->offset;
    if(!((1u & bo->flags) == 0u))
      kref->presumed.domain = (unsigned int)(1 << 1);

    else
      kref->presumed.domain = (unsigned int)(1 << 2);
    cli_kref_set(push->client, bo, kref, push);
    struct nouveau_bo_priv *return_value_nouveau_bo_4;
    return_value_nouveau_bo_4=nouveau_bo_link1(bo);
    __CPROVER_atomic_begin();
    *(&(&return_value_nouveau_bo_4->refcnt)->atomic) = *(&(&return_value_nouveau_bo_4->refcnt)->atomic) + 1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
  }
  return kref;
}

// pushbuf_kref_fits
// file ../../nouveau/pushbuf.c line 83
static _Bool pushbuf_kref_fits(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int *domains)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct nouveau_device *dev = push->client->device;
  struct nouveau_bo *kbo;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  signed int i;
  _Bool tmp_if_expr_1;
  if(*domains == 2u)
  {
    if(!(dev->vram_limit >= bo->size + krec->vram_used))
      return (_Bool)0;

    krec->vram_used = krec->vram_used + bo->size;
    return (_Bool)1;
  }

  else
    if(dev->gart_limit >= bo->size + krec->gart_used)
    {
      krec->gart_used = krec->gart_used + bo->size;
      return (_Bool)1;
    }

    else
      if(!((2u & *domains) == 0u))
      {
        if(!(dev->vram_limit >= bo->size + krec->vram_used))
          goto __CPROVER_DUMP_L4;

        *domains = *domains & (unsigned int)(1 << 1);
        krec->vram_used = krec->vram_used + bo->size;
        return (_Bool)1;
      }

      else
      {

      __CPROVER_DUMP_L4:
        ;
        kref = krec->buffer;
        i = 0;
        for( ; !(i >= krec->nr_buffer); kref = kref + 1l)
        {
          if(!((4u & kref->valid_domains) == 0u))
          {
            kbo = (struct nouveau_bo *)(void *)(unsigned long int)kref->user_priv;
            if((2u & kref->valid_domains) == 0u)
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = krec->vram_used + kbo->size > dev->vram_limit ? (_Bool)1 : (_Bool)0;
            if(!tmp_if_expr_1)
            {
              kref->valid_domains = kref->valid_domains & (unsigned int)(1 << 1);
              krec->gart_used = krec->gart_used - kbo->size;
              krec->vram_used = krec->vram_used + kbo->size;
              if(dev->gart_limit >= bo->size + krec->gart_used)
              {
                krec->gart_used = krec->gart_used + bo->size;
                return (_Bool)1;
              }

            }

          }

          i = i + 1;
        }
        return (_Bool)0;
      }
}

// pushbuf_krel
// file ../../nouveau/pushbuf.c line 223
static unsigned int pushbuf_krel(struct nouveau_pushbuf *push, struct nouveau_bo *bo, unsigned int data, unsigned int flags, unsigned int vor, unsigned int tor)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct drm_nouveau_gem_pushbuf_reloc *krel;
  struct drm_nouveau_gem_pushbuf_bo *pkref;
  struct drm_nouveau_gem_pushbuf_bo *bkref;
  unsigned int reloc = data;
  pkref=cli_kref_get(push->client, nvpb->bo);
  bkref=cli_kref_get(push->client, bo);
  signed int tmp_post_1 = krec->nr_reloc;
  krec->nr_reloc = krec->nr_reloc + 1;
  krel = &krec->reloc[(signed long int)tmp_post_1];
  /* assertion pkref */
  assert(pkref != ((struct drm_nouveau_gem_pushbuf_bo *)NULL));
  /* assertion bkref */
  assert(bkref != ((struct drm_nouveau_gem_pushbuf_bo *)NULL));
  krel->reloc_bo_index = (unsigned int)(pkref - krec->buffer);
  krel->reloc_bo_offset = (unsigned int)((push->cur - nvpb->ptr) * (signed long int)4);
  krel->bo_index = (unsigned int)(bkref - krec->buffer);
  krel->flags = (unsigned int)0;
  krel->data = data;
  krel->vor = vor;
  krel->tor = tor;
  if(!((4096u & flags) == 0u))
  {
    reloc = (unsigned int)(bkref->presumed.offset + (unsigned long int)data);
    krel->flags = krel->flags | (unsigned int)(1 << 0);
  }

  else
    if(!((8192u & flags) == 0u))
    {
      reloc = (unsigned int)(bkref->presumed.offset + (unsigned long int)data >> 32);
      krel->flags = krel->flags | (unsigned int)(1 << 1);
    }

  if(!((16384u & flags) == 0u))
  {
    if(!((2u & bkref->presumed.domain) == 0u))
      reloc = reloc | vor;

    else
      reloc = reloc | tor;
    krel->flags = krel->flags | (unsigned int)(1 << 2);
  }

  return reloc;
}

// pushbuf_refn
// file ../../nouveau/pushbuf.c line 455
static signed int pushbuf_refn(struct nouveau_pushbuf *push, _Bool retry, struct nouveau_pushbuf_refn *refs, signed int nr)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  signed int sref = krec->nr_buffer;
  signed int ret = 0;
  signed int i = 0;
  for( ; !(i >= nr); i = i + 1)
  {
    kref=pushbuf_kref(push, (refs + (signed long int)i)->bo, (refs + (signed long int)i)->flags);
    if(kref == ((struct drm_nouveau_gem_pushbuf_bo *)NULL))
    {
      ret = -28;
      break;
    }

  }
  if(!(ret == 0))
  {
    pushbuf_refn_fail(push, sref, krec->nr_reloc);
    if(!(retry == (_Bool)0))
    {
      pushbuf_flush(push);
      nouveau_pushbuf_space(push, (unsigned int)0, (unsigned int)0, (unsigned int)0);
      signed int return_value_pushbuf_refn_1;
      return_value_pushbuf_refn_1=pushbuf_refn(push, (_Bool)0, refs, nr);
      return return_value_pushbuf_refn_1;
    }

  }

  return ret;
}

// pushbuf_refn_fail
// file ../../nouveau/pushbuf.c line 437
static void pushbuf_refn_fail(struct nouveau_pushbuf *push, signed int sref, signed int srel)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct drm_nouveau_gem_pushbuf_bo *kref = krec->buffer + (signed long int)sref;
  signed int tmp_post_1;
  do
  {
    tmp_post_1 = krec->nr_buffer;
    krec->nr_buffer = krec->nr_buffer - 1;
    if(sref >= tmp_post_1)
      break;

    struct nouveau_bo *bo = (struct nouveau_bo *)(void *)(unsigned long int)kref->user_priv;
    cli_kref_set(push->client, bo, (struct drm_nouveau_gem_pushbuf_bo *)(void *)0, (struct nouveau_pushbuf *)(void *)0);
    nouveau_bo_ref((struct nouveau_bo *)(void *)0, &bo);
    kref = kref + 1l;
  }
  while((_Bool)1);
  krec->nr_buffer = sref;
  krec->nr_reloc = srel;
}

// pushbuf_submit
// file ../../nouveau/pushbuf.c line 310

{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->list;
  struct nouveau_device *dev = push->client->device;
  struct nouveau_drm *drm;
  drm=nouveau_drm_link1(&dev->object);
  struct drm_nouveau_gem_pushbuf_bo_presumed *info;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  struct drm_nouveau_gem_pushbuf req;
  struct nouveau_fifo *fifo = (struct nouveau_fifo *)chan->data;
  struct nouveau_bo *bo;
  signed int krec_id = 0;
  signed int ret = 0;
  signed int i;
  signed int tmp_post_1;
  signed int tmp_post_5;
  struct nouveau_bo_priv *return_value_nouveau_bo_6;
  struct nouveau_bo_priv *return_value_nouveau_bo_7;
  if(!(chan->oclass == 0x80000001))
    return -22;

  else
  {
    if(!(push->kick_notify == ((void (*)(struct nouveau_pushbuf *))NULL)))
      push->kick_notify(push);

    nouveau_pushbuf_data(push, (struct nouveau_bo *)(void *)0, (unsigned long int)0, (unsigned long int)0);
    while(!(krec == ((struct nouveau_pushbuf_krec *)NULL)))
    {
      if(krec->nr_push == 0)
        break;

      req.channel = fifo->channel;
      req.nr_buffers = (unsigned int)krec->nr_buffer;
      req.buffers = (unsigned long int)krec->buffer;
      req.nr_relocs = (unsigned int)krec->nr_reloc;
      req.nr_push = (unsigned int)krec->nr_push;
      req.relocs = (unsigned long int)krec->reloc;
      req.push = (unsigned long int)krec->push;
      req.suffix0 = nvpb->suffix0;
      req.suffix1 = nvpb->suffix1;
      req.vram_available = (unsigned long int)0;
      req.gart_available = (unsigned long int)0;
      if(!((1u & nouveau_debug) == 0u))
      {
        tmp_post_1 = krec_id;
        krec_id = krec_id + 1;
        pushbuf_dump(krec, tmp_post_1, (signed int)fifo->channel);
      }

      ret=drmCommandWriteRead(drm->fd, (unsigned long int)0x41, (void *)&req, sizeof(struct drm_nouveau_gem_pushbuf) /*64ul*/ );
      nvpb->suffix0 = req.suffix0;
      nvpb->suffix1 = req.suffix1;
      struct nouveau_device_priv *return_value_nouveau_device_2;
      return_value_nouveau_device_2=nouveau_device_link1(dev);
      dev->vram_limit = (req.vram_available * (unsigned long int)return_value_nouveau_device_2->vram_limit_percent) / (unsigned long int)100;
      struct nouveau_device_priv *return_value_nouveau_device_3;
      return_value_nouveau_device_3=nouveau_device_link1(dev);
      dev->gart_limit = (req.gart_available * (unsigned long int)return_value_nouveau_device_3->gart_limit_percent) / (unsigned long int)100;
      if(!(ret == 0))
      {
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(-ret);
        fprintf(stderr, "nouveau: kernel rejected pushbuf: %s\n", return_value_strerror_4);
        tmp_post_5 = krec_id;
        krec_id = krec_id + 1;
        pushbuf_dump(krec, tmp_post_5, (signed int)fifo->channel);
        break;
      }

      kref = krec->buffer;
      i = 0;
      for( ; !(i >= krec->nr_buffer); kref = kref + 1l)
      {
        bo = (struct nouveau_bo *)(void *)(unsigned long int)kref->user_priv;
        info = &kref->presumed;
        if(info->valid == 0u)
        {
          bo->flags = bo->flags & (unsigned int)~(0x00000001 | 0x00000002);
          if(info->domain == 2u)
            bo->flags = bo->flags | (unsigned int)0x00000001;

          else
            bo->flags = bo->flags | (unsigned int)0x00000002;
          bo->offset = info->offset;
        }

        if(!(kref->write_domains == 0u))
        {
          return_value_nouveau_bo_6=nouveau_bo_link1(bo);
          return_value_nouveau_bo_6->access = return_value_nouveau_bo_6->access | (unsigned int)0x00000200;
        }

        if(!(kref->read_domains == 0u))
        {
          return_value_nouveau_bo_7=nouveau_bo_link1(bo);
          return_value_nouveau_bo_7->access = return_value_nouveau_bo_7->access | (unsigned int)0x00000100;
        }

        i = i + 1;
      }
      krec = krec->next;
    }
    return ret;
  }
}

// pushbuf_validate
// file ../../nouveau/pushbuf.c line 485
static signed int pushbuf_validate(struct nouveau_pushbuf *push, _Bool retry)
{
  struct nouveau_pushbuf_priv *nvpb;
  nvpb=nouveau_pushbuf(push);
  struct nouveau_pushbuf_krec *krec = nvpb->krec;
  struct drm_nouveau_gem_pushbuf_bo *kref;
  struct nouveau_bufctx *bctx = push->bufctx;
  struct nouveau_bufref *bref;
  signed int relocs;
  signed int tmp_if_expr_1;
  if(!(bctx == ((struct nouveau_bufctx *)NULL)))
    tmp_if_expr_1 = bctx->relocs * 2;

  else
    tmp_if_expr_1 = 0;
  relocs = tmp_if_expr_1;
  signed int sref;
  signed int srel;
  signed int ret;
  ret=nouveau_pushbuf_space(push, (unsigned int)relocs, (unsigned int)relocs, (unsigned int)0);
  unsigned int *tmp_post_2;
  unsigned int *tmp_post_3;
  if(bctx == ((struct nouveau_bufctx *)NULL) || !(ret == 0))
    return ret;

  else
  {
    sref = krec->nr_buffer;
    srel = krec->nr_reloc;
    do
    {
      (&bctx->head)->prev->next = (&bctx->head)->next;
      (&bctx->head)->next->prev = (&bctx->head)->prev;
    }
    while((_Bool)0);
    do
    {
      (&bctx->head)->prev = &nvpb->bctx_list;
      (&bctx->head)->next = (&nvpb->bctx_list)->next;
      (&nvpb->bctx_list)->next->prev = &bctx->head;
      (&nvpb->bctx_list)->next = &bctx->head;
    }
    while((_Bool)0);
    bref = (struct nouveau_bufref *)((char *)(&bctx->pending)->next - (signed long int)0ul);
    for( ; !(&bref->thead == &bctx->pending); bref = (struct nouveau_bufref *)((char *)bref->thead.next - (signed long int)0ul))
    {
      kref=pushbuf_kref(push, bref->bo, bref->flags);
      if(kref == ((struct drm_nouveau_gem_pushbuf_bo *)NULL))
      {
        ret = -28;
        break;
      }

      if(!(bref->packet == 0u))
      {
        pushbuf_krel(push, bref->bo, bref->packet, (unsigned int)0, (unsigned int)0, (unsigned int)0);
        tmp_post_2 = push->cur;
        push->cur = push->cur + 1l;
        *tmp_post_2 = (unsigned int)0;
        pushbuf_krel(push, bref->bo, bref->data, bref->flags, bref->vor, bref->tor);
        tmp_post_3 = push->cur;
        push->cur = push->cur + 1l;
        *tmp_post_3 = (unsigned int)0;
      }

    }
    if(!(bctx->pending.next == &bctx->pending))
    {
      (&bctx->pending)->next->prev = &bctx->current;
      (&bctx->pending)->prev->next = (&bctx->current)->next;
      (&bctx->current)->next->prev = (&bctx->pending)->prev;
      (&bctx->current)->next = (&bctx->pending)->next;
    }

    do
    {
      (&bctx->pending)->prev = &bctx->pending;
      (&bctx->pending)->next = &bctx->pending;
    }
    while((_Bool)0);
    if(!(ret == 0))
    {
      pushbuf_refn_fail(push, sref, srel);
      if(!(retry == (_Bool)0))
      {
        pushbuf_flush(push);
        signed int return_value_pushbuf_validate_4;
        return_value_pushbuf_validate_4=pushbuf_validate(push, (_Bool)0);
        return return_value_pushbuf_validate_4;
      }

    }

    return ret;
  }
}

// sort_req_list
// file ../xf86drmMode.c line 1300
static signed int sort_req_list(const void *misc, const void *other)
{
  const struct _drmModeAtomicReqItem *first = (const struct _drmModeAtomicReqItem *)misc;
  const struct _drmModeAtomicReqItem *second = (const struct _drmModeAtomicReqItem *)other;
  if(!(first->object_id >= second->object_id))
    return -1;

  else
    if(!(second->object_id >= first->object_id))
      return 1;

    else
      return (signed int)(second->property_id - first->property_id);
}

// sort_req_list_link1
// file ../xf86drmMode.c line 1300
static signed int sort_req_list_link1(const void *misc_link1, const void *other_link1)
{
  const struct _drmModeAtomicReqItem *first_link1 = (const struct _drmModeAtomicReqItem *)misc_link1;
  const struct _drmModeAtomicReqItem *second_link1 = (const struct _drmModeAtomicReqItem *)other_link1;
  if(!(first_link1->object_id >= second_link1->object_id))
    return -1;

  else
    if(!(second_link1->object_id >= first_link1->object_id))
      return 1;

    else
      return (signed int)(second_link1->property_id - first_link1->property_id);
}

