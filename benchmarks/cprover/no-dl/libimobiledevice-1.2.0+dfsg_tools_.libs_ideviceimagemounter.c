// #anon_enum_AFC_E_SUCCESS=0_AFC_E_UNKNOWN_ERROR=1_AFC_E_OP_HEADER_INVALID=2_AFC_E_NO_RESOURCES=3_AFC_E_READ_ERROR=4_AFC_E_WRITE_ERROR=5_AFC_E_UNKNOWN_PACKET_TYPE=6_AFC_E_INVALID_ARG=7_AFC_E_OBJECT_NOT_FOUND=8_AFC_E_OBJECT_IS_DIR=9_AFC_E_PERM_DENIED=10_AFC_E_SERVICE_NOT_CONNECTED=11_AFC_E_OP_TIMEOUT=12_AFC_E_TOO_MUCH_DATA=13_AFC_E_END_OF_DATA=14_AFC_E_OP_NOT_SUPPORTED=15_AFC_E_OBJECT_EXISTS=16_AFC_E_OBJECT_BUSY=17_AFC_E_NO_SPACE_LEFT=18_AFC_E_OP_WOULD_BLOCK=19_AFC_E_IO_ERROR=20_AFC_E_OP_INTERRUPTED=21_AFC_E_OP_IN_PROGRESS=22_AFC_E_INTERNAL_ERROR=23_AFC_E_MUX_ERROR=30_AFC_E_NO_MEM=31_AFC_E_NOT_ENOUGH_DATA=32_AFC_E_DIR_NOT_EMPTY=33_AFC_E_FORCE_SIGNED_TYPE=-1
// file ../include/libimobiledevice/afc.h line 37
enum anonymous_7 { AFC_E_SUCCESS=0, AFC_E_UNKNOWN_ERROR=1, AFC_E_OP_HEADER_INVALID=2, AFC_E_NO_RESOURCES=3, AFC_E_READ_ERROR=4, AFC_E_WRITE_ERROR=5, AFC_E_UNKNOWN_PACKET_TYPE=6, AFC_E_INVALID_ARG=7, AFC_E_OBJECT_NOT_FOUND=8, AFC_E_OBJECT_IS_DIR=9, AFC_E_PERM_DENIED=10, AFC_E_SERVICE_NOT_CONNECTED=11, AFC_E_OP_TIMEOUT=12, AFC_E_TOO_MUCH_DATA=13, AFC_E_END_OF_DATA=14, AFC_E_OP_NOT_SUPPORTED=15, AFC_E_OBJECT_EXISTS=16, AFC_E_OBJECT_BUSY=17, AFC_E_NO_SPACE_LEFT=18, AFC_E_OP_WOULD_BLOCK=19, AFC_E_IO_ERROR=20, AFC_E_OP_INTERRUPTED=21, AFC_E_OP_IN_PROGRESS=22, AFC_E_INTERNAL_ERROR=23, AFC_E_MUX_ERROR=30, AFC_E_NO_MEM=31, AFC_E_NOT_ENOUGH_DATA=32, AFC_E_DIR_NOT_EMPTY=33, AFC_E_FORCE_SIGNED_TYPE=-1 };

// #anon_enum_AFC_FOPEN_RDONLY=1_AFC_FOPEN_RW=2_AFC_FOPEN_WRONLY=3_AFC_FOPEN_WR=4_AFC_FOPEN_APPEND=5_AFC_FOPEN_RDAPPEND=6
// file ../include/libimobiledevice/afc.h line 70
enum anonymous_16 { AFC_FOPEN_RDONLY=1, AFC_FOPEN_RW=2, AFC_FOPEN_WRONLY=3, AFC_FOPEN_WR=4, AFC_FOPEN_APPEND=5, AFC_FOPEN_RDAPPEND=6 };

// #anon_enum_AFC_HARDLINK=1_AFC_SYMLINK=2
// file ../include/libimobiledevice/afc.h line 80
enum anonymous_21 { AFC_HARDLINK=1, AFC_SYMLINK=2 };

// #anon_enum_AFC_LOCK_SH=5_AFC_LOCK_EX=6_AFC_LOCK_UN=12
// file ../include/libimobiledevice/afc.h line 86
enum anonymous_0 { AFC_LOCK_SH=5, AFC_LOCK_EX=6, AFC_LOCK_UN=12 };

// #anon_enum_DEBUGSERVER_E_SUCCESS=0_DEBUGSERVER_E_INVALID_ARG=-1_DEBUGSERVER_E_MUX_ERROR=-2_DEBUGSERVER_E_SSL_ERROR=-3_DEBUGSERVER_E_RESPONSE_ERROR=-4_DEBUGSERVER_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/debugserver.h line 36
enum anonymous_51 { DEBUGSERVER_E_SUCCESS=0, DEBUGSERVER_E_INVALID_ARG=-1, DEBUGSERVER_E_MUX_ERROR=-2, DEBUGSERVER_E_SSL_ERROR=-3, DEBUGSERVER_E_RESPONSE_ERROR=-4, DEBUGSERVER_E_UNKNOWN_ERROR=-256 };

// #anon_enum_DIAGNOSTICS_RELAY_E_SUCCESS=0_DIAGNOSTICS_RELAY_E_INVALID_ARG=-1_DIAGNOSTICS_RELAY_E_PLIST_ERROR=-2_DIAGNOSTICS_RELAY_E_MUX_ERROR=-3_DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST=-4_DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/diagnostics_relay.h line 36
enum anonymous_49 { DIAGNOSTICS_RELAY_E_SUCCESS=0, DIAGNOSTICS_RELAY_E_INVALID_ARG=-1, DIAGNOSTICS_RELAY_E_PLIST_ERROR=-2, DIAGNOSTICS_RELAY_E_MUX_ERROR=-3, DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST=-4, DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR=-256 };

// #anon_enum_DISK_IMAGE_UPLOAD_TYPE_AFC=0_DISK_IMAGE_UPLOAD_TYPE_UPLOAD_IMAGE=1
// file ideviceimagemounter.c line 50
enum anonymous_10 { DISK_IMAGE_UPLOAD_TYPE_AFC=0, DISK_IMAGE_UPLOAD_TYPE_UPLOAD_IMAGE=1 };

// #anon_enum_FILE_RELAY_E_SUCCESS=0_FILE_RELAY_E_INVALID_ARG=-1_FILE_RELAY_E_PLIST_ERROR=-2_FILE_RELAY_E_MUX_ERROR=-3_FILE_RELAY_E_INVALID_SOURCE=-4_FILE_RELAY_E_STAGING_EMPTY=-5_FILE_RELAY_E_PERMISSION_DENIED=-6_FILE_RELAY_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/file_relay.h line 38
enum anonymous_22 { FILE_RELAY_E_SUCCESS=0, FILE_RELAY_E_INVALID_ARG=-1, FILE_RELAY_E_PLIST_ERROR=-2, FILE_RELAY_E_MUX_ERROR=-3, FILE_RELAY_E_INVALID_SOURCE=-4, FILE_RELAY_E_STAGING_EMPTY=-5, FILE_RELAY_E_PERMISSION_DENIED=-6, FILE_RELAY_E_UNKNOWN_ERROR=-256 };

// #anon_enum_GNUTLS_CRD_CERTIFICATE=1_GNUTLS_CRD_ANON=2_GNUTLS_CRD_SRP=3_GNUTLS_CRD_PSK=4_GNUTLS_CRD_IA=5
// file /usr/include/gnutls/gnutls.h line 222
enum anonymous_29 { GNUTLS_CRD_CERTIFICATE=1, GNUTLS_CRD_ANON=2, GNUTLS_CRD_SRP=3, GNUTLS_CRD_PSK=4, GNUTLS_CRD_IA=5 };

// #anon_enum_GNUTLS_CRT_UNKNOWN=0_GNUTLS_CRT_X509=1_GNUTLS_CRT_OPENPGP=2_GNUTLS_CRT_RAW=3
// file /usr/include/gnutls/gnutls.h line 599
enum anonymous_31 { GNUTLS_CRT_UNKNOWN=0, GNUTLS_CRT_X509=1, GNUTLS_CRT_OPENPGP=2, GNUTLS_CRT_RAW=3 };

// #anon_enum_GNUTLS_DIG_UNKNOWN=0_GNUTLS_DIG_NULL=1_GNUTLS_DIG_MD5=2_GNUTLS_DIG_SHA1=3_GNUTLS_DIG_RMD160=4_GNUTLS_DIG_MD2=5_GNUTLS_DIG_SHA256=6_GNUTLS_DIG_SHA384=7_GNUTLS_DIG_SHA512=8_GNUTLS_DIG_SHA224=9
// file /usr/include/gnutls/gnutls.h line 285
enum anonymous_14 { GNUTLS_DIG_UNKNOWN=0, GNUTLS_DIG_NULL=1, GNUTLS_DIG_MD5=2, GNUTLS_DIG_SHA1=3, GNUTLS_DIG_RMD160=4, GNUTLS_DIG_MD2=5, GNUTLS_DIG_SHA256=6, GNUTLS_DIG_SHA384=7, GNUTLS_DIG_SHA512=8, GNUTLS_DIG_SHA224=9 };

// #anon_enum_GNUTLS_PK_UNKNOWN=0_GNUTLS_PK_RSA=1_GNUTLS_PK_DSA=2_GNUTLS_PK_DH=3_GNUTLS_PK_EC=4
// file /usr/include/gnutls/gnutls.h line 647
enum anonymous_19 { GNUTLS_PK_UNKNOWN=0, GNUTLS_PK_RSA=1, GNUTLS_PK_DSA=2, GNUTLS_PK_DH=3, GNUTLS_PK_EC=4 };

// #anon_enum_GNUTLS_PRIVKEY_X509=0_GNUTLS_PRIVKEY_OPENPGP=1_GNUTLS_PRIVKEY_PKCS11=2_GNUTLS_PRIVKEY_EXT=3
// file /usr/include/gnutls/gnutls.h line 1995
enum anonymous_32 { GNUTLS_PRIVKEY_X509=0, GNUTLS_PRIVKEY_OPENPGP=1, GNUTLS_PRIVKEY_PKCS11=2, GNUTLS_PRIVKEY_EXT=3 };

// #anon_enum_GNUTLS_SHUT_RDWR=0_GNUTLS_SHUT_WR=1
// file /usr/include/gnutls/gnutls.h line 554
enum anonymous_30 { GNUTLS_SHUT_RDWR=0, GNUTLS_SHUT_WR=1 };

// #anon_enum_GNUTLS_X509_FMT_DER=0_GNUTLS_X509_FMT_PEM=1
// file /usr/include/gnutls/gnutls.h line 613
enum anonymous_18 { GNUTLS_X509_FMT_DER=0, GNUTLS_X509_FMT_PEM=1 };

// #anon_enum_HEARTBEAT_E_SUCCESS=0_HEARTBEAT_E_INVALID_ARG=-1_HEARTBEAT_E_PLIST_ERROR=-2_HEARTBEAT_E_MUX_ERROR=-3_HEARTBEAT_E_SSL_ERROR=-4_HEARTBEAT_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/heartbeat.h line 36
enum anonymous_50 { HEARTBEAT_E_SUCCESS=0, HEARTBEAT_E_INVALID_ARG=-1, HEARTBEAT_E_PLIST_ERROR=-2, HEARTBEAT_E_MUX_ERROR=-3, HEARTBEAT_E_SSL_ERROR=-4, HEARTBEAT_E_UNKNOWN_ERROR=-256 };

// #anon_enum_HOUSE_ARREST_E_SUCCESS=0_HOUSE_ARREST_E_INVALID_ARG=-1_HOUSE_ARREST_E_PLIST_ERROR=-2_HOUSE_ARREST_E_CONN_FAILED=-3_HOUSE_ARREST_E_INVALID_MODE=-4_HOUSE_ARREST_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/house_arrest.h line 38
enum anonymous_45 { HOUSE_ARREST_E_SUCCESS=0, HOUSE_ARREST_E_INVALID_ARG=-1, HOUSE_ARREST_E_PLIST_ERROR=-2, HOUSE_ARREST_E_CONN_FAILED=-3, HOUSE_ARREST_E_INVALID_MODE=-4, HOUSE_ARREST_E_UNKNOWN_ERROR=-256 };

// #anon_enum_IDEVICE_E_SUCCESS=0_IDEVICE_E_INVALID_ARG=-1_IDEVICE_E_UNKNOWN_ERROR=-2_IDEVICE_E_NO_DEVICE=-3_IDEVICE_E_NOT_ENOUGH_DATA=-4_IDEVICE_E_BAD_HEADER=-5_IDEVICE_E_SSL_ERROR=-6
// file ../include/libimobiledevice/libimobiledevice.h line 38
enum anonymous_5 { IDEVICE_E_SUCCESS=0, IDEVICE_E_INVALID_ARG=-1, IDEVICE_E_UNKNOWN_ERROR=-2, IDEVICE_E_NO_DEVICE=-3, IDEVICE_E_NOT_ENOUGH_DATA=-4, IDEVICE_E_BAD_HEADER=-5, IDEVICE_E_SSL_ERROR=-6 };

// #anon_enum_INSTPROXY_COMMAND_TYPE_ASYNC=0_INSTPROXY_COMMAND_TYPE_SYNC=1
// file installation_proxy.c line 33
enum anonymous_26 { INSTPROXY_COMMAND_TYPE_ASYNC=0, INSTPROXY_COMMAND_TYPE_SYNC=1 };

// #anon_enum_INSTPROXY_E_SUCCESS=0_INSTPROXY_E_INVALID_ARG=-1_INSTPROXY_E_PLIST_ERROR=-2_INSTPROXY_E_CONN_FAILED=-3_INSTPROXY_E_OP_IN_PROGRESS=-4_INSTPROXY_E_OP_FAILED=-5_INSTPROXY_E_RECEIVE_TIMEOUT=-6_INSTPROXY_E_ALREADY_ARCHIVED=-7_INSTPROXY_E_API_INTERNAL_ERROR=-8_INSTPROXY_E_APPLICATION_ALREADY_INSTALLED=-9_INSTPROXY_E_APPLICATION_MOVE_FAILED=-10_INSTPROXY_E_APPLICATION_SINF_CAPTURE_FAILED=-11_INSTPROXY_E_APPLICATION_SANDBOX_FAILED=-12_INSTPROXY_E_APPLICATION_VERIFICATION_FAILED=-13_INSTPROXY_E_ARCHIVE_DESTRUCTION_FAILED=-14_INSTPROXY_E_BUNDLE_VERIFICATION_FAILED=-15_INSTPROXY_E_CARRIER_BUNDLE_COPY_FAILED=-16_INSTPROXY_E_CARRIER_BUNDLE_DIRECTORY_CREATION_FAILED=-17_INSTPROXY_E_CARRIER_BUNDLE_MISSING_SUPPORTED_SIMS=-18_INSTPROXY_E_COMM_CENTER_NOTIFICATION_FAILED=-19_INSTPROXY_E_CONTAINER_CREATION_FAILED=-20_INSTPROXY_E_CONTAINER_P0WN_FAILED=-21_INSTPROXY_E_CONTAINER_REMOVAL_FAILED=-22_INSTPROXY_E_EMBEDDED_PROFILE_INSTALL_FAILED=-23_INSTPROXY_E_EXECUTABLE_TWIDDLE_FAILED=-24_INSTPROXY_E_EXISTENCE_CHECK_FAILED=-25_INSTPROXY_E_INSTALL_MAP_UPDATE_FAILED=-26_INSTPROXY_E_MANIFEST_CAPTURE_FAILED=-27_INSTPROXY_E_MAP_GENERATION_FAILED=-28_INSTPROXY_E_MISSING_BUNDLE_EXECUTABLE=-29_INSTPROXY_E_MISSING_BUNDLE_IDENTIFIER=-30_INSTPROXY_E_MISSING_BUNDLE_PATH=-31_INSTPROXY_E_MISSING_CONTAINER=-32_INSTPROXY_E_NOTIFICATION_FAILED=-33_INSTPROXY_E_PACKAGE_EXTRACTION_FAILED=-34_INSTPROXY_E_PACKAGE_INSPECTION_FAILED=-35_INSTPROXY_E_PACKAGE_MOVE_FAILED=-36_INSTPROXY_E_PATH_CONVERSION_FAILED=-37_INSTPROXY_E_RESTORE_CONTAINER_FAILED=-38_INSTPROXY_E_SEATBELT_PROFILE_REMOVAL_FAILED=-39_INSTPROXY_E_STAGE_CREATION_FAILED=-40_INSTPROXY_E_SYMLINK_FAILED=-41_INSTPROXY_E_UNKNOWN_COMMAND=-42_INSTPROXY_E_ITUNES_ARTWORK_CAPTURE_FAILED=-43_INSTPROXY_E_ITUNES_METADATA_CAPTURE_FAILED=-44_INSTPROXY_E_DEVICE_OS_VERSION_TOO_LOW=-45_INSTPROXY_E_DEVICE_FAMILY_NOT_SUPPORTED=-46_INSTPROXY_E_PACKAGE_PATCH_FAILED=-47_INSTPROXY_E_INCORRECT_ARCHITECTURE=-48_INSTPROXY_E_PLUGIN_COPY_FAILED=-49_INSTPROXY_E_BREADCRUMB_FAILED=-50_INSTPROXY_E_BREADCRUMB_UNLOCK_FAILED=-51_INSTPROXY_E_GEOJSON_CAPTURE_FAILED=-52_INSTPROXY_E_NEWSSTAND_ARTWORK_CAPTURE_FAILED=-53_INSTPROXY_E_MISSING_COMMAND=-54_INSTPROXY_E_NOT_ENTITLED=-55_INSTPROXY_E_MISSING_PACKAGE_PATH=-56_INSTPROXY_E_MISSING_CONTAINER_PATH=-57_INSTPROXY_E_MISSING_APPLICATION_IDENTIFIER=-58_INSTPROXY_E_MISSING_ATTRIBUTE_VALUE=-59_INSTPROXY_E_LOOKUP_FAILED=-60_INSTPROXY_E_DICT_CREATION_FAILED=-61_INSTPROXY_E_INSTALL_PROHIBITED=-62_INSTPROXY_E_UNINSTALL_PROHIBITED=-63_INSTPROXY_E_MISSING_BUNDLE_VERSION=-64_INSTPROXY_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/installation_proxy.h line 39
enum anonymous_25 { INSTPROXY_E_SUCCESS=0, INSTPROXY_E_INVALID_ARG=-1, INSTPROXY_E_PLIST_ERROR=-2, INSTPROXY_E_CONN_FAILED=-3, INSTPROXY_E_OP_IN_PROGRESS=-4, INSTPROXY_E_OP_FAILED=-5, INSTPROXY_E_RECEIVE_TIMEOUT=-6, INSTPROXY_E_ALREADY_ARCHIVED=-7, INSTPROXY_E_API_INTERNAL_ERROR=-8, INSTPROXY_E_APPLICATION_ALREADY_INSTALLED=-9, INSTPROXY_E_APPLICATION_MOVE_FAILED=-10, INSTPROXY_E_APPLICATION_SINF_CAPTURE_FAILED=-11, INSTPROXY_E_APPLICATION_SANDBOX_FAILED=-12, INSTPROXY_E_APPLICATION_VERIFICATION_FAILED=-13, INSTPROXY_E_ARCHIVE_DESTRUCTION_FAILED=-14, INSTPROXY_E_BUNDLE_VERIFICATION_FAILED=-15, INSTPROXY_E_CARRIER_BUNDLE_COPY_FAILED=-16, INSTPROXY_E_CARRIER_BUNDLE_DIRECTORY_CREATION_FAILED=-17, INSTPROXY_E_CARRIER_BUNDLE_MISSING_SUPPORTED_SIMS=-18, INSTPROXY_E_COMM_CENTER_NOTIFICATION_FAILED=-19, INSTPROXY_E_CONTAINER_CREATION_FAILED=-20, INSTPROXY_E_CONTAINER_P0WN_FAILED=-21, INSTPROXY_E_CONTAINER_REMOVAL_FAILED=-22, INSTPROXY_E_EMBEDDED_PROFILE_INSTALL_FAILED=-23, INSTPROXY_E_EXECUTABLE_TWIDDLE_FAILED=-24, INSTPROXY_E_EXISTENCE_CHECK_FAILED=-25, INSTPROXY_E_INSTALL_MAP_UPDATE_FAILED=-26, INSTPROXY_E_MANIFEST_CAPTURE_FAILED=-27, INSTPROXY_E_MAP_GENERATION_FAILED=-28, INSTPROXY_E_MISSING_BUNDLE_EXECUTABLE=-29, INSTPROXY_E_MISSING_BUNDLE_IDENTIFIER=-30, INSTPROXY_E_MISSING_BUNDLE_PATH=-31, INSTPROXY_E_MISSING_CONTAINER=-32, INSTPROXY_E_NOTIFICATION_FAILED=-33, INSTPROXY_E_PACKAGE_EXTRACTION_FAILED=-34, INSTPROXY_E_PACKAGE_INSPECTION_FAILED=-35, INSTPROXY_E_PACKAGE_MOVE_FAILED=-36, INSTPROXY_E_PATH_CONVERSION_FAILED=-37, INSTPROXY_E_RESTORE_CONTAINER_FAILED=-38, INSTPROXY_E_SEATBELT_PROFILE_REMOVAL_FAILED=-39, INSTPROXY_E_STAGE_CREATION_FAILED=-40, INSTPROXY_E_SYMLINK_FAILED=-41, INSTPROXY_E_UNKNOWN_COMMAND=-42, INSTPROXY_E_ITUNES_ARTWORK_CAPTURE_FAILED=-43, INSTPROXY_E_ITUNES_METADATA_CAPTURE_FAILED=-44, INSTPROXY_E_DEVICE_OS_VERSION_TOO_LOW=-45, INSTPROXY_E_DEVICE_FAMILY_NOT_SUPPORTED=-46, INSTPROXY_E_PACKAGE_PATCH_FAILED=-47, INSTPROXY_E_INCORRECT_ARCHITECTURE=-48, INSTPROXY_E_PLUGIN_COPY_FAILED=-49, INSTPROXY_E_BREADCRUMB_FAILED=-50, INSTPROXY_E_BREADCRUMB_UNLOCK_FAILED=-51, INSTPROXY_E_GEOJSON_CAPTURE_FAILED=-52, INSTPROXY_E_NEWSSTAND_ARTWORK_CAPTURE_FAILED=-53, INSTPROXY_E_MISSING_COMMAND=-54, INSTPROXY_E_NOT_ENTITLED=-55, INSTPROXY_E_MISSING_PACKAGE_PATH=-56, INSTPROXY_E_MISSING_CONTAINER_PATH=-57, INSTPROXY_E_MISSING_APPLICATION_IDENTIFIER=-58, INSTPROXY_E_MISSING_ATTRIBUTE_VALUE=-59, INSTPROXY_E_LOOKUP_FAILED=-60, INSTPROXY_E_DICT_CREATION_FAILED=-61, INSTPROXY_E_INSTALL_PROHIBITED=-62, INSTPROXY_E_UNINSTALL_PROHIBITED=-63, INSTPROXY_E_MISSING_BUNDLE_VERSION=-64, INSTPROXY_E_UNKNOWN_ERROR=-256 };

// #anon_enum_LOCKDOWN_E_SUCCESS=0_LOCKDOWN_E_INVALID_ARG=-1_LOCKDOWN_E_INVALID_CONF=-2_LOCKDOWN_E_PLIST_ERROR=-3_LOCKDOWN_E_PAIRING_FAILED=-4_LOCKDOWN_E_SSL_ERROR=-5_LOCKDOWN_E_DICT_ERROR=-6_LOCKDOWN_E_NOT_ENOUGH_DATA=-7_LOCKDOWN_E_MUX_ERROR=-8_LOCKDOWN_E_NO_RUNNING_SESSION=-9_LOCKDOWN_E_INVALID_RESPONSE=-10_LOCKDOWN_E_MISSING_KEY=-11_LOCKDOWN_E_MISSING_VALUE=-12_LOCKDOWN_E_GET_PROHIBITED=-13_LOCKDOWN_E_SET_PROHIBITED=-14_LOCKDOWN_E_REMOVE_PROHIBITED=-15_LOCKDOWN_E_IMMUTABLE_VALUE=-16_LOCKDOWN_E_PASSWORD_PROTECTED=-17_LOCKDOWN_E_USER_DENIED_PAIRING=-18_LOCKDOWN_E_PAIRING_DIALOG_RESPONSE_PENDING=-19_LOCKDOWN_E_MISSING_HOST_ID=-20_LOCKDOWN_E_INVALID_HOST_ID=-21_LOCKDOWN_E_SESSION_ACTIVE=-22_LOCKDOWN_E_SESSION_INACTIVE=-23_LOCKDOWN_E_MISSING_SESSION_ID=-24_LOCKDOWN_E_INVALID_SESSION_ID=-25_LOCKDOWN_E_MISSING_SERVICE=-26_LOCKDOWN_E_INVALID_SERVICE=-27_LOCKDOWN_E_SERVICE_LIMIT=-28_LOCKDOWN_E_MISSING_PAIR_RECORD=-29_LOCKDOWN_E_SAVE_PAIR_RECORD_FAILED=-30_LOCKDOWN_E_INVALID_PAIR_RECORD=-31_LOCKDOWN_E_INVALID_ACTIVATION_RECORD=-32_LOCKDOWN_E_MISSING_ACTIVATION_RECORD=-33_LOCKDOWN_E_SERVICE_PROHIBITED=-34_LOCKDOWN_E_ESCROW_LOCKED=-35_LOCKDOWN_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/lockdown.h line 37
enum anonymous_9 { LOCKDOWN_E_SUCCESS=0, LOCKDOWN_E_INVALID_ARG=-1, LOCKDOWN_E_INVALID_CONF=-2, LOCKDOWN_E_PLIST_ERROR=-3, LOCKDOWN_E_PAIRING_FAILED=-4, LOCKDOWN_E_SSL_ERROR=-5, LOCKDOWN_E_DICT_ERROR=-6, LOCKDOWN_E_NOT_ENOUGH_DATA=-7, LOCKDOWN_E_MUX_ERROR=-8, LOCKDOWN_E_NO_RUNNING_SESSION=-9, LOCKDOWN_E_INVALID_RESPONSE=-10, LOCKDOWN_E_MISSING_KEY=-11, LOCKDOWN_E_MISSING_VALUE=-12, LOCKDOWN_E_GET_PROHIBITED=-13, LOCKDOWN_E_SET_PROHIBITED=-14, LOCKDOWN_E_REMOVE_PROHIBITED=-15, LOCKDOWN_E_IMMUTABLE_VALUE=-16, LOCKDOWN_E_PASSWORD_PROTECTED=-17, LOCKDOWN_E_USER_DENIED_PAIRING=-18, LOCKDOWN_E_PAIRING_DIALOG_RESPONSE_PENDING=-19, LOCKDOWN_E_MISSING_HOST_ID=-20, LOCKDOWN_E_INVALID_HOST_ID=-21, LOCKDOWN_E_SESSION_ACTIVE=-22, LOCKDOWN_E_SESSION_INACTIVE=-23, LOCKDOWN_E_MISSING_SESSION_ID=-24, LOCKDOWN_E_INVALID_SESSION_ID=-25, LOCKDOWN_E_MISSING_SERVICE=-26, LOCKDOWN_E_INVALID_SERVICE=-27, LOCKDOWN_E_SERVICE_LIMIT=-28, LOCKDOWN_E_MISSING_PAIR_RECORD=-29, LOCKDOWN_E_SAVE_PAIR_RECORD_FAILED=-30, LOCKDOWN_E_INVALID_PAIR_RECORD=-31, LOCKDOWN_E_INVALID_ACTIVATION_RECORD=-32, LOCKDOWN_E_MISSING_ACTIVATION_RECORD=-33, LOCKDOWN_E_SERVICE_PROHIBITED=-34, LOCKDOWN_E_ESCROW_LOCKED=-35, LOCKDOWN_E_UNKNOWN_ERROR=-256 };

// #anon_enum_MB_RESTORE_NOTIFY_SPRINGBOARD=1_MB_RESTORE_PRESERVE_SETTINGS=2_MB_RESTORE_PRESERVE_CAMERA_ROLL=4
// file ../include/libimobiledevice/mobilebackup.h line 50
enum anonymous_44 { MB_RESTORE_NOTIFY_SPRINGBOARD=1, MB_RESTORE_PRESERVE_SETTINGS=2, MB_RESTORE_PRESERVE_CAMERA_ROLL=4 };

// #anon_enum_MISAGENT_E_SUCCESS=0_MISAGENT_E_INVALID_ARG=-1_MISAGENT_E_PLIST_ERROR=-2_MISAGENT_E_CONN_FAILED=-3_MISAGENT_E_REQUEST_FAILED=-4_MISAGENT_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/misagent.h line 37
enum anonymous_47 { MISAGENT_E_SUCCESS=0, MISAGENT_E_INVALID_ARG=-1, MISAGENT_E_PLIST_ERROR=-2, MISAGENT_E_CONN_FAILED=-3, MISAGENT_E_REQUEST_FAILED=-4, MISAGENT_E_UNKNOWN_ERROR=-256 };

// #anon_enum_MOBILEBACKUP2_E_SUCCESS=0_MOBILEBACKUP2_E_INVALID_ARG=-1_MOBILEBACKUP2_E_PLIST_ERROR=-2_MOBILEBACKUP2_E_MUX_ERROR=-3_MOBILEBACKUP2_E_BAD_VERSION=-4_MOBILEBACKUP2_E_REPLY_NOT_OK=-5_MOBILEBACKUP2_E_NO_COMMON_VERSION=-6_MOBILEBACKUP2_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/mobilebackup2.h line 37
enum anonymous_46 { MOBILEBACKUP2_E_SUCCESS=0, MOBILEBACKUP2_E_INVALID_ARG=-1, MOBILEBACKUP2_E_PLIST_ERROR=-2, MOBILEBACKUP2_E_MUX_ERROR=-3, MOBILEBACKUP2_E_BAD_VERSION=-4, MOBILEBACKUP2_E_REPLY_NOT_OK=-5, MOBILEBACKUP2_E_NO_COMMON_VERSION=-6, MOBILEBACKUP2_E_UNKNOWN_ERROR=-256 };

// #anon_enum_MOBILEBACKUP_E_SUCCESS=0_MOBILEBACKUP_E_INVALID_ARG=-1_MOBILEBACKUP_E_PLIST_ERROR=-2_MOBILEBACKUP_E_MUX_ERROR=-3_MOBILEBACKUP_E_BAD_VERSION=-4_MOBILEBACKUP_E_REPLY_NOT_OK=-5_MOBILEBACKUP_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/mobilebackup.h line 37
enum anonymous_43 { MOBILEBACKUP_E_SUCCESS=0, MOBILEBACKUP_E_INVALID_ARG=-1, MOBILEBACKUP_E_PLIST_ERROR=-2, MOBILEBACKUP_E_MUX_ERROR=-3, MOBILEBACKUP_E_BAD_VERSION=-4, MOBILEBACKUP_E_REPLY_NOT_OK=-5, MOBILEBACKUP_E_UNKNOWN_ERROR=-256 };

// #anon_enum_MOBILESYNC_E_SUCCESS=0_MOBILESYNC_E_INVALID_ARG=-1_MOBILESYNC_E_PLIST_ERROR=-2_MOBILESYNC_E_MUX_ERROR=-3_MOBILESYNC_E_BAD_VERSION=-4_MOBILESYNC_E_SYNC_REFUSED=-5_MOBILESYNC_E_CANCELLED=-6_MOBILESYNC_E_WRONG_DIRECTION=-7_MOBILESYNC_E_NOT_READY=-8_MOBILESYNC_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/mobilesync.h line 40
enum anonymous_39 { MOBILESYNC_E_SUCCESS=0, MOBILESYNC_E_INVALID_ARG=-1, MOBILESYNC_E_PLIST_ERROR=-2, MOBILESYNC_E_MUX_ERROR=-3, MOBILESYNC_E_BAD_VERSION=-4, MOBILESYNC_E_SYNC_REFUSED=-5, MOBILESYNC_E_CANCELLED=-6, MOBILESYNC_E_WRONG_DIRECTION=-7, MOBILESYNC_E_NOT_READY=-8, MOBILESYNC_E_UNKNOWN_ERROR=-256 };

// #anon_enum_MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER=0_MOBILESYNC_SYNC_DIR_COMPUTER_TO_DEVICE=1
// file mobilesync.h line 29
enum anonymous_40 { MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER=0, MOBILESYNC_SYNC_DIR_COMPUTER_TO_DEVICE=1 };

// #anon_enum_MOBILESYNC_SYNC_TYPE_FAST=0_MOBILESYNC_SYNC_TYPE_SLOW=1_MOBILESYNC_SYNC_TYPE_RESET=2
// file ../include/libimobiledevice/mobilesync.h line 54
enum anonymous_42 { MOBILESYNC_SYNC_TYPE_FAST=0, MOBILESYNC_SYNC_TYPE_SLOW=1, MOBILESYNC_SYNC_TYPE_RESET=2 };

// #anon_enum_MOBILE_IMAGE_MOUNTER_E_SUCCESS=0_MOBILE_IMAGE_MOUNTER_E_INVALID_ARG=-1_MOBILE_IMAGE_MOUNTER_E_PLIST_ERROR=-2_MOBILE_IMAGE_MOUNTER_E_CONN_FAILED=-3_MOBILE_IMAGE_MOUNTER_E_COMMAND_FAILED=-4_MOBILE_IMAGE_MOUNTER_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/mobile_image_mounter.h line 37
enum anonymous_12 { MOBILE_IMAGE_MOUNTER_E_SUCCESS=0, MOBILE_IMAGE_MOUNTER_E_INVALID_ARG=-1, MOBILE_IMAGE_MOUNTER_E_PLIST_ERROR=-2, MOBILE_IMAGE_MOUNTER_E_CONN_FAILED=-3, MOBILE_IMAGE_MOUNTER_E_COMMAND_FAILED=-4, MOBILE_IMAGE_MOUNTER_E_UNKNOWN_ERROR=-256 };

// #anon_enum_NP_E_SUCCESS=0_NP_E_INVALID_ARG=-1_NP_E_PLIST_ERROR=-2_NP_E_CONN_FAILED=-3_NP_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/notification_proxy.h line 37
enum anonymous_24 { NP_E_SUCCESS=0, NP_E_INVALID_ARG=-1, NP_E_PLIST_ERROR=-2, NP_E_CONN_FAILED=-3, NP_E_UNKNOWN_ERROR=-256 };

// #anon_enum_PLIST_BOOLEAN=0_PLIST_UINT=1_PLIST_REAL=2_PLIST_STRING=3_PLIST_ARRAY=4_PLIST_DICT=5_PLIST_DATE=6_PLIST_DATA=7_PLIST_KEY=8_PLIST_UID=9_PLIST_NONE=10
// file /usr/include/plist/plist.h line 98
enum anonymous_11 { PLIST_BOOLEAN=0, PLIST_UINT=1, PLIST_REAL=2, PLIST_STRING=3, PLIST_ARRAY=4, PLIST_DICT=5, PLIST_DATE=6, PLIST_DATA=7, PLIST_KEY=8, PLIST_UID=9, PLIST_NONE=10 };

// #anon_enum_PROPERTY_LIST_SERVICE_E_SUCCESS=0_PROPERTY_LIST_SERVICE_E_INVALID_ARG=-1_PROPERTY_LIST_SERVICE_E_PLIST_ERROR=-2_PROPERTY_LIST_SERVICE_E_MUX_ERROR=-3_PROPERTY_LIST_SERVICE_E_SSL_ERROR=-4_PROPERTY_LIST_SERVICE_E_RECEIVE_TIMEOUT=-5_PROPERTY_LIST_SERVICE_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/property_list_service.h line 34
enum anonymous_23 { PROPERTY_LIST_SERVICE_E_SUCCESS=0, PROPERTY_LIST_SERVICE_E_INVALID_ARG=-1, PROPERTY_LIST_SERVICE_E_PLIST_ERROR=-2, PROPERTY_LIST_SERVICE_E_MUX_ERROR=-3, PROPERTY_LIST_SERVICE_E_SSL_ERROR=-4, PROPERTY_LIST_SERVICE_E_RECEIVE_TIMEOUT=-5, PROPERTY_LIST_SERVICE_E_UNKNOWN_ERROR=-256 };

// #anon_enum_RESTORE_E_SUCCESS=0_RESTORE_E_INVALID_ARG=-1_RESTORE_E_INVALID_CONF=-2_RESTORE_E_PLIST_ERROR=-3_RESTORE_E_DICT_ERROR=-4_RESTORE_E_NOT_ENOUGH_DATA=-5_RESTORE_E_MUX_ERROR=-6_RESTORE_E_START_RESTORE_FAILED=-7_RESTORE_E_DEVICE_ERROR=-8_RESTORE_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/restore.h line 35
enum anonymous_48 { RESTORE_E_SUCCESS=0, RESTORE_E_INVALID_ARG=-1, RESTORE_E_INVALID_CONF=-2, RESTORE_E_PLIST_ERROR=-3, RESTORE_E_DICT_ERROR=-4, RESTORE_E_NOT_ENOUGH_DATA=-5, RESTORE_E_MUX_ERROR=-6, RESTORE_E_START_RESTORE_FAILED=-7, RESTORE_E_DEVICE_ERROR=-8, RESTORE_E_UNKNOWN_ERROR=-256 };

// #anon_enum_SBSERVICES_E_SUCCESS=0_SBSERVICES_E_INVALID_ARG=-1_SBSERVICES_E_PLIST_ERROR=-2_SBSERVICES_E_CONN_FAILED=-3_SBSERVICES_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/sbservices.h line 37
enum anonymous_36 { SBSERVICES_E_SUCCESS=0, SBSERVICES_E_INVALID_ARG=-1, SBSERVICES_E_PLIST_ERROR=-2, SBSERVICES_E_CONN_FAILED=-3, SBSERVICES_E_UNKNOWN_ERROR=-256 };

// #anon_enum_SBSERVICES_INTERFACE_ORIENTATION_UNKNOWN=0_SBSERVICES_INTERFACE_ORIENTATION_PORTRAIT=1_SBSERVICES_INTERFACE_ORIENTATION_PORTRAIT_UPSIDE_DOWN=2_SBSERVICES_INTERFACE_ORIENTATION_LANDSCAPE_RIGHT=3_SBSERVICES_INTERFACE_ORIENTATION_LANDSCAPE_LEFT=4
// file ../include/libimobiledevice/sbservices.h line 47
enum anonymous_37 { SBSERVICES_INTERFACE_ORIENTATION_UNKNOWN=0, SBSERVICES_INTERFACE_ORIENTATION_PORTRAIT=1, SBSERVICES_INTERFACE_ORIENTATION_PORTRAIT_UPSIDE_DOWN=2, SBSERVICES_INTERFACE_ORIENTATION_LANDSCAPE_RIGHT=3, SBSERVICES_INTERFACE_ORIENTATION_LANDSCAPE_LEFT=4 };

// #anon_enum_SCREENSHOTR_E_SUCCESS=0_SCREENSHOTR_E_INVALID_ARG=-1_SCREENSHOTR_E_PLIST_ERROR=-2_SCREENSHOTR_E_MUX_ERROR=-3_SCREENSHOTR_E_BAD_VERSION=-4_SCREENSHOTR_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/screenshotr.h line 38
enum anonymous_38 { SCREENSHOTR_E_SUCCESS=0, SCREENSHOTR_E_INVALID_ARG=-1, SCREENSHOTR_E_PLIST_ERROR=-2, SCREENSHOTR_E_MUX_ERROR=-3, SCREENSHOTR_E_BAD_VERSION=-4, SCREENSHOTR_E_UNKNOWN_ERROR=-256 };

// #anon_enum_SERVICE_E_SUCCESS=0_SERVICE_E_INVALID_ARG=-1_SERVICE_E_MUX_ERROR=-3_SERVICE_E_SSL_ERROR=-4_SERVICE_E_START_SERVICE_ERROR=-5_SERVICE_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/service.h line 34
enum anonymous_20 { SERVICE_E_SUCCESS=0, SERVICE_E_INVALID_ARG=-1, SERVICE_E_MUX_ERROR=-3, SERVICE_E_SSL_ERROR=-4, SERVICE_E_START_SERVICE_ERROR=-5, SERVICE_E_UNKNOWN_ERROR=-256 };

// #anon_enum_SYSLOG_RELAY_E_SUCCESS=0_SYSLOG_RELAY_E_INVALID_ARG=-1_SYSLOG_RELAY_E_MUX_ERROR=-2_SYSLOG_RELAY_E_SSL_ERROR=-3_SYSLOG_RELAY_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/syslog_relay.h line 36
enum anonymous_53 { SYSLOG_RELAY_E_SUCCESS=0, SYSLOG_RELAY_E_INVALID_ARG=-1, SYSLOG_RELAY_E_MUX_ERROR=-2, SYSLOG_RELAY_E_SSL_ERROR=-3, SYSLOG_RELAY_E_UNKNOWN_ERROR=-256 };

// #anon_enum_USERPREF_E_SUCCESS=0_USERPREF_E_INVALID_ARG=-1_USERPREF_E_INVALID_CONF=-2_USERPREF_E_SSL_ERROR=-3_USERPREF_E_READ_ERROR=-4_USERPREF_E_WRITE_ERROR=-5_USERPREF_E_UNKNOWN_ERROR=-256
// file userpref.h line 54
enum anonymous_4 { USERPREF_E_SUCCESS=0, USERPREF_E_INVALID_ARG=-1, USERPREF_E_INVALID_CONF=-2, USERPREF_E_SSL_ERROR=-3, USERPREF_E_READ_ERROR=-4, USERPREF_E_WRITE_ERROR=-5, USERPREF_E_UNKNOWN_ERROR=-256 };

// #anon_enum_WEBINSPECTOR_E_SUCCESS=0_WEBINSPECTOR_E_INVALID_ARG=-1_WEBINSPECTOR_E_PLIST_ERROR=-2_WEBINSPECTOR_E_MUX_ERROR=-3_WEBINSPECTOR_E_SSL_ERROR=-4_WEBINSPECTOR_E_UNKNOWN_ERROR=-256
// file ../include/libimobiledevice/webinspector.h line 37
enum anonymous_52 { WEBINSPECTOR_E_SUCCESS=0, WEBINSPECTOR_E_INVALID_ARG=-1, WEBINSPECTOR_E_PLIST_ERROR=-2, WEBINSPECTOR_E_MUX_ERROR=-3, WEBINSPECTOR_E_SSL_ERROR=-4, WEBINSPECTOR_E_UNKNOWN_ERROR=-256 };

// tag-#anon#ST[*{S8}_S8_'device_anchor'||*{S8}_S8_'computer_anchor'|]
// file ../include/libimobiledevice/mobilesync.h line 63
struct anonymous_41;

// tag-#anon#ST[*{U8}_U8_'data'||U32'size'||U32'_pad0'|]
// file /usr/include/gnutls/gnutls.h line 795
struct anonymous_8;

// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_15;

// tag-#anon#ST[ARR8{S8}_S8_'magic'||U64'entire_length'||U64'this_length'||U64'packet_num'||U64'operation'|]
// file afc.h line 36
struct anonymous_13;

// tag-#anon#ST[ENtag-idevice_event_type#{U32}_U32_'event'||U32'_pad0'||*{cS8}_cS8_'udid'||S32'conn_type'||U32'_pad1'|]
// file ../include/libimobiledevice/libimobiledevice.h line 63
struct anonymous_35;

// tag-#anon#ST[S32'event'||SYM#tag-#anon#ST[U32'handle'||S32'product_id'||ARR41{S8}_S8_'udid'||U24'_pad0'|]#'device'|]
// file /usr/include/usbmuxd.h line 56
struct anonymous_28;

// tag-#anon#ST[U32'handle'||S32'product_id'||ARR41{S8}_S8_'udid'||U24'_pad0'|]
// file /usr/include/usbmuxd.h line 37
struct anonymous_27;

// tag-#anon#UN[*{*{SYM#tag-gnutls_x509_crt_int#}_SYM#tag-gnutls_x509_crt_int#_}_*{SYM#tag-gnutls_x509_crt_int#}_SYM#tag-gnutls_x509_crt_int#__'x509'||*{SYM#tag-gnutls_openpgp_crt_int#}_SYM#tag-gnutls_openpgp_crt_int#_'pgp'|]
// file /usr/include/gnutls/gnutls.h line 2006
union anonymous_33;

// tag-#anon#UN[*{SYM#tag-gnutls_x509_privkey_int#}_SYM#tag-gnutls_x509_privkey_int#_'x509'||*{SYM#tag-gnutls_openpgp_privkey_int#}_SYM#tag-gnutls_openpgp_privkey_int#_'pgp'||*{SYM#tag-gnutls_pkcs11_privkey_st#}_SYM#tag-gnutls_pkcs11_privkey_st#_'pkcs11'|]
// file /usr/include/gnutls/gnutls.h line 2012
union anonymous_34;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_17;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_6;

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

// tag-afc_client_private
// file ../include/libimobiledevice/afc.h line 92
struct afc_client_private;

// tag-asn1_node_st
// file /usr/include/libtasn1.h line 128
struct asn1_node_st;

// tag-asn1_static_node_st
// file /usr/include/libtasn1.h line 140
struct asn1_static_node_st;

// tag-connection_type
// file idevice.h line 49
enum connection_type { CONNECTION_USBMUXD=1 };

// tag-debugserver_client_private
// file ../include/libimobiledevice/debugserver.h line 45
struct debugserver_client_private;

// tag-debugserver_command_private
// file ../include/libimobiledevice/debugserver.h line 48
struct debugserver_command_private;

// tag-device_link_service_client_private
// file device_link_service.h line 39
struct device_link_service_client_private;

// tag-diagnostics_relay_client_private
// file ../include/libimobiledevice/diagnostics_relay.h line 54
struct diagnostics_relay_client_private;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-fd_mode
// file socket.h line 28
enum fd_mode { FDM_READ=0, FDM_WRITE=1, FDM_EXCEPT=2 };

// tag-file_relay_client_private
// file ../include/libimobiledevice/file_relay.h line 49
struct file_relay_client_private;

// tag-gcry_ctl_cmds
// file /usr/include/gcrypt.h line 263
enum gcry_ctl_cmds { GCRYCTL_CFB_SYNC=3, GCRYCTL_RESET=4, GCRYCTL_FINALIZE=5, GCRYCTL_GET_KEYLEN=6, GCRYCTL_GET_BLKLEN=7, GCRYCTL_TEST_ALGO=8, GCRYCTL_IS_SECURE=9, GCRYCTL_GET_ASNOID=10, GCRYCTL_ENABLE_ALGO=11, GCRYCTL_DISABLE_ALGO=12, GCRYCTL_DUMP_RANDOM_STATS=13, GCRYCTL_DUMP_SECMEM_STATS=14, GCRYCTL_GET_ALGO_NPKEY=15, GCRYCTL_GET_ALGO_NSKEY=16, GCRYCTL_GET_ALGO_NSIGN=17, GCRYCTL_GET_ALGO_NENCR=18, GCRYCTL_SET_VERBOSITY=19, GCRYCTL_SET_DEBUG_FLAGS=20, GCRYCTL_CLEAR_DEBUG_FLAGS=21, GCRYCTL_USE_SECURE_RNDPOOL=22, GCRYCTL_DUMP_MEMORY_STATS=23, GCRYCTL_INIT_SECMEM=24, GCRYCTL_TERM_SECMEM=25, GCRYCTL_DISABLE_SECMEM_WARN=27, GCRYCTL_SUSPEND_SECMEM_WARN=28, GCRYCTL_RESUME_SECMEM_WARN=29, GCRYCTL_DROP_PRIVS=30, GCRYCTL_ENABLE_M_GUARD=31, GCRYCTL_START_DUMP=32, GCRYCTL_STOP_DUMP=33, GCRYCTL_GET_ALGO_USAGE=34, GCRYCTL_IS_ALGO_ENABLED=35, GCRYCTL_DISABLE_INTERNAL_LOCKING=36, GCRYCTL_DISABLE_SECMEM=37, GCRYCTL_INITIALIZATION_FINISHED=38, GCRYCTL_INITIALIZATION_FINISHED_P=39, GCRYCTL_ANY_INITIALIZATION_P=40, GCRYCTL_SET_CBC_CTS=41, GCRYCTL_SET_CBC_MAC=42, GCRYCTL_ENABLE_QUICK_RANDOM=44, GCRYCTL_SET_RANDOM_SEED_FILE=45, GCRYCTL_UPDATE_RANDOM_SEED_FILE=46, GCRYCTL_SET_THREAD_CBS=47, GCRYCTL_FAST_POLL=48, GCRYCTL_SET_RANDOM_DAEMON_SOCKET=49, GCRYCTL_USE_RANDOM_DAEMON=50, GCRYCTL_FAKED_RANDOM_P=51, GCRYCTL_SET_RNDEGD_SOCKET=52, GCRYCTL_PRINT_CONFIG=53, GCRYCTL_OPERATIONAL_P=54, GCRYCTL_FIPS_MODE_P=55, GCRYCTL_FORCE_FIPS_MODE=56, GCRYCTL_SELFTEST=57, GCRYCTL_DISABLE_HWF=63, GCRYCTL_SET_ENFORCED_FIPS_FLAG=64, GCRYCTL_SET_PREFERRED_RNG_TYPE=65, GCRYCTL_GET_CURRENT_RNG_TYPE=66, GCRYCTL_DISABLE_LOCKED_SECMEM=67, GCRYCTL_DISABLE_PRIV_DROP=68, GCRYCTL_SET_CCM_LENGTHS=69, GCRYCTL_CLOSE_RANDOM_DEVICE=70, GCRYCTL_INACTIVATE_FIPS_FLAG=71, GCRYCTL_REACTIVATE_FIPS_FLAG=72 };

// tag-gnutls_certificate_credentials_st
// file /usr/include/gnutls/gnutls.h line 1399
struct gnutls_certificate_credentials_st;

// tag-gnutls_openpgp_crt_int
// file /usr/include/gnutls/gnutls.h line 1977
struct gnutls_openpgp_crt_int;

// tag-gnutls_openpgp_privkey_int
// file /usr/include/gnutls/gnutls.h line 1980
struct gnutls_openpgp_privkey_int;

// tag-gnutls_pkcs11_privkey_st
// file /usr/include/gnutls/gnutls.h line 1983
struct gnutls_pkcs11_privkey_st;

// tag-gnutls_retr2_st
// file /usr/include/gnutls/gnutls.h line 2002
struct gnutls_retr2_st;

// tag-gnutls_session_int
// file /usr/include/gnutls/gnutls.h line 782
struct gnutls_session_int;

// tag-gnutls_x509_crt_int
// file /usr/include/gnutls/gnutls.h line 1387
struct gnutls_x509_crt_int;

// tag-gnutls_x509_privkey_int
// file /usr/include/gnutls/gnutls.h line 789
struct gnutls_x509_privkey_int;

// tag-heartbeat_client_private
// file ../include/libimobiledevice/heartbeat.h line 45
struct heartbeat_client_private;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-house_arrest_client_mode
// file house_arrest.h line 28
enum house_arrest_client_mode { HOUSE_ARREST_CLIENT_MODE_NORMAL=0, HOUSE_ARREST_CLIENT_MODE_AFC=1 };

// tag-house_arrest_client_private
// file ../include/libimobiledevice/house_arrest.h line 47
struct house_arrest_client_private;

// tag-idevice_connection_private
// file ../include/libimobiledevice/libimobiledevice.h line 51
struct idevice_connection_private;

// tag-idevice_event_type
// file ../include/libimobiledevice/libimobiledevice.h line 56
enum idevice_event_type { IDEVICE_DEVICE_ADD=1, IDEVICE_DEVICE_REMOVE=2 };

// tag-idevice_private
// file ../include/libimobiledevice/libimobiledevice.h line 48
struct idevice_private;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-instproxy_client_private
// file ../include/libimobiledevice/installation_proxy.h line 110
struct instproxy_client_private;

// tag-instproxy_status_data
// file installation_proxy.c line 38
struct instproxy_status_data;

// tag-lockdownd_client_private
// file ../include/libimobiledevice/lockdown.h line 79
struct lockdownd_client_private;

// tag-lockdownd_pair_record
// file ../include/libimobiledevice/lockdown.h line 82
struct lockdownd_pair_record;

// tag-lockdownd_service_descriptor
// file ../include/libimobiledevice/lockdown.h line 92
struct lockdownd_service_descriptor;

// tag-misagent_client_private
// file ../include/libimobiledevice/misagent.h line 46
struct misagent_client_private;

// tag-mobile_image_mounter_client_private
// file ../include/libimobiledevice/mobile_image_mounter.h line 46
struct mobile_image_mounter_client_private;

// tag-mobilebackup2_client_private
// file ../include/libimobiledevice/mobilebackup2.h line 48
struct mobilebackup2_client_private;

// tag-mobilebackup_client_private
// file ../include/libimobiledevice/mobilebackup.h line 47
struct mobilebackup_client_private;

// tag-mobilesync_client_private
// file ../include/libimobiledevice/mobilesync.h line 60
struct mobilesync_client_private;

// tag-np_client_private
// file ../include/libimobiledevice/notification_proxy.h line 86
struct np_client_private;

// tag-np_thread
// file notification_proxy.c line 35
struct np_thread;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-plist_format_t
// file utils.h line 48
enum plist_format_t { PLIST_FORMAT_XML=0, PLIST_FORMAT_BINARY=1 };

// tag-property_list_service_client_private
// file ../include/libimobiledevice/property_list_service.h line 44
struct property_list_service_client_private;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-restored_client_private
// file ../include/libimobiledevice/restore.h line 48
struct restored_client_private;

// tag-sbservices_client_private
// file ../include/libimobiledevice/sbservices.h line 56
struct sbservices_client_private;

// tag-screenshotr_client_private
// file ../include/libimobiledevice/screenshotr.h line 47
struct screenshotr_client_private;

// tag-service_client_private
// file ../include/libimobiledevice/service.h line 43
struct service_client_private;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/un.h line 29
struct sockaddr_un;

// tag-ssl_data_private
// file idevice.h line 53
struct ssl_data_private;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-syslog_relay_client_private
// file ../include/libimobiledevice/syslog_relay.h line 44
struct syslog_relay_client_private;

// tag-syslog_relay_worker_thread
// file syslog_relay.c line 32
struct syslog_relay_worker_thread;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-webinspector_client_private
// file ../include/libimobiledevice/webinspector.h line 46
struct webinspector_client_private;

#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// afc_client_free
// file ../include/libimobiledevice/afc.h line 130
enum anonymous_7 afc_client_free(struct afc_client_private *client);
// afc_client_new
// file ../include/libimobiledevice/afc.h line 109
enum anonymous_7 afc_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct afc_client_private **client);
// afc_client_new_from_house_arrest_client
// file house_arrest.c line 150
enum anonymous_7 afc_client_new_from_house_arrest_client(struct house_arrest_client_private *client, struct afc_client_private **afc_client);
// afc_client_new_with_service_client
// file afc.c line 71
enum anonymous_7 afc_client_new_with_service_client(struct service_client_private *service_client, struct afc_client_private **client);
// afc_client_start_service
// file afc.c line 118
enum anonymous_7 afc_client_start_service(struct idevice_private *device, struct afc_client_private **client, const char *label);
// afc_dictionary_free
// file afc.c line 1025
enum anonymous_7 afc_dictionary_free(char **dictionary);
// afc_dispatch_packet
// file afc.c line 153
static enum anonymous_7 afc_dispatch_packet(struct afc_client_private *client, unsigned long int operation, const char *data, unsigned int data_length, const char *payload, unsigned int payload_length, unsigned int *bytes_sent);
// afc_file_close
// file ../include/libimobiledevice/afc.h line 190
enum anonymous_7 afc_file_close(struct afc_client_private *client, unsigned long int handle);
// afc_file_lock
// file afc.c line 777
enum anonymous_7 afc_file_lock(struct afc_client_private *client, unsigned long int handle, enum anonymous_0 operation);
// afc_file_open
// file ../include/libimobiledevice/afc.h line 182
enum anonymous_7 afc_file_open(struct afc_client_private *client, const char *filename, enum anonymous_16 file_mode, unsigned long int *handle);
// afc_file_read
// file afc.c line 664
enum anonymous_7 afc_file_read(struct afc_client_private *client, unsigned long int handle, char *data, unsigned int length, unsigned int *bytes_read);
// afc_file_seek
// file afc.c line 811
enum anonymous_7 afc_file_seek(struct afc_client_private *client, unsigned long int handle, signed long int offset, signed int whence);
// afc_file_tell
// file afc.c line 844
enum anonymous_7 afc_file_tell(struct afc_client_private *client, unsigned long int handle, unsigned long int *position);
// afc_file_truncate
// file afc.c line 877
enum anonymous_7 afc_file_truncate(struct afc_client_private *client, unsigned long int handle, unsigned long int newsize);
// afc_file_write
// file ../include/libimobiledevice/afc.h line 230
enum anonymous_7 afc_file_write(struct afc_client_private *client, unsigned long int handle, const char *data, unsigned int length, unsigned int *bytes_written);
// afc_get_device_info
// file afc.c line 441
enum anonymous_7 afc_get_device_info(struct afc_client_private *client, char ***device_information);
// afc_get_device_info_key
// file afc.c line 478
enum anonymous_7 afc_get_device_info_key(struct afc_client_private *client, const char *key, char **value);
// afc_get_file_info
// file ../include/libimobiledevice/afc.h line 170
enum anonymous_7 afc_get_file_info(struct afc_client_private *client, const char *path, char ***file_information);
// afc_lock
// file afc.c line 42
static void afc_lock(struct afc_client_private *client);
// afc_make_directory
// file ../include/libimobiledevice/afc.h line 299
enum anonymous_7 afc_make_directory(struct afc_client_private *client, const char *path);
// afc_make_link
// file afc.c line 938
enum anonymous_7 afc_make_link(struct afc_client_private *client, enum anonymous_21 linktype, const char *target, const char *linkname);
// afc_read_directory
// file afc.c line 405
enum anonymous_7 afc_read_directory(struct afc_client_private *client, const char *path, char ***directory_information);
// afc_receive_data
// file afc.c line 221
static enum anonymous_7 afc_receive_data(struct afc_client_private *client, char **bytes, unsigned int *bytes_recv);
// afc_remove_path
// file afc.c line 505
enum anonymous_7 afc_remove_path(struct afc_client_private *client, const char *path);
// afc_remove_path_and_contents
// file afc.c line 1001
enum anonymous_7 afc_remove_path_and_contents(struct afc_client_private *client, const char *path);
// afc_rename_path
// file afc.c line 533
enum anonymous_7 afc_rename_path(struct afc_client_private *client, const char *from, const char *to);
// afc_set_file_time
// file afc.c line 972
enum anonymous_7 afc_set_file_time(struct afc_client_private *client, const char *path, unsigned long int mtime);
// afc_truncate
// file afc.c line 908
enum anonymous_7 afc_truncate(struct afc_client_private *client, const char *path, unsigned long int newsize);
// afc_unlock
// file afc.c line 53
static void afc_unlock(struct afc_client_private *client);
// asn1_array2tree
// file /usr/include/libtasn1.h line 228
extern signed int asn1_array2tree(const struct asn1_static_node_st *, struct asn1_node_st **, char *);
// asn1_create_element
// file /usr/include/libtasn1.h line 236
extern signed int asn1_create_element(struct asn1_node_st *, const char *, struct asn1_node_st **);
// asn1_delete_structure
// file /usr/include/libtasn1.h line 239
extern signed int asn1_delete_structure(struct asn1_node_st **);
// asn1_der_decoding
// file /usr/include/libtasn1.h line 274
extern signed int asn1_der_decoding(struct asn1_node_st **, const void *, signed int, char *);
// asn1_read_value
// file /usr/include/libtasn1.h line 251
extern signed int asn1_read_value(struct asn1_node_st *, const char *, void *, signed int *);
// asprintf
// file /usr/include/stdio.h line 405
extern signed int asprintf(char ** restrict , const char *, ...);
// base64encode
// file utils.c line 295
static char * base64encode(const unsigned char *buf, unsigned long int size);
// base64encode_link1
// file utils.c line 295
static char * base64encode_link1(const unsigned char *buf_link1, unsigned long int size_link1);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// buffer_read_from_filename
// file utils.c line 203
void buffer_read_from_filename(const char *filename, char **buffer, unsigned long int *length);
// buffer_write_to_filename
// file utils.c line 234
void buffer_write_to_filename(const char *filename, const char *buffer, unsigned long int length);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// count_nullspaces
// file afc.c line 364
static unsigned int count_nullspaces(char *string, unsigned int number);
// create_process_changes_message
// file mobilesync.c line 505
static void * create_process_changes_message(const char *data_class, void *entities, unsigned char more_changes, void *actions);
// debug_buffer
// file debug.c line 101
void debug_buffer(const char *data, const signed int length);
// debug_buffer_to_file
// file debug.c line 136
void debug_buffer_to_file(const char *file, const char *data, const signed int length);
// debug_info_real
// file debug.c line 81
void debug_info_real(const char *func, const char *file, signed int line, const char *format, ...);
// debug_plist_real
// file debug.c line 148
void debug_plist_real(const char *func, const char *file, signed int line, void *plist);
// debugserver_client_free
// file debugserver.c line 98
enum anonymous_51 debugserver_client_free(struct debugserver_client_private *client);
// debugserver_client_new
// file debugserver.c line 63
enum anonymous_51 debugserver_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct debugserver_client_private **client);
// debugserver_client_receive
// file debugserver.c line 151
enum anonymous_51 debugserver_client_receive(struct debugserver_client_private *client, char *data, unsigned int size, unsigned int *received);
// debugserver_client_receive_internal_check
// file debugserver.c line 346
static signed int debugserver_client_receive_internal_check(struct debugserver_client_private *client, char *received_char);
// debugserver_client_receive_response
// file debugserver.c line 370
enum anonymous_51 debugserver_client_receive_response(struct debugserver_client_private *client, char **response);
// debugserver_client_receive_with_timeout
// file debugserver.c line 131
enum anonymous_51 debugserver_client_receive_with_timeout(struct debugserver_client_private *client, char *data, unsigned int size, unsigned int *received, unsigned int timeout);
// debugserver_client_send
// file debugserver.c line 110
enum anonymous_51 debugserver_client_send(struct debugserver_client_private *client, const char *data, unsigned int size, unsigned int *sent);
// debugserver_client_send_ack
// file debugserver.c line 322
static enum anonymous_51 debugserver_client_send_ack(struct debugserver_client_private *client);
// debugserver_client_send_command
// file debugserver.c line 472
enum anonymous_51 debugserver_client_send_command(struct debugserver_client_private *client, struct debugserver_command_private *command, char **response);
// debugserver_client_send_noack
// file debugserver.c line 328
static enum anonymous_51 debugserver_client_send_noack(struct debugserver_client_private *client);
// debugserver_client_set_ack_mode
// file debugserver.c line 334
enum anonymous_51 debugserver_client_set_ack_mode(struct debugserver_client_private *client, signed int enabled);
// debugserver_client_set_argv
// file debugserver.c line 557
enum anonymous_51 debugserver_client_set_argv(struct debugserver_client_private *client, signed int argc, char **argv, char **response);
// debugserver_client_set_environment_hex_encoded
// file debugserver.c line 538
enum anonymous_51 debugserver_client_set_environment_hex_encoded(struct debugserver_client_private *client, const char *env, char **response);
// debugserver_client_start_service
// file debugserver.c line 91
enum anonymous_51 debugserver_client_start_service(struct idevice_private *device, struct debugserver_client_private **client, const char *label);
// debugserver_command_free
// file debugserver.c line 181
enum anonymous_51 debugserver_command_free(struct debugserver_command_private *command);
// debugserver_command_new
// file debugserver.c line 156
enum anonymous_51 debugserver_command_new(const char *name, signed int argc, char **argv, struct debugserver_command_private **command);
// debugserver_decode_string
// file debugserver.c line 275
void debugserver_decode_string(const char *encoded_buffer, unsigned long int encoded_length, char **buffer);
// debugserver_encode_string
// file debugserver.c line 259
void debugserver_encode_string(const char *buffer, char **encoded_buffer, unsigned int *encoded_length);
// debugserver_error
// file debugserver.c line 46
static enum anonymous_51 debugserver_error(enum anonymous_20 err);
// debugserver_format_command
// file debugserver.c line 288
static void debugserver_format_command(const char *prefix, const char *command, const char *arguments, signed int calculate_checksum, char **buffer, unsigned int *size);
// debugserver_get_checksum_for_buffer
// file debugserver.c line 228
static unsigned int debugserver_get_checksum_for_buffer(const char *buffer, unsigned int size);
// debugserver_hex2int
// file debugserver.c line 205
static signed int debugserver_hex2int(char c);
// debugserver_int2hex
// file debugserver.c line 217
static char debugserver_int2hex(signed int x);
// debugserver_response_is_checksum_valid
// file debugserver.c line 240
static signed int debugserver_response_is_checksum_valid(const char *response, unsigned int size);
// device_link_service_client_free
// file device_link_service.c line 119
signed short int device_link_service_client_free(struct device_link_service_client_private *client);
// device_link_service_client_new
// file device_link_service.c line 85
signed short int device_link_service_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct device_link_service_client_private **client);
// device_link_service_disconnect
// file device_link_service.c line 249
signed short int device_link_service_disconnect(struct device_link_service_client_private *client, const char *message);
// device_link_service_get_message
// file device_link_service.c line 40
static signed int device_link_service_get_message(void *dl_msg, char **message);
// device_link_service_receive
// file device_link_service.c line 452
signed short int device_link_service_receive(struct device_link_service_client_private *client, void **plist);
// device_link_service_receive_message
// file device_link_service.c line 345
signed short int device_link_service_receive_message(struct device_link_service_client_private *client, void **msg_plist, char **dlmessage);
// device_link_service_receive_process_message
// file device_link_service.c line 375
signed short int device_link_service_receive_process_message(struct device_link_service_client_private *client, void **message);
// device_link_service_send
// file device_link_service.c line 430
signed short int device_link_service_send(struct device_link_service_client_private *client, void *plist);
// device_link_service_send_ping
// file device_link_service.c line 280
signed short int device_link_service_send_ping(struct device_link_service_client_private *client, const char *message);
// device_link_service_send_process_message
// file device_link_service.c line 308
signed short int device_link_service_send_process_message(struct device_link_service_client_private *client, void *message);
// device_link_service_version_exchange
// file device_link_service.c line 148
signed short int device_link_service_version_exchange(struct device_link_service_client_private *client, unsigned long int version_major, unsigned long int version_minor);
// diagnostics_relay_check_result
// file diagnostics_relay.c line 41
static signed int diagnostics_relay_check_result(void *dict);
// diagnostics_relay_client_free
// file diagnostics_relay.c line 99
enum anonymous_49 diagnostics_relay_client_free(struct diagnostics_relay_client_private *client);
// diagnostics_relay_client_new
// file diagnostics_relay.c line 72
enum anonymous_49 diagnostics_relay_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct diagnostics_relay_client_private **client);
// diagnostics_relay_client_start_service
// file diagnostics_relay.c line 92
enum anonymous_49 diagnostics_relay_client_start_service(struct idevice_private *device, struct diagnostics_relay_client_private **client, const char *label);
// diagnostics_relay_goodbye
// file diagnostics_relay.c line 165
enum anonymous_49 diagnostics_relay_goodbye(struct diagnostics_relay_client_private *client);
// diagnostics_relay_query_ioregistry_entry
// file diagnostics_relay.c line 368
enum anonymous_49 diagnostics_relay_query_ioregistry_entry(struct diagnostics_relay_client_private *client, const char *name, const char *class, void **result);
// diagnostics_relay_query_ioregistry_plane
// file diagnostics_relay.c line 413
enum anonymous_49 diagnostics_relay_query_ioregistry_plane(struct diagnostics_relay_client_private *client, const char *plane, void **result);
// diagnostics_relay_query_mobilegestalt
// file diagnostics_relay.c line 326
enum anonymous_49 diagnostics_relay_query_mobilegestalt(struct diagnostics_relay_client_private *client, void *keys, void **result);
// diagnostics_relay_receive
// file diagnostics_relay.c line 119
static enum anonymous_49 diagnostics_relay_receive(struct diagnostics_relay_client_private *client, void **plist);
// diagnostics_relay_request_diagnostics
// file diagnostics_relay.c line 285
enum anonymous_49 diagnostics_relay_request_diagnostics(struct diagnostics_relay_client_private *client, const char *type, void **diagnostics);
// diagnostics_relay_restart
// file diagnostics_relay.c line 275
enum anonymous_49 diagnostics_relay_restart(struct diagnostics_relay_client_private *client, signed int flags);
// diagnostics_relay_send
// file diagnostics_relay.c line 150
static enum anonymous_49 diagnostics_relay_send(struct diagnostics_relay_client_private *client, void *plist);
// diagnostics_relay_shutdown
// file diagnostics_relay.c line 280
enum anonymous_49 diagnostics_relay_shutdown(struct diagnostics_relay_client_private *client, signed int flags);
// diagnostics_relay_sleep
// file diagnostics_relay.c line 199
enum anonymous_49 diagnostics_relay_sleep(struct diagnostics_relay_client_private *client);
// event_cb_object
//
void event_cb_object(const struct anonymous_35 *, void *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// file_relay_client_free
// file file_relay.c line 54
enum anonymous_22 file_relay_client_free(struct file_relay_client_private *client);
// file_relay_client_new
// file file_relay.c line 27
enum anonymous_22 file_relay_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct file_relay_client_private **client);
// file_relay_client_start_service
// file file_relay.c line 47
enum anonymous_22 file_relay_client_start_service(struct idevice_private *device, struct file_relay_client_private **client, const char *label);
// file_relay_request_sources
// file file_relay.c line 157
enum anonymous_22 file_relay_request_sources(struct file_relay_client_private *client, const char **sources, struct idevice_connection_private **connection);
// file_relay_request_sources_timeout
// file file_relay.c line 65
enum anonymous_22 file_relay_request_sources_timeout(struct file_relay_client_private *client, const char **sources, struct idevice_connection_private **connection, unsigned int timeout);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// gcry_control
// file /usr/include/gcrypt.h line 334
unsigned int gcry_control(enum gcry_ctl_cmds, ...);
// generate_uuid
// file utils.c line 180
char * generate_uuid(void);
// get_rand
// file utils.c line 174
static signed int get_rand(signed int min, signed int max);
// get_rand_link1
// file utils.c line 174
static signed int get_rand_link1(signed int min_link1, signed int max_link1);
// gethostbyname
// file /usr/include/netdb.h line 144
extern struct hostent * gethostbyname(const char *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gnutls_bye
// file /usr/include/gnutls/gnutls.h line 819
signed int gnutls_bye(struct gnutls_session_int *, enum anonymous_30);
// gnutls_certificate_allocate_credentials
// file /usr/include/gnutls/gnutls.h line 1437
signed int gnutls_certificate_allocate_credentials(struct gnutls_certificate_credentials_st **);
// gnutls_certificate_free_credentials
// file /usr/include/gnutls/gnutls.h line 1435
void gnutls_certificate_free_credentials(struct gnutls_certificate_credentials_st *);
// gnutls_certificate_set_retrieve_function
// file /usr/include/gnutls/gnutls.h line 2067
void gnutls_certificate_set_retrieve_function(struct gnutls_certificate_credentials_st *, signed int (*)(struct gnutls_session_int *, const struct anonymous_8 *, signed int, const enum anonymous_19 *, signed int, struct gnutls_retr2_st *));
// gnutls_certificate_type_get
// file /usr/include/gnutls/gnutls.h line 858
enum anonymous_31 gnutls_certificate_type_get(struct gnutls_session_int *);
// gnutls_credentials_set
// file /usr/include/gnutls/gnutls.h line 1367
signed int gnutls_credentials_set(struct gnutls_session_int *, enum anonymous_29, void *);
// gnutls_deinit
// file /usr/include/gnutls/gnutls.h line 816
void gnutls_deinit(struct gnutls_session_int *);
// gnutls_free_object
//
void gnutls_free_object(void *);
// gnutls_handshake
// file /usr/include/gnutls/gnutls.h line 821
signed int gnutls_handshake(struct gnutls_session_int *);
// gnutls_hash_fast
// file /usr/include/gnutls/crypto.h line 112
signed int gnutls_hash_fast(enum anonymous_14, const void *, unsigned long int, void *);
// gnutls_hash_get_len
// file /usr/include/gnutls/crypto.h line 111
signed int gnutls_hash_get_len(enum anonymous_14);
// gnutls_init
// file /usr/include/gnutls/gnutls.h line 815
signed int gnutls_init(struct gnutls_session_int **, unsigned int);
// gnutls_malloc_object
//
void * gnutls_malloc_object(unsigned long int);
// gnutls_pem_base64_decode2
// file /usr/include/gnutls/gnutls.h line 2124
signed int gnutls_pem_base64_decode2(const char *, const struct anonymous_8 *, struct anonymous_8 *);
// gnutls_perror
// file /usr/include/gnutls/gnutls.h line 938
void gnutls_perror(signed int);
// gnutls_priority_set_direct
// file /usr/include/gnutls/gnutls.h line 1176
signed int gnutls_priority_set_direct(struct gnutls_session_int *, const char *, const char **);
// gnutls_record_recv
// file /usr/include/gnutls/gnutls.h line 997
signed long int gnutls_record_recv(struct gnutls_session_int *, void *, unsigned long int);
// gnutls_record_send
// file /usr/include/gnutls/gnutls.h line 992
signed long int gnutls_record_send(struct gnutls_session_int *, const void *, unsigned long int);
// gnutls_session_get_ptr
// file /usr/include/gnutls/gnutls.h line 1752
void * gnutls_session_get_ptr(struct gnutls_session_int *);
// gnutls_session_set_ptr
// file /usr/include/gnutls/gnutls.h line 1751
void gnutls_session_set_ptr(struct gnutls_session_int *, void *);
// gnutls_transport_set_ptr
// file /usr/include/gnutls/gnutls.h line 1722
void gnutls_transport_set_ptr(struct gnutls_session_int *, void *);
// gnutls_transport_set_pull_function
// file /usr/include/gnutls/gnutls.h line 1737
void gnutls_transport_set_pull_function(struct gnutls_session_int *, signed long int (*)(void *, void *, unsigned long int));
// gnutls_transport_set_push_function
// file /usr/include/gnutls/gnutls.h line 1735
void gnutls_transport_set_push_function(struct gnutls_session_int *, signed long int (*)(void *, const void *, unsigned long int));
// gnutls_x509_crt_deinit
// file /usr/include/gnutls/x509.h line 126
void gnutls_x509_crt_deinit(struct gnutls_x509_crt_int *);
// gnutls_x509_crt_export
// file /usr/include/gnutls/x509.h line 146
signed int gnutls_x509_crt_export(struct gnutls_x509_crt_int *, enum anonymous_18, void *, unsigned long int *);
// gnutls_x509_crt_import
// file /usr/include/gnutls/x509.h line 127
signed int gnutls_x509_crt_import(struct gnutls_x509_crt_int *, const struct anonymous_8 *, enum anonymous_18);
// gnutls_x509_crt_init
// file /usr/include/gnutls/x509.h line 125
signed int gnutls_x509_crt_init(struct gnutls_x509_crt_int **);
// gnutls_x509_crt_set_activation_time
// file /usr/include/gnutls/x509.h line 580
signed int gnutls_x509_crt_set_activation_time(struct gnutls_x509_crt_int *, signed long int);
// gnutls_x509_crt_set_ca_status
// file /usr/include/gnutls/x509.h line 543
signed int gnutls_x509_crt_set_ca_status(struct gnutls_x509_crt_int *, unsigned int);
// gnutls_x509_crt_set_expiration_time
// file /usr/include/gnutls/x509.h line 582
signed int gnutls_x509_crt_set_expiration_time(struct gnutls_x509_crt_int *, signed long int);
// gnutls_x509_crt_set_key
// file /usr/include/gnutls/x509.h line 541
signed int gnutls_x509_crt_set_key(struct gnutls_x509_crt_int *, struct gnutls_x509_privkey_int *);
// gnutls_x509_crt_set_key_usage
// file /usr/include/gnutls/x509.h line 436
signed int gnutls_x509_crt_set_key_usage(struct gnutls_x509_crt_int *, unsigned int);
// gnutls_x509_crt_set_serial
// file /usr/include/gnutls/x509.h line 584
signed int gnutls_x509_crt_set_serial(struct gnutls_x509_crt_int *, const void *, unsigned long int);
// gnutls_x509_crt_set_subject_key_id
// file /usr/include/gnutls/x509.h line 587
signed int gnutls_x509_crt_set_subject_key_id(struct gnutls_x509_crt_int *, const void *, unsigned long int);
// gnutls_x509_crt_set_version
// file /usr/include/gnutls/x509.h line 539
signed int gnutls_x509_crt_set_version(struct gnutls_x509_crt_int *, unsigned int);
// gnutls_x509_crt_sign
// file /usr/include/gnutls/x509.h line 572
signed int gnutls_x509_crt_sign(struct gnutls_x509_crt_int *, struct gnutls_x509_crt_int *, struct gnutls_x509_privkey_int *);
// gnutls_x509_privkey_deinit
// file /usr/include/gnutls/x509.h line 985
void gnutls_x509_privkey_deinit(struct gnutls_x509_privkey_int *);
// gnutls_x509_privkey_export
// file /usr/include/gnutls/x509.h line 1068
signed int gnutls_x509_privkey_export(struct gnutls_x509_privkey_int *, enum anonymous_18, void *, unsigned long int *);
// gnutls_x509_privkey_generate
// file /usr/include/gnutls/x509.h line 1063
signed int gnutls_x509_privkey_generate(struct gnutls_x509_privkey_int *, enum anonymous_19, unsigned int, unsigned int);
// gnutls_x509_privkey_import
// file /usr/include/gnutls/x509.h line 995
signed int gnutls_x509_privkey_import(struct gnutls_x509_privkey_int *, const struct anonymous_8 *, enum anonymous_18);
// gnutls_x509_privkey_import_rsa_raw
// file /usr/include/gnutls/x509.h line 1018
signed int gnutls_x509_privkey_import_rsa_raw(struct gnutls_x509_privkey_int *, const struct anonymous_8 *, const struct anonymous_8 *, const struct anonymous_8 *, const struct anonymous_8 *, const struct anonymous_8 *, const struct anonymous_8 *);
// gnutls_x509_privkey_init
// file /usr/include/gnutls/x509.h line 984
signed int gnutls_x509_privkey_init(struct gnutls_x509_privkey_int **);
// heartbeat_client_free
// file heartbeat.c line 95
enum anonymous_50 heartbeat_client_free(struct heartbeat_client_private *client);
// heartbeat_client_new
// file heartbeat.c line 61
enum anonymous_50 heartbeat_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct heartbeat_client_private **client);
// heartbeat_client_start_service
// file heartbeat.c line 88
enum anonymous_50 heartbeat_client_start_service(struct idevice_private *device, struct heartbeat_client_private **client, const char *label);
// heartbeat_error
// file heartbeat.c line 42
static enum anonymous_50 heartbeat_error(enum anonymous_23 err);
// heartbeat_receive
// file heartbeat.c line 121
enum anonymous_50 heartbeat_receive(struct heartbeat_client_private *client, void **plist);
// heartbeat_receive_with_timeout
// file heartbeat.c line 126
enum anonymous_50 heartbeat_receive_with_timeout(struct heartbeat_client_private *client, void **plist, unsigned int timeout_ms);
// heartbeat_send
// file heartbeat.c line 106
enum anonymous_50 heartbeat_send(struct heartbeat_client_private *client, void *plist);
// house_arrest_client_free
// file house_arrest.c line 81
enum anonymous_45 house_arrest_client_free(struct house_arrest_client_private *client);
// house_arrest_client_new
// file house_arrest.c line 58
enum anonymous_45 house_arrest_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct house_arrest_client_private **client);
// house_arrest_client_start_service
// file house_arrest.c line 74
enum anonymous_45 house_arrest_client_start_service(struct idevice_private *device, struct house_arrest_client_private **client, const char *label);
// house_arrest_error
// file house_arrest.c line 41
static enum anonymous_45 house_arrest_error(enum anonymous_23 err);
// house_arrest_get_result
// file house_arrest.c line 132
enum anonymous_45 house_arrest_get_result(struct house_arrest_client_private *client, void **dict);
// house_arrest_send_command
// file house_arrest.c line 112
enum anonymous_45 house_arrest_send_command(struct house_arrest_client_private *client, const char *command, const char *appid);
// house_arrest_send_request
// file house_arrest.c line 96
enum anonymous_45 house_arrest_send_request(struct house_arrest_client_private *client, void *dict);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// idevice_connect
// file idevice.c line 267
enum anonymous_5 idevice_connect(struct idevice_private *device, unsigned short int port, struct idevice_connection_private **connection);
// idevice_connection_disable_ssl
// file idevice.c line 794
enum anonymous_5 idevice_connection_disable_ssl(struct idevice_connection_private *connection);
// idevice_connection_enable_ssl
// file idevice.c line 650
enum anonymous_5 idevice_connection_enable_ssl(struct idevice_connection_private *connection);
// idevice_connection_receive
// file idevice.c line 443
enum anonymous_5 idevice_connection_receive(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes);
// idevice_connection_receive_timeout
// file idevice.c line 389
enum anonymous_5 idevice_connection_receive_timeout(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes, unsigned int timeout);
// idevice_connection_send
// file idevice.c line 343
enum anonymous_5 idevice_connection_send(struct idevice_connection_private *connection, const char *data, unsigned int len, unsigned int *sent_bytes);
// idevice_device_list_free
// file idevice.c line 212
enum anonymous_5 idevice_device_list_free(char **devices);
// idevice_disconnect
// file idevice.c line 293
enum anonymous_5 idevice_disconnect(struct idevice_connection_private *connection);
// idevice_event_subscribe
// file idevice.c line 159
enum anonymous_5 idevice_event_subscribe(void (*callback)(const struct anonymous_35 *, void *), void *user_data);
// idevice_event_subscribe::callback_object
//
void callback_object(const struct anonymous_35 *, void *);
// idevice_event_unsubscribe
// file idevice.c line 171
enum anonymous_5 idevice_event_unsubscribe(void);
// idevice_free
// file ../include/libimobiledevice/libimobiledevice.h line 148
enum anonymous_5 idevice_free(struct idevice_private *device);
// idevice_get_device_list
// file idevice.c line 182
enum anonymous_5 idevice_get_device_list(char ***devices, signed int *count);
// idevice_get_handle
// file idevice.c line 466
enum anonymous_5 idevice_get_handle(struct idevice_private *device, unsigned int *handle);
// idevice_get_udid
// file idevice.c line 480
enum anonymous_5 idevice_get_udid(struct idevice_private *device, char **udid);
// idevice_new
// file ../include/libimobiledevice/libimobiledevice.h line 139
enum anonymous_5 idevice_new(struct idevice_private **device, const char *udid);
// idevice_set_debug_level
// file ../include/libimobiledevice/libimobiledevice.h line 80
void idevice_set_debug_level(signed int level);
// idevice_to_service_error
// file service.c line 40
static enum anonymous_20 idevice_to_service_error(enum anonymous_5 err);
// instproxy_append_current_list_to_result_cb
// file installation_proxy.c line 549
static void instproxy_append_current_list_to_result_cb(void *command, void *status, void *user_data);
// instproxy_archive
// file installation_proxy.c line 722
enum anonymous_25 instproxy_archive(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_archive::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_browse
// file installation_proxy.c line 571
enum anonymous_25 instproxy_browse(struct instproxy_client_private *client, void *client_options, void **result);
// instproxy_browse_with_callback
// file installation_proxy.c line 530
enum anonymous_25 instproxy_browse_with_callback(struct instproxy_client_private *client, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_browse_with_callback::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_check_capabilities_match
// file installation_proxy.c line 773
enum anonymous_25 instproxy_check_capabilities_match(struct instproxy_client_private *client, const char **capabilities, void *client_options, void **result);
// instproxy_client_free
// file installation_proxy.c line 256
enum anonymous_25 instproxy_client_free(struct instproxy_client_private *client);
// instproxy_client_get_path_for_bundle_identifier
// file installation_proxy.c line 984
enum anonymous_25 instproxy_client_get_path_for_bundle_identifier(struct instproxy_client_private *client, const char *appid, char **path);
// instproxy_client_new
// file installation_proxy.c line 232
enum anonymous_25 instproxy_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct instproxy_client_private **client);
// instproxy_client_options_add
// file installation_proxy.c line 922
void instproxy_client_options_add(void *client_options, ...);
// instproxy_client_options_free
// file installation_proxy.c line 977
void instproxy_client_options_free(void *client_options);
// instproxy_client_options_new
// file installation_proxy.c line 917
void * instproxy_client_options_new(void);
// instproxy_client_options_set_return_attributes
// file installation_proxy.c line 956
void instproxy_client_options_set_return_attributes(void *client_options, ...);
// instproxy_client_start_service
// file installation_proxy.c line 249
enum anonymous_25 instproxy_client_start_service(struct idevice_private *device, struct instproxy_client_private **client, const char *label);
// instproxy_command_get_name
// file installation_proxy.c line 908
void instproxy_command_get_name(void *command, char **name);
// instproxy_copy_lookup_result_cb
// file installation_proxy.c line 598
static void instproxy_copy_lookup_result_cb(void *command, void *status, void *user_data);
// instproxy_error
// file installation_proxy.c line 213
static enum anonymous_25 instproxy_error(enum anonymous_23 err);
// instproxy_install
// file installation_proxy.c line 655
enum anonymous_25 instproxy_install(struct instproxy_client_private *client, const char *pkg_path, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_install::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_lock
// file installation_proxy.c line 187
static void instproxy_lock(struct instproxy_client_private *client);
// instproxy_lookup
// file installation_proxy.c line 608
enum anonymous_25 instproxy_lookup(struct instproxy_client_private *client, const char **appids, void *client_options, void **result);
// instproxy_lookup_archives
// file installation_proxy.c line 706
enum anonymous_25 instproxy_lookup_archives(struct instproxy_client_private *client, void *client_options, void **result);
// instproxy_perform_command
// file installation_proxy.c line 507
static enum anonymous_25 instproxy_perform_command(struct instproxy_client_private *client, void *command, enum anonymous_26 async, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_perform_command::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_receive_status_loop
// file installation_proxy.c line 316
static enum anonymous_25 instproxy_receive_status_loop(struct instproxy_client_private *client, void *command, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_receive_status_loop::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_receive_status_loop_thread
// file installation_proxy.c line 416
static void * instproxy_receive_status_loop_thread(void *arg);
// instproxy_receive_status_loop_with_callback
// file installation_proxy.c line 462
static enum anonymous_25 instproxy_receive_status_loop_with_callback(struct instproxy_client_private *client, void *command, enum anonymous_26 async, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_receive_status_loop_with_callback::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_remove_archive
// file installation_proxy.c line 756
enum anonymous_25 instproxy_remove_archive(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_remove_archive::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_restore
// file installation_proxy.c line 739
enum anonymous_25 instproxy_restore(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_restore::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_send_command
// file installation_proxy.c line 288
static enum anonymous_25 instproxy_send_command(struct instproxy_client_private *client, void *command);
// instproxy_status_get_current_list
// file installation_proxy.c line 871
void instproxy_status_get_current_list(void *status, unsigned long int *total, unsigned long int *current_index, unsigned long int *current_amount, void **list);
// instproxy_status_get_error
// file installation_proxy.c line 810
enum anonymous_25 instproxy_status_get_error(void *status, char **name, char **description, unsigned long int *code);
// instproxy_status_get_name
// file installation_proxy.c line 848
void instproxy_status_get_name(void *status, char **name);
// instproxy_status_get_percent_complete
// file installation_proxy.c line 859
void instproxy_status_get_percent_complete(void *status, signed int *percent);
// instproxy_strtoerr
// file installation_proxy.c line 57
static enum anonymous_25 instproxy_strtoerr(const char *name);
// instproxy_uninstall
// file installation_proxy.c line 689
enum anonymous_25 instproxy_uninstall(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_uninstall::status_cb_object
//
void status_cb_object(void *, void *, void *);
// instproxy_unlock
// file installation_proxy.c line 198
static void instproxy_unlock(struct instproxy_client_private *client);
// instproxy_upgrade
// file installation_proxy.c line 672
enum anonymous_25 instproxy_upgrade(struct instproxy_client_private *client, const char *pkg_path, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data);
// instproxy_upgrade::status_cb_object
//
void status_cb_object(void *, void *, void *);
// internal_cert_callback
// file idevice.c line 629
static signed int internal_cert_callback(struct gnutls_session_int *session, const struct anonymous_8 *req_ca_rdn, signed int nreqs, const enum anonymous_19 *sign_algos, signed int sign_algos_length, struct gnutls_retr2_st *st);
// internal_connection_receive
// file idevice.c line 423
static enum anonymous_5 internal_connection_receive(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes);
// internal_connection_receive_timeout
// file idevice.c line 370
static enum anonymous_5 internal_connection_receive_timeout(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes, unsigned int timeout);
// internal_connection_send
// file idevice.c line 323
static enum anonymous_5 internal_connection_send(struct idevice_connection_private *connection, const char *data, unsigned int len, unsigned int *sent_bytes);
// internal_diagnostics_relay_action
// file diagnostics_relay.c line 231
static enum anonymous_49 internal_diagnostics_relay_action(struct diagnostics_relay_client_private *client, const char *name, signed int flags);
// internal_mobilebackup2_receive_message
// file mobilebackup2.c line 163
static enum anonymous_46 internal_mobilebackup2_receive_message(struct mobilebackup2_client_private *client, const char *message, void **result);
// internal_plist_receive_timeout
// file property_list_service.c line 176
static enum anonymous_23 internal_plist_receive_timeout(struct property_list_service_client_private *client, void **plist, unsigned int timeout);
// internal_plist_send
// file property_list_service.c line 104
static enum anonymous_23 internal_plist_send(struct property_list_service_client_private *client, void *plist, signed int binary);
// internal_set_debug_level
// file debug.c line 44
void internal_set_debug_level(signed int level);
// internal_ssl_cleanup
// file idevice.c line 556
static void internal_ssl_cleanup(struct ssl_data_private *ssl_data);
// internal_ssl_read
// file idevice.c line 493
static signed long int internal_ssl_read(void *transport, char *buffer, unsigned long int length);
// internal_ssl_write
// file idevice.c line 538
static signed long int internal_ssl_write(void *transport, char *buffer, unsigned long int length);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lockdown_check_result
// file lockdown.c line 142
static enum anonymous_9 lockdown_check_result(void *dict, const char *query_match);
// lockdownd_activate
// file lockdown.c line 1347
enum anonymous_9 lockdownd_activate(struct lockdownd_client_private *client, void *activation_record);
// lockdownd_build_start_service_request
// file lockdown.c line 1204
static enum anonymous_9 lockdownd_build_start_service_request(struct lockdownd_client_private *client, const char *identifier, signed int send_escrow_bag, void **request);
// lockdownd_client_free
// file ../include/libimobiledevice/lockdown.h line 144
enum anonymous_9 lockdownd_client_free(struct lockdownd_client_private *client);
// lockdownd_client_free_simple
// file lockdown.c line 284
static enum anonymous_9 lockdownd_client_free_simple(struct lockdownd_client_private *client);
// lockdownd_client_new
// file lockdown.c line 630
enum anonymous_9 lockdownd_client_new(struct idevice_private *device, struct lockdownd_client_private **client, const char *label);
// lockdownd_client_new_with_handshake
// file ../include/libimobiledevice/lockdown.h line 134
enum anonymous_9 lockdownd_client_new_with_handshake(struct idevice_private *device, struct lockdownd_client_private **client, const char *label);
// lockdownd_client_set_label
// file lockdown.c line 330
void lockdownd_client_set_label(struct lockdownd_client_private *client, const char *label);
// lockdownd_data_classes_free
// file lockdown.c line 1488
enum anonymous_9 lockdownd_data_classes_free(char **classes);
// lockdownd_deactivate
// file lockdown.c line 1386
enum anonymous_9 lockdownd_deactivate(struct lockdownd_client_private *client);
// lockdownd_do_pair
// file lockdown.c line 850
static enum anonymous_9 lockdownd_do_pair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record, const char *verb);
// lockdownd_do_start_service
// file lockdown.c line 1256
static enum anonymous_9 lockdownd_do_start_service(struct lockdownd_client_private *client, const char *identifier, signed int send_escrow_bag, struct lockdownd_service_descriptor **service);
// lockdownd_enter_recovery
// file lockdown.c line 1031
enum anonymous_9 lockdownd_enter_recovery(struct lockdownd_client_private *client);
// lockdownd_get_device_name
// file lockdown.c line 613
enum anonymous_9 lockdownd_get_device_name(struct lockdownd_client_private *client, char **device_name);
// lockdownd_get_device_public_key_as_key_data
// file lockdown.c line 592
static enum anonymous_9 lockdownd_get_device_public_key_as_key_data(struct lockdownd_client_private *client, struct anonymous_8 *public_key);
// lockdownd_get_device_udid
// file lockdown.c line 567
enum anonymous_9 lockdownd_get_device_udid(struct lockdownd_client_private *client, char **udid);
// lockdownd_get_sync_data_classes
// file lockdown.c line 1433
enum anonymous_9 lockdownd_get_sync_data_classes(struct lockdownd_client_private *client, char ***classes, signed int *count);
// lockdownd_get_value
// file ../include/libimobiledevice/lockdown.h line 168
enum anonymous_9 lockdownd_get_value(struct lockdownd_client_private *client, const char *domain, const char *key, void **value);
// lockdownd_goodbye
// file lockdown.c line 1061
enum anonymous_9 lockdownd_goodbye(struct lockdownd_client_private *client);
// lockdownd_pair
// file lockdown.c line 1016
enum anonymous_9 lockdownd_pair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record);
// lockdownd_pair_record_to_plist
// file lockdown.c line 755
static void * lockdownd_pair_record_to_plist(struct lockdownd_pair_record *pair_record);
// lockdownd_query_type
// file lockdown.c line 373
enum anonymous_9 lockdownd_query_type(struct lockdownd_client_private *client, char **type);
// lockdownd_receive
// file lockdown.c line 340
enum anonymous_9 lockdownd_receive(struct lockdownd_client_private *client, void **plist);
// lockdownd_remove_value
// file lockdown.c line 520
enum anonymous_9 lockdownd_remove_value(struct lockdownd_client_private *client, const char *domain, const char *key);
// lockdownd_send
// file lockdown.c line 358
enum anonymous_9 lockdownd_send(struct lockdownd_client_private *client, void *plist);
// lockdownd_service_descriptor_free
// file ../include/libimobiledevice/lockdown.h line 442
enum anonymous_9 lockdownd_service_descriptor_free(struct lockdownd_service_descriptor *service);
// lockdownd_set_value
// file lockdown.c line 472
enum anonymous_9 lockdownd_set_value(struct lockdownd_client_private *client, const char *domain, const char *key, void *value);
// lockdownd_start_service
// file ../include/libimobiledevice/lockdown.h line 208
enum anonymous_9 lockdownd_start_service(struct lockdownd_client_private *client, const char *identifier, struct lockdownd_service_descriptor **service);
// lockdownd_start_service_with_escrow_bag
// file lockdown.c line 1342
enum anonymous_9 lockdownd_start_service_with_escrow_bag(struct lockdownd_client_private *client, const char *identifier, struct lockdownd_service_descriptor **service);
// lockdownd_start_session
// file lockdown.c line 1095
enum anonymous_9 lockdownd_start_session(struct lockdownd_client_private *client, const char *host_id, char **session_id, signed int *ssl_enabled);
// lockdownd_stop_session
// file lockdown.c line 232
enum anonymous_9 lockdownd_stop_session(struct lockdownd_client_private *client, const char *session_id);
// lockdownd_strtoerr
// file lockdown.c line 69
static enum anonymous_9 lockdownd_strtoerr(const char *name);
// lockdownd_unpair
// file lockdown.c line 1026
enum anonymous_9 lockdownd_unpair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record);
// lockdownd_validate_pair
// file lockdown.c line 1021
enum anonymous_9 lockdownd_validate_pair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record);
// make_strings_list
// file afc.c line 386
static char ** make_strings_list(char *tokens, unsigned int length);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mim_upload_cb
// file ideviceimagemounter.c line 133
static signed long int mim_upload_cb(void *buf, unsigned long int size, void *userdata);
// misagent_check_result
// file misagent.c line 66
static enum anonymous_47 misagent_check_result(void *response, signed int *status_code);
// misagent_client_free
// file misagent.c line 113
enum anonymous_47 misagent_client_free(struct misagent_client_private *client);
// misagent_client_new
// file misagent.c line 90
enum anonymous_47 misagent_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct misagent_client_private **client);
// misagent_client_start_service
// file misagent.c line 106
enum anonymous_47 misagent_client_start_service(struct idevice_private *device, struct misagent_client_private **client, const char *label);
// misagent_copy
// file misagent.c line 165
enum anonymous_47 misagent_copy(struct misagent_client_private *client, void **profiles);
// misagent_error
// file misagent.c line 41
static enum anonymous_47 misagent_error(enum anonymous_23 err);
// misagent_get_status_code
// file misagent.c line 242
signed int misagent_get_status_code(struct misagent_client_private *client);
// misagent_install
// file misagent.c line 128
enum anonymous_47 misagent_install(struct misagent_client_private *client, void *profile);
// misagent_remove
// file misagent.c line 205
enum anonymous_47 misagent_remove(struct misagent_client_private *client, const char *profileID);
// mobile_image_mounter_error
// file mobile_image_mounter.c line 61
static enum anonymous_12 mobile_image_mounter_error(enum anonymous_23 err);
// mobile_image_mounter_free
// file ../include/libimobiledevice/mobile_image_mounter.h line 93
enum anonymous_12 mobile_image_mounter_free(struct mobile_image_mounter_client_private *client);
// mobile_image_mounter_hangup
// file ../include/libimobiledevice/mobile_image_mounter.h line 164
enum anonymous_12 mobile_image_mounter_hangup(struct mobile_image_mounter_client_private *client);
// mobile_image_mounter_lock
// file mobile_image_mounter.c line 36
static void mobile_image_mounter_lock(struct mobile_image_mounter_client_private *client);
// mobile_image_mounter_lookup_image
// file ../include/libimobiledevice/mobile_image_mounter.h line 109
enum anonymous_12 mobile_image_mounter_lookup_image(struct mobile_image_mounter_client_private *client, const char *image_type, void **result);
// mobile_image_mounter_mount_image
// file ../include/libimobiledevice/mobile_image_mounter.h line 151
enum anonymous_12 mobile_image_mounter_mount_image(struct mobile_image_mounter_client_private *client, const char *image_path, const char *signature, unsigned short int signature_size, const char *image_type, void **result);
// mobile_image_mounter_new
// file ../include/libimobiledevice/mobile_image_mounter.h line 67
enum anonymous_12 mobile_image_mounter_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobile_image_mounter_client_private **client);
// mobile_image_mounter_start_service
// file mobile_image_mounter.c line 95
enum anonymous_12 mobile_image_mounter_start_service(struct idevice_private *device, struct mobile_image_mounter_client_private **client, const char *label);
// mobile_image_mounter_unlock
// file mobile_image_mounter.c line 46
static void mobile_image_mounter_unlock(struct mobile_image_mounter_client_private *client);
// mobile_image_mounter_upload_image
// file ../include/libimobiledevice/mobile_image_mounter.h line 128
enum anonymous_12 mobile_image_mounter_upload_image(struct mobile_image_mounter_client_private *client, const char *image_type, unsigned long int image_size, const char *signature, unsigned short int signature_size, signed long int (*upload_cb)(void *, unsigned long int, void *), void *userdata);
// mobile_image_mounter_upload_image::upload_cb_object
//
signed long int upload_cb_object(void *, unsigned long int, void *);
// mobilebackup2_client_free
// file mobilebackup2.c line 99
enum anonymous_46 mobilebackup2_client_free(struct mobilebackup2_client_private *client);
// mobilebackup2_client_new
// file mobilebackup2.c line 64
enum anonymous_46 mobilebackup2_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobilebackup2_client_private **client);
// mobilebackup2_client_start_service
// file mobilebackup2.c line 92
enum anonymous_46 mobilebackup2_client_start_service(struct idevice_private *device, struct mobilebackup2_client_private **client, const char *label);
// mobilebackup2_error
// file mobilebackup2.c line 45
static enum anonymous_46 mobilebackup2_error(signed short int err);
// mobilebackup2_receive_message
// file mobilebackup2.c line 210
enum anonymous_46 mobilebackup2_receive_message(struct mobilebackup2_client_private *client, void **msg_plist, char **dlmessage);
// mobilebackup2_receive_raw
// file mobilebackup2.c line 241
enum anonymous_46 mobilebackup2_receive_raw(struct mobilebackup2_client_private *client, char *data, unsigned int length, unsigned int *bytes);
// mobilebackup2_send_message
// file mobilebackup2.c line 112
enum anonymous_46 mobilebackup2_send_message(struct mobilebackup2_client_private *client, const char *message, void *options);
// mobilebackup2_send_raw
// file mobilebackup2.c line 215
enum anonymous_46 mobilebackup2_send_raw(struct mobilebackup2_client_private *client, const char *data, unsigned int length, unsigned int *bytes);
// mobilebackup2_send_request
// file mobilebackup2.c line 326
enum anonymous_46 mobilebackup2_send_request(struct mobilebackup2_client_private *client, const char *request, const char *target_identifier, const char *source_identifier, void *options);
// mobilebackup2_send_status_response
// file mobilebackup2.c line 357
enum anonymous_46 mobilebackup2_send_status_response(struct mobilebackup2_client_private *client, signed int status_code, const char *status1, void *status2);
// mobilebackup2_version_exchange
// file mobilebackup2.c line 268
enum anonymous_46 mobilebackup2_version_exchange(struct mobilebackup2_client_private *client, double *local_versions, char count, double *remote_version);
// mobilebackup_client_free
// file mobilebackup.c line 97
enum anonymous_43 mobilebackup_client_free(struct mobilebackup_client_private *client);
// mobilebackup_client_new
// file mobilebackup.c line 63
enum anonymous_43 mobilebackup_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobilebackup_client_private **client);
// mobilebackup_client_start_service
// file mobilebackup.c line 90
enum anonymous_43 mobilebackup_client_start_service(struct idevice_private *device, struct mobilebackup_client_private **client, const char *label);
// mobilebackup_error
// file mobilebackup.c line 44
static enum anonymous_43 mobilebackup_error(signed short int err);
// mobilebackup_receive
// file mobilebackup.c line 110
enum anonymous_43 mobilebackup_receive(struct mobilebackup_client_private *client, void **plist);
// mobilebackup_receive_message
// file mobilebackup.c line 188
static enum anonymous_43 mobilebackup_receive_message(struct mobilebackup_client_private *client, const char *message, void **result);
// mobilebackup_receive_restore_application_received
// file mobilebackup.c line 359
enum anonymous_43 mobilebackup_receive_restore_application_received(struct mobilebackup_client_private *client, void **result);
// mobilebackup_receive_restore_file_received
// file mobilebackup.c line 354
enum anonymous_43 mobilebackup_receive_restore_file_received(struct mobilebackup_client_private *client, void **result);
// mobilebackup_request_backup
// file mobilebackup.c line 235
enum anonymous_43 mobilebackup_request_backup(struct mobilebackup_client_private *client, void *backup_manifest, const char *base_path, const char *proto_version);
// mobilebackup_request_restore
// file mobilebackup.c line 300
enum anonymous_43 mobilebackup_request_restore(struct mobilebackup_client_private *client, void *backup_manifest, enum anonymous_44 flags, const char *proto_version);
// mobilebackup_send
// file mobilebackup.c line 118
enum anonymous_43 mobilebackup_send(struct mobilebackup_client_private *client, void *plist);
// mobilebackup_send_backup_file_received
// file mobilebackup.c line 295
enum anonymous_43 mobilebackup_send_backup_file_received(struct mobilebackup_client_private *client);
// mobilebackup_send_error
// file mobilebackup.c line 409
enum anonymous_43 mobilebackup_send_error(struct mobilebackup_client_private *client, const char *reason);
// mobilebackup_send_message
// file mobilebackup.c line 137
static enum anonymous_43 mobilebackup_send_message(struct mobilebackup_client_private *client, const char *message, void *options);
// mobilebackup_send_restore_complete
// file mobilebackup.c line 364
enum anonymous_43 mobilebackup_send_restore_complete(struct mobilebackup_client_private *client);
// mobilesync_acknowledge_changes_from_device
// file mobilesync.c line 487
enum anonymous_39 mobilesync_acknowledge_changes_from_device(struct mobilesync_client_private *client);
// mobilesync_actions_add
// file mobilesync.c line 747
void mobilesync_actions_add(void *actions, ...);
// mobilesync_actions_free
// file mobilesync.c line 779
void mobilesync_actions_free(void *actions);
// mobilesync_actions_new
// file mobilesync.c line 742
void * mobilesync_actions_new(void);
// mobilesync_anchors_free
// file mobilesync.c line 728
void mobilesync_anchors_free(struct anonymous_41 *anchors);
// mobilesync_anchors_new
// file mobilesync.c line 711
struct anonymous_41 * mobilesync_anchors_new(const char *device_anchor, const char *computer_anchor);
// mobilesync_cancel
// file mobilesync.c line 685
enum anonymous_39 mobilesync_cancel(struct mobilesync_client_private *client, const char *reason);
// mobilesync_clear_all_records_on_device
// file mobilesync.c line 418
enum anonymous_39 mobilesync_clear_all_records_on_device(struct mobilesync_client_private *client);
// mobilesync_client_free
// file mobilesync.c line 105
enum anonymous_39 mobilesync_client_free(struct mobilesync_client_private *client);
// mobilesync_client_new
// file mobilesync.c line 68
enum anonymous_39 mobilesync_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobilesync_client_private **client);
// mobilesync_client_start_service
// file mobilesync.c line 98
enum anonymous_39 mobilesync_client_start_service(struct idevice_private *device, struct mobilesync_client_private **client, const char *label);
// mobilesync_error
// file mobilesync.c line 49
static enum anonymous_39 mobilesync_error(signed short int err);
// mobilesync_finish
// file mobilesync.c line 256
enum anonymous_39 mobilesync_finish(struct mobilesync_client_private *client);
// mobilesync_get_all_records_from_device
// file mobilesync.c line 341
enum anonymous_39 mobilesync_get_all_records_from_device(struct mobilesync_client_private *client);
// mobilesync_get_changes_from_device
// file mobilesync.c line 346
enum anonymous_39 mobilesync_get_changes_from_device(struct mobilesync_client_private *client);
// mobilesync_get_records
// file mobilesync.c line 319
static enum anonymous_39 mobilesync_get_records(struct mobilesync_client_private *client, const char *operation);
// mobilesync_ready_to_send_changes_from_computer
// file mobilesync.c line 521
enum anonymous_39 mobilesync_ready_to_send_changes_from_computer(struct mobilesync_client_private *client);
// mobilesync_receive
// file mobilesync.c line 115
enum anonymous_39 mobilesync_receive(struct mobilesync_client_private *client, void **plist);
// mobilesync_receive_changes
// file mobilesync.c line 351
enum anonymous_39 mobilesync_receive_changes(struct mobilesync_client_private *client, void **entities, unsigned char *is_last_record, void **actions);
// mobilesync_remap_identifiers
// file mobilesync.c line 616
enum anonymous_39 mobilesync_remap_identifiers(struct mobilesync_client_private *client, void **mapping);
// mobilesync_send
// file mobilesync.c line 123
enum anonymous_39 mobilesync_send(struct mobilesync_client_private *client, void *plist);
// mobilesync_send_changes
// file mobilesync.c line 588
enum anonymous_39 mobilesync_send_changes(struct mobilesync_client_private *client, void *entities, unsigned char is_last_record, void *actions);
// mobilesync_start
// file mobilesync.c line 130
enum anonymous_39 mobilesync_start(struct mobilesync_client_private *client, const char *data_class, struct anonymous_41 *anchors, unsigned long int computer_data_class_version, enum anonymous_42 *sync_type, unsigned long int *device_data_class_version, char **error_description);
// mutex_destroy
// file thread.c line 65
void mutex_destroy(union anonymous_6 *mutex);
// mutex_init
// file thread.c line 56
void mutex_init(union anonymous_6 *mutex);
// mutex_lock
// file thread.c line 74
void mutex_lock(union anonymous_6 *mutex);
// mutex_unlock
// file thread.c line 83
void mutex_unlock(union anonymous_6 *mutex);
// np_client_free
// file notification_proxy.c line 114
enum anonymous_24 np_client_free(struct np_client_private *client);
// np_client_new
// file notification_proxy.c line 89
enum anonymous_24 np_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct np_client_private **client);
// np_client_start_service
// file notification_proxy.c line 107
enum anonymous_24 np_client_start_service(struct idevice_private *device, struct np_client_private **client, const char *label);
// np_error
// file notification_proxy.c line 72
static enum anonymous_24 np_error(enum anonymous_23 err);
// np_get_notification
// file notification_proxy.c line 248
static signed int np_get_notification(struct np_client_private *client, char **notification);
// np_lock
// file notification_proxy.c line 46
static void np_lock(struct np_client_private *client);
// np_notifier
// file notification_proxy.c line 312
void * np_notifier(void *arg);
// np_observe_notification
// file notification_proxy.c line 189
enum anonymous_24 np_observe_notification(struct np_client_private *client, const char *notification);
// np_observe_notifications
// file notification_proxy.c line 210
enum anonymous_24 np_observe_notifications(struct np_client_private *client, const char **notification_spec);
// np_post_notification
// file notification_proxy.c line 168
enum anonymous_24 np_post_notification(struct np_client_private *client, const char *notification);
// np_set_notify_callback
// file notification_proxy.c line 339
enum anonymous_24 np_set_notify_callback(struct np_client_private *client, void (*notify_cb)(const char *, void *), void *user_data);
// np_set_notify_callback::notify_cb_object
//
void notify_cb_object(const char *, void *);
// np_unlock
// file notification_proxy.c line 57
static void np_unlock(struct np_client_private *client);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// pair_record_generate
// file lockdown.c line 780
static enum anonymous_9 pair_record_generate(struct lockdownd_client_private *client, void **pair_record);
// pair_record_generate_keys_and_certs
// file userpref.c line 405
enum anonymous_4 pair_record_generate_keys_and_certs(void *pair_record, struct anonymous_8 public_key);
// pair_record_get_host_id
// file userpref.c line 874
enum anonymous_4 pair_record_get_host_id(void *pair_record, char **host_id);
// pair_record_get_item_as_key_data
// file userpref.c line 892
enum anonymous_4 pair_record_get_item_as_key_data(void *pair_record, const char *name, struct anonymous_8 *value);
// pair_record_import_crt_with_name
// file userpref.c line 848
enum anonymous_4 pair_record_import_crt_with_name(void *pair_record, const char *name, struct gnutls_x509_crt_int *cert);
// pair_record_import_key_with_name
// file userpref.c line 811
enum anonymous_4 pair_record_import_key_with_name(void *pair_record, const char *name, struct gnutls_x509_privkey_int *key);
// pair_record_set_host_id
// file userpref.c line 885
enum anonymous_4 pair_record_set_host_id(void *pair_record, const char *host_id);
// pair_record_set_item_from_key_data
// file userpref.c line 920
enum anonymous_4 pair_record_set_item_from_key_data(void *pair_record, const char *name, struct anonymous_8 *value);
// parse_opts
// file ideviceimagemounter.c line 72
static void parse_opts(signed int argc, char **argv);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// plist_access_path
// file /usr/include/plist/plist.h line 622
void * plist_access_path(void *, unsigned int, ...);
// plist_array_append_item
// file /usr/include/plist/plist.h line 264
void plist_array_append_item(void *, void *);
// plist_array_get_item
// file /usr/include/plist/plist.h line 238
void * plist_array_get_item(void *, unsigned int);
// plist_array_get_size
// file /usr/include/plist/plist.h line 229
unsigned int plist_array_get_size(void *);
// plist_array_print_to_stream
// file utils.c line 324
static void plist_array_print_to_stream(void *node, signed int *indent_level, struct _IO_FILE *stream);
// plist_array_print_to_stream_link1
// file utils.c line 324
static void plist_array_print_to_stream_link1(void *node_link1, signed int *indent_level_link1, struct _IO_FILE *stream_link1);
// plist_copy
// file /usr/include/plist/plist.h line 214
void * plist_copy(void *);
// plist_dict_add_label
// file lockdown.c line 224
static void plist_dict_add_label(void *plist, const char *label);
// plist_dict_add_label_link1
// file restore.c line 84
static void plist_dict_add_label_link1(void *plist_link1, const char *label_link1);
// plist_dict_get_item
// file /usr/include/plist/plist.h line 335
void * plist_dict_get_item(void *, const char *);
// plist_dict_new_iter
// file /usr/include/plist/plist.h line 305
void plist_dict_new_iter(void *, void **);
// plist_dict_next_item
// file /usr/include/plist/plist.h line 317
void plist_dict_next_item(void *, void *, char **, void **);
// plist_dict_print_to_stream
// file utils.c line 340
static void plist_dict_print_to_stream(void *node, signed int *indent_level, struct _IO_FILE *stream);
// plist_dict_print_to_stream_link1
// file utils.c line 340
static void plist_dict_print_to_stream_link1(void *node_link1, signed int *indent_level_link1, struct _IO_FILE *stream_link1);
// plist_dict_remove_item
// file /usr/include/plist/plist.h line 367
void plist_dict_remove_item(void *, const char *);
// plist_dict_set_item
// file /usr/include/plist/plist.h line 346
void plist_dict_set_item(void *, const char *, void *);
// plist_free
// file /usr/include/plist/plist.h line 206
void plist_free(void *);
// plist_from_bin
// file /usr/include/plist/plist.h line 604
void plist_from_bin(const char *, unsigned int, void **);
// plist_from_xml
// file /usr/include/plist/plist.h line 595
void plist_from_xml(const char *, unsigned int, void **);
// plist_get_bool_val
// file /usr/include/plist/plist.h line 428
void plist_get_bool_val(void *, unsigned char *);
// plist_get_data_val
// file /usr/include/plist/plist.h line 457
void plist_get_data_val(void *, char **, unsigned long int *);
// plist_get_date_val
// file /usr/include/plist/plist.h line 467
void plist_get_date_val(void *, signed int *, signed int *);
// plist_get_key_val
// file /usr/include/plist/plist.h line 409
void plist_get_key_val(void *, char **);
// plist_get_node_type
// file /usr/include/plist/plist.h line 399
enum anonymous_11 plist_get_node_type(void *);
// plist_get_real_val
// file /usr/include/plist/plist.h line 446
void plist_get_real_val(void *, double *);
// plist_get_string_val
// file /usr/include/plist/plist.h line 419
void plist_get_string_val(void *, char **);
// plist_get_uint_val
// file /usr/include/plist/plist.h line 437
void plist_get_uint_val(void *, unsigned long int *);
// plist_new_array
// file /usr/include/plist/plist.h line 134
void * plist_new_array(void);
// plist_new_bool
// file /usr/include/plist/plist.h line 152
void * plist_new_bool(unsigned char);
// plist_new_data
// file /usr/include/plist/plist.h line 180
void * plist_new_data(const char *, unsigned long int);
// plist_new_dict
// file /usr/include/plist/plist.h line 126
void * plist_new_dict(void);
// plist_new_real
// file /usr/include/plist/plist.h line 170
void * plist_new_real(double);
// plist_new_string
// file /usr/include/plist/plist.h line 143
void * plist_new_string(const char *);
// plist_new_uint
// file /usr/include/plist/plist.h line 161
void * plist_new_uint(unsigned long int);
// plist_node_print_to_stream
// file utils.c line 365
static void plist_node_print_to_stream(void *node, signed int *indent_level, struct _IO_FILE *stream);
// plist_node_print_to_stream_link1
// file utils.c line 365
static void plist_node_print_to_stream_link1(void *node_link1, signed int *indent_level_link1, struct _IO_FILE *stream_link1);
// plist_print_to_stream
// file ../common/utils.h line 56
void plist_print_to_stream(void *plist, struct _IO_FILE *stream);
// plist_read_from_filename
// file utils.c line 245
signed int plist_read_from_filename(void **plist, const char *filename);
// plist_to_bin
// file /usr/include/plist/plist.h line 586
void plist_to_bin(void *, char **, unsigned int *);
// plist_to_xml
// file /usr/include/plist/plist.h line 576
void plist_to_xml(void *, char **, unsigned int *);
// plist_write_to_filename
// file utils.c line 270
signed int plist_write_to_filename(void *plist, const char *filename, enum plist_format_t format);
// print_usage
// file ideviceimagemounter.c line 55
static void print_usage(signed int argc, char **argv);
// print_xml
// file ideviceimagemounter.c line 124
static void print_xml(void *node);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// property_list_service_client_free
// file property_list_service.c line 77
enum anonymous_23 property_list_service_client_free(struct property_list_service_client_private *client);
// property_list_service_client_new
// file property_list_service.c line 57
enum anonymous_23 property_list_service_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct property_list_service_client_private **client);
// property_list_service_disable_ssl
// file property_list_service.c line 270
enum anonymous_23 property_list_service_disable_ssl(struct property_list_service_client_private *client);
// property_list_service_enable_ssl
// file property_list_service.c line 263
enum anonymous_23 property_list_service_enable_ssl(struct property_list_service_client_private *client);
// property_list_service_receive_plist
// file property_list_service.c line 258
enum anonymous_23 property_list_service_receive_plist(struct property_list_service_client_private *client, void **plist);
// property_list_service_receive_plist_with_timeout
// file property_list_service.c line 253
enum anonymous_23 property_list_service_receive_plist_with_timeout(struct property_list_service_client_private *client, void **plist, unsigned int timeout);
// property_list_service_send_binary_plist
// file property_list_service.c line 155
enum anonymous_23 property_list_service_send_binary_plist(struct property_list_service_client_private *client, void *plist);
// property_list_service_send_xml_plist
// file property_list_service.c line 150
enum anonymous_23 property_list_service_send_xml_plist(struct property_list_service_client_private *client, void *plist);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_6 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_6 *, const union anonymous_17 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_6 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_6 *);
// pthread_once
// file /usr/include/pthread.h line 496
extern signed int pthread_once(signed int *, void (*)(void));
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// readdir
// file /usr/include/dirent.h line 165
extern struct dirent * readdir(struct __dirstream *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// restored_check_result
// file restore.c line 46
static signed int restored_check_result(void *dict);
// restored_client_free
// file restore.c line 92
enum anonymous_48 restored_client_free(struct restored_client_private *client);
// restored_client_new
// file restore.c line 294
enum anonymous_48 restored_client_new(struct idevice_private *device, struct restored_client_private **client, const char *label);
// restored_client_set_label
// file restore.c line 122
void restored_client_set_label(struct restored_client_private *client, const char *label);
// restored_get_value
// file restore.c line 267
enum anonymous_48 restored_get_value(struct restored_client_private *client, const char *key, void **value);
// restored_goodbye
// file restore.c line 337
enum anonymous_48 restored_goodbye(struct restored_client_private *client);
// restored_query_type
// file restore.c line 166
enum anonymous_48 restored_query_type(struct restored_client_private *client, char **type, unsigned long int *version);
// restored_query_value
// file restore.c line 225
enum anonymous_48 restored_query_value(struct restored_client_private *client, const char *key, void **value);
// restored_reboot
// file restore.c line 393
enum anonymous_48 restored_reboot(struct restored_client_private *client);
// restored_receive
// file restore.c line 132
enum anonymous_48 restored_receive(struct restored_client_private *client, void **plist);
// restored_send
// file restore.c line 151
enum anonymous_48 restored_send(struct restored_client_private *client, void *plist);
// restored_start_restore
// file restore.c line 369
enum anonymous_48 restored_start_restore(struct restored_client_private *client, void *options, unsigned long int version);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// sbservices_client_free
// file sbservices.c line 102
enum anonymous_36 sbservices_client_free(struct sbservices_client_private *client);
// sbservices_client_new
// file sbservices.c line 79
enum anonymous_36 sbservices_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct sbservices_client_private **client);
// sbservices_client_start_service
// file sbservices.c line 95
enum anonymous_36 sbservices_client_start_service(struct idevice_private *device, struct sbservices_client_private **client, const char *label);
// sbservices_error
// file sbservices.c line 62
static enum anonymous_36 sbservices_error(enum anonymous_23 err);
// sbservices_get_home_screen_wallpaper_pngdata
// file sbservices.c line 256
enum anonymous_36 sbservices_get_home_screen_wallpaper_pngdata(struct sbservices_client_private *client, char **pngdata, unsigned long int *pngsize);
// sbservices_get_icon_pngdata
// file sbservices.c line 181
enum anonymous_36 sbservices_get_icon_pngdata(struct sbservices_client_private *client, const char *bundleId, char **pngdata, unsigned long int *pngsize);
// sbservices_get_icon_state
// file sbservices.c line 115
enum anonymous_36 sbservices_get_icon_state(struct sbservices_client_private *client, void **state, const char *format_version);
// sbservices_get_interface_orientation
// file sbservices.c line 218
enum anonymous_36 sbservices_get_interface_orientation(struct sbservices_client_private *client, enum anonymous_37 *interface_orientation);
// sbservices_lock
// file sbservices.c line 36
static void sbservices_lock(struct sbservices_client_private *client);
// sbservices_set_icon_state
// file sbservices.c line 155
enum anonymous_36 sbservices_set_icon_state(struct sbservices_client_private *client, void *newstate);
// sbservices_unlock
// file sbservices.c line 47
static void sbservices_unlock(struct sbservices_client_private *client);
// screenshotr_client_free
// file screenshotr.c line 96
enum anonymous_38 screenshotr_client_free(struct screenshotr_client_private *client);
// screenshotr_client_new
// file screenshotr.c line 61
enum anonymous_38 screenshotr_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct screenshotr_client_private **client);
// screenshotr_client_start_service
// file screenshotr.c line 89
enum anonymous_38 screenshotr_client_start_service(struct idevice_private *device, struct screenshotr_client_private **client, const char *label);
// screenshotr_error
// file screenshotr.c line 42
static enum anonymous_38 screenshotr_error(signed short int err);
// screenshotr_take_screenshot
// file screenshotr.c line 106
enum anonymous_38 screenshotr_take_screenshot(struct screenshotr_client_private *client, char **imgdata, unsigned long int *imgsize);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_15 *, struct anonymous_15 *, struct anonymous_15 *, struct timeval *);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// service_client_factory_start_service
// file service.c line 79
enum anonymous_20 service_client_factory_start_service(struct idevice_private *device, const char *service_name, void **client, const char *label, signed int (*constructor_func)(struct idevice_private *, struct lockdownd_service_descriptor *, void **), signed int *error_code);
// service_client_factory_start_service::constructor_func_object
//
signed int constructor_func_object(struct idevice_private *, struct lockdownd_service_descriptor *, void **);
// service_client_free
// file service.c line 118
enum anonymous_20 service_client_free(struct service_client_private *client);
// service_client_new
// file service.c line 55
enum anonymous_20 service_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct service_client_private **client);
// service_disable_ssl
// file service.c line 184
enum anonymous_20 service_disable_ssl(struct service_client_private *client);
// service_enable_ssl
// file service.c line 177
enum anonymous_20 service_enable_ssl(struct service_client_private *client);
// service_receive
// file service.c line 172
enum anonymous_20 service_receive(struct service_client_private *client, char *data, unsigned int size, unsigned int *received);
// service_receive_with_timeout
// file service.c line 152
enum anonymous_20 service_receive_with_timeout(struct service_client_private *client, char *data, unsigned int size, unsigned int *received, unsigned int timeout);
// service_send
// file service.c line 131
enum anonymous_20 service_send(struct service_client_private *client, const char *data, unsigned int size, unsigned int *sent);
// service_to_property_list_service_error
// file property_list_service.c line 40
static enum anonymous_23 service_to_property_list_service_error(enum anonymous_20 err);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// socket_accept
// file socket.c line 320
signed int socket_accept(signed int fd, unsigned short int port);
// socket_check_fd
// file socket.c line 253
signed int socket_check_fd(signed int fd, enum fd_mode fdm, unsigned int timeout);
// socket_close
// file socket.c line 346
signed int socket_close(signed int fd);
// socket_connect
// file socket.c line 193
signed int socket_connect(const char *addr, unsigned short int port);
// socket_connect_unix
// file socket.c line 99
signed int socket_connect_unix(const char *filename);
// socket_create
// file socket.c line 146
signed int socket_create(unsigned short int port);
// socket_create_unix
// file socket.c line 53
signed int socket_create_unix(const char *filename);
// socket_peek
// file socket.c line 359
signed int socket_peek(signed int fd, void *data, unsigned long int length);
// socket_receive
// file socket.c line 354
signed int socket_receive(signed int fd, void *data, unsigned long int length);
// socket_receive_timeout
// file socket.c line 364
signed int socket_receive_timeout(signed int fd, void *data, unsigned long int length, signed int flags, unsigned int timeout);
// socket_send
// file socket.c line 389
signed int socket_send(signed int fd, void *data, unsigned long int length);
// socket_set_verbose
// file socket.c line 47
void socket_set_verbose(signed int level);
// socket_shutdown
// file socket.c line 341
signed int socket_shutdown(signed int fd, signed int how);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// stpcpy
// file /usr/include/string.h line 568
extern char * stpcpy(char *, const char *);
// str_remove_spaces
// file lockdown.c line 1421
static void str_remove_spaces(char *source);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// string_build_path
// file utils.c line 114
char * string_build_path(const char *elem, ...);
// string_concat
// file utils.h line 39
char * string_concat(const char *str, ...);
// string_format_size
// file utils.c line 142
char * string_format_size(unsigned long int size);
// string_toupper
// file utils.c line 164
char * string_toupper(char *str);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
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
// syslog_relay_client_free
// file syslog_relay.c line 99
enum anonymous_53 syslog_relay_client_free(struct syslog_relay_client_private *client);
// syslog_relay_client_new
// file syslog_relay.c line 64
enum anonymous_53 syslog_relay_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct syslog_relay_client_private **client);
// syslog_relay_client_start_service
// file syslog_relay.c line 92
enum anonymous_53 syslog_relay_client_start_service(struct idevice_private *device, struct syslog_relay_client_private **client, const char *label);
// syslog_relay_error
// file syslog_relay.c line 47
static enum anonymous_53 syslog_relay_error(enum anonymous_20 err);
// syslog_relay_receive
// file syslog_relay.c line 117
enum anonymous_53 syslog_relay_receive(struct syslog_relay_client_private *client, char *data, unsigned int size, unsigned int *received);
// syslog_relay_receive_with_timeout
// file syslog_relay.c line 122
enum anonymous_53 syslog_relay_receive_with_timeout(struct syslog_relay_client_private *client, char *data, unsigned int size, unsigned int *received, unsigned int timeout);
// syslog_relay_start_capture
// file syslog_relay.c line 176
enum anonymous_53 syslog_relay_start_capture(struct syslog_relay_client_private *client, void (*callback)(char, void *), void *user_data);
// syslog_relay_start_capture::callback_object
//
void callback_object(char, void *);
// syslog_relay_stop_capture
// file syslog_relay.c line 203
enum anonymous_53 syslog_relay_stop_capture(struct syslog_relay_client_private *client);
// syslog_relay_worker
// file syslog_relay.c line 142
void * syslog_relay_worker(void *arg);
// thread_free
// file thread.c line 39
void thread_free(unsigned long int thread);
// thread_join
// file thread.c line 46
void thread_join(unsigned long int thread);
// thread_new
// file thread.c line 24
signed int thread_new(unsigned long int *thread, void * (*thread_func)(void *), void *data);
// thread_new::thread_func_link1_object
//
void * thread_func_link1_object(void *);
// thread_new::thread_func_object
//
void * thread_func_object(void *);
// thread_once
// file thread.c line 92
void thread_once(signed int *once_control, void (*init_routine)(void));
// thread_once::init_routine_link1_object
//
void init_routine_link1_object(void);
// thread_once::init_routine_object
//
void init_routine_object(void);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usbmux_event_cb
// file idevice.c line 146
static void usbmux_event_cb(const struct anonymous_28 *event, void *user_data);
// usbmuxd_connect
// file /usr/include/usbmuxd.h line 128
signed int usbmuxd_connect(const signed int, const unsigned short int);
// usbmuxd_delete_pair_record
// file /usr/include/usbmuxd.h line 217
signed int usbmuxd_delete_pair_record(const char *);
// usbmuxd_device_list_free
// file /usr/include/usbmuxd.h line 103
signed int usbmuxd_device_list_free(struct anonymous_27 **);
// usbmuxd_disconnect
// file /usr/include/usbmuxd.h line 137
signed int usbmuxd_disconnect(signed int);
// usbmuxd_get_device_by_udid
// file /usr/include/usbmuxd.h line 116
signed int usbmuxd_get_device_by_udid(const char *, struct anonymous_27 *);
// usbmuxd_get_device_list
// file /usr/include/usbmuxd.h line 94
signed int usbmuxd_get_device_list(struct anonymous_27 **);
// usbmuxd_read_buid
// file /usr/include/usbmuxd.h line 184
signed int usbmuxd_read_buid(char **);
// usbmuxd_read_pair_record
// file /usr/include/usbmuxd.h line 197
signed int usbmuxd_read_pair_record(const char *, char **, unsigned int *);
// usbmuxd_recv
// file /usr/include/usbmuxd.h line 174
signed int usbmuxd_recv(signed int, char *, unsigned int, unsigned int *);
// usbmuxd_recv_timeout
// file /usr/include/usbmuxd.h line 162
signed int usbmuxd_recv_timeout(signed int, char *, unsigned int, unsigned int *, unsigned int);
// usbmuxd_save_pair_record
// file /usr/include/usbmuxd.h line 208
signed int usbmuxd_save_pair_record(const char *, const char *, unsigned int);
// usbmuxd_send
// file /usr/include/usbmuxd.h line 149
signed int usbmuxd_send(signed int, const char *, unsigned int, unsigned int *);
// usbmuxd_subscribe
// file /usr/include/usbmuxd.h line 74
signed int usbmuxd_subscribe(void (*)(const struct anonymous_28 *, void *), void *);
// usbmuxd_unsubscribe
// file /usr/include/usbmuxd.h line 81
signed int usbmuxd_unsubscribe();
// userpref_delete_pair_record
// file userpref.c line 366
enum anonymous_4 userpref_delete_pair_record(const char *udid);
// userpref_get_config_dir
// file userpref.c line 131
const char * userpref_get_config_dir(void);
// userpref_get_paired_udids
// file userpref.c line 238
enum anonymous_4 userpref_get_paired_udids(char ***list, unsigned int *count);
// userpref_has_pair_record
// file userpref.c line 202
signed int userpref_has_pair_record(const char *udid);
// userpref_read_pair_record
// file userpref.c line 333
enum anonymous_4 userpref_read_pair_record(const char *udid, void **pair_record);
// userpref_read_system_buid
// file userpref.c line 183
signed int userpref_read_system_buid(char **system_buid);
// userpref_save_pair_record
// file userpref.c line 310
enum anonymous_4 userpref_save_pair_record(const char *udid, void *pair_record);
// webinspector_client_free
// file webinspector.c line 95
enum anonymous_52 webinspector_client_free(struct webinspector_client_private *client);
// webinspector_client_new
// file webinspector.c line 61
enum anonymous_52 webinspector_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct webinspector_client_private **client);
// webinspector_client_start_service
// file webinspector.c line 88
enum anonymous_52 webinspector_client_start_service(struct idevice_private *device, struct webinspector_client_private **client, const char *label);
// webinspector_error
// file webinspector.c line 42
static enum anonymous_52 webinspector_error(enum anonymous_23 err);
// webinspector_receive
// file webinspector.c line 163
enum anonymous_52 webinspector_receive(struct webinspector_client_private *client, void **plist);
// webinspector_receive_with_timeout
// file webinspector.c line 168
enum anonymous_52 webinspector_receive_with_timeout(struct webinspector_client_private *client, void **plist, unsigned int timeout_ms);
// webinspector_send
// file webinspector.c line 106
enum anonymous_52 webinspector_send(struct webinspector_client_private *client, void *plist);

struct anonymous_41
{
  // device_anchor
  char *device_anchor;
  // computer_anchor
  char *computer_anchor;
};

struct anonymous_8
{
  // data
  unsigned char *data;
  // size
  unsigned int size;
};

struct anonymous_15
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous_13
{
  // magic
  char magic[8l];
  // entire_length
  unsigned long int entire_length;
  // this_length
  unsigned long int this_length;
  // packet_num
  unsigned long int packet_num;
  // operation
  unsigned long int operation;
};

struct anonymous_35
{
  // event
  enum idevice_event_type event;
  // udid
  const char *udid;
  // conn_type
  signed int conn_type;
};

struct anonymous_27
{
  // handle
  unsigned int handle;
  // product_id
  signed int product_id;
  // udid
  char udid[41l];
};

struct anonymous_28
{
  // event
  signed int event;
  // device
  struct anonymous_27 device;
};

union anonymous_33
{
  // x509
  struct gnutls_x509_crt_int **x509;
  // pgp
  struct gnutls_openpgp_crt_int *pgp;
};

union anonymous_34
{
  // x509
  struct gnutls_x509_privkey_int *x509;
  // pgp
  struct gnutls_openpgp_privkey_int *pgp;
  // pkcs11
  struct gnutls_pkcs11_privkey_st *pkcs11;
};

union anonymous_17
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

union anonymous_6
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
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

struct afc_client_private
{
  // parent
  struct service_client_private *parent;
  // afc_packet
  struct anonymous_13 *afc_packet;
  // file_handle
  signed int file_handle;
  // lock
  signed int lock;
  // mutex
  union anonymous_6 mutex;
  // free_parent
  signed int free_parent;
};

struct asn1_static_node_st
{
  // name
  const char *name;
  // type
  unsigned int type;
  // value
  const void *value;
};

struct debugserver_client_private
{
  // parent
  struct service_client_private *parent;
  // noack_mode
  signed int noack_mode;
};

struct debugserver_command_private
{
  // name
  char *name;
  // argc
  signed int argc;
  // argv
  char **argv;
};

struct device_link_service_client_private
{
  // parent
  struct property_list_service_client_private *parent;
};

struct diagnostics_relay_client_private
{
  // parent
  struct property_list_service_client_private *parent;
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

struct file_relay_client_private
{
  // parent
  struct property_list_service_client_private *parent;
};

struct gnutls_retr2_st
{
  // cert_type
  enum anonymous_31 cert_type;
  // key_type
  enum anonymous_32 key_type;
  // cert
  union anonymous_33 cert;
  // ncerts
  unsigned int ncerts;
  // key
  union anonymous_34 key;
  // deinit_all
  unsigned int deinit_all;
};

struct heartbeat_client_private
{
  // parent
  struct property_list_service_client_private *parent;
};

struct hostent
{
  // h_name
  char *h_name;
  // h_aliases
  char **h_aliases;
  // h_addrtype
  signed int h_addrtype;
  // h_length
  signed int h_length;
  // h_addr_list
  char **h_addr_list;
};

struct house_arrest_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // mode
  enum house_arrest_client_mode mode;
};

struct idevice_connection_private
{
  // udid
  char *udid;
  // type
  enum connection_type type;
  // data
  void *data;
  // ssl_data
  struct ssl_data_private *ssl_data;
};

struct idevice_private
{
  // udid
  char *udid;
  // conn_type
  enum connection_type conn_type;
  // conn_data
  void *conn_data;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct instproxy_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // mutex
  union anonymous_6 mutex;
  // receive_status_thread
  unsigned long int receive_status_thread;
};

struct instproxy_status_data
{
  // client
  struct instproxy_client_private *client;
  // command
  void *command;
  // cbfunc
  void (*cbfunc)(void *, void *, void *);
  // user_data
  void *user_data;
};

struct lockdownd_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // ssl_enabled
  signed int ssl_enabled;
  // session_id
  char *session_id;
  // udid
  char *udid;
  // label
  char *label;
};

struct lockdownd_pair_record
{
  // device_certificate
  char *device_certificate;
  // host_certificate
  char *host_certificate;
  // root_certificate
  char *root_certificate;
  // host_id
  char *host_id;
  // system_buid
  char *system_buid;
};

struct lockdownd_service_descriptor
{
  // port
  unsigned short int port;
  // ssl_enabled
  unsigned char ssl_enabled;
};

struct misagent_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // last_error
  signed int last_error;
};

struct mobile_image_mounter_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // mutex
  union anonymous_6 mutex;
};

struct mobilebackup2_client_private
{
  // parent
  struct device_link_service_client_private *parent;
};

struct mobilebackup_client_private
{
  // parent
  struct device_link_service_client_private *parent;
};

struct mobilesync_client_private
{
  // parent
  struct device_link_service_client_private *parent;
  // direction
  enum anonymous_40 direction;
  // data_class
  char *data_class;
};

struct np_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // mutex
  union anonymous_6 mutex;
  // notifier
  unsigned long int notifier;
};

struct np_thread
{
  // client
  struct np_client_private *client;
  // cbfunc
  void (*cbfunc)(const char *, void *);
  // user_data
  void *user_data;
};

struct option
{
  // name
  const char *name;
  // has_arg
  signed int has_arg;
  // flag
  signed int *flag;
  // val
  signed int val;
};

struct property_list_service_client_private
{
  // parent
  struct service_client_private *parent;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct restored_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // udid
  char *udid;
  // label
  char *label;
  // info
  void *info;
};

struct sbservices_client_private
{
  // parent
  struct property_list_service_client_private *parent;
  // mutex
  union anonymous_6 mutex;
};

struct screenshotr_client_private
{
  // parent
  struct device_link_service_client_private *parent;
};

struct service_client_private
{
  // connection
  struct idevice_connection_private *connection;
};

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct sockaddr_in
{
  // sin_family
  unsigned short int sin_family;
  // sin_port
  unsigned short int sin_port;
  // sin_addr
  struct in_addr sin_addr;
  // sin_zero
  unsigned char sin_zero[8l];
};

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
};

struct ssl_data_private
{
  // certificate
  struct gnutls_certificate_credentials_st *certificate;
  // session
  struct gnutls_session_int *session;
  // root_privkey
  struct gnutls_x509_privkey_int *root_privkey;
  // root_cert
  struct gnutls_x509_crt_int *root_cert;
  // host_privkey
  struct gnutls_x509_privkey_int *host_privkey;
  // host_cert
  struct gnutls_x509_crt_int *host_cert;
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

struct syslog_relay_client_private
{
  // parent
  struct service_client_private *parent;
  // worker
  unsigned long int worker;
};

struct syslog_relay_worker_thread
{
  // client
  struct syslog_relay_client_private *client;
  // cbfunc
  void (*cbfunc)(char, void *);
  // user_data
  void *user_data;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct tm
{
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed long int tm_gmtoff;
  // tm_zone
  const char *tm_zone;
};

struct webinspector_client_private
{
  // parent
  struct property_list_service_client_private *parent;
};


// PATH_PREFIX
// file ideviceimagemounter.c line 48
static const char PATH_PREFIX[26l] = { '/', 'p', 'r', 'i', 'v', 'a', 't', 'e', '/', 'v', 'a', 'r', '/', 'm', 'o', 'b', 'i', 'l', 'e', '/', 'M', 'e', 'd', 'i', 'a', 0 };
// PKG_PATH
// file ideviceimagemounter.c line 47
static const char PKG_PATH[14l] = { 'P', 'u', 'b', 'l', 'i', 'c', 'S', 't', 'a', 'g', 'i', 'n', 'g', 0 };
// __config_dir
// file userpref.c line 94
static char *__config_dir = (char *)(void *)0;
// __config_dir_link1
// file userpref.c line 94
static char *__config_dir_link1 = (char *)(void *)0;
// base64_pad
// file utils.c line 293
static const char base64_pad = (const char)61;
// base64_pad_link1
// file utils.c line 293
static const char base64_pad_link1 = (const char)61;
// base64_str
// file utils.c line 292
static const char base64_str[65l] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/', 0 };
// base64_str_link1
// file utils.c line 292
static const char base64_str_link1[65l] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/', 0 };
// debug_level
// file debug.c line 42
static signed int debug_level;
// debug_level_link1
// file debug.c line 42
static signed int debug_level_link1;
// event_cb
// file idevice.c line 144
static void (*event_cb)(const struct anonymous_35 *, void *) = (void (*)(const struct anonymous_35 *, void *))(void *)0;
// gnutls_free
// file /usr/include/gnutls/gnutls.h line 1643
extern void (*gnutls_free)(void *);
// gnutls_malloc
// file /usr/include/gnutls/gnutls.h line 1640
extern void * (*gnutls_malloc)(unsigned long int);
// imagetype
// file ideviceimagemounter.c line 45
static char *imagetype = (char *)(void *)0;
// list_mode
// file ideviceimagemounter.c line 42
static signed int list_mode = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// pkcs1_asn1_tab
// file userpref.c line 66
const struct asn1_static_node_st pkcs1_asn1_tab[6l] = { { .name="PKCS1", .type=(unsigned int)536872976, .value=NULL },
    { .name=((const char *)NULL), .type=(unsigned int)1073741836, .value=NULL },
    { .name="RSAPublicKey", .type=(unsigned int)536870917, .value=NULL },
    { .name="modulus", .type=(unsigned int)1073741827, .value=NULL },
    { .name="publicExponent", .type=(unsigned int)3, .value=NULL },
    { .name=((const char *)NULL), .type=(unsigned int)0, .value=NULL } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// udid
// file ideviceimagemounter.c line 44
static char *udid = (char *)(void *)0;
// verbose
// file socket.c line 45
static signed int verbose = 0;
// verbose_link1
// file socket.c line 45
static signed int verbose_link1 = 0;
// xml_mode
// file ideviceimagemounter.c line 43
static signed int xml_mode = 0;

// afc_client_free
// file ../include/libimobiledevice/afc.h line 130
enum anonymous_7 afc_client_free(struct afc_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    if(!(client->free_parent == 0))
    {
      if(!(client->parent == ((struct service_client_private *)NULL)))
      {
        service_client_free(client->parent);
        client->parent = (struct service_client_private *)(void *)0;
      }

    }

    free((void *)client->afc_packet);
    mutex_destroy(&client->mutex);
    free((void *)client);
    return (enum anonymous_7)AFC_E_SUCCESS;
  }
}

// afc_client_new
// file ../include/libimobiledevice/afc.h line 109
enum anonymous_7 afc_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct afc_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    struct service_client_private *parent = (struct service_client_private *)(void *)0;
    enum anonymous_20 return_value_service_client_new_2;
    return_value_service_client_new_2=service_client_new(device, service, &parent);
    if(!((signed int)return_value_service_client_new_2 == SERVICE_E_SUCCESS))
      return (enum anonymous_7)AFC_E_MUX_ERROR;

    else
    {
      enum anonymous_7 err;
      err=afc_client_new_with_service_client(parent, client);
      if(!((signed int)err == AFC_E_SUCCESS))
        service_client_free(parent);

      else
        (*client)->free_parent = 1;
      return err;
    }
  }
}

// afc_client_new_from_house_arrest_client
// file house_arrest.c line 150
enum anonymous_7 afc_client_new_from_house_arrest_client(struct house_arrest_client_private *client, struct afc_client_private **afc_client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct house_arrest_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)client->mode == HOUSE_ARREST_CLIENT_MODE_AFC ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    enum anonymous_7 err;
    err=afc_client_new_with_service_client(client->parent->parent, afc_client);
    if((signed int)err == AFC_E_SUCCESS)
      client->mode = (enum house_arrest_client_mode)HOUSE_ARREST_CLIENT_MODE_AFC;

    return err;
  }
}

// afc_client_new_with_service_client
// file afc.c line 71
enum anonymous_7 afc_client_new_with_service_client(struct service_client_private *service_client, struct afc_client_private **client)
{
  if(service_client == ((struct service_client_private *)NULL))
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    struct afc_client_private *client_loc;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct afc_client_private) /*72ul*/ );
    client_loc = (struct afc_client_private *)return_value_malloc_1;
    client_loc->parent = service_client;
    client_loc->free_parent = 0;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct anonymous_13) /*40ul*/ );
    client_loc->afc_packet = (struct anonymous_13 *)return_value_malloc_2;
    if(client_loc->afc_packet == ((struct anonymous_13 *)NULL))
    {
      free((void *)client_loc);
      return (enum anonymous_7)AFC_E_NO_MEM;
    }

    else
    {
      client_loc->afc_packet->packet_num = (unsigned long int)0;
      client_loc->afc_packet->entire_length = (unsigned long int)0;
      client_loc->afc_packet->this_length = (unsigned long int)0;
      memcpy((void *)client_loc->afc_packet->magic, (const void *)"CFA6LPAA", (unsigned long int)8);
      client_loc->file_handle = 0;
      client_loc->lock = 0;
      mutex_init(&client_loc->mutex);
      *client = client_loc;
      return (enum anonymous_7)AFC_E_SUCCESS;
    }
  }
}

// afc_client_start_service
// file afc.c line 118
enum anonymous_7 afc_client_start_service(struct idevice_private *device, struct afc_client_private **client, const char *label)
{
  enum anonymous_7 err = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.afc", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))afc_client_new, (signed int *)&err);
  return err;
}

// afc_dictionary_free
// file afc.c line 1025
enum anonymous_7 afc_dictionary_free(char **dictionary)
{
  signed int i = 0;
  if(dictionary == ((char **)NULL))
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    i = 0;
    for( ; !(dictionary[(signed long int)i] == ((char *)NULL)); i = i + 1)
      free((void *)dictionary[(signed long int)i]);
    free((void *)dictionary);
    return (enum anonymous_7)AFC_E_SUCCESS;
  }
}

// afc_dispatch_packet
// file afc.c line 153
static enum anonymous_7 afc_dispatch_packet(struct afc_client_private *client, unsigned long int operation, const char *data, unsigned int data_length, const char *payload, unsigned int payload_length, unsigned int *bytes_sent)
{
  unsigned int sent = (unsigned int)0;
  _Bool tmp_if_expr_1;
  if(client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    *bytes_sent = (unsigned int)0;
    if(data == ((const char *)NULL) || data_length == 0u)
      data_length = (unsigned int)0;

    if(payload == ((const char *)NULL) || payload_length == 0u)
      payload_length = (unsigned int)0;

    client->afc_packet->packet_num = client->afc_packet->packet_num + 1ul;
    client->afc_packet->operation = operation;
    client->afc_packet->entire_length = sizeof(struct anonymous_13) /*40ul*/  + (unsigned long int)data_length + (unsigned long int)payload_length;
    client->afc_packet->this_length = sizeof(struct anonymous_13) /*40ul*/  + (unsigned long int)data_length;
    debug_buffer((char *)client->afc_packet, (const signed int)sizeof(struct anonymous_13) /*40ul*/ );
    client->afc_packet->entire_length = client->afc_packet->entire_length;
    client->afc_packet->this_length = client->afc_packet->this_length;
    client->afc_packet->packet_num = client->afc_packet->packet_num;
    client->afc_packet->operation = client->afc_packet->operation;
    sent = (unsigned int)0;
    service_send(client->parent, (const char *)(void *)client->afc_packet, (unsigned int)sizeof(struct anonymous_13) /*40ul*/ , &sent);
    client->afc_packet->entire_length = client->afc_packet->entire_length;
    client->afc_packet->this_length = client->afc_packet->this_length;
    client->afc_packet->packet_num = client->afc_packet->packet_num;
    client->afc_packet->operation = client->afc_packet->operation;
    *bytes_sent = *bytes_sent + sent;
    if(!((unsigned long int)sent >= sizeof(struct anonymous_13) /*40ul*/ ))
      return (enum anonymous_7)AFC_E_SUCCESS;

    else
    {
      sent = (unsigned int)0;
      if(data_length >= 1u)
      {
        debug_buffer(data, (const signed int)data_length);
        service_send(client->parent, data, data_length, &sent);
      }

      *bytes_sent = *bytes_sent + sent;
      if(!(sent >= data_length))
        return (enum anonymous_7)AFC_E_SUCCESS;

      else
      {
        sent = (unsigned int)0;
        if(payload_length >= 1u)
        {
          debug_buffer(payload, (const signed int)payload_length);
          service_send(client->parent, payload, payload_length, &sent);
        }

        *bytes_sent = *bytes_sent + sent;
        if(!(sent >= payload_length))
          return (enum anonymous_7)AFC_E_SUCCESS;

        else
          return (enum anonymous_7)AFC_E_SUCCESS;
      }
    }
  }
}

// afc_file_close
// file ../include/libimobiledevice/afc.h line 190
enum anonymous_7 afc_file_close(struct afc_client_private *client, unsigned long int handle)
{
  unsigned int bytes = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(client == ((struct afc_client_private *)NULL) || handle == 0ul)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    ret=afc_dispatch_packet(client, (unsigned long int)20, (const char *)&handle, (unsigned int)8, (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_file_lock
// file afc.c line 777
enum anonymous_7 afc_file_lock(struct afc_client_private *client, unsigned long int handle, enum anonymous_0 operation)
{
  unsigned int bytes = (unsigned int)0;
  /* tag-#anon#lST[U64'handle'||U64'op'|] */
struct anonymous_1
{
  // handle
  unsigned long int handle;
  // op
  unsigned long int op;
};

/* */
  ;
  struct anonymous_1 lockinfo;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(client == ((struct afc_client_private *)NULL) || handle == 0ul)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    lockinfo.handle = handle;
    lockinfo.op = (unsigned long int)operation;
    ret=afc_dispatch_packet(client, (unsigned long int)27, (const char *)&lockinfo, (unsigned int)sizeof(struct anonymous_1) /*16ul*/ , (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_file_open
// file ../include/libimobiledevice/afc.h line 182
enum anonymous_7 afc_file_open(struct afc_client_private *client, const char *filename, enum anonymous_16 file_mode, unsigned long int *handle)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    unsigned long int file_mode_loc = (unsigned long int)file_mode;
    unsigned int bytes = (unsigned int)0;
    char *data;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(filename);
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(char) /*1ul*/  * ((unsigned long int)8 + return_value_strlen_3 + (unsigned long int)1));
    data = (char *)return_value_malloc_4;
    enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
    *handle = (unsigned long int)0;
    afc_lock(client);
    memcpy((void *)data, (const void *)&file_mode_loc, (unsigned long int)8);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(filename);
    memcpy((void *)(data + (signed long int)8), (const void *)filename, return_value_strlen_5);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(filename);
    data[(signed long int)((unsigned long int)8 + return_value_strlen_6)] = (char)0;
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(filename);
    ret=afc_dispatch_packet(client, (unsigned long int)13, data, (unsigned int)((unsigned long int)8 + return_value_strlen_7 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    free((void *)data);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      data = (char *)(void *)0;
      ret=afc_receive_data(client, &data, &bytes);
      if((signed int)ret == AFC_E_SUCCESS && bytes >= 1u && !(data == ((char *)NULL)))
      {
        afc_unlock(client);
        memcpy((void *)handle, (const void *)data, sizeof(unsigned long int) /*8ul*/ );
        free((void *)data);
        return ret;
      }

      else
      {
        free((void *)data);
        afc_unlock(client);
        return ret;
      }
    }
  }
}

// afc_file_read
// file afc.c line 664
enum anonymous_7 afc_file_read(struct afc_client_private *client, unsigned long int handle, char *data, unsigned int length, unsigned int *bytes_read)
{
  char *input = (char *)(void *)0;
  unsigned int current_count = (unsigned int)0;
  unsigned int bytes_loc = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_SUCCESS;
  _Bool tmp_if_expr_1;
  if(client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(handle == 0ul || tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    /* tag-#anon#lST[U64'handle'||U64'size'|] */
struct anonymous
{
  // handle
  unsigned long int handle;
  // size
  unsigned long int size;
};

/* */
    ;
    struct anonymous readinfo;
    readinfo.handle = handle;
    readinfo.size = (unsigned long int)length;
    ret=afc_dispatch_packet(client, (unsigned long int)15, (const char *)&readinfo, (unsigned int)sizeof(struct anonymous) /*16ul*/ , (const char *)(void *)0, (unsigned int)0, &bytes_loc);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, &input, &bytes_loc);
      if(!((signed int)ret == AFC_E_SUCCESS))
      {
        afc_unlock(client);
        return ret;
      }

      else
        if(bytes_loc == 0u)
        {
          if(!(input == ((char *)NULL)))
            free((void *)input);

          afc_unlock(client);
          *bytes_read = current_count;
          return ret;
        }

        else
          if(!(input == ((char *)NULL)))
          {
            memcpy((void *)(data + (signed long int)current_count), (const void *)input, (unsigned long int)(bytes_loc > length ? length : bytes_loc));
            free((void *)input);
            input = (char *)(void *)0;
            current_count = current_count + (bytes_loc > length ? length : bytes_loc);
          }

      afc_unlock(client);
      *bytes_read = current_count;
      return ret;
    }
  }
}

// afc_file_seek
// file afc.c line 811
enum anonymous_7 afc_file_seek(struct afc_client_private *client, unsigned long int handle, signed long int offset, signed int whence)
{
  unsigned int bytes = (unsigned int)0;
  /* tag-#anon#lST[U64'handle'||U64'whence'||S64'offset'|] */
struct anonymous_2
{
  // handle
  unsigned long int handle;
  // whence
  unsigned long int whence;
  // offset
  signed long int offset;
};

/* */
  ;
  struct anonymous_2 seekinfo;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(client == ((struct afc_client_private *)NULL) || handle == 0ul)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    seekinfo.handle = handle;
    seekinfo.whence = (unsigned long int)whence;
    seekinfo.offset = (signed long int)offset;
    ret=afc_dispatch_packet(client, (unsigned long int)17, (const char *)&seekinfo, (unsigned int)sizeof(struct anonymous_2) /*24ul*/ , (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_file_tell
// file afc.c line 844
enum anonymous_7 afc_file_tell(struct afc_client_private *client, unsigned long int handle, unsigned long int *position)
{
  char *buffer = (char *)(void *)0;
  unsigned int bytes = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(client == ((struct afc_client_private *)NULL) || handle == 0ul)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    ret=afc_dispatch_packet(client, (unsigned long int)18, (const char *)&handle, (unsigned int)8, (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, &buffer, &bytes);
      if(bytes >= 1u && !(buffer == ((char *)NULL)))
      {
        memcpy((void *)position, (const void *)buffer, sizeof(unsigned long int) /*8ul*/ );
        *position = *position;
      }

      free((void *)buffer);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_file_truncate
// file afc.c line 877
enum anonymous_7 afc_file_truncate(struct afc_client_private *client, unsigned long int handle, unsigned long int newsize)
{
  unsigned int bytes = (unsigned int)0;
  /* tag-#anon#lST[U64'handle'||U64'newsize'|] */
struct anonymous_3
{
  // handle
  unsigned long int handle;
  // newsize
  unsigned long int newsize;
};

/* */
  ;
  struct anonymous_3 truncinfo;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(client == ((struct afc_client_private *)NULL) || handle == 0ul)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    truncinfo.handle = handle;
    truncinfo.newsize = newsize;
    ret=afc_dispatch_packet(client, (unsigned long int)21, (const char *)&truncinfo, (unsigned int)sizeof(struct anonymous_3) /*16ul*/ , (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_file_write
// file ../include/libimobiledevice/afc.h line 230
enum anonymous_7 afc_file_write(struct afc_client_private *client, unsigned long int handle, const char *data, unsigned int length, unsigned int *bytes_written)
{
  unsigned int current_count = (unsigned int)0;
  unsigned int bytes_loc = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_SUCCESS;
  _Bool tmp_if_expr_1;
  if(client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(bytes_written == ((unsigned int *)NULL) || handle == 0ul || tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    ret=afc_dispatch_packet(client, (unsigned long int)16, (const char *)&handle, (unsigned int)8, data, length, &bytes_loc);
    current_count = current_count + (unsigned int)((unsigned long int)bytes_loc - (sizeof(struct anonymous_13) /*40ul*/  + (unsigned long int)8));
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      *bytes_written = current_count;
      return (enum anonymous_7)AFC_E_SUCCESS;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes_loc);
      afc_unlock(client);
      *bytes_written = current_count;
      return ret;
    }
  }
}

// afc_get_device_info
// file afc.c line 441
enum anonymous_7 afc_get_device_info(struct afc_client_private *client, char ***device_information)
{
  unsigned int bytes = (unsigned int)0;
  char *data = (char *)(void *)0;
  char **list = (char **)(void *)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(device_information == ((char ***)NULL) || client == ((struct afc_client_private *)NULL))
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    ret=afc_dispatch_packet(client, (unsigned long int)11, (const char *)(void *)0, (unsigned int)0, (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, &data, &bytes);
      if(!((signed int)ret == AFC_E_SUCCESS))
      {
        if(!(data == ((char *)NULL)))
          free((void *)data);

        afc_unlock(client);
        return ret;
      }

      else
      {
        list=make_strings_list(data, bytes);
        if(!(data == ((char *)NULL)))
          free((void *)data);

        afc_unlock(client);
        *device_information = list;
        return ret;
      }
    }
  }
}

// afc_get_device_info_key
// file afc.c line 478
enum anonymous_7 afc_get_device_info_key(struct afc_client_private *client, const char *key, char **value)
{
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_INTERNAL_ERROR;
  char **kvps;
  char **ptr;
  *value = (char *)(void *)0;
  if(key == ((const char *)NULL))
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    ret=afc_get_device_info(client, &kvps);
    if(!((signed int)ret == AFC_E_SUCCESS))
      return ret;

    else
    {
      ptr = kvps;
      for( ; !(*ptr == ((char *)NULL)); ptr = ptr + 1l)
      {
        signed int return_value_strcmp_1;
        return_value_strcmp_1=strcmp(*ptr, key);
        if(return_value_strcmp_1 == 0)
        {
          *value=strdup(ptr[(signed long int)1]);
          break;
        }

      }
      ptr = kvps;
      for( ; !(*ptr == ((char *)NULL)); ptr = ptr + 1l)
        free((void *)*ptr);
      free((void *)kvps);
      return ret;
    }
  }
}

// afc_get_file_info
// file ../include/libimobiledevice/afc.h line 170
enum anonymous_7 afc_get_file_info(struct afc_client_private *client, const char *path, char ***file_information)
{
  char *received = (char *)(void *)0;
  unsigned int bytes = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(file_information == ((char ***)NULL) || path == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(path);
    ret=afc_dispatch_packet(client, (unsigned long int)10, path, (unsigned int)(return_value_strlen_1 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, &received, &bytes);
      if(!(received == ((char *)NULL)))
      {
        *file_information=make_strings_list(received, bytes);
        free((void *)received);
      }

      afc_unlock(client);
      return ret;
    }
  }
}

// afc_lock
// file afc.c line 42
static void afc_lock(struct afc_client_private *client)
{
  mutex_lock(&client->mutex);
}

// afc_make_directory
// file ../include/libimobiledevice/afc.h line 299
enum anonymous_7 afc_make_directory(struct afc_client_private *client, const char *path)
{
  unsigned int bytes = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  if(client == ((struct afc_client_private *)NULL))
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(path);
    ret=afc_dispatch_packet(client, (unsigned long int)9, path, (unsigned int)(return_value_strlen_1 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_make_link
// file afc.c line 938
enum anonymous_7 afc_make_link(struct afc_client_private *client, enum anonymous_21 linktype, const char *target, const char *linkname)
{
  _Bool tmp_if_expr_1;
  if(linkname == ((const char *)NULL) || target == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    char *buffer;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(target);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(linkname);
    void *return_value_malloc_5;
    return_value_malloc_5=malloc(sizeof(char) /*1ul*/  * (return_value_strlen_3 + (unsigned long int)1 + return_value_strlen_4 + (unsigned long int)1 + (unsigned long int)8));
    buffer = (char *)return_value_malloc_5;
    unsigned int bytes = (unsigned int)0;
    unsigned long int type = (unsigned long int)linktype;
    enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
    afc_lock(client);
    memcpy((void *)buffer, (const void *)&type, (unsigned long int)8);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(target);
    memcpy((void *)(buffer + (signed long int)8), (const void *)target, return_value_strlen_6 + (unsigned long int)1);
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(target);
    unsigned long int return_value_strlen_8;
    return_value_strlen_8=strlen(linkname);
    memcpy((void *)(buffer + (signed long int)8 + (signed long int)return_value_strlen_7 + (signed long int)1), (const void *)linkname, return_value_strlen_8 + (unsigned long int)1);
    unsigned long int return_value_strlen_9;
    return_value_strlen_9=strlen(linkname);
    unsigned long int return_value_strlen_10;
    return_value_strlen_10=strlen(target);
    ret=afc_dispatch_packet(client, (unsigned long int)28, buffer, (unsigned int)((unsigned long int)8 + return_value_strlen_9 + (unsigned long int)1 + return_value_strlen_10 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    free((void *)buffer);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_read_directory
// file afc.c line 405
enum anonymous_7 afc_read_directory(struct afc_client_private *client, const char *path, char ***directory_information)
{
  unsigned int bytes = (unsigned int)0;
  char *data = (char *)(void *)0;
  char **list_loc = (char **)(void *)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(directory_information == ((char ***)NULL) || path == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(directory_information == ((char ***)NULL)))
      tmp_if_expr_1 = *directory_information != ((char **)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(path);
    ret=afc_dispatch_packet(client, (unsigned long int)3, path, (unsigned int)(return_value_strlen_3 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, &data, &bytes);
      if(!((signed int)ret == AFC_E_SUCCESS))
      {
        if(!(data == ((char *)NULL)))
          free((void *)data);

        afc_unlock(client);
        return ret;
      }

      else
      {
        list_loc=make_strings_list(data, bytes);
        if(!(data == ((char *)NULL)))
          free((void *)data);

        afc_unlock(client);
        *directory_information = list_loc;
        return ret;
      }
    }
  }
}

// afc_receive_data
// file afc.c line 221
static enum anonymous_7 afc_receive_data(struct afc_client_private *client, char **bytes, unsigned int *bytes_recv)
{
  struct anonymous_13 header;
  unsigned int entire_len = (unsigned int)0;
  unsigned int this_len = (unsigned int)0;
  unsigned int current_count = (unsigned int)0;
  unsigned long int param1 = (unsigned long int)-1;
  char *dump_here = (char *)(void *)0;
  if(!(bytes_recv == ((unsigned int *)NULL)))
    *bytes_recv = (unsigned int)0;

  if(!(bytes == ((char **)NULL)))
    *bytes = (char *)(void *)0;

  service_receive(client->parent, (char *)&header, (unsigned int)sizeof(struct anonymous_13) /*40ul*/ , bytes_recv);
  (&header)->entire_length = (&header)->entire_length;
  (&header)->this_length = (&header)->this_length;
  (&header)->packet_num = (&header)->packet_num;
  (&header)->operation = (&header)->operation;
  if(*bytes_recv == 0u)
    return (enum anonymous_7)AFC_E_MUX_ERROR;

  else
    if(!((unsigned long int)*bytes_recv >= sizeof(struct anonymous_13) /*40ul*/ ))
      return (enum anonymous_7)AFC_E_MUX_ERROR;

  signed int return_value_strncmp_1;
  return_value_strncmp_1=strncmp(header.magic, "CFA6LPAA", (unsigned long int)8);
  if(!(header.packet_num == client->afc_packet->packet_num))
    return (enum anonymous_7)AFC_E_OP_HEADER_INVALID;

  else
  {
    if(!(header.this_length >= sizeof(struct anonymous_13) /*40ul*/ ))
      return (enum anonymous_7)AFC_E_OP_HEADER_INVALID;

    else
      if(header.entire_length == sizeof(struct anonymous_13) /*40ul*/  && header.this_length == header.entire_length)
      {
        *bytes_recv = (unsigned int)0;
        if(header.operation == 2ul)
          return (enum anonymous_7)AFC_E_SUCCESS;

        else
          return (enum anonymous_7)AFC_E_IO_ERROR;
      }

    entire_len = (unsigned int)((unsigned long int)(unsigned int)header.entire_length - sizeof(struct anonymous_13) /*40ul*/ );
    this_len = (unsigned int)((unsigned long int)(unsigned int)header.this_length - sizeof(struct anonymous_13) /*40ul*/ );
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)entire_len);
    dump_here = (char *)return_value_malloc_2;
    if(this_len >= 1u)
    {
      service_receive(client->parent, dump_here, this_len, bytes_recv);
      if(!(*bytes_recv >= 1u))
      {
        free((void *)dump_here);
        return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
      }

      if(*bytes_recv >= this_len)
        goto __CPROVER_DUMP_L10;

      free((void *)dump_here);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {

    __CPROVER_DUMP_L10:
      ;
      current_count = this_len;
      if(!(this_len >= entire_len))
        for( ; !(current_count >= entire_len); current_count = current_count + *bytes_recv)
        {
          service_receive(client->parent, dump_here + (signed long int)current_count, entire_len - current_count, bytes_recv);
          if(!(*bytes_recv >= 1u))
            break;

        }

      if((unsigned long int)current_count >= sizeof(unsigned long int) /*8ul*/ )
        param1 = *((unsigned long int *)dump_here);

      debug_buffer(dump_here, (const signed int)current_count);
      if(header.operation == 1ul)
      {
        if(!(param1 == 0ul))
        {
          free((void *)dump_here);
          return (enum anonymous_7)param1;
        }

      }

      else
        if(!(header.operation == 2ul))
        {
          if(!(header.operation == 14ul))
          {
            if(!(header.operation == 19ul))
            {
              free((void *)dump_here);
              *bytes_recv = (unsigned int)0;
              fprintf(stderr, "%s: WARNING: Unknown operation code received 0x%llx param1=%lld", (const void *)"afc_receive_data", (signed long long int)header.operation, (signed long long int)param1);
              return (enum anonymous_7)AFC_E_OP_NOT_SUPPORTED;
            }

          }

        }

      if(!(bytes == ((char **)NULL)))
        *bytes = dump_here;

      else
        free((void *)dump_here);
      *bytes_recv = current_count;
      return (enum anonymous_7)AFC_E_SUCCESS;
    }
  }
}

// afc_remove_path
// file afc.c line 505
enum anonymous_7 afc_remove_path(struct afc_client_private *client, const char *path)
{
  unsigned int bytes = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  _Bool tmp_if_expr_1;
  if(path == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(path);
    ret=afc_dispatch_packet(client, (unsigned long int)8, path, (unsigned int)(return_value_strlen_3 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      if((signed int)ret == AFC_E_UNKNOWN_ERROR)
        ret = (enum anonymous_7)AFC_E_DIR_NOT_EMPTY;

      afc_unlock(client);
      return ret;
    }
  }
}

// afc_remove_path_and_contents
// file afc.c line 1001
enum anonymous_7 afc_remove_path_and_contents(struct afc_client_private *client, const char *path)
{
  unsigned int bytes = (unsigned int)0;
  enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
  _Bool tmp_if_expr_1;
  if(path == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    afc_lock(client);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(path);
    ret=afc_dispatch_packet(client, (unsigned long int)34, path, (unsigned int)(return_value_strlen_3 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_rename_path
// file afc.c line 533
enum anonymous_7 afc_rename_path(struct afc_client_private *client, const char *from, const char *to)
{
  _Bool tmp_if_expr_1;
  if(from == ((const char *)NULL) || to == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    char *buffer;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(from);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(to);
    void *return_value_malloc_5;
    return_value_malloc_5=malloc(sizeof(char) /*1ul*/  * (return_value_strlen_3 + return_value_strlen_4 + (unsigned long int)1 + sizeof(unsigned int) /*4ul*/ ));
    buffer = (char *)return_value_malloc_5;
    unsigned int bytes = (unsigned int)0;
    enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
    afc_lock(client);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(from);
    memcpy((void *)buffer, (const void *)from, return_value_strlen_6 + (unsigned long int)1);
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(from);
    unsigned long int return_value_strlen_8;
    return_value_strlen_8=strlen(to);
    memcpy((void *)(buffer + (signed long int)return_value_strlen_7 + (signed long int)1), (const void *)to, return_value_strlen_8 + (unsigned long int)1);
    unsigned long int return_value_strlen_9;
    return_value_strlen_9=strlen(to);
    unsigned long int return_value_strlen_10;
    return_value_strlen_10=strlen(from);
    ret=afc_dispatch_packet(client, (unsigned long int)24, buffer, (unsigned int)(return_value_strlen_9 + (unsigned long int)1 + return_value_strlen_10 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    free((void *)buffer);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_set_file_time
// file afc.c line 972
enum anonymous_7 afc_set_file_time(struct afc_client_private *client, const char *path, unsigned long int mtime)
{
  _Bool tmp_if_expr_1;
  if(path == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    char *buffer;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(path);
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(char) /*1ul*/  * (return_value_strlen_3 + (unsigned long int)1 + (unsigned long int)8));
    buffer = (char *)return_value_malloc_4;
    unsigned int bytes = (unsigned int)0;
    unsigned long int mtime_loc = mtime;
    enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
    afc_lock(client);
    memcpy((void *)buffer, (const void *)&mtime_loc, (unsigned long int)8);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(path);
    memcpy((void *)(buffer + (signed long int)8), (const void *)path, return_value_strlen_5 + (unsigned long int)1);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(path);
    ret=afc_dispatch_packet(client, (unsigned long int)30, buffer, (unsigned int)((unsigned long int)8 + return_value_strlen_6 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    free((void *)buffer);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_truncate
// file afc.c line 908
enum anonymous_7 afc_truncate(struct afc_client_private *client, const char *path, unsigned long int newsize)
{
  _Bool tmp_if_expr_1;
  if(path == ((const char *)NULL) || client == ((struct afc_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->afc_packet != ((struct anonymous_13 *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_7)AFC_E_INVALID_ARG;

  else
  {
    char *buffer;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(path);
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(char) /*1ul*/  * (return_value_strlen_3 + (unsigned long int)1 + (unsigned long int)8));
    buffer = (char *)return_value_malloc_4;
    unsigned int bytes = (unsigned int)0;
    unsigned long int size_requested = newsize;
    enum anonymous_7 ret = (enum anonymous_7)AFC_E_UNKNOWN_ERROR;
    afc_lock(client);
    memcpy((void *)buffer, (const void *)&size_requested, (unsigned long int)8);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(path);
    memcpy((void *)(buffer + (signed long int)8), (const void *)path, return_value_strlen_5 + (unsigned long int)1);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(path);
    ret=afc_dispatch_packet(client, (unsigned long int)7, buffer, (unsigned int)((unsigned long int)8 + return_value_strlen_6 + (unsigned long int)1), (const char *)(void *)0, (unsigned int)0, &bytes);
    free((void *)buffer);
    if(!((signed int)ret == AFC_E_SUCCESS))
    {
      afc_unlock(client);
      return (enum anonymous_7)AFC_E_NOT_ENOUGH_DATA;
    }

    else
    {
      ret=afc_receive_data(client, (char **)(void *)0, &bytes);
      afc_unlock(client);
      return ret;
    }
  }
}

// afc_unlock
// file afc.c line 53
static void afc_unlock(struct afc_client_private *client)
{
  mutex_unlock(&client->mutex);
}

// base64encode
// file utils.c line 295
static char * base64encode(const unsigned char *buf, unsigned long int size)
{
  signed int tmp_if_expr_2;
  signed int tmp_if_expr_3;
  unsigned long int tmp_post_4;
  unsigned long int tmp_post_5;
  unsigned long int tmp_post_6;
  signed int tmp_if_expr_7;
  unsigned long int tmp_post_8;
  signed int tmp_if_expr_9;
  if(buf == ((const unsigned char *)NULL) || !(size >= 1ul))
    return (char *)(void *)0;

  else
  {
    signed int outlen = (signed int)((size / (unsigned long int)3) * (unsigned long int)4);
    char *outbuf;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)(outlen + 5));
    outbuf = (char *)return_value_malloc_1;
    unsigned long int n = (unsigned long int)0;
    unsigned long int m = (unsigned long int)0;
    unsigned char input[3l];
    unsigned int output[4l];
    for( ; !(n >= size); n = n + (unsigned long int)3)
    {
      input[(signed long int)0] = buf[(signed long int)n];
      if(!(1ul + n >= size))
        tmp_if_expr_2 = (signed int)buf[(signed long int)(n + (unsigned long int)1)];

      else
        tmp_if_expr_2 = 0;
      input[(signed long int)1] = (unsigned char)tmp_if_expr_2;
      if(!(2ul + n >= size))
        tmp_if_expr_3 = (signed int)buf[(signed long int)(n + (unsigned long int)2)];

      else
        tmp_if_expr_3 = 0;
      input[(signed long int)2] = (unsigned char)tmp_if_expr_3;
      output[(signed long int)0] = (unsigned int)((signed int)input[(signed long int)0] >> 2);
      output[(signed long int)1] = (unsigned int)((((signed int)input[(signed long int)0] & 3) << 4) + ((signed int)input[(signed long int)1] >> 4));
      output[(signed long int)2] = (unsigned int)((((signed int)input[(signed long int)1] & 15) << 2) + ((signed int)input[(signed long int)2] >> 6));
      output[(signed long int)3] = (unsigned int)((signed int)input[(signed long int)2] & 63);
      tmp_post_4 = m;
      m = m + 1ul;
      outbuf[(signed long int)tmp_post_4] = base64_str[(signed long int)(signed int)output[(signed long int)0]];
      tmp_post_5 = m;
      m = m + 1ul;
      outbuf[(signed long int)tmp_post_5] = base64_str[(signed long int)(signed int)output[(signed long int)1]];
      tmp_post_6 = m;
      m = m + 1ul;
      if(!(1ul + n >= size))
        tmp_if_expr_7 = (signed int)base64_str[(signed long int)(signed int)output[(signed long int)2]];

      else
        tmp_if_expr_7 = (signed int)base64_pad;
      outbuf[(signed long int)tmp_post_6] = (char)tmp_if_expr_7;
      tmp_post_8 = m;
      m = m + 1ul;
      if(!(2ul + n >= size))
        tmp_if_expr_9 = (signed int)base64_str[(signed long int)(signed int)output[(signed long int)3]];

      else
        tmp_if_expr_9 = (signed int)base64_pad;
      outbuf[(signed long int)tmp_post_8] = (char)tmp_if_expr_9;
    }
    outbuf[(signed long int)m] = (char)0;
    return outbuf;
  }
}

// base64encode_link1
// file utils.c line 295
static char * base64encode_link1(const unsigned char *buf_link1, unsigned long int size_link1)
{
  signed int tmp_if_expr_2_link1;
  signed int tmp_if_expr_3_link1;
  unsigned long int tmp_post_4_link1;
  unsigned long int tmp_post_5_link1;
  unsigned long int tmp_post_6_link1;
  signed int tmp_if_expr_7_link1;
  unsigned long int tmp_post_8_link1;
  signed int tmp_if_expr_9_link1;
  if(buf_link1 == ((const unsigned char *)NULL) || !(size_link1 >= 1ul))
    return (char *)(void *)0;

  else
  {
    signed int outlen_link1 = (signed int)((size_link1 / (unsigned long int)3) * (unsigned long int)4);
    char *outbuf_link1;
    void *return_value_malloc_1_link1;
    return_value_malloc_1_link1=malloc((unsigned long int)(outlen_link1 + 5));
    outbuf_link1 = (char *)return_value_malloc_1_link1;
    unsigned long int n_link1 = (unsigned long int)0;
    unsigned long int m_link1 = (unsigned long int)0;
    unsigned char input_link1[3l];
    unsigned int output_link1[4l];
    for( ; !(n_link1 >= size_link1); n_link1 = n_link1 + (unsigned long int)3)
    {
      input_link1[(signed long int)0] = buf_link1[(signed long int)n_link1];
      if(!(1ul + n_link1 >= size_link1))
        tmp_if_expr_2_link1 = (signed int)buf_link1[(signed long int)(n_link1 + (unsigned long int)1)];

      else
        tmp_if_expr_2_link1 = 0;
      input_link1[(signed long int)1] = (unsigned char)tmp_if_expr_2_link1;
      if(!(2ul + n_link1 >= size_link1))
        tmp_if_expr_3_link1 = (signed int)buf_link1[(signed long int)(n_link1 + (unsigned long int)2)];

      else
        tmp_if_expr_3_link1 = 0;
      input_link1[(signed long int)2] = (unsigned char)tmp_if_expr_3_link1;
      output_link1[(signed long int)0] = (unsigned int)((signed int)input_link1[(signed long int)0] >> 2);
      output_link1[(signed long int)1] = (unsigned int)((((signed int)input_link1[(signed long int)0] & 3) << 4) + ((signed int)input_link1[(signed long int)1] >> 4));
      output_link1[(signed long int)2] = (unsigned int)((((signed int)input_link1[(signed long int)1] & 15) << 2) + ((signed int)input_link1[(signed long int)2] >> 6));
      output_link1[(signed long int)3] = (unsigned int)((signed int)input_link1[(signed long int)2] & 63);
      tmp_post_4_link1 = m_link1;
      m_link1 = m_link1 + 1ul;
      outbuf_link1[(signed long int)tmp_post_4_link1] = base64_str_link1[(signed long int)(signed int)output_link1[(signed long int)0]];
      tmp_post_5_link1 = m_link1;
      m_link1 = m_link1 + 1ul;
      outbuf_link1[(signed long int)tmp_post_5_link1] = base64_str_link1[(signed long int)(signed int)output_link1[(signed long int)1]];
      tmp_post_6_link1 = m_link1;
      m_link1 = m_link1 + 1ul;
      if(!(1ul + n_link1 >= size_link1))
        tmp_if_expr_7_link1 = (signed int)base64_str_link1[(signed long int)(signed int)output_link1[(signed long int)2]];

      else
        tmp_if_expr_7_link1 = (signed int)base64_pad_link1;
      outbuf_link1[(signed long int)tmp_post_6_link1] = (char)tmp_if_expr_7_link1;
      tmp_post_8_link1 = m_link1;
      m_link1 = m_link1 + 1ul;
      if(!(2ul + n_link1 >= size_link1))
        tmp_if_expr_9_link1 = (signed int)base64_str_link1[(signed long int)(signed int)output_link1[(signed long int)3]];

      else
        tmp_if_expr_9_link1 = (signed int)base64_pad_link1;
      outbuf_link1[(signed long int)tmp_post_8_link1] = (char)tmp_if_expr_9_link1;
    }
    outbuf_link1[(signed long int)m_link1] = (char)0;
    return outbuf_link1;
  }
}

// buffer_read_from_filename
// file utils.c line 203
void buffer_read_from_filename(const char *filename, char **buffer, unsigned long int *length)
{
  struct _IO_FILE *f;
  unsigned long int size;
  *length = (unsigned long int)0;
  f=fopen(filename, "rb");
  if(!(f == ((struct _IO_FILE *)NULL)))
  {
    fseek(f, (signed long int)0, 2);
    signed long int return_value_ftell_1;
    return_value_ftell_1=ftell(f);
    size = (unsigned long int)return_value_ftell_1;
    rewind(f);
    if(size == 0ul)
      fclose(f);

    else
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(char) /*1ul*/  * (size + (unsigned long int)1));
      *buffer = (char *)return_value_malloc_2;
      unsigned long int return_value_fread_3;
      return_value_fread_3=fread((void *)*buffer, sizeof(char) /*1ul*/ , size, f);
      if(!(return_value_fread_3 == size))
        fclose(f);

      else
      {
        fclose(f);
        *length = size;
      }
    }
  }

}

// buffer_write_to_filename
// file utils.c line 234
void buffer_write_to_filename(const char *filename, const char *buffer, unsigned long int length)
{
  struct _IO_FILE *f;
  f=fopen(filename, "wb");
  if(!(f == ((struct _IO_FILE *)NULL)))
  {
    fwrite((const void *)buffer, sizeof(char) /*1ul*/ , length, f);
    fclose(f);
  }

}

// count_nullspaces
// file afc.c line 364
static unsigned int count_nullspaces(char *string, unsigned int number)
{
  unsigned int i = (unsigned int)0;
  unsigned int nulls = (unsigned int)0;
  i = (unsigned int)0;
  for( ; !(i >= number); i = i + 1u)
    if((signed int)string[(signed long int)i] == 0)
      nulls = nulls + 1u;

  return nulls;
}

// create_process_changes_message
// file mobilesync.c line 505
static void * create_process_changes_message(const char *data_class, void *entities, unsigned char more_changes, void *actions)
{
  void *msg;
  msg=plist_new_array();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("SDMessageProcessChanges");
  plist_array_append_item(msg, return_value_plist_new_string_1);
  void *return_value_plist_new_string_2;
  return_value_plist_new_string_2=plist_new_string(data_class);
  plist_array_append_item(msg, return_value_plist_new_string_2);
  void *return_value_plist_copy_3;
  return_value_plist_copy_3=plist_copy(entities);
  plist_array_append_item(msg, return_value_plist_copy_3);
  void *return_value_plist_new_bool_4;
  return_value_plist_new_bool_4=plist_new_bool(more_changes);
  plist_array_append_item(msg, return_value_plist_new_bool_4);
  void *return_value_plist_copy_5;
  void *return_value_plist_new_string_6;
  if(!(actions == NULL))
  {
    return_value_plist_copy_5=plist_copy(actions);
    plist_array_append_item(msg, return_value_plist_copy_5);
  }

  else
  {
    return_value_plist_new_string_6=plist_new_string("___EmptyParameterString___");
    plist_array_append_item(msg, return_value_plist_new_string_6);
  }
  return msg;
}

// debug_buffer
// file debug.c line 101
void debug_buffer(const char *data, const signed int length)
{
  ;
}

// debug_buffer_to_file
// file debug.c line 136
void debug_buffer_to_file(const char *file, const char *data, const signed int length)
{
  ;
}

// debug_info_real
// file debug.c line 81
void debug_info_real(const char *func, const char *file, signed int line, const char *format, ...)
{
  ;
}

// debug_plist_real
// file debug.c line 148
void debug_plist_real(const char *func, const char *file, signed int line, void *plist)
{
  ;
}

// debugserver_client_free
// file debugserver.c line 98
enum anonymous_51 debugserver_client_free(struct debugserver_client_private *client)
{
  if(client == ((struct debugserver_client_private *)NULL))
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    enum anonymous_51 err;
    enum anonymous_20 return_value_service_client_free_1;
    return_value_service_client_free_1=service_client_free(client->parent);
    err=debugserver_error(return_value_service_client_free_1);
    client->parent = (struct service_client_private *)(void *)0;
    free((void *)client);
    return err;
  }
}

// debugserver_client_new
// file debugserver.c line 63
enum anonymous_51 debugserver_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct debugserver_client_private **client)
{
  *client = (struct debugserver_client_private *)(void *)0;
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct debugserver_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct debugserver_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    struct service_client_private *parent = (struct service_client_private *)(void *)0;
    enum anonymous_51 ret;
    enum anonymous_20 return_value_service_client_new_3;
    return_value_service_client_new_3=service_client_new(device, service, &parent);
    ret=debugserver_error(return_value_service_client_new_3);
    if(!((signed int)ret == DEBUGSERVER_E_SUCCESS))
      return ret;

    else
    {
      struct debugserver_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct debugserver_client_private) /*16ul*/ );
      client_loc = (struct debugserver_client_private *)return_value_malloc_4;
      client_loc->parent = parent;
      client_loc->noack_mode = 0;
      *client = client_loc;
      return (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
    }
  }
}

// debugserver_client_receive
// file debugserver.c line 151
enum anonymous_51 debugserver_client_receive(struct debugserver_client_private *client, char *data, unsigned int size, unsigned int *received)
{
  enum anonymous_51 return_value_debugserver_client_receive_with_timeout_1;
  return_value_debugserver_client_receive_with_timeout_1=debugserver_client_receive_with_timeout(client, data, size, received, (unsigned int)1000);
  return return_value_debugserver_client_receive_with_timeout_1;
}

// debugserver_client_receive_internal_check
// file debugserver.c line 346
static signed int debugserver_client_receive_internal_check(struct debugserver_client_private *client, char *received_char)
{
  enum anonymous_51 res = (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
  signed int did_receive_char = 0;
  char buffer = (char)0;
  unsigned int bytes = (unsigned int)0;
  res=debugserver_client_receive_with_timeout(client, &buffer, (unsigned int)sizeof(char) /*1ul*/ , &bytes, (unsigned int)1000);
  _Bool tmp_if_expr_2;
  if((signed int)res == DEBUGSERVER_E_SUCCESS)
    tmp_if_expr_2 = (signed int)received_char[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int return_value_memcmp_1;
    return_value_memcmp_1=memcmp((const void *)&buffer, (const void *)received_char, sizeof(char) /*1ul*/ );
    if(return_value_memcmp_1 == 0)
      did_receive_char = 1;

  }

  else
    did_receive_char = 0;
  if(did_receive_char == 0)
    memcpy((void *)received_char, (const void *)&buffer, sizeof(char) /*1ul*/ );

  return did_receive_char;
}

// debugserver_client_receive_response
// file debugserver.c line 370
enum anonymous_51 debugserver_client_receive_response(struct debugserver_client_private *client, char **response)
{
  enum anonymous_51 res = (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
  signed int should_receive = 1;
  signed int skip_prefix = 0;
  char *command_prefix;
  command_prefix=strdup("_");
  char *buffer = (char *)(void *)0;
  unsigned int buffer_size = (unsigned int)0;
  if(!(response == ((char **)NULL)))
    *response = (char *)(void *)0;

  if(client->noack_mode == 0)
  {
    char ack[2l] = { (char)43, (char)0 };
    should_receive=debugserver_client_receive_internal_check(client, ack);
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp(ack, command_prefix, sizeof(char) /*1ul*/ );
    if(return_value_strncmp_1 == 0)
    {
      should_receive = 1;
      skip_prefix = 1;
      buffer=strdup(command_prefix);
      buffer_size = buffer_size + (unsigned int)sizeof(char) /*1ul*/ ;
    }

  }

  if(skip_prefix == 0 && !(should_receive == 0))
  {
    should_receive=debugserver_client_receive_internal_check(client, command_prefix);
    if(!(should_receive == 0))
    {
      if(!(buffer == ((char *)NULL)))
        memcpy((void *)buffer, (const void *)command_prefix, sizeof(char) /*1ul*/ );

      else
      {
        buffer=strdup(command_prefix);
        buffer_size = buffer_size + (unsigned int)sizeof(char) /*1ul*/ ;
      }
    }

  }

  if(!(should_receive == 0))
  {
    unsigned int checksum_length = (unsigned int)0x3;
    signed int receiving_checksum_response = 0;
    while(checksum_length >= 1u)
    {
      char data[2l] = { (char)35, (char)0 };
      signed int return_value_debugserver_client_receive_internal_check_2;
      return_value_debugserver_client_receive_internal_check_2=debugserver_client_receive_internal_check(client, data);
      if(!(return_value_debugserver_client_receive_internal_check_2 == 0))
        receiving_checksum_response = 1;

      if(!(receiving_checksum_response == 0))
        checksum_length = checksum_length - 1u;

      char *newbuffer;
      newbuffer=string_concat(buffer, (const void *)data, (void *)0);
      buffer_size = buffer_size + (unsigned int)sizeof(char) /*1ul*/ ;
      free((void *)buffer);
      buffer = (char *)(void *)0;
      buffer = newbuffer;
      newbuffer = (char *)(void *)0;
    }
    signed int valid_response;
    valid_response=debugserver_response_is_checksum_valid(buffer, buffer_size);
    if(!(valid_response == 0))
    {
      if(!(response == ((char **)NULL)))
      {
        unsigned int response_size = (unsigned int)(sizeof(char) /*1ul*/  * (unsigned long int)((buffer_size - (unsigned int)0x3) - (unsigned int)1));
        void *return_value_malloc_3;
        return_value_malloc_3=malloc((unsigned long int)(response_size + (unsigned int)1));
        *response = (char *)return_value_malloc_3;
        memcpy((void *)*response, (const void *)(buffer + (signed long int)1), (unsigned long int)response_size);
        (*response)[(signed long int)response_size] = (char)0;
      }

      if(client->noack_mode == 0)
        debugserver_client_send_ack(client);

    }

    else
    {
      res = (enum anonymous_51)DEBUGSERVER_E_RESPONSE_ERROR;
      if(client->noack_mode == 0)
        debugserver_client_send_noack(client);

    }
  }

  if(!(buffer == ((char *)NULL)))
    free((void *)buffer);

  if(!(command_prefix == ((char *)NULL)))
    free((void *)command_prefix);

  return res;
}

// debugserver_client_receive_with_timeout
// file debugserver.c line 131
enum anonymous_51 debugserver_client_receive_with_timeout(struct debugserver_client_private *client, char *data, unsigned int size, unsigned int *received, unsigned int timeout)
{
  enum anonymous_51 res = (enum anonymous_51)DEBUGSERVER_E_UNKNOWN_ERROR;
  signed int bytes = 0;
  if(data == ((char *)NULL) || client == ((struct debugserver_client_private *)NULL) || size == 0u)
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    enum anonymous_20 return_value_service_receive_with_timeout_1;
    return_value_service_receive_with_timeout_1=service_receive_with_timeout(client->parent, data, size, (unsigned int *)&bytes, timeout);
    res=debugserver_error(return_value_service_receive_with_timeout_1);
    if(!(received == ((unsigned int *)NULL)))
      *received = (unsigned int)bytes;

    return res;
  }
}

// debugserver_client_send
// file debugserver.c line 110
enum anonymous_51 debugserver_client_send(struct debugserver_client_private *client, const char *data, unsigned int size, unsigned int *sent)
{
  enum anonymous_51 res = (enum anonymous_51)DEBUGSERVER_E_UNKNOWN_ERROR;
  signed int bytes = 0;
  if(data == ((const char *)NULL) || client == ((struct debugserver_client_private *)NULL) || size == 0u)
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    enum anonymous_20 return_value_service_send_1;
    return_value_service_send_1=service_send(client->parent, data, size, (unsigned int *)&bytes);
    res=debugserver_error(return_value_service_send_1);
    if(!(sent == ((unsigned int *)NULL)))
      *sent = (unsigned int)bytes;

    return res;
  }
}

// debugserver_client_send_ack
// file debugserver.c line 322
static enum anonymous_51 debugserver_client_send_ack(struct debugserver_client_private *client)
{
  enum anonymous_51 return_value_debugserver_client_send_1;
  return_value_debugserver_client_send_1=debugserver_client_send(client, "+", (unsigned int)sizeof(char) /*1ul*/ , (unsigned int *)(void *)0);
  return return_value_debugserver_client_send_1;
}

// debugserver_client_send_command
// file debugserver.c line 472
enum anonymous_51 debugserver_client_send_command(struct debugserver_client_private *client, struct debugserver_command_private *command, char **response)
{
  enum anonymous_51 res = (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
  signed int i;
  unsigned int bytes = (unsigned int)0;
  char *send_buffer = (char *)(void *)0;
  unsigned int send_buffer_size = (unsigned int)0;
  char *command_arguments = (char *)(void *)0;
  char *tmp = (char *)(void *)0;
  char *newtmp = (char *)(void *)0;
  i = 0;
  for( ; !(i >= command->argc); i = i + 1)
    if(tmp == ((char *)NULL))
      tmp=strdup(command->argv[(signed long int)i]);

    else
    {
      newtmp=string_concat(tmp, command->argv[(signed long int)i], (void *)0);
      free((void *)tmp);
      tmp = newtmp;
    }
  command_arguments = tmp;
  tmp = (char *)(void *)0;
  debugserver_format_command("_", command->name, command_arguments, (signed int)!(client->noack_mode != 0), &send_buffer, &send_buffer_size);
  res=debugserver_client_send(client, send_buffer, send_buffer_size, &bytes);
  signed int return_value_strncmp_1;
  if((signed int)res == DEBUGSERVER_E_SUCCESS)
  {
    res=debugserver_client_receive_response(client, response);
    if((signed int)res == DEBUGSERVER_E_SUCCESS)
    {
      return_value_strncmp_1=strncmp(command->name, "QStartNoAckMode", (unsigned long int)16);
      if(return_value_strncmp_1 == 0)
        debugserver_client_set_ack_mode(client, 0);

    }

  }


cleanup:
  ;
  if(!(command_arguments == ((char *)NULL)))
    free((void *)command_arguments);

  if(!(send_buffer == ((char *)NULL)))
    free((void *)send_buffer);

  return res;
}

// debugserver_client_send_noack
// file debugserver.c line 328
static enum anonymous_51 debugserver_client_send_noack(struct debugserver_client_private *client)
{
  enum anonymous_51 return_value_debugserver_client_send_1;
  return_value_debugserver_client_send_1=debugserver_client_send(client, "-", (unsigned int)sizeof(char) /*1ul*/ , (unsigned int *)(void *)0);
  return return_value_debugserver_client_send_1;
}

// debugserver_client_set_ack_mode
// file debugserver.c line 334
enum anonymous_51 debugserver_client_set_ack_mode(struct debugserver_client_private *client, signed int enabled)
{
  if(client == ((struct debugserver_client_private *)NULL))
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    client->noack_mode = enabled == 0 ? 1 : 0;
    return (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
  }
}

// debugserver_client_set_argv
// file debugserver.c line 557
enum anonymous_51 debugserver_client_set_argv(struct debugserver_client_private *client, signed int argc, char **argv, char **response)
{
  char *tmp_post_7;
  char *tmp_post_8;
  if(client == ((struct debugserver_client_private *)NULL) || argc == 0)
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    enum anonymous_51 result = (enum anonymous_51)DEBUGSERVER_E_UNKNOWN_ERROR;
    char *pkt = (char *)(void *)0;
    signed int pkt_len = 0;
    signed int i = 0;
    while(!(i >= argc))
    {
      if(argv == ((char **)NULL))
        break;

      if(argv[(signed long int)i] == ((char *)NULL))
        break;

      char *prefix = (char *)(void *)0;
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(argv[(signed long int)i]);
      asprintf(&prefix, ",%d,%d,", (signed int)return_value_strlen_1 * 2, i);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(prefix);
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(argv[(signed long int)i]);
      pkt_len = pkt_len + (signed int)return_value_strlen_2 + (signed int)return_value_strlen_3 * 2;
      free((void *)prefix);
      i = i + 1;
    }
    void *return_value_malloc_4;
    return_value_malloc_4=malloc((unsigned long int)(pkt_len + 1));
    pkt = (char *)return_value_malloc_4;
    memset((void *)pkt, 0, (unsigned long int)(pkt_len + 1));
    char *pktp = pkt;
    i = 0;
    while(!(i >= argc))
    {
      if(argv == ((char **)NULL))
        break;

      if(argv[(signed long int)i] == ((char *)NULL))
        break;

      char *debugserver_client_set_argv__1__2__prefix = (char *)(void *)0;
      char *m = (char *)(void *)0;
      signed int arg_len;
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(argv[(signed long int)i]);
      arg_len = (signed int)return_value_strlen_5;
      signed int arg_hexlen = arg_len * 2;
      asprintf(&debugserver_client_set_argv__1__2__prefix, ",%d,%d,", arg_hexlen, i);
      void *return_value_malloc_6;
      return_value_malloc_6=malloc((unsigned long int)arg_hexlen);
      m = (char *)return_value_malloc_6;
      char *p = m;
      char *q = (char *)argv[(signed long int)i];
      for( ; !(*q == 0); q = q + 1l)
      {
        tmp_post_7 = p;
        p = p + 1l;
        *tmp_post_7=debugserver_int2hex((signed int)*q >> 4);
        tmp_post_8 = p;
        p = p + 1l;
        *tmp_post_8=debugserver_int2hex((signed int)*q & 0xf);
      }
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(debugserver_client_set_argv__1__2__prefix);
      memcpy((void *)pktp, (const void *)debugserver_client_set_argv__1__2__prefix, return_value_strlen_9);
      unsigned long int return_value_strlen_10;
      return_value_strlen_10=strlen(debugserver_client_set_argv__1__2__prefix);
      pktp = pktp + (signed long int)return_value_strlen_10;
      memcpy((void *)pktp, (const void *)m, (unsigned long int)arg_hexlen);
      pktp = pktp + (signed long int)arg_hexlen;
      free((void *)debugserver_client_set_argv__1__2__prefix);
      free((void *)m);
      i = i + 1;
    }
    pkt[(signed long int)0] = (char)65;
    struct debugserver_command_private *command = (struct debugserver_command_private *)(void *)0;
    debugserver_command_new(pkt, 0, (char **)(void *)0, &command);
    result=debugserver_client_send_command(client, command, response);
    debugserver_command_free(command);
    if(!(pkt == ((char *)NULL)))
      free((void *)pkt);

    return result;
  }
}

// debugserver_client_set_environment_hex_encoded
// file debugserver.c line 538
enum anonymous_51 debugserver_client_set_environment_hex_encoded(struct debugserver_client_private *client, const char *env, char **response)
{
  if(env == ((const char *)NULL) || client == ((struct debugserver_client_private *)NULL))
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    enum anonymous_51 result = (enum anonymous_51)DEBUGSERVER_E_UNKNOWN_ERROR;
    char *env_tmp;
    env_tmp=strdup(env);
    char *env_arg[2l] = { env_tmp, (char *)(void *)0 };
    struct debugserver_command_private *command = (struct debugserver_command_private *)(void *)0;
    debugserver_command_new("QEnvironmentHexEncoded:", 1, env_arg, &command);
    result=debugserver_client_send_command(client, command, response);
    debugserver_command_free(command);
    free((void *)env_tmp);
    return result;
  }
}

// debugserver_client_start_service
// file debugserver.c line 91
enum anonymous_51 debugserver_client_start_service(struct idevice_private *device, struct debugserver_client_private **client, const char *label)
{
  enum anonymous_51 err = (enum anonymous_51)DEBUGSERVER_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.debugserver", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))debugserver_client_new, (signed int *)&err);
  return err;
}

// debugserver_command_free
// file debugserver.c line 181
enum anonymous_51 debugserver_command_free(struct debugserver_command_private *command)
{
  signed int i;
  enum anonymous_51 res = (enum anonymous_51)DEBUGSERVER_E_UNKNOWN_ERROR;
  if(command == ((struct debugserver_command_private *)NULL))
    return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;

  else
  {
    if(!(command == ((struct debugserver_command_private *)NULL)))
    {
      if(!(command->name == ((char *)NULL)))
        free((void *)command->name);

      if(!(command->argv == ((char **)NULL)))
      {
        if(!(command->argc == 0))
        {
          i = 0;
          for( ; !(i >= command->argc); i = i + 1)
            free((void *)command->argv[(signed long int)i]);
          free((void *)command->argv);
        }

      }

      free((void *)command);
      res = (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
    }

    return res;
  }
}

// debugserver_command_new
// file debugserver.c line 156
enum anonymous_51 debugserver_command_new(const char *name, signed int argc, char **argv, struct debugserver_command_private **command)
{
  signed int i;
  struct debugserver_command_private *tmp;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct debugserver_command_private) /*24ul*/ );
  tmp = (struct debugserver_command_private *)return_value_malloc_1;
  tmp->name=strdup(name);
  tmp->argc = argc;
  tmp->argv = (char **)(void *)0;
  if(argc >= 1)
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(char *) /*8ul*/  * (unsigned long int)(argc + 2));
    tmp->argv = (char **)return_value_malloc_2;
    i = 0;
    for( ; !(i >= argc); i = i + 1)
      tmp->argv[(signed long int)i]=strdup(argv[(signed long int)i]);
    tmp->argv[(signed long int)(i + 1)] = (char *)(void *)0;
  }

  *command = tmp;
  return (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
}

// debugserver_decode_string
// file debugserver.c line 275
void debugserver_decode_string(const char *encoded_buffer, unsigned long int encoded_length, char **buffer)
{
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(char) /*1ul*/  * (encoded_length / (unsigned long int)2 + (unsigned long int)1));
  *buffer = (char *)return_value_malloc_1;
  char *t = *buffer;
  const char *f = encoded_buffer;
  const char *fend = f + (signed long int)encoded_length;
  char *tmp_post_2;
  while(!(f >= fend))
  {
    tmp_post_2 = t;
    t = t + 1l;
    signed int return_value_debugserver_hex2int_3;
    return_value_debugserver_hex2int_3=debugserver_hex2int(*f);
    signed int return_value_debugserver_hex2int_4;
    return_value_debugserver_hex2int_4=debugserver_hex2int(f[(signed long int)1]);
    *tmp_post_2 = (char)(return_value_debugserver_hex2int_3 << 4 | return_value_debugserver_hex2int_4);
    f = f + (signed long int)2;
  }
  *t = (char)0;
}

// debugserver_encode_string
// file debugserver.c line 259
void debugserver_encode_string(const char *buffer, char **encoded_buffer, unsigned int *encoded_length)
{
  unsigned int position;
  unsigned int index;
  unsigned int length;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(buffer);
  length = (unsigned int)return_value_strlen_1;
  *encoded_length = (unsigned int)2 * length + (unsigned int)0x3 + (unsigned int)1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(char) /*1ul*/  * (unsigned long int)*encoded_length);
  *encoded_buffer = (char *)return_value_malloc_2;
  memset((void *)*encoded_buffer, 0, (unsigned long int)*encoded_length);
  position = (unsigned int)0;
  index = (unsigned int)0;
  for( ; !(index >= length); index = index + 1u)
  {
    position = (unsigned int)((unsigned long int)index * (unsigned long int)2 * sizeof(char) /*1ul*/ );
    (*encoded_buffer)[(signed long int)position]=debugserver_int2hex((signed int)buffer[(signed long int)index] >> 0x4 & 0xf);
    (*encoded_buffer)[(signed long int)(position + (unsigned int)1)]=debugserver_int2hex((signed int)buffer[(signed long int)index] & 0xf);
  }
}

// debugserver_error
// file debugserver.c line 46
static enum anonymous_51 debugserver_error(enum anonymous_20 err)
{
  switch((signed int)err)
  {
    case SERVICE_E_SUCCESS:
      return (enum anonymous_51)DEBUGSERVER_E_SUCCESS;
    case SERVICE_E_INVALID_ARG:
      return (enum anonymous_51)DEBUGSERVER_E_INVALID_ARG;
    case SERVICE_E_MUX_ERROR:
      return (enum anonymous_51)DEBUGSERVER_E_MUX_ERROR;
    case SERVICE_E_SSL_ERROR:
      return (enum anonymous_51)DEBUGSERVER_E_SSL_ERROR;
    default:
      return (enum anonymous_51)DEBUGSERVER_E_UNKNOWN_ERROR;
  }
}

// debugserver_format_command
// file debugserver.c line 288
static void debugserver_format_command(const char *prefix, const char *command, const char *arguments, signed int calculate_checksum, char **buffer, unsigned int *size)
{
  char checksum_hash[4l] = { (char)35, (char)48, (char)48, (char)0 };
  char *encoded = (char *)(void *)0;
  unsigned int encoded_length = (unsigned int)0;
  if(!(arguments == ((const char *)NULL)))
    debugserver_encode_string(arguments, &encoded, &encoded_length);

  else
    encoded = (char *)(void *)0;
  char *encoded_command;
  encoded_command=string_concat(command, encoded, (void *)0);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(encoded_command);
  encoded_length = (unsigned int)return_value_strlen_1;
  if(!(calculate_checksum == 0))
  {
    unsigned int checksum;
    checksum=debugserver_get_checksum_for_buffer(encoded_command, encoded_length);
    checksum_hash[(signed long int)1]=debugserver_int2hex((signed int)(checksum >> 0x4 & (unsigned int)0xf));
    checksum_hash[(signed long int)2]=debugserver_int2hex((signed int)(checksum & (unsigned int)0xf));
  }

  *buffer=string_concat(prefix, encoded_command, (const void *)checksum_hash, (void *)0);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(prefix);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(encoded_command);
  *size = (unsigned int)(return_value_strlen_2 + return_value_strlen_3 + (unsigned long int)0x3);
  if(!(encoded_command == ((char *)NULL)))
    free((void *)encoded_command);

  if(!(encoded == ((char *)NULL)))
    free((void *)encoded);

}

// debugserver_get_checksum_for_buffer
// file debugserver.c line 228
static unsigned int debugserver_get_checksum_for_buffer(const char *buffer, unsigned int size)
{
  unsigned int checksum = (unsigned int)0;
  unsigned int i = (unsigned int)0;
  for( ; !(i >= size); i = i + 1u)
    checksum = checksum + (unsigned int)buffer[(signed long int)i];
  return checksum;
}

// debugserver_hex2int
// file debugserver.c line 205
static signed int debugserver_hex2int(char c)
{
  if((signed int)c >= 48 && !((signed int)c >= 58))
    return (signed int)c - 48;

  else
    if((signed int)c >= 97 && !((signed int)c >= 103))
      return (10 + (signed int)c) - 97;

    else
      if((signed int)c >= 65 && !((signed int)c >= 71))
        return (10 + (signed int)c) - 65;

      else
        return (signed int)c;
}

// debugserver_int2hex
// file debugserver.c line 217
static char debugserver_int2hex(signed int x)
{
  const char *hexchars = "0123456789ABCDEF";
  return hexchars[(signed long int)x];
}

// debugserver_response_is_checksum_valid
// file debugserver.c line 240
static signed int debugserver_response_is_checksum_valid(const char *response, unsigned int size)
{
  unsigned int checksum = (unsigned int)0;
  if(size + 4294967293u + 4294967295u >= 1u)
    checksum=debugserver_get_checksum_for_buffer(&response[(signed long int)1], (size - (unsigned int)0x3) - (unsigned int)1);

  signed int return_value_debugserver_hex2int_1;
  return_value_debugserver_hex2int_1=debugserver_hex2int(response[(signed long int)(size - (unsigned int)2)]);
  if(!((unsigned int)return_value_debugserver_hex2int_1 == (15u & checksum >> 0x4)))
    return 0;

  else
  {
    signed int return_value_debugserver_hex2int_2;
    return_value_debugserver_hex2int_2=debugserver_hex2int(response[(signed long int)(size - (unsigned int)1)]);
    if(!((unsigned int)return_value_debugserver_hex2int_2 == (15u & checksum)))
      return 0;

    else
      return 1;
  }
}

// device_link_service_client_free
// file device_link_service.c line 119
signed short int device_link_service_client_free(struct device_link_service_client_private *client)
{
  if(client == ((struct device_link_service_client_private *)NULL))
    return (signed short int)-1;

  else
  {
    enum anonymous_23 return_value_property_list_service_client_free_1;
    return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
    if(!((signed int)return_value_property_list_service_client_free_1 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (signed short int)-256;

    else
    {
      free((void *)client);
      return (signed short int)0;
    }
  }
}

// device_link_service_client_new
// file device_link_service.c line 85
signed short int device_link_service_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct device_link_service_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct device_link_service_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct device_link_service_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (signed short int)-1;

  else
  {
    struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
    enum anonymous_23 return_value_property_list_service_client_new_3;
    return_value_property_list_service_client_new_3=property_list_service_client_new(device, service, &plistclient);
    if(!((signed int)return_value_property_list_service_client_new_3 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (signed short int)-3;

    else
    {
      struct device_link_service_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct device_link_service_client_private) /*8ul*/ );
      client_loc = (struct device_link_service_client_private *)return_value_malloc_4;
      client_loc->parent = plistclient;
      if(!(service->ssl_enabled == 0))
        property_list_service_enable_ssl(client_loc->parent);

      *client = client_loc;
      return (signed short int)0;
    }
  }
}

// device_link_service_disconnect
// file device_link_service.c line 249
signed short int device_link_service_disconnect(struct device_link_service_client_private *client, const char *message)
{
  void *return_value_plist_new_string_2;
  void *return_value_plist_new_string_3;
  if(client == ((struct device_link_service_client_private *)NULL))
    return (signed short int)-1;

  else
  {
    void *array;
    array=plist_new_array();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("DLMessageDisconnect");
    plist_array_append_item(array, return_value_plist_new_string_1);
    if(!(message == ((const char *)NULL)))
    {
      return_value_plist_new_string_2=plist_new_string(message);
      plist_array_append_item(array, return_value_plist_new_string_2);
    }

    else
    {
      return_value_plist_new_string_3=plist_new_string("___EmptyParameterString___");
      plist_array_append_item(array, return_value_plist_new_string_3);
    }
    signed short int err = (signed short int)0;
    enum anonymous_23 return_value_property_list_service_send_binary_plist_4;
    return_value_property_list_service_send_binary_plist_4=property_list_service_send_binary_plist(client->parent, array);
    if(!((signed int)return_value_property_list_service_send_binary_plist_4 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      err = (signed short int)-3;

    plist_free(array);
    return err;
  }
}

// device_link_service_get_message
// file device_link_service.c line 40
static signed int device_link_service_get_message(void *dl_msg, char **message)
{
  void *cmd = (void *)0;
  char *cmd_str = (char *)(void *)0;
  enum anonymous_11 return_value_plist_get_node_type_1;
  return_value_plist_get_node_type_1=plist_get_node_type(dl_msg);
  _Bool tmp_if_expr_3;
  unsigned int return_value_plist_array_get_size_2;
  if(!((signed int)return_value_plist_get_node_type_1 == PLIST_ARRAY))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_plist_array_get_size_2=plist_array_get_size(dl_msg);
    tmp_if_expr_3 = return_value_plist_array_get_size_2 < (unsigned int)1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  enum anonymous_11 return_value_plist_get_node_type_4;
  _Bool tmp_if_expr_8;
  signed int return_value_strncmp_7;
  if(tmp_if_expr_3)
    return 0;

  else
  {
    cmd=plist_array_get_item(dl_msg, (unsigned int)0);
    if(cmd == NULL)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_plist_get_node_type_4=plist_get_node_type(cmd);
      tmp_if_expr_5 = (signed int)return_value_plist_get_node_type_4 != PLIST_STRING ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
      return 0;

    else
    {
      plist_get_string_val(cmd, &cmd_str);
      if(cmd_str == ((char *)NULL))
        return 0;

      else
      {
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(cmd_str);
        if(!(return_value_strlen_6 >= 9ul))
          tmp_if_expr_8 = (_Bool)1;

        else
        {
          return_value_strncmp_7=strncmp(cmd_str, "DL", (unsigned long int)2);
          tmp_if_expr_8 = return_value_strncmp_7 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_8)
        {
          free((void *)cmd_str);
          return 0;
        }

        else
        {
          if(!(message == ((char **)NULL)))
            *message = cmd_str;

          return 1;
        }
      }
    }
  }
}

// device_link_service_receive
// file device_link_service.c line 452
signed short int device_link_service_receive(struct device_link_service_client_private *client, void **plist)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(plist == ((void **)NULL) || client == ((struct device_link_service_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(plist == ((void **)NULL)))
      tmp_if_expr_1 = *plist != NULL ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (signed short int)-1;

  else
  {
    enum anonymous_23 return_value_property_list_service_receive_plist_3;
    return_value_property_list_service_receive_plist_3=property_list_service_receive_plist(client->parent, plist);
    if(!((signed int)return_value_property_list_service_receive_plist_3 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (signed short int)-3;

    else
      return (signed short int)0;
  }
}

// device_link_service_receive_message
// file device_link_service.c line 345
signed short int device_link_service_receive_message(struct device_link_service_client_private *client, void **msg_plist, char **dlmessage)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct device_link_service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(msg_plist == ((void **)NULL) || tmp_if_expr_1)
    return (signed short int)-1;

  else
  {
    *msg_plist = (void *)0;
    enum anonymous_23 return_value_property_list_service_receive_plist_2;
    return_value_property_list_service_receive_plist_2=property_list_service_receive_plist(client->parent, msg_plist);
    if(!((signed int)return_value_property_list_service_receive_plist_2 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (signed short int)-3;

    else
    {
      signed int return_value_device_link_service_get_message_3;
      return_value_device_link_service_get_message_3=device_link_service_get_message(*msg_plist, dlmessage);
      if(return_value_device_link_service_get_message_3 == 0)
        return (signed short int)-2;

      else
        return (signed short int)0;
    }
  }
}

// device_link_service_receive_process_message
// file device_link_service.c line 375
signed short int device_link_service_receive_process_message(struct device_link_service_client_private *client, void **message)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct device_link_service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  unsigned int return_value_plist_array_get_size_5;
  void *msg_loc;
  if(message == ((void **)NULL) || tmp_if_expr_1)
    return (signed short int)-1;

  else
  {
    void *pmsg = (void *)0;
    enum anonymous_23 return_value_property_list_service_receive_plist_2;
    return_value_property_list_service_receive_plist_2=property_list_service_receive_plist(client->parent, &pmsg);
    if(!((signed int)return_value_property_list_service_receive_plist_2 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (signed short int)-3;

    else
    {
      signed short int err = (signed short int)-256;
      char *msg = (char *)(void *)0;
      device_link_service_get_message(pmsg, &msg);
      if(msg == ((char *)NULL))
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        return_value_strcmp_3=strcmp(msg, "DLMessageProcessMessage");
        tmp_if_expr_4 = return_value_strcmp_3 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_4)
        err = (signed short int)-2;

      else
      {
        return_value_plist_array_get_size_5=plist_array_get_size(pmsg);
        if(!(return_value_plist_array_get_size_5 == 2u))
          err = (signed short int)-2;

        else
        {
          msg_loc=plist_array_get_item(pmsg, (unsigned int)1);
          if(!(msg_loc == NULL))
          {
            *message=plist_copy(msg_loc);
            err = (signed short int)0;
          }

          else
          {
            *message = (void *)0;
            err = (signed short int)-2;
          }
        }
      }

    leave:
      ;
      if(!(msg == ((char *)NULL)))
        free((void *)msg);

      if(!(pmsg == NULL))
        plist_free(pmsg);

      return err;
    }
  }
}

// device_link_service_send
// file device_link_service.c line 430
signed short int device_link_service_send(struct device_link_service_client_private *client, void *plist)
{
  if(plist == NULL || client == ((struct device_link_service_client_private *)NULL))
    return (signed short int)-1;

  else
  {
    enum anonymous_23 return_value_property_list_service_send_binary_plist_1;
    return_value_property_list_service_send_binary_plist_1=property_list_service_send_binary_plist(client->parent, plist);
    if(!((signed int)return_value_property_list_service_send_binary_plist_1 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (signed short int)-3;

    else
      return (signed short int)0;
  }
}

// device_link_service_send_ping
// file device_link_service.c line 280
signed short int device_link_service_send_ping(struct device_link_service_client_private *client, const char *message)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct device_link_service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(message == ((const char *)NULL) || tmp_if_expr_1)
    return (signed short int)-1;

  else
  {
    void *array;
    array=plist_new_array();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("DLMessagePing");
    plist_array_append_item(array, return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(message);
    plist_array_append_item(array, return_value_plist_new_string_3);
    signed short int err = (signed short int)0;
    enum anonymous_23 return_value_property_list_service_send_binary_plist_4;
    return_value_property_list_service_send_binary_plist_4=property_list_service_send_binary_plist(client->parent, array);
    if(!((signed int)return_value_property_list_service_send_binary_plist_4 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      err = (signed short int)-3;

    plist_free(array);
    return err;
  }
}

// device_link_service_send_process_message
// file device_link_service.c line 308
signed short int device_link_service_send_process_message(struct device_link_service_client_private *client, void *message)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct device_link_service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(message == NULL || tmp_if_expr_1)
    return (signed short int)-1;

  else
  {
    enum anonymous_11 return_value_plist_get_node_type_2;
    return_value_plist_get_node_type_2=plist_get_node_type(message);
    if(!((signed int)return_value_plist_get_node_type_2 == PLIST_DICT))
      return (signed short int)-1;

    else
    {
      void *array;
      array=plist_new_array();
      void *return_value_plist_new_string_3;
      return_value_plist_new_string_3=plist_new_string("DLMessageProcessMessage");
      plist_array_append_item(array, return_value_plist_new_string_3);
      void *return_value_plist_copy_4;
      return_value_plist_copy_4=plist_copy(message);
      plist_array_append_item(array, return_value_plist_copy_4);
      signed short int err = (signed short int)0;
      enum anonymous_23 return_value_property_list_service_send_binary_plist_5;
      return_value_property_list_service_send_binary_plist_5=property_list_service_send_binary_plist(client->parent, array);
      if(!((signed int)return_value_property_list_service_send_binary_plist_5 == PROPERTY_LIST_SERVICE_E_SUCCESS))
        err = (signed short int)-3;

      plist_free(array);
      return err;
    }
  }
}

// device_link_service_version_exchange
// file device_link_service.c line 148
signed short int device_link_service_version_exchange(struct device_link_service_client_private *client, unsigned long int version_major, unsigned long int version_minor)
{
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_2;
  unsigned int return_value_plist_array_get_size_4;
  void *maj;
  void *min;
  unsigned long int vmajor;
  unsigned long int vminor;
  void *return_value_plist_new_string_5;
  void *return_value_plist_new_string_6;
  void *return_value_plist_new_uint_7;
  enum anonymous_23 return_value_property_list_service_send_binary_plist_8;
  enum anonymous_23 return_value_property_list_service_receive_plist_9;
  _Bool tmp_if_expr_11;
  signed int return_value_strcmp_10;
  if(client == ((struct device_link_service_client_private *)NULL))
    return (signed short int)-1;

  else
  {
    signed short int err = (signed short int)-256;
    void *array = (void *)0;
    char *msg = (char *)(void *)0;
    enum anonymous_23 return_value_property_list_service_receive_plist_1;
    return_value_property_list_service_receive_plist_1=property_list_service_receive_plist(client->parent, &array);
    if(!((signed int)return_value_property_list_service_receive_plist_1 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      err = (signed short int)-3;

    else
    {
      device_link_service_get_message(array, &msg);
      if(msg == ((char *)NULL))
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_strcmp_2=strcmp(msg, "DLMessageVersionExchange");
        tmp_if_expr_3 = return_value_strcmp_2 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
        err = (signed short int)-2;

      else
      {
        free((void *)msg);
        msg = (char *)(void *)0;
        return_value_plist_array_get_size_4=plist_array_get_size(array);
        if(!(return_value_plist_array_get_size_4 >= 3u))
          err = (signed short int)-2;

        else
        {
          maj=plist_array_get_item(array, (unsigned int)1);
          min=plist_array_get_item(array, (unsigned int)2);
          vmajor = (unsigned long int)0;
          vminor = (unsigned long int)0;
          if(!(maj == NULL))
            plist_get_uint_val(maj, &vmajor);

          if(!(min == NULL))
            plist_get_uint_val(min, &vminor);

          if(!(version_major >= vmajor))
          {
            err = (signed short int)-4;
            goto leave;
          }

          else
            if(vmajor == version_major && !(version_minor >= vminor))
            {
              err = (signed short int)-4;
              goto leave;
            }

          plist_free(array);
          array=plist_new_array();
          return_value_plist_new_string_5=plist_new_string("DLMessageVersionExchange");
          plist_array_append_item(array, return_value_plist_new_string_5);
          return_value_plist_new_string_6=plist_new_string("DLVersionsOk");
          plist_array_append_item(array, return_value_plist_new_string_6);
          return_value_plist_new_uint_7=plist_new_uint(version_major);
          plist_array_append_item(array, return_value_plist_new_uint_7);
          return_value_property_list_service_send_binary_plist_8=property_list_service_send_binary_plist(client->parent, array);
          if(!((signed int)return_value_property_list_service_send_binary_plist_8 == PROPERTY_LIST_SERVICE_E_SUCCESS))
            err = (signed short int)-3;

          else
          {
            plist_free(array);
            array = (void *)0;
            return_value_property_list_service_receive_plist_9=property_list_service_receive_plist(client->parent, &array);
            if(!((signed int)return_value_property_list_service_receive_plist_9 == PROPERTY_LIST_SERVICE_E_SUCCESS))
              err = (signed short int)-3;

            else
            {
              device_link_service_get_message(array, &msg);
              if(msg == ((char *)NULL))
                tmp_if_expr_11 = (_Bool)1;

              else
              {
                return_value_strcmp_10=strcmp(msg, "DLMessageDeviceReady");
                tmp_if_expr_11 = return_value_strcmp_10 != 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_11)
                err = (signed short int)-2;

              else
                err = (signed short int)0;
            }
          }
        }
      }
    }

  leave:
    ;
    if(!(msg == ((char *)NULL)))
      free((void *)msg);

    if(!(array == NULL))
      plist_free(array);

    return err;
  }
}

// diagnostics_relay_check_result
// file diagnostics_relay.c line 41
static signed int diagnostics_relay_check_result(void *dict)
{
  signed int ret = -1;
  void *result_node;
  result_node=plist_dict_get_item(dict, "Status");
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(result_node == NULL)
    return ret;

  else
  {
    enum anonymous_11 result_type;
    result_type=plist_get_node_type(result_node);
    if((signed int)result_type == PLIST_STRING)
    {
      char *result_value = (char *)(void *)0;
      plist_get_string_val(result_node, &result_value);
      if(!(result_value == ((char *)NULL)))
      {
        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(result_value, "Success");
        if(return_value_strcmp_3 == 0)
          ret = 0;

        else
        {
          return_value_strcmp_2=strcmp(result_value, "Failure");
          if(return_value_strcmp_2 == 0)
            ret = 1;

          else
          {
            return_value_strcmp_1=strcmp(result_value, "UnknownRequest");
            if(return_value_strcmp_1 == 0)
              ret = 2;

          }
        }
      }

      if(!(result_value == ((char *)NULL)))
        free((void *)result_value);

    }

    return ret;
  }
}

// diagnostics_relay_client_free
// file diagnostics_relay.c line 99
enum anonymous_49 diagnostics_relay_client_free(struct diagnostics_relay_client_private *client)
{
  if(client == ((struct diagnostics_relay_client_private *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_23 return_value_property_list_service_client_free_1;
    return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
    if(!((signed int)return_value_property_list_service_client_free_1 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;

    else
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;
  }
}

// diagnostics_relay_client_new
// file diagnostics_relay.c line 72
enum anonymous_49 diagnostics_relay_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct diagnostics_relay_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct diagnostics_relay_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct diagnostics_relay_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
    enum anonymous_23 return_value_property_list_service_client_new_3;
    return_value_property_list_service_client_new_3=property_list_service_client_new(device, service, &plistclient);
    if(!((signed int)return_value_property_list_service_client_new_3 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_MUX_ERROR;

    else
    {
      struct diagnostics_relay_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct diagnostics_relay_client_private) /*8ul*/ );
      client_loc = (struct diagnostics_relay_client_private *)return_value_malloc_4;
      client_loc->parent = plistclient;
      *client = client_loc;
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;
    }
  }
}

// diagnostics_relay_client_start_service
// file diagnostics_relay.c line 92
enum anonymous_49 diagnostics_relay_client_start_service(struct idevice_private *device, struct diagnostics_relay_client_private **client, const char *label)
{
  enum anonymous_49 err = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.diagnostics_relay", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))diagnostics_relay_client_new, (signed int *)&err);
  return err;
}

// diagnostics_relay_goodbye
// file diagnostics_relay.c line 165
enum anonymous_49 diagnostics_relay_goodbye(struct diagnostics_relay_client_private *client)
{
  if(client == ((struct diagnostics_relay_client_private *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("Goodbye");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=diagnostics_relay_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=diagnostics_relay_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    else
    {
      signed int check;
      check=diagnostics_relay_check_result(dict);
      if(check == 0)
        ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;

      else
        if(check == 2)
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST;

        else
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
      plist_free(dict);
      dict = (void *)0;
      return ret;
    }
  }
}

// diagnostics_relay_query_ioregistry_entry
// file diagnostics_relay.c line 368
enum anonymous_49 diagnostics_relay_query_ioregistry_entry(struct diagnostics_relay_client_private *client, const char *name, const char *class, void **result)
{
  void *return_value_plist_new_string_1;
  void *return_value_plist_new_string_2;
  if(result == ((void **)NULL) || client == ((struct diagnostics_relay_client_private *)NULL) || class == ((const char *)NULL) && name == ((const char *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    if(!(name == ((const char *)NULL)))
    {
      return_value_plist_new_string_1=plist_new_string(name);
      plist_dict_set_item(dict, "EntryName", return_value_plist_new_string_1);
    }

    if(!(class == ((const char *)NULL)))
    {
      return_value_plist_new_string_2=plist_new_string(class);
      plist_dict_set_item(dict, "EntryClass", return_value_plist_new_string_2);
    }

    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string("IORegistry");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_3);
    ret=diagnostics_relay_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=diagnostics_relay_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    else
    {
      signed int check;
      check=diagnostics_relay_check_result(dict);
      if(check == 0)
        ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;

      else
        if(check == 2)
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST;

        else
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
      if(!((signed int)ret == DIAGNOSTICS_RELAY_E_SUCCESS))
      {
        plist_free(dict);
        return ret;
      }

      else
      {
        void *value_node;
        value_node=plist_dict_get_item(dict, "Diagnostics");
        if(!(value_node == NULL))
          *result=plist_copy(value_node);

        plist_free(dict);
        return ret;
      }
    }
  }
}

// diagnostics_relay_query_ioregistry_plane
// file diagnostics_relay.c line 413
enum anonymous_49 diagnostics_relay_query_ioregistry_plane(struct diagnostics_relay_client_private *client, const char *plane, void **result)
{
  if(result == ((void **)NULL) || plane == ((const char *)NULL) || client == ((struct diagnostics_relay_client_private *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string(plane);
    plist_dict_set_item(dict, "CurrentPlane", return_value_plist_new_string_1);
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("IORegistry");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_2);
    ret=diagnostics_relay_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=diagnostics_relay_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    else
    {
      signed int check;
      check=diagnostics_relay_check_result(dict);
      if(check == 0)
        ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;

      else
        if(check == 2)
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST;

        else
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
      if(!((signed int)ret == DIAGNOSTICS_RELAY_E_SUCCESS))
      {
        plist_free(dict);
        return ret;
      }

      else
      {
        void *value_node;
        value_node=plist_dict_get_item(dict, "Diagnostics");
        if(!(value_node == NULL))
          *result=plist_copy(value_node);

        plist_free(dict);
        return ret;
      }
    }
  }
}

// diagnostics_relay_query_mobilegestalt
// file diagnostics_relay.c line 326
enum anonymous_49 diagnostics_relay_query_mobilegestalt(struct diagnostics_relay_client_private *client, void *keys, void **result)
{
  _Bool tmp_if_expr_2;
  enum anonymous_11 return_value_plist_get_node_type_1;
  if(client == ((struct diagnostics_relay_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_plist_get_node_type_1=plist_get_node_type(keys);
    tmp_if_expr_2 = (signed int)return_value_plist_get_node_type_1 != PLIST_ARRAY ? (_Bool)1 : (_Bool)0;
  }
  if(result == ((void **)NULL) || tmp_if_expr_2)
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_copy_3;
    return_value_plist_copy_3=plist_copy(keys);
    plist_dict_set_item(dict, "MobileGestaltKeys", return_value_plist_copy_3);
    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string("MobileGestalt");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_4);
    ret=diagnostics_relay_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=diagnostics_relay_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    else
    {
      signed int check;
      check=diagnostics_relay_check_result(dict);
      if(check == 0)
        ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;

      else
        if(check == 2)
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST;

        else
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
      if(!((signed int)ret == DIAGNOSTICS_RELAY_E_SUCCESS))
      {
        plist_free(dict);
        return ret;
      }

      else
      {
        void *value_node;
        value_node=plist_dict_get_item(dict, "Diagnostics");
        if(!(value_node == NULL))
          *result=plist_copy(value_node);

        plist_free(dict);
        return ret;
      }
    }
  }
}

// diagnostics_relay_receive
// file diagnostics_relay.c line 119
static enum anonymous_49 diagnostics_relay_receive(struct diagnostics_relay_client_private *client, void **plist)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(plist == ((void **)NULL) || client == ((struct diagnostics_relay_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(plist == ((void **)NULL)))
      tmp_if_expr_1 = *plist != NULL ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;
    enum anonymous_23 err;
    err=property_list_service_receive_plist(client->parent, plist);
    if(!((signed int)err == PROPERTY_LIST_SERVICE_E_SUCCESS))
      ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;

    if(*plist == NULL)
      ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    return ret;
  }
}

// diagnostics_relay_request_diagnostics
// file diagnostics_relay.c line 285
enum anonymous_49 diagnostics_relay_request_diagnostics(struct diagnostics_relay_client_private *client, const char *type, void **diagnostics)
{
  if(diagnostics == ((void **)NULL) || client == ((struct diagnostics_relay_client_private *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string(type);
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=diagnostics_relay_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=diagnostics_relay_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    else
    {
      signed int check;
      check=diagnostics_relay_check_result(dict);
      if(check == 0)
        ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;

      else
        if(check == 2)
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST;

        else
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
      if(!((signed int)ret == DIAGNOSTICS_RELAY_E_SUCCESS))
      {
        plist_free(dict);
        return ret;
      }

      else
      {
        void *value_node;
        value_node=plist_dict_get_item(dict, "Diagnostics");
        if(!(value_node == NULL))
          *diagnostics=plist_copy(value_node);

        plist_free(dict);
        return ret;
      }
    }
  }
}

// diagnostics_relay_restart
// file diagnostics_relay.c line 275
enum anonymous_49 diagnostics_relay_restart(struct diagnostics_relay_client_private *client, signed int flags)
{
  enum anonymous_49 return_value_internal_diagnostics_relay_action_1;
  return_value_internal_diagnostics_relay_action_1=internal_diagnostics_relay_action(client, "Restart", flags);
  return return_value_internal_diagnostics_relay_action_1;
}

// diagnostics_relay_send
// file diagnostics_relay.c line 150
static enum anonymous_49 diagnostics_relay_send(struct diagnostics_relay_client_private *client, void *plist)
{
  if(plist == NULL || client == ((struct diagnostics_relay_client_private *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;
    enum anonymous_23 err;
    err=property_list_service_send_xml_plist(client->parent, plist);
    if(!((signed int)err == PROPERTY_LIST_SERVICE_E_SUCCESS))
      ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;

    return ret;
  }
}

// diagnostics_relay_shutdown
// file diagnostics_relay.c line 280
enum anonymous_49 diagnostics_relay_shutdown(struct diagnostics_relay_client_private *client, signed int flags)
{
  enum anonymous_49 return_value_internal_diagnostics_relay_action_1;
  return_value_internal_diagnostics_relay_action_1=internal_diagnostics_relay_action(client, "Shutdown", flags);
  return return_value_internal_diagnostics_relay_action_1;
}

// diagnostics_relay_sleep
// file diagnostics_relay.c line 199
enum anonymous_49 diagnostics_relay_sleep(struct diagnostics_relay_client_private *client)
{
  if(client == ((struct diagnostics_relay_client_private *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("Sleep");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=diagnostics_relay_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=diagnostics_relay_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    else
    {
      signed int check;
      check=diagnostics_relay_check_result(dict);
      if(check == 0)
        ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;

      else
        if(check == 2)
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST;

        else
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
      plist_free(dict);
      return ret;
    }
  }
}

// file_relay_client_free
// file file_relay.c line 54
enum anonymous_22 file_relay_client_free(struct file_relay_client_private *client)
{
  if(client == ((struct file_relay_client_private *)NULL))
    return (enum anonymous_22)FILE_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_23 return_value_property_list_service_client_free_1;
    return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
    if(!((signed int)return_value_property_list_service_client_free_1 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (enum anonymous_22)FILE_RELAY_E_UNKNOWN_ERROR;

    else
      return (enum anonymous_22)FILE_RELAY_E_SUCCESS;
  }
}

// file_relay_client_new
// file file_relay.c line 27
enum anonymous_22 file_relay_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct file_relay_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct file_relay_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct file_relay_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_22)FILE_RELAY_E_INVALID_ARG;

  else
  {
    struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
    enum anonymous_23 return_value_property_list_service_client_new_3;
    return_value_property_list_service_client_new_3=property_list_service_client_new(device, service, &plistclient);
    if(!((signed int)return_value_property_list_service_client_new_3 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (enum anonymous_22)FILE_RELAY_E_MUX_ERROR;

    else
    {
      struct file_relay_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct file_relay_client_private) /*8ul*/ );
      client_loc = (struct file_relay_client_private *)return_value_malloc_4;
      client_loc->parent = plistclient;
      *client = client_loc;
      return (enum anonymous_22)FILE_RELAY_E_SUCCESS;
    }
  }
}

// file_relay_client_start_service
// file file_relay.c line 47
enum anonymous_22 file_relay_client_start_service(struct idevice_private *device, struct file_relay_client_private **client, const char *label)
{
  enum anonymous_22 err = (enum anonymous_22)FILE_RELAY_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.file_relay", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))file_relay_client_new, (signed int *)&err);
  return err;
}

// file_relay_request_sources
// file file_relay.c line 157
enum anonymous_22 file_relay_request_sources(struct file_relay_client_private *client, const char **sources, struct idevice_connection_private **connection)
{
  enum anonymous_22 return_value_file_relay_request_sources_timeout_1;
  return_value_file_relay_request_sources_timeout_1=file_relay_request_sources_timeout(client, sources, connection, (unsigned int)60000);
  return return_value_file_relay_request_sources_timeout_1;
}

// file_relay_request_sources_timeout
// file file_relay.c line 65
enum anonymous_22 file_relay_request_sources_timeout(struct file_relay_client_private *client, const char **sources, struct idevice_connection_private **connection, unsigned int timeout)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct file_relay_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(sources == ((const char **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(sources[(signed long int)0] != ((const char *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_23 return_value_property_list_service_receive_plist_with_timeout_5;
  void *error;
  signed int return_value_strcmp_7;
  signed int return_value_strcmp_6;
  void *status;
  char *ack;
  signed int return_value_strcmp_9;
  if(tmp_if_expr_2)
    return (enum anonymous_22)FILE_RELAY_E_INVALID_ARG;

  else
  {
    *connection = (struct idevice_connection_private *)(void *)0;
    enum anonymous_22 err = (enum anonymous_22)FILE_RELAY_E_UNKNOWN_ERROR;
    void *array;
    array=plist_new_array();
    signed int i = 0;
    while(!(sources[(signed long int)i] == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_3;
      return_value_plist_new_string_3=plist_new_string(sources[(signed long int)i]);
      plist_array_append_item(array, return_value_plist_new_string_3);
      i = i + 1;
    }
    void *dict;
    dict=plist_new_dict();
    plist_dict_set_item(dict, "Sources", array);
    enum anonymous_23 return_value_property_list_service_send_xml_plist_4;
    return_value_property_list_service_send_xml_plist_4=property_list_service_send_xml_plist(client->parent, dict);
    if(!((signed int)return_value_property_list_service_send_xml_plist_4 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      err = (enum anonymous_22)FILE_RELAY_E_MUX_ERROR;

    else
    {
      plist_free(dict);
      dict = (void *)0;
      return_value_property_list_service_receive_plist_with_timeout_5=property_list_service_receive_plist_with_timeout(client->parent, &dict, timeout);
      if(!((signed int)return_value_property_list_service_receive_plist_with_timeout_5 == PROPERTY_LIST_SERVICE_E_SUCCESS))
        err = (enum anonymous_22)FILE_RELAY_E_MUX_ERROR;

      else
        if(dict == NULL)
          err = (enum anonymous_22)FILE_RELAY_E_PLIST_ERROR;

        else
        {
          error=plist_dict_get_item(dict, "Error");
          if(!(error == NULL))
          {
            char *errmsg = (char *)(void *)0;
            plist_get_string_val(error, &errmsg);
            if(!(errmsg == ((char *)NULL)))
            {
              signed int return_value_strcmp_8;
              return_value_strcmp_8=strcmp(errmsg, "InvalidSource");
              if(return_value_strcmp_8 == 0)
                err = (enum anonymous_22)FILE_RELAY_E_INVALID_SOURCE;

              else
              {
                return_value_strcmp_7=strcmp(errmsg, "StagingEmpty");
                if(return_value_strcmp_7 == 0)
                  err = (enum anonymous_22)FILE_RELAY_E_STAGING_EMPTY;

                else
                {
                  return_value_strcmp_6=strcmp(errmsg, "PermissionDenied");
                  if(return_value_strcmp_6 == 0)
                    err = (enum anonymous_22)FILE_RELAY_E_PERMISSION_DENIED;

                }
              }
              free((void *)errmsg);
            }

            goto leave;
          }

          status=plist_dict_get_item(dict, "Status");
          if(status == NULL)
            err = (enum anonymous_22)FILE_RELAY_E_PLIST_ERROR;

          else
          {
            ack = (char *)(void *)0;
            plist_get_string_val(status, &ack);
            if(!(ack == ((char *)NULL)))
            {
              return_value_strcmp_9=strcmp(ack, "Acknowledged");
              if(return_value_strcmp_9 == 0)
              {
                free((void *)ack);
                err = (enum anonymous_22)FILE_RELAY_E_SUCCESS;
                *connection = client->parent->parent->connection;
              }

            }

          }
        }
    }

  leave:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    return err;
  }
}

// generate_uuid
// file utils.c line 180
char * generate_uuid(void)
{
  const char *chars = "ABCDEF0123456789";
  signed int i = 0;
  char *uuid;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(char) /*1ul*/  * (unsigned long int)37);
  uuid = (char *)return_value_malloc_1;
  signed long int return_value_time_2;
  return_value_time_2=time((signed long int *)(void *)0);
  srand((unsigned int)return_value_time_2);
  i = 0;
  for( ; !(i >= 36); i = i + 1)
  {
    if(i == 8 || i == 13 || i == 18 || i == 23)
    {
      uuid[(signed long int)i] = (char)45;
      goto __CPROVER_DUMP_L3;
    }

    else
    {
      signed int return_value_get_rand_3;
      return_value_get_rand_3=get_rand(0, 16);
      uuid[(signed long int)i] = chars[(signed long int)return_value_get_rand_3];
    }

  __CPROVER_DUMP_L3:
    ;
  }
  uuid[(signed long int)36] = (char)0;
  return uuid;
}

// get_rand
// file utils.c line 174
static signed int get_rand(signed int min, signed int max)
{
  signed int retval;
  signed int return_value_rand_1;
  return_value_rand_1=rand();
  retval = return_value_rand_1 % (max - min) + min;
  return retval;
}

// get_rand_link1
// file utils.c line 174
static signed int get_rand_link1(signed int min_link1, signed int max_link1)
{
  signed int retval_link1;
  signed int return_value_rand_1_link1;
  return_value_rand_1_link1=rand();
  retval_link1 = return_value_rand_1_link1 % (max_link1 - min_link1) + min_link1;
  return retval_link1;
}

// heartbeat_client_free
// file heartbeat.c line 95
enum anonymous_50 heartbeat_client_free(struct heartbeat_client_private *client)
{
  if(client == ((struct heartbeat_client_private *)NULL))
    return (enum anonymous_50)HEARTBEAT_E_INVALID_ARG;

  else
  {
    enum anonymous_50 err;
    enum anonymous_23 return_value_property_list_service_client_free_1;
    return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
    err=heartbeat_error(return_value_property_list_service_client_free_1);
    free((void *)client);
    return err;
  }
}

// heartbeat_client_new
// file heartbeat.c line 61
enum anonymous_50 heartbeat_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct heartbeat_client_private **client)
{
  *client = (struct heartbeat_client_private *)(void *)0;
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct heartbeat_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct heartbeat_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_50)HEARTBEAT_E_INVALID_ARG;

  else
  {
    struct property_list_service_client_private *plclient = (struct property_list_service_client_private *)(void *)0;
    enum anonymous_50 ret;
    enum anonymous_23 return_value_property_list_service_client_new_3;
    return_value_property_list_service_client_new_3=property_list_service_client_new(device, service, &plclient);
    ret=heartbeat_error(return_value_property_list_service_client_new_3);
    if(!((signed int)ret == HEARTBEAT_E_SUCCESS))
      return ret;

    else
    {
      struct heartbeat_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct heartbeat_client_private) /*8ul*/ );
      client_loc = (struct heartbeat_client_private *)return_value_malloc_4;
      client_loc->parent = plclient;
      *client = client_loc;
      return (enum anonymous_50)0;
    }
  }
}

// heartbeat_client_start_service
// file heartbeat.c line 88
enum anonymous_50 heartbeat_client_start_service(struct idevice_private *device, struct heartbeat_client_private **client, const char *label)
{
  enum anonymous_50 err = (enum anonymous_50)HEARTBEAT_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.heartbeat", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))heartbeat_client_new, (signed int *)&err);
  return err;
}

// heartbeat_error
// file heartbeat.c line 42
static enum anonymous_50 heartbeat_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_50)HEARTBEAT_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_50)HEARTBEAT_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_50)HEARTBEAT_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_50)HEARTBEAT_E_MUX_ERROR;
    case PROPERTY_LIST_SERVICE_E_SSL_ERROR:
      return (enum anonymous_50)HEARTBEAT_E_SSL_ERROR;
    default:
      return (enum anonymous_50)HEARTBEAT_E_UNKNOWN_ERROR;
  }
}

// heartbeat_receive
// file heartbeat.c line 121
enum anonymous_50 heartbeat_receive(struct heartbeat_client_private *client, void **plist)
{
  enum anonymous_50 return_value_heartbeat_receive_with_timeout_1;
  return_value_heartbeat_receive_with_timeout_1=heartbeat_receive_with_timeout(client, plist, (unsigned int)1000);
  return return_value_heartbeat_receive_with_timeout_1;
}

// heartbeat_receive_with_timeout
// file heartbeat.c line 126
enum anonymous_50 heartbeat_receive_with_timeout(struct heartbeat_client_private *client, void **plist, unsigned int timeout_ms)
{
  enum anonymous_50 res = (enum anonymous_50)HEARTBEAT_E_UNKNOWN_ERROR;
  void *outplist = (void *)0;
  enum anonymous_23 return_value_property_list_service_receive_plist_with_timeout_1;
  return_value_property_list_service_receive_plist_with_timeout_1=property_list_service_receive_plist_with_timeout(client->parent, &outplist, timeout_ms);
  res=heartbeat_error(return_value_property_list_service_receive_plist_with_timeout_1);
  if(outplist == NULL || !((signed int)res == HEARTBEAT_E_SUCCESS))
  {
    plist_free(outplist);
    return (enum anonymous_50)HEARTBEAT_E_MUX_ERROR;
  }

  else
  {
    *plist = outplist;
    return res;
  }
}

// heartbeat_send
// file heartbeat.c line 106
enum anonymous_50 heartbeat_send(struct heartbeat_client_private *client, void *plist)
{
  enum anonymous_50 res = (enum anonymous_50)HEARTBEAT_E_UNKNOWN_ERROR;
  enum anonymous_23 return_value_property_list_service_send_binary_plist_1;
  return_value_property_list_service_send_binary_plist_1=property_list_service_send_binary_plist(client->parent, plist);
  res=heartbeat_error(return_value_property_list_service_send_binary_plist_1);
  if(!((signed int)res == HEARTBEAT_E_SUCCESS))
    return res;

  else
    return res;
}

// house_arrest_client_free
// file house_arrest.c line 81
enum anonymous_45 house_arrest_client_free(struct house_arrest_client_private *client)
{
  if(client == ((struct house_arrest_client_private *)NULL))
    return (enum anonymous_45)HOUSE_ARREST_E_INVALID_ARG;

  else
  {
    enum anonymous_45 err = (enum anonymous_45)HOUSE_ARREST_E_SUCCESS;
    if(!(client->parent == ((struct property_list_service_client_private *)NULL)))
    {
      if(!(client->parent->parent->connection == ((struct idevice_connection_private *)NULL)))
      {
        enum anonymous_23 return_value_property_list_service_client_free_1;
        return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
        house_arrest_error(return_value_property_list_service_client_free_1);
      }

    }

    client->parent = (struct property_list_service_client_private *)(void *)0;
    free((void *)client);
    return err;
  }
}

// house_arrest_client_new
// file house_arrest.c line 58
enum anonymous_45 house_arrest_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct house_arrest_client_private **client)
{
  struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
  enum anonymous_45 err;
  enum anonymous_23 return_value_property_list_service_client_new_1;
  return_value_property_list_service_client_new_1=property_list_service_client_new(device, service, &plistclient);
  err=house_arrest_error(return_value_property_list_service_client_new_1);
  if(!((signed int)err == HOUSE_ARREST_E_SUCCESS))
    return err;

  else
  {
    struct house_arrest_client_private *client_loc;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct house_arrest_client_private) /*16ul*/ );
    client_loc = (struct house_arrest_client_private *)return_value_malloc_2;
    client_loc->parent = plistclient;
    client_loc->mode = (enum house_arrest_client_mode)HOUSE_ARREST_CLIENT_MODE_NORMAL;
    *client = client_loc;
    return (enum anonymous_45)HOUSE_ARREST_E_SUCCESS;
  }
}

// house_arrest_client_start_service
// file house_arrest.c line 74
enum anonymous_45 house_arrest_client_start_service(struct idevice_private *device, struct house_arrest_client_private **client, const char *label)
{
  enum anonymous_45 err = (enum anonymous_45)HOUSE_ARREST_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.house_arrest", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))house_arrest_client_new, (signed int *)&err);
  return err;
}

// house_arrest_error
// file house_arrest.c line 41
static enum anonymous_45 house_arrest_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_45)HOUSE_ARREST_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_45)HOUSE_ARREST_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_45)HOUSE_ARREST_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_45)HOUSE_ARREST_E_CONN_FAILED;
    default:
      return (enum anonymous_45)HOUSE_ARREST_E_UNKNOWN_ERROR;
  }
}

// house_arrest_get_result
// file house_arrest.c line 132
enum anonymous_45 house_arrest_get_result(struct house_arrest_client_private *client, void **dict)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct house_arrest_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_45)HOUSE_ARREST_E_INVALID_ARG;

  else
    if(!((signed int)client->mode == HOUSE_ARREST_CLIENT_MODE_NORMAL))
      return (enum anonymous_45)HOUSE_ARREST_E_INVALID_MODE;

    else
    {
      enum anonymous_45 res;
      enum anonymous_23 return_value_property_list_service_receive_plist_2;
      return_value_property_list_service_receive_plist_2=property_list_service_receive_plist(client->parent, dict);
      res=house_arrest_error(return_value_property_list_service_receive_plist_2);
      if(!((signed int)res == HOUSE_ARREST_E_SUCCESS))
      {
        if(!(*dict == NULL))
        {
          plist_free(*dict);
          *dict = (void *)0;
        }

      }

      return res;
    }
}

// house_arrest_send_command
// file house_arrest.c line 112
enum anonymous_45 house_arrest_send_command(struct house_arrest_client_private *client, const char *command, const char *appid)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct house_arrest_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(appid == ((const char *)NULL) || command == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_45)HOUSE_ARREST_E_INVALID_ARG;

  else
    if(!((signed int)client->mode == HOUSE_ARREST_CLIENT_MODE_NORMAL))
      return (enum anonymous_45)HOUSE_ARREST_E_INVALID_MODE;

    else
    {
      enum anonymous_45 res = (enum anonymous_45)HOUSE_ARREST_E_UNKNOWN_ERROR;
      void *dict;
      dict=plist_new_dict();
      void *return_value_plist_new_string_2;
      return_value_plist_new_string_2=plist_new_string(command);
      plist_dict_set_item(dict, "Command", return_value_plist_new_string_2);
      void *return_value_plist_new_string_3;
      return_value_plist_new_string_3=plist_new_string(appid);
      plist_dict_set_item(dict, "Identifier", return_value_plist_new_string_3);
      res=house_arrest_send_request(client, dict);
      plist_free(dict);
      return res;
    }
}

// house_arrest_send_request
// file house_arrest.c line 96
enum anonymous_45 house_arrest_send_request(struct house_arrest_client_private *client, void *dict)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct house_arrest_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(dict == NULL || tmp_if_expr_1)
    return (enum anonymous_45)HOUSE_ARREST_E_INVALID_ARG;

  else
  {
    enum anonymous_11 return_value_plist_get_node_type_2;
    return_value_plist_get_node_type_2=plist_get_node_type(dict);
    if(!((signed int)return_value_plist_get_node_type_2 == PLIST_DICT))
      return (enum anonymous_45)HOUSE_ARREST_E_PLIST_ERROR;

    else
      if(!((signed int)client->mode == HOUSE_ARREST_CLIENT_MODE_NORMAL))
        return (enum anonymous_45)HOUSE_ARREST_E_INVALID_MODE;

      else
      {
        enum anonymous_45 res;
        enum anonymous_23 return_value_property_list_service_send_xml_plist_3;
        return_value_property_list_service_send_xml_plist_3=property_list_service_send_xml_plist(client->parent, dict);
        res=house_arrest_error(return_value_property_list_service_send_xml_plist_3);
        return res;
      }
  }
}

// idevice_connect
// file idevice.c line 267
enum anonymous_5 idevice_connect(struct idevice_private *device, unsigned short int port, struct idevice_connection_private **connection)
{
  if(device == ((struct idevice_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if((signed int)device->conn_type == CONNECTION_USBMUXD)
    {
      signed int sfd;
      sfd=usbmuxd_connect((const signed int)(unsigned int)(signed long int)device->conn_data, port);
      if(!(sfd >= 0))
        return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;

      struct idevice_connection_private *new_connection;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct idevice_connection_private) /*32ul*/ );
      new_connection = (struct idevice_connection_private *)return_value_malloc_1;
      new_connection->type = (enum connection_type)CONNECTION_USBMUXD;
      new_connection->data = (void *)(signed long int)sfd;
      new_connection->ssl_data = (struct ssl_data_private *)(void *)0;
      idevice_get_udid(device, &new_connection->udid);
      *connection = new_connection;
      return (enum anonymous_5)IDEVICE_E_SUCCESS;
    }

    return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
  }
}

// idevice_connection_disable_ssl
// file idevice.c line 794
enum anonymous_5 idevice_connection_disable_ssl(struct idevice_connection_private *connection)
{
  if(connection == ((struct idevice_connection_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
    if(connection->ssl_data == ((struct ssl_data_private *)NULL))
      return (enum anonymous_5)IDEVICE_E_SUCCESS;

    else
    {
      if(!(connection->ssl_data->session == ((struct gnutls_session_int *)NULL)))
        gnutls_bye(connection->ssl_data->session, (enum anonymous_30)GNUTLS_SHUT_RDWR);

      internal_ssl_cleanup(connection->ssl_data);
      free((void *)connection->ssl_data);
      connection->ssl_data = (struct ssl_data_private *)(void *)0;
      return (enum anonymous_5)IDEVICE_E_SUCCESS;
    }
}

// idevice_connection_enable_ssl
// file idevice.c line 650
enum anonymous_5 idevice_connection_enable_ssl(struct idevice_connection_private *connection)
{
  _Bool tmp_if_expr_1;
  if(connection == ((struct idevice_connection_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = connection->ssl_data != ((struct ssl_data_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_5 ret = (enum anonymous_5)IDEVICE_E_SSL_ERROR;
    unsigned int return_me = (unsigned int)0;
    void *pair_record = (void *)0;
    userpref_read_pair_record(connection->udid, &pair_record);
    if(pair_record == NULL)
      return ret;

    else
    {
      struct ssl_data_private *ssl_data_loc;
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct ssl_data_private) /*48ul*/ );
      ssl_data_loc = (struct ssl_data_private *)return_value_malloc_2;
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 0;
      gnutls_certificate_allocate_credentials(&ssl_data_loc->certificate);
      gnutls_certificate_set_retrieve_function(ssl_data_loc->certificate, internal_cert_callback);
      gnutls_init(&ssl_data_loc->session, (unsigned int)(1 << 1));
      gnutls_priority_set_direct(ssl_data_loc->session, "NONE:+VERS-SSL3.0:+ANON-DH:+RSA:+AES-128-CBC:+AES-256-CBC:+SHA1:+MD5:+COMP-NULL", (const char **)(void *)0);
      gnutls_credentials_set(ssl_data_loc->session, (enum anonymous_29)GNUTLS_CRD_CERTIFICATE, (void *)ssl_data_loc->certificate);
      gnutls_session_set_ptr(ssl_data_loc->session, (void *)ssl_data_loc);
      gnutls_x509_crt_init(&ssl_data_loc->root_cert);
      gnutls_x509_crt_init(&ssl_data_loc->host_cert);
      gnutls_x509_privkey_init(&ssl_data_loc->root_privkey);
      gnutls_x509_privkey_init(&ssl_data_loc->host_privkey);
      pair_record_import_crt_with_name(pair_record, "RootCertificate", ssl_data_loc->root_cert);
      pair_record_import_crt_with_name(pair_record, "HostCertificate", ssl_data_loc->host_cert);
      pair_record_import_key_with_name(pair_record, "RootPrivateKey", ssl_data_loc->root_privkey);
      pair_record_import_key_with_name(pair_record, "HostPrivateKey", ssl_data_loc->host_privkey);
      if(!(pair_record == NULL))
        plist_free(pair_record);

      gnutls_transport_set_ptr(ssl_data_loc->session, (void *)connection);
      gnutls_transport_set_push_function(ssl_data_loc->session, (signed long int (*)(void *, const void *, unsigned long int))internal_ssl_write);
      gnutls_transport_set_pull_function(ssl_data_loc->session, (signed long int (*)(void *, void *, unsigned long int))internal_ssl_read);
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      signed int return_value_gnutls_handshake_5;
      return_value_gnutls_handshake_5=gnutls_handshake(ssl_data_loc->session);
      return_me = (unsigned int)return_value_gnutls_handshake_5;
      if(!(return_me == 0u))
      {
        internal_ssl_cleanup(ssl_data_loc);
        free((void *)ssl_data_loc);
        gnutls_perror((signed int)return_me);
      }

      else
      {
        connection->ssl_data = ssl_data_loc;
        ret = (enum anonymous_5)IDEVICE_E_SUCCESS;
      }
      return ret;
    }
  }
}

// idevice_connection_receive
// file idevice.c line 443
enum anonymous_5 idevice_connection_receive(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(connection == ((struct idevice_connection_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(connection->ssl_data == ((struct ssl_data_private *)NULL)))
      tmp_if_expr_1 = !(connection->ssl_data->session != ((struct gnutls_session_int *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if(!(connection->ssl_data == ((struct ssl_data_private *)NULL)))
    {
      signed long int received;
      received=gnutls_record_recv(connection->ssl_data->session, (void *)data, (unsigned long int)len);
      if(received >= 1l)
      {
        *recv_bytes = (unsigned int)received;
        return (enum anonymous_5)IDEVICE_E_SUCCESS;
      }

      *recv_bytes = (unsigned int)0;
      return (enum anonymous_5)IDEVICE_E_SSL_ERROR;
    }

    enum anonymous_5 return_value_internal_connection_receive_3;
    return_value_internal_connection_receive_3=internal_connection_receive(connection, data, len, recv_bytes);
    return return_value_internal_connection_receive_3;
  }
}

// idevice_connection_receive_timeout
// file idevice.c line 389
enum anonymous_5 idevice_connection_receive_timeout(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes, unsigned int timeout)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(connection == ((struct idevice_connection_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(connection->ssl_data == ((struct ssl_data_private *)NULL)))
      tmp_if_expr_1 = !(connection->ssl_data->session != ((struct gnutls_session_int *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if(!(connection->ssl_data == ((struct ssl_data_private *)NULL)))
    {
      signed long int received;
      received=gnutls_record_recv(connection->ssl_data->session, (void *)data, (unsigned long int)len);
      if(received >= 1l)
      {
        *recv_bytes = (unsigned int)received;
        return (enum anonymous_5)IDEVICE_E_SUCCESS;
      }

      *recv_bytes = (unsigned int)0;
      return (enum anonymous_5)IDEVICE_E_SSL_ERROR;
    }

    enum anonymous_5 return_value_internal_connection_receive_timeout_3;
    return_value_internal_connection_receive_timeout_3=internal_connection_receive_timeout(connection, data, len, recv_bytes, timeout);
    return return_value_internal_connection_receive_timeout_3;
  }
}

// idevice_connection_send
// file idevice.c line 343
enum anonymous_5 idevice_connection_send(struct idevice_connection_private *connection, const char *data, unsigned int len, unsigned int *sent_bytes)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(data == ((const char *)NULL) || connection == ((struct idevice_connection_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(connection->ssl_data == ((struct ssl_data_private *)NULL)))
      tmp_if_expr_1 = !(connection->ssl_data->session != ((struct gnutls_session_int *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if(!(connection->ssl_data == ((struct ssl_data_private *)NULL)))
    {
      signed long int sent;
      sent=gnutls_record_send(connection->ssl_data->session, (void *)data, (unsigned long int)len);
      if((unsigned int)sent == len)
      {
        *sent_bytes = (unsigned int)sent;
        return (enum anonymous_5)IDEVICE_E_SUCCESS;
      }

      *sent_bytes = (unsigned int)0;
      return (enum anonymous_5)IDEVICE_E_SSL_ERROR;
    }

    enum anonymous_5 return_value_internal_connection_send_3;
    return_value_internal_connection_send_3=internal_connection_send(connection, data, len, sent_bytes);
    return return_value_internal_connection_send_3;
  }
}

// idevice_device_list_free
// file idevice.c line 212
enum anonymous_5 idevice_device_list_free(char **devices)
{
  if(!(devices == ((char **)NULL)))
  {
    signed int i = 0;
    for( ; !(devices[(signed long int)i] == ((char *)NULL)); i = i + 1)
      free((void *)devices[(signed long int)i]);
    free((void *)devices);
  }

  return (enum anonymous_5)IDEVICE_E_SUCCESS;
}

// idevice_disconnect
// file idevice.c line 293
enum anonymous_5 idevice_disconnect(struct idevice_connection_private *connection)
{
  if(connection == ((struct idevice_connection_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if(!(connection->ssl_data == ((struct ssl_data_private *)NULL)))
      idevice_connection_disable_ssl(connection);

    enum anonymous_5 result = (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
    if((signed int)connection->type == CONNECTION_USBMUXD)
    {
      usbmuxd_disconnect((signed int)(signed long int)connection->data);
      connection->data = (void *)0;
      result = (enum anonymous_5)IDEVICE_E_SUCCESS;
    }

    if(!(connection->udid == ((char *)NULL)))
      free((void *)connection->udid);

    free((void *)connection);
    connection = (struct idevice_connection_private *)(void *)0;
    return result;
  }
}

// idevice_event_subscribe
// file idevice.c line 159
enum anonymous_5 idevice_event_subscribe(void (*callback)(const struct anonymous_35 *, void *), void *user_data)
{
  event_cb = callback;
  signed int res;
  res=usbmuxd_subscribe(usbmux_event_cb, user_data);
  if(!(res == 0))
  {
    event_cb = (void (*)(const struct anonymous_35 *, void *))(void *)0;
    return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
  }

  else
    return (enum anonymous_5)IDEVICE_E_SUCCESS;
}

// idevice_event_unsubscribe
// file idevice.c line 171
enum anonymous_5 idevice_event_unsubscribe(void)
{
  event_cb = (void (*)(const struct anonymous_35 *, void *))(void *)0;
  signed int res;
  res=usbmuxd_unsubscribe();
  if(!(res == 0))
    return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;

  else
    return (enum anonymous_5)IDEVICE_E_SUCCESS;
}

// idevice_free
// file ../include/libimobiledevice/libimobiledevice.h line 148
enum anonymous_5 idevice_free(struct idevice_private *device)
{
  if(device == ((struct idevice_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_5 ret = (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
    ret = (enum anonymous_5)IDEVICE_E_SUCCESS;
    free((void *)device->udid);
    if((signed int)device->conn_type == CONNECTION_USBMUXD)
      device->conn_data = NULL;

    if(!(device->conn_data == NULL))
      free(device->conn_data);

    free((void *)device);
    return ret;
  }
}

// idevice_get_device_list
// file idevice.c line 182
enum anonymous_5 idevice_get_device_list(char ***devices, signed int *count)
{
  struct anonymous_27 *dev_list;
  *devices = (char **)(void *)0;
  *count = 0;
  signed int return_value_usbmuxd_get_device_list_1;
  return_value_usbmuxd_get_device_list_1=usbmuxd_get_device_list(&dev_list);
  signed int tmp_post_3;
  if(!(return_value_usbmuxd_get_device_list_1 >= 0))
    return (enum anonymous_5)IDEVICE_E_NO_DEVICE;

  else
  {
    char **newlist = (char **)(void *)0;
    signed int i;
    signed int newcount = 0;
    i = 0;
    for( ; (dev_list + (signed long int)i)->handle >= 1u; i = i + 1)
    {
      void *return_value_realloc_2;
      return_value_realloc_2=realloc((void *)*devices, sizeof(char *) /*8ul*/  * (unsigned long int)(newcount + 1));
      newlist = (char **)return_value_realloc_2;
      tmp_post_3 = newcount;
      newcount = newcount + 1;
      newlist[(signed long int)tmp_post_3]=strdup((dev_list + (signed long int)i)->udid);
      *devices = newlist;
    }
    usbmuxd_device_list_free(&dev_list);
    *count = newcount;
    void *return_value_realloc_4;
    return_value_realloc_4=realloc((void *)*devices, sizeof(char *) /*8ul*/  * (unsigned long int)(newcount + 1));
    newlist = (char **)return_value_realloc_4;
    newlist[(signed long int)newcount] = (char *)(void *)0;
    *devices = newlist;
    return (enum anonymous_5)IDEVICE_E_SUCCESS;
  }
}

// idevice_get_handle
// file idevice.c line 466
enum anonymous_5 idevice_get_handle(struct idevice_private *device, unsigned int *handle)
{
  if(device == ((struct idevice_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
    if((signed int)device->conn_type == CONNECTION_USBMUXD)
    {
      *handle = (unsigned int)(signed long int)device->conn_data;
      return (enum anonymous_5)IDEVICE_E_SUCCESS;
    }

    else
      return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
}

// idevice_get_udid
// file idevice.c line 480
enum anonymous_5 idevice_get_udid(struct idevice_private *device, char **udid)
{
  if(udid == ((char **)NULL) || device == ((struct idevice_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    *udid=strdup(device->udid);
    return (enum anonymous_5)IDEVICE_E_SUCCESS;
  }
}

// idevice_new
// file ../include/libimobiledevice/libimobiledevice.h line 139
enum anonymous_5 idevice_new(struct idevice_private **device, const char *udid)
{
  struct anonymous_27 muxdev;
  signed int res;
  res=usbmuxd_get_device_by_udid(udid, &muxdev);
  if(res >= 1)
  {
    struct idevice_private *dev;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct idevice_private) /*24ul*/ );
    dev = (struct idevice_private *)return_value_malloc_1;
    dev->udid=strdup(muxdev.udid);
    dev->conn_type = (enum connection_type)CONNECTION_USBMUXD;
    dev->conn_data = (void *)(signed long int)muxdev.handle;
    *device = dev;
    return (enum anonymous_5)IDEVICE_E_SUCCESS;
  }

  return (enum anonymous_5)IDEVICE_E_NO_DEVICE;
}

// idevice_set_debug_level
// file ../include/libimobiledevice/libimobiledevice.h line 80
void idevice_set_debug_level(signed int level)
{
  internal_set_debug_level(level);
}

// idevice_to_service_error
// file service.c line 40
static enum anonymous_20 idevice_to_service_error(enum anonymous_5 err)
{
  switch((signed int)err)
  {
    case IDEVICE_E_SUCCESS:
      return (enum anonymous_20)SERVICE_E_SUCCESS;
    case IDEVICE_E_INVALID_ARG:
      return (enum anonymous_20)SERVICE_E_INVALID_ARG;
    case IDEVICE_E_SSL_ERROR:
      return (enum anonymous_20)SERVICE_E_SSL_ERROR;
    default:
      return (enum anonymous_20)SERVICE_E_UNKNOWN_ERROR;
  }
}

// instproxy_append_current_list_to_result_cb
// file installation_proxy.c line 549
static void instproxy_append_current_list_to_result_cb(void *command, void *status, void *user_data)
{
  void **result_array = (void **)user_data;
  unsigned long int current_amount = (unsigned long int)0;
  void *current_list = (void *)0;
  unsigned long int i;
  instproxy_status_get_current_list(status, (unsigned long int *)(void *)0, (unsigned long int *)(void *)0, &current_amount, &current_list);
  if(current_amount >= 1ul)
  {
    i = (unsigned long int)0;
    for( ; !(current_list == NULL) && !(i >= current_amount); i = i + 1ul)
    {
      void *item;
      item=plist_array_get_item(current_list, (unsigned int)i);
      void *return_value_plist_copy_1;
      return_value_plist_copy_1=plist_copy(item);
      plist_array_append_item(*result_array, return_value_plist_copy_1);
    }
  }

  if(!(current_list == NULL))
    plist_free(current_list);

}

// instproxy_archive
// file installation_proxy.c line 722
enum anonymous_25 instproxy_archive(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  void *command;
  command=plist_new_dict();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("Archive");
  plist_dict_set_item(command, "Command", return_value_plist_new_string_1);
  void *return_value_plist_copy_2;
  if(!(client_options == NULL))
  {
    return_value_plist_copy_2=plist_copy(client_options);
    plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_2);
  }

  void *return_value_plist_new_string_3;
  return_value_plist_new_string_3=plist_new_string(appid);
  plist_dict_set_item(command, "ApplicationIdentifier", return_value_plist_new_string_3);
  res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_ASYNC, status_cb, user_data);
  plist_free(command);
  return res;
}

// instproxy_browse
// file installation_proxy.c line 571
enum anonymous_25 instproxy_browse(struct instproxy_client_private *client, void *client_options, void **result)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct instproxy_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  void *return_value_plist_copy_3;
  if(result == ((void **)NULL) || tmp_if_expr_1)
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
    void *result_array;
    result_array=plist_new_array();
    void *command;
    command=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("Browse");
    plist_dict_set_item(command, "Command", return_value_plist_new_string_2);
    if(!(client_options == NULL))
    {
      return_value_plist_copy_3=plist_copy(client_options);
      plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_3);
    }

    res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_SYNC, instproxy_append_current_list_to_result_cb, (void *)&result_array);
    if((signed int)res == INSTPROXY_E_SUCCESS)
      *result = result_array;

    else
      plist_free(result_array);
    plist_free(command);
    return res;
  }
}

// instproxy_browse_with_callback
// file installation_proxy.c line 530
enum anonymous_25 instproxy_browse_with_callback(struct instproxy_client_private *client, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct instproxy_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  void *return_value_plist_copy_3;
  if(status_cb == ((void (*)(void *, void *, void *))NULL) || tmp_if_expr_1)
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
    void *command;
    command=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("Browse");
    plist_dict_set_item(command, "Command", return_value_plist_new_string_2);
    if(!(client_options == NULL))
    {
      return_value_plist_copy_3=plist_copy(client_options);
      plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_3);
    }

    res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_ASYNC, status_cb, (void *)user_data);
    plist_free(command);
    return res;
  }
}

// instproxy_check_capabilities_match
// file installation_proxy.c line 773
enum anonymous_25 instproxy_check_capabilities_match(struct instproxy_client_private *client, const char **capabilities, void *client_options, void **result)
{
  _Bool tmp_if_expr_4;
  enum anonymous_11 return_value_plist_get_node_type_1;
  _Bool tmp_if_expr_3;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(capabilities == ((const char **)NULL))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_plist_get_node_type_1=plist_get_node_type((void *)capabilities);
    if(!((signed int)return_value_plist_get_node_type_1 == PLIST_ARRAY))
    {
      return_value_plist_get_node_type_2=plist_get_node_type((void *)capabilities);
      tmp_if_expr_3 = (signed int)return_value_plist_get_node_type_2 != PLIST_DICT ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }
  void *return_value_plist_copy_6;
  if(tmp_if_expr_4)
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    void *lookup_result = (void *)0;
    enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
    void *command;
    command=plist_new_dict();
    void *return_value_plist_new_string_5;
    return_value_plist_new_string_5=plist_new_string("CheckCapabilitiesMatch");
    plist_dict_set_item(command, "Command", return_value_plist_new_string_5);
    if(!(client_options == NULL))
    {
      return_value_plist_copy_6=plist_copy(client_options);
      plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_6);
    }

    if(!(capabilities == ((const char **)NULL)))
    {
      signed int i = 0;
      void *capabilities_array;
      capabilities_array=plist_new_array();
      while(!(capabilities[(signed long int)i] == ((const char *)NULL)))
      {
        void *return_value_plist_new_string_7;
        return_value_plist_new_string_7=plist_new_string(capabilities[(signed long int)i]);
        plist_array_append_item(capabilities_array, return_value_plist_new_string_7);
        i = i + 1;
      }
      plist_dict_set_item(command, "Capabilities", capabilities_array);
    }

    res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_SYNC, instproxy_copy_lookup_result_cb, (void *)&lookup_result);
    if((signed int)res == INSTPROXY_E_SUCCESS)
      *result = lookup_result;

    else
      plist_free(lookup_result);
    plist_free(command);
    return res;
  }
}

// instproxy_client_free
// file installation_proxy.c line 256
enum anonymous_25 instproxy_client_free(struct instproxy_client_private *client)
{
  if(client == ((struct instproxy_client_private *)NULL))
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    property_list_service_client_free(client->parent);
    client->parent = (struct property_list_service_client_private *)(void *)0;
    if(!(client->receive_status_thread == 0ul))
    {
      thread_join(client->receive_status_thread);
      thread_free(client->receive_status_thread);
      client->receive_status_thread = (unsigned long int)(void *)0;
    }

    mutex_destroy(&client->mutex);
    free((void *)client);
    return (enum anonymous_25)INSTPROXY_E_SUCCESS;
  }
}

// instproxy_client_get_path_for_bundle_identifier
// file installation_proxy.c line 984
enum anonymous_25 instproxy_client_get_path_for_bundle_identifier(struct instproxy_client_private *client, const char *appid, char **path)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct instproxy_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(appid == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    void *apps = (void *)0;
    void *client_opts;
    client_opts=instproxy_client_options_new();
    instproxy_client_options_add(client_opts, (const void *)"ApplicationType", (const void *)"Any", (void *)0);
    instproxy_client_options_set_return_attributes(client_opts, (const void *)"CFBundleIdentifier", (const void *)"CFBundleExecutable", (const void *)"Path", (void *)0);
    const char *appids[2l] = { appid, (const char *)(void *)0 };
    enum anonymous_25 ierr;
    ierr=instproxy_lookup(client, appids, client_opts, &apps);
    instproxy_client_options_free(client_opts);
    if(!((signed int)ierr == INSTPROXY_E_SUCCESS))
      return ierr;

    else
    {
      void *app_found;
      app_found=plist_access_path(apps, (unsigned int)1, appid);
      if(app_found == NULL)
      {
        if(!(apps == NULL))
          plist_free(apps);

        *path = (char *)(void *)0;
        return (enum anonymous_25)INSTPROXY_E_OP_FAILED;
      }

      else
      {
        char *path_str = (char *)(void *)0;
        void *path_p;
        path_p=plist_dict_get_item(app_found, "Path");
        if(!(path_p == NULL))
          plist_get_string_val(path_p, &path_str);

        char *exec_str = (char *)(void *)0;
        void *exec_p;
        exec_p=plist_dict_get_item(app_found, "CFBundleExecutable");
        if(!(exec_p == NULL))
          plist_get_string_val(exec_p, &exec_str);

        if(path_str == ((char *)NULL))
          return (enum anonymous_25)INSTPROXY_E_OP_FAILED;

        else
          if(exec_str == ((char *)NULL))
            return (enum anonymous_25)INSTPROXY_E_OP_FAILED;

          else
          {
            plist_free(apps);
            char *ret;
            unsigned long int return_value_strlen_2;
            return_value_strlen_2=strlen(path_str);
            unsigned long int return_value_strlen_3;
            return_value_strlen_3=strlen(exec_str);
            void *return_value_malloc_4;
            return_value_malloc_4=malloc(return_value_strlen_2 + (unsigned long int)1 + return_value_strlen_3 + (unsigned long int)1);
            ret = (char *)return_value_malloc_4;
            strcpy(ret, path_str);
            strcat(ret, "/");
            strcat(ret, exec_str);
            *path = ret;
            if(!(path_str == ((char *)NULL)))
              free((void *)path_str);

            if(!(exec_str == ((char *)NULL)))
              free((void *)exec_str);

            return (enum anonymous_25)INSTPROXY_E_SUCCESS;
          }
      }
    }
  }
}

// instproxy_client_new
// file installation_proxy.c line 232
enum anonymous_25 instproxy_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct instproxy_client_private **client)
{
  struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
  enum anonymous_25 err;
  enum anonymous_23 return_value_property_list_service_client_new_1;
  return_value_property_list_service_client_new_1=property_list_service_client_new(device, service, &plistclient);
  err=instproxy_error(return_value_property_list_service_client_new_1);
  if(!((signed int)err == INSTPROXY_E_SUCCESS))
    return err;

  else
  {
    struct instproxy_client_private *client_loc;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct instproxy_client_private) /*56ul*/ );
    client_loc = (struct instproxy_client_private *)return_value_malloc_2;
    client_loc->parent = plistclient;
    mutex_init(&client_loc->mutex);
    client_loc->receive_status_thread = (unsigned long int)(void *)0;
    *client = client_loc;
    return (enum anonymous_25)INSTPROXY_E_SUCCESS;
  }
}

// instproxy_client_options_add
// file installation_proxy.c line 922
void instproxy_client_options_add(void *client_options, ...)
{
  signed int return_value_strcmp_4;
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_5;
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  if(!(client_options == NULL))
  {
    __builtin_va_list args;
    va_start(args, client_options);
    char *arg;
    arg=va_arg(args, __typeof__(arg));
    while(!(arg == ((char *)NULL)))
    {
      char *key;
      key=strdup(arg);
      signed int return_value_strcmp_9;
      return_value_strcmp_9=strcmp(key, "SkipUninstall");
      if(return_value_strcmp_9 == 0)
      {
        signed int intval;
        intval=va_arg(args, __typeof__(intval));
        void *return_value_plist_new_bool_1;
        return_value_plist_new_bool_1=plist_new_bool((unsigned char)intval);
        plist_dict_set_item(client_options, key, return_value_plist_new_bool_1);
      }

      else
      {
        return_value_strcmp_4=strcmp(key, "ApplicationSINF");
        if(return_value_strcmp_4 == 0)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          return_value_strcmp_5=strcmp(key, "iTunesMetadata");
          tmp_if_expr_6 = !(return_value_strcmp_5 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          tmp_if_expr_8 = (_Bool)1;

        else
        {
          return_value_strcmp_7=strcmp(key, "ReturnAttributes");
          tmp_if_expr_8 = !(return_value_strcmp_7 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_8)
        {
          void *plistval;
          plistval=va_arg(args, __typeof__(plistval));
          if(plistval == NULL)
          {
            free((void *)key);
            break;
          }

          void *return_value_plist_copy_2;
          return_value_plist_copy_2=plist_copy(plistval);
          plist_dict_set_item(client_options, key, return_value_plist_copy_2);
        }

        else
        {
          char *strval;
          strval=va_arg(args, __typeof__(strval));
          if(strval == ((char *)NULL))
          {
            free((void *)key);
            break;
          }

          void *return_value_plist_new_string_3;
          return_value_plist_new_string_3=plist_new_string(strval);
          plist_dict_set_item(client_options, key, return_value_plist_new_string_3);
        }
      }
      free((void *)key);
      arg=va_arg(args, __typeof__(arg));
    }
    va_end(args);
  }

}

// instproxy_client_options_free
// file installation_proxy.c line 977
void instproxy_client_options_free(void *client_options)
{
  if(!(client_options == NULL))
    plist_free(client_options);

}

// instproxy_client_options_new
// file installation_proxy.c line 917
void * instproxy_client_options_new(void)
{
  void *return_value_plist_new_dict_1;
  return_value_plist_new_dict_1=plist_new_dict();
  return return_value_plist_new_dict_1;
}

// instproxy_client_options_set_return_attributes
// file installation_proxy.c line 956
void instproxy_client_options_set_return_attributes(void *client_options, ...)
{
  if(!(client_options == NULL))
  {
    void *return_attributes;
    return_attributes=plist_new_array();
    __builtin_va_list args;
    va_start(args, client_options);
    char *arg;
    arg=va_arg(args, __typeof__(arg));
    while(!(arg == ((char *)NULL)))
    {
      char *attribute;
      attribute=strdup(arg);
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string(attribute);
      plist_array_append_item(return_attributes, return_value_plist_new_string_1);
      free((void *)attribute);
      arg=va_arg(args, __typeof__(arg));
    }
    va_end(args);
    plist_dict_set_item(client_options, "ReturnAttributes", return_attributes);
  }

}

// instproxy_client_start_service
// file installation_proxy.c line 249
enum anonymous_25 instproxy_client_start_service(struct idevice_private *device, struct instproxy_client_private **client, const char *label)
{
  enum anonymous_25 err = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.installation_proxy", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))instproxy_client_new, (signed int *)&err);
  return err;
}

// instproxy_command_get_name
// file installation_proxy.c line 908
void instproxy_command_get_name(void *command, char **name)
{
  *name = (char *)(void *)0;
  void *node;
  node=plist_dict_get_item(command, "Command");
  if(!(node == NULL))
    plist_get_string_val(node, name);

}

// instproxy_copy_lookup_result_cb
// file installation_proxy.c line 598
static void instproxy_copy_lookup_result_cb(void *command, void *status, void *user_data)
{
  void **result = (void **)user_data;
  void *node;
  node=plist_dict_get_item(status, "LookupResult");
  if(!(node == NULL))
    *result=plist_copy(node);

}

// instproxy_error
// file installation_proxy.c line 213
static enum anonymous_25 instproxy_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_25)INSTPROXY_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_25)INSTPROXY_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_25)INSTPROXY_E_CONN_FAILED;
    case PROPERTY_LIST_SERVICE_E_RECEIVE_TIMEOUT:
      return (enum anonymous_25)INSTPROXY_E_RECEIVE_TIMEOUT;
    default:
      return (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  }
}

// instproxy_install
// file installation_proxy.c line 655
enum anonymous_25 instproxy_install(struct instproxy_client_private *client, const char *pkg_path, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  void *command;
  command=plist_new_dict();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("Install");
  plist_dict_set_item(command, "Command", return_value_plist_new_string_1);
  void *return_value_plist_copy_2;
  if(!(client_options == NULL))
  {
    return_value_plist_copy_2=plist_copy(client_options);
    plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_2);
  }

  void *return_value_plist_new_string_3;
  return_value_plist_new_string_3=plist_new_string(pkg_path);
  plist_dict_set_item(command, "PackagePath", return_value_plist_new_string_3);
  res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_ASYNC, status_cb, user_data);
  plist_free(command);
  return res;
}

// instproxy_lock
// file installation_proxy.c line 187
static void instproxy_lock(struct instproxy_client_private *client)
{
  mutex_lock(&client->mutex);
}

// instproxy_lookup
// file installation_proxy.c line 608
enum anonymous_25 instproxy_lookup(struct instproxy_client_private *client, const char **appids, void *client_options, void **result)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  signed int i = 0;
  void *lookup_result = (void *)0;
  void *command = (void *)0;
  void *appid_array = (void *)0;
  void *node = (void *)0;
  _Bool tmp_if_expr_1;
  if(client == ((struct instproxy_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(result == ((void **)NULL) || tmp_if_expr_1)
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    command=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("Lookup");
    plist_dict_set_item(command, "Command", return_value_plist_new_string_2);
    if(!(client_options == NULL))
      node=plist_copy(client_options);

    else
      if(!(appids == ((const char **)NULL)))
        node=plist_new_dict();

    if(!(appids == ((const char **)NULL)))
    {
      appid_array=plist_new_array();
      while(!(appids[(signed long int)i] == ((const char *)NULL)))
      {
        void *return_value_plist_new_string_3;
        return_value_plist_new_string_3=plist_new_string(appids[(signed long int)i]);
        plist_array_append_item(appid_array, return_value_plist_new_string_3);
        i = i + 1;
      }
      plist_dict_set_item(node, "BundleIDs", appid_array);
    }

    if(!(node == NULL))
      plist_dict_set_item(command, "ClientOptions", node);

    res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_SYNC, instproxy_copy_lookup_result_cb, (void *)&lookup_result);
    if((signed int)res == INSTPROXY_E_SUCCESS)
      *result = lookup_result;

    else
      plist_free(lookup_result);
    plist_free(command);
    return res;
  }
}

// instproxy_lookup_archives
// file installation_proxy.c line 706
enum anonymous_25 instproxy_lookup_archives(struct instproxy_client_private *client, void *client_options, void **result)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  void *command;
  command=plist_new_dict();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("LookupArchives");
  plist_dict_set_item(command, "Command", return_value_plist_new_string_1);
  void *return_value_plist_copy_2;
  if(!(client_options == NULL))
  {
    return_value_plist_copy_2=plist_copy(client_options);
    plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_2);
  }

  res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_SYNC, instproxy_copy_lookup_result_cb, (void *)result);
  plist_free(command);
  return res;
}

// instproxy_perform_command
// file installation_proxy.c line 507
static enum anonymous_25 instproxy_perform_command(struct instproxy_client_private *client, void *command, enum anonymous_26 async, void (*status_cb)(void *, void *, void *), void *user_data)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct instproxy_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(command == NULL || tmp_if_expr_1)
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
    if(!(client->receive_status_thread == 0ul))
      return (enum anonymous_25)INSTPROXY_E_OP_IN_PROGRESS;

    else
    {
      enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
      instproxy_lock(client);
      res=instproxy_send_command(client, command);
      instproxy_unlock(client);
      res=instproxy_receive_status_loop_with_callback(client, command, async, status_cb, user_data);
      return res;
    }
}

// instproxy_receive_status_loop
// file installation_proxy.c line 316
static enum anonymous_25 instproxy_receive_status_loop(struct instproxy_client_private *client, void *command, void (*status_cb)(void *, void *, void *), void *user_data)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  signed int complete = 0;
  void *node = (void *)0;
  char *command_name = (char *)(void *)0;
  char *status_name = (char *)(void *)0;
  char *error_name = (char *)(void *)0;
  char *error_description = (char *)(void *)0;
  unsigned long int error_code = (unsigned long int)0;
  instproxy_command_get_name(command, &command_name);
  _Bool tmp_if_expr_1;
  do
  {
    instproxy_lock(client);
    enum anonymous_23 return_value_property_list_service_receive_plist_with_timeout_2;
    return_value_property_list_service_receive_plist_with_timeout_2=property_list_service_receive_plist_with_timeout(client->parent, &node, (unsigned int)1000);
    res=instproxy_error(return_value_property_list_service_receive_plist_with_timeout_2);
    instproxy_unlock(client);
    if(!((signed int)res == INSTPROXY_E_SUCCESS) && !((signed int)res == INSTPROXY_E_RECEIVE_TIMEOUT))
      break;

    if(!(node == NULL))
    {
      res=instproxy_status_get_error(node, &error_name, &error_description, &error_code);
      if(!((signed int)res == INSTPROXY_E_SUCCESS))
        complete = 1;

      if(!(error_name == ((char *)NULL)))
      {
        free((void *)error_name);
        error_name = (char *)(void *)0;
      }

      if(!(error_description == ((char *)NULL)))
      {
        free((void *)error_description);
        error_description = (char *)(void *)0;
      }

      instproxy_status_get_name(node, &status_name);
      if(status_name == ((char *)NULL))
        complete = 1;

      if(!(status_name == ((char *)NULL)))
      {
        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(status_name, "Complete");
        if(return_value_strcmp_3 == 0)
          complete = 1;

        else
          res = (enum anonymous_25)INSTPROXY_E_OP_IN_PROGRESS;
        free((void *)status_name);
        status_name = (char *)(void *)0;
      }

      if(!(status_cb == ((void (*)(void *, void *, void *))NULL)))
        status_cb(command, node, user_data);

      plist_free(node);
      node = (void *)0;
    }

    if(complete == 0)
      tmp_if_expr_1 = client->parent != ((struct property_list_service_client_private *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
  }
  while(tmp_if_expr_1);
  if(!(command_name == ((char *)NULL)))
    free((void *)command_name);

  return res;
}

// instproxy_receive_status_loop_thread
// file installation_proxy.c line 416
static void * instproxy_receive_status_loop_thread(void *arg)
{
  struct instproxy_status_data *data = (struct instproxy_status_data *)arg;
  instproxy_receive_status_loop(data->client, data->command, data->cbfunc, data->user_data);
  instproxy_lock(data->client);
  if(!(data->command == NULL))
    plist_free(data->command);

  if(!(data->client->receive_status_thread == 0ul))
  {
    thread_free(data->client->receive_status_thread);
    data->client->receive_status_thread = (unsigned long int)(void *)0;
  }

  instproxy_unlock(data->client);
  free((void *)data);
  return (void *)0;
}

// instproxy_receive_status_loop_with_callback
// file installation_proxy.c line 462
static enum anonymous_25 instproxy_receive_status_loop_with_callback(struct instproxy_client_private *client, void *command, enum anonymous_26 async, void (*status_cb)(void *, void *, void *), void *user_data)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct instproxy_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(command == NULL || tmp_if_expr_1)
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
    if(!(client->receive_status_thread == 0ul))
      return (enum anonymous_25)INSTPROXY_E_OP_IN_PROGRESS;

    else
    {
      enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
      if((signed int)async == INSTPROXY_COMMAND_TYPE_ASYNC)
      {
        struct instproxy_status_data *data;
        void *return_value_malloc_2;
        return_value_malloc_2=malloc(sizeof(struct instproxy_status_data) /*32ul*/ );
        data = (struct instproxy_status_data *)return_value_malloc_2;
        if(!(data == ((struct instproxy_status_data *)NULL)))
        {
          data->client = client;
          data->command=plist_copy(command);
          data->cbfunc = status_cb;
          data->user_data = user_data;
          signed int return_value_thread_new_3;
          return_value_thread_new_3=thread_new(&client->receive_status_thread, instproxy_receive_status_loop_thread, (void *)data);
          if(return_value_thread_new_3 == 0)
            res = (enum anonymous_25)INSTPROXY_E_SUCCESS;

        }

      }

      else
        res=instproxy_receive_status_loop(client, command, status_cb, user_data);
      return res;
    }
}

// instproxy_remove_archive
// file installation_proxy.c line 756
enum anonymous_25 instproxy_remove_archive(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  void *command;
  command=plist_new_dict();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("RemoveArchive");
  plist_dict_set_item(command, "Command", return_value_plist_new_string_1);
  void *return_value_plist_copy_2;
  if(!(client_options == NULL))
  {
    return_value_plist_copy_2=plist_copy(client_options);
    plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_2);
  }

  void *return_value_plist_new_string_3;
  return_value_plist_new_string_3=plist_new_string(appid);
  plist_dict_set_item(command, "ApplicationIdentifier", return_value_plist_new_string_3);
  res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_ASYNC, status_cb, user_data);
  plist_free(command);
  return res;
}

// instproxy_restore
// file installation_proxy.c line 739
enum anonymous_25 instproxy_restore(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  void *command;
  command=plist_new_dict();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("Restore");
  plist_dict_set_item(command, "Command", return_value_plist_new_string_1);
  void *return_value_plist_copy_2;
  if(!(client_options == NULL))
  {
    return_value_plist_copy_2=plist_copy(client_options);
    plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_2);
  }

  void *return_value_plist_new_string_3;
  return_value_plist_new_string_3=plist_new_string(appid);
  plist_dict_set_item(command, "ApplicationIdentifier", return_value_plist_new_string_3);
  res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_ASYNC, status_cb, user_data);
  plist_free(command);
  return res;
}

// instproxy_send_command
// file installation_proxy.c line 288
static enum anonymous_25 instproxy_send_command(struct instproxy_client_private *client, void *command)
{
  if(command == NULL || client == ((struct instproxy_client_private *)NULL))
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    enum anonymous_25 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_1;
    return_value_property_list_service_send_xml_plist_1=property_list_service_send_xml_plist(client->parent, command);
    res=instproxy_error(return_value_property_list_service_send_xml_plist_1);
    if(!((signed int)res == INSTPROXY_E_SUCCESS))
      return res;

    else
      return res;
  }
}

// instproxy_status_get_current_list
// file installation_proxy.c line 871
void instproxy_status_get_current_list(void *status, unsigned long int *total, unsigned long int *current_index, unsigned long int *current_amount, void **list)
{
  void *node = (void *)0;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(!(status == NULL))
  {
    return_value_plist_get_node_type_2=plist_get_node_type(status);
    if((signed int)return_value_plist_get_node_type_2 == PLIST_DICT)
    {
      if(!(list == ((void **)NULL)))
      {
        node=plist_dict_get_item(status, "CurrentList");
        if(!(node == NULL))
        {
          unsigned int return_value_plist_array_get_size_1;
          return_value_plist_array_get_size_1=plist_array_get_size(node);
          *current_amount = (unsigned long int)return_value_plist_array_get_size_1;
          *list=plist_copy(node);
        }

      }

      if(!(total == ((unsigned long int *)NULL)))
      {
        node=plist_dict_get_item(status, "Total");
        if(!(node == NULL))
          plist_get_uint_val(node, total);

      }

      if(!(current_amount == ((unsigned long int *)NULL)))
      {
        node=plist_dict_get_item(status, "CurrentAmount");
        if(!(node == NULL))
          plist_get_uint_val(node, current_amount);

      }

      if(!(current_index == ((unsigned long int *)NULL)))
      {
        node=plist_dict_get_item(status, "CurrentIndex");
        if(!(node == NULL))
          plist_get_uint_val(node, current_index);

      }

    }

  }

}

// instproxy_status_get_error
// file installation_proxy.c line 810
enum anonymous_25 instproxy_status_get_error(void *status, char **name, char **description, unsigned long int *code)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  if(status == NULL || name == ((char **)NULL))
    return (enum anonymous_25)INSTPROXY_E_INVALID_ARG;

  else
  {
    void *node;
    node=plist_dict_get_item(status, "Error");
    if(!(node == NULL))
      plist_get_string_val(node, name);

    else
      res = (enum anonymous_25)INSTPROXY_E_SUCCESS;
    if(!(code == ((unsigned long int *)NULL)))
    {
      *code = (unsigned long int)0;
      node=plist_dict_get_item(status, "ErrorDetail");
      if(!(node == NULL))
      {
        plist_get_uint_val(node, code);
        *code = *code & (unsigned long int)0xffffffff;
      }

    }

    if(!(description == ((char **)NULL)))
    {
      node=plist_dict_get_item(status, "ErrorDescription");
      if(!(node == NULL))
        plist_get_string_val(node, description);

    }

    if(!(*name == ((char *)NULL)))
      res=instproxy_strtoerr(*name);

    return res;
  }
}

// instproxy_status_get_name
// file installation_proxy.c line 848
void instproxy_status_get_name(void *status, char **name)
{
  *name = (char *)(void *)0;
  if(!(name == ((char **)NULL)))
  {
    void *node;
    node=plist_dict_get_item(status, "Status");
    if(!(node == NULL))
      plist_get_string_val(node, name);

  }

}

// instproxy_status_get_percent_complete
// file installation_proxy.c line 859
void instproxy_status_get_percent_complete(void *status, signed int *percent)
{
  unsigned long int val = (unsigned long int)0;
  if(!(percent == ((signed int *)NULL)))
  {
    void *node;
    node=plist_dict_get_item(status, "PercentComplete");
    if(!(node == NULL))
    {
      plist_get_uint_val(node, &val);
      *percent = (signed int)val;
    }

  }

}

// instproxy_strtoerr
// file installation_proxy.c line 57
static enum anonymous_25 instproxy_strtoerr(const char *name)
{
  enum anonymous_25 err = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  signed int return_value_strcmp_58;
  return_value_strcmp_58=strcmp(name, "AlreadyArchived");
  signed int return_value_strcmp_57;
  signed int return_value_strcmp_56;
  signed int return_value_strcmp_55;
  signed int return_value_strcmp_54;
  signed int return_value_strcmp_53;
  signed int return_value_strcmp_52;
  signed int return_value_strcmp_51;
  signed int return_value_strcmp_50;
  signed int return_value_strcmp_49;
  signed int return_value_strcmp_48;
  signed int return_value_strcmp_47;
  signed int return_value_strcmp_46;
  signed int return_value_strcmp_45;
  signed int return_value_strcmp_44;
  signed int return_value_strcmp_43;
  signed int return_value_strcmp_42;
  signed int return_value_strcmp_41;
  signed int return_value_strcmp_40;
  signed int return_value_strcmp_39;
  signed int return_value_strcmp_38;
  signed int return_value_strcmp_37;
  signed int return_value_strcmp_36;
  signed int return_value_strcmp_35;
  signed int return_value_strcmp_34;
  signed int return_value_strcmp_33;
  signed int return_value_strcmp_32;
  signed int return_value_strcmp_31;
  signed int return_value_strcmp_30;
  signed int return_value_strcmp_29;
  signed int return_value_strcmp_28;
  signed int return_value_strcmp_27;
  signed int return_value_strcmp_26;
  signed int return_value_strcmp_25;
  signed int return_value_strcmp_24;
  signed int return_value_strcmp_23;
  signed int return_value_strcmp_22;
  signed int return_value_strcmp_21;
  signed int return_value_strcmp_20;
  signed int return_value_strcmp_19;
  signed int return_value_strcmp_18;
  signed int return_value_strcmp_17;
  signed int return_value_strcmp_16;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_14;
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_12;
  signed int return_value_strcmp_11;
  signed int return_value_strcmp_10;
  signed int return_value_strcmp_9;
  signed int return_value_strcmp_8;
  signed int return_value_strcmp_7;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_5;
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_58 == 0)
    err = (enum anonymous_25)INSTPROXY_E_ALREADY_ARCHIVED;

  else
  {
    return_value_strcmp_57=strcmp(name, "APIInternalError");
    if(return_value_strcmp_57 == 0)
      err = (enum anonymous_25)INSTPROXY_E_API_INTERNAL_ERROR;

    else
    {
      return_value_strcmp_56=strcmp(name, "ApplicationAlreadyInstalled");
      if(return_value_strcmp_56 == 0)
        err = (enum anonymous_25)INSTPROXY_E_APPLICATION_ALREADY_INSTALLED;

      else
      {
        return_value_strcmp_55=strcmp(name, "ApplicationMoveFailed");
        if(return_value_strcmp_55 == 0)
          err = (enum anonymous_25)INSTPROXY_E_APPLICATION_MOVE_FAILED;

        else
        {
          return_value_strcmp_54=strcmp(name, "ApplicationSINFCaptureFailed");
          if(return_value_strcmp_54 == 0)
            err = (enum anonymous_25)INSTPROXY_E_APPLICATION_SINF_CAPTURE_FAILED;

          else
          {
            return_value_strcmp_53=strcmp(name, "ApplicationSandboxFailed");
            if(return_value_strcmp_53 == 0)
              err = (enum anonymous_25)INSTPROXY_E_APPLICATION_SANDBOX_FAILED;

            else
            {
              return_value_strcmp_52=strcmp(name, "ApplicationVerificationFailed");
              if(return_value_strcmp_52 == 0)
                err = (enum anonymous_25)INSTPROXY_E_APPLICATION_VERIFICATION_FAILED;

              else
              {
                return_value_strcmp_51=strcmp(name, "ArchiveDestructionFailed");
                if(return_value_strcmp_51 == 0)
                  err = (enum anonymous_25)INSTPROXY_E_ARCHIVE_DESTRUCTION_FAILED;

                else
                {
                  return_value_strcmp_50=strcmp(name, "BundleVerificationFailed");
                  if(return_value_strcmp_50 == 0)
                    err = (enum anonymous_25)INSTPROXY_E_BUNDLE_VERIFICATION_FAILED;

                  else
                  {
                    return_value_strcmp_49=strcmp(name, "CarrierBundleCopyFailed");
                    if(return_value_strcmp_49 == 0)
                      err = (enum anonymous_25)INSTPROXY_E_CARRIER_BUNDLE_COPY_FAILED;

                    else
                    {
                      return_value_strcmp_48=strcmp(name, "CarrierBundleDirectoryCreationFailed");
                      if(return_value_strcmp_48 == 0)
                        err = (enum anonymous_25)INSTPROXY_E_CARRIER_BUNDLE_DIRECTORY_CREATION_FAILED;

                      else
                      {
                        return_value_strcmp_47=strcmp(name, "CarrierBundleMissingSupportedSIMs");
                        if(return_value_strcmp_47 == 0)
                          err = (enum anonymous_25)INSTPROXY_E_CARRIER_BUNDLE_MISSING_SUPPORTED_SIMS;

                        else
                        {
                          return_value_strcmp_46=strcmp(name, "CommCenterNotificationFailed");
                          if(return_value_strcmp_46 == 0)
                            err = (enum anonymous_25)INSTPROXY_E_COMM_CENTER_NOTIFICATION_FAILED;

                          else
                          {
                            return_value_strcmp_45=strcmp(name, "ContainerCreationFailed");
                            if(return_value_strcmp_45 == 0)
                              err = (enum anonymous_25)INSTPROXY_E_CONTAINER_CREATION_FAILED;

                            else
                            {
                              return_value_strcmp_44=strcmp(name, "ContainerP0wnFailed");
                              if(return_value_strcmp_44 == 0)
                                err = (enum anonymous_25)INSTPROXY_E_CONTAINER_P0WN_FAILED;

                              else
                              {
                                return_value_strcmp_43=strcmp(name, "ContainerRemovalFailed");
                                if(return_value_strcmp_43 == 0)
                                  err = (enum anonymous_25)INSTPROXY_E_CONTAINER_REMOVAL_FAILED;

                                else
                                {
                                  return_value_strcmp_42=strcmp(name, "EmbeddedProfileInstallFailed");
                                  if(return_value_strcmp_42 == 0)
                                    err = (enum anonymous_25)INSTPROXY_E_EMBEDDED_PROFILE_INSTALL_FAILED;

                                  else
                                  {
                                    return_value_strcmp_41=strcmp(name, "ExecutableTwiddleFailed");
                                    if(return_value_strcmp_41 == 0)
                                      err = (enum anonymous_25)INSTPROXY_E_EXECUTABLE_TWIDDLE_FAILED;

                                    else
                                    {
                                      return_value_strcmp_40=strcmp(name, "ExistenceCheckFailed");
                                      if(return_value_strcmp_40 == 0)
                                        err = (enum anonymous_25)INSTPROXY_E_EXISTENCE_CHECK_FAILED;

                                      else
                                      {
                                        return_value_strcmp_39=strcmp(name, "InstallMapUpdateFailed");
                                        if(return_value_strcmp_39 == 0)
                                          err = (enum anonymous_25)INSTPROXY_E_INSTALL_MAP_UPDATE_FAILED;

                                        else
                                        {
                                          return_value_strcmp_38=strcmp(name, "ManifestCaptureFailed");
                                          if(return_value_strcmp_38 == 0)
                                            err = (enum anonymous_25)INSTPROXY_E_MANIFEST_CAPTURE_FAILED;

                                          else
                                          {
                                            return_value_strcmp_37=strcmp(name, "MapGenerationFailed");
                                            if(return_value_strcmp_37 == 0)
                                              err = (enum anonymous_25)INSTPROXY_E_MAP_GENERATION_FAILED;

                                            else
                                            {
                                              return_value_strcmp_36=strcmp(name, "MissingBundleExecutable");
                                              if(return_value_strcmp_36 == 0)
                                                err = (enum anonymous_25)INSTPROXY_E_MISSING_BUNDLE_EXECUTABLE;

                                              else
                                              {
                                                return_value_strcmp_35=strcmp(name, "MissingBundleIdentifier");
                                                if(return_value_strcmp_35 == 0)
                                                  err = (enum anonymous_25)INSTPROXY_E_MISSING_BUNDLE_IDENTIFIER;

                                                else
                                                {
                                                  return_value_strcmp_34=strcmp(name, "MissingBundlePath");
                                                  if(return_value_strcmp_34 == 0)
                                                    err = (enum anonymous_25)INSTPROXY_E_MISSING_BUNDLE_PATH;

                                                  else
                                                  {
                                                    return_value_strcmp_33=strcmp(name, "MissingContainer");
                                                    if(return_value_strcmp_33 == 0)
                                                      err = (enum anonymous_25)INSTPROXY_E_MISSING_CONTAINER;

                                                    else
                                                    {
                                                      return_value_strcmp_32=strcmp(name, "NotificationFailed");
                                                      if(return_value_strcmp_32 == 0)
                                                        err = (enum anonymous_25)INSTPROXY_E_NOTIFICATION_FAILED;

                                                      else
                                                      {
                                                        return_value_strcmp_31=strcmp(name, "PackageExtractionFailed");
                                                        if(return_value_strcmp_31 == 0)
                                                          err = (enum anonymous_25)INSTPROXY_E_PACKAGE_EXTRACTION_FAILED;

                                                        else
                                                        {
                                                          return_value_strcmp_30=strcmp(name, "PackageInspectionFailed");
                                                          if(return_value_strcmp_30 == 0)
                                                            err = (enum anonymous_25)INSTPROXY_E_PACKAGE_INSPECTION_FAILED;

                                                          else
                                                          {
                                                            return_value_strcmp_29=strcmp(name, "PackageMoveFailed");
                                                            if(return_value_strcmp_29 == 0)
                                                              err = (enum anonymous_25)INSTPROXY_E_PACKAGE_MOVE_FAILED;

                                                            else
                                                            {
                                                              return_value_strcmp_28=strcmp(name, "PathConversionFailed");
                                                              if(return_value_strcmp_28 == 0)
                                                                err = (enum anonymous_25)INSTPROXY_E_PATH_CONVERSION_FAILED;

                                                              else
                                                              {
                                                                return_value_strcmp_27=strcmp(name, "RestoreContainerFailed");
                                                                if(return_value_strcmp_27 == 0)
                                                                  err = (enum anonymous_25)INSTPROXY_E_RESTORE_CONTAINER_FAILED;

                                                                else
                                                                {
                                                                  return_value_strcmp_26=strcmp(name, "SeatbeltProfileRemovalFailed");
                                                                  if(return_value_strcmp_26 == 0)
                                                                    err = (enum anonymous_25)INSTPROXY_E_SEATBELT_PROFILE_REMOVAL_FAILED;

                                                                  else
                                                                  {
                                                                    return_value_strcmp_25=strcmp(name, "StageCreationFailed");
                                                                    if(return_value_strcmp_25 == 0)
                                                                      err = (enum anonymous_25)INSTPROXY_E_STAGE_CREATION_FAILED;

                                                                    else
                                                                    {
                                                                      return_value_strcmp_24=strcmp(name, "SymlinkFailed");
                                                                      if(return_value_strcmp_24 == 0)
                                                                        err = (enum anonymous_25)INSTPROXY_E_SYMLINK_FAILED;

                                                                      else
                                                                      {
                                                                        return_value_strcmp_23=strcmp(name, "UnknownCommand");
                                                                        if(return_value_strcmp_23 == 0)
                                                                          err = (enum anonymous_25)INSTPROXY_E_UNKNOWN_COMMAND;

                                                                        else
                                                                        {
                                                                          return_value_strcmp_22=strcmp(name, "iTunesArtworkCaptureFailed");
                                                                          if(return_value_strcmp_22 == 0)
                                                                            err = (enum anonymous_25)INSTPROXY_E_ITUNES_ARTWORK_CAPTURE_FAILED;

                                                                          else
                                                                          {
                                                                            return_value_strcmp_21=strcmp(name, "iTunesMetadataCaptureFailed");
                                                                            if(return_value_strcmp_21 == 0)
                                                                              err = (enum anonymous_25)INSTPROXY_E_ITUNES_METADATA_CAPTURE_FAILED;

                                                                            else
                                                                            {
                                                                              return_value_strcmp_20=strcmp(name, "DeviceOSVersionTooLow");
                                                                              if(return_value_strcmp_20 == 0)
                                                                                err = (enum anonymous_25)INSTPROXY_E_DEVICE_OS_VERSION_TOO_LOW;

                                                                              else
                                                                              {
                                                                                return_value_strcmp_19=strcmp(name, "DeviceFamilyNotSupported");
                                                                                if(return_value_strcmp_19 == 0)
                                                                                  err = (enum anonymous_25)INSTPROXY_E_DEVICE_FAMILY_NOT_SUPPORTED;

                                                                                else
                                                                                {
                                                                                  return_value_strcmp_18=strcmp(name, "PackagePatchFailed");
                                                                                  if(return_value_strcmp_18 == 0)
                                                                                    err = (enum anonymous_25)INSTPROXY_E_PACKAGE_PATCH_FAILED;

                                                                                  else
                                                                                  {
                                                                                    return_value_strcmp_17=strcmp(name, "IncorrectArchitecture");
                                                                                    if(return_value_strcmp_17 == 0)
                                                                                      err = (enum anonymous_25)INSTPROXY_E_INCORRECT_ARCHITECTURE;

                                                                                    else
                                                                                    {
                                                                                      return_value_strcmp_16=strcmp(name, "PluginCopyFailed");
                                                                                      if(return_value_strcmp_16 == 0)
                                                                                        err = (enum anonymous_25)INSTPROXY_E_PLUGIN_COPY_FAILED;

                                                                                      else
                                                                                      {
                                                                                        return_value_strcmp_15=strcmp(name, "BreadcrumbFailed");
                                                                                        if(return_value_strcmp_15 == 0)
                                                                                          err = (enum anonymous_25)INSTPROXY_E_BREADCRUMB_FAILED;

                                                                                        else
                                                                                        {
                                                                                          return_value_strcmp_14=strcmp(name, "BreadcrumbUnlockFailed");
                                                                                          if(return_value_strcmp_14 == 0)
                                                                                            err = (enum anonymous_25)INSTPROXY_E_BREADCRUMB_UNLOCK_FAILED;

                                                                                          else
                                                                                          {
                                                                                            return_value_strcmp_13=strcmp(name, "GeoJSONCaptureFailed");
                                                                                            if(return_value_strcmp_13 == 0)
                                                                                              err = (enum anonymous_25)INSTPROXY_E_GEOJSON_CAPTURE_FAILED;

                                                                                            else
                                                                                            {
                                                                                              return_value_strcmp_12=strcmp(name, "NewsstandArtworkCaptureFailed");
                                                                                              if(return_value_strcmp_12 == 0)
                                                                                                err = (enum anonymous_25)INSTPROXY_E_NEWSSTAND_ARTWORK_CAPTURE_FAILED;

                                                                                              else
                                                                                              {
                                                                                                return_value_strcmp_11=strcmp(name, "MissingCommand");
                                                                                                if(return_value_strcmp_11 == 0)
                                                                                                  err = (enum anonymous_25)INSTPROXY_E_MISSING_COMMAND;

                                                                                                else
                                                                                                {
                                                                                                  return_value_strcmp_10=strcmp(name, "NotEntitled");
                                                                                                  if(return_value_strcmp_10 == 0)
                                                                                                    err = (enum anonymous_25)INSTPROXY_E_NOT_ENTITLED;

                                                                                                  else
                                                                                                  {
                                                                                                    return_value_strcmp_9=strcmp(name, "MissingPackagePath");
                                                                                                    if(return_value_strcmp_9 == 0)
                                                                                                      err = (enum anonymous_25)INSTPROXY_E_MISSING_PACKAGE_PATH;

                                                                                                    else
                                                                                                    {
                                                                                                      return_value_strcmp_8=strcmp(name, "MissingContainerPath");
                                                                                                      if(return_value_strcmp_8 == 0)
                                                                                                        err = (enum anonymous_25)INSTPROXY_E_MISSING_CONTAINER_PATH;

                                                                                                      else
                                                                                                      {
                                                                                                        return_value_strcmp_7=strcmp(name, "MissingApplicationIdentifier");
                                                                                                        if(return_value_strcmp_7 == 0)
                                                                                                          err = (enum anonymous_25)INSTPROXY_E_MISSING_APPLICATION_IDENTIFIER;

                                                                                                        else
                                                                                                        {
                                                                                                          return_value_strcmp_6=strcmp(name, "MissingAttributeValue");
                                                                                                          if(return_value_strcmp_6 == 0)
                                                                                                            err = (enum anonymous_25)INSTPROXY_E_MISSING_ATTRIBUTE_VALUE;

                                                                                                          else
                                                                                                          {
                                                                                                            return_value_strcmp_5=strcmp(name, "LookupFailed");
                                                                                                            if(return_value_strcmp_5 == 0)
                                                                                                              err = (enum anonymous_25)INSTPROXY_E_LOOKUP_FAILED;

                                                                                                            else
                                                                                                            {
                                                                                                              return_value_strcmp_4=strcmp(name, "DictCreationFailed");
                                                                                                              if(return_value_strcmp_4 == 0)
                                                                                                                err = (enum anonymous_25)INSTPROXY_E_DICT_CREATION_FAILED;

                                                                                                              else
                                                                                                              {
                                                                                                                return_value_strcmp_3=strcmp(name, "InstallProhibited");
                                                                                                                if(return_value_strcmp_3 == 0)
                                                                                                                  err = (enum anonymous_25)INSTPROXY_E_INSTALL_PROHIBITED;

                                                                                                                else
                                                                                                                {
                                                                                                                  return_value_strcmp_2=strcmp(name, "UninstallProhibited");
                                                                                                                  if(return_value_strcmp_2 == 0)
                                                                                                                    err = (enum anonymous_25)INSTPROXY_E_UNINSTALL_PROHIBITED;

                                                                                                                  else
                                                                                                                  {
                                                                                                                    return_value_strcmp_1=strcmp(name, "MissingBundleVersion");
                                                                                                                    if(return_value_strcmp_1 == 0)
                                                                                                                      err = (enum anonymous_25)INSTPROXY_E_MISSING_BUNDLE_VERSION;

                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return err;
}

// instproxy_uninstall
// file installation_proxy.c line 689
enum anonymous_25 instproxy_uninstall(struct instproxy_client_private *client, const char *appid, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  void *command;
  command=plist_new_dict();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("Uninstall");
  plist_dict_set_item(command, "Command", return_value_plist_new_string_1);
  void *return_value_plist_copy_2;
  if(!(client_options == NULL))
  {
    return_value_plist_copy_2=plist_copy(client_options);
    plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_2);
  }

  void *return_value_plist_new_string_3;
  return_value_plist_new_string_3=plist_new_string(appid);
  plist_dict_set_item(command, "ApplicationIdentifier", return_value_plist_new_string_3);
  res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_ASYNC, status_cb, user_data);
  plist_free(command);
  return res;
}

// instproxy_unlock
// file installation_proxy.c line 198
static void instproxy_unlock(struct instproxy_client_private *client)
{
  mutex_unlock(&client->mutex);
}

// instproxy_upgrade
// file installation_proxy.c line 672
enum anonymous_25 instproxy_upgrade(struct instproxy_client_private *client, const char *pkg_path, void *client_options, void (*status_cb)(void *, void *, void *), void *user_data)
{
  enum anonymous_25 res = (enum anonymous_25)INSTPROXY_E_UNKNOWN_ERROR;
  void *command;
  command=plist_new_dict();
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("Upgrade");
  plist_dict_set_item(command, "Command", return_value_plist_new_string_1);
  void *return_value_plist_copy_2;
  if(!(client_options == NULL))
  {
    return_value_plist_copy_2=plist_copy(client_options);
    plist_dict_set_item(command, "ClientOptions", return_value_plist_copy_2);
  }

  void *return_value_plist_new_string_3;
  return_value_plist_new_string_3=plist_new_string(pkg_path);
  plist_dict_set_item(command, "PackagePath", return_value_plist_new_string_3);
  res=instproxy_perform_command(client, command, (enum anonymous_26)INSTPROXY_COMMAND_TYPE_ASYNC, status_cb, user_data);
  plist_free(command);
  return res;
}

// internal_cert_callback
// file idevice.c line 629
static signed int internal_cert_callback(struct gnutls_session_int *session, const struct anonymous_8 *req_ca_rdn, signed int nreqs, const enum anonymous_19 *sign_algos, signed int sign_algos_length, struct gnutls_retr2_st *st)
{
  signed int res = -1;
  enum anonymous_31 type;
  type=gnutls_certificate_type_get(session);
  if((signed int)type == GNUTLS_CRT_X509)
  {
    struct ssl_data_private *ssl_data;
    void *return_value_gnutls_session_get_ptr_1;
    return_value_gnutls_session_get_ptr_1=gnutls_session_get_ptr(session);
    ssl_data = (struct ssl_data_private *)return_value_gnutls_session_get_ptr_1;
    if(!(ssl_data == ((struct ssl_data_private *)NULL)))
    {
      if(!(ssl_data->host_privkey == ((struct gnutls_x509_privkey_int *)NULL)))
      {
        if(!(ssl_data->host_cert == ((struct gnutls_x509_crt_int *)NULL)))
        {
          st->cert_type = type;
          st->key_type = (enum anonymous_32)GNUTLS_PRIVKEY_X509;
          st->ncerts = (unsigned int)1;
          st->cert.x509 = &ssl_data->host_cert;
          st->key.x509 = ssl_data->host_privkey;
          st->deinit_all = (unsigned int)0;
          res = 0;
        }

      }

    }

  }

  return res;
}

// internal_connection_receive
// file idevice.c line 423
static enum anonymous_5 internal_connection_receive(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes)
{
  if(connection == ((struct idevice_connection_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if((signed int)connection->type == CONNECTION_USBMUXD)
    {
      signed int res;
      res=usbmuxd_recv((signed int)(signed long int)connection->data, data, len, recv_bytes);
      if(!(res >= 0))
        return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;

      return (enum anonymous_5)IDEVICE_E_SUCCESS;
    }

    return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
  }
}

// internal_connection_receive_timeout
// file idevice.c line 370
static enum anonymous_5 internal_connection_receive_timeout(struct idevice_connection_private *connection, char *data, unsigned int len, unsigned int *recv_bytes, unsigned int timeout)
{
  if(connection == ((struct idevice_connection_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if((signed int)connection->type == CONNECTION_USBMUXD)
    {
      signed int res;
      res=usbmuxd_recv_timeout((signed int)(signed long int)connection->data, data, len, recv_bytes, timeout);
      if(!(res >= 0))
        return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;

      return (enum anonymous_5)IDEVICE_E_SUCCESS;
    }

    return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
  }
}

// internal_connection_send
// file idevice.c line 323
static enum anonymous_5 internal_connection_send(struct idevice_connection_private *connection, const char *data, unsigned int len, unsigned int *sent_bytes)
{
  if(data == ((const char *)NULL) || connection == ((struct idevice_connection_private *)NULL))
    return (enum anonymous_5)IDEVICE_E_INVALID_ARG;

  else
  {
    if((signed int)connection->type == CONNECTION_USBMUXD)
    {
      signed int res;
      res=usbmuxd_send((signed int)(signed long int)connection->data, data, len, sent_bytes);
      if(!(res >= 0))
        return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;

      return (enum anonymous_5)IDEVICE_E_SUCCESS;
    }

    return (enum anonymous_5)IDEVICE_E_UNKNOWN_ERROR;
  }
}

// internal_diagnostics_relay_action
// file diagnostics_relay.c line 231
static enum anonymous_49 internal_diagnostics_relay_action(struct diagnostics_relay_client_private *client, const char *name, signed int flags)
{
  if(client == ((struct diagnostics_relay_client_private *)NULL))
    return (enum anonymous_49)DIAGNOSTICS_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_49 ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string(name);
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    if(!((2 & flags) == 0))
    {
      void *return_value_plist_new_bool_2;
      return_value_plist_new_bool_2=plist_new_bool((unsigned char)1);
      plist_dict_set_item(dict, "WaitForDisconnect", return_value_plist_new_bool_2);
    }

    if(!((4 & flags) == 0))
    {
      void *return_value_plist_new_bool_3;
      return_value_plist_new_bool_3=plist_new_bool((unsigned char)1);
      plist_dict_set_item(dict, "DisplayPass", return_value_plist_new_bool_3);
    }

    if(!((8 & flags) == 0))
    {
      void *return_value_plist_new_bool_4;
      return_value_plist_new_bool_4=plist_new_bool((unsigned char)1);
      plist_dict_set_item(dict, "DisplayFail", return_value_plist_new_bool_4);
    }

    ret=diagnostics_relay_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=diagnostics_relay_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_49)DIAGNOSTICS_RELAY_E_PLIST_ERROR;

    else
    {
      signed int check;
      check=diagnostics_relay_check_result(dict);
      if(check == 0)
        ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_SUCCESS;

      else
        if(check == 2)
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_REQUEST;

        else
          ret = (enum anonymous_49)DIAGNOSTICS_RELAY_E_UNKNOWN_ERROR;
      plist_free(dict);
      return ret;
    }
  }
}

// internal_mobilebackup2_receive_message
// file mobilebackup2.c line 163
static enum anonymous_46 internal_mobilebackup2_receive_message(struct mobilebackup2_client_private *client, const char *message, void **result)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup2_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  void *node;
  char *str;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  if(message == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    if(!(result == ((void **)NULL)))
      *result = (void *)0;

    enum anonymous_46 err;
    void *dict = (void *)0;
    signed short int return_value_device_link_service_receive_process_message_2;
    return_value_device_link_service_receive_process_message_2=device_link_service_receive_process_message(client->parent, &dict);
    err=mobilebackup2_error(return_value_device_link_service_receive_process_message_2);
    if((signed int)err == MOBILEBACKUP2_E_SUCCESS)
    {
      node=plist_dict_get_item(dict, "MessageName");
      if(node == NULL)
        err = (enum anonymous_46)MOBILEBACKUP2_E_PLIST_ERROR;

      else
      {
        str = (char *)(void *)0;
        plist_get_string_val(node, &str);
        if(!(str == ((char *)NULL)))
        {
          return_value_strcmp_3=strcmp(str, message);
          tmp_if_expr_4 = return_value_strcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          err = (enum anonymous_46)MOBILEBACKUP2_E_SUCCESS;

        else
          err = (enum anonymous_46)MOBILEBACKUP2_E_REPLY_NOT_OK;
        if(!(str == ((char *)NULL)))
          free((void *)str);

        if(!(result == ((void **)NULL)))
        {
          *result = dict;
          dict = (void *)0;
        }

      }
    }


  leave:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    return err;
  }
}

// internal_plist_receive_timeout
// file property_list_service.c line 176
static enum anonymous_23 internal_plist_receive_timeout(struct property_list_service_client_private *client, void **plist, unsigned int timeout)
{
  enum anonymous_23 res = (enum anonymous_23)PROPERTY_LIST_SERVICE_E_UNKNOWN_ERROR;
  unsigned int pktlen = (unsigned int)0;
  unsigned int bytes = (unsigned int)0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(client == ((struct property_list_service_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(client == ((struct property_list_service_client_private *)NULL)))
      tmp_if_expr_1 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_memcmp_6;
  _Bool tmp_if_expr_5;
  signed int return_value_memcmp_4;
  if(plist == ((void **)NULL) || tmp_if_expr_2)
    return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_INVALID_ARG;

  else
  {
    *plist = (void *)0;
    enum anonymous_20 serr;
    serr=service_receive_with_timeout(client->parent, (char *)&pktlen, (unsigned int)sizeof(unsigned int) /*4ul*/ , &bytes, timeout);
    if(bytes == 0u && (signed int)serr == SERVICE_E_SUCCESS)
      return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_RECEIVE_TIMEOUT;

    else
    {
      if(!(bytes >= 4u))
        return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_MUX_ERROR;

      else
      {
        pktlen = (pktlen & 0xFF000000) >> 24 | (pktlen & (unsigned int)0x00FF0000) >> 8 | (pktlen & (unsigned int)0x0000FF00) << 8 | (pktlen & (unsigned int)0x000000FF) << 24;
        if(!(pktlen >= 16777216u))
        {
          unsigned int curlen = (unsigned int)0;
          char *content = (char *)(void *)0;
          void *return_value_malloc_3;
          return_value_malloc_3=malloc((unsigned long int)pktlen);
          content = (char *)return_value_malloc_3;
          if(content == ((char *)NULL))
            return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_UNKNOWN_ERROR;

          for( ; !(curlen >= pktlen); curlen = curlen + bytes)
          {
            service_receive(client->parent, content + (signed long int)curlen, pktlen - curlen, &bytes);
            if(!(bytes >= 1u))
            {
              res = (enum anonymous_23)PROPERTY_LIST_SERVICE_E_MUX_ERROR;
              break;
            }

          }
          if(!(curlen >= pktlen))
          {
            if(curlen >= 1u)
              debug_buffer(content, (const signed int)curlen);

            free((void *)content);
            return res;
          }

          if(pktlen >= 9u)
          {
            return_value_memcmp_6=memcmp((const void *)content, (const void *)"bplist00", (unsigned long int)8);
            tmp_if_expr_7 = !(return_value_memcmp_6 != 0) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_7 = (_Bool)0;
          if(tmp_if_expr_7)
            plist_from_bin(content, pktlen, plist);

          else
          {
            if(pktlen >= 6u)
            {
              return_value_memcmp_4=memcmp((const void *)content, (const void *)"<?xml", (unsigned long int)5);
              tmp_if_expr_5 = !(return_value_memcmp_4 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_5 = (_Bool)0;
            if(tmp_if_expr_5)
            {
              bytes = (unsigned int)0;
              for( ; !(bytes >= pktlen + 4294967295u); bytes = bytes + 1u)
                if((signed int)content[(signed long int)bytes] >= 0)
                {
                  if(!((signed int)content[(signed long int)bytes] >= 0x20))
                  {
                    if(!((signed int)content[(signed long int)bytes] == 0x09))
                    {
                      if(!((signed int)content[(signed long int)bytes] == 0x0a))
                      {
                        if(!((signed int)content[(signed long int)bytes] == 0x0d))
                          content[(signed long int)bytes] = (char)0x20;

                      }

                    }

                  }

                }

              plist_from_xml(content, pktlen, plist);
            }

            else
              debug_buffer(content, (const signed int)pktlen);
          }
          if(!(*plist == NULL))
            res = (enum anonymous_23)PROPERTY_LIST_SERVICE_E_SUCCESS;

          else
            res = (enum anonymous_23)PROPERTY_LIST_SERVICE_E_PLIST_ERROR;
          free((void *)content);
          content = (char *)(void *)0;
        }

        else
          res = (enum anonymous_23)PROPERTY_LIST_SERVICE_E_UNKNOWN_ERROR;
      }
      return res;
    }
  }
}

// internal_plist_send
// file property_list_service.c line 104
static enum anonymous_23 internal_plist_send(struct property_list_service_client_private *client, void *plist, signed int binary)
{
  enum anonymous_23 res = (enum anonymous_23)PROPERTY_LIST_SERVICE_E_UNKNOWN_ERROR;
  char *content = (char *)(void *)0;
  unsigned int length = (unsigned int)0;
  unsigned int nlen = (unsigned int)0;
  signed int bytes = 0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(client == ((struct property_list_service_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(client == ((struct property_list_service_client_private *)NULL)))
      tmp_if_expr_1 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(plist == NULL || tmp_if_expr_2)
    return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_INVALID_ARG;

  else
  {
    if(!(binary == 0))
      plist_to_bin(plist, &content, &length);

    else
      plist_to_xml(plist, &content, &length);
    if(content == ((char *)NULL) || length == 0u)
      return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_PLIST_ERROR;

    else
    {
      nlen = (length & 0xFF000000) >> 24 | (length & (unsigned int)0x00FF0000) >> 8 | (length & (unsigned int)0x0000FF00) << 8 | (length & (unsigned int)0x000000FF) << 24;
      service_send(client->parent, (const char *)&nlen, (unsigned int)sizeof(unsigned int) /*4ul*/ , (unsigned int *)&bytes);
      if((unsigned long int)bytes == sizeof(unsigned int) /*4ul*/ )
      {
        service_send(client->parent, content, length, (unsigned int *)&bytes);
        if(bytes >= 1)
        {
          if((unsigned int)bytes == length)
            res = (enum anonymous_23)PROPERTY_LIST_SERVICE_E_SUCCESS;

        }

      }

      free((void *)content);
      return res;
    }
  }
}

// internal_set_debug_level
// file debug.c line 44
void internal_set_debug_level(signed int level)
{
  debug_level = level;
}

// internal_ssl_cleanup
// file idevice.c line 556
static void internal_ssl_cleanup(struct ssl_data_private *ssl_data)
{
  if(!(ssl_data == ((struct ssl_data_private *)NULL)))
  {
    if(!(ssl_data->session == ((struct gnutls_session_int *)NULL)))
      gnutls_deinit(ssl_data->session);

    if(!(ssl_data->certificate == ((struct gnutls_certificate_credentials_st *)NULL)))
      gnutls_certificate_free_credentials(ssl_data->certificate);

    if(!(ssl_data->root_cert == ((struct gnutls_x509_crt_int *)NULL)))
      gnutls_x509_crt_deinit(ssl_data->root_cert);

    if(!(ssl_data->host_cert == ((struct gnutls_x509_crt_int *)NULL)))
      gnutls_x509_crt_deinit(ssl_data->host_cert);

    if(!(ssl_data->root_privkey == ((struct gnutls_x509_privkey_int *)NULL)))
      gnutls_x509_privkey_deinit(ssl_data->root_privkey);

    if(!(ssl_data->host_privkey == ((struct gnutls_x509_privkey_int *)NULL)))
      gnutls_x509_privkey_deinit(ssl_data->host_privkey);

  }

}

// internal_ssl_read
// file idevice.c line 493
static signed long int internal_ssl_read(void *transport, char *buffer, unsigned long int length)
{
  signed int bytes = 0;
  signed int pos_start_fill = 0;
  unsigned long int tbytes = (unsigned long int)0;
  signed int this_len = (signed int)length;
  enum anonymous_5 res;
  struct idevice_connection_private *connection = (struct idevice_connection_private *)transport;
  char *recv_buffer;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(char) /*1ul*/  * (unsigned long int)this_len);
  recv_buffer = (char *)return_value_malloc_1;
  do
  {
    res=internal_connection_receive(connection, recv_buffer, (unsigned int)this_len, (unsigned int *)&bytes);
    if(!((signed int)res == IDEVICE_E_SUCCESS))
      return (signed long int)res;

    tbytes = tbytes + (unsigned long int)bytes;
    memcpy((void *)(buffer + (signed long int)pos_start_fill), (const void *)recv_buffer, (unsigned long int)bytes);
    pos_start_fill = pos_start_fill + bytes;
    if(tbytes >= length)
      break;

    this_len = (signed int)(length - tbytes);
  }
  while(!(tbytes >= length));
  if(!(recv_buffer == ((char *)NULL)))
    free((void *)recv_buffer);

  return (signed long int)tbytes;
}

// internal_ssl_write
// file idevice.c line 538
static signed long int internal_ssl_write(void *transport, char *buffer, unsigned long int length)
{
  unsigned int bytes = (unsigned int)0;
  enum anonymous_5 res;
  struct idevice_connection_private *connection = (struct idevice_connection_private *)transport;
  res=internal_connection_send(connection, buffer, (unsigned int)length, &bytes);
  if(!((signed int)res == IDEVICE_E_SUCCESS))
    return (signed long int)-1;

  else
    return (signed long int)bytes;
}

// lockdown_check_result
// file lockdown.c line 142
static enum anonymous_9 lockdown_check_result(void *dict, const char *query_match)
{
  enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
  void *query_node;
  query_node=plist_dict_get_item(dict, "Request");
  signed int return_value_strcmp_1;
  signed int return_value_strcmp_4;
  if(query_node == NULL)
    return ret;

  else
  {
    enum anonymous_11 return_value_plist_get_node_type_2;
    return_value_plist_get_node_type_2=plist_get_node_type(query_node);
    if(!((signed int)return_value_plist_get_node_type_2 == PLIST_STRING))
      return ret;

    else
    {
      char *query_value = (char *)(void *)0;
      plist_get_string_val(query_node, &query_value);
      if(query_value == ((char *)NULL))
        return ret;

      if(!(query_match == ((const char *)NULL)))
      {
        return_value_strcmp_1=strcmp(query_value, query_match);
        if(!(return_value_strcmp_1 == 0))
        {
          free((void *)query_value);
          return ret;
        }

      }

      free((void *)query_value);
    }
    void *result_node;
    result_node=plist_dict_get_item(dict, "Result");
    if(result_node == NULL)
    {
      void *err_node;
      err_node=plist_dict_get_item(dict, "Error");
      if(!(err_node == NULL))
      {
        enum anonymous_11 return_value_plist_get_node_type_3;
        return_value_plist_get_node_type_3=plist_get_node_type(err_node);
        if((signed int)return_value_plist_get_node_type_3 == PLIST_STRING)
        {
          char *err_value = (char *)(void *)0;
          plist_get_string_val(err_node, &err_value);
          if(!(err_value == ((char *)NULL)))
          {
            ret=lockdownd_strtoerr(err_value);
            free((void *)err_value);
          }

        }

        return ret;
      }

      ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
      return ret;
    }

    enum anonymous_11 result_type;
    result_type=plist_get_node_type(result_node);
    if((signed int)result_type == PLIST_STRING)
    {
      char *result_value = (char *)(void *)0;
      plist_get_string_val(result_node, &result_value);
      if(!(result_value == ((char *)NULL)))
      {
        signed int return_value_strcmp_5;
        return_value_strcmp_5=strcmp(result_value, "Success");
        if(return_value_strcmp_5 == 0)
          ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;

        else
        {
          return_value_strcmp_4=strcmp(result_value, "Failure");
          if(return_value_strcmp_4 == 0)
            ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;

        }
      }

      if(!(result_value == ((char *)NULL)))
        free((void *)result_value);

    }

    return ret;
  }
}

// lockdownd_activate
// file lockdown.c line 1347
enum anonymous_9 lockdownd_activate(struct lockdownd_client_private *client, void *activation_record)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
    if(client->session_id == ((char *)NULL))
      return (enum anonymous_9)LOCKDOWN_E_NO_RUNNING_SESSION;

    else
      if(activation_record == NULL)
        return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

      else
      {
        enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
        void *dict;
        dict=plist_new_dict();
        plist_dict_add_label(dict, client->label);
        void *return_value_plist_new_string_1;
        return_value_plist_new_string_1=plist_new_string("Activate");
        plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
        void *return_value_plist_copy_2;
        return_value_plist_copy_2=plist_copy(activation_record);
        plist_dict_set_item(dict, "ActivationRecord", return_value_plist_copy_2);
        ret=lockdownd_send(client, dict);
        plist_free(dict);
        dict = (void *)0;
        ret=lockdownd_receive(client, &dict);
        if(dict == NULL)
          return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

        else
        {
          ret=lockdown_check_result(dict, "Activate");
          plist_free(dict);
          dict = (void *)0;
          return ret;
        }
      }
}

// lockdownd_build_start_service_request
// file lockdown.c line 1204
static enum anonymous_9 lockdownd_build_start_service_request(struct lockdownd_client_private *client, const char *identifier, signed int send_escrow_bag, void **request)
{
  void *dict;
  dict=plist_new_dict();
  plist_dict_add_label(dict, client->label);
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("StartService");
  plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
  void *return_value_plist_new_string_2;
  return_value_plist_new_string_2=plist_new_string(identifier);
  plist_dict_set_item(dict, "Service", return_value_plist_new_string_2);
  _Bool tmp_if_expr_4;
  enum anonymous_11 return_value_plist_get_node_type_3;
  if(!(send_escrow_bag == 0))
  {
    void *pair_record = (void *)0;
    userpref_read_pair_record(client->udid, &pair_record);
    if(pair_record == NULL)
    {
      plist_free(dict);
      return (enum anonymous_9)LOCKDOWN_E_INVALID_CONF;
    }

    void *escrow_bag;
    escrow_bag=plist_dict_get_item(pair_record, "EscrowBag");
    if(escrow_bag == NULL)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_plist_get_node_type_3=plist_get_node_type(escrow_bag);
      tmp_if_expr_4 = PLIST_DATA != (signed int)return_value_plist_get_node_type_3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      plist_free(dict);
      plist_free(pair_record);
      return (enum anonymous_9)LOCKDOWN_E_INVALID_CONF;
    }

    void *return_value_plist_copy_5;
    return_value_plist_copy_5=plist_copy(escrow_bag);
    plist_dict_set_item(dict, "EscrowBag", return_value_plist_copy_5);
    plist_free(pair_record);
  }

  *request = dict;
  return (enum anonymous_9)LOCKDOWN_E_SUCCESS;
}

// lockdownd_client_free
// file ../include/libimobiledevice/lockdown.h line 144
enum anonymous_9 lockdownd_client_free(struct lockdownd_client_private *client)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    if(!(client->session_id == ((char *)NULL)))
      lockdownd_stop_session(client, client->session_id);

    ret=lockdownd_client_free_simple(client);
    return ret;
  }
}

// lockdownd_client_free_simple
// file lockdown.c line 284
static enum anonymous_9 lockdownd_client_free_simple(struct lockdownd_client_private *client)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    if(!(client->parent == ((struct property_list_service_client_private *)NULL)))
    {
      enum anonymous_23 return_value_property_list_service_client_free_1;
      return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
      if((signed int)return_value_property_list_service_client_free_1 == PROPERTY_LIST_SERVICE_E_SUCCESS)
        ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;

    }

    if(!(client->session_id == ((char *)NULL)))
    {
      free((void *)client->session_id);
      client->session_id = (char *)(void *)0;
    }

    if(!(client->udid == ((char *)NULL)))
      free((void *)client->udid);

    if(!(client->label == ((char *)NULL)))
      free((void *)client->label);

    free((void *)client);
    client = (struct lockdownd_client_private *)(void *)0;
    return ret;
  }
}

// lockdownd_client_new
// file lockdown.c line 630
enum anonymous_9 lockdownd_client_new(struct idevice_private *device, struct lockdownd_client_private **client, const char *label)
{
  char *tmp_if_expr_5;
  char *return_value_strdup_4;
  if(client == ((struct lockdownd_client_private **)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
    enum anonymous_23 return_value_property_list_service_client_new_1;
    static struct lockdownd_service_descriptor service = { .port=(unsigned short int)0xf27e, .ssl_enabled=(unsigned char)0 };
    return_value_property_list_service_client_new_1=property_list_service_client_new(device, (struct lockdownd_service_descriptor *)&service, &plistclient);
    if(!((signed int)return_value_property_list_service_client_new_1 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (enum anonymous_9)LOCKDOWN_E_MUX_ERROR;

    else
    {
      struct lockdownd_client_private *client_loc;
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct lockdownd_client_private) /*40ul*/ );
      client_loc = (struct lockdownd_client_private *)return_value_malloc_2;
      client_loc->parent = plistclient;
      client_loc->ssl_enabled = 0;
      client_loc->session_id = (char *)(void *)0;
      enum anonymous_5 return_value_idevice_get_udid_3;
      return_value_idevice_get_udid_3=idevice_get_udid(device, &client_loc->udid);
      if(!(label == ((const char *)NULL)))
      {
        return_value_strdup_4=strdup(label);
        tmp_if_expr_5 = return_value_strdup_4;
      }

      else
        tmp_if_expr_5 = (char *)(void *)0;
      client_loc->label = tmp_if_expr_5;
      *client = client_loc;
      return (enum anonymous_9)LOCKDOWN_E_SUCCESS;
    }
  }
}

// lockdownd_client_new_with_handshake
// file ../include/libimobiledevice/lockdown.h line 134
enum anonymous_9 lockdownd_client_new_with_handshake(struct idevice_private *device, struct lockdownd_client_private **client, const char *label)
{
  if(client == ((struct lockdownd_client_private **)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
    struct lockdownd_client_private *client_loc = (struct lockdownd_client_private *)(void *)0;
    void *pair_record = (void *)0;
    char *host_id = (char *)(void *)0;
    char *type = (char *)(void *)0;
    ret=lockdownd_client_new(device, &client_loc, label);
    if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
      return ret;

    else
    {
      enum anonymous_9 return_value_lockdownd_query_type_2;
      return_value_lockdownd_query_type_2=lockdownd_query_type(client_loc, &type);
      if(!((signed int)return_value_lockdownd_query_type_2 == LOCKDOWN_E_SUCCESS))
        ret = (enum anonymous_9)LOCKDOWN_E_NOT_ENOUGH_DATA;

      else
      {
        signed int return_value_strcmp_1;
        return_value_strcmp_1=strcmp("com.apple.mobile.lockdown", type);
      }
      free((void *)type);
      userpref_read_pair_record(client_loc->udid, &pair_record);
      if(!(pair_record == NULL))
        pair_record_get_host_id(pair_record, &host_id);

      if(host_id == ((char *)NULL) && (signed int)ret == LOCKDOWN_E_SUCCESS)
        ret = (enum anonymous_9)LOCKDOWN_E_INVALID_CONF;

      if(pair_record == NULL && (signed int)ret == LOCKDOWN_E_SUCCESS)
        ret=lockdownd_pair(client_loc, (struct lockdownd_pair_record *)(void *)0);

      plist_free(pair_record);
      pair_record = (void *)0;
      ret=lockdownd_validate_pair(client_loc, (struct lockdownd_pair_record *)(void *)0);
      if((signed int)ret == LOCKDOWN_E_INVALID_HOST_ID)
      {
        free((void *)host_id);
        host_id = (char *)(void *)0;
        ret=lockdownd_pair(client_loc, (struct lockdownd_pair_record *)(void *)0);
        if((signed int)ret == LOCKDOWN_E_SUCCESS)
          ret=lockdownd_validate_pair(client_loc, (struct lockdownd_pair_record *)(void *)0);

      }

      if((signed int)ret == LOCKDOWN_E_SUCCESS)
      {
        if(host_id == ((char *)NULL))
        {
          userpref_read_pair_record(client_loc->udid, &pair_record);
          if(!(pair_record == NULL))
          {
            pair_record_get_host_id(pair_record, &host_id);
            plist_free(pair_record);
          }

        }

        ret=lockdownd_start_session(client_loc, host_id, (char **)(void *)0, (signed int *)(void *)0);
      }

      if((signed int)ret == LOCKDOWN_E_SUCCESS)
        *client = client_loc;

      else
        lockdownd_client_free(client_loc);
      free((void *)host_id);
      return ret;
    }
  }
}

// lockdownd_client_set_label
// file lockdown.c line 330
void lockdownd_client_set_label(struct lockdownd_client_private *client, const char *label)
{
  char *tmp_if_expr_2;
  char *return_value_strdup_1;
  if(!(client == ((struct lockdownd_client_private *)NULL)))
  {
    if(!(client->label == ((char *)NULL)))
      free((void *)client->label);

    if(!(label == ((const char *)NULL)))
    {
      return_value_strdup_1=strdup(label);
      tmp_if_expr_2 = return_value_strdup_1;
    }

    else
      tmp_if_expr_2 = (char *)(void *)0;
    client->label = tmp_if_expr_2;
  }

}

// lockdownd_data_classes_free
// file lockdown.c line 1488
enum anonymous_9 lockdownd_data_classes_free(char **classes)
{
  signed int tmp_post_1;
  if(!(classes == ((char **)NULL)))
  {
    signed int i = 0;
    do
    {
      tmp_post_1 = i;
      i = i + 1;
      if(classes[(signed long int)tmp_post_1] == ((char *)NULL))
        break;

      free((void *)classes[(signed long int)i]);
    }
    while((_Bool)1);
    free((void *)classes);
  }

  return (enum anonymous_9)LOCKDOWN_E_SUCCESS;
}

// lockdownd_deactivate
// file lockdown.c line 1386
enum anonymous_9 lockdownd_deactivate(struct lockdownd_client_private *client)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
    if(client->session_id == ((char *)NULL))
      return (enum anonymous_9)LOCKDOWN_E_NO_RUNNING_SESSION;

    else
    {
      enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
      void *dict;
      dict=plist_new_dict();
      plist_dict_add_label(dict, client->label);
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string("Deactivate");
      plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
      ret=lockdownd_send(client, dict);
      plist_free(dict);
      dict = (void *)0;
      ret=lockdownd_receive(client, &dict);
      if(dict == NULL)
        return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

      else
      {
        ret=lockdown_check_result(dict, "Deactivate");
        plist_free(dict);
        dict = (void *)0;
        return ret;
      }
    }
}

// lockdownd_do_pair
// file lockdown.c line 850
static enum anonymous_9 lockdownd_do_pair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record, const char *verb)
{
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  enum anonymous_11 return_value_plist_get_node_type_14;
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    void *dict = (void *)0;
    void *pair_record_plist = (void *)0;
    void *wifi_node = (void *)0;
    signed int pairing_mode = 0;
    if(!(pair_record == ((struct lockdownd_pair_record *)NULL)))
      tmp_if_expr_5 = pair_record->system_buid != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = pair_record->host_id != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_6 = (_Bool)0;
    if(tmp_if_expr_6)
    {
      if(pair_record->device_certificate == ((char *)NULL))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = !(pair_record->host_certificate != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = !(pair_record->root_certificate != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

      pair_record_plist=lockdownd_pair_record_to_plist(pair_record);
      pairing_mode = 1;
    }

    else
    {
      signed int return_value_strcmp_4;
      return_value_strcmp_4=strcmp("Pair", verb);
      if(return_value_strcmp_4 == 0)
      {
        ret=pair_record_generate(client, &pair_record_plist);
        if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        {
          if(!(pair_record_plist == NULL))
            plist_free(pair_record_plist);

          return ret;
        }

        lockdownd_get_value(client, (const char *)(void *)0, "WiFiAddress", &wifi_node);
      }

      else
      {
        signed int return_value_userpref_has_pair_record_3;
        return_value_userpref_has_pair_record_3=userpref_has_pair_record(client->udid);
        if(!(return_value_userpref_has_pair_record_3 == 0))
        {
          userpref_read_pair_record(client->udid, &pair_record_plist);
          if(pair_record_plist == NULL)
            return (enum anonymous_9)LOCKDOWN_E_INVALID_CONF;

        }

        else
          return (enum anonymous_9)LOCKDOWN_E_INVALID_HOST_ID;
      }
    }
    void *request_pair_record;
    request_pair_record=plist_copy(pair_record_plist);
    plist_dict_remove_item(request_pair_record, "RootPrivateKey");
    plist_dict_remove_item(request_pair_record, "HostPrivateKey");
    dict=plist_new_dict();
    plist_dict_add_label(dict, client->label);
    plist_dict_set_item(dict, "PairRecord", request_pair_record);
    void *return_value_plist_new_string_7;
    return_value_plist_new_string_7=plist_new_string(verb);
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_7);
    void *return_value_plist_new_string_8;
    return_value_plist_new_string_8=plist_new_string("2");
    plist_dict_set_item(dict, "ProtocolVersion", return_value_plist_new_string_8);
    void *options;
    options=plist_new_dict();
    void *return_value_plist_new_bool_9;
    return_value_plist_new_bool_9=plist_new_bool((unsigned char)1);
    plist_dict_set_item(options, "ExtendedPairingErrors", return_value_plist_new_bool_9);
    plist_dict_set_item(dict, "PairingOptions", options);
    ret=lockdownd_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
    {
      plist_free(pair_record_plist);
      if(!(wifi_node == NULL))
        plist_free(wifi_node);

      return ret;
    }

    else
    {
      ret=lockdownd_receive(client, &dict);
      if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
      {
        plist_free(pair_record_plist);
        if(!(wifi_node == NULL))
          plist_free(wifi_node);

        return ret;
      }

      else
      {
        signed int return_value_strcmp_12;
        return_value_strcmp_12=strcmp(verb, "Unpair");
        if(return_value_strcmp_12 == 0)
        {
          enum anonymous_9 return_value_lockdown_check_result_10;
          return_value_lockdown_check_result_10=lockdown_check_result(dict, (const char *)(void *)0);
          if(!((signed int)return_value_lockdown_check_result_10 == LOCKDOWN_E_SUCCESS))
            ret = (enum anonymous_9)LOCKDOWN_E_PAIRING_FAILED;

        }

        else
        {
          enum anonymous_9 return_value_lockdown_check_result_11;
          return_value_lockdown_check_result_11=lockdown_check_result(dict, verb);
          if(!((signed int)return_value_lockdown_check_result_11 == LOCKDOWN_E_SUCCESS))
            ret = (enum anonymous_9)LOCKDOWN_E_PAIRING_FAILED;

        }
        if((signed int)ret == LOCKDOWN_E_SUCCESS)
        {
          if(pairing_mode == 0)
          {
            signed int return_value_strcmp_17;
            return_value_strcmp_17=strcmp("Unpair", verb);
            if(return_value_strcmp_17 == 0)
              userpref_delete_pair_record(client->udid);

            else
            {
              signed int return_value_strcmp_16;
              return_value_strcmp_16=strcmp("Pair", verb);
              if(return_value_strcmp_16 == 0)
              {
                void *extra_node;
                extra_node=plist_dict_get_item(dict, "EscrowBag");
                if(!(extra_node == NULL))
                {
                  return_value_plist_get_node_type_14=plist_get_node_type(extra_node);
                  if((signed int)return_value_plist_get_node_type_14 == PLIST_DATA)
                  {
                    void *return_value_plist_copy_13;
                    return_value_plist_copy_13=plist_copy(extra_node);
                    plist_dict_set_item(pair_record_plist, "EscrowBag", return_value_plist_copy_13);
                    plist_free(extra_node);
                    extra_node = (void *)0;
                  }

                }

                if(!(wifi_node == NULL))
                {
                  void *return_value_plist_copy_15;
                  return_value_plist_copy_15=plist_copy(wifi_node);
                  plist_dict_set_item(pair_record_plist, "WiFiMACAddress", return_value_plist_copy_15);
                  plist_free(wifi_node);
                  wifi_node = (void *)0;
                }

                userpref_save_pair_record(client->udid, pair_record_plist);
              }

            }
          }

        }

        else
        {
          void *error_node = (void *)0;
          error_node=plist_dict_get_item(dict, "Error");
          if(!(error_node == NULL))
          {
            char *value = (char *)(void *)0;
            plist_get_string_val(error_node, &value);
            if(!(value == ((char *)NULL)))
            {
              ret=lockdownd_strtoerr(value);
              free((void *)value);
            }

            plist_free(error_node);
            error_node = (void *)0;
          }

        }
        if(!(pair_record_plist == NULL))
        {
          plist_free(pair_record_plist);
          pair_record_plist = (void *)0;
        }

        if(!(wifi_node == NULL))
        {
          plist_free(wifi_node);
          wifi_node = (void *)0;
        }

        plist_free(dict);
        dict = (void *)0;
        return ret;
      }
    }
  }
}

// lockdownd_do_start_service
// file lockdown.c line 1256
static enum anonymous_9 lockdownd_do_start_service(struct lockdownd_client_private *client, const char *identifier, signed int send_escrow_bag, struct lockdownd_service_descriptor **service)
{
  void *return_value_malloc_1;
  enum anonymous_11 return_value_plist_get_node_type_2;
  enum anonymous_11 return_value_plist_get_node_type_3;
  enum anonymous_11 return_value_plist_get_node_type_4;
  if(service == ((struct lockdownd_service_descriptor **)NULL) || identifier == ((const char *)NULL) || client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    if(!(*service == ((struct lockdownd_service_descriptor *)NULL)))
    {
      (*service)->port = (unsigned short int)0;
      (*service)->ssl_enabled = (unsigned char)0;
    }

    void *dict = (void *)0;
    unsigned short int port_loc = (unsigned short int)0;
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    ret=lockdownd_build_start_service_request(client, identifier, send_escrow_bag, &dict);
    if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
      return ret;

    else
    {
      ret=lockdownd_send(client, dict);
      plist_free(dict);
      dict = (void *)0;
      if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        return ret;

      else
      {
        ret=lockdownd_receive(client, &dict);
        if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
          return ret;

        else
          if(dict == NULL)
            return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

          else
          {
            ret=lockdown_check_result(dict, "StartService");
            if((signed int)ret == LOCKDOWN_E_SUCCESS)
            {
              if(*service == ((struct lockdownd_service_descriptor *)NULL))
              {
                return_value_malloc_1=malloc(sizeof(struct lockdownd_service_descriptor) /*4ul*/ );
                *service = (struct lockdownd_service_descriptor *)return_value_malloc_1;
              }

              (*service)->port = (unsigned short int)0;
              (*service)->ssl_enabled = (unsigned char)0;
              void *node;
              node=plist_dict_get_item(dict, "Port");
              if(!(node == NULL))
              {
                return_value_plist_get_node_type_2=plist_get_node_type(node);
                if((signed int)return_value_plist_get_node_type_2 == PLIST_UINT)
                {
                  unsigned long int port_value = (unsigned long int)0;
                  plist_get_uint_val(node, &port_value);
                  if(!(port_value == 0ul))
                  {
                    port_loc = (unsigned short int)port_value;
                    ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
                  }

                  if((signed int)ret == LOCKDOWN_E_SUCCESS && !(port_loc == 0))
                    (*service)->port = port_loc;

                }

              }

              node=plist_dict_get_item(dict, "EnableServiceSSL");
              if(!(node == NULL))
              {
                return_value_plist_get_node_type_3=plist_get_node_type(node);
                if((signed int)return_value_plist_get_node_type_3 == PLIST_BOOLEAN)
                {
                  unsigned char b = (unsigned char)0;
                  plist_get_bool_val(node, &b);
                  (*service)->ssl_enabled = b;
                }

              }

            }

            else
            {
              void *error_node;
              error_node=plist_dict_get_item(dict, "Error");
              if(!(error_node == NULL))
              {
                return_value_plist_get_node_type_4=plist_get_node_type(error_node);
                if((signed int)return_value_plist_get_node_type_4 == PLIST_STRING)
                {
                  char *error = (char *)(void *)0;
                  plist_get_string_val(error_node, &error);
                  ret=lockdownd_strtoerr(error);
                  free((void *)error);
                }

              }

            }
            plist_free(dict);
            dict = (void *)0;
            return ret;
          }
      }
    }
  }
}

// lockdownd_enter_recovery
// file lockdown.c line 1031
enum anonymous_9 lockdownd_enter_recovery(struct lockdownd_client_private *client)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    plist_dict_add_label(dict, client->label);
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("EnterRecovery");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=lockdownd_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=lockdownd_receive(client, &dict);
    ret=lockdown_check_result(dict, "EnterRecovery");
    plist_free(dict);
    dict = (void *)0;
    return ret;
  }
}

// lockdownd_get_device_name
// file lockdown.c line 613
enum anonymous_9 lockdownd_get_device_name(struct lockdownd_client_private *client, char **device_name)
{
  enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
  void *value = (void *)0;
  ret=lockdownd_get_value(client, (const char *)(void *)0, "DeviceName", &value);
  if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
    return ret;

  else
  {
    plist_get_string_val(value, device_name);
    plist_free(value);
    value = (void *)0;
    return ret;
  }
}

// lockdownd_get_device_public_key_as_key_data
// file lockdown.c line 592
static enum anonymous_9 lockdownd_get_device_public_key_as_key_data(struct lockdownd_client_private *client, struct anonymous_8 *public_key)
{
  enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
  void *value = (void *)0;
  char *value_value = (char *)(void *)0;
  unsigned long int size = (unsigned long int)0;
  ret=lockdownd_get_value(client, (const char *)(void *)0, "DevicePublicKey", &value);
  if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
    return ret;

  else
  {
    plist_get_data_val(value, &value_value, &size);
    public_key->data = (unsigned char *)value_value;
    public_key->size = (unsigned int)size;
    plist_free(value);
    value = (void *)0;
    return ret;
  }
}

// lockdownd_get_device_udid
// file lockdown.c line 567
enum anonymous_9 lockdownd_get_device_udid(struct lockdownd_client_private *client, char **udid)
{
  enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
  void *value = (void *)0;
  ret=lockdownd_get_value(client, (const char *)(void *)0, "UniqueDeviceID", &value);
  if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
    return ret;

  else
  {
    plist_get_string_val(value, udid);
    plist_free(value);
    value = (void *)0;
    return ret;
  }
}

// lockdownd_get_sync_data_classes
// file lockdown.c line 1433
enum anonymous_9 lockdownd_get_sync_data_classes(struct lockdownd_client_private *client, char ***classes, signed int *count)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
    if(client->session_id == ((char *)NULL))
      return (enum anonymous_9)LOCKDOWN_E_NO_RUNNING_SESSION;

    else
    {
      void *dict = (void *)0;
      enum anonymous_9 err = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
      void *value = (void *)0;
      char **newlist = (char **)(void *)0;
      char *val = (char *)(void *)0;
      *classes = (char **)(void *)0;
      *count = 0;
      err=lockdownd_get_value(client, "com.apple.mobile.iTunes", "SyncDataClasses", &dict);
      if(!((signed int)err == LOCKDOWN_E_SUCCESS))
      {
        if(!(dict == NULL))
          plist_free(dict);

        return err;
      }

      else
      {
        enum anonymous_11 return_value_plist_get_node_type_1;
        return_value_plist_get_node_type_1=plist_get_node_type(dict);
        if(!((signed int)return_value_plist_get_node_type_1 == PLIST_ARRAY))
        {
          plist_free(dict);
          return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;
        }

        else
        {
          do
          {
            value=plist_array_get_item(dict, (unsigned int)*count);
            if(value == NULL)
              break;

            plist_get_string_val(value, &val);
            void *return_value_realloc_2;
            return_value_realloc_2=realloc((void *)*classes, sizeof(char *) /*8ul*/  * (unsigned long int)(*count + 1));
            newlist = (char **)return_value_realloc_2;
            str_remove_spaces(val);
            signed int return_value_asprintf_3;
            return_value_asprintf_3=asprintf(&newlist[(signed long int)*count], "com.apple.%s", val);
            free((void *)val);
            val = (char *)(void *)0;
            *classes = newlist;
            *count = *count + 1;
          }
          while((_Bool)1);
          void *return_value_realloc_4;
          return_value_realloc_4=realloc((void *)*classes, sizeof(char *) /*8ul*/  * (unsigned long int)(*count + 1));
          newlist = (char **)return_value_realloc_4;
          newlist[(signed long int)*count] = (char *)(void *)0;
          *classes = newlist;
          if(!(dict == NULL))
            plist_free(dict);

          return (enum anonymous_9)LOCKDOWN_E_SUCCESS;
        }
      }
    }
}

// lockdownd_get_value
// file ../include/libimobiledevice/lockdown.h line 168
enum anonymous_9 lockdownd_get_value(struct lockdownd_client_private *client, const char *domain, const char *key, void **value)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    void *dict = (void *)0;
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    dict=plist_new_dict();
    plist_dict_add_label(dict, client->label);
    if(!(domain == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string(domain);
      plist_dict_set_item(dict, "Domain", return_value_plist_new_string_1);
    }

    if(!(key == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_2;
      return_value_plist_new_string_2=plist_new_string(key);
      plist_dict_set_item(dict, "Key", return_value_plist_new_string_2);
    }

    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string("GetValue");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_3);
    ret=lockdownd_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
      return ret;

    else
    {
      ret=lockdownd_receive(client, &dict);
      if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        return ret;

      else
      {
        ret=lockdown_check_result(dict, "GetValue");
        if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        {
          plist_free(dict);
          return ret;
        }

        else
        {
          void *value_node;
          value_node=plist_dict_get_item(dict, "Value");
          if(!(value_node == NULL))
            *value=plist_copy(value_node);

          plist_free(dict);
          return ret;
        }
      }
    }
  }
}

// lockdownd_goodbye
// file lockdown.c line 1061
enum anonymous_9 lockdownd_goodbye(struct lockdownd_client_private *client)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    plist_dict_add_label(dict, client->label);
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("Goodbye");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=lockdownd_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=lockdownd_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

    else
    {
      ret=lockdown_check_result(dict, "Goodbye");
      plist_free(dict);
      dict = (void *)0;
      return ret;
    }
  }
}

// lockdownd_pair
// file lockdown.c line 1016
enum anonymous_9 lockdownd_pair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record)
{
  enum anonymous_9 return_value_lockdownd_do_pair_1;
  return_value_lockdownd_do_pair_1=lockdownd_do_pair(client, pair_record, "Pair");
  return return_value_lockdownd_do_pair_1;
}

// lockdownd_pair_record_to_plist
// file lockdown.c line 755
static void * lockdownd_pair_record_to_plist(struct lockdownd_pair_record *pair_record)
{
  if(pair_record == ((struct lockdownd_pair_record *)NULL))
    return (void *)0;

  else
  {
    void *dict;
    dict=plist_new_dict();
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(pair_record->device_certificate);
    void *return_value_plist_new_data_2;
    return_value_plist_new_data_2=plist_new_data(pair_record->device_certificate, return_value_strlen_1);
    plist_dict_set_item(dict, "DeviceCertificate", return_value_plist_new_data_2);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(pair_record->host_certificate);
    void *return_value_plist_new_data_4;
    return_value_plist_new_data_4=plist_new_data(pair_record->host_certificate, return_value_strlen_3);
    plist_dict_set_item(dict, "HostCertificate", return_value_plist_new_data_4);
    void *return_value_plist_new_string_5;
    return_value_plist_new_string_5=plist_new_string(pair_record->host_id);
    plist_dict_set_item(dict, "HostID", return_value_plist_new_string_5);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(pair_record->root_certificate);
    void *return_value_plist_new_data_7;
    return_value_plist_new_data_7=plist_new_data(pair_record->root_certificate, return_value_strlen_6);
    plist_dict_set_item(dict, "RootCertificate", return_value_plist_new_data_7);
    void *return_value_plist_new_string_8;
    return_value_plist_new_string_8=plist_new_string(pair_record->system_buid);
    plist_dict_set_item(dict, "SystemBUID", return_value_plist_new_string_8);
    return dict;
  }
}

// lockdownd_query_type
// file lockdown.c line 373
enum anonymous_9 lockdownd_query_type(struct lockdownd_client_private *client, char **type)
{
  _Bool tmp_if_expr_3;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    plist_dict_add_label(dict, client->label);
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("QueryType");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=lockdownd_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=lockdownd_receive(client, &dict);
    if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
      return ret;

    else
    {
      ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
      void *type_node;
      type_node=plist_dict_get_item(dict, "Type");
      if(!(type_node == NULL))
      {
        return_value_plist_get_node_type_2=plist_get_node_type(type_node);
        tmp_if_expr_3 = (signed int)return_value_plist_get_node_type_2 == PLIST_STRING ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        char *typestr = (char *)(void *)0;
        plist_get_string_val(type_node, &typestr);
        if(!(type == ((char **)NULL)))
          *type = typestr;

        else
          free((void *)typestr);
        ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
      }

      plist_free(dict);
      dict = (void *)0;
      return ret;
    }
  }
}

// lockdownd_receive
// file lockdown.c line 340
enum anonymous_9 lockdownd_receive(struct lockdownd_client_private *client, void **plist)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(plist == ((void **)NULL) || client == ((struct lockdownd_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(plist == ((void **)NULL)))
      tmp_if_expr_1 = *plist != NULL ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
    enum anonymous_23 err;
    err=property_list_service_receive_plist(client->parent, plist);
    if(!((signed int)err == PROPERTY_LIST_SERVICE_E_SUCCESS))
      ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;

    if(*plist == NULL)
      ret = (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

    return ret;
  }
}

// lockdownd_remove_value
// file lockdown.c line 520
enum anonymous_9 lockdownd_remove_value(struct lockdownd_client_private *client, const char *domain, const char *key)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    void *dict = (void *)0;
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    dict=plist_new_dict();
    plist_dict_add_label(dict, client->label);
    if(!(domain == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string(domain);
      plist_dict_set_item(dict, "Domain", return_value_plist_new_string_1);
    }

    if(!(key == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_2;
      return_value_plist_new_string_2=plist_new_string(key);
      plist_dict_set_item(dict, "Key", return_value_plist_new_string_2);
    }

    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string("RemoveValue");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_3);
    ret=lockdownd_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
      return ret;

    else
    {
      ret=lockdownd_receive(client, &dict);
      if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        return ret;

      else
      {
        ret=lockdown_check_result(dict, "RemoveValue");
        if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        {
          plist_free(dict);
          return ret;
        }

        else
        {
          plist_free(dict);
          return ret;
        }
      }
    }
  }
}

// lockdownd_send
// file lockdown.c line 358
enum anonymous_9 lockdownd_send(struct lockdownd_client_private *client, void *plist)
{
  if(plist == NULL || client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
    enum anonymous_23 err;
    err=property_list_service_send_xml_plist(client->parent, plist);
    if(!((signed int)err == PROPERTY_LIST_SERVICE_E_SUCCESS))
      ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;

    return ret;
  }
}

// lockdownd_service_descriptor_free
// file ../include/libimobiledevice/lockdown.h line 442
enum anonymous_9 lockdownd_service_descriptor_free(struct lockdownd_service_descriptor *service)
{
  if(!(service == ((struct lockdownd_service_descriptor *)NULL)))
    free((void *)service);

  return (enum anonymous_9)LOCKDOWN_E_SUCCESS;
}

// lockdownd_set_value
// file lockdown.c line 472
enum anonymous_9 lockdownd_set_value(struct lockdownd_client_private *client, const char *domain, const char *key, void *value)
{
  if(value == NULL || client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
  {
    void *dict = (void *)0;
    enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
    dict=plist_new_dict();
    plist_dict_add_label(dict, client->label);
    if(!(domain == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string(domain);
      plist_dict_set_item(dict, "Domain", return_value_plist_new_string_1);
    }

    if(!(key == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_2;
      return_value_plist_new_string_2=plist_new_string(key);
      plist_dict_set_item(dict, "Key", return_value_plist_new_string_2);
    }

    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string("SetValue");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_3);
    plist_dict_set_item(dict, "Value", value);
    ret=lockdownd_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
      return ret;

    else
    {
      ret=lockdownd_receive(client, &dict);
      if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        return ret;

      else
      {
        ret=lockdown_check_result(dict, "SetValue");
        if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
        {
          plist_free(dict);
          return ret;
        }

        else
        {
          plist_free(dict);
          return ret;
        }
      }
    }
  }
}

// lockdownd_start_service
// file ../include/libimobiledevice/lockdown.h line 208
enum anonymous_9 lockdownd_start_service(struct lockdownd_client_private *client, const char *identifier, struct lockdownd_service_descriptor **service)
{
  enum anonymous_9 return_value_lockdownd_do_start_service_1;
  return_value_lockdownd_do_start_service_1=lockdownd_do_start_service(client, identifier, 0, service);
  return return_value_lockdownd_do_start_service_1;
}

// lockdownd_start_service_with_escrow_bag
// file lockdown.c line 1342
enum anonymous_9 lockdownd_start_service_with_escrow_bag(struct lockdownd_client_private *client, const char *identifier, struct lockdownd_service_descriptor **service)
{
  enum anonymous_9 return_value_lockdownd_do_start_service_1;
  return_value_lockdownd_do_start_service_1=lockdownd_do_start_service(client, identifier, 1, service);
  return return_value_lockdownd_do_start_service_1;
}

// lockdownd_start_session
// file lockdown.c line 1095
enum anonymous_9 lockdownd_start_session(struct lockdownd_client_private *client, const char *host_id, char **session_id, signed int *ssl_enabled)
{
  enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
  enum anonymous_23 plret;
  void *dict = (void *)0;
  if(host_id == ((const char *)NULL) || client == ((struct lockdownd_client_private *)NULL))
    ret = (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  if(!(client->session_id == ((char *)NULL)))
    lockdownd_stop_session(client, client->session_id);

  dict=plist_new_dict();
  plist_dict_add_label(dict, client->label);
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string("StartSession");
  plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
  if(!(host_id == ((const char *)NULL)))
  {
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(host_id);
    plist_dict_set_item(dict, "HostID", return_value_plist_new_string_2);
  }

  char *system_buid = (char *)(void *)0;
  userpref_read_system_buid(&system_buid);
  if(!(system_buid == ((char *)NULL)))
  {
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(system_buid);
    plist_dict_set_item(dict, "SystemBUID", return_value_plist_new_string_3);
    if(!(system_buid == ((char *)NULL)))
    {
      free((void *)system_buid);
      system_buid = (char *)(void *)0;
    }

  }

  ret=lockdownd_send(client, dict);
  plist_free(dict);
  dict = (void *)0;
  enum anonymous_11 return_value_plist_get_node_type_4;
  enum anonymous_11 return_value_plist_get_node_type_5;
  if(!((signed int)ret == LOCKDOWN_E_SUCCESS))
    return ret;

  else
  {
    ret=lockdownd_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

    else
    {
      ret=lockdown_check_result(dict, "StartSession");
      if((signed int)ret == LOCKDOWN_E_SUCCESS)
      {
        unsigned char use_ssl = (unsigned char)0;
        void *enable_ssl;
        enable_ssl=plist_dict_get_item(dict, "EnableSessionSSL");
        if(!(enable_ssl == NULL))
        {
          return_value_plist_get_node_type_4=plist_get_node_type(enable_ssl);
          if((signed int)return_value_plist_get_node_type_4 == PLIST_BOOLEAN)
            plist_get_bool_val(enable_ssl, &use_ssl);

        }

        if(!(ssl_enabled == ((signed int *)NULL)))
          *ssl_enabled = (signed int)use_ssl;

        void *session_node;
        session_node=plist_dict_get_item(dict, "SessionID");
        if(!(session_node == NULL))
        {
          return_value_plist_get_node_type_5=plist_get_node_type(session_node);
          if((signed int)return_value_plist_get_node_type_5 == PLIST_STRING)
            plist_get_string_val(session_node, &client->session_id);

        }

        if(!(client->session_id == ((char *)NULL)))
        {
          if(!(session_id == ((char **)NULL)))
            *session_id=strdup(client->session_id);

        }

        if(!(use_ssl == 0))
        {
          plret=property_list_service_enable_ssl(client->parent);
          if((signed int)plret == PROPERTY_LIST_SERVICE_E_SUCCESS)
          {
            ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
            client->ssl_enabled = 1;
          }

          else
          {
            ret = (enum anonymous_9)LOCKDOWN_E_SSL_ERROR;
            client->ssl_enabled = 0;
          }
        }

        else
        {
          client->ssl_enabled = 0;
          ret = (enum anonymous_9)LOCKDOWN_E_SUCCESS;
        }
      }

      plist_free(dict);
      dict = (void *)0;
      return ret;
    }
  }
}

// lockdownd_stop_session
// file lockdown.c line 232
enum anonymous_9 lockdownd_stop_session(struct lockdownd_client_private *client, const char *session_id)
{
  if(client == ((struct lockdownd_client_private *)NULL))
    return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

  else
    if(session_id == ((const char *)NULL))
      return (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;

    else
    {
      enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
      void *dict;
      dict=plist_new_dict();
      plist_dict_add_label(dict, client->label);
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string("StopSession");
      plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
      void *return_value_plist_new_string_2;
      return_value_plist_new_string_2=plist_new_string(session_id);
      plist_dict_set_item(dict, "SessionID", return_value_plist_new_string_2);
      ret=lockdownd_send(client, dict);
      plist_free(dict);
      dict = (void *)0;
      ret=lockdownd_receive(client, &dict);
      if(dict == NULL)
        return (enum anonymous_9)LOCKDOWN_E_PLIST_ERROR;

      else
      {
        ret=lockdown_check_result(dict, "StopSession");
        plist_free(dict);
        dict = (void *)0;
        if(!(client->session_id == ((char *)NULL)))
        {
          free((void *)client->session_id);
          client->session_id = (char *)(void *)0;
        }

        if(!(client->ssl_enabled == 0))
        {
          property_list_service_disable_ssl(client->parent);
          client->ssl_enabled = 0;
        }

        return ret;
      }
    }
}

// lockdownd_strtoerr
// file lockdown.c line 69
static enum anonymous_9 lockdownd_strtoerr(const char *name)
{
  enum anonymous_9 err = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
  signed int return_value_strcmp_26;
  return_value_strcmp_26=strcmp(name, "InvalidResponse");
  signed int return_value_strcmp_25;
  signed int return_value_strcmp_24;
  signed int return_value_strcmp_23;
  signed int return_value_strcmp_22;
  signed int return_value_strcmp_21;
  signed int return_value_strcmp_20;
  signed int return_value_strcmp_19;
  signed int return_value_strcmp_18;
  signed int return_value_strcmp_17;
  signed int return_value_strcmp_16;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_14;
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_12;
  signed int return_value_strcmp_11;
  signed int return_value_strcmp_10;
  signed int return_value_strcmp_9;
  signed int return_value_strcmp_8;
  signed int return_value_strcmp_7;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_5;
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_26 == 0)
    err = (enum anonymous_9)LOCKDOWN_E_INVALID_RESPONSE;

  else
  {
    return_value_strcmp_25=strcmp(name, "MissingKey");
    if(return_value_strcmp_25 == 0)
      err = (enum anonymous_9)LOCKDOWN_E_MISSING_KEY;

    else
    {
      return_value_strcmp_24=strcmp(name, "MissingValue");
      if(return_value_strcmp_24 == 0)
        err = (enum anonymous_9)LOCKDOWN_E_MISSING_VALUE;

      else
      {
        return_value_strcmp_23=strcmp(name, "GetProhibited");
        if(return_value_strcmp_23 == 0)
          err = (enum anonymous_9)LOCKDOWN_E_GET_PROHIBITED;

        else
        {
          return_value_strcmp_22=strcmp(name, "SetProhibited");
          if(return_value_strcmp_22 == 0)
            err = (enum anonymous_9)LOCKDOWN_E_SET_PROHIBITED;

          else
          {
            return_value_strcmp_21=strcmp(name, "RemoveProhibited");
            if(return_value_strcmp_21 == 0)
              err = (enum anonymous_9)LOCKDOWN_E_REMOVE_PROHIBITED;

            else
            {
              return_value_strcmp_20=strcmp(name, "ImmutableValue");
              if(return_value_strcmp_20 == 0)
                err = (enum anonymous_9)LOCKDOWN_E_IMMUTABLE_VALUE;

              else
              {
                return_value_strcmp_19=strcmp(name, "PasswordProtected");
                if(return_value_strcmp_19 == 0)
                  err = (enum anonymous_9)LOCKDOWN_E_PASSWORD_PROTECTED;

                else
                {
                  return_value_strcmp_18=strcmp(name, "UserDeniedPairing");
                  if(return_value_strcmp_18 == 0)
                    err = (enum anonymous_9)LOCKDOWN_E_USER_DENIED_PAIRING;

                  else
                  {
                    return_value_strcmp_17=strcmp(name, "PairingDialogResponsePending");
                    if(return_value_strcmp_17 == 0)
                      err = (enum anonymous_9)LOCKDOWN_E_PAIRING_DIALOG_RESPONSE_PENDING;

                    else
                    {
                      return_value_strcmp_16=strcmp(name, "MissingHostID");
                      if(return_value_strcmp_16 == 0)
                        err = (enum anonymous_9)LOCKDOWN_E_MISSING_HOST_ID;

                      else
                      {
                        return_value_strcmp_15=strcmp(name, "InvalidHostID");
                        if(return_value_strcmp_15 == 0)
                          err = (enum anonymous_9)LOCKDOWN_E_INVALID_HOST_ID;

                        else
                        {
                          return_value_strcmp_14=strcmp(name, "SessionActive");
                          if(return_value_strcmp_14 == 0)
                            err = (enum anonymous_9)LOCKDOWN_E_SESSION_ACTIVE;

                          else
                          {
                            return_value_strcmp_13=strcmp(name, "SessionInactive");
                            if(return_value_strcmp_13 == 0)
                              err = (enum anonymous_9)LOCKDOWN_E_SESSION_INACTIVE;

                            else
                            {
                              return_value_strcmp_12=strcmp(name, "MissingSessionID");
                              if(return_value_strcmp_12 == 0)
                                err = (enum anonymous_9)LOCKDOWN_E_MISSING_SESSION_ID;

                              else
                              {
                                return_value_strcmp_11=strcmp(name, "InvalidSessionID");
                                if(return_value_strcmp_11 == 0)
                                  err = (enum anonymous_9)LOCKDOWN_E_INVALID_SESSION_ID;

                                else
                                {
                                  return_value_strcmp_10=strcmp(name, "MissingService");
                                  if(return_value_strcmp_10 == 0)
                                    err = (enum anonymous_9)LOCKDOWN_E_MISSING_SERVICE;

                                  else
                                  {
                                    return_value_strcmp_9=strcmp(name, "InvalidService");
                                    if(return_value_strcmp_9 == 0)
                                      err = (enum anonymous_9)LOCKDOWN_E_INVALID_SERVICE;

                                    else
                                    {
                                      return_value_strcmp_8=strcmp(name, "ServiceLimit");
                                      if(return_value_strcmp_8 == 0)
                                        err = (enum anonymous_9)LOCKDOWN_E_SERVICE_LIMIT;

                                      else
                                      {
                                        return_value_strcmp_7=strcmp(name, "MissingPairRecord");
                                        if(return_value_strcmp_7 == 0)
                                          err = (enum anonymous_9)LOCKDOWN_E_MISSING_PAIR_RECORD;

                                        else
                                        {
                                          return_value_strcmp_6=strcmp(name, "SavePairRecordFailed");
                                          if(return_value_strcmp_6 == 0)
                                            err = (enum anonymous_9)LOCKDOWN_E_SAVE_PAIR_RECORD_FAILED;

                                          else
                                          {
                                            return_value_strcmp_5=strcmp(name, "InvalidPairRecord");
                                            if(return_value_strcmp_5 == 0)
                                              err = (enum anonymous_9)LOCKDOWN_E_INVALID_PAIR_RECORD;

                                            else
                                            {
                                              return_value_strcmp_4=strcmp(name, "InvalidActivationRecord");
                                              if(return_value_strcmp_4 == 0)
                                                err = (enum anonymous_9)LOCKDOWN_E_INVALID_ACTIVATION_RECORD;

                                              else
                                              {
                                                return_value_strcmp_3=strcmp(name, "MissingActivationRecord");
                                                if(return_value_strcmp_3 == 0)
                                                  err = (enum anonymous_9)LOCKDOWN_E_MISSING_ACTIVATION_RECORD;

                                                else
                                                {
                                                  return_value_strcmp_2=strcmp(name, "ServiceProhibited");
                                                  if(return_value_strcmp_2 == 0)
                                                    err = (enum anonymous_9)LOCKDOWN_E_SERVICE_PROHIBITED;

                                                  else
                                                  {
                                                    return_value_strcmp_1=strcmp(name, "EscrowLocked");
                                                    if(return_value_strcmp_1 == 0)
                                                      err = (enum anonymous_9)LOCKDOWN_E_ESCROW_LOCKED;

                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return err;
}

// lockdownd_unpair
// file lockdown.c line 1026
enum anonymous_9 lockdownd_unpair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record)
{
  enum anonymous_9 return_value_lockdownd_do_pair_1;
  return_value_lockdownd_do_pair_1=lockdownd_do_pair(client, pair_record, "Unpair");
  return return_value_lockdownd_do_pair_1;
}

// lockdownd_validate_pair
// file lockdown.c line 1021
enum anonymous_9 lockdownd_validate_pair(struct lockdownd_client_private *client, struct lockdownd_pair_record *pair_record)
{
  enum anonymous_9 return_value_lockdownd_do_pair_1;
  return_value_lockdownd_do_pair_1=lockdownd_do_pair(client, pair_record, "ValidatePair");
  return return_value_lockdownd_do_pair_1;
}

// main
// file ideviceimagemounter.c line 138
signed int main(signed int argc, char **argv)
{
  struct idevice_private *device = (struct idevice_private *)(void *)0;
  struct lockdownd_client_private *lckd = (struct lockdownd_client_private *)(void *)0;
  enum anonymous_9 ldret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
  struct mobile_image_mounter_client_private *mim = (struct mobile_image_mounter_client_private *)(void *)0;
  struct afc_client_private *afc = (struct afc_client_private *)(void *)0;
  struct lockdownd_service_descriptor *service = (struct lockdownd_service_descriptor *)(void *)0;
  signed int res = -1;
  char *image_path = (char *)(void *)0;
  unsigned long int image_size = (unsigned long int)0;
  char *image_sig_path = (char *)(void *)0;
  parse_opts(argc, argv);
  argc = argc - optind;
  argv = argv + (signed long int)optind;
  if(list_mode == 0)
  {
    if(!(argc >= 1))
    {
      printf("ERROR: No IMAGE_FILE has been given!\n");
      return -1;
    }

    image_path=strdup(argv[(signed long int)0]);
    if(argc >= 2)
      image_sig_path=strdup(argv[(signed long int)1]);

    else
    {
      signed int return_value_asprintf_1;
      return_value_asprintf_1=asprintf(&image_sig_path, "%s.signature", image_path);
      if(!(return_value_asprintf_1 >= 0))
      {
        printf("Out of memory?!\n");
        return -1;
      }

    }
  }

  enum anonymous_5 return_value_idevice_new_2;
  return_value_idevice_new_2=idevice_new(&device, udid);
  void *pver;
  char *product_version;
  enum anonymous_11 return_value_plist_get_node_type_3;
  enum anonymous_10 disk_image_upload_type;
  signed int product_version_major;
  signed int product_version_minor;
  _Bool tmp_if_expr_5;
  enum anonymous_12 return_value_mobile_image_mounter_new_6;
  _Bool tmp_if_expr_8;
  enum anonymous_12 err;
  void *result;
  if(!((signed int)return_value_idevice_new_2 == IDEVICE_E_SUCCESS))
  {
    printf("No device found, is it plugged in?\n");
    return -1;
  }

  else
  {
    ldret=lockdownd_client_new_with_handshake(device, &lckd, "ideviceimagemounter");
    if(!((signed int)ldret == LOCKDOWN_E_SUCCESS))
      printf("ERROR: Could not connect to lockdown, error code %d.\n", ldret);

    else
    {
      pver = (void *)0;
      product_version = (char *)(void *)0;
      lockdownd_get_value(lckd, (const char *)(void *)0, "ProductVersion", &pver);
      if(!(pver == NULL))
      {
        return_value_plist_get_node_type_3=plist_get_node_type(pver);
        if((signed int)return_value_plist_get_node_type_3 == PLIST_STRING)
          plist_get_string_val(pver, &product_version);

      }

      disk_image_upload_type = (enum anonymous_10)DISK_IMAGE_UPLOAD_TYPE_AFC;
      product_version_major = 0;
      product_version_minor = 0;
      if(!(product_version == ((char *)NULL)))
      {
        signed int return_value_sscanf_4;
        return_value_sscanf_4=sscanf(product_version, "%d.%d.%*d", &product_version_major, &product_version_minor);
        if(return_value_sscanf_4 == 2)
        {
          if(product_version_major >= 7)
            disk_image_upload_type = (enum anonymous_10)DISK_IMAGE_UPLOAD_TYPE_UPLOAD_IMAGE;

        }

      }

      lockdownd_start_service(lckd, "com.apple.mobile.mobile_image_mounter", &service);
      if(service == ((struct lockdownd_service_descriptor *)NULL))
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        printf("ERROR: Could not start mobile_image_mounter service!\n");

      else
      {
        return_value_mobile_image_mounter_new_6=mobile_image_mounter_new(device, service, &mim);
        if(!((signed int)return_value_mobile_image_mounter_new_6 == MOBILE_IMAGE_MOUNTER_E_SUCCESS))
          printf("ERROR: Could not connect to mobile_image_mounter!\n");

        else
        {
          if(!(service == ((struct lockdownd_service_descriptor *)NULL)))
          {
            lockdownd_service_descriptor_free(service);
            service = (struct lockdownd_service_descriptor *)(void *)0;
          }

          if(list_mode == 0)
          {
            struct stat fst;
            if((signed int)disk_image_upload_type == DISK_IMAGE_UPLOAD_TYPE_AFC)
            {
              enum anonymous_9 return_value_lockdownd_start_service_7;
              return_value_lockdownd_start_service_7=lockdownd_start_service(lckd, "com.apple.afc", &service);
              if(service == ((struct lockdownd_service_descriptor *)NULL) || !((signed int)return_value_lockdownd_start_service_7 == LOCKDOWN_E_SUCCESS))
                tmp_if_expr_8 = (_Bool)1;

              else
                tmp_if_expr_8 = !(service->port != 0) ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_8)
              {
                fprintf(stderr, "Could not start com.apple.afc!\n");
                goto leave;
              }

              enum anonymous_7 return_value_afc_client_new_9;
              return_value_afc_client_new_9=afc_client_new(device, service, &afc);
              if(!((signed int)return_value_afc_client_new_9 == AFC_E_SUCCESS))
              {
                fprintf(stderr, "Could not connect to AFC!\n");
                goto leave;
              }

              if(!(service == ((struct lockdownd_service_descriptor *)NULL)))
              {
                lockdownd_service_descriptor_free(service);
                service = (struct lockdownd_service_descriptor *)(void *)0;
              }

            }

            signed int return_value_stat_12;
            return_value_stat_12=stat(image_path, &fst);
            if(!(return_value_stat_12 == 0))
            {
              signed int *return_value___errno_location_10;
              return_value___errno_location_10=__errno_location();
              char *return_value_strerror_11;
              return_value_strerror_11=strerror(*return_value___errno_location_10);
              fprintf(stderr, "ERROR: stat: %s: %s\n", image_path, return_value_strerror_11);
              goto leave;
            }

            image_size = (unsigned long int)fst.st_size;
            signed int return_value_stat_15;
            return_value_stat_15=stat(image_sig_path, &fst);
            if(!(return_value_stat_15 == 0))
            {
              signed int *return_value___errno_location_13;
              return_value___errno_location_13=__errno_location();
              char *return_value_strerror_14;
              return_value_strerror_14=strerror(*return_value___errno_location_13);
              fprintf(stderr, "ERROR: stat: %s: %s\n", image_sig_path, return_value_strerror_14);
              goto leave;
            }

          }

          lockdownd_client_free(lckd);
          lckd = (struct lockdownd_client_private *)(void *)0;
          result = (void *)0;
          if(!(list_mode == 0))
          {
            if(imagetype == ((char *)NULL))
              imagetype=strdup("Developer");

            err=mobile_image_mounter_lookup_image(mim, imagetype, &result);
            free((void *)imagetype);
            if((signed int)err == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
            {
              res = 0;
              if(!(xml_mode == 0))
                print_xml(result);

              else
                plist_print_to_stream(result, stdout);
            }

            else
              printf("Error: lookup_image returned %d\n", err);
          }

          else
          {
            char sig[8192l];
            unsigned long int sig_length = (unsigned long int)0;
            struct _IO_FILE *f;
            f=fopen(image_sig_path, "rb");
            if(f == ((struct _IO_FILE *)NULL))
            {
              signed int *return_value___errno_location_16;
              return_value___errno_location_16=__errno_location();
              char *return_value_strerror_17;
              return_value_strerror_17=strerror(*return_value___errno_location_16);
              fprintf(stderr, "Error opening signature file '%s': %s\n", image_sig_path, return_value_strerror_17);
              goto leave;
            }

            sig_length=fread((void *)sig, (unsigned long int)1, sizeof(char [8192l]) /*8192ul*/ , f);
            fclose(f);
            if(sig_length == 0ul)
            {
              fprintf(stderr, "Could not read signature from file '%s'\n", image_sig_path);
              goto leave;
            }

            f=fopen(image_path, "rb");
            if(f == ((struct _IO_FILE *)NULL))
            {
              signed int *return_value___errno_location_18;
              return_value___errno_location_18=__errno_location();
              char *return_value_strerror_19;
              return_value_strerror_19=strerror(*return_value___errno_location_18);
              fprintf(stderr, "Error opening image file '%s': %s\n", image_path, return_value_strerror_19);
              goto leave;
            }

            char *targetname = (char *)(void *)0;
            signed int return_value_asprintf_20;
            return_value_asprintf_20=asprintf(&targetname, "%s/%s", (const void *)PKG_PATH, (const void *)"staging.dimage");
            if(!(return_value_asprintf_20 >= 0))
            {
              fprintf(stderr, "Out of memory!?\n");
              goto leave;
            }

            char *mountname = (char *)(void *)0;
            signed int return_value_asprintf_21;
            return_value_asprintf_21=asprintf(&mountname, "%s/%s", (const void *)PATH_PREFIX, targetname);
            if(!(return_value_asprintf_21 >= 0))
            {
              fprintf(stderr, "Out of memory!?\n");
              goto leave;
            }

            if(imagetype == ((char *)NULL))
              imagetype=strdup("Developer");

            if(!((signed int)disk_image_upload_type == DISK_IMAGE_UPLOAD_TYPE_UPLOAD_IMAGE))
            {
              if((signed int)disk_image_upload_type == DISK_IMAGE_UPLOAD_TYPE_AFC)
                goto __CPROVER_DUMP_L37;

            }

            else
            {
              printf("Uploading %s\n", image_path);
              err=mobile_image_mounter_upload_image(mim, imagetype, image_size, sig, (unsigned short int)sig_length, mim_upload_cb, (void *)f);
              goto __CPROVER_DUMP_L50;
            }

          __CPROVER_DUMP_L37:
            ;
            printf("Uploading %s --> afc:///%s\n", image_path, targetname);
            char **strs = (char **)(void *)0;
            enum anonymous_7 return_value_afc_get_file_info_23;
            return_value_afc_get_file_info_23=afc_get_file_info(afc, PKG_PATH, &strs);
            if(!((signed int)return_value_afc_get_file_info_23 == AFC_E_SUCCESS))
            {
              enum anonymous_7 return_value_afc_make_directory_22;
              return_value_afc_make_directory_22=afc_make_directory(afc, PKG_PATH);
              if(!((signed int)return_value_afc_make_directory_22 == AFC_E_SUCCESS))
                fprintf(stderr, "WARNING: Could not create directory '%s' on device!\n", (const void *)PKG_PATH);

            }

            if(!(strs == ((char **)NULL)))
            {
              signed int i = 0;
              for( ; !(strs[(signed long int)i] == ((char *)NULL)); i = i + 1)
                free((void *)strs[(signed long int)i]);
              free((void *)strs);
            }

            unsigned long int af = (unsigned long int)0;
            enum anonymous_7 return_value_afc_file_open_24;
            return_value_afc_file_open_24=afc_file_open(afc, targetname, (enum anonymous_16)AFC_FOPEN_WRONLY, &af);
            if(af == 0ul || !((signed int)return_value_afc_file_open_24 == AFC_E_SUCCESS))
            {
              fclose(f);
              fprintf(stderr, "afc_file_open on '%s' failed!\n", targetname);
              goto leave;
            }

            char buf[8192l];
            unsigned long int amount = (unsigned long int)0;
            do
            {
              amount=fread((void *)buf, (unsigned long int)1, sizeof(char [8192l]) /*8192ul*/ , f);
              if(amount >= 1ul)
              {
                unsigned int written;
                unsigned int total = (unsigned int)0;
                while(!((unsigned long int)total >= amount))
                {
                  written = (unsigned int)0;
                  enum anonymous_7 return_value_afc_file_write_25;
                  return_value_afc_file_write_25=afc_file_write(afc, af, buf, (unsigned int)amount, &written);
                  if(!((signed int)return_value_afc_file_write_25 == AFC_E_SUCCESS))
                  {
                    fprintf(stderr, "AFC Write error!\n");
                    break;
                  }

                  total = total + written;
                }
                if(!((unsigned long int)total == amount))
                {
                  fprintf(stderr, "Error: wrote only %d of %d\n", total, (unsigned int)amount);
                  afc_file_close(afc, af);
                  fclose(f);
                  goto leave;
                }

              }

            }
            while(amount >= 1ul);
            afc_file_close(afc, af);
            goto __CPROVER_DUMP_L50;

          __CPROVER_DUMP_L50:
            ;
            fclose(f);
            printf("done.\n");
            printf("Mounting...\n");
            err=mobile_image_mounter_mount_image(mim, mountname, sig, (unsigned short int)sig_length, imagetype, &result);
            free((void *)imagetype);
            if((signed int)err == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
            {
              if(!(result == NULL))
              {
                void *node;
                node=plist_dict_get_item(result, "Status");
                if(!(node == NULL))
                {
                  char *status = (char *)(void *)0;
                  plist_get_string_val(node, &status);
                  if(!(status == ((char *)NULL)))
                  {
                    signed int return_value_strcmp_26;
                    return_value_strcmp_26=strcmp(status, "Complete");
                    if(return_value_strcmp_26 == 0)
                    {
                      printf("Done.\n");
                      res = 0;
                    }

                    else
                    {
                      printf("unexpected status value:\n");
                      if(!(xml_mode == 0))
                        print_xml(result);

                      else
                        plist_print_to_stream(result, stdout);
                    }
                    free((void *)status);
                  }

                  else
                  {
                    printf("unexpected result:\n");
                    if(!(xml_mode == 0))
                      print_xml(result);

                    else
                      plist_print_to_stream(result, stdout);
                  }
                }

                node=plist_dict_get_item(result, "Error");
                if(!(node == NULL))
                {
                  char *error = (char *)(void *)0;
                  plist_get_string_val(node, &error);
                  if(!(error == ((char *)NULL)))
                  {
                    printf("Error: %s\n", error);
                    free((void *)error);
                  }

                  else
                  {
                    printf("unexpected result:\n");
                    if(!(xml_mode == 0))
                      print_xml(result);

                    else
                      plist_print_to_stream(result, stdout);
                  }
                }

                else
                  if(!(xml_mode == 0))
                    print_xml(result);

                  else
                    plist_print_to_stream(result, stdout);
              }

            }

            else
              printf("Error: mount_image returned %d\n", err);
          }
          if(!(result == NULL))
            plist_free(result);

          mobile_image_mounter_hangup(mim);
          mobile_image_mounter_free(mim);
        }
      }
    }

  leave:
    ;
    if(!(afc == ((struct afc_client_private *)NULL)))
      afc_client_free(afc);

    if(!(lckd == ((struct lockdownd_client_private *)NULL)))
      lockdownd_client_free(lckd);

    idevice_free(device);
    if(!(image_path == ((char *)NULL)))
      free((void *)image_path);

    if(!(image_sig_path == ((char *)NULL)))
      free((void *)image_sig_path);

    return res;
  }
}

// make_strings_list
// file afc.c line 386
static char ** make_strings_list(char *tokens, unsigned int length)
{
  unsigned int nulls = (unsigned int)0;
  unsigned int i = (unsigned int)0;
  unsigned int j = (unsigned int)0;
  char **list = (char **)(void *)0;
  if(tokens == ((char *)NULL) || length == 0u)
    return (char **)(void *)0;

  else
  {
    nulls=count_nullspaces(tokens, length);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(char *) /*8ul*/  * (unsigned long int)(nulls + (unsigned int)1));
    list = (char **)return_value_malloc_1;
    i = (unsigned int)0;
    for( ; !(i >= nulls); i = i + 1u)
    {
      list[(signed long int)i]=strdup(tokens + (signed long int)j);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(list[(signed long int)i]);
      j = j + (unsigned int)(return_value_strlen_2 + (unsigned long int)1);
    }
    list[(signed long int)i] = (char *)(void *)0;
    return list;
  }
}

// mim_upload_cb
// file ideviceimagemounter.c line 133
static signed long int mim_upload_cb(void *buf, unsigned long int size, void *userdata)
{
  unsigned long int return_value_fread_1;
  return_value_fread_1=fread(buf, (unsigned long int)1, size, (struct _IO_FILE *)userdata);
  return (signed long int)return_value_fread_1;
}

// misagent_check_result
// file misagent.c line 66
static enum anonymous_47 misagent_check_result(void *response, signed int *status_code)
{
  enum anonymous_11 return_value_plist_get_node_type_1;
  return_value_plist_get_node_type_1=plist_get_node_type(response);
  _Bool tmp_if_expr_3;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(!((signed int)return_value_plist_get_node_type_1 == PLIST_DICT))
    return (enum anonymous_47)MISAGENT_E_PLIST_ERROR;

  else
  {
    void *node;
    node=plist_dict_get_item(response, "Status");
    if(node == NULL)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_plist_get_node_type_2=plist_get_node_type(node);
      tmp_if_expr_3 = (signed int)return_value_plist_get_node_type_2 != PLIST_UINT ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      return (enum anonymous_47)MISAGENT_E_PLIST_ERROR;

    else
    {
      unsigned long int val = (unsigned long int)-1LL;
      plist_get_uint_val(node, &val);
      if((signed long int)val == -1ll)
        return (enum anonymous_47)MISAGENT_E_PLIST_ERROR;

      else
      {
        *status_code = (signed int)(val & (unsigned long int)0xFFFFFFFF);
        if(*status_code == 0)
          return (enum anonymous_47)MISAGENT_E_SUCCESS;

        else
          return (enum anonymous_47)MISAGENT_E_REQUEST_FAILED;
      }
    }
  }
}

// misagent_client_free
// file misagent.c line 113
enum anonymous_47 misagent_client_free(struct misagent_client_private *client)
{
  if(client == ((struct misagent_client_private *)NULL))
    return (enum anonymous_47)MISAGENT_E_INVALID_ARG;

  else
  {
    enum anonymous_47 err = (enum anonymous_47)MISAGENT_E_SUCCESS;
    if(!(client->parent == ((struct property_list_service_client_private *)NULL)))
    {
      if(!(client->parent->parent == ((struct service_client_private *)NULL)))
      {
        enum anonymous_23 return_value_property_list_service_client_free_1;
        return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
        misagent_error(return_value_property_list_service_client_free_1);
      }

    }

    client->parent = (struct property_list_service_client_private *)(void *)0;
    free((void *)client);
    return err;
  }
}

// misagent_client_new
// file misagent.c line 90
enum anonymous_47 misagent_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct misagent_client_private **client)
{
  struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
  enum anonymous_47 err;
  enum anonymous_23 return_value_property_list_service_client_new_1;
  return_value_property_list_service_client_new_1=property_list_service_client_new(device, service, &plistclient);
  err=misagent_error(return_value_property_list_service_client_new_1);
  if(!((signed int)err == MISAGENT_E_SUCCESS))
    return err;

  else
  {
    struct misagent_client_private *client_loc;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct misagent_client_private) /*16ul*/ );
    client_loc = (struct misagent_client_private *)return_value_malloc_2;
    client_loc->parent = plistclient;
    client_loc->last_error = 0;
    *client = client_loc;
    return (enum anonymous_47)MISAGENT_E_SUCCESS;
  }
}

// misagent_client_start_service
// file misagent.c line 106
enum anonymous_47 misagent_client_start_service(struct idevice_private *device, struct misagent_client_private **client, const char *label)
{
  enum anonymous_47 err = (enum anonymous_47)MISAGENT_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.misagent", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))misagent_client_new, (signed int *)&err);
  return err;
}

// misagent_copy
// file misagent.c line 165
enum anonymous_47 misagent_copy(struct misagent_client_private *client, void **profiles)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct misagent_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(profiles == ((void **)NULL) || tmp_if_expr_1)
    return (enum anonymous_47)MISAGENT_E_INVALID_ARG;

  else
  {
    client->last_error = MISAGENT_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("Copy");
    plist_dict_set_item(dict, "MessageType", return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string("Provisioning");
    plist_dict_set_item(dict, "ProfileType", return_value_plist_new_string_3);
    enum anonymous_47 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_4;
    return_value_property_list_service_send_xml_plist_4=property_list_service_send_xml_plist(client->parent, dict);
    res=misagent_error(return_value_property_list_service_send_xml_plist_4);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)res == MISAGENT_E_SUCCESS))
      return res;

    else
    {
      enum anonymous_23 return_value_property_list_service_receive_plist_5;
      return_value_property_list_service_receive_plist_5=property_list_service_receive_plist(client->parent, &dict);
      res=misagent_error(return_value_property_list_service_receive_plist_5);
      if(!((signed int)res == MISAGENT_E_SUCCESS))
        return res;

      else
        if(dict == NULL)
          return (enum anonymous_47)MISAGENT_E_UNKNOWN_ERROR;

        else
        {
          res=misagent_check_result(dict, &client->last_error);
          if((signed int)res == MISAGENT_E_SUCCESS)
          {
            void *return_value_plist_dict_get_item_6;
            return_value_plist_dict_get_item_6=plist_dict_get_item(dict, "Payload");
            *profiles=plist_copy(return_value_plist_dict_get_item_6);
          }

          plist_free(dict);
          return res;
        }
    }
  }
}

// misagent_error
// file misagent.c line 41
static enum anonymous_47 misagent_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_47)MISAGENT_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_47)MISAGENT_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_47)MISAGENT_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_47)MISAGENT_E_CONN_FAILED;
    default:
      return (enum anonymous_47)MISAGENT_E_UNKNOWN_ERROR;
  }
}

// misagent_get_status_code
// file misagent.c line 242
signed int misagent_get_status_code(struct misagent_client_private *client)
{
  if(client == ((struct misagent_client_private *)NULL))
    return -1;

  else
    return client->last_error;
}

// misagent_install
// file misagent.c line 128
enum anonymous_47 misagent_install(struct misagent_client_private *client, void *profile)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct misagent_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(profile == NULL || tmp_if_expr_1)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_plist_get_node_type_2=plist_get_node_type(profile);
    tmp_if_expr_3 = (signed int)return_value_plist_get_node_type_2 != PLIST_DATA ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    return (enum anonymous_47)MISAGENT_E_INVALID_ARG;

  else
  {
    client->last_error = MISAGENT_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string("Install");
    plist_dict_set_item(dict, "MessageType", return_value_plist_new_string_4);
    void *return_value_plist_copy_5;
    return_value_plist_copy_5=plist_copy(profile);
    plist_dict_set_item(dict, "Profile", return_value_plist_copy_5);
    void *return_value_plist_new_string_6;
    return_value_plist_new_string_6=plist_new_string("Provisioning");
    plist_dict_set_item(dict, "ProfileType", return_value_plist_new_string_6);
    enum anonymous_47 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_7;
    return_value_property_list_service_send_xml_plist_7=property_list_service_send_xml_plist(client->parent, dict);
    res=misagent_error(return_value_property_list_service_send_xml_plist_7);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)res == MISAGENT_E_SUCCESS))
      return res;

    else
    {
      enum anonymous_23 return_value_property_list_service_receive_plist_8;
      return_value_property_list_service_receive_plist_8=property_list_service_receive_plist(client->parent, &dict);
      res=misagent_error(return_value_property_list_service_receive_plist_8);
      if(!((signed int)res == MISAGENT_E_SUCCESS))
        return res;

      else
        if(dict == NULL)
          return (enum anonymous_47)MISAGENT_E_UNKNOWN_ERROR;

        else
        {
          res=misagent_check_result(dict, &client->last_error);
          plist_free(dict);
          return res;
        }
    }
  }
}

// misagent_remove
// file misagent.c line 205
enum anonymous_47 misagent_remove(struct misagent_client_private *client, const char *profileID)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct misagent_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(profileID == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_47)MISAGENT_E_INVALID_ARG;

  else
  {
    client->last_error = MISAGENT_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("Remove");
    plist_dict_set_item(dict, "MessageType", return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(profileID);
    plist_dict_set_item(dict, "ProfileID", return_value_plist_new_string_3);
    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string("Provisioning");
    plist_dict_set_item(dict, "ProfileType", return_value_plist_new_string_4);
    enum anonymous_47 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_5;
    return_value_property_list_service_send_xml_plist_5=property_list_service_send_xml_plist(client->parent, dict);
    res=misagent_error(return_value_property_list_service_send_xml_plist_5);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)res == MISAGENT_E_SUCCESS))
      return res;

    else
    {
      enum anonymous_23 return_value_property_list_service_receive_plist_6;
      return_value_property_list_service_receive_plist_6=property_list_service_receive_plist(client->parent, &dict);
      res=misagent_error(return_value_property_list_service_receive_plist_6);
      if(!((signed int)res == MISAGENT_E_SUCCESS))
        return res;

      else
        if(dict == NULL)
          return (enum anonymous_47)MISAGENT_E_UNKNOWN_ERROR;

        else
        {
          res=misagent_check_result(dict, &client->last_error);
          plist_free(dict);
          return res;
        }
    }
  }
}

// mobile_image_mounter_error
// file mobile_image_mounter.c line 61
static enum anonymous_12 mobile_image_mounter_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_CONN_FAILED;
    default:
      return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_UNKNOWN_ERROR;
  }
}

// mobile_image_mounter_free
// file ../include/libimobiledevice/mobile_image_mounter.h line 93
enum anonymous_12 mobile_image_mounter_free(struct mobile_image_mounter_client_private *client)
{
  if(client == ((struct mobile_image_mounter_client_private *)NULL))
    return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_INVALID_ARG;

  else
  {
    property_list_service_client_free(client->parent);
    client->parent = (struct property_list_service_client_private *)(void *)0;
    mutex_destroy(&client->mutex);
    free((void *)client);
    return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_SUCCESS;
  }
}

// mobile_image_mounter_hangup
// file ../include/libimobiledevice/mobile_image_mounter.h line 164
enum anonymous_12 mobile_image_mounter_hangup(struct mobile_image_mounter_client_private *client)
{
  enum anonymous_23 return_value_property_list_service_receive_plist_3;
  if(client == ((struct mobile_image_mounter_client_private *)NULL))
    return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_INVALID_ARG;

  else
  {
    mobile_image_mounter_lock(client);
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("Hangup");
    plist_dict_set_item(dict, "Command", return_value_plist_new_string_1);
    enum anonymous_12 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_2;
    return_value_property_list_service_send_xml_plist_2=property_list_service_send_xml_plist(client->parent, dict);
    res=mobile_image_mounter_error(return_value_property_list_service_send_xml_plist_2);
    plist_free(dict);
    if((signed int)res == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
    {
      dict = (void *)0;
      return_value_property_list_service_receive_plist_3=property_list_service_receive_plist(client->parent, &dict);
      res=mobile_image_mounter_error(return_value_property_list_service_receive_plist_3);
      if(!(dict == NULL))
        plist_free(dict);

    }


  leave_unlock:
    ;
    mobile_image_mounter_unlock(client);
    return res;
  }
}

// mobile_image_mounter_lock
// file mobile_image_mounter.c line 36
static void mobile_image_mounter_lock(struct mobile_image_mounter_client_private *client)
{
  mutex_lock(&client->mutex);
}

// mobile_image_mounter_lookup_image
// file ../include/libimobiledevice/mobile_image_mounter.h line 109
enum anonymous_12 mobile_image_mounter_lookup_image(struct mobile_image_mounter_client_private *client, const char *image_type, void **result)
{
  enum anonymous_23 return_value_property_list_service_receive_plist_4;
  if(result == ((void **)NULL) || image_type == ((const char *)NULL) || client == ((struct mobile_image_mounter_client_private *)NULL))
    return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_INVALID_ARG;

  else
  {
    mobile_image_mounter_lock(client);
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("LookupImage");
    plist_dict_set_item(dict, "Command", return_value_plist_new_string_1);
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(image_type);
    plist_dict_set_item(dict, "ImageType", return_value_plist_new_string_2);
    enum anonymous_12 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_3;
    return_value_property_list_service_send_xml_plist_3=property_list_service_send_xml_plist(client->parent, dict);
    res=mobile_image_mounter_error(return_value_property_list_service_send_xml_plist_3);
    plist_free(dict);
    if((signed int)res == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
    {
      return_value_property_list_service_receive_plist_4=property_list_service_receive_plist(client->parent, result);
      res=mobile_image_mounter_error(return_value_property_list_service_receive_plist_4);
    }


  leave_unlock:
    ;
    mobile_image_mounter_unlock(client);
    return res;
  }
}

// mobile_image_mounter_mount_image
// file ../include/libimobiledevice/mobile_image_mounter.h line 151
enum anonymous_12 mobile_image_mounter_mount_image(struct mobile_image_mounter_client_private *client, const char *image_path, const char *signature, unsigned short int signature_size, const char *image_type, void **result)
{
  void *return_value_plist_new_data_3;
  enum anonymous_23 return_value_property_list_service_receive_plist_6;
  if(result == ((void **)NULL) || image_path == ((const char *)NULL) || image_type == ((const char *)NULL) || client == ((struct mobile_image_mounter_client_private *)NULL))
    return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_INVALID_ARG;

  else
  {
    mobile_image_mounter_lock(client);
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("MountImage");
    plist_dict_set_item(dict, "Command", return_value_plist_new_string_1);
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(image_path);
    plist_dict_set_item(dict, "ImagePath", return_value_plist_new_string_2);
    if(!(signature == ((const char *)NULL)) && !((signed int)signature_size == 0))
    {
      return_value_plist_new_data_3=plist_new_data(signature, (unsigned long int)signature_size);
      plist_dict_set_item(dict, "ImageSignature", return_value_plist_new_data_3);
    }

    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string(image_type);
    plist_dict_set_item(dict, "ImageType", return_value_plist_new_string_4);
    enum anonymous_12 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_5;
    return_value_property_list_service_send_xml_plist_5=property_list_service_send_xml_plist(client->parent, dict);
    res=mobile_image_mounter_error(return_value_property_list_service_send_xml_plist_5);
    plist_free(dict);
    if((signed int)res == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
    {
      return_value_property_list_service_receive_plist_6=property_list_service_receive_plist(client->parent, result);
      res=mobile_image_mounter_error(return_value_property_list_service_receive_plist_6);
    }


  leave_unlock:
    ;
    mobile_image_mounter_unlock(client);
    return res;
  }
}

// mobile_image_mounter_new
// file ../include/libimobiledevice/mobile_image_mounter.h line 67
enum anonymous_12 mobile_image_mounter_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobile_image_mounter_client_private **client)
{
  struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
  enum anonymous_12 err;
  enum anonymous_23 return_value_property_list_service_client_new_1;
  return_value_property_list_service_client_new_1=property_list_service_client_new(device, service, &plistclient);
  err=mobile_image_mounter_error(return_value_property_list_service_client_new_1);
  if(!((signed int)err == MOBILE_IMAGE_MOUNTER_E_SUCCESS))
    return err;

  else
  {
    struct mobile_image_mounter_client_private *client_loc;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct mobile_image_mounter_client_private) /*48ul*/ );
    client_loc = (struct mobile_image_mounter_client_private *)return_value_malloc_2;
    client_loc->parent = plistclient;
    mutex_init(&client_loc->mutex);
    *client = client_loc;
    return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_SUCCESS;
  }
}

// mobile_image_mounter_start_service
// file mobile_image_mounter.c line 95
enum anonymous_12 mobile_image_mounter_start_service(struct idevice_private *device, struct mobile_image_mounter_client_private **client, const char *label)
{
  enum anonymous_12 err = (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.mobile_image_mounter", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))mobile_image_mounter_new, (signed int *)&err);
  return err;
}

// mobile_image_mounter_unlock
// file mobile_image_mounter.c line 46
static void mobile_image_mounter_unlock(struct mobile_image_mounter_client_private *client)
{
  mutex_unlock(&client->mutex);
}

// mobile_image_mounter_upload_image
// file ../include/libimobiledevice/mobile_image_mounter.h line 128
enum anonymous_12 mobile_image_mounter_upload_image(struct mobile_image_mounter_client_private *client, const char *image_type, unsigned long int image_size, const char *signature, unsigned short int signature_size, signed long int (*upload_cb)(void *, unsigned long int, void *), void *userdata)
{
  void *return_value_plist_new_data_2;
  enum anonymous_23 return_value_property_list_service_receive_plist_6;
  char *strval;
  void *node;
  enum anonymous_11 return_value_plist_get_node_type_7;
  signed int return_value_strcmp_8;
  unsigned long int tx;
  unsigned long int bufsize;
  unsigned char *buf;
  void *return_value_malloc_9;
  enum anonymous_23 return_value_property_list_service_receive_plist_11;
  enum anonymous_11 return_value_plist_get_node_type_12;
  signed int return_value_strcmp_13;
  if(upload_cb == ((signed long int (*)(void *, unsigned long int, void *))NULL) || image_type == ((const char *)NULL) || client == ((struct mobile_image_mounter_client_private *)NULL) || image_size == 0ul)
    return (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_INVALID_ARG;

  else
  {
    mobile_image_mounter_lock(client);
    void *result = (void *)0;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("ReceiveBytes");
    plist_dict_set_item(dict, "Command", return_value_plist_new_string_1);
    if(!(signature == ((const char *)NULL)) && !((signed int)signature_size == 0))
    {
      return_value_plist_new_data_2=plist_new_data(signature, (unsigned long int)signature_size);
      plist_dict_set_item(dict, "ImageSignature", return_value_plist_new_data_2);
    }

    void *return_value_plist_new_uint_3;
    return_value_plist_new_uint_3=plist_new_uint(image_size);
    plist_dict_set_item(dict, "ImageSize", return_value_plist_new_uint_3);
    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string(image_type);
    plist_dict_set_item(dict, "ImageType", return_value_plist_new_string_4);
    enum anonymous_12 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_5;
    return_value_property_list_service_send_xml_plist_5=property_list_service_send_xml_plist(client->parent, dict);
    res=mobile_image_mounter_error(return_value_property_list_service_send_xml_plist_5);
    plist_free(dict);
    if((signed int)res == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
    {
      return_value_property_list_service_receive_plist_6=property_list_service_receive_plist(client->parent, &result);
      res=mobile_image_mounter_error(return_value_property_list_service_receive_plist_6);
      if((signed int)res == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
      {
        res = (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_COMMAND_FAILED;
        strval = (char *)(void *)0;
        node=plist_dict_get_item(result, "Status");
        if(!(node == NULL))
        {
          return_value_plist_get_node_type_7=plist_get_node_type(node);
          if((signed int)return_value_plist_get_node_type_7 == PLIST_STRING)
            plist_get_string_val(node, &strval);

        }

        if(!(strval == ((char *)NULL)))
        {
          return_value_strcmp_8=strcmp(strval, "ReceiveBytesAck");
          if(!(return_value_strcmp_8 == 0))
            free((void *)strval);

          else
          {
            free((void *)strval);
            tx = (unsigned long int)0;
            bufsize = (unsigned long int)65536;
            return_value_malloc_9=malloc(bufsize);
            buf = (unsigned char *)return_value_malloc_9;
            if(buf == ((unsigned char *)NULL))
              res = (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_UNKNOWN_ERROR;

            else
            {
              if(!(tx >= image_size))
              {
                unsigned long int remaining = image_size - tx;
                unsigned long int amount = remaining < bufsize ? remaining : bufsize;
                signed long int r;
                r=upload_cb((void *)buf, amount, userdata);
                if(r >= 0l)
                {
                  unsigned int sent = (unsigned int)0;
                  enum anonymous_20 return_value_service_send_10;
                  return_value_service_send_10=service_send(client->parent->parent, (const char *)buf, (unsigned int)r, &sent);
                  if((signed int)return_value_service_send_10 == SERVICE_E_SUCCESS)
                    tx = tx + (unsigned long int)r;

                }

              }

              free((void *)buf);
              if(tx >= image_size)
              {
                return_value_property_list_service_receive_plist_11=property_list_service_receive_plist(client->parent, &result);
                res=mobile_image_mounter_error(return_value_property_list_service_receive_plist_11);
                if((signed int)res == MOBILE_IMAGE_MOUNTER_E_SUCCESS)
                {
                  res = (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_COMMAND_FAILED;
                  strval = (char *)(void *)0;
                  node=plist_dict_get_item(result, "Status");
                  if(!(node == NULL))
                  {
                    return_value_plist_get_node_type_12=plist_get_node_type(node);
                    if((signed int)return_value_plist_get_node_type_12 == PLIST_STRING)
                      plist_get_string_val(node, &strval);

                  }

                  if(!(strval == ((char *)NULL)))
                  {
                    return_value_strcmp_13=strcmp(strval, "Complete");
                    if(!(return_value_strcmp_13 == 0))
                    {
                      free((void *)strval);
                      goto leave_unlock;
                    }

                    else
                      res = (enum anonymous_12)MOBILE_IMAGE_MOUNTER_E_SUCCESS;
                    free((void *)strval);
                  }

                }

              }

            }
          }
        }

      }

    }


  leave_unlock:
    ;
    mobile_image_mounter_unlock(client);
    if(!(result == NULL))
      plist_free(result);

    return res;
  }
}

// mobilebackup2_client_free
// file mobilebackup2.c line 99
enum anonymous_46 mobilebackup2_client_free(struct mobilebackup2_client_private *client)
{
  if(client == ((struct mobilebackup2_client_private *)NULL))
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    enum anonymous_46 err = (enum anonymous_46)MOBILEBACKUP2_E_SUCCESS;
    if(!(client->parent == ((struct device_link_service_client_private *)NULL)))
    {
      device_link_service_disconnect(client->parent, (const char *)(void *)0);
      signed short int return_value_device_link_service_client_free_1;
      return_value_device_link_service_client_free_1=device_link_service_client_free(client->parent);
      err=mobilebackup2_error(return_value_device_link_service_client_free_1);
    }

    free((void *)client);
    return err;
  }
}

// mobilebackup2_client_new
// file mobilebackup2.c line 64
enum anonymous_46 mobilebackup2_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobilebackup2_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct mobilebackup2_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct mobilebackup2_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    struct device_link_service_client_private *dlclient = (struct device_link_service_client_private *)(void *)0;
    enum anonymous_46 ret;
    signed short int return_value_device_link_service_client_new_3;
    return_value_device_link_service_client_new_3=device_link_service_client_new(device, service, &dlclient);
    ret=mobilebackup2_error(return_value_device_link_service_client_new_3);
    if(!((signed int)ret == MOBILEBACKUP2_E_SUCCESS))
      return ret;

    else
    {
      struct mobilebackup2_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct mobilebackup2_client_private) /*8ul*/ );
      client_loc = (struct mobilebackup2_client_private *)return_value_malloc_4;
      client_loc->parent = dlclient;
      signed short int return_value_device_link_service_version_exchange_5;
      return_value_device_link_service_version_exchange_5=device_link_service_version_exchange(dlclient, (unsigned long int)300, (unsigned long int)0);
      ret=mobilebackup2_error(return_value_device_link_service_version_exchange_5);
      if(!((signed int)ret == MOBILEBACKUP2_E_SUCCESS))
      {
        mobilebackup2_client_free(client_loc);
        return ret;
      }

      else
      {
        *client = client_loc;
        return ret;
      }
    }
  }
}

// mobilebackup2_client_start_service
// file mobilebackup2.c line 92
enum anonymous_46 mobilebackup2_client_start_service(struct idevice_private *device, struct mobilebackup2_client_private **client, const char *label)
{
  enum anonymous_46 err = (enum anonymous_46)MOBILEBACKUP2_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobilebackup2", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))mobilebackup2_client_new, (signed int *)&err);
  return err;
}

// mobilebackup2_error
// file mobilebackup2.c line 45
static enum anonymous_46 mobilebackup2_error(signed short int err)
{
  if(!((signed int)err == 0))
  {
    if((signed int)err == -1)
      goto __CPROVER_DUMP_L2;

    if((signed int)err == -2)
      goto __CPROVER_DUMP_L3;

    if((signed int)err == -3)
      goto __CPROVER_DUMP_L4;

    if((signed int)err == -4)
      goto __CPROVER_DUMP_L5;

  }

  else
  {
    return (enum anonymous_46)MOBILEBACKUP2_E_SUCCESS;

  __CPROVER_DUMP_L2:
    ;
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  __CPROVER_DUMP_L3:
    ;
    return (enum anonymous_46)MOBILEBACKUP2_E_PLIST_ERROR;

  __CPROVER_DUMP_L4:
    ;
    return (enum anonymous_46)MOBILEBACKUP2_E_MUX_ERROR;

  __CPROVER_DUMP_L5:
    ;
    return (enum anonymous_46)MOBILEBACKUP2_E_BAD_VERSION;
  }
  return (enum anonymous_46)MOBILEBACKUP2_E_UNKNOWN_ERROR;
}

// mobilebackup2_receive_message
// file mobilebackup2.c line 210
enum anonymous_46 mobilebackup2_receive_message(struct mobilebackup2_client_private *client, void **msg_plist, char **dlmessage)
{
  signed short int return_value_device_link_service_receive_message_1;
  return_value_device_link_service_receive_message_1=device_link_service_receive_message(client->parent, msg_plist, dlmessage);
  enum anonymous_46 return_value_mobilebackup2_error_2;
  return_value_mobilebackup2_error_2=mobilebackup2_error(return_value_device_link_service_receive_message_1);
  return return_value_mobilebackup2_error_2;
}

// mobilebackup2_receive_raw
// file mobilebackup2.c line 241
enum anonymous_46 mobilebackup2_receive_raw(struct mobilebackup2_client_private *client, char *data, unsigned int length, unsigned int *bytes)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup2_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(data == ((char *)NULL) || bytes == ((unsigned int *)NULL) || length == 0u || tmp_if_expr_1)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    struct service_client_private *raw = client->parent->parent->parent;
    *bytes = (unsigned int)0;
    signed int bytes_loc = 0;
    unsigned int received = (unsigned int)0;
    do
    {
      bytes_loc = 0;
      service_receive(raw, data + (signed long int)received, length - received, (unsigned int *)&bytes_loc);
      if(!(bytes_loc >= 1))
        break;

      received = received + (unsigned int)bytes_loc;
    }
    while(!(received >= length));
    if(received >= 1u)
    {
      *bytes = received;
      return (enum anonymous_46)MOBILEBACKUP2_E_SUCCESS;
    }

    else
      if(received == 0u)
        return (enum anonymous_46)MOBILEBACKUP2_E_SUCCESS;

      else
        return (enum anonymous_46)MOBILEBACKUP2_E_MUX_ERROR;
  }
}

// mobilebackup2_send_message
// file mobilebackup2.c line 112
enum anonymous_46 mobilebackup2_send_message(struct mobilebackup2_client_private *client, const char *message, void *options)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup2_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(options == NULL && message == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
    if(!(options == NULL))
    {
      return_value_plist_get_node_type_2=plist_get_node_type(options);
      if((signed int)return_value_plist_get_node_type_2 == PLIST_DICT)
        goto __CPROVER_DUMP_L4;

      return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      enum anonymous_46 err;
      if(!(message == ((const char *)NULL)))
      {
        void *dict = (void *)0;
        if(!(options == NULL))
          dict=plist_copy(options);

        else
          dict=plist_new_dict();
        void *return_value_plist_new_string_3;
        return_value_plist_new_string_3=plist_new_string(message);
        plist_dict_set_item(dict, "MessageName", return_value_plist_new_string_3);
        signed short int return_value_device_link_service_send_process_message_4;
        return_value_device_link_service_send_process_message_4=device_link_service_send_process_message(client->parent, dict);
        err=mobilebackup2_error(return_value_device_link_service_send_process_message_4);
        plist_free(dict);
      }

      else
      {
        signed short int return_value_device_link_service_send_process_message_5;
        return_value_device_link_service_send_process_message_5=device_link_service_send_process_message(client->parent, options);
        err=mobilebackup2_error(return_value_device_link_service_send_process_message_5);
      }
      return err;
    }
}

// mobilebackup2_send_raw
// file mobilebackup2.c line 215
enum anonymous_46 mobilebackup2_send_raw(struct mobilebackup2_client_private *client, const char *data, unsigned int length, unsigned int *bytes)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup2_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(data == ((const char *)NULL) || bytes == ((unsigned int *)NULL) || length == 0u || tmp_if_expr_1)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    *bytes = (unsigned int)0;
    struct service_client_private *raw = client->parent->parent->parent;
    signed int bytes_loc = 0;
    unsigned int sent = (unsigned int)0;
    do
    {
      bytes_loc = 0;
      service_send(raw, data + (signed long int)sent, length - sent, (unsigned int *)&bytes_loc);
      if(!(bytes_loc >= 1))
        break;

      sent = sent + (unsigned int)bytes_loc;
    }
    while(!(sent >= length));
    if(sent >= 1u)
    {
      *bytes = sent;
      return (enum anonymous_46)MOBILEBACKUP2_E_SUCCESS;
    }

    else
      return (enum anonymous_46)MOBILEBACKUP2_E_MUX_ERROR;
  }
}

// mobilebackup2_send_request
// file mobilebackup2.c line 326
enum anonymous_46 mobilebackup2_send_request(struct mobilebackup2_client_private *client, const char *request, const char *target_identifier, const char *source_identifier, void *options)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup2_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(request == ((const char *)NULL) || target_identifier == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(target_identifier);
    plist_dict_set_item(dict, "TargetIdentifier", return_value_plist_new_string_2);
    if(!(source_identifier == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_3;
      return_value_plist_new_string_3=plist_new_string(source_identifier);
      plist_dict_set_item(dict, "SourceIdentifier", return_value_plist_new_string_3);
    }

    if(!(options == NULL))
    {
      void *return_value_plist_copy_4;
      return_value_plist_copy_4=plist_copy(options);
      plist_dict_set_item(dict, "Options", return_value_plist_copy_4);
    }

    signed int return_value_strcmp_6;
    return_value_strcmp_6=strcmp(request, "Unback");
    if(return_value_strcmp_6 == 0)
    {
      if(!(options == NULL))
      {
        void *node;
        node=plist_dict_get_item(options, "Password");
        if(!(node == NULL))
        {
          void *return_value_plist_copy_5;
          return_value_plist_copy_5=plist_copy(node);
          plist_dict_set_item(dict, "Password", return_value_plist_copy_5);
        }

      }

    }

    signed int return_value_strcmp_8;
    return_value_strcmp_8=strcmp(request, "EnableCloudBackup");
    if(return_value_strcmp_8 == 0)
    {
      if(!(options == NULL))
      {
        void *mobilebackup2_send_request__1__4__node;
        mobilebackup2_send_request__1__4__node=plist_dict_get_item(options, "CloudBackupState");
        if(!(mobilebackup2_send_request__1__4__node == NULL))
        {
          void *return_value_plist_copy_7;
          return_value_plist_copy_7=plist_copy(mobilebackup2_send_request__1__4__node);
          plist_dict_set_item(dict, "CloudBackupState", return_value_plist_copy_7);
        }

      }

    }

    enum anonymous_46 err;
    err=mobilebackup2_send_message(client, request, dict);
    plist_free(dict);
    return err;
  }
}

// mobilebackup2_send_status_response
// file mobilebackup2.c line 357
enum anonymous_46 mobilebackup2_send_status_response(struct mobilebackup2_client_private *client, signed int status_code, const char *status1, void *status2)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup2_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    void *array;
    array=plist_new_array();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("DLMessageStatusResponse");
    plist_array_append_item(array, return_value_plist_new_string_2);
    void *return_value_plist_new_uint_3;
    return_value_plist_new_uint_3=plist_new_uint((unsigned long int)status_code);
    plist_array_append_item(array, return_value_plist_new_uint_3);
    if(!(status1 == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_4;
      return_value_plist_new_string_4=plist_new_string(status1);
      plist_array_append_item(array, return_value_plist_new_string_4);
    }

    else
    {
      void *return_value_plist_new_string_5;
      return_value_plist_new_string_5=plist_new_string("___EmptyParameterString___");
      plist_array_append_item(array, return_value_plist_new_string_5);
    }
    if(!(status2 == NULL))
    {
      void *return_value_plist_copy_6;
      return_value_plist_copy_6=plist_copy(status2);
      plist_array_append_item(array, return_value_plist_copy_6);
    }

    else
    {
      void *return_value_plist_new_string_7;
      return_value_plist_new_string_7=plist_new_string("___EmptyParameterString___");
      plist_array_append_item(array, return_value_plist_new_string_7);
    }
    enum anonymous_46 err;
    signed short int return_value_device_link_service_send_8;
    return_value_device_link_service_send_8=device_link_service_send(client->parent, array);
    err=mobilebackup2_error(return_value_device_link_service_send_8);
    plist_free(array);
    return err;
  }
}

// mobilebackup2_version_exchange
// file mobilebackup2.c line 268
enum anonymous_46 mobilebackup2_version_exchange(struct mobilebackup2_client_private *client, double *local_versions, char count, double *remote_version)
{
  signed int i;
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup2_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  void *node;
  _Bool tmp_if_expr_4;
  enum anonymous_11 return_value_plist_get_node_type_3;
  unsigned long int val;
  _Bool tmp_if_expr_6;
  enum anonymous_11 return_value_plist_get_node_type_5;
  if(tmp_if_expr_1)
    return (enum anonymous_46)MOBILEBACKUP2_E_INVALID_ARG;

  else
  {
    void *dict;
    dict=plist_new_dict();
    void *array;
    array=plist_new_array();
    i = 0;
    for( ; !(i >= (signed int)count); i = i + 1)
    {
      void *return_value_plist_new_real_2;
      return_value_plist_new_real_2=plist_new_real(local_versions[(signed long int)i]);
      plist_array_append_item(array, return_value_plist_new_real_2);
    }
    plist_dict_set_item(dict, "SupportedProtocolVersions", array);
    enum anonymous_46 err;
    err=mobilebackup2_send_message(client, "Hello", dict);
    plist_free(dict);
    if((signed int)err == MOBILEBACKUP2_E_SUCCESS)
    {
      dict = (void *)0;
      err=internal_mobilebackup2_receive_message(client, "Response", &dict);
      if((signed int)err == MOBILEBACKUP2_E_SUCCESS)
      {
        node=plist_dict_get_item(dict, "ErrorCode");
        if(node == NULL)
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          return_value_plist_get_node_type_3=plist_get_node_type(node);
          tmp_if_expr_4 = (signed int)return_value_plist_get_node_type_3 != PLIST_UINT ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_4)
          err = (enum anonymous_46)MOBILEBACKUP2_E_PLIST_ERROR;

        else
        {
          val = (unsigned long int)0;
          plist_get_uint_val(node, &val);
          if(!(val == 0ul))
          {
            if(val == 1ul)
              err = (enum anonymous_46)MOBILEBACKUP2_E_NO_COMMON_VERSION;

            else
              err = (enum anonymous_46)MOBILEBACKUP2_E_REPLY_NOT_OK;
          }

          else
          {
            node=plist_dict_get_item(dict, "ProtocolVersion");
            if(node == NULL)
              tmp_if_expr_6 = (_Bool)1;

            else
            {
              return_value_plist_get_node_type_5=plist_get_node_type(node);
              tmp_if_expr_6 = (signed int)return_value_plist_get_node_type_5 != PLIST_REAL ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_6)
              err = (enum anonymous_46)MOBILEBACKUP2_E_PLIST_ERROR;

            else
            {
              *remote_version = 0.0;
              plist_get_real_val(node, remote_version);
            }
          }
        }
      }

    }


  leave:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    return err;
  }
}

// mobilebackup_client_free
// file mobilebackup.c line 97
enum anonymous_43 mobilebackup_client_free(struct mobilebackup_client_private *client)
{
  if(client == ((struct mobilebackup_client_private *)NULL))
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
  {
    enum anonymous_43 err = (enum anonymous_43)MOBILEBACKUP_E_SUCCESS;
    if(!(client->parent == ((struct device_link_service_client_private *)NULL)))
    {
      device_link_service_disconnect(client->parent, (const char *)(void *)0);
      signed short int return_value_device_link_service_client_free_1;
      return_value_device_link_service_client_free_1=device_link_service_client_free(client->parent);
      err=mobilebackup_error(return_value_device_link_service_client_free_1);
    }

    free((void *)client);
    return err;
  }
}

// mobilebackup_client_new
// file mobilebackup.c line 63
enum anonymous_43 mobilebackup_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobilebackup_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct mobilebackup_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct mobilebackup_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
  {
    struct device_link_service_client_private *dlclient = (struct device_link_service_client_private *)(void *)0;
    enum anonymous_43 ret;
    signed short int return_value_device_link_service_client_new_3;
    return_value_device_link_service_client_new_3=device_link_service_client_new(device, service, &dlclient);
    ret=mobilebackup_error(return_value_device_link_service_client_new_3);
    if(!((signed int)ret == MOBILEBACKUP_E_SUCCESS))
      return ret;

    else
    {
      struct mobilebackup_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct mobilebackup_client_private) /*8ul*/ );
      client_loc = (struct mobilebackup_client_private *)return_value_malloc_4;
      client_loc->parent = dlclient;
      signed short int return_value_device_link_service_version_exchange_5;
      return_value_device_link_service_version_exchange_5=device_link_service_version_exchange(dlclient, (unsigned long int)100, (unsigned long int)0);
      ret=mobilebackup_error(return_value_device_link_service_version_exchange_5);
      if(!((signed int)ret == MOBILEBACKUP_E_SUCCESS))
      {
        mobilebackup_client_free(client_loc);
        return ret;
      }

      else
      {
        *client = client_loc;
        return ret;
      }
    }
  }
}

// mobilebackup_client_start_service
// file mobilebackup.c line 90
enum anonymous_43 mobilebackup_client_start_service(struct idevice_private *device, struct mobilebackup_client_private **client, const char *label)
{
  enum anonymous_43 err = (enum anonymous_43)MOBILEBACKUP_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobilebackup", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))mobilebackup_client_new, (signed int *)&err);
  return err;
}

// mobilebackup_error
// file mobilebackup.c line 44
static enum anonymous_43 mobilebackup_error(signed short int err)
{
  if(!((signed int)err == 0))
  {
    if((signed int)err == -1)
      goto __CPROVER_DUMP_L2;

    if((signed int)err == -2)
      goto __CPROVER_DUMP_L3;

    if((signed int)err == -3)
      goto __CPROVER_DUMP_L4;

    if((signed int)err == -4)
      goto __CPROVER_DUMP_L5;

  }

  else
  {
    return (enum anonymous_43)MOBILEBACKUP_E_SUCCESS;

  __CPROVER_DUMP_L2:
    ;
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  __CPROVER_DUMP_L3:
    ;
    return (enum anonymous_43)MOBILEBACKUP_E_PLIST_ERROR;

  __CPROVER_DUMP_L4:
    ;
    return (enum anonymous_43)MOBILEBACKUP_E_MUX_ERROR;

  __CPROVER_DUMP_L5:
    ;
    return (enum anonymous_43)MOBILEBACKUP_E_BAD_VERSION;
  }
  return (enum anonymous_43)MOBILEBACKUP_E_UNKNOWN_ERROR;
}

// mobilebackup_receive
// file mobilebackup.c line 110
enum anonymous_43 mobilebackup_receive(struct mobilebackup_client_private *client, void **plist)
{
  if(client == ((struct mobilebackup_client_private *)NULL))
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
  {
    enum anonymous_43 ret;
    signed short int return_value_device_link_service_receive_1;
    return_value_device_link_service_receive_1=device_link_service_receive(client->parent, plist);
    ret=mobilebackup_error(return_value_device_link_service_receive_1);
    return ret;
  }
}

// mobilebackup_receive_message
// file mobilebackup.c line 188
static enum anonymous_43 mobilebackup_receive_message(struct mobilebackup_client_private *client, const char *message, void **result)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  void *node;
  char *str;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  if(message == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
  {
    if(!(result == ((void **)NULL)))
      *result = (void *)0;

    enum anonymous_43 err;
    void *dict = (void *)0;
    signed short int return_value_device_link_service_receive_process_message_2;
    return_value_device_link_service_receive_process_message_2=device_link_service_receive_process_message(client->parent, &dict);
    err=mobilebackup_error(return_value_device_link_service_receive_process_message_2);
    if((signed int)err == MOBILEBACKUP_E_SUCCESS)
    {
      node=plist_dict_get_item(dict, "BackupMessageTypeKey");
      if(node == NULL)
        err = (enum anonymous_43)MOBILEBACKUP_E_PLIST_ERROR;

      else
      {
        str = (char *)(void *)0;
        plist_get_string_val(node, &str);
        if(!(str == ((char *)NULL)))
        {
          return_value_strcmp_3=strcmp(str, message);
          tmp_if_expr_4 = return_value_strcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          err = (enum anonymous_43)MOBILEBACKUP_E_SUCCESS;

        else
          err = (enum anonymous_43)MOBILEBACKUP_E_REPLY_NOT_OK;
        if(!(str == ((char *)NULL)))
          free((void *)str);

        if(!(result == ((void **)NULL)))
        {
          *result = dict;
          dict = (void *)0;
        }

      }
    }


  leave:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    return err;
  }
}

// mobilebackup_receive_restore_application_received
// file mobilebackup.c line 359
enum anonymous_43 mobilebackup_receive_restore_application_received(struct mobilebackup_client_private *client, void **result)
{
  enum anonymous_43 return_value_mobilebackup_receive_message_1;
  return_value_mobilebackup_receive_message_1=mobilebackup_receive_message(client, "BackupMessageRestoreApplicationReceived", result);
  return return_value_mobilebackup_receive_message_1;
}

// mobilebackup_receive_restore_file_received
// file mobilebackup.c line 354
enum anonymous_43 mobilebackup_receive_restore_file_received(struct mobilebackup_client_private *client, void **result)
{
  enum anonymous_43 return_value_mobilebackup_receive_message_1;
  return_value_mobilebackup_receive_message_1=mobilebackup_receive_message(client, "BackupMessageRestoreFileReceived", result);
  return return_value_mobilebackup_receive_message_1;
}

// mobilebackup_request_backup
// file mobilebackup.c line 235
enum anonymous_43 mobilebackup_request_backup(struct mobilebackup_client_private *client, void *backup_manifest, const char *base_path, const char *proto_version)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_11 return_value_plist_get_node_type_2;
  void *return_value_plist_copy_3;
  void *node;
  if(base_path == ((const char *)NULL) || proto_version == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
    if(!(backup_manifest == NULL))
    {
      return_value_plist_get_node_type_2=plist_get_node_type(backup_manifest);
      if((signed int)return_value_plist_get_node_type_2 == PLIST_DICT)
        goto __CPROVER_DUMP_L4;

      return (enum anonymous_43)MOBILEBACKUP_E_PLIST_ERROR;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      enum anonymous_43 err;
      void *dict;
      dict=plist_new_dict();
      if(!(backup_manifest == NULL))
      {
        return_value_plist_copy_3=plist_copy(backup_manifest);
        plist_dict_set_item(dict, "BackupManifestKey", return_value_plist_copy_3);
      }

      void *return_value_plist_new_string_4;
      return_value_plist_new_string_4=plist_new_string(base_path);
      plist_dict_set_item(dict, "BackupComputerBasePathKey", return_value_plist_new_string_4);
      void *return_value_plist_new_string_5;
      return_value_plist_new_string_5=plist_new_string("BackupMessageBackupRequest");
      plist_dict_set_item(dict, "BackupMessageTypeKey", return_value_plist_new_string_5);
      void *return_value_plist_new_string_6;
      return_value_plist_new_string_6=plist_new_string(proto_version);
      plist_dict_set_item(dict, "BackupProtocolVersion", return_value_plist_new_string_6);
      err=mobilebackup_send_message(client, (const char *)(void *)0, dict);
      plist_free(dict);
      dict = (void *)0;
      if((signed int)err == MOBILEBACKUP_E_SUCCESS)
      {
        err=mobilebackup_receive_message(client, "BackupMessageBackupReplyOK", &dict);
        if((signed int)err == MOBILEBACKUP_E_SUCCESS)
        {
          node=plist_dict_get_item(dict, "BackupProtocolVersion");
          if(!(node == NULL))
          {
            char *str = (char *)(void *)0;
            plist_get_string_val(node, &str);
            if(!(str == ((char *)NULL)))
            {
              signed int return_value_strcmp_7;
              return_value_strcmp_7=strcmp(str, proto_version);
              if(!(return_value_strcmp_7 == 0))
                err = (enum anonymous_43)MOBILEBACKUP_E_BAD_VERSION;

              free((void *)str);
            }

          }

          if((signed int)err == MOBILEBACKUP_E_SUCCESS)
            err=mobilebackup_send_message(client, (const char *)(void *)0, dict);

        }

      }


    leave:
      ;
      if(!(dict == NULL))
        plist_free(dict);

      return err;
    }
}

// mobilebackup_request_restore
// file mobilebackup.c line 300
enum anonymous_43 mobilebackup_request_restore(struct mobilebackup_client_private *client, void *backup_manifest, enum anonymous_44 flags, const char *proto_version)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_11 return_value_plist_get_node_type_2;
  void *node;
  if(backup_manifest == NULL || proto_version == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
    if(!(backup_manifest == NULL))
    {
      return_value_plist_get_node_type_2=plist_get_node_type(backup_manifest);
      if((signed int)return_value_plist_get_node_type_2 == PLIST_DICT)
        goto __CPROVER_DUMP_L4;

      return (enum anonymous_43)MOBILEBACKUP_E_PLIST_ERROR;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      enum anonymous_43 err;
      void *dict;
      dict=plist_new_dict();
      void *return_value_plist_copy_3;
      return_value_plist_copy_3=plist_copy(backup_manifest);
      plist_dict_set_item(dict, "BackupManifestKey", return_value_plist_copy_3);
      void *return_value_plist_new_string_4;
      return_value_plist_new_string_4=plist_new_string("kBackupMessageRestoreRequest");
      plist_dict_set_item(dict, "BackupMessageTypeKey", return_value_plist_new_string_4);
      void *return_value_plist_new_string_5;
      return_value_plist_new_string_5=plist_new_string(proto_version);
      plist_dict_set_item(dict, "BackupProtocolVersion", return_value_plist_new_string_5);
      void *return_value_plist_new_bool_6;
      return_value_plist_new_bool_6=plist_new_bool((unsigned char)(((signed int)flags & MB_RESTORE_NOTIFY_SPRINGBOARD) == MB_RESTORE_NOTIFY_SPRINGBOARD));
      plist_dict_set_item(dict, "BackupNotifySpringBoard", return_value_plist_new_bool_6);
      void *return_value_plist_new_bool_7;
      return_value_plist_new_bool_7=plist_new_bool((unsigned char)(((signed int)flags & MB_RESTORE_PRESERVE_SETTINGS) == MB_RESTORE_PRESERVE_SETTINGS));
      plist_dict_set_item(dict, "BackupPreserveSettings", return_value_plist_new_bool_7);
      void *return_value_plist_new_bool_8;
      return_value_plist_new_bool_8=plist_new_bool((unsigned char)(((signed int)flags & MB_RESTORE_PRESERVE_CAMERA_ROLL) == MB_RESTORE_PRESERVE_CAMERA_ROLL));
      plist_dict_set_item(dict, "BackupPreserveCameraRoll", return_value_plist_new_bool_8);
      err=mobilebackup_send_message(client, (const char *)(void *)0, dict);
      plist_free(dict);
      dict = (void *)0;
      if((signed int)err == MOBILEBACKUP_E_SUCCESS)
      {
        err=mobilebackup_receive_message(client, "BackupMessageRestoreReplyOK", &dict);
        if((signed int)err == MOBILEBACKUP_E_SUCCESS)
        {
          node=plist_dict_get_item(dict, "BackupProtocolVersion");
          if(!(node == NULL))
          {
            char *str = (char *)(void *)0;
            plist_get_string_val(node, &str);
            if(!(str == ((char *)NULL)))
            {
              signed int return_value_strcmp_9;
              return_value_strcmp_9=strcmp(str, proto_version);
              if(!(return_value_strcmp_9 == 0))
                err = (enum anonymous_43)MOBILEBACKUP_E_BAD_VERSION;

              free((void *)str);
            }

          }

        }

      }


    leave:
      ;
      if(!(dict == NULL))
        plist_free(dict);

      return err;
    }
}

// mobilebackup_send
// file mobilebackup.c line 118
enum anonymous_43 mobilebackup_send(struct mobilebackup_client_private *client, void *plist)
{
  if(plist == NULL || client == ((struct mobilebackup_client_private *)NULL))
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
  {
    signed short int return_value_device_link_service_send_1;
    return_value_device_link_service_send_1=device_link_service_send(client->parent, plist);
    enum anonymous_43 return_value_mobilebackup_error_2;
    return_value_mobilebackup_error_2=mobilebackup_error(return_value_device_link_service_send_1);
    return return_value_mobilebackup_error_2;
  }
}

// mobilebackup_send_backup_file_received
// file mobilebackup.c line 295
enum anonymous_43 mobilebackup_send_backup_file_received(struct mobilebackup_client_private *client)
{
  enum anonymous_43 return_value_mobilebackup_send_message_1;
  return_value_mobilebackup_send_message_1=mobilebackup_send_message(client, "kBackupMessageBackupFileReceived", (void *)0);
  return return_value_mobilebackup_send_message_1;
}

// mobilebackup_send_error
// file mobilebackup.c line 409
enum anonymous_43 mobilebackup_send_error(struct mobilebackup_client_private *client, const char *reason)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(reason == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
  {
    enum anonymous_43 err;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(reason);
    plist_dict_set_item(dict, "BackupErrorReasonKey", return_value_plist_new_string_2);
    err=mobilebackup_send_message(client, "BackupMessageError", dict);
    plist_free(dict);
    return err;
  }
}

// mobilebackup_send_message
// file mobilebackup.c line 137
static enum anonymous_43 mobilebackup_send_message(struct mobilebackup_client_private *client, const char *message, void *options)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilebackup_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(options == NULL && message == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;

  else
    if(!(options == NULL))
    {
      return_value_plist_get_node_type_2=plist_get_node_type(options);
      if((signed int)return_value_plist_get_node_type_2 == PLIST_DICT)
        goto __CPROVER_DUMP_L4;

      return (enum anonymous_43)MOBILEBACKUP_E_INVALID_ARG;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      enum anonymous_43 err;
      if(!(message == ((const char *)NULL)))
      {
        void *dict = (void *)0;
        if(!(options == NULL))
          dict=plist_copy(options);

        else
          dict=plist_new_dict();
        void *return_value_plist_new_string_3;
        return_value_plist_new_string_3=plist_new_string(message);
        plist_dict_set_item(dict, "BackupMessageTypeKey", return_value_plist_new_string_3);
        signed short int return_value_device_link_service_send_process_message_4;
        return_value_device_link_service_send_process_message_4=device_link_service_send_process_message(client->parent, dict);
        err=mobilebackup_error(return_value_device_link_service_send_process_message_4);
        plist_free(dict);
      }

      else
      {
        signed short int return_value_device_link_service_send_process_message_5;
        return_value_device_link_service_send_process_message_5=device_link_service_send_process_message(client->parent, options);
        err=mobilebackup_error(return_value_device_link_service_send_process_message_5);
      }
      return err;
    }
}

// mobilebackup_send_restore_complete
// file mobilebackup.c line 364
enum anonymous_43 mobilebackup_send_restore_complete(struct mobilebackup_client_private *client)
{
  enum anonymous_43 err;
  err=mobilebackup_send_message(client, "BackupMessageRestoreComplete", (void *)0);
  _Bool tmp_if_expr_2;
  enum anonymous_11 return_value_plist_get_node_type_1;
  _Bool tmp_if_expr_4;
  unsigned int return_value_plist_array_get_size_3;
  enum anonymous_11 return_value_plist_get_node_type_5;
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_6;
  if(!((signed int)err == MOBILEBACKUP_E_SUCCESS))
    return err;

  else
  {
    void *dlmsg = (void *)0;
    err=mobilebackup_receive(client, &dlmsg);
    if(dlmsg == NULL || !((signed int)err == MOBILEBACKUP_E_SUCCESS))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      return_value_plist_get_node_type_1=plist_get_node_type(dlmsg);
      tmp_if_expr_2 = (signed int)return_value_plist_get_node_type_1 != PLIST_ARRAY ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_plist_array_get_size_3=plist_array_get_size(dlmsg);
      tmp_if_expr_4 = return_value_plist_array_get_size_3 != (unsigned int)2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      if(!(dlmsg == NULL))
        plist_free(dlmsg);

      if((signed int)err == MOBILEBACKUP_E_SUCCESS)
        err = (enum anonymous_43)MOBILEBACKUP_E_PLIST_ERROR;

      return err;
    }

    else
    {
      void *node;
      node=plist_array_get_item(dlmsg, (unsigned int)0);
      char *msg = (char *)(void *)0;
      if(!(node == NULL))
      {
        return_value_plist_get_node_type_5=plist_get_node_type(node);
        if((signed int)return_value_plist_get_node_type_5 == PLIST_STRING)
          plist_get_string_val(node, &msg);

      }

      if(!(msg == ((char *)NULL)))
      {
        return_value_strcmp_6=strcmp(msg, "DLMessageDisconnect");
        tmp_if_expr_7 = !(return_value_strcmp_6 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_7 = (_Bool)0;
      if(tmp_if_expr_7)
      {
        err = (enum anonymous_43)MOBILEBACKUP_E_SUCCESS;
        device_link_service_client_free(client->parent);
        client->parent = (struct device_link_service_client_private *)(void *)0;
      }

      else
        err = (enum anonymous_43)MOBILEBACKUP_E_PLIST_ERROR;
      plist_free(dlmsg);
      if(!(msg == ((char *)NULL)))
        free((void *)msg);

      return err;
    }
  }
}

// mobilesync_acknowledge_changes_from_device
// file mobilesync.c line 487
enum anonymous_39 mobilesync_acknowledge_changes_from_device(struct mobilesync_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    void *msg = (void *)0;
    enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
    msg=plist_new_array();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("SDMessageAcknowledgeChangesFromDevice");
    plist_array_append_item(msg, return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(client->data_class);
    plist_array_append_item(msg, return_value_plist_new_string_3);
    err=mobilesync_send(client, msg);
    plist_free(msg);
    return err;
  }
}

// mobilesync_actions_add
// file mobilesync.c line 747
void mobilesync_actions_add(void *actions, ...)
{
  signed int return_value_strcmp_3;
  if(!(actions == NULL))
  {
    __builtin_va_list args;
    va_start(args, actions);
    char *arg;
    arg=va_arg(args, __typeof__(arg));
    while(!(arg == ((char *)NULL)))
    {
      char *key;
      key=strdup(arg);
      signed int return_value_strcmp_4;
      return_value_strcmp_4=strcmp(key, "SyncDeviceLinkEntityNamesKey");
      if(return_value_strcmp_4 == 0)
      {
        char **entity_names;
        entity_names=va_arg(args, __typeof__(entity_names));
        signed int entity_names_length;
        entity_names_length=va_arg(args, __typeof__(entity_names_length));
        signed int i = 0;
        void *array;
        array=plist_new_array();
        i = 0;
        for( ; !(i >= entity_names_length); i = i + 1)
        {
          void *return_value_plist_new_string_1;
          return_value_plist_new_string_1=plist_new_string(entity_names[(signed long int)i]);
          plist_array_append_item(array, return_value_plist_new_string_1);
        }
        plist_dict_set_item(actions, key, array);
      }

      else
      {
        return_value_strcmp_3=strcmp(key, "SyncDeviceLinkAllRecordsOfPulledEntityTypeSentKey");
        if(return_value_strcmp_3 == 0)
        {
          signed int link_records;
          link_records=va_arg(args, __typeof__(link_records));
          void *return_value_plist_new_bool_2;
          return_value_plist_new_bool_2=plist_new_bool((unsigned char)link_records);
          plist_dict_set_item(actions, key, return_value_plist_new_bool_2);
        }

      }
      free((void *)key);
      key = (char *)(void *)0;
      arg=va_arg(args, __typeof__(arg));
    }
    va_end(args);
  }

}

// mobilesync_actions_free
// file mobilesync.c line 779
void mobilesync_actions_free(void *actions)
{
  if(!(actions == NULL))
  {
    plist_free(actions);
    actions = (void *)0;
  }

}

// mobilesync_actions_new
// file mobilesync.c line 742
void * mobilesync_actions_new(void)
{
  void *return_value_plist_new_dict_1;
  return_value_plist_new_dict_1=plist_new_dict();
  return return_value_plist_new_dict_1;
}

// mobilesync_anchors_free
// file mobilesync.c line 728
void mobilesync_anchors_free(struct anonymous_41 *anchors)
{
  if(!(anchors->device_anchor == ((char *)NULL)))
  {
    free((void *)anchors->device_anchor);
    anchors->device_anchor = (char *)(void *)0;
  }

  if(!(anchors->computer_anchor == ((char *)NULL)))
  {
    free((void *)anchors->computer_anchor);
    anchors->computer_anchor = (char *)(void *)0;
  }

  free((void *)anchors);
  anchors = (struct anonymous_41 *)(void *)0;
}

// mobilesync_anchors_new
// file mobilesync.c line 711
struct anonymous_41 * mobilesync_anchors_new(const char *device_anchor, const char *computer_anchor)
{
  struct anonymous_41 *anchors;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_41) /*16ul*/ );
  anchors = (struct anonymous_41 *)return_value_malloc_1;
  if(!(device_anchor == ((const char *)NULL)))
    anchors->device_anchor=strdup(device_anchor);

  else
    anchors->device_anchor = (char *)(void *)0;
  if(!(computer_anchor == ((const char *)NULL)))
    anchors->computer_anchor=strdup(computer_anchor);

  else
    anchors->computer_anchor = (char *)(void *)0;
  return anchors;
}

// mobilesync_cancel
// file mobilesync.c line 685
enum anonymous_39 mobilesync_cancel(struct mobilesync_client_private *client, const char *reason)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(reason == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
    void *msg = (void *)0;
    msg=plist_new_array();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("SDMessageCancelSession");
    plist_array_append_item(msg, return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(client->data_class);
    plist_array_append_item(msg, return_value_plist_new_string_3);
    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string(reason);
    plist_array_append_item(msg, return_value_plist_new_string_4);
    err=mobilesync_send(client, msg);
    plist_free(msg);
    msg = (void *)0;
    free((void *)client->data_class);
    client->data_class = (char *)(void *)0;
    client->direction = (enum anonymous_40)MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER;
    return err;
  }
}

// mobilesync_clear_all_records_on_device
// file mobilesync.c line 418
enum anonymous_39 mobilesync_clear_all_records_on_device(struct mobilesync_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_7;
  if(tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
    void *msg = (void *)0;
    void *response_type_node = (void *)0;
    char *response_type = (char *)(void *)0;
    msg=plist_new_array();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("SDMessageClearAllRecordsOnDevice");
    plist_array_append_item(msg, return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(client->data_class);
    plist_array_append_item(msg, return_value_plist_new_string_3);
    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string("___EmptyParameterString___");
    plist_array_append_item(msg, return_value_plist_new_string_4);
    err=mobilesync_send(client, msg);
    if((signed int)err == MOBILESYNC_E_SUCCESS)
    {
      plist_free(msg);
      msg = (void *)0;
      err=mobilesync_receive(client, &msg);
      if((signed int)err == MOBILESYNC_E_SUCCESS)
      {
        response_type_node=plist_array_get_item(msg, (unsigned int)0);
        if(response_type_node == NULL)
          err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

        else
        {
          plist_get_string_val(response_type_node, &response_type);
          if(response_type == ((char *)NULL))
            err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

          else
          {
            return_value_strcmp_6=strcmp(response_type, "SDMessageCancelSession");
            if(return_value_strcmp_6 == 0)
            {
              char *reason = (char *)(void *)0;
              err = (enum anonymous_39)MOBILESYNC_E_CANCELLED;
              void *return_value_plist_array_get_item_5;
              return_value_plist_array_get_item_5=plist_array_get_item(msg, (unsigned int)2);
              plist_get_string_val(return_value_plist_array_get_item_5, &reason);
              free((void *)reason);
              goto out;
            }

            return_value_strcmp_7=strcmp(response_type, "SDMessageDeviceWillClearAllRecords");
            if(!(return_value_strcmp_7 == 0))
              err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

          }
        }
      }

    }


  out:
    ;
    if(!(response_type == ((char *)NULL)))
    {
      free((void *)response_type);
      response_type = (char *)(void *)0;
    }

    if(!(msg == NULL))
    {
      plist_free(msg);
      msg = (void *)0;
    }

    return err;
  }
}

// mobilesync_client_free
// file mobilesync.c line 105
enum anonymous_39 mobilesync_client_free(struct mobilesync_client_private *client)
{
  if(client == ((struct mobilesync_client_private *)NULL))
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    device_link_service_disconnect(client->parent, "All done, thanks for the memories");
    enum anonymous_39 err;
    signed short int return_value_device_link_service_client_free_1;
    return_value_device_link_service_client_free_1=device_link_service_client_free(client->parent);
    err=mobilesync_error(return_value_device_link_service_client_free_1);
    free((void *)client);
    return err;
  }
}

// mobilesync_client_new
// file mobilesync.c line 68
enum anonymous_39 mobilesync_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct mobilesync_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct mobilesync_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct mobilesync_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    struct device_link_service_client_private *dlclient = (struct device_link_service_client_private *)(void *)0;
    enum anonymous_39 ret;
    signed short int return_value_device_link_service_client_new_3;
    return_value_device_link_service_client_new_3=device_link_service_client_new(device, service, &dlclient);
    ret=mobilesync_error(return_value_device_link_service_client_new_3);
    if(!((signed int)ret == MOBILESYNC_E_SUCCESS))
      return ret;

    else
    {
      struct mobilesync_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct mobilesync_client_private) /*24ul*/ );
      client_loc = (struct mobilesync_client_private *)return_value_malloc_4;
      client_loc->parent = dlclient;
      client_loc->direction = (enum anonymous_40)MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER;
      client_loc->data_class = (char *)(void *)0;
      signed short int return_value_device_link_service_version_exchange_5;
      return_value_device_link_service_version_exchange_5=device_link_service_version_exchange(dlclient, (unsigned long int)300, (unsigned long int)100);
      ret=mobilesync_error(return_value_device_link_service_version_exchange_5);
      if(!((signed int)ret == MOBILESYNC_E_SUCCESS))
      {
        mobilesync_client_free(client_loc);
        return ret;
      }

      else
      {
        *client = client_loc;
        return ret;
      }
    }
  }
}

// mobilesync_client_start_service
// file mobilesync.c line 98
enum anonymous_39 mobilesync_client_start_service(struct idevice_private *device, struct mobilesync_client_private **client, const char *label)
{
  enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobilesync", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))mobilesync_client_new, (signed int *)&err);
  return err;
}

// mobilesync_error
// file mobilesync.c line 49
static enum anonymous_39 mobilesync_error(signed short int err)
{
  if(!((signed int)err == 0))
  {
    if((signed int)err == -1)
      goto __CPROVER_DUMP_L2;

    if((signed int)err == -2)
      goto __CPROVER_DUMP_L3;

    if((signed int)err == -3)
      goto __CPROVER_DUMP_L4;

    if((signed int)err == -4)
      goto __CPROVER_DUMP_L5;

  }

  else
  {
    return (enum anonymous_39)MOBILESYNC_E_SUCCESS;

  __CPROVER_DUMP_L2:
    ;
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  __CPROVER_DUMP_L3:
    ;
    return (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

  __CPROVER_DUMP_L4:
    ;
    return (enum anonymous_39)MOBILESYNC_E_MUX_ERROR;

  __CPROVER_DUMP_L5:
    ;
    return (enum anonymous_39)MOBILESYNC_E_BAD_VERSION;
  }
  return (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
}

// mobilesync_finish
// file mobilesync.c line 256
enum anonymous_39 mobilesync_finish(struct mobilesync_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  signed int return_value_strcmp_4;
  if(tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
    void *msg = (void *)0;
    void *response_type_node = (void *)0;
    char *response_type = (char *)(void *)0;
    msg=plist_new_array();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("SDMessageFinishSessionOnDevice");
    plist_array_append_item(msg, return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(client->data_class);
    plist_array_append_item(msg, return_value_plist_new_string_3);
    err=mobilesync_send(client, msg);
    if((signed int)err == MOBILESYNC_E_SUCCESS)
    {
      plist_free(msg);
      msg = (void *)0;
      err=mobilesync_receive(client, &msg);
      if((signed int)err == MOBILESYNC_E_SUCCESS)
      {
        response_type_node=plist_array_get_item(msg, (unsigned int)0);
        if(response_type_node == NULL)
          err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

        else
        {
          plist_get_string_val(response_type_node, &response_type);
          if(response_type == ((char *)NULL))
            err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

          else
          {
            return_value_strcmp_4=strcmp(response_type, "SDMessageDeviceFinishedSession");
            if(return_value_strcmp_4 == 0)
              err = (enum anonymous_39)MOBILESYNC_E_SUCCESS;

          }
        }
      }

    }


  out:
    ;
    if(!(response_type == ((char *)NULL)))
    {
      free((void *)response_type);
      response_type = (char *)(void *)0;
    }

    if(!(msg == NULL))
    {
      plist_free(msg);
      msg = (void *)0;
    }

    free((void *)client->data_class);
    client->data_class = (char *)(void *)0;
    client->direction = (enum anonymous_40)MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER;
    return err;
  }
}

// mobilesync_get_all_records_from_device
// file mobilesync.c line 341
enum anonymous_39 mobilesync_get_all_records_from_device(struct mobilesync_client_private *client)
{
  enum anonymous_39 return_value_mobilesync_get_records_1;
  return_value_mobilesync_get_records_1=mobilesync_get_records(client, "SDMessageGetAllRecordsFromDevice");
  return return_value_mobilesync_get_records_1;
}

// mobilesync_get_changes_from_device
// file mobilesync.c line 346
enum anonymous_39 mobilesync_get_changes_from_device(struct mobilesync_client_private *client)
{
  enum anonymous_39 return_value_mobilesync_get_records_1;
  return_value_mobilesync_get_records_1=mobilesync_get_records(client, "SDMessageGetChangesFromDevice");
  return return_value_mobilesync_get_records_1;
}

// mobilesync_get_records
// file mobilesync.c line 319
static enum anonymous_39 mobilesync_get_records(struct mobilesync_client_private *client, const char *operation)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(operation == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
    void *msg = (void *)0;
    msg=plist_new_array();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(operation);
    plist_array_append_item(msg, return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(client->data_class);
    plist_array_append_item(msg, return_value_plist_new_string_3);
    err=mobilesync_send(client, msg);
    if(!(msg == NULL))
    {
      plist_free(msg);
      msg = (void *)0;
    }

    return err;
  }
}

// mobilesync_ready_to_send_changes_from_computer
// file mobilesync.c line 521
enum anonymous_39 mobilesync_ready_to_send_changes_from_computer(struct mobilesync_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_4;
  signed short int return_value_device_link_service_send_ping_5;
  if(tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
    if(!((signed int)client->direction == MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER))
      return (enum anonymous_39)MOBILESYNC_E_WRONG_DIRECTION;

    else
    {
      void *msg = (void *)0;
      void *response_type_node = (void *)0;
      char *response_type = (char *)(void *)0;
      enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
      err=mobilesync_receive(client, &msg);
      if((signed int)err == MOBILESYNC_E_SUCCESS)
      {
        response_type_node=plist_array_get_item(msg, (unsigned int)0);
        if(response_type_node == NULL)
          err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

        else
        {
          plist_get_string_val(response_type_node, &response_type);
          if(response_type == ((char *)NULL))
            err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

          else
          {
            return_value_strcmp_3=strcmp(response_type, "SDMessageCancelSession");
            if(return_value_strcmp_3 == 0)
            {
              char *reason = (char *)(void *)0;
              err = (enum anonymous_39)MOBILESYNC_E_CANCELLED;
              void *return_value_plist_array_get_item_2;
              return_value_plist_array_get_item_2=plist_array_get_item(msg, (unsigned int)2);
              plist_get_string_val(return_value_plist_array_get_item_2, &reason);
              free((void *)reason);
              goto out;
            }

            return_value_strcmp_4=strcmp(response_type, "SDMessageDeviceReadyToReceiveChanges");
            if(!(return_value_strcmp_4 == 0))
              err = (enum anonymous_39)MOBILESYNC_E_NOT_READY;

            else
            {
              return_value_device_link_service_send_ping_5=device_link_service_send_ping(client->parent, "Preparing to get changes for device");
              err=mobilesync_error(return_value_device_link_service_send_ping_5);
              if((signed int)err == MOBILESYNC_E_SUCCESS)
              {
                client->direction = (enum anonymous_40)MOBILESYNC_SYNC_DIR_COMPUTER_TO_DEVICE;
                err = (enum anonymous_39)MOBILESYNC_E_SUCCESS;
              }

            }
          }
        }
      }


    out:
      ;
      if(!(response_type == ((char *)NULL)))
      {
        free((void *)response_type);
        response_type = (char *)(void *)0;
      }

      if(!(msg == NULL))
      {
        plist_free(msg);
        msg = (void *)0;
      }

      return err;
    }
}

// mobilesync_receive
// file mobilesync.c line 115
enum anonymous_39 mobilesync_receive(struct mobilesync_client_private *client, void **plist)
{
  if(client == ((struct mobilesync_client_private *)NULL))
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    enum anonymous_39 ret;
    signed short int return_value_device_link_service_receive_1;
    return_value_device_link_service_receive_1=device_link_service_receive(client->parent, plist);
    ret=mobilesync_error(return_value_device_link_service_receive_1);
    return ret;
  }
}

// mobilesync_receive_changes
// file mobilesync.c line 351
enum anonymous_39 mobilesync_receive_changes(struct mobilesync_client_private *client, void **entities, unsigned char *is_last_record, void **actions)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  signed int return_value_strcmp_3;
  if(tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    void *msg = (void *)0;
    void *response_type_node = (void *)0;
    void *actions_node = (void *)0;
    char *response_type = (char *)(void *)0;
    unsigned char has_more_changes = (unsigned char)0;
    enum anonymous_39 err;
    err=mobilesync_receive(client, &msg);
    if((signed int)err == MOBILESYNC_E_SUCCESS)
    {
      response_type_node=plist_array_get_item(msg, (unsigned int)0);
      if(response_type_node == NULL)
        err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

      else
      {
        plist_get_string_val(response_type_node, &response_type);
        if(response_type == ((char *)NULL))
          err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

        else
        {
          return_value_strcmp_3=strcmp(response_type, "SDMessageCancelSession");
          if(return_value_strcmp_3 == 0)
          {
            char *reason = (char *)(void *)0;
            err = (enum anonymous_39)MOBILESYNC_E_CANCELLED;
            void *return_value_plist_array_get_item_2;
            return_value_plist_array_get_item_2=plist_array_get_item(msg, (unsigned int)2);
            plist_get_string_val(return_value_plist_array_get_item_2, &reason);
            free((void *)reason);
            goto out;
          }

          if(!(entities == ((void **)NULL)))
          {
            void *return_value_plist_array_get_item_4;
            return_value_plist_array_get_item_4=plist_array_get_item(msg, (unsigned int)2);
            *entities=plist_copy(return_value_plist_array_get_item_4);
          }

          if(!(is_last_record == ((unsigned char *)NULL)))
          {
            void *return_value_plist_array_get_item_5;
            return_value_plist_array_get_item_5=plist_array_get_item(msg, (unsigned int)3);
            plist_get_bool_val(return_value_plist_array_get_item_5, &has_more_changes);
            *is_last_record = (unsigned char)((signed int)has_more_changes > 0 ? 0 : 1);
          }

          if(!(actions == ((void **)NULL)))
          {
            actions_node=plist_array_get_item(msg, (unsigned int)4);
            enum anonymous_11 return_value_plist_get_node_type_6;
            return_value_plist_get_node_type_6=plist_get_node_type(actions_node);
            if((signed int)return_value_plist_get_node_type_6 == PLIST_DICT)
              *actions=plist_copy(actions_node);

            else
              *actions = (void *)0;
          }

        }
      }
    }


  out:
    ;
    if(!(response_type == ((char *)NULL)))
    {
      free((void *)response_type);
      response_type = (char *)(void *)0;
    }

    if(!(msg == NULL))
    {
      plist_free(msg);
      msg = (void *)0;
    }

    return err;
  }
}

// mobilesync_remap_identifiers
// file mobilesync.c line 616
enum anonymous_39 mobilesync_remap_identifiers(struct mobilesync_client_private *client, void **mapping)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_4;
  if(tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
    if((signed int)client->direction == MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER)
      return (enum anonymous_39)MOBILESYNC_E_WRONG_DIRECTION;

    else
    {
      void *msg = (void *)0;
      void *response_type_node = (void *)0;
      char *response_type = (char *)(void *)0;
      enum anonymous_39 err;
      err=mobilesync_receive(client, &msg);
      if((signed int)err == MOBILESYNC_E_SUCCESS)
      {
        response_type_node=plist_array_get_item(msg, (unsigned int)0);
        if(response_type_node == NULL)
          err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

        else
        {
          plist_get_string_val(response_type_node, &response_type);
          if(response_type == ((char *)NULL))
            err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

          else
          {
            return_value_strcmp_3=strcmp(response_type, "SDMessageCancelSession");
            if(return_value_strcmp_3 == 0)
            {
              char *reason = (char *)(void *)0;
              err = (enum anonymous_39)MOBILESYNC_E_CANCELLED;
              void *return_value_plist_array_get_item_2;
              return_value_plist_array_get_item_2=plist_array_get_item(msg, (unsigned int)2);
              plist_get_string_val(return_value_plist_array_get_item_2, &reason);
              free((void *)reason);
              goto out;
            }

            return_value_strcmp_4=strcmp(response_type, "SDMessageRemapRecordIdentifiers");
            if(!(return_value_strcmp_4 == 0))
              err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

            else
            {
              if(!(mapping == ((void **)NULL)))
              {
                void *map;
                map=plist_array_get_item(msg, (unsigned int)2);
                enum anonymous_11 return_value_plist_get_node_type_5;
                return_value_plist_get_node_type_5=plist_get_node_type(map);
                if((signed int)return_value_plist_get_node_type_5 == PLIST_DICT)
                  *mapping=plist_copy(map);

                else
                  *mapping = (void *)0;
              }

              err = (enum anonymous_39)MOBILESYNC_E_SUCCESS;
            }
          }
        }
      }


    out:
      ;
      if(!(response_type == ((char *)NULL)))
      {
        free((void *)response_type);
        response_type = (char *)(void *)0;
      }

      if(!(msg == NULL))
      {
        plist_free(msg);
        msg = (void *)0;
      }

      return err;
    }
}

// mobilesync_send
// file mobilesync.c line 123
enum anonymous_39 mobilesync_send(struct mobilesync_client_private *client, void *plist)
{
  if(plist == NULL || client == ((struct mobilesync_client_private *)NULL))
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    signed short int return_value_device_link_service_send_1;
    return_value_device_link_service_send_1=device_link_service_send(client->parent, plist);
    enum anonymous_39 return_value_mobilesync_error_2;
    return_value_mobilesync_error_2=mobilesync_error(return_value_device_link_service_send_1);
    return return_value_mobilesync_error_2;
  }
}

// mobilesync_send_changes
// file mobilesync.c line 588
enum anonymous_39 mobilesync_send_changes(struct mobilesync_client_private *client, void *entities, unsigned char is_last_record, void *actions)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->data_class != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(entities == NULL || tmp_if_expr_1)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    enum anonymous_11 return_value_plist_get_node_type_2;
    return_value_plist_get_node_type_2=plist_get_node_type(entities);
    if(!((signed int)return_value_plist_get_node_type_2 == PLIST_DICT))
      return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

    else
      if(!((signed int)client->direction == MOBILESYNC_SYNC_DIR_COMPUTER_TO_DEVICE))
        return (enum anonymous_39)MOBILESYNC_E_WRONG_DIRECTION;

      else
      {
        enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
        void *msg = (void *)0;
        msg=create_process_changes_message(client->data_class, entities, (unsigned char)((signed int)is_last_record > 0 ? 0 : 1), actions);
        err=mobilesync_send(client, msg);
        if(!(msg == NULL))
        {
          plist_free(msg);
          msg = (void *)0;
        }

        return err;
      }
  }
}

// mobilesync_start
// file mobilesync.c line 130
enum anonymous_39 mobilesync_start(struct mobilesync_client_private *client, const char *data_class, struct anonymous_41 *anchors, unsigned long int computer_data_class_version, enum anonymous_42 *sync_type, unsigned long int *device_data_class_version, char **error_description)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct mobilesync_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = client->data_class != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(data_class == ((const char *)NULL) || anchors == ((struct anonymous_41 *)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(anchors->computer_anchor != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  signed int return_value_strcmp_11;
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_14;
  if(tmp_if_expr_2)
    return (enum anonymous_39)MOBILESYNC_E_INVALID_ARG;

  else
  {
    enum anonymous_39 err = (enum anonymous_39)MOBILESYNC_E_UNKNOWN_ERROR;
    char *response_type = (char *)(void *)0;
    char *sync_type_str = (char *)(void *)0;
    void *msg = (void *)0;
    void *response_type_node = (void *)0;
    *error_description = (char *)(void *)0;
    msg=plist_new_array();
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string("SDMessageSyncDataClassWithDevice");
    plist_array_append_item(msg, return_value_plist_new_string_3);
    void *return_value_plist_new_string_4;
    return_value_plist_new_string_4=plist_new_string(data_class);
    plist_array_append_item(msg, return_value_plist_new_string_4);
    if(!(anchors->device_anchor == ((char *)NULL)))
    {
      void *return_value_plist_new_string_5;
      return_value_plist_new_string_5=plist_new_string(anchors->device_anchor);
      plist_array_append_item(msg, return_value_plist_new_string_5);
    }

    else
    {
      void *return_value_plist_new_string_6;
      return_value_plist_new_string_6=plist_new_string("---");
      plist_array_append_item(msg, return_value_plist_new_string_6);
    }
    void *return_value_plist_new_string_7;
    return_value_plist_new_string_7=plist_new_string(anchors->computer_anchor);
    plist_array_append_item(msg, return_value_plist_new_string_7);
    void *return_value_plist_new_uint_8;
    return_value_plist_new_uint_8=plist_new_uint(computer_data_class_version);
    plist_array_append_item(msg, return_value_plist_new_uint_8);
    void *return_value_plist_new_string_9;
    return_value_plist_new_string_9=plist_new_string("___EmptyParameterString___");
    plist_array_append_item(msg, return_value_plist_new_string_9);
    err=mobilesync_send(client, msg);
    if((signed int)err == MOBILESYNC_E_SUCCESS)
    {
      plist_free(msg);
      msg = (void *)0;
      err=mobilesync_receive(client, &msg);
      if((signed int)err == MOBILESYNC_E_SUCCESS)
      {
        response_type_node=plist_array_get_item(msg, (unsigned int)0);
        if(response_type_node == NULL)
          err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

        else
        {
          plist_get_string_val(response_type_node, &response_type);
          if(response_type == ((char *)NULL))
            err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;

          else
          {
            return_value_strcmp_11=strcmp(response_type, "SDMessageRefuseToSyncDataClassWithComputer");
            if(return_value_strcmp_11 == 0)
            {
              err = (enum anonymous_39)MOBILESYNC_E_SYNC_REFUSED;
              void *return_value_plist_array_get_item_10;
              return_value_plist_array_get_item_10=plist_array_get_item(msg, (unsigned int)2);
              plist_get_string_val(return_value_plist_array_get_item_10, error_description);
              goto out;
            }

            return_value_strcmp_13=strcmp(response_type, "SDMessageCancelSession");
            if(return_value_strcmp_13 == 0)
            {
              err = (enum anonymous_39)MOBILESYNC_E_CANCELLED;
              void *return_value_plist_array_get_item_12;
              return_value_plist_array_get_item_12=plist_array_get_item(msg, (unsigned int)2);
              plist_get_string_val(return_value_plist_array_get_item_12, error_description);
              goto out;
            }

            if(!(sync_type == ((enum anonymous_42 *)NULL)))
            {
              void *sync_type_node;
              sync_type_node=plist_array_get_item(msg, (unsigned int)4);
              if(sync_type_node == NULL)
              {
                err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;
                goto out;
              }

              plist_get_string_val(sync_type_node, &sync_type_str);
              if(sync_type_str == ((char *)NULL))
              {
                err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;
                goto out;
              }

              signed int return_value_strcmp_16;
              return_value_strcmp_16=strcmp(sync_type_str, "SDSyncTypeFast");
              if(return_value_strcmp_16 == 0)
                *sync_type = (enum anonymous_42)MOBILESYNC_SYNC_TYPE_FAST;

              else
              {
                return_value_strcmp_15=strcmp(sync_type_str, "SDSyncTypeSlow");
                if(return_value_strcmp_15 == 0)
                  *sync_type = (enum anonymous_42)MOBILESYNC_SYNC_TYPE_SLOW;

                else
                {
                  return_value_strcmp_14=strcmp(sync_type_str, "SDSyncTypeReset");
                  if(return_value_strcmp_14 == 0)
                    *sync_type = (enum anonymous_42)MOBILESYNC_SYNC_TYPE_RESET;

                  else
                  {
                    err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;
                    goto out;
                  }
                }
              }
            }

            if(!(device_data_class_version == ((unsigned long int *)NULL)))
            {
              void *device_data_class_version_node;
              device_data_class_version_node=plist_array_get_item(msg, (unsigned int)5);
              if(device_data_class_version_node == NULL)
              {
                err = (enum anonymous_39)MOBILESYNC_E_PLIST_ERROR;
                goto out;
              }

              plist_get_uint_val(device_data_class_version_node, device_data_class_version);
            }

            err = (enum anonymous_39)MOBILESYNC_E_SUCCESS;
          }
        }
      }

    }


  out:
    ;
    if(!(sync_type_str == ((char *)NULL)))
    {
      free((void *)sync_type_str);
      sync_type_str = (char *)(void *)0;
    }

    if(!(response_type == ((char *)NULL)))
    {
      free((void *)response_type);
      response_type = (char *)(void *)0;
    }

    if(!(msg == NULL))
    {
      plist_free(msg);
      msg = (void *)0;
    }

    client->data_class=strdup(data_class);
    client->direction = (enum anonymous_40)MOBILESYNC_SYNC_DIR_DEVICE_TO_COMPUTER;
    return err;
  }
}

// mutex_destroy
// file thread.c line 65
void mutex_destroy(union anonymous_6 *mutex)
{
  pthread_mutex_destroy(mutex);
}

// mutex_init
// file thread.c line 56
void mutex_init(union anonymous_6 *mutex)
{
  pthread_mutex_init(mutex, (const union anonymous_17 *)(void *)0);
}

// mutex_lock
// file thread.c line 74
void mutex_lock(union anonymous_6 *mutex)
{
  pthread_mutex_lock(mutex);
}

// mutex_unlock
// file thread.c line 83
void mutex_unlock(union anonymous_6 *mutex)
{
  pthread_mutex_unlock(mutex);
}

// np_client_free
// file notification_proxy.c line 114
enum anonymous_24 np_client_free(struct np_client_private *client)
{
  void *dict;
  struct property_list_service_client_private *parent;
  if(client == ((struct np_client_private *)NULL))
    return (enum anonymous_24)NP_E_INVALID_ARG;

  else
  {
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("Shutdown");
    plist_dict_set_item(dict, "Command", return_value_plist_new_string_1);
    property_list_service_send_xml_plist(client->parent, dict);
    plist_free(dict);
    parent = client->parent;
    client->parent = (struct property_list_service_client_private *)(void *)0;
    if(!(client->notifier == 0ul))
    {
      thread_join(client->notifier);
      thread_free(client->notifier);
      client->notifier = (unsigned long int)(void *)0;
    }

    else
    {
      dict = (void *)0;
      property_list_service_receive_plist(parent, &dict);
      if(!(dict == NULL))
        plist_free(dict);

    }
    property_list_service_client_free(parent);
    mutex_destroy(&client->mutex);
    free((void *)client);
    return (enum anonymous_24)NP_E_SUCCESS;
  }
}

// np_client_new
// file notification_proxy.c line 89
enum anonymous_24 np_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct np_client_private **client)
{
  struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
  enum anonymous_24 err;
  enum anonymous_23 return_value_property_list_service_client_new_1;
  return_value_property_list_service_client_new_1=property_list_service_client_new(device, service, &plistclient);
  err=np_error(return_value_property_list_service_client_new_1);
  if(!((signed int)err == NP_E_SUCCESS))
    return err;

  else
  {
    struct np_client_private *client_loc;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct np_client_private) /*56ul*/ );
    client_loc = (struct np_client_private *)return_value_malloc_2;
    client_loc->parent = plistclient;
    mutex_init(&client_loc->mutex);
    client_loc->notifier = (unsigned long int)(void *)0;
    *client = client_loc;
    return (enum anonymous_24)NP_E_SUCCESS;
  }
}

// np_client_start_service
// file notification_proxy.c line 107
enum anonymous_24 np_client_start_service(struct idevice_private *device, struct np_client_private **client, const char *label)
{
  enum anonymous_24 err = (enum anonymous_24)NP_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.notification_proxy", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))np_client_new, (signed int *)&err);
  return err;
}

// np_error
// file notification_proxy.c line 72
static enum anonymous_24 np_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_24)NP_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_24)NP_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_24)NP_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_24)NP_E_CONN_FAILED;
    default:
      return (enum anonymous_24)NP_E_UNKNOWN_ERROR;
  }
}

// np_get_notification
// file notification_proxy.c line 248
static signed int np_get_notification(struct np_client_private *client, char **notification)
{
  signed int res = 0;
  void *dict = (void *)0;
  _Bool tmp_if_expr_1;
  if(client == ((struct np_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *notification != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_5;
  if(tmp_if_expr_2)
    return -1;

  else
  {
    np_lock(client);
    enum anonymous_23 perr;
    perr=property_list_service_receive_plist_with_timeout(client->parent, &dict, (unsigned int)500);
    if((signed int)perr == PROPERTY_LIST_SERVICE_E_RECEIVE_TIMEOUT)
      res = 0;

    else
      if(!((signed int)perr == PROPERTY_LIST_SERVICE_E_SUCCESS))
        res = (signed int)perr;

    if(!(dict == NULL))
    {
      char *cmd_value = (char *)(void *)0;
      void *cmd_value_node;
      cmd_value_node=plist_dict_get_item(dict, "Command");
      enum anonymous_11 return_value_plist_get_node_type_3;
      return_value_plist_get_node_type_3=plist_get_node_type(cmd_value_node);
      if((signed int)return_value_plist_get_node_type_3 == PLIST_STRING)
        plist_get_string_val(cmd_value_node, &cmd_value);

      if(!(cmd_value == ((char *)NULL)))
      {
        return_value_strcmp_7=strcmp(cmd_value, "RelayNotification");
        tmp_if_expr_8 = !(return_value_strcmp_7 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
      {
        char *name_value = (char *)(void *)0;
        void *name_value_node;
        name_value_node=plist_dict_get_item(dict, "Name");
        enum anonymous_11 return_value_plist_get_node_type_4;
        return_value_plist_get_node_type_4=plist_get_node_type(name_value_node);
        if((signed int)return_value_plist_get_node_type_4 == PLIST_STRING)
          plist_get_string_val(name_value_node, &name_value);

        res = -2;
        if(!(name_value_node == NULL) && !(name_value == ((char *)NULL)))
        {
          *notification = name_value;
          res = 0;
        }

      }

      else
      {
        if(!(cmd_value == ((char *)NULL)))
        {
          return_value_strcmp_5=strcmp(cmd_value, "ProxyDeath");
          tmp_if_expr_6 = !(return_value_strcmp_5 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
          res = -1;

        else
          if(!(cmd_value == ((char *)NULL)))
            res = -1;

          else
            res = -2;
      }
      if(!(cmd_value == ((char *)NULL)))
        free((void *)cmd_value);

      plist_free(dict);
      dict = (void *)0;
    }

    np_unlock(client);
    return res;
  }
}

// np_lock
// file notification_proxy.c line 46
static void np_lock(struct np_client_private *client)
{
  mutex_lock(&client->mutex);
}

// np_notifier
// file notification_proxy.c line 312
void * np_notifier(void *arg)
{
  char *notification = (char *)(void *)0;
  struct np_thread *npt = (struct np_thread *)arg;
  if(npt == ((struct np_thread *)NULL))
    return (void *)0;

  else
  {
    while(!(npt->client->parent == ((struct property_list_service_client_private *)NULL)))
    {
      signed int return_value_np_get_notification_1;
      return_value_np_get_notification_1=np_get_notification(npt->client, &notification);
      if(!(return_value_np_get_notification_1 >= 0))
      {
        npt->cbfunc("", npt->user_data);
        break;
      }

      if(!(notification == ((char *)NULL)))
      {
        npt->cbfunc(notification, npt->user_data);
        free((void *)notification);
        notification = (char *)(void *)0;
      }

      sleep((unsigned int)1);
    }
    if(!(npt == ((struct np_thread *)NULL)))
      free((void *)npt);

    return (void *)0;
  }
}

// np_observe_notification
// file notification_proxy.c line 189
enum anonymous_24 np_observe_notification(struct np_client_private *client, const char *notification)
{
  if(notification == ((const char *)NULL) || client == ((struct np_client_private *)NULL))
    return (enum anonymous_24)NP_E_INVALID_ARG;

  else
  {
    np_lock(client);
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("ObserveNotification");
    plist_dict_set_item(dict, "Command", return_value_plist_new_string_1);
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(notification);
    plist_dict_set_item(dict, "Name", return_value_plist_new_string_2);
    enum anonymous_24 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_3;
    return_value_property_list_service_send_xml_plist_3=property_list_service_send_xml_plist(client->parent, dict);
    res=np_error(return_value_property_list_service_send_xml_plist_3);
    plist_free(dict);
    np_unlock(client);
    return res;
  }
}

// np_observe_notifications
// file notification_proxy.c line 210
enum anonymous_24 np_observe_notifications(struct np_client_private *client, const char **notification_spec)
{
  signed int i = 0;
  enum anonymous_24 res = (enum anonymous_24)NP_E_UNKNOWN_ERROR;
  const char **notifications = notification_spec;
  if(client == ((struct np_client_private *)NULL))
    return (enum anonymous_24)NP_E_INVALID_ARG;

  else
    if(notifications == ((const char **)NULL))
      return (enum anonymous_24)NP_E_INVALID_ARG;

    else
    {
      for( ; !(notifications[(signed long int)i] == ((const char *)NULL)); i = i + 1)
      {
        res=np_observe_notification(client, notifications[(signed long int)i]);
        if(!((signed int)res == NP_E_SUCCESS))
          break;

      }
      return res;
    }
}

// np_post_notification
// file notification_proxy.c line 168
enum anonymous_24 np_post_notification(struct np_client_private *client, const char *notification)
{
  if(notification == ((const char *)NULL) || client == ((struct np_client_private *)NULL))
    return (enum anonymous_24)NP_E_INVALID_ARG;

  else
  {
    np_lock(client);
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("PostNotification");
    plist_dict_set_item(dict, "Command", return_value_plist_new_string_1);
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string(notification);
    plist_dict_set_item(dict, "Name", return_value_plist_new_string_2);
    enum anonymous_24 res;
    enum anonymous_23 return_value_property_list_service_send_xml_plist_3;
    return_value_property_list_service_send_xml_plist_3=property_list_service_send_xml_plist(client->parent, dict);
    res=np_error(return_value_property_list_service_send_xml_plist_3);
    plist_free(dict);
    np_unlock(client);
    return res;
  }
}

// np_set_notify_callback
// file notification_proxy.c line 339
enum anonymous_24 np_set_notify_callback(struct np_client_private *client, void (*notify_cb)(const char *, void *), void *user_data)
{
  if(client == ((struct np_client_private *)NULL))
    return (enum anonymous_24)NP_E_INVALID_ARG;

  else
  {
    enum anonymous_24 res = (enum anonymous_24)NP_E_UNKNOWN_ERROR;
    np_lock(client);
    if(!(client->notifier == 0ul))
    {
      struct property_list_service_client_private *parent = client->parent;
      client->parent = (struct property_list_service_client_private *)(void *)0;
      thread_join(client->notifier);
      thread_free(client->notifier);
      client->notifier = (unsigned long int)(void *)0;
      client->parent = parent;
    }

    if(!(notify_cb == ((void (*)(const char *, void *))NULL)))
    {
      struct np_thread *npt;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct np_thread) /*24ul*/ );
      npt = (struct np_thread *)return_value_malloc_1;
      if(!(npt == ((struct np_thread *)NULL)))
      {
        npt->client = client;
        npt->cbfunc = notify_cb;
        npt->user_data = user_data;
        signed int return_value_thread_new_2;
        return_value_thread_new_2=thread_new(&client->notifier, np_notifier, (void *)npt);
        if(return_value_thread_new_2 == 0)
          res = (enum anonymous_24)NP_E_SUCCESS;

      }

    }

    np_unlock(client);
    return res;
  }
}

// np_unlock
// file notification_proxy.c line 57
static void np_unlock(struct np_client_private *client)
{
  mutex_unlock(&client->mutex);
}

// pair_record_generate
// file lockdown.c line 780
static enum anonymous_9 pair_record_generate(struct lockdownd_client_private *client, void **pair_record)
{
  enum anonymous_9 ret = (enum anonymous_9)LOCKDOWN_E_UNKNOWN_ERROR;
  struct anonymous_8 public_key = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  char *host_id = (char *)(void *)0;
  char *system_buid = (char *)(void *)0;
  ret=lockdownd_get_device_public_key_as_key_data(client, &public_key);
  enum anonymous_4 uret;
  if((signed int)ret == LOCKDOWN_E_SUCCESS)
  {
    *pair_record=plist_new_dict();
    uret = (enum anonymous_4)USERPREF_E_SUCCESS;
    uret=pair_record_generate_keys_and_certs(*pair_record, public_key);
    switch((signed int)uret)
    {
      case USERPREF_E_INVALID_ARG:
      {
        ret = (enum anonymous_9)LOCKDOWN_E_INVALID_ARG;
        break;
      }
      case USERPREF_E_INVALID_CONF:
      {
        ret = (enum anonymous_9)LOCKDOWN_E_INVALID_CONF;
        break;
      }
      case USERPREF_E_SSL_ERROR:
        ret = (enum anonymous_9)LOCKDOWN_E_SSL_ERROR;
    }
    userpref_read_system_buid(&system_buid);
    if(!(system_buid == ((char *)NULL)))
    {
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string(system_buid);
      plist_dict_set_item(*pair_record, "SystemBUID", return_value_plist_new_string_1);
    }

    host_id=generate_uuid();
    pair_record_set_host_id(*pair_record, host_id);
  }


leave:
  ;
  if(!(host_id == ((char *)NULL)))
    free((void *)host_id);

  if(!(system_buid == ((char *)NULL)))
    free((void *)system_buid);

  if(!(public_key.data == ((unsigned char *)NULL)))
    free((void *)public_key.data);

  return ret;
}

// pair_record_generate_keys_and_certs
// file userpref.c line 405
enum anonymous_4 pair_record_generate_keys_and_certs(void *pair_record, struct anonymous_8 public_key)
{
  enum anonymous_4 ret = (enum anonymous_4)USERPREF_E_SSL_ERROR;
  struct anonymous_8 dev_cert_pem = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  struct anonymous_8 root_key_pem = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  struct anonymous_8 root_cert_pem = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  struct anonymous_8 host_key_pem = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  struct anonymous_8 host_cert_pem = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  if(public_key.data == ((unsigned char *)NULL) || pair_record == NULL)
    return (enum anonymous_4)USERPREF_E_INVALID_ARG;

  else
  {
    struct gnutls_x509_privkey_int *root_privkey;
    struct gnutls_x509_crt_int *root_cert;
    struct gnutls_x509_privkey_int *host_privkey;
    struct gnutls_x509_crt_int *host_cert;
    gcry_control((enum gcry_ctl_cmds)GCRYCTL_ENABLE_QUICK_RANDOM);
    gnutls_x509_privkey_init(&root_privkey);
    gnutls_x509_privkey_init(&host_privkey);
    gnutls_x509_crt_init(&root_cert);
    gnutls_x509_crt_init(&host_cert);
    gnutls_x509_privkey_generate(root_privkey, (enum anonymous_19)GNUTLS_PK_RSA, (unsigned int)2048, (unsigned int)0);
    gnutls_x509_privkey_generate(host_privkey, (enum anonymous_19)GNUTLS_PK_RSA, (unsigned int)2048, (unsigned int)0);
    gnutls_x509_crt_set_key(root_cert, root_privkey);
    gnutls_x509_crt_set_serial(root_cert, (const void *)"\0", (unsigned long int)1);
    gnutls_x509_crt_set_version(root_cert, (unsigned int)3);
    gnutls_x509_crt_set_ca_status(root_cert, (unsigned int)1);
    signed long int return_value_time_1;
    return_value_time_1=time((signed long int *)(void *)0);
    gnutls_x509_crt_set_activation_time(root_cert, return_value_time_1);
    signed long int return_value_time_2;
    return_value_time_2=time((signed long int *)(void *)0);
    gnutls_x509_crt_set_expiration_time(root_cert, return_value_time_2 + (signed long int)(60 * 60 * 24 * 365 * 10));
    gnutls_x509_crt_sign(root_cert, root_cert, root_privkey);
    gnutls_x509_crt_set_key(host_cert, host_privkey);
    gnutls_x509_crt_set_serial(host_cert, (const void *)"\0", (unsigned long int)1);
    gnutls_x509_crt_set_version(host_cert, (unsigned int)3);
    gnutls_x509_crt_set_ca_status(host_cert, (unsigned int)0);
    gnutls_x509_crt_set_key_usage(host_cert, (unsigned int)(32 | 128));
    signed long int return_value_time_3;
    return_value_time_3=time((signed long int *)(void *)0);
    gnutls_x509_crt_set_activation_time(host_cert, return_value_time_3);
    signed long int return_value_time_4;
    return_value_time_4=time((signed long int *)(void *)0);
    gnutls_x509_crt_set_expiration_time(host_cert, return_value_time_4 + (signed long int)(60 * 60 * 24 * 365 * 10));
    gnutls_x509_crt_sign(host_cert, root_cert, root_privkey);
    unsigned long int root_key_export_size = (unsigned long int)0;
    unsigned long int host_key_export_size = (unsigned long int)0;
    gnutls_x509_privkey_export(root_privkey, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)0, &root_key_export_size);
    gnutls_x509_privkey_export(host_privkey, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)0, &host_key_export_size);
    void *return_value;
    return_value=gnutls_malloc(root_key_export_size);
    root_key_pem.data = (unsigned char *)return_value;
    void *return_value_1;
    return_value_1=gnutls_malloc(host_key_export_size);
    host_key_pem.data = (unsigned char *)return_value_1;
    gnutls_x509_privkey_export(root_privkey, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)root_key_pem.data, &root_key_export_size);
    root_key_pem.size = (unsigned int)root_key_export_size;
    gnutls_x509_privkey_export(host_privkey, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)host_key_pem.data, &host_key_export_size);
    host_key_pem.size = (unsigned int)host_key_export_size;
    unsigned long int root_cert_export_size = (unsigned long int)0;
    unsigned long int host_cert_export_size = (unsigned long int)0;
    gnutls_x509_crt_export(root_cert, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)0, &root_cert_export_size);
    gnutls_x509_crt_export(host_cert, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)0, &host_cert_export_size);
    void *return_value_2;
    return_value_2=gnutls_malloc(root_cert_export_size);
    root_cert_pem.data = (unsigned char *)return_value_2;
    void *return_value_3;
    return_value_3=gnutls_malloc(host_cert_export_size);
    host_cert_pem.data = (unsigned char *)return_value_3;
    gnutls_x509_crt_export(root_cert, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)root_cert_pem.data, &root_cert_export_size);
    root_cert_pem.size = (unsigned int)root_cert_export_size;
    gnutls_x509_crt_export(host_cert, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)host_cert_pem.data, &host_cert_export_size);
    host_cert_pem.size = (unsigned int)host_cert_export_size;
    ret = (enum anonymous_4)USERPREF_E_UNKNOWN_ERROR;
    struct anonymous_8 modulus = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
    struct anonymous_8 exponent = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
    struct anonymous_8 der_pub_key;
    signed int return_value_gnutls_pem_base64_decode2_7;
    return_value_gnutls_pem_base64_decode2_7=gnutls_pem_base64_decode2("RSA PUBLIC KEY", &public_key, &der_pub_key);
    if(return_value_gnutls_pem_base64_decode2_7 == 0)
    {
      struct asn1_node_st *pkcs1 = (struct asn1_node_st *)(void *)0;
      signed int return_value_asn1_array2tree_6;
      return_value_asn1_array2tree_6=asn1_array2tree(pkcs1_asn1_tab, &pkcs1, (char *)(void *)0);
      if(return_value_asn1_array2tree_6 == 0)
      {
        struct asn1_node_st *asn1_pub_key = (struct asn1_node_st *)(void *)0;
        asn1_create_element(pkcs1, "PKCS1.RSAPublicKey", &asn1_pub_key);
        signed int return_value_asn1_der_decoding_5;
        return_value_asn1_der_decoding_5=asn1_der_decoding(&asn1_pub_key, (const void *)der_pub_key.data, (signed int)der_pub_key.size, (char *)(void *)0);
        if(return_value_asn1_der_decoding_5 == 0)
        {
          signed int ret1;
          ret1=asn1_read_value(asn1_pub_key, "modulus", (void *)0, (signed int *)&modulus.size);
          signed int ret2;
          ret2=asn1_read_value(asn1_pub_key, "publicExponent", (void *)0, (signed int *)&exponent.size);
          void *return_value_4;
          return_value_4=gnutls_malloc((unsigned long int)modulus.size);
          modulus.data = (unsigned char *)return_value_4;
          void *return_value_5;
          return_value_5=gnutls_malloc((unsigned long int)exponent.size);
          exponent.data = (unsigned char *)return_value_5;
          ret1=asn1_read_value(asn1_pub_key, "modulus", (void *)modulus.data, (signed int *)&modulus.size);
          ret2=asn1_read_value(asn1_pub_key, "publicExponent", (void *)exponent.data, (signed int *)&exponent.size);
          if(ret1 == 0 && ret2 == 0)
            ret = (enum anonymous_4)USERPREF_E_SUCCESS;

        }

        if(!(asn1_pub_key == ((struct asn1_node_st *)NULL)))
          asn1_delete_structure(&asn1_pub_key);

      }

      if(!(pkcs1 == ((struct asn1_node_st *)NULL)))
        asn1_delete_structure(&pkcs1);

    }

    if((signed int)ret == USERPREF_E_SUCCESS && !(exponent.size == 0u) && !(modulus.size == 0u))
    {
      struct anonymous_8 essentially_null;
      char *return_value_strdup_8;
      return_value_strdup_8=strdup("abababababababab");
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen("abababababababab");
      essentially_null = (struct anonymous_8){ .data=(unsigned char *)return_value_strdup_8, .size=(unsigned int)return_value_strlen_9 };
      struct gnutls_x509_privkey_int *fake_privkey;
      struct gnutls_x509_crt_int *dev_cert;
      gnutls_x509_privkey_init(&fake_privkey);
      gnutls_x509_crt_init(&dev_cert);
      signed int return_value_gnutls_x509_privkey_import_rsa_raw_14;
      return_value_gnutls_x509_privkey_import_rsa_raw_14=gnutls_x509_privkey_import_rsa_raw(fake_privkey, &modulus, &exponent, &essentially_null, &essentially_null, &essentially_null, &essentially_null);
      if(return_value_gnutls_x509_privkey_import_rsa_raw_14 == 0)
      {
        gnutls_x509_crt_set_key(dev_cert, fake_privkey);
        gnutls_x509_crt_set_serial(dev_cert, (const void *)"\0", (unsigned long int)1);
        gnutls_x509_crt_set_version(dev_cert, (unsigned int)3);
        gnutls_x509_crt_set_ca_status(dev_cert, (unsigned int)0);
        signed long int return_value_time_10;
        return_value_time_10=time((signed long int *)(void *)0);
        gnutls_x509_crt_set_activation_time(dev_cert, return_value_time_10);
        signed long int return_value_time_11;
        return_value_time_11=time((signed long int *)(void *)0);
        gnutls_x509_crt_set_expiration_time(dev_cert, return_value_time_11 + (signed long int)(60 * 60 * 24 * 365 * 10));
        const enum anonymous_14 dig_sha1 = (const enum anonymous_14)GNUTLS_DIG_SHA1;
        unsigned long int hash_size;
        signed int return_value_gnutls_hash_get_len_12;
        return_value_gnutls_hash_get_len_12=gnutls_hash_get_len(dig_sha1);
        hash_size = (unsigned long int)return_value_gnutls_hash_get_len_12;
        const signed long int hash_size_array_size0 = (signed long int)hash_size;
        unsigned char hash[hash_size_array_size0];
        signed int return_value_gnutls_hash_fast_13;
        return_value_gnutls_hash_fast_13=gnutls_hash_fast(dig_sha1, (const void *)der_pub_key.data, (unsigned long int)der_pub_key.size, (void *)(unsigned char *)&hash);
        if(return_value_gnutls_hash_fast_13 >= 0)
          gnutls_x509_crt_set_subject_key_id(dev_cert, (const void *)hash, hash_size);

        gnutls_x509_crt_set_key_usage(dev_cert, (unsigned int)(128 | 32));
        gnutls_x509_crt_sign(dev_cert, root_cert, root_privkey);
        if((signed int)ret == USERPREF_E_SUCCESS)
        {
          unsigned long int export_size = (unsigned long int)0;
          gnutls_x509_crt_export(dev_cert, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)0, &export_size);
          void *return_value_6;
          return_value_6=gnutls_malloc(export_size);
          dev_cert_pem.data = (unsigned char *)return_value_6;
          gnutls_x509_crt_export(dev_cert, (enum anonymous_18)GNUTLS_X509_FMT_PEM, (void *)dev_cert_pem.data, &export_size);
          dev_cert_pem.size = (unsigned int)export_size;
        }

      }

      if(!(essentially_null.data == ((unsigned char *)NULL)))
        free((void *)essentially_null.data);

      gnutls_x509_crt_deinit(dev_cert);
      gnutls_x509_privkey_deinit(fake_privkey);
    }

    gnutls_x509_crt_deinit(root_cert);
    gnutls_x509_crt_deinit(host_cert);
    gnutls_x509_privkey_deinit(root_privkey);
    gnutls_x509_privkey_deinit(host_privkey);
    gnutls_free((void *)modulus.data);
    gnutls_free((void *)exponent.data);
    gnutls_free((void *)der_pub_key.data);
    if(!(host_cert_pem.data == ((unsigned char *)NULL)) && !(host_cert_pem.size == 0u) && !(root_cert_pem.data == ((unsigned char *)NULL)) && !(root_cert_pem.size == 0u))
      ret = (enum anonymous_4)USERPREF_E_SUCCESS;

    pair_record_set_item_from_key_data(pair_record, "DeviceCertificate", &dev_cert_pem);
    pair_record_set_item_from_key_data(pair_record, "HostPrivateKey", &host_key_pem);
    pair_record_set_item_from_key_data(pair_record, "HostCertificate", &host_cert_pem);
    pair_record_set_item_from_key_data(pair_record, "RootPrivateKey", &root_key_pem);
    pair_record_set_item_from_key_data(pair_record, "RootCertificate", &root_cert_pem);
    if(!(dev_cert_pem.data == ((unsigned char *)NULL)))
      free((void *)dev_cert_pem.data);

    if(!(root_key_pem.data == ((unsigned char *)NULL)))
      free((void *)root_key_pem.data);

    if(!(root_cert_pem.data == ((unsigned char *)NULL)))
      free((void *)root_cert_pem.data);

    if(!(host_key_pem.data == ((unsigned char *)NULL)))
      free((void *)host_key_pem.data);

    if(!(host_cert_pem.data == ((unsigned char *)NULL)))
      free((void *)host_cert_pem.data);

    return ret;
  }
}

// pair_record_get_host_id
// file userpref.c line 874
enum anonymous_4 pair_record_get_host_id(void *pair_record, char **host_id)
{
  void *node;
  node=plist_dict_get_item(pair_record, "HostID");
  enum anonymous_11 return_value_plist_get_node_type_1;
  if(!(node == NULL))
  {
    return_value_plist_get_node_type_1=plist_get_node_type(node);
    if((signed int)return_value_plist_get_node_type_1 == PLIST_STRING)
      plist_get_string_val(node, host_id);

  }

  return (enum anonymous_4)USERPREF_E_SUCCESS;
}

// pair_record_get_item_as_key_data
// file userpref.c line 892
enum anonymous_4 pair_record_get_item_as_key_data(void *pair_record, const char *name, struct anonymous_8 *value)
{
  _Bool tmp_if_expr_3;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(pair_record == NULL || value == ((struct anonymous_8 *)NULL))
    return (enum anonymous_4)USERPREF_E_INVALID_ARG;

  else
  {
    enum anonymous_4 ret = (enum anonymous_4)USERPREF_E_SUCCESS;
    char *buffer = (char *)(void *)0;
    unsigned long int length = (unsigned long int)0;
    void *node;
    node=plist_dict_get_item(pair_record, name);
    if(!(node == NULL))
    {
      return_value_plist_get_node_type_2=plist_get_node_type(node);
      tmp_if_expr_3 = (signed int)return_value_plist_get_node_type_2 == PLIST_DATA ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      plist_get_data_val(node, &buffer, &length);
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(length);
      value->data = (unsigned char *)return_value_malloc_1;
      memcpy((void *)value->data, (const void *)buffer, length);
      value->size = (unsigned int)length;
      free((void *)buffer);
      buffer = (char *)(void *)0;
    }

    else
      ret = (enum anonymous_4)USERPREF_E_INVALID_CONF;
    if(!(buffer == ((char *)NULL)))
      free((void *)buffer);

    return ret;
  }
}

// pair_record_import_crt_with_name
// file userpref.c line 848
enum anonymous_4 pair_record_import_crt_with_name(void *pair_record, const char *name, struct gnutls_x509_crt_int *cert)
{
  enum anonymous_4 ret = (enum anonymous_4)USERPREF_E_INVALID_CONF;
  struct anonymous_8 pem = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  ret=pair_record_get_item_as_key_data(pair_record, name, &pem);
  _Bool tmp_if_expr_2;
  signed int return_value_gnutls_x509_crt_import_1;
  if((signed int)ret == USERPREF_E_SUCCESS)
  {
    return_value_gnutls_x509_crt_import_1=gnutls_x509_crt_import(cert, &pem, (enum anonymous_18)GNUTLS_X509_FMT_PEM);
    tmp_if_expr_2 = 0 == return_value_gnutls_x509_crt_import_1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
    ret = (enum anonymous_4)USERPREF_E_SUCCESS;

  else
    ret = (enum anonymous_4)USERPREF_E_SSL_ERROR;
  if(!(pem.data == ((unsigned char *)NULL)))
    free((void *)pem.data);

  return ret;
}

// pair_record_import_key_with_name
// file userpref.c line 811
enum anonymous_4 pair_record_import_key_with_name(void *pair_record, const char *name, struct gnutls_x509_privkey_int *key)
{
  enum anonymous_4 ret = (enum anonymous_4)USERPREF_E_INVALID_CONF;
  struct anonymous_8 pem = { .data=(unsigned char *)(void *)0, .size=(unsigned int)0 };
  ret=pair_record_get_item_as_key_data(pair_record, name, &pem);
  _Bool tmp_if_expr_2;
  signed int return_value_gnutls_x509_privkey_import_1;
  if((signed int)ret == USERPREF_E_SUCCESS)
  {
    return_value_gnutls_x509_privkey_import_1=gnutls_x509_privkey_import(key, &pem, (enum anonymous_18)GNUTLS_X509_FMT_PEM);
    tmp_if_expr_2 = 0 == return_value_gnutls_x509_privkey_import_1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
    ret = (enum anonymous_4)USERPREF_E_SUCCESS;

  else
    ret = (enum anonymous_4)USERPREF_E_SSL_ERROR;
  if(!(pem.data == ((unsigned char *)NULL)))
    free((void *)pem.data);

  return ret;
}

// pair_record_set_host_id
// file userpref.c line 885
enum anonymous_4 pair_record_set_host_id(void *pair_record, const char *host_id)
{
  void *return_value_plist_new_string_1;
  return_value_plist_new_string_1=plist_new_string(host_id);
  plist_dict_set_item(pair_record, "HostID", return_value_plist_new_string_1);
  return (enum anonymous_4)USERPREF_E_SUCCESS;
}

// pair_record_set_item_from_key_data
// file userpref.c line 920
enum anonymous_4 pair_record_set_item_from_key_data(void *pair_record, const char *name, struct anonymous_8 *value)
{
  enum anonymous_4 ret = (enum anonymous_4)USERPREF_E_SUCCESS;
  if(pair_record == NULL || value == ((struct anonymous_8 *)NULL))
    return (enum anonymous_4)USERPREF_E_INVALID_ARG;

  else
  {
    void *return_value_plist_new_data_1;
    return_value_plist_new_data_1=plist_new_data((char *)value->data, (unsigned long int)value->size);
    plist_dict_set_item(pair_record, name, return_value_plist_new_data_1);
    return ret;
  }
}

// parse_opts
// file ideviceimagemounter.c line 72
static void parse_opts(signed int argc, char **argv)
{
  signed int c;
  unsigned long int return_value_strlen_1;
  while((_Bool)1)
  {
    static struct option longopts[7l] = { { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="udid", .has_arg=0, .flag=(signed int *)(void *)0, .val=117 },
    { .name="list", .has_arg=0, .flag=(signed int *)(void *)0, .val=108 },
    { .name="imagetype", .has_arg=0, .flag=(signed int *)(void *)0, .val=116 },
    { .name="xml", .has_arg=0, .flag=(signed int *)(void *)0, .val=120 },
    { .name="debug", .has_arg=0, .flag=(signed int *)(void *)0, .val=100 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
    c=getopt_long(argc, argv, "hu:lt:xd", longopts, (signed int *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 104:
      {
        print_usage(argc, argv);
        exit(0);
      }
      case 117:
      {
        return_value_strlen_1=strlen(optarg);
        if(!(return_value_strlen_1 == 40ul))
        {
          printf("%s: invalid UDID specified (length != 40)\n", argv[(signed long int)0]);
          print_usage(argc, argv);
          exit(2);
        }

        udid=strdup(optarg);
        break;
      }
      case 108:
      {
        list_mode = 1;
        break;
      }
      case 116:
      {
        imagetype=strdup(optarg);
        break;
      }
      case 120:
      {
        xml_mode = 1;
        break;
      }
      case 100:
      {
        idevice_set_debug_level(1);
        break;
      }
      default:
      {
        print_usage(argc, argv);
        exit(2);
      }
    }
  }
}

// plist_array_print_to_stream
// file utils.c line 324
static void plist_array_print_to_stream(void *node, signed int *indent_level, struct _IO_FILE *stream)
{
  signed int i;
  signed int count;
  void *subnode = (void *)0;
  unsigned int return_value_plist_array_get_size_1;
  return_value_plist_array_get_size_1=plist_array_get_size(node);
  count = (signed int)return_value_plist_array_get_size_1;
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    subnode=plist_array_get_item(node, (unsigned int)i);
    fprintf(stream, "%*s", *indent_level, (const void *)"");
    fprintf(stream, "%d: ", i);
    plist_node_print_to_stream(subnode, indent_level, stream);
  }
}

// plist_array_print_to_stream_link1
// file utils.c line 324
static void plist_array_print_to_stream_link1(void *node_link1, signed int *indent_level_link1, struct _IO_FILE *stream_link1)
{
  signed int i_link1;
  signed int count_link1;
  void *subnode_link1 = (void *)0;
  unsigned int return_value_plist_array_get_size_1_link1;
  return_value_plist_array_get_size_1_link1=plist_array_get_size(node_link1);
  count_link1 = (signed int)return_value_plist_array_get_size_1_link1;
  i_link1 = 0;
  for( ; !(i_link1 >= count_link1); i_link1 = i_link1 + 1)
  {
    subnode_link1=plist_array_get_item(node_link1, (unsigned int)i_link1);
    fprintf(stream_link1, "%*s", *indent_level_link1, (const void *)"");
    fprintf(stream_link1, "%d: ", i_link1);
    plist_node_print_to_stream_link1(subnode_link1, indent_level_link1, stream_link1);
  }
}

// plist_dict_add_label
// file lockdown.c line 224
static void plist_dict_add_label(void *plist, const char *label)
{
  void *return_value_plist_new_string_1;
  if(!(plist == NULL) && !(label == ((const char *)NULL)))
  {
    enum anonymous_11 return_value_plist_get_node_type_2;
    return_value_plist_get_node_type_2=plist_get_node_type(plist);
    if((signed int)return_value_plist_get_node_type_2 == PLIST_DICT)
    {
      return_value_plist_new_string_1=plist_new_string(label);
      plist_dict_set_item(plist, "Label", return_value_plist_new_string_1);
    }

  }

}

// plist_dict_add_label_link1
// file restore.c line 84
static void plist_dict_add_label_link1(void *plist_link1, const char *label_link1)
{
  void *return_value_plist_new_string_1_link1;
  if(!(plist_link1 == NULL) && !(label_link1 == ((const char *)NULL)))
  {
    enum anonymous_11 return_value_plist_get_node_type_2_link1;
    return_value_plist_get_node_type_2_link1=plist_get_node_type(plist_link1);
    if((signed int)return_value_plist_get_node_type_2_link1 == PLIST_DICT)
    {
      return_value_plist_new_string_1_link1=plist_new_string(label_link1);
      plist_dict_set_item(plist_link1, "Label", return_value_plist_new_string_1_link1);
    }

  }

}

// plist_dict_print_to_stream
// file utils.c line 340
static void plist_dict_print_to_stream(void *node, signed int *indent_level, struct _IO_FILE *stream)
{
  void *it = (void *)0;
  char *key = (char *)(void *)0;
  void *subnode = (void *)0;
  plist_dict_new_iter(node, &it);
  plist_dict_next_item(node, it, &key, &subnode);
  unsigned int return_value_plist_array_get_size_1;
  while(!(subnode == NULL))
  {
    fprintf(stream, "%*s", *indent_level, (const void *)"");
    fprintf(stream, "%s", key);
    enum anonymous_11 return_value_plist_get_node_type_2;
    return_value_plist_get_node_type_2=plist_get_node_type(subnode);
    if((signed int)return_value_plist_get_node_type_2 == PLIST_ARRAY)
    {
      return_value_plist_array_get_size_1=plist_array_get_size(subnode);
      fprintf(stream, "[%d]: ", return_value_plist_array_get_size_1);
    }

    else
      fprintf(stream, ": ");
    free((void *)key);
    key = (char *)(void *)0;
    plist_node_print_to_stream(subnode, indent_level, stream);
    plist_dict_next_item(node, it, &key, &subnode);
  }
  free(it);
}

// plist_dict_print_to_stream_link1
// file utils.c line 340
static void plist_dict_print_to_stream_link1(void *node_link1, signed int *indent_level_link1, struct _IO_FILE *stream_link1)
{
  void *it_link1 = (void *)0;
  char *key_link1 = (char *)(void *)0;
  void *subnode_link1 = (void *)0;
  plist_dict_new_iter(node_link1, &it_link1);
  plist_dict_next_item(node_link1, it_link1, &key_link1, &subnode_link1);
  unsigned int return_value_plist_array_get_size_1_link1;
  while(!(subnode_link1 == NULL))
  {
    fprintf(stream_link1, "%*s", *indent_level_link1, (const void *)"");
    fprintf(stream_link1, "%s", key_link1);
    enum anonymous_11 return_value_plist_get_node_type_2_link1;
    return_value_plist_get_node_type_2_link1=plist_get_node_type(subnode_link1);
    if((signed int)return_value_plist_get_node_type_2_link1 == PLIST_ARRAY)
    {
      return_value_plist_array_get_size_1_link1=plist_array_get_size(subnode_link1);
      fprintf(stream_link1, "[%d]: ", return_value_plist_array_get_size_1_link1);
    }

    else
      fprintf(stream_link1, ": ");
    free((void *)key_link1);
    key_link1 = (char *)(void *)0;
    plist_node_print_to_stream_link1(subnode_link1, indent_level_link1, stream_link1);
    plist_dict_next_item(node_link1, it_link1, &key_link1, &subnode_link1);
  }
  free(it_link1);
}

// plist_node_print_to_stream
// file utils.c line 365
static void plist_node_print_to_stream(void *node, signed int *indent_level, struct _IO_FILE *stream)
{
  char *s = (char *)(void *)0;
  char *data = (char *)(void *)0;
  double d;
  unsigned char b;
  unsigned long int u = (unsigned long int)0;
  struct timeval tv = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  enum anonymous_11 t;
  if(!(node == NULL))
  {
    t=plist_get_node_type(node);
    switch((signed int)t)
    {
      case PLIST_BOOLEAN:
      {
        plist_get_bool_val(node, &b);
        fprintf(stream, "%s\n", b != 0 ? "true" : "false");
        break;
      }
      case PLIST_UINT:
      {
        plist_get_uint_val(node, &u);
        fprintf(stream, "%lu\n", u);
        break;
      }
      case PLIST_REAL:
      {
        plist_get_real_val(node, &d);
        fprintf(stream, "%f\n", d);
        break;
      }
      case PLIST_STRING:
      {
        plist_get_string_val(node, &s);
        fprintf(stream, "%s\n", s);
        free((void *)s);
        break;
      }
      case PLIST_KEY:
      {
        plist_get_key_val(node, &s);
        fprintf(stream, "%s: ", s);
        free((void *)s);
        break;
      }
      case PLIST_DATA:
      {
        plist_get_data_val(node, &data, &u);
        if(u >= 1ul)
        {
          s=base64encode((unsigned char *)data, u);
          free((void *)data);
          if(!(s == ((char *)NULL)))
          {
            fprintf(stream, "%s\n", s);
            free((void *)s);
          }

          else
            fprintf(stream, "\n");
        }

        else
          fprintf(stream, "\n");
        break;
      }
      case PLIST_DATE:
      {
        plist_get_date_val(node, (signed int *)&tv.tv_sec, (signed int *)&tv.tv_usec);
        signed long int ti = (signed long int)tv.tv_sec;
        struct tm *btime;
        btime=localtime(&ti);
        if(!(btime == ((struct tm *)NULL)))
        {
          void *return_value_malloc_1;
          return_value_malloc_1=malloc((unsigned long int)24);
          s = (char *)return_value_malloc_1;
          memset((void *)s, 0, (unsigned long int)24);
          unsigned long int return_value_strftime_2;
          return_value_strftime_2=strftime(s, (unsigned long int)24, "%Y-%m-%dT%H:%M:%SZ", btime);
          if(!(return_value_strftime_2 >= 1ul))
          {
            free((void *)s);
            s = (char *)(void *)0;
          }

        }

        if(!(s == ((char *)NULL)))
        {
          fprintf(stream, "%s\n", s);
          free((void *)s);
        }

        else
          fprintf(stream, "\n");
        break;
      }
      case PLIST_ARRAY:
      {
        fprintf(stream, "\n");
        *indent_level = *indent_level + 1;
        plist_array_print_to_stream(node, indent_level, stream);
        *indent_level = *indent_level - 1;
        break;
      }
      case PLIST_DICT:
      {
        fprintf(stream, "\n");
        *indent_level = *indent_level + 1;
        plist_dict_print_to_stream(node, indent_level, stream);
        *indent_level = *indent_level - 1;
      }
    }
  }

}

// plist_node_print_to_stream_link1
// file utils.c line 365
static void plist_node_print_to_stream_link1(void *node_link1, signed int *indent_level_link1, struct _IO_FILE *stream_link1)
{
  char *s_link1 = (char *)(void *)0;
  char *data_link1 = (char *)(void *)0;
  double d_link1;
  unsigned char b_link1;
  unsigned long int u_link1 = (unsigned long int)0;
  struct timeval tv_link1 = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  enum anonymous_11 t_link1;
  if(!(node_link1 == NULL))
  {
    t_link1=plist_get_node_type(node_link1);
    switch((signed int)t_link1)
    {
      case PLIST_BOOLEAN:
      {
        plist_get_bool_val(node_link1, &b_link1);
        fprintf(stream_link1, "%s\n", b_link1 != 0 ? "true" : "false");
        break;
      }
      case PLIST_UINT:
      {
        plist_get_uint_val(node_link1, &u_link1);
        fprintf(stream_link1, "%lu\n", u_link1);
        break;
      }
      case PLIST_REAL:
      {
        plist_get_real_val(node_link1, &d_link1);
        fprintf(stream_link1, "%f\n", d_link1);
        break;
      }
      case PLIST_STRING:
      {
        plist_get_string_val(node_link1, &s_link1);
        fprintf(stream_link1, "%s\n", s_link1);
        free((void *)s_link1);
        break;
      }
      case PLIST_KEY:
      {
        plist_get_key_val(node_link1, &s_link1);
        fprintf(stream_link1, "%s: ", s_link1);
        free((void *)s_link1);
        break;
      }
      case PLIST_DATA:
      {
        plist_get_data_val(node_link1, &data_link1, &u_link1);
        if(u_link1 >= 1ul)
        {
          s_link1=base64encode_link1((unsigned char *)data_link1, u_link1);
          free((void *)data_link1);
          if(!(s_link1 == ((char *)NULL)))
          {
            fprintf(stream_link1, "%s\n", s_link1);
            free((void *)s_link1);
          }

          else
            fprintf(stream_link1, "\n");
        }

        else
          fprintf(stream_link1, "\n");
        break;
      }
      case PLIST_DATE:
      {
        plist_get_date_val(node_link1, (signed int *)&tv_link1.tv_sec, (signed int *)&tv_link1.tv_usec);
        signed long int ti_link1 = (signed long int)tv_link1.tv_sec;
        struct tm *btime_link1;
        btime_link1=localtime(&ti_link1);
        if(!(btime_link1 == ((struct tm *)NULL)))
        {
          void *return_value_malloc_1_link1;
          return_value_malloc_1_link1=malloc((unsigned long int)24);
          s_link1 = (char *)return_value_malloc_1_link1;
          memset((void *)s_link1, 0, (unsigned long int)24);
          unsigned long int return_value_strftime_2_link1;
          return_value_strftime_2_link1=strftime(s_link1, (unsigned long int)24, "%Y-%m-%dT%H:%M:%SZ", btime_link1);
          if(!(return_value_strftime_2_link1 >= 1ul))
          {
            free((void *)s_link1);
            s_link1 = (char *)(void *)0;
          }

        }

        if(!(s_link1 == ((char *)NULL)))
        {
          fprintf(stream_link1, "%s\n", s_link1);
          free((void *)s_link1);
        }

        else
          fprintf(stream_link1, "\n");
        break;
      }
      case PLIST_ARRAY:
      {
        fprintf(stream_link1, "\n");
        *indent_level_link1 = *indent_level_link1 + 1;
        plist_array_print_to_stream_link1(node_link1, indent_level_link1, stream_link1);
        *indent_level_link1 = *indent_level_link1 - 1;
        break;
      }
      case PLIST_DICT:
      {
        fprintf(stream_link1, "\n");
        *indent_level_link1 = *indent_level_link1 + 1;
        plist_dict_print_to_stream_link1(node_link1, indent_level_link1, stream_link1);
        *indent_level_link1 = *indent_level_link1 - 1;
      }
    }
  }

}

// plist_print_to_stream
// file ../common/utils.h line 56
void plist_print_to_stream(void *plist, struct _IO_FILE *stream)
{
  signed int indent = 0;
  if(!(plist == NULL) && !(stream == ((struct _IO_FILE *)NULL)))
  {
    enum anonymous_11 return_value_plist_get_node_type_1;
    return_value_plist_get_node_type_1=plist_get_node_type(plist);
    switch((signed int)return_value_plist_get_node_type_1)
    {
      case PLIST_DICT:
      {
        plist_dict_print_to_stream(plist, &indent, stream);
        break;
      }
      case PLIST_ARRAY:
      {
        plist_array_print_to_stream(plist, &indent, stream);
        break;
      }
      default:
        plist_node_print_to_stream(plist, &indent, stream);
    }
  }

}

// plist_read_from_filename
// file utils.c line 245
signed int plist_read_from_filename(void **plist, const char *filename)
{
  char *buffer = (char *)(void *)0;
  unsigned long int length;
  _Bool tmp_if_expr_2;
  signed int return_value_memcmp_1;
  if(filename == ((const char *)NULL))
    return 0;

  else
  {
    buffer_read_from_filename(filename, &buffer, &length);
    if(buffer == ((char *)NULL))
      return 0;

    else
    {
      if(length >= 9ul)
      {
        return_value_memcmp_1=memcmp((const void *)buffer, (const void *)"bplist00", (unsigned long int)8);
        tmp_if_expr_2 = return_value_memcmp_1 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        plist_from_bin(buffer, (unsigned int)length, plist);

      else
        plist_from_xml(buffer, (unsigned int)length, plist);
      free((void *)buffer);
      return 1;
    }
  }
}

// plist_write_to_filename
// file utils.c line 270
signed int plist_write_to_filename(void *plist, const char *filename, enum plist_format_t format)
{
  char *buffer = (char *)(void *)0;
  unsigned int length;
  if(plist == NULL || filename == ((const char *)NULL))
    return 0;

  else
  {
    if((signed int)format == PLIST_FORMAT_XML)
      plist_to_xml(plist, &buffer, &length);

    else
      if((signed int)format == PLIST_FORMAT_BINARY)
        plist_to_bin(plist, &buffer, &length);

      else
        return 0;
    buffer_write_to_filename(filename, buffer, (unsigned long int)length);
    free((void *)buffer);
    return 1;
  }
}

// print_usage
// file ideviceimagemounter.c line 55
static void print_usage(signed int argc, char **argv)
{
  char *name = (char *)(void *)0;
  name=strrchr(argv[(signed long int)0], 47);
  char *tmp_if_expr_1;
  if(!(name == ((char *)NULL)))
    tmp_if_expr_1 = name + (signed long int)1;

  else
    tmp_if_expr_1 = argv[(signed long int)0];
  printf("Usage: %s [OPTIONS] IMAGE_FILE IMAGE_SIGNATURE_FILE\n\n", tmp_if_expr_1);
  printf("Mounts the specified disk image on the device.\n\n");
  printf("  -u, --udid UDID\ttarget specific device by its 40-digit device UDID\n");
  printf("  -l, --list\t\tList mount information\n");
  printf("  -t, --imagetype\tImage type to use, default is 'Developer'\n");
  printf("  -x, --xml\t\tUse XML output\n");
  printf("  -d, --debug\t\tenable communication debugging\n");
  printf("  -h, --help\t\tprints usage information\n");
  printf("\n");
  printf("Homepage: <http://libimobiledevice.org>\n");
}

// print_xml
// file ideviceimagemounter.c line 124
static void print_xml(void *node)
{
  char *xml = (char *)(void *)0;
  unsigned int len = (unsigned int)0;
  plist_to_xml(node, &xml, &len);
  if(!(xml == ((char *)NULL)))
    puts(xml);

}

// property_list_service_client_free
// file property_list_service.c line 77
enum anonymous_23 property_list_service_client_free(struct property_list_service_client_private *client)
{
  if(client == ((struct property_list_service_client_private *)NULL))
    return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_23 err;
    enum anonymous_20 return_value_service_client_free_1;
    return_value_service_client_free_1=service_client_free(client->parent);
    err=service_to_property_list_service_error(return_value_service_client_free_1);
    free((void *)client);
    client = (struct property_list_service_client_private *)(void *)0;
    return err;
  }
}

// property_list_service_client_new
// file property_list_service.c line 57
enum anonymous_23 property_list_service_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct property_list_service_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct property_list_service_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct property_list_service_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_INVALID_ARG;

  else
  {
    struct service_client_private *parent = (struct service_client_private *)(void *)0;
    enum anonymous_20 rerr;
    rerr=service_client_new(device, service, &parent);
    if(!((signed int)rerr == SERVICE_E_SUCCESS))
    {
      enum anonymous_23 return_value_service_to_property_list_service_error_3;
      return_value_service_to_property_list_service_error_3=service_to_property_list_service_error(rerr);
      return return_value_service_to_property_list_service_error_3;
    }

    struct property_list_service_client_private *client_loc;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(struct property_list_service_client_private) /*8ul*/ );
    client_loc = (struct property_list_service_client_private *)return_value_malloc_4;
    client_loc->parent = parent;
    *client = client_loc;
    return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_SUCCESS;
  }
}

// property_list_service_disable_ssl
// file property_list_service.c line 270
enum anonymous_23 property_list_service_disable_ssl(struct property_list_service_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct property_list_service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_20 return_value_service_disable_ssl_2;
    return_value_service_disable_ssl_2=service_disable_ssl(client->parent);
    enum anonymous_23 return_value_service_to_property_list_service_error_3;
    return_value_service_to_property_list_service_error_3=service_to_property_list_service_error(return_value_service_disable_ssl_2);
    return return_value_service_to_property_list_service_error_3;
  }
}

// property_list_service_enable_ssl
// file property_list_service.c line 263
enum anonymous_23 property_list_service_enable_ssl(struct property_list_service_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct property_list_service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_20 return_value_service_enable_ssl_2;
    return_value_service_enable_ssl_2=service_enable_ssl(client->parent);
    enum anonymous_23 return_value_service_to_property_list_service_error_3;
    return_value_service_to_property_list_service_error_3=service_to_property_list_service_error(return_value_service_enable_ssl_2);
    return return_value_service_to_property_list_service_error_3;
  }
}

// property_list_service_receive_plist
// file property_list_service.c line 258
enum anonymous_23 property_list_service_receive_plist(struct property_list_service_client_private *client, void **plist)
{
  enum anonymous_23 return_value_internal_plist_receive_timeout_1;
  return_value_internal_plist_receive_timeout_1=internal_plist_receive_timeout(client, plist, (unsigned int)10000);
  return return_value_internal_plist_receive_timeout_1;
}

// property_list_service_receive_plist_with_timeout
// file property_list_service.c line 253
enum anonymous_23 property_list_service_receive_plist_with_timeout(struct property_list_service_client_private *client, void **plist, unsigned int timeout)
{
  enum anonymous_23 return_value_internal_plist_receive_timeout_1;
  return_value_internal_plist_receive_timeout_1=internal_plist_receive_timeout(client, plist, timeout);
  return return_value_internal_plist_receive_timeout_1;
}

// property_list_service_send_binary_plist
// file property_list_service.c line 155
enum anonymous_23 property_list_service_send_binary_plist(struct property_list_service_client_private *client, void *plist)
{
  enum anonymous_23 return_value_internal_plist_send_1;
  return_value_internal_plist_send_1=internal_plist_send(client, plist, 1);
  return return_value_internal_plist_send_1;
}

// property_list_service_send_xml_plist
// file property_list_service.c line 150
enum anonymous_23 property_list_service_send_xml_plist(struct property_list_service_client_private *client, void *plist)
{
  enum anonymous_23 return_value_internal_plist_send_1;
  return_value_internal_plist_send_1=internal_plist_send(client, plist, 0);
  return return_value_internal_plist_send_1;
}

// restored_check_result
// file restore.c line 46
static signed int restored_check_result(void *dict)
{
  signed int ret = -1;
  void *result_node;
  result_node=plist_dict_get_item(dict, "Result");
  signed int return_value_strcmp_1;
  if(result_node == NULL)
    return ret;

  else
  {
    enum anonymous_11 result_type;
    result_type=plist_get_node_type(result_node);
    if((signed int)result_type == PLIST_STRING)
    {
      char *result_value = (char *)(void *)0;
      plist_get_string_val(result_node, &result_value);
      if(!(result_value == ((char *)NULL)))
      {
        signed int return_value_strcmp_2;
        return_value_strcmp_2=strcmp(result_value, "Success");
        if(return_value_strcmp_2 == 0)
          ret = 0;

        else
        {
          return_value_strcmp_1=strcmp(result_value, "Failure");
          if(return_value_strcmp_1 == 0)
            ret = 1;

        }
      }

      if(!(result_value == ((char *)NULL)))
        free((void *)result_value);

    }

    return ret;
  }
}

// restored_client_free
// file restore.c line 92
enum anonymous_48 restored_client_free(struct restored_client_private *client)
{
  if(client == ((struct restored_client_private *)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
    if(!(client->parent == ((struct property_list_service_client_private *)NULL)))
    {
      restored_goodbye(client);
      enum anonymous_23 return_value_property_list_service_client_free_1;
      return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
      if((signed int)return_value_property_list_service_client_free_1 == PROPERTY_LIST_SERVICE_E_SUCCESS)
        ret = (enum anonymous_48)RESTORE_E_SUCCESS;

    }

    if(!(client->udid == ((char *)NULL)))
      free((void *)client->udid);

    if(!(client->label == ((char *)NULL)))
      free((void *)client->label);

    if(!(client->info == NULL))
      plist_free(client->info);

    free((void *)client);
    return ret;
  }
}

// restored_client_new
// file restore.c line 294
enum anonymous_48 restored_client_new(struct idevice_private *device, struct restored_client_private **client, const char *label)
{
  if(client == ((struct restored_client_private **)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_SUCCESS;
    enum anonymous_5 idev_ret;
    struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
    enum anonymous_23 return_value_property_list_service_client_new_1;
    static struct lockdownd_service_descriptor service = { .port=(unsigned short int)0xf27e, .ssl_enabled=(unsigned char)0 };
    return_value_property_list_service_client_new_1=property_list_service_client_new(device, (struct lockdownd_service_descriptor *)&service, &plistclient);
    if(!((signed int)return_value_property_list_service_client_new_1 == PROPERTY_LIST_SERVICE_E_SUCCESS))
      return (enum anonymous_48)RESTORE_E_MUX_ERROR;

    else
    {
      struct restored_client_private *client_loc;
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct restored_client_private) /*32ul*/ );
      client_loc = (struct restored_client_private *)return_value_malloc_2;
      client_loc->parent = plistclient;
      client_loc->udid = (char *)(void *)0;
      client_loc->label = (char *)(void *)0;
      client_loc->info = (void *)0;
      if(!(label == ((const char *)NULL)))
        client_loc->label=strdup(label);

      idev_ret=idevice_get_udid(device, &client_loc->udid);
      if(!((signed int)idev_ret == IDEVICE_E_SUCCESS))
        ret = (enum anonymous_48)RESTORE_E_DEVICE_ERROR;

      if((signed int)ret == RESTORE_E_SUCCESS)
        *client = client_loc;

      else
        restored_client_free(client_loc);
      return ret;
    }
  }
}

// restored_client_set_label
// file restore.c line 122
void restored_client_set_label(struct restored_client_private *client, const char *label)
{
  char *tmp_if_expr_2;
  char *return_value_strdup_1;
  if(!(client == ((struct restored_client_private *)NULL)))
  {
    if(!(client->label == ((char *)NULL)))
      free((void *)client->label);

    if(!(label == ((const char *)NULL)))
    {
      return_value_strdup_1=strdup(label);
      tmp_if_expr_2 = return_value_strdup_1;
    }

    else
      tmp_if_expr_2 = (char *)(void *)0;
    client->label = tmp_if_expr_2;
  }

}

// restored_get_value
// file restore.c line 267
enum anonymous_48 restored_get_value(struct restored_client_private *client, const char *key, void **value)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(value == ((void **)NULL) || client == ((struct restored_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(value == ((void **)NULL)))
      tmp_if_expr_1 = *value != NULL ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
    if(client->info == NULL)
      return (enum anonymous_48)RESTORE_E_NOT_ENOUGH_DATA;

    else
    {
      enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_SUCCESS;
      void *item = (void *)0;
      if(key == ((const char *)NULL))
      {
        *value=plist_copy(client->info);
        return (enum anonymous_48)RESTORE_E_SUCCESS;
      }

      else
        item=plist_dict_get_item(client->info, key);
      if(!(item == NULL))
        *value=plist_copy(item);

      else
        ret = (enum anonymous_48)RESTORE_E_PLIST_ERROR;
      return ret;
    }
}

// restored_goodbye
// file restore.c line 337
enum anonymous_48 restored_goodbye(struct restored_client_private *client)
{
  if(client == ((struct restored_client_private *)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    plist_dict_add_label_link1(dict, client->label);
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("Goodbye");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=restored_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=restored_receive(client, &dict);
    if(dict == NULL)
      return (enum anonymous_48)RESTORE_E_PLIST_ERROR;

    else
    {
      signed int return_value_restored_check_result_2;
      return_value_restored_check_result_2=restored_check_result(dict);
      if(return_value_restored_check_result_2 == 0)
        ret = (enum anonymous_48)RESTORE_E_SUCCESS;

      plist_free(dict);
      dict = (void *)0;
      return ret;
    }
  }
}

// restored_query_type
// file restore.c line 166
enum anonymous_48 restored_query_type(struct restored_client_private *client, char **type, unsigned long int *version)
{
  _Bool tmp_if_expr_5;
  enum anonymous_11 return_value_plist_get_node_type_4;
  _Bool tmp_if_expr_3;
  enum anonymous_11 return_value_plist_get_node_type_2;
  if(client == ((struct restored_client_private *)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    plist_dict_add_label_link1(dict, client->label);
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("QueryType");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=restored_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    ret=restored_receive(client, &dict);
    if(!((signed int)ret == RESTORE_E_SUCCESS))
      return ret;

    else
    {
      ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
      void *type_node;
      type_node=plist_dict_get_item(dict, "Type");
      if(!(type_node == NULL))
      {
        return_value_plist_get_node_type_4=plist_get_node_type(type_node);
        tmp_if_expr_5 = (signed int)return_value_plist_get_node_type_4 == PLIST_STRING ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
      {
        char *typestr = (char *)(void *)0;
        client->info = dict;
        plist_get_string_val(type_node, &typestr);
        if(!(type == ((char **)NULL)))
          *type = typestr;

        else
          free((void *)typestr);
        if(!(version == ((unsigned long int *)NULL)))
        {
          void *version_node;
          version_node=plist_dict_get_item(dict, "RestoreProtocolVersion");
          if(!(version_node == NULL))
          {
            return_value_plist_get_node_type_2=plist_get_node_type(version_node);
            tmp_if_expr_3 = PLIST_UINT == (signed int)return_value_plist_get_node_type_2 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_3 = (_Bool)0;
          if(tmp_if_expr_3)
            plist_get_uint_val(version_node, version);

          else
            return (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
        }

        ret = (enum anonymous_48)RESTORE_E_SUCCESS;
      }

      else
        plist_free(dict);
      return ret;
    }
  }
}

// restored_query_value
// file restore.c line 225
enum anonymous_48 restored_query_value(struct restored_client_private *client, const char *key, void **value)
{
  if(key == ((const char *)NULL) || client == ((struct restored_client_private *)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    void *dict = (void *)0;
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
    dict=plist_new_dict();
    plist_dict_add_label_link1(dict, client->label);
    if(!(key == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_1;
      return_value_plist_new_string_1=plist_new_string(key);
      plist_dict_set_item(dict, "QueryKey", return_value_plist_new_string_1);
    }

    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("QueryValue");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_2);
    ret=restored_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)ret == RESTORE_E_SUCCESS))
      return ret;

    else
    {
      ret=restored_receive(client, &dict);
      if(!((signed int)ret == RESTORE_E_SUCCESS))
        return ret;

      else
      {
        void *value_node;
        value_node=plist_dict_get_item(dict, key);
        if(!(value_node == NULL))
          *value=plist_copy(value_node);

        else
          ret = (enum anonymous_48)RESTORE_E_PLIST_ERROR;
        plist_free(dict);
        return ret;
      }
    }
  }
}

// restored_reboot
// file restore.c line 393
enum anonymous_48 restored_reboot(struct restored_client_private *client)
{
  if(client == ((struct restored_client_private *)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    void *dict = (void *)0;
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
    dict=plist_new_dict();
    plist_dict_add_label_link1(dict, client->label);
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("Reboot");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    ret=restored_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    if(!((signed int)ret == RESTORE_E_SUCCESS))
      return ret;

    else
    {
      ret=restored_receive(client, &dict);
      if(!((signed int)ret == RESTORE_E_SUCCESS))
        return ret;

      else
        if(dict == NULL)
          return (enum anonymous_48)RESTORE_E_PLIST_ERROR;

        else
        {
          plist_free(dict);
          dict = (void *)0;
          return ret;
        }
    }
  }
}

// restored_receive
// file restore.c line 132
enum anonymous_48 restored_receive(struct restored_client_private *client, void **plist)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(plist == ((void **)NULL) || client == ((struct restored_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(plist == ((void **)NULL)))
      tmp_if_expr_1 = *plist != NULL ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_SUCCESS;
    enum anonymous_23 err;
    err=property_list_service_receive_plist(client->parent, plist);
    if(!((signed int)err == PROPERTY_LIST_SERVICE_E_SUCCESS))
      ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;

    if(*plist == NULL)
      ret = (enum anonymous_48)RESTORE_E_PLIST_ERROR;

    return ret;
  }
}

// restored_send
// file restore.c line 151
enum anonymous_48 restored_send(struct restored_client_private *client, void *plist)
{
  if(plist == NULL || client == ((struct restored_client_private *)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_SUCCESS;
    enum anonymous_23 err;
    err=property_list_service_send_xml_plist(client->parent, plist);
    if(!((signed int)err == PROPERTY_LIST_SERVICE_E_SUCCESS))
      ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;

    return ret;
  }
}

// restored_start_restore
// file restore.c line 369
enum anonymous_48 restored_start_restore(struct restored_client_private *client, void *options, unsigned long int version)
{
  if(client == ((struct restored_client_private *)NULL))
    return (enum anonymous_48)RESTORE_E_INVALID_ARG;

  else
  {
    void *dict = (void *)0;
    enum anonymous_48 ret = (enum anonymous_48)RESTORE_E_UNKNOWN_ERROR;
    dict=plist_new_dict();
    plist_dict_add_label_link1(dict, client->label);
    void *return_value_plist_new_string_1;
    return_value_plist_new_string_1=plist_new_string("StartRestore");
    plist_dict_set_item(dict, "Request", return_value_plist_new_string_1);
    if(!(options == NULL))
    {
      void *return_value_plist_copy_2;
      return_value_plist_copy_2=plist_copy(options);
      plist_dict_set_item(dict, "RestoreOptions", return_value_plist_copy_2);
    }

    void *return_value_plist_new_uint_3;
    return_value_plist_new_uint_3=plist_new_uint(version);
    plist_dict_set_item(dict, "RestoreProtocolVersion", return_value_plist_new_uint_3);
    ret=restored_send(client, dict);
    plist_free(dict);
    dict = (void *)0;
    return ret;
  }
}

// sbservices_client_free
// file sbservices.c line 102
enum anonymous_36 sbservices_client_free(struct sbservices_client_private *client)
{
  if(client == ((struct sbservices_client_private *)NULL))
    return (enum anonymous_36)SBSERVICES_E_INVALID_ARG;

  else
  {
    enum anonymous_36 err;
    enum anonymous_23 return_value_property_list_service_client_free_1;
    return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
    err=sbservices_error(return_value_property_list_service_client_free_1);
    client->parent = (struct property_list_service_client_private *)(void *)0;
    mutex_destroy(&client->mutex);
    free((void *)client);
    return err;
  }
}

// sbservices_client_new
// file sbservices.c line 79
enum anonymous_36 sbservices_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct sbservices_client_private **client)
{
  struct property_list_service_client_private *plistclient = (struct property_list_service_client_private *)(void *)0;
  enum anonymous_36 err;
  enum anonymous_23 return_value_property_list_service_client_new_1;
  return_value_property_list_service_client_new_1=property_list_service_client_new(device, service, &plistclient);
  err=sbservices_error(return_value_property_list_service_client_new_1);
  if(!((signed int)err == SBSERVICES_E_SUCCESS))
    return err;

  else
  {
    struct sbservices_client_private *client_loc;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct sbservices_client_private) /*48ul*/ );
    client_loc = (struct sbservices_client_private *)return_value_malloc_2;
    client_loc->parent = plistclient;
    mutex_init(&client_loc->mutex);
    *client = client_loc;
    return (enum anonymous_36)SBSERVICES_E_SUCCESS;
  }
}

// sbservices_client_start_service
// file sbservices.c line 95
enum anonymous_36 sbservices_client_start_service(struct idevice_private *device, struct sbservices_client_private **client, const char *label)
{
  enum anonymous_36 err = (enum anonymous_36)SBSERVICES_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.springboardservices", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))sbservices_client_new, (signed int *)&err);
  return err;
}

// sbservices_error
// file sbservices.c line 62
static enum anonymous_36 sbservices_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_36)SBSERVICES_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_36)SBSERVICES_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_36)SBSERVICES_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_36)SBSERVICES_E_CONN_FAILED;
    default:
      return (enum anonymous_36)SBSERVICES_E_UNKNOWN_ERROR;
  }
}

// sbservices_get_home_screen_wallpaper_pngdata
// file sbservices.c line 256
enum anonymous_36 sbservices_get_home_screen_wallpaper_pngdata(struct sbservices_client_private *client, char **pngdata, unsigned long int *pngsize)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct sbservices_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_23 return_value_property_list_service_receive_plist_4;
  if(pngdata == ((char **)NULL) || tmp_if_expr_1)
    return (enum anonymous_36)SBSERVICES_E_INVALID_ARG;

  else
  {
    enum anonymous_36 res = (enum anonymous_36)SBSERVICES_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("getHomeScreenWallpaperPNGData");
    plist_dict_set_item(dict, "command", return_value_plist_new_string_2);
    sbservices_lock(client);
    enum anonymous_23 return_value_property_list_service_send_binary_plist_3;
    return_value_property_list_service_send_binary_plist_3=property_list_service_send_binary_plist(client->parent, dict);
    res=sbservices_error(return_value_property_list_service_send_binary_plist_3);
    if((signed int)res == SBSERVICES_E_SUCCESS)
    {
      plist_free(dict);
      dict = (void *)0;
      return_value_property_list_service_receive_plist_4=property_list_service_receive_plist(client->parent, &dict);
      res=sbservices_error(return_value_property_list_service_receive_plist_4);
      if((signed int)res == SBSERVICES_E_SUCCESS)
      {
        void *node;
        node=plist_dict_get_item(dict, "pngData");
        if(!(node == NULL))
          plist_get_data_val(node, pngdata, pngsize);

      }

    }


  leave_unlock:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    sbservices_unlock(client);
    return res;
  }
}

// sbservices_get_icon_pngdata
// file sbservices.c line 181
enum anonymous_36 sbservices_get_icon_pngdata(struct sbservices_client_private *client, const char *bundleId, char **pngdata, unsigned long int *pngsize)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct sbservices_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_23 return_value_property_list_service_receive_plist_5;
  if(pngdata == ((char **)NULL) || bundleId == ((const char *)NULL) || tmp_if_expr_1)
    return (enum anonymous_36)SBSERVICES_E_INVALID_ARG;

  else
  {
    enum anonymous_36 res = (enum anonymous_36)SBSERVICES_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("getIconPNGData");
    plist_dict_set_item(dict, "command", return_value_plist_new_string_2);
    void *return_value_plist_new_string_3;
    return_value_plist_new_string_3=plist_new_string(bundleId);
    plist_dict_set_item(dict, "bundleId", return_value_plist_new_string_3);
    sbservices_lock(client);
    enum anonymous_23 return_value_property_list_service_send_binary_plist_4;
    return_value_property_list_service_send_binary_plist_4=property_list_service_send_binary_plist(client->parent, dict);
    res=sbservices_error(return_value_property_list_service_send_binary_plist_4);
    if((signed int)res == SBSERVICES_E_SUCCESS)
    {
      plist_free(dict);
      dict = (void *)0;
      return_value_property_list_service_receive_plist_5=property_list_service_receive_plist(client->parent, &dict);
      res=sbservices_error(return_value_property_list_service_receive_plist_5);
      if((signed int)res == SBSERVICES_E_SUCCESS)
      {
        void *node;
        node=plist_dict_get_item(dict, "pngData");
        if(!(node == NULL))
          plist_get_data_val(node, pngdata, pngsize);

      }

    }


  leave_unlock:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    sbservices_unlock(client);
    return res;
  }
}

// sbservices_get_icon_state
// file sbservices.c line 115
enum anonymous_36 sbservices_get_icon_state(struct sbservices_client_private *client, void **state, const char *format_version)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct sbservices_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_23 return_value_property_list_service_receive_plist_5;
  if(state == ((void **)NULL) || tmp_if_expr_1)
    return (enum anonymous_36)SBSERVICES_E_INVALID_ARG;

  else
  {
    enum anonymous_36 res = (enum anonymous_36)SBSERVICES_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("getIconState");
    plist_dict_set_item(dict, "command", return_value_plist_new_string_2);
    if(!(format_version == ((const char *)NULL)))
    {
      void *return_value_plist_new_string_3;
      return_value_plist_new_string_3=plist_new_string(format_version);
      plist_dict_set_item(dict, "formatVersion", return_value_plist_new_string_3);
    }

    sbservices_lock(client);
    enum anonymous_23 return_value_property_list_service_send_binary_plist_4;
    return_value_property_list_service_send_binary_plist_4=property_list_service_send_binary_plist(client->parent, dict);
    res=sbservices_error(return_value_property_list_service_send_binary_plist_4);
    if((signed int)res == SBSERVICES_E_SUCCESS)
    {
      plist_free(dict);
      dict = (void *)0;
      return_value_property_list_service_receive_plist_5=property_list_service_receive_plist(client->parent, state);
      res=sbservices_error(return_value_property_list_service_receive_plist_5);
      if(!((signed int)res == SBSERVICES_E_SUCCESS))
      {
        if(!(*state == NULL))
        {
          plist_free(*state);
          *state = (void *)0;
        }

      }

    }


  leave_unlock:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    sbservices_unlock(client);
    return res;
  }
}

// sbservices_get_interface_orientation
// file sbservices.c line 218
enum anonymous_36 sbservices_get_interface_orientation(struct sbservices_client_private *client, enum anonymous_37 *interface_orientation)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct sbservices_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  enum anonymous_23 return_value_property_list_service_receive_plist_4;
  if(interface_orientation == ((enum anonymous_37 *)NULL) || tmp_if_expr_1)
    return (enum anonymous_36)SBSERVICES_E_INVALID_ARG;

  else
  {
    enum anonymous_36 res = (enum anonymous_36)SBSERVICES_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("getInterfaceOrientation");
    plist_dict_set_item(dict, "command", return_value_plist_new_string_2);
    sbservices_lock(client);
    enum anonymous_23 return_value_property_list_service_send_binary_plist_3;
    return_value_property_list_service_send_binary_plist_3=property_list_service_send_binary_plist(client->parent, dict);
    res=sbservices_error(return_value_property_list_service_send_binary_plist_3);
    if((signed int)res == SBSERVICES_E_SUCCESS)
    {
      plist_free(dict);
      dict = (void *)0;
      return_value_property_list_service_receive_plist_4=property_list_service_receive_plist(client->parent, &dict);
      res=sbservices_error(return_value_property_list_service_receive_plist_4);
      if((signed int)res == SBSERVICES_E_SUCCESS)
      {
        void *node;
        node=plist_dict_get_item(dict, "interfaceOrientation");
        if(!(node == NULL))
        {
          unsigned long int value = (unsigned long int)SBSERVICES_INTERFACE_ORIENTATION_UNKNOWN;
          plist_get_uint_val(node, &value);
          *interface_orientation = (enum anonymous_37)value;
        }

      }

    }


  leave_unlock:
    ;
    if(!(dict == NULL))
      plist_free(dict);

    sbservices_unlock(client);
    return res;
  }
}

// sbservices_lock
// file sbservices.c line 36
static void sbservices_lock(struct sbservices_client_private *client)
{
  mutex_lock(&client->mutex);
}

// sbservices_set_icon_state
// file sbservices.c line 155
enum anonymous_36 sbservices_set_icon_state(struct sbservices_client_private *client, void *newstate)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct sbservices_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct property_list_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(newstate == NULL || tmp_if_expr_1)
    return (enum anonymous_36)SBSERVICES_E_INVALID_ARG;

  else
  {
    enum anonymous_36 res = (enum anonymous_36)SBSERVICES_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("setIconState");
    plist_dict_set_item(dict, "command", return_value_plist_new_string_2);
    void *return_value_plist_copy_3;
    return_value_plist_copy_3=plist_copy(newstate);
    plist_dict_set_item(dict, "iconState", return_value_plist_copy_3);
    sbservices_lock(client);
    enum anonymous_23 return_value_property_list_service_send_binary_plist_4;
    return_value_property_list_service_send_binary_plist_4=property_list_service_send_binary_plist(client->parent, dict);
    res=sbservices_error(return_value_property_list_service_send_binary_plist_4);
    if(!(dict == NULL))
      plist_free(dict);

    sbservices_unlock(client);
    return res;
  }
}

// sbservices_unlock
// file sbservices.c line 47
static void sbservices_unlock(struct sbservices_client_private *client)
{
  mutex_unlock(&client->mutex);
}

// screenshotr_client_free
// file screenshotr.c line 96
enum anonymous_38 screenshotr_client_free(struct screenshotr_client_private *client)
{
  if(client == ((struct screenshotr_client_private *)NULL))
    return (enum anonymous_38)SCREENSHOTR_E_INVALID_ARG;

  else
  {
    device_link_service_disconnect(client->parent, (const char *)(void *)0);
    enum anonymous_38 err;
    signed short int return_value_device_link_service_client_free_1;
    return_value_device_link_service_client_free_1=device_link_service_client_free(client->parent);
    err=screenshotr_error(return_value_device_link_service_client_free_1);
    free((void *)client);
    return err;
  }
}

// screenshotr_client_new
// file screenshotr.c line 61
enum anonymous_38 screenshotr_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct screenshotr_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct screenshotr_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct screenshotr_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_38)SCREENSHOTR_E_INVALID_ARG;

  else
  {
    struct device_link_service_client_private *dlclient = (struct device_link_service_client_private *)(void *)0;
    enum anonymous_38 ret;
    signed short int return_value_device_link_service_client_new_3;
    return_value_device_link_service_client_new_3=device_link_service_client_new(device, service, &dlclient);
    ret=screenshotr_error(return_value_device_link_service_client_new_3);
    if(!((signed int)ret == SCREENSHOTR_E_SUCCESS))
      return ret;

    else
    {
      struct screenshotr_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct screenshotr_client_private) /*8ul*/ );
      client_loc = (struct screenshotr_client_private *)return_value_malloc_4;
      client_loc->parent = dlclient;
      signed short int return_value_device_link_service_version_exchange_5;
      return_value_device_link_service_version_exchange_5=device_link_service_version_exchange(dlclient, (unsigned long int)300, (unsigned long int)0);
      ret=screenshotr_error(return_value_device_link_service_version_exchange_5);
      if(!((signed int)ret == SCREENSHOTR_E_SUCCESS))
      {
        screenshotr_client_free(client_loc);
        return ret;
      }

      else
      {
        *client = client_loc;
        return ret;
      }
    }
  }
}

// screenshotr_client_start_service
// file screenshotr.c line 89
enum anonymous_38 screenshotr_client_start_service(struct idevice_private *device, struct screenshotr_client_private **client, const char *label)
{
  enum anonymous_38 err = (enum anonymous_38)SCREENSHOTR_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.mobile.screenshotr", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))screenshotr_client_new, (signed int *)&err);
  return err;
}

// screenshotr_error
// file screenshotr.c line 42
static enum anonymous_38 screenshotr_error(signed short int err)
{
  if(!((signed int)err == 0))
  {
    if((signed int)err == -1)
      goto __CPROVER_DUMP_L2;

    if((signed int)err == -2)
      goto __CPROVER_DUMP_L3;

    if((signed int)err == -3)
      goto __CPROVER_DUMP_L4;

    if((signed int)err == -4)
      goto __CPROVER_DUMP_L5;

  }

  else
  {
    return (enum anonymous_38)SCREENSHOTR_E_SUCCESS;

  __CPROVER_DUMP_L2:
    ;
    return (enum anonymous_38)SCREENSHOTR_E_INVALID_ARG;

  __CPROVER_DUMP_L3:
    ;
    return (enum anonymous_38)SCREENSHOTR_E_PLIST_ERROR;

  __CPROVER_DUMP_L4:
    ;
    return (enum anonymous_38)SCREENSHOTR_E_MUX_ERROR;

  __CPROVER_DUMP_L5:
    ;
    return (enum anonymous_38)SCREENSHOTR_E_BAD_VERSION;
  }
  return (enum anonymous_38)SCREENSHOTR_E_UNKNOWN_ERROR;
}

// screenshotr_take_screenshot
// file screenshotr.c line 106
enum anonymous_38 screenshotr_take_screenshot(struct screenshotr_client_private *client, char **imgdata, unsigned long int *imgsize)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct screenshotr_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->parent != ((struct device_link_service_client_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  void *node;
  char *strval;
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_5;
  _Bool tmp_if_expr_8;
  enum anonymous_11 return_value_plist_get_node_type_7;
  if(imgdata == ((char **)NULL) || tmp_if_expr_1)
    return (enum anonymous_38)SCREENSHOTR_E_INVALID_ARG;

  else
  {
    enum anonymous_38 res = (enum anonymous_38)SCREENSHOTR_E_UNKNOWN_ERROR;
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string_2;
    return_value_plist_new_string_2=plist_new_string("ScreenShotRequest");
    plist_dict_set_item(dict, "MessageType", return_value_plist_new_string_2);
    signed short int return_value_device_link_service_send_process_message_3;
    return_value_device_link_service_send_process_message_3=device_link_service_send_process_message(client->parent, dict);
    res=screenshotr_error(return_value_device_link_service_send_process_message_3);
    plist_free(dict);
    if(!((signed int)res == SCREENSHOTR_E_SUCCESS))
      return res;

    else
    {
      dict = (void *)0;
      signed short int return_value_device_link_service_receive_process_message_4;
      return_value_device_link_service_receive_process_message_4=device_link_service_receive_process_message(client->parent, &dict);
      res=screenshotr_error(return_value_device_link_service_receive_process_message_4);
      if((signed int)res == SCREENSHOTR_E_SUCCESS)
      {
        if(dict == NULL)
          res = (enum anonymous_38)SCREENSHOTR_E_PLIST_ERROR;

        else
        {
          node=plist_dict_get_item(dict, "MessageType");
          strval = (char *)(void *)0;
          plist_get_string_val(node, &strval);
          if(strval == ((char *)NULL))
            tmp_if_expr_6 = (_Bool)1;

          else
          {
            return_value_strcmp_5=strcmp(strval, "ScreenShotReply");
            tmp_if_expr_6 = return_value_strcmp_5 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_6)
            res = (enum anonymous_38)SCREENSHOTR_E_PLIST_ERROR;

          else
          {
            node=plist_dict_get_item(dict, "ScreenShotData");
            if(node == NULL)
              tmp_if_expr_8 = (_Bool)1;

            else
            {
              return_value_plist_get_node_type_7=plist_get_node_type(node);
              tmp_if_expr_8 = (signed int)return_value_plist_get_node_type_7 != PLIST_DATA ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_8)
              res = (enum anonymous_38)SCREENSHOTR_E_PLIST_ERROR;

            else
            {
              plist_get_data_val(node, imgdata, imgsize);
              res = (enum anonymous_38)SCREENSHOTR_E_SUCCESS;
            }
          }
        }
      }


    leave:
      ;
      if(!(dict == NULL))
        plist_free(dict);

      return res;
    }
  }
}

// service_client_factory_start_service
// file service.c line 79
enum anonymous_20 service_client_factory_start_service(struct idevice_private *device, const char *service_name, void **client, const char *label, signed int (*constructor_func)(struct idevice_private *, struct lockdownd_service_descriptor *, void **), signed int *error_code)
{
  *client = (void *)0;
  struct lockdownd_client_private *lckd = (struct lockdownd_client_private *)(void *)0;
  enum anonymous_9 return_value_lockdownd_client_new_with_handshake_1;
  return_value_lockdownd_client_new_with_handshake_1=lockdownd_client_new_with_handshake(device, &lckd, label);
  _Bool tmp_if_expr_2;
  if(!((signed int)return_value_lockdownd_client_new_with_handshake_1 == LOCKDOWN_E_SUCCESS))
    return (enum anonymous_20)SERVICE_E_START_SERVICE_ERROR;

  else
  {
    struct lockdownd_service_descriptor *service = (struct lockdownd_service_descriptor *)(void *)0;
    lockdownd_start_service(lckd, service_name, &service);
    lockdownd_client_free(lckd);
    if(service == ((struct lockdownd_service_descriptor *)NULL))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      return (enum anonymous_20)SERVICE_E_START_SERVICE_ERROR;

    else
    {
      signed int ec;
      if(!(constructor_func == ((signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))NULL)))
      {
        signed int return_value;
        return_value=constructor_func(device, service, client);
        ec = (signed int)return_value;
      }

      else
      {
        enum anonymous_20 return_value_service_client_new_3;
        return_value_service_client_new_3=service_client_new(device, service, (struct service_client_private **)client);
        ec = (signed int)return_value_service_client_new_3;
      }
      if(!(error_code == ((signed int *)NULL)))
        *error_code = ec;

      lockdownd_service_descriptor_free(service);
      service = (struct lockdownd_service_descriptor *)(void *)0;
      return (enum anonymous_20)(ec == SERVICE_E_SUCCESS ? SERVICE_E_SUCCESS : SERVICE_E_START_SERVICE_ERROR);
    }
  }
}

// service_client_free
// file service.c line 118
enum anonymous_20 service_client_free(struct service_client_private *client)
{
  if(client == ((struct service_client_private *)NULL))
    return (enum anonymous_20)SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_20 err;
    enum anonymous_5 return_value_idevice_disconnect_1;
    return_value_idevice_disconnect_1=idevice_disconnect(client->connection);
    err=idevice_to_service_error(return_value_idevice_disconnect_1);
    free((void *)client);
    client = (struct service_client_private *)(void *)0;
    return err;
  }
}

// service_client_new
// file service.c line 55
enum anonymous_20 service_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct service_client_private **client)
{
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct service_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct service_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_20)SERVICE_E_INVALID_ARG;

  else
  {
    struct idevice_connection_private *connection = (struct idevice_connection_private *)(void *)0;
    enum anonymous_5 return_value_idevice_connect_3;
    return_value_idevice_connect_3=idevice_connect(device, service->port, &connection);
    if(!((signed int)return_value_idevice_connect_3 == IDEVICE_E_SUCCESS))
      return (enum anonymous_20)SERVICE_E_MUX_ERROR;

    else
    {
      struct service_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct service_client_private) /*8ul*/ );
      client_loc = (struct service_client_private *)return_value_malloc_4;
      client_loc->connection = connection;
      if((signed int)service->ssl_enabled == 1)
        service_enable_ssl(client_loc);

      *client = client_loc;
      return (enum anonymous_20)SERVICE_E_SUCCESS;
    }
  }
}

// service_disable_ssl
// file service.c line 184
enum anonymous_20 service_disable_ssl(struct service_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->connection != ((struct idevice_connection_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_20)SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_5 return_value_idevice_connection_disable_ssl_2;
    return_value_idevice_connection_disable_ssl_2=idevice_connection_disable_ssl(client->connection);
    enum anonymous_20 return_value_idevice_to_service_error_3;
    return_value_idevice_to_service_error_3=idevice_to_service_error(return_value_idevice_connection_disable_ssl_2);
    return return_value_idevice_to_service_error_3;
  }
}

// service_enable_ssl
// file service.c line 177
enum anonymous_20 service_enable_ssl(struct service_client_private *client)
{
  _Bool tmp_if_expr_1;
  if(client == ((struct service_client_private *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(client->connection != ((struct idevice_connection_private *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (enum anonymous_20)SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_5 return_value_idevice_connection_enable_ssl_2;
    return_value_idevice_connection_enable_ssl_2=idevice_connection_enable_ssl(client->connection);
    enum anonymous_20 return_value_idevice_to_service_error_3;
    return_value_idevice_to_service_error_3=idevice_to_service_error(return_value_idevice_connection_enable_ssl_2);
    return return_value_idevice_to_service_error_3;
  }
}

// service_receive
// file service.c line 172
enum anonymous_20 service_receive(struct service_client_private *client, char *data, unsigned int size, unsigned int *received)
{
  enum anonymous_20 return_value_service_receive_with_timeout_1;
  return_value_service_receive_with_timeout_1=service_receive_with_timeout(client, data, size, received, (unsigned int)10000);
  return return_value_service_receive_with_timeout_1;
}

// service_receive_with_timeout
// file service.c line 152
enum anonymous_20 service_receive_with_timeout(struct service_client_private *client, char *data, unsigned int size, unsigned int *received, unsigned int timeout)
{
  enum anonymous_20 res = (enum anonymous_20)SERVICE_E_UNKNOWN_ERROR;
  signed int bytes = 0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(client == ((struct service_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(client == ((struct service_client_private *)NULL)))
      tmp_if_expr_1 = !(client->connection != ((struct idevice_connection_private *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(data == ((char *)NULL) || size == 0u || tmp_if_expr_2)
    return (enum anonymous_20)SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_5 return_value_idevice_connection_receive_timeout_3;
    return_value_idevice_connection_receive_timeout_3=idevice_connection_receive_timeout(client->connection, data, size, (unsigned int *)&bytes, timeout);
    res=idevice_to_service_error(return_value_idevice_connection_receive_timeout_3);
    if(!(received == ((unsigned int *)NULL)))
      *received = (unsigned int)bytes;

    return res;
  }
}

// service_send
// file service.c line 131
enum anonymous_20 service_send(struct service_client_private *client, const char *data, unsigned int size, unsigned int *sent)
{
  enum anonymous_20 res = (enum anonymous_20)SERVICE_E_UNKNOWN_ERROR;
  signed int bytes = 0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(client == ((struct service_client_private *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(client == ((struct service_client_private *)NULL)))
      tmp_if_expr_1 = !(client->connection != ((struct idevice_connection_private *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(data == ((const char *)NULL) || size == 0u || tmp_if_expr_2)
    return (enum anonymous_20)SERVICE_E_INVALID_ARG;

  else
  {
    enum anonymous_5 return_value_idevice_connection_send_3;
    return_value_idevice_connection_send_3=idevice_connection_send(client->connection, data, size, (unsigned int *)&bytes);
    res=idevice_to_service_error(return_value_idevice_connection_send_3);
    if(!(sent == ((unsigned int *)NULL)))
      *sent = (unsigned int)bytes;

    return res;
  }
}

// service_to_property_list_service_error
// file property_list_service.c line 40
static enum anonymous_23 service_to_property_list_service_error(enum anonymous_20 err)
{
  switch((signed int)err)
  {
    case SERVICE_E_SUCCESS:
      return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_SUCCESS;
    case SERVICE_E_INVALID_ARG:
      return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_INVALID_ARG;
    case SERVICE_E_MUX_ERROR:
      return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_MUX_ERROR;
    case SERVICE_E_SSL_ERROR:
      return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_SSL_ERROR;
    default:
      return (enum anonymous_23)PROPERTY_LIST_SERVICE_E_UNKNOWN_ERROR;
  }
}

// socket_accept
// file socket.c line 320
signed int socket_accept(signed int fd, unsigned short int port)
{
  unsigned int addr_len;
  signed int result;
  struct sockaddr_in addr;
  memset((void *)&addr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  addr.sin_family = (unsigned short int)2;
  addr.sin_addr.s_addr=htonl((unsigned int)0x00000000);
  addr.sin_port=htons(port);
  addr_len = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;
  result=accept(fd, (struct sockaddr *)&addr, &addr_len);
  return result;
}

// socket_check_fd
// file socket.c line 253
signed int socket_check_fd(signed int fd, enum fd_mode fdm, unsigned int timeout)
{
  struct anonymous_15 fds;
  signed int sret;
  signed int eagain;
  struct timeval to;
  struct timeval *pto;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  if(!(fd >= 1))
  {
    if(verbose >= 2)
      fprintf(stderr, "ERROR: invalid fd in check_fd %d\n", fd);

    return -1;
  }

  else
  {
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_15) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fds)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&fds)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&fds)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    if(timeout >= 1u)
    {
      to.tv_sec = (signed long int)(timeout / (unsigned int)1000);
      to.tv_usec = (signed long int)(((signed long int)timeout - to.tv_sec * (signed long int)1000) * (signed long int)1000);
      pto = &to;
    }

    else
      pto = (struct timeval *)(void *)0;
    sret = -1;
    do
    {
      eagain = 0;
      switch((signed int)fdm)
      {
        case FDM_READ:
        {
          sret=select(fd + 1, &fds, (struct anonymous_15 *)(void *)0, (struct anonymous_15 *)(void *)0, pto);
          break;
        }
        case FDM_WRITE:
        {
          sret=select(fd + 1, (struct anonymous_15 *)(void *)0, &fds, (struct anonymous_15 *)(void *)0, pto);
          break;
        }
        case FDM_EXCEPT:
        {
          sret=select(fd + 1, (struct anonymous_15 *)(void *)0, (struct anonymous_15 *)(void *)0, &fds, pto);
          break;
        }
        default:
          return -1;
      }
      if(!(sret >= 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        switch(*return_value___errno_location_1)
        {
          case 4:
          {
            if(verbose >= 2)
              fprintf(stderr, "%s: EINTR\n", (const void *)"socket_check_fd");

            eagain = 1;
            break;
          }
          case 11:
          {
            if(verbose >= 2)
              fprintf(stderr, "%s: EAGAIN\n", (const void *)"socket_check_fd");

            break;
          }
          default:
          {
            if(verbose >= 2)
            {
              return_value___errno_location_2=__errno_location();
              return_value_strerror_3=strerror(*return_value___errno_location_2);
              fprintf(stderr, "%s: select failed: %s\n", (const void *)"socket_check_fd", return_value_strerror_3);
            }

            return -1;
          }
        }
      }

    }
    while(!(eagain == 0));
    return sret;
  }
}

// socket_close
// file socket.c line 346
signed int socket_close(signed int fd)
{
  signed int return_value_close_1;
  return_value_close_1=close(fd);
  return return_value_close_1;
}

// socket_connect
// file socket.c line 193
signed int socket_connect(const char *addr, unsigned short int port)
{
  signed int sfd = -1;
  signed int yes = 1;
  struct hostent *hp;
  struct sockaddr_in saddr;
  if(addr == ((const char *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  hp=gethostbyname(addr);
  if(hp == ((struct hostent *)NULL))
  {
    if(verbose >= 2)
      fprintf(stderr, "%s: unknown host '%s'\n", (const void *)"socket_connect", addr);

    return -1;
  }

  else
    if(*hp->h_addr_list == ((char *)NULL))
    {
      if(verbose >= 2)
        fprintf(stderr, "%s: gethostbyname returned NULL address!\n", (const void *)"socket_connect");

      return -1;
    }

    else
    {
      sfd=socket(2, 1, 6);
      if(!(sfd >= 0))
      {
        perror("socket()");
        return -1;
      }

      else
      {
        signed int return_value_setsockopt_2;
        return_value_setsockopt_2=setsockopt(sfd, 1, 2, (void *)&yes, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt_2 == -1)
        {
          perror("setsockopt()");
          socket_close(sfd);
          return -1;
        }

        else
        {
          memset((void *)&saddr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
          saddr.sin_family = (unsigned short int)2;
          saddr.sin_addr.s_addr = *((unsigned int *)hp->h_addr_list[(signed long int)0]);
          saddr.sin_port=htons(port);
          signed int return_value_connect_3;
          return_value_connect_3=connect(sfd, (struct sockaddr *)&saddr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
          if(!(return_value_connect_3 >= 0))
          {
            perror("connect");
            socket_close(sfd);
            return -2;
          }

          else
            return sfd;
        }
      }
    }
}

// socket_connect_unix
// file socket.c line 99
signed int socket_connect_unix(const char *filename)
{
  struct sockaddr_un name;
  signed int sfd = -1;
  unsigned long int size;
  struct stat fst;
  signed int return_value_stat_3;
  return_value_stat_3=stat(filename, &fst);
  signed int *return_value___errno_location_1;
  char *return_value_strerror_2;
  if(!(return_value_stat_3 == 0))
  {
    if(verbose >= 2)
    {
      return_value___errno_location_1=__errno_location();
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "%s: stat '%s': %s\n", (const void *)"socket_connect_unix", filename, return_value_strerror_2);
    }

    return -1;
  }

  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  signed int *return_value___errno_location_7;
  char *return_value_strerror_8;
  if(!((61440u & fst.st_mode) == 49152u))
  {
    if(verbose >= 2)
      fprintf(stderr, "%s: File '%s' is not a socket!\n", (const void *)"socket_connect_unix", filename);

    return -1;
  }

  else
  {
    sfd=socket(1, 1, 0);
    if(!(sfd >= 0))
    {
      if(verbose >= 2)
      {
        return_value___errno_location_4=__errno_location();
        return_value_strerror_5=strerror(*return_value___errno_location_4);
        fprintf(stderr, "%s: socket: %s\n", (const void *)"socket_connect_unix", return_value_strerror_5);
      }

      return -1;
    }

    name.sun_family = (unsigned short int)1;
    strncpy(name.sun_path, filename, sizeof(char [108l]) /*108ul*/ );
    name.sun_path[(signed long int)(sizeof(char [108l]) /*108ul*/  - (unsigned long int)1)] = (char)0;
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(name.sun_path);
    size = 2ul + return_value_strlen_6 + (unsigned long int)1;
    signed int return_value_connect_9;
    return_value_connect_9=connect(sfd, (struct sockaddr *)&name, (unsigned int)size);
    if(!(return_value_connect_9 >= 0))
    {
      socket_close(sfd);
      if(verbose >= 2)
      {
        return_value___errno_location_7=__errno_location();
        return_value_strerror_8=strerror(*return_value___errno_location_7);
        fprintf(stderr, "%s: connect: %s\n", (const void *)"socket_connect_unix", return_value_strerror_8);
      }

      return -1;
    }

    return sfd;
  }
}

// socket_create
// file socket.c line 146
signed int socket_create(unsigned short int port)
{
  signed int sfd = -1;
  signed int yes = 1;
  struct sockaddr_in saddr;
  sfd=socket(2, 1, 6);
  if(!(sfd >= 0))
  {
    perror("socket()");
    return -1;
  }

  else
  {
    signed int return_value_setsockopt_1;
    return_value_setsockopt_1=setsockopt(sfd, 1, 2, (void *)&yes, (unsigned int)sizeof(signed int) /*4ul*/ );
    if(return_value_setsockopt_1 == -1)
    {
      perror("setsockopt()");
      socket_close(sfd);
      return -1;
    }

    else
    {
      memset((void *)&saddr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
      saddr.sin_family = (unsigned short int)2;
      saddr.sin_addr.s_addr=htonl((unsigned int)0x00000000);
      saddr.sin_port=htons(port);
      signed int return_value_bind_2;
      return_value_bind_2=bind(sfd, (struct sockaddr *)&saddr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
      if(!(return_value_bind_2 >= 0))
      {
        perror("bind()");
        socket_close(sfd);
        return -1;
      }

      else
      {
        signed int return_value_listen_3;
        return_value_listen_3=listen(sfd, 1);
        if(return_value_listen_3 == -1)
        {
          perror("listen()");
          socket_close(sfd);
          return -1;
        }

        else
          return sfd;
      }
    }
  }
}

// socket_create_unix
// file socket.c line 53
signed int socket_create_unix(const char *filename)
{
  struct sockaddr_un name;
  signed int sock;
  unsigned long int size;
  unlink(filename);
  sock=socket(1, 1, 0);
  if(!(sock >= 0))
  {
    perror("socket");
    return -1;
  }

  else
  {
    name.sun_family = (unsigned short int)1;
    strncpy(name.sun_path, filename, sizeof(char [108l]) /*108ul*/ );
    name.sun_path[(signed long int)(sizeof(char [108l]) /*108ul*/  - (unsigned long int)1)] = (char)0;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(name.sun_path);
    size = 2ul + return_value_strlen_1 + (unsigned long int)1;
    signed int return_value_bind_2;
    return_value_bind_2=bind(sock, (struct sockaddr *)&name, (unsigned int)size);
    if(!(return_value_bind_2 >= 0))
    {
      perror("bind");
      socket_close(sock);
      return -1;
    }

    else
    {
      signed int return_value_listen_3;
      return_value_listen_3=listen(sock, 10);
      if(!(return_value_listen_3 >= 0))
      {
        perror("listen");
        socket_close(sock);
        return -1;
      }

      else
        return sock;
    }
  }
}

// socket_peek
// file socket.c line 359
signed int socket_peek(signed int fd, void *data, unsigned long int length)
{
  signed int return_value_socket_receive_timeout_1;
  return_value_socket_receive_timeout_1=socket_receive_timeout(fd, data, length, 2, (unsigned int)20000);
  return return_value_socket_receive_timeout_1;
}

// socket_receive
// file socket.c line 354
signed int socket_receive(signed int fd, void *data, unsigned long int length)
{
  signed int return_value_socket_receive_timeout_1;
  return_value_socket_receive_timeout_1=socket_receive_timeout(fd, data, length, 0, (unsigned int)20000);
  return return_value_socket_receive_timeout_1;
}

// socket_receive_timeout
// file socket.c line 364
signed int socket_receive_timeout(signed int fd, void *data, unsigned long int length, signed int flags, unsigned int timeout)
{
  signed int res;
  signed int result;
  res=socket_check_fd(fd, (enum fd_mode)FDM_READ, timeout);
  if(!(res >= 1))
    return res;

  else
  {
    signed long int return_value_recv_1;
    return_value_recv_1=recv(fd, data, length, flags);
    result = (signed int)return_value_recv_1;
    if(result == 0 && res >= 1)
    {
      if(verbose >= 3)
        fprintf(stderr, "%s: fd=%d recv returned 0\n", (const void *)"socket_receive_timeout", fd);

      return -11;
    }

    else
    {
      if(!(result >= 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        return -(*return_value___errno_location_2);
      }

      return result;
    }
  }
}

// socket_send
// file socket.c line 389
signed int socket_send(signed int fd, void *data, unsigned long int length)
{
  signed long int return_value_send_1;
  return_value_send_1=send(fd, data, length, 0);
  return (signed int)return_value_send_1;
}

// socket_set_verbose
// file socket.c line 47
void socket_set_verbose(signed int level)
{
  verbose = level;
}

// socket_shutdown
// file socket.c line 341
signed int socket_shutdown(signed int fd, signed int how)
{
  signed int return_value_shutdown_1;
  return_value_shutdown_1=shutdown(fd, how);
  return return_value_shutdown_1;
}

// str_remove_spaces
// file lockdown.c line 1421
static void str_remove_spaces(char *source)
{
  char *dest = source;
  char *tmp_post_1;
  while(!((signed int)*source == 0))
  {
    const unsigned short int **return_value___ctype_b_loc_2;
    return_value___ctype_b_loc_2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*source]) == 0)
    {
      tmp_post_1 = dest;
      dest = dest + 1l;
      *tmp_post_1 = *source;
    }

    source = source + 1l;
  }
  *dest = (char)0;
}

// string_build_path
// file utils.c line 114
char * string_build_path(const char *elem, ...)
{
  if(elem == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    __builtin_va_list args;
    signed int len;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(elem);
    len = (signed int)(return_value_strlen_1 + (unsigned long int)1);
    va_start(args, elem);
    char *arg;
    arg=va_arg(args, __typeof__(arg));
    while(!(arg == ((char *)NULL)))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(arg);
      len = len + (signed int)(return_value_strlen_2 + (unsigned long int)1);
      arg=va_arg(args, __typeof__(arg));
    }
    va_end(args);
    char *out;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)len);
    out = (char *)return_value_malloc_3;
    strcpy(out, elem);
    va_start(args, elem);
    arg=va_arg(args, __typeof__(arg));
    while(!(arg == ((char *)NULL)))
    {
      strcat(out, "/");
      strcat(out, arg);
      arg=va_arg(args, __typeof__(arg));
    }
    va_end(args);
    return out;
  }
}

// string_concat
// file utils.h line 39
char * string_concat(const char *str, ...)
{
  unsigned long int len;
  __builtin_va_list args;
  char *s;
  char *result;
  char *dest;
  if(str == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(str);
    len = return_value_strlen_1 + (unsigned long int)1;
    va_start(args, str);
    s=va_arg(args, __typeof__(s));
    while(!(s == ((char *)NULL)))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(s);
      len = len + return_value_strlen_2;
      s=va_arg(args, __typeof__(s));
    }
    va_end(args);
    void *return_value_malloc_3;
    return_value_malloc_3=malloc(len);
    result = (char *)return_value_malloc_3;
    if(result == ((char *)NULL))
      return (char *)(void *)0;

    else
    {
      dest = result;
      dest=stpcpy(dest, str);
      va_start(args, str);
      s=va_arg(args, __typeof__(s));
      while(!(s == ((char *)NULL)))
      {
        dest=stpcpy(dest, s);
        s=va_arg(args, __typeof__(s));
      }
      va_end(args);
      return result;
    }
  }
}

// string_format_size
// file utils.c line 142
char * string_format_size(unsigned long int size)
{
  char buf[80l];
  double sz;
  if(size >= 1000000000000ul)
  {
    sz = (double)size / (double)1000000000000.0f;
    sprintf(buf, "%0.1f TB", sz);
  }

  else
    if(size >= 1000000000ul)
    {
      sz = (double)size / (double)1000000000.0f;
      sprintf(buf, "%0.1f GB", sz);
    }

    else
      if(size >= 1000000ul)
      {
        sz = (double)size / (double)1000000.0f;
        sprintf(buf, "%0.1f MB", sz);
      }

      else
        if(size >= 1000ul)
        {
          sz = (double)size / (double)1000.0f;
          sprintf(buf, "%0.1f KB", sz);
        }

        else
          sprintf(buf, "%d Bytes", (signed int)size);
  char *return_value_strdup_1;
  return_value_strdup_1=strdup(buf);
  return return_value_strdup_1;
}

// string_toupper
// file utils.c line 164
char * string_toupper(char *str)
{
  char *res;
  res=strdup(str);
  unsigned int i = (unsigned int)0;
  unsigned long int return_value_strlen_1;
  do
  {
    return_value_strlen_1=strlen(res);
    if((unsigned long int)i >= return_value_strlen_1)
      break;

    signed int return_value_toupper_2;
    return_value_toupper_2=toupper((signed int)res[(signed long int)i]);
    res[(signed long int)i] = (char)return_value_toupper_2;
    i = i + 1u;
  }
  while((_Bool)1);
  return res;
}

// syslog_relay_client_free
// file syslog_relay.c line 99
enum anonymous_53 syslog_relay_client_free(struct syslog_relay_client_private *client)
{
  if(client == ((struct syslog_relay_client_private *)NULL))
    return (enum anonymous_53)SYSLOG_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_53 err;
    enum anonymous_20 return_value_service_client_free_1;
    return_value_service_client_free_1=service_client_free(client->parent);
    err=syslog_relay_error(return_value_service_client_free_1);
    client->parent = (struct service_client_private *)(void *)0;
    if(!(client->worker == 0ul))
    {
      thread_join(client->worker);
      thread_free(client->worker);
      client->worker = (unsigned long int)(void *)0;
    }

    free((void *)client);
    return err;
  }
}

// syslog_relay_client_new
// file syslog_relay.c line 64
enum anonymous_53 syslog_relay_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct syslog_relay_client_private **client)
{
  *client = (struct syslog_relay_client_private *)(void *)0;
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct syslog_relay_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct syslog_relay_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_53)SYSLOG_RELAY_E_INVALID_ARG;

  else
  {
    struct service_client_private *parent = (struct service_client_private *)(void *)0;
    enum anonymous_53 ret;
    enum anonymous_20 return_value_service_client_new_3;
    return_value_service_client_new_3=service_client_new(device, service, &parent);
    ret=syslog_relay_error(return_value_service_client_new_3);
    if(!((signed int)ret == SYSLOG_RELAY_E_SUCCESS))
      return ret;

    else
    {
      struct syslog_relay_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct syslog_relay_client_private) /*16ul*/ );
      client_loc = (struct syslog_relay_client_private *)return_value_malloc_4;
      client_loc->parent = parent;
      client_loc->worker = (unsigned long int)(void *)0;
      *client = client_loc;
      return (enum anonymous_53)0;
    }
  }
}

// syslog_relay_client_start_service
// file syslog_relay.c line 92
enum anonymous_53 syslog_relay_client_start_service(struct idevice_private *device, struct syslog_relay_client_private **client, const char *label)
{
  enum anonymous_53 err = (enum anonymous_53)SYSLOG_RELAY_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.syslog_relay", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))syslog_relay_client_new, (signed int *)&err);
  return err;
}

// syslog_relay_error
// file syslog_relay.c line 47
static enum anonymous_53 syslog_relay_error(enum anonymous_20 err)
{
  switch((signed int)err)
  {
    case SERVICE_E_SUCCESS:
      return (enum anonymous_53)SYSLOG_RELAY_E_SUCCESS;
    case SERVICE_E_INVALID_ARG:
      return (enum anonymous_53)SYSLOG_RELAY_E_INVALID_ARG;
    case SERVICE_E_MUX_ERROR:
      return (enum anonymous_53)SYSLOG_RELAY_E_MUX_ERROR;
    case SERVICE_E_SSL_ERROR:
      return (enum anonymous_53)SYSLOG_RELAY_E_SSL_ERROR;
    default:
      return (enum anonymous_53)SYSLOG_RELAY_E_UNKNOWN_ERROR;
  }
}

// syslog_relay_receive
// file syslog_relay.c line 117
enum anonymous_53 syslog_relay_receive(struct syslog_relay_client_private *client, char *data, unsigned int size, unsigned int *received)
{
  enum anonymous_53 return_value_syslog_relay_receive_with_timeout_1;
  return_value_syslog_relay_receive_with_timeout_1=syslog_relay_receive_with_timeout(client, data, size, received, (unsigned int)1000);
  return return_value_syslog_relay_receive_with_timeout_1;
}

// syslog_relay_receive_with_timeout
// file syslog_relay.c line 122
enum anonymous_53 syslog_relay_receive_with_timeout(struct syslog_relay_client_private *client, char *data, unsigned int size, unsigned int *received, unsigned int timeout)
{
  enum anonymous_53 res = (enum anonymous_53)SYSLOG_RELAY_E_UNKNOWN_ERROR;
  signed int bytes = 0;
  if(data == ((char *)NULL) || client == ((struct syslog_relay_client_private *)NULL) || size == 0u)
    return (enum anonymous_53)SYSLOG_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_20 return_value_service_receive_with_timeout_1;
    return_value_service_receive_with_timeout_1=service_receive_with_timeout(client->parent, data, size, (unsigned int *)&bytes, timeout);
    res=syslog_relay_error(return_value_service_receive_with_timeout_1);
    if(!(received == ((unsigned int *)NULL)))
      *received = (unsigned int)bytes;

    return res;
  }
}

// syslog_relay_start_capture
// file syslog_relay.c line 176
enum anonymous_53 syslog_relay_start_capture(struct syslog_relay_client_private *client, void (*callback)(char, void *), void *user_data)
{
  if(callback == ((void (*)(char, void *))NULL) || client == ((struct syslog_relay_client_private *)NULL))
    return (enum anonymous_53)SYSLOG_RELAY_E_INVALID_ARG;

  else
  {
    enum anonymous_53 res = (enum anonymous_53)SYSLOG_RELAY_E_UNKNOWN_ERROR;
    if(!(client->worker == 0ul))
      return res;

    else
    {
      struct syslog_relay_worker_thread *srwt;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct syslog_relay_worker_thread) /*24ul*/ );
      srwt = (struct syslog_relay_worker_thread *)return_value_malloc_1;
      if(!(srwt == ((struct syslog_relay_worker_thread *)NULL)))
      {
        srwt->client = client;
        srwt->cbfunc = callback;
        srwt->user_data = user_data;
        signed int return_value_thread_new_2;
        return_value_thread_new_2=thread_new(&client->worker, syslog_relay_worker, (void *)srwt);
        if(return_value_thread_new_2 == 0)
          res = (enum anonymous_53)SYSLOG_RELAY_E_SUCCESS;

      }

      return res;
    }
  }
}

// syslog_relay_stop_capture
// file syslog_relay.c line 203
enum anonymous_53 syslog_relay_stop_capture(struct syslog_relay_client_private *client)
{
  if(!(client->worker == 0ul))
  {
    struct service_client_private *parent = client->parent;
    client->parent = (struct service_client_private *)(void *)0;
    thread_join(client->worker);
    thread_free(client->worker);
    client->worker = (unsigned long int)(void *)0;
    client->parent = parent;
  }

  return (enum anonymous_53)SYSLOG_RELAY_E_SUCCESS;
}

// syslog_relay_worker
// file syslog_relay.c line 142
void * syslog_relay_worker(void *arg)
{
  enum anonymous_53 ret = (enum anonymous_53)SYSLOG_RELAY_E_UNKNOWN_ERROR;
  struct syslog_relay_worker_thread *srwt = (struct syslog_relay_worker_thread *)arg;
  if(srwt == ((struct syslog_relay_worker_thread *)NULL))
    return (void *)0;

  else
  {
    while(!(srwt->client->parent == ((struct service_client_private *)NULL)))
    {
      char c;
      unsigned int bytes = (unsigned int)0;
      ret=syslog_relay_receive_with_timeout(srwt->client, &c, (unsigned int)1, &bytes, (unsigned int)100);
      if(bytes == 0u && (signed int)ret == SYSLOG_RELAY_E_SUCCESS)
        continue;

      else
        if(!((signed int)ret >= 0))
          break;

      if(!((signed int)c == 0))
        srwt->cbfunc(c, srwt->user_data);

    }
    if(!(srwt == ((struct syslog_relay_worker_thread *)NULL)))
      free((void *)srwt);

    return (void *)0;
  }
}

// thread_free
// file thread.c line 39
void thread_free(unsigned long int thread)
{
  ;
}

// thread_join
// file thread.c line 46
void thread_join(unsigned long int thread)
{
  pthread_join(thread, (void **)(void *)0);
}

// thread_new
// file thread.c line 24
signed int thread_new(unsigned long int *thread, void * (*thread_func)(void *), void *data)
{
  signed int res;
  res=pthread_create(thread, (const union pthread_attr_t *)(void *)0, thread_func, data);
  return res;
}

// thread_once
// file thread.c line 92
void thread_once(signed int *once_control, void (*init_routine)(void))
{
  pthread_once(once_control, init_routine);
}

// usbmux_event_cb
// file idevice.c line 146
static void usbmux_event_cb(const struct anonymous_28 *event, void *user_data)
{
  struct anonymous_35 ev;
  ev.event = (enum idevice_event_type)event->event;
  ev.udid = event->device.udid;
  ev.conn_type = CONNECTION_USBMUXD;
  if(!(event_cb == ((void (*)(const struct anonymous_35 *, void *))NULL)))
    event_cb(&ev, user_data);

}

// userpref_delete_pair_record
// file userpref.c line 366
enum anonymous_4 userpref_delete_pair_record(const char *udid)
{
  signed int res;
  res=usbmuxd_delete_pair_record(udid);
  return (enum anonymous_4)(res == 0 ? USERPREF_E_SUCCESS : USERPREF_E_UNKNOWN_ERROR);
}

// userpref_get_config_dir
// file userpref.c line 131
const char * userpref_get_config_dir(void)
{
  char *base_config_dir = (char *)(void *)0;
  signed int tmp_post_2;
  if(!(__config_dir == ((char *)NULL)))
    return __config_dir;

  else
  {
    base_config_dir=strdup("/var/lib");
    __config_dir=string_concat(base_config_dir, (const void *)"/", (const void *)"lockdown", (void *)0);
    if(!(__config_dir == ((char *)NULL)))
    {
      signed int i;
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(__config_dir);
      i = (signed int)(return_value_strlen_1 - (unsigned long int)1);
      for( ; i >= 1; __config_dir[(signed long int)tmp_post_2] = (char)0)
      {
        if(!((signed int)__config_dir[(signed long int)i] == 47))
          break;

        tmp_post_2 = i;
        i = i - 1;
      }
    }

    free((void *)base_config_dir);
    return __config_dir;
  }
}

// userpref_get_paired_udids
// file userpref.c line 238
enum anonymous_4 userpref_get_paired_udids(char ***list, unsigned int *count)
{
  struct __dirstream *config_dir;
  const char *config_path = (const char *)(void *)0;
  /* userpref_get_paired_udids::1::tag-slist_t */
struct slist_t
{
  // name
  char *name;
  // next
  void *next;
};

/* */
  ;
  struct slist_t *udids = (struct slist_t *)(void *)0;
  unsigned int i;
  unsigned int found = (unsigned int)0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(list == ((char ***)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(list == ((char ***)NULL)))
      tmp_if_expr_1 = *list != ((char **)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  unsigned long int return_value_strlen_5;
  unsigned long int return_value_strlen_6;
  unsigned int tmp_post_8;
  if(tmp_if_expr_2)
    return (enum anonymous_4)USERPREF_E_INVALID_ARG;

  else
  {
    if(!(count == ((unsigned int *)NULL)))
      *count = (unsigned int)0;

    config_path=userpref_get_config_dir();
    config_dir=opendir(config_path);
    if(!(config_dir == ((struct __dirstream *)NULL)))
    {
      struct dirent *entry;
      struct slist_t *listp = udids;
      do
      {
        entry=readdir(config_dir);
        if(entry == ((struct dirent *)NULL))
          break;

        char *ext;
        ext=strstr(entry->d_name, ".plist");
        if(!(ext == ((char *)NULL)))
        {
          if(ext - entry->d_name == 40l)
          {
            return_value_strlen_5=strlen(entry->d_name);
            return_value_strlen_6=strlen(ext);
            if(return_value_strlen_5 == 40ul + return_value_strlen_6)
            {
              struct slist_t *ne;
              void *return_value_malloc_3;
              return_value_malloc_3=malloc(sizeof(struct slist_t) /*16ul*/ );
              ne = (struct slist_t *)return_value_malloc_3;
              void *return_value_malloc_4;
              return_value_malloc_4=malloc((unsigned long int)41);
              ne->name = (char *)return_value_malloc_4;
              strncpy(ne->name, entry->d_name, (unsigned long int)40);
              ne->name[(signed long int)40] = (char)0;
              ne->next = (void *)0;
              if(listp == ((struct slist_t *)NULL))
              {
                listp = ne;
                udids = listp;
              }

              else
              {
                listp->next = (void *)ne;
                listp = (struct slist_t *)listp->next;
              }
              found = found + 1u;
            }

          }

        }

      }
      while((_Bool)1);
      closedir(config_dir);
    }

    void *return_value_malloc_7;
    return_value_malloc_7=malloc(sizeof(char *) /*8ul*/  * (unsigned long int)(found + (unsigned int)1));
    *list = (char **)return_value_malloc_7;
    i = (unsigned int)0;
    while(!(udids == ((struct slist_t *)NULL)))
    {
      tmp_post_8 = i;
      i = i + 1u;
      (*list)[(signed long int)tmp_post_8] = udids->name;
      struct slist_t *old = udids;
      udids = (struct slist_t *)udids->next;
      free((void *)old);
    }
    (*list)[(signed long int)i] = (char *)(void *)0;
    if(!(count == ((unsigned int *)NULL)))
      *count = found;

    return (enum anonymous_4)USERPREF_E_SUCCESS;
  }
}

// userpref_has_pair_record
// file userpref.c line 202
signed int userpref_has_pair_record(const char *udid)
{
  signed int ret = 0;
  const char *config_path = (const char *)(void *)0;
  char *config_file = (char *)(void *)0;
  struct stat st;
  if(udid == ((const char *)NULL))
    return 0;

  else
  {
    config_path=userpref_get_config_dir();
    config_file=string_concat(config_path, (const void *)"/", udid, (const void *)".plist", (void *)0);
    signed int return_value_stat_1;
    return_value_stat_1=stat(config_file, &st);
    if(return_value_stat_1 == 0)
    {
      if((61440u & st.st_mode) == 32768u)
        ret = 1;

    }

    free((void *)config_file);
    return ret;
  }
}

// userpref_read_pair_record
// file userpref.c line 333
enum anonymous_4 userpref_read_pair_record(const char *udid, void **pair_record)
{
  char *record_data = (char *)(void *)0;
  unsigned int record_size = (unsigned int)0;
  signed int res;
  res=usbmuxd_read_pair_record(udid, &record_data, &record_size);
  if(!(res >= 0))
  {
    if(!(record_data == ((char *)NULL)))
      free((void *)record_data);

    return (enum anonymous_4)USERPREF_E_INVALID_CONF;
  }

  else
  {
    *pair_record = (void *)0;
    signed int return_value_memcmp_1;
    return_value_memcmp_1=memcmp((const void *)record_data, (const void *)"bplist00", (unsigned long int)8);
    if(return_value_memcmp_1 == 0)
      plist_from_bin(record_data, record_size, pair_record);

    else
      plist_from_xml(record_data, record_size, pair_record);
    free((void *)record_data);
    return (enum anonymous_4)(res == 0 ? USERPREF_E_SUCCESS : USERPREF_E_UNKNOWN_ERROR);
  }
}

// userpref_read_system_buid
// file userpref.c line 183
signed int userpref_read_system_buid(char **system_buid)
{
  signed int res;
  res=usbmuxd_read_buid(system_buid);
  return res;
}

// userpref_save_pair_record
// file userpref.c line 310
enum anonymous_4 userpref_save_pair_record(const char *udid, void *pair_record)
{
  char *record_data = (char *)(void *)0;
  unsigned int record_size = (unsigned int)0;
  plist_to_bin(pair_record, &record_data, &record_size);
  signed int res;
  res=usbmuxd_save_pair_record(udid, record_data, record_size);
  free((void *)record_data);
  return (enum anonymous_4)(res == 0 ? USERPREF_E_SUCCESS : USERPREF_E_UNKNOWN_ERROR);
}

// webinspector_client_free
// file webinspector.c line 95
enum anonymous_52 webinspector_client_free(struct webinspector_client_private *client)
{
  if(client == ((struct webinspector_client_private *)NULL))
    return (enum anonymous_52)WEBINSPECTOR_E_INVALID_ARG;

  else
  {
    enum anonymous_52 err;
    enum anonymous_23 return_value_property_list_service_client_free_1;
    return_value_property_list_service_client_free_1=property_list_service_client_free(client->parent);
    err=webinspector_error(return_value_property_list_service_client_free_1);
    free((void *)client);
    return err;
  }
}

// webinspector_client_new
// file webinspector.c line 61
enum anonymous_52 webinspector_client_new(struct idevice_private *device, struct lockdownd_service_descriptor *service, struct webinspector_client_private **client)
{
  *client = (struct webinspector_client_private *)(void *)0;
  _Bool tmp_if_expr_1;
  if(device == ((struct idevice_private *)NULL) || service == ((struct lockdownd_service_descriptor *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)service->port == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(client == ((struct webinspector_client_private **)NULL) || tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = *client != ((struct webinspector_client_private *)NULL) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (enum anonymous_52)WEBINSPECTOR_E_INVALID_ARG;

  else
  {
    struct property_list_service_client_private *plclient = (struct property_list_service_client_private *)(void *)0;
    enum anonymous_52 ret;
    enum anonymous_23 return_value_property_list_service_client_new_3;
    return_value_property_list_service_client_new_3=property_list_service_client_new(device, service, &plclient);
    ret=webinspector_error(return_value_property_list_service_client_new_3);
    if(!((signed int)ret == WEBINSPECTOR_E_SUCCESS))
      return ret;

    else
    {
      struct webinspector_client_private *client_loc;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct webinspector_client_private) /*8ul*/ );
      client_loc = (struct webinspector_client_private *)return_value_malloc_4;
      client_loc->parent = plclient;
      *client = client_loc;
      return (enum anonymous_52)0;
    }
  }
}

// webinspector_client_start_service
// file webinspector.c line 88
enum anonymous_52 webinspector_client_start_service(struct idevice_private *device, struct webinspector_client_private **client, const char *label)
{
  enum anonymous_52 err = (enum anonymous_52)WEBINSPECTOR_E_UNKNOWN_ERROR;
  service_client_factory_start_service(device, "com.apple.webinspector", (void **)client, label, (signed int (*)(struct idevice_private *, struct lockdownd_service_descriptor *, void **))webinspector_client_new, (signed int *)&err);
  return err;
}

// webinspector_error
// file webinspector.c line 42
static enum anonymous_52 webinspector_error(enum anonymous_23 err)
{
  switch((signed int)err)
  {
    case PROPERTY_LIST_SERVICE_E_SUCCESS:
      return (enum anonymous_52)WEBINSPECTOR_E_SUCCESS;
    case PROPERTY_LIST_SERVICE_E_INVALID_ARG:
      return (enum anonymous_52)WEBINSPECTOR_E_INVALID_ARG;
    case PROPERTY_LIST_SERVICE_E_PLIST_ERROR:
      return (enum anonymous_52)WEBINSPECTOR_E_PLIST_ERROR;
    case PROPERTY_LIST_SERVICE_E_MUX_ERROR:
      return (enum anonymous_52)WEBINSPECTOR_E_MUX_ERROR;
    case PROPERTY_LIST_SERVICE_E_SSL_ERROR:
      return (enum anonymous_52)WEBINSPECTOR_E_SSL_ERROR;
    default:
      return (enum anonymous_52)WEBINSPECTOR_E_UNKNOWN_ERROR;
  }
}

// webinspector_receive
// file webinspector.c line 163
enum anonymous_52 webinspector_receive(struct webinspector_client_private *client, void **plist)
{
  enum anonymous_52 return_value_webinspector_receive_with_timeout_1;
  return_value_webinspector_receive_with_timeout_1=webinspector_receive_with_timeout(client, plist, (unsigned int)5000);
  return return_value_webinspector_receive_with_timeout_1;
}

// webinspector_receive_with_timeout
// file webinspector.c line 168
enum anonymous_52 webinspector_receive_with_timeout(struct webinspector_client_private *client, void **plist, unsigned int timeout_ms)
{
  enum anonymous_52 res = (enum anonymous_52)WEBINSPECTOR_E_UNKNOWN_ERROR;
  void *message = (void *)0;
  void *key = (void *)0;
  signed int is_final_message = 1;
  char *buffer = (char *)(void *)0;
  unsigned long int length = (unsigned long int)0;
  char *packet = (char *)(void *)0;
  char *newpacket = (char *)(void *)0;
  unsigned long int packet_length = (unsigned long int)0;
  do
  {
    enum anonymous_23 return_value_property_list_service_receive_plist_with_timeout_1;
    return_value_property_list_service_receive_plist_with_timeout_1=property_list_service_receive_plist_with_timeout(client->parent, &message, timeout_ms);
    res=webinspector_error(return_value_property_list_service_receive_plist_with_timeout_1);
    if(message == NULL || !((signed int)res == WEBINSPECTOR_E_SUCCESS))
    {
      plist_free(message);
      return (enum anonymous_52)WEBINSPECTOR_E_MUX_ERROR;
    }

    key=plist_dict_get_item(message, "WIRFinalMessageKey");
    if(key == NULL)
    {
      key=plist_dict_get_item(message, "WIRPartialMessageKey");
      if(key == NULL)
      {
        plist_free(message);
        return (enum anonymous_52)WEBINSPECTOR_E_PLIST_ERROR;
      }

      is_final_message = 0;
    }

    else
      is_final_message = 1;
    plist_get_data_val(key, &buffer, &length);
    if(buffer == ((char *)NULL) || length == 0ul || length >= 4294967296ul)
    {
      free((void *)packet);
      free((void *)buffer);
      return (enum anonymous_52)WEBINSPECTOR_E_PLIST_ERROR;
    }

    if(packet == ((char *)NULL))
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(length * sizeof(char) /*1ul*/ );
      packet = (char *)return_value_malloc_2;
    }

    else
    {
      void *return_value_realloc_3;
      return_value_realloc_3=realloc((void *)packet, (packet_length + length) * sizeof(char) /*1ul*/ );
      newpacket = (char *)return_value_realloc_3;
      packet = newpacket;
    }
    memcpy((void *)(packet + (signed long int)packet_length), (const void *)buffer, length);
    free((void *)buffer);
    buffer = (char *)(void *)0;
    if(!(message == NULL))
    {
      plist_free(message);
      message = (void *)0;
    }

    packet_length = packet_length + length;
    length = (unsigned long int)0;
  }
  while(is_final_message == 0);
  if(!(packet_length == 0ul))
  {
    plist_from_bin(packet, (unsigned int)packet_length, plist);
    if(!(*plist == NULL))
      goto __CPROVER_DUMP_L10;

    free((void *)packet);
    return (enum anonymous_52)WEBINSPECTOR_E_PLIST_ERROR;
  }

  else
  {

  __CPROVER_DUMP_L10:
    ;
    if(!(packet == ((char *)NULL)))
      free((void *)packet);

    return res;
  }
}

// webinspector_send
// file webinspector.c line 106
enum anonymous_52 webinspector_send(struct webinspector_client_private *client, void *plist)
{
  enum anonymous_52 res = (enum anonymous_52)WEBINSPECTOR_E_UNKNOWN_ERROR;
  unsigned int offset = (unsigned int)0;
  signed int is_final_message = 0;
  char *packet = (char *)(void *)0;
  unsigned int packet_length = (unsigned int)0;
  plist_to_bin(plist, &packet, &packet_length);
  if(packet == ((char *)NULL) || packet_length == 0u)
    return res;

  else
  {
    while((_Bool)1)
    {
      if(!(packet_length >= 8096u))
        is_final_message = 1;

      else
        is_final_message = 0;
      void *outplist;
      outplist=plist_new_dict();
      if(is_final_message == 0)
      {
        void *return_value_plist_new_data_1;
        return_value_plist_new_data_1=plist_new_data(packet + (signed long int)offset, (unsigned long int)8096);
        plist_dict_set_item(outplist, "WIRPartialMessageKey", return_value_plist_new_data_1);
        offset = offset + (unsigned int)8096;
        packet_length = packet_length - (unsigned int)8096;
      }

      else
      {
        void *return_value_plist_new_data_2;
        return_value_plist_new_data_2=plist_new_data(packet + (signed long int)offset, (unsigned long int)packet_length);
        plist_dict_set_item(outplist, "WIRFinalMessageKey", return_value_plist_new_data_2);
        offset = offset + packet_length;
        packet_length = packet_length - packet_length;
      }
      enum anonymous_23 return_value_property_list_service_send_binary_plist_3;
      return_value_property_list_service_send_binary_plist_3=property_list_service_send_binary_plist(client->parent, outplist);
      res=webinspector_error(return_value_property_list_service_send_binary_plist_3);
      plist_free(outplist);
      outplist = (void *)0;
      if(!((signed int)res == WEBINSPECTOR_E_SUCCESS))
        return res;

      if(!(packet_length >= 1u))
        break;

    }
    free((void *)packet);
    packet = (char *)(void *)0;
    return res;
  }
}

