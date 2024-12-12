// #anon_enum_DBUS_BUS_SESSION=0_DBUS_BUS_SYSTEM=1_DBUS_BUS_STARTER=2
// file /usr/include/dbus-1.0/dbus/dbus-shared.h line 56
enum anonymous_7 { DBUS_BUS_SESSION=0, DBUS_BUS_SYSTEM=1, DBUS_BUS_STARTER=2 };

// #anon_enum_DBUS_HANDLER_RESULT_HANDLED=0_DBUS_HANDLER_RESULT_NOT_YET_HANDLED=1_DBUS_HANDLER_RESULT_NEED_MEMORY=2
// file /usr/include/dbus-1.0/dbus/dbus-shared.h line 66
enum anonymous_8 { DBUS_HANDLER_RESULT_HANDLED=0, DBUS_HANDLER_RESULT_NOT_YET_HANDLED=1, DBUS_HANDLER_RESULT_NEED_MEMORY=2 };

// #anon_enum_JackParamInt=1_JackParamUInt=2_JackParamChar=3_JackParamString=4_JackParamBool=5
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 40
enum anonymous_1 { JackParamInt=1, JackParamUInt=2, JackParamChar=3, JackParamString=4, JackParamBool=5 };

// tag-#anon#ST[*{S8}_S8_'buf'||U64'len'|]
// file ../common/ringbuffer.c line 30
struct anonymous;

// tag-#anon#ST[*{S8}_S8_'buf'||vU64'write_ptr'||vU64'read_ptr'||U64'size'||U64'size_mask'||S32'mlocked'||U32'_pad0'|]
// file ../common/ringbuffer.c line 36
struct anonymous_0;

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_20;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_18;

// tag-#anon#ST[*{cS8}_cS8_'dli_fname'||*{V}_V_'dli_fbase'||*{cS8}_cS8_'dli_sname'||*{V}_V_'dli_saddr'|]
// file /usr/include/dlfcn.h line 88
struct anonymous_22;

// tag-#anon#ST[*{cS8}_cS8_'uuid'||*{cS8}_cS8_'client_name'||*{cS8}_cS8_'command'||ENtag-JackSessionFlags#{U32}_U32_'flags'||U32'_pad0'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/session.h line 219
struct anonymous_9;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_11;

// tag-#anon#ST[ARR23{S64}_S64_'gregs'||*{SYM#tag-_libc_fpstate#}_SYM#tag-_libc_fpstate#_'fpregs'||ARR8{U64}_U64_'__reserved1'|]
// file /usr/include/x86_64-linux-gnu/sys/ucontext.h line 124
struct anonymous_10;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_14;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_17;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_16;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_12;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_15;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_19;

// tag-#anon#ST[SYM#tag-jackctl_parameter_value#'min'||SYM#tag-jackctl_parameter_value#'max'|]
// file ../dbus/params.h line 68
struct anonymous_2;

// tag-#anon#ST[U32'count'||U32'_pad0'||*{SYM#tag-jack_parameter_enum#}_SYM#tag-jack_parameter_enum#_'possible_values_array'|]
// file ../dbus/params.h line 74
struct anonymous_3;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_13;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_21;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_6;

// tag-#anon#UN[SYM#tag-#anon#ST[SYM#tag-jackctl_parameter_value#'min'||SYM#tag-jackctl_parameter_value#'max'|]#'range'||SYM#tag-#anon#ST[U32'count'||U32'_pad0'||*{SYM#tag-jack_parameter_enum#}_SYM#tag-jack_parameter_enum#_'possible_values_array'|]#'enumeration'|]
// file ../dbus/params.h line 66
union anonymous_4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_23;

// tag-#anon#UN[U8'byte'||U32'boolean'||S16'int16'||U16'uint16'||S32'int32'||U32'uint32'||S64'int64'||U64'uint64'||F64'doubl'||*{cS8}_cS8_'string'|]
// file ../dbus/jackdbus.h line 111
union anonymous_5;

// tag-DBusConnection
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 51
struct DBusConnection;

// tag-DBusError
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 43
struct DBusError;

// tag-DBusMessage
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 44
struct DBusMessage;

// tag-DBusMessageIter
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 46
struct DBusMessageIter;

// tag-DBusObjectPathVTable
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 53
struct DBusObjectPathVTable;

// tag-JackOptions
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 82
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackSessionEventType
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/session.h line 46
enum JackSessionEventType { JackSessionSave=1, JackSessionSaveAndQuit=2, JackSessionSaveTemplate=3 };

// tag-JackSessionFlags
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/session.h line 83
enum JackSessionFlags { JackSessionSaveError=1, JackSessionNeedTerminal=2 };

// tag-JackStatus
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 141
enum JackStatus { JackFailure=1, JackInvalidOption=2, JackNameNotUnique=4, JackServerStarted=8, JackServerFailed=16, JackServerError=32, JackNoSuchClient=64, JackLoadFailure=128, JackInitFailure=256, JackShmFailure=512, JackVersionError=1024, JackBackendError=2048, JackClientZombie=4096 };

// tag-XML_ParserStruct
// file /usr/include/expat.h line 24
struct XML_ParserStruct;

// tag-XML_Status
// file /usr/include/expat.h line 45
enum XML_Status { XML_STATUS_ERROR=0, XML_STATUS_OK=1, XML_STATUS_SUSPENDED=2 };

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_JSList
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jslist.h line 35
struct _JSList;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_jack_client
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 69
struct _jack_client;

// tag-_jack_params
// file ../dbus/params.h line 82
struct _jack_params;

// tag-_jack_port
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/types.h line 63
struct _jack_port;

// tag-_libc_fpstate
// file /usr/include/x86_64-linux-gnu/sys/ucontext.h line 104
struct _libc_fpstate;

// tag-_libc_fpxreg
// file /usr/include/x86_64-linux-gnu/sys/ucontext.h line 92
struct _libc_fpxreg;

// tag-_libc_xmmreg
// file /usr/include/x86_64-linux-gnu/sys/ucontext.h line 99
struct _libc_xmmreg;

// tag-jack_controller
// file ../dbus/controller_internal.h line 51
struct jack_controller;

// tag-jack_controller_patchbay
// file ../dbus/controller_iface_patchbay.c line 81
struct jack_controller_patchbay;

// tag-jack_controller_slave_driver
// file ../dbus/controller_internal.h line 33
struct jack_controller_slave_driver;

// tag-jack_dbus_interface_descriptor
// file ../dbus/jackdbus.h line 92
struct jack_dbus_interface_descriptor;

// tag-jack_dbus_interface_method_argument_descriptor
// file ../dbus/jackdbus.h line 66
struct jack_dbus_interface_method_argument_descriptor;

// tag-jack_dbus_interface_method_descriptor
// file ../dbus/jackdbus.h line 73
struct jack_dbus_interface_method_descriptor;

// tag-jack_dbus_interface_signal_argument_descriptor
// file ../dbus/jackdbus.h line 80
struct jack_dbus_interface_signal_argument_descriptor;

// tag-jack_dbus_interface_signal_descriptor
// file ../dbus/jackdbus.h line 86
struct jack_dbus_interface_signal_descriptor;

// tag-jack_dbus_method_call
// file ../dbus/jackdbus.h line 57
struct jack_dbus_method_call;

// tag-jack_dbus_object_descriptor
// file ../dbus/jackdbus.h line 105
struct jack_dbus_object_descriptor;

// tag-jack_graph
// file ../dbus/controller_iface_patchbay.c line 45
struct jack_graph;

// tag-jack_graph_client
// file ../dbus/controller_iface_patchbay.c line 53
struct jack_graph_client;

// tag-jack_graph_connection
// file ../dbus/controller_iface_patchbay.c line 73
struct jack_graph_connection;

// tag-jack_graph_port
// file ../dbus/controller_iface_patchbay.c line 62
struct jack_graph_port;

// tag-jack_parameter
// file ../dbus/params.h line 52
struct jack_parameter;

// tag-jack_parameter_container
// file ../dbus/params.c line 56
struct jack_parameter_container;

// tag-jack_parameter_enum
// file ../dbus/params.h line 46
struct jack_parameter_enum;

// tag-jack_parameter_vtable
// file ../dbus/params.h line 33
struct jack_parameter_vtable;

// tag-jack_params
// file ../dbus/params.c line 66
struct jack_params;

// tag-jack_session_pending_command
// file ../dbus/controller_internal.h line 41
struct jack_session_pending_command;

// tag-jackctl_driver
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 77
struct jackctl_driver;

// tag-jackctl_internal
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 80
struct jackctl_internal;

// tag-jackctl_parameter
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 83
struct jackctl_parameter;

// tag-jackctl_parameter_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 64
union jackctl_parameter_value;

// tag-jackctl_server
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 74
struct jackctl_server;

// tag-jackctl_sigmask
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 86
struct jackctl_sigmask;

// tag-list_head
// file ../dbus/list.h line 65
struct list_head;

// tag-parse_context
// file ../dbus/xml_expat.c line 50
struct parse_context;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rd_device
// file ../dbus/reserve.h line 38
struct rd_device;

// tag-reserved_audio_device
// file ../dbus/controller.c line 362
struct reserved_audio_device;

// tag-save_context
// file ../dbus/xml_write_raw.c line 54
struct save_context;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigaltstack
// file /usr/include/x86_64-linux-gnu/bits/sigstack.h line 49
struct sigaltstack;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-sysinfo
// file /usr/include/linux/sysinfo.h line 7
struct sysinfo;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-ucontext
// file /usr/include/x86_64-linux-gnu/sys/ucontext.h line 133
struct ucontext;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// INIT_LIST_HEAD
// file ../dbus/list.h line 74
static inline void INIT_LIST_HEAD(struct list_head *list);
// INIT_LIST_HEAD_link1
// file ../dbus/list.h line 74
static inline void INIT_LIST_HEAD_link1(struct list_head *list_link1);
// INIT_LIST_HEAD_link2
// file ../dbus/list.h line 74
static inline void INIT_LIST_HEAD_link2(struct list_head *list_link2);
// XML_ExpatVersion
// file /usr/include/expat.h line 994
const char * XML_ExpatVersion(void);
// XML_GetBuffer
// file /usr/include/expat.h line 781
void * XML_GetBuffer(struct XML_ParserStruct *, signed int);
// XML_ParseBuffer
// file /usr/include/expat.h line 784
enum XML_Status XML_ParseBuffer(struct XML_ParserStruct *, signed int, signed int);
// XML_ParserCreate
// file /usr/include/expat.h line 206
struct XML_ParserStruct * XML_ParserCreate(const char *);
// XML_ParserFree
// file /usr/include/expat.h line 986
void XML_ParserFree(struct XML_ParserStruct *);
// XML_SetCharacterDataHandler
// file /usr/include/expat.h line 547
void XML_SetCharacterDataHandler(struct XML_ParserStruct *, void (*)(void *, const char *, signed int));
// XML_SetElementHandler
// file /usr/include/expat.h line 534
void XML_SetElementHandler(struct XML_ParserStruct *, void (*)(void *, const char *, const char **), void (*)(void *, const char *));
// XML_SetUserData
// file /usr/include/expat.h line 671
void XML_SetUserData(struct XML_ParserStruct *, void *);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __cxa_demangle
// file ../dbus/sigsegv.c line 33
char * __cxa_demangle(const char *, char *, unsigned long int *, signed int *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __list_add
// file ../dbus/list.h line 86
static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next);
// __list_add_link1
// file ../dbus/list.h line 86
static inline void __list_add_link1(struct list_head *new_link1, struct list_head *prev_link1, struct list_head *next_link1);
// __list_add_link2
// file ../dbus/list.h line 86
static inline void __list_add_link2(struct list_head *new_link2, struct list_head *prev_link2, struct list_head *next_link2);
// __list_add_link3
// file ../dbus/list.h line 86
static inline void __list_add_link3(struct list_head *new_link3, struct list_head *prev_link3, struct list_head *next_link3);
// __list_del
// file ../dbus/list.h line 188
static inline void __list_del(struct list_head *prev, struct list_head *next);
// __list_del_link1
// file ../dbus/list.h line 188
static inline void __list_del_link1(struct list_head *prev_link1, struct list_head *next_link1);
// __list_del_link2
// file ../dbus/list.h line 188
static inline void __list_del_link2(struct list_head *prev_link2, struct list_head *next_link2);
// __list_del_link3
// file ../dbus/list.h line 188
static inline void __list_del_link3(struct list_head *prev_link3, struct list_head *next_link3);
// add_controlapi_param
// file ../dbus/params.c line 133
static _Bool add_controlapi_param(struct list_head *parent_list_ptr, struct jackctl_parameter *param);
// add_engine_driver_enum_constraint
// file ../dbus/params.c line 437
static _Bool add_engine_driver_enum_constraint(void *context, const char *name);
// add_variant
// file ../dbus/reserve.c line 93
static unsigned int add_variant(struct DBusMessage *m, signed int type, const void *data);
// append_node_name
// file ../dbus/controller_iface_configure.c line 287
static _Bool append_node_name(void *context, const char *name);
// append_parameter
// file ../dbus/controller_iface_configure.c line 368
static _Bool append_parameter(void *context, struct jack_parameter *param_ptr);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// controlapi_parameter_get_default_value
// file ../dbus/params.c line 96
union jackctl_parameter_value controlapi_parameter_get_default_value(void *obj);
// controlapi_parameter_get_value
// file ../dbus/params.c line 86
union jackctl_parameter_value controlapi_parameter_get_value(void *obj);
// controlapi_parameter_is_set
// file ../dbus/params.c line 76
static _Bool controlapi_parameter_is_set(void *obj);
// controlapi_parameter_reset
// file ../dbus/params.c line 81
static _Bool controlapi_parameter_reset(void *obj);
// controlapi_parameter_set_value
// file ../dbus/params.c line 91
_Bool controlapi_parameter_set_value(void *obj, union jackctl_parameter_value *value_ptr);
// create_container
// file ../dbus/params.c line 101
static struct jack_parameter_container * create_container(struct list_head *parent_list_ptr, const char *name);
// ctime_r
// file /usr/include/time.h line 276
extern char * ctime_r(const signed long int *, char *);
// dbus_bus_get
// file /usr/include/dbus-1.0/dbus/dbus-bus.h line 40
struct DBusConnection * dbus_bus_get(enum anonymous_7, struct DBusError *);
// dbus_bus_release_name
// file /usr/include/dbus-1.0/dbus/dbus-bus.h line 67
signed int dbus_bus_release_name(struct DBusConnection *, const char *, struct DBusError *);
// dbus_bus_request_name
// file /usr/include/dbus-1.0/dbus/dbus-bus.h line 62
signed int dbus_bus_request_name(struct DBusConnection *, const char *, unsigned int, struct DBusError *);
// dbus_connection_add_filter
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 295
unsigned int dbus_connection_add_filter(struct DBusConnection *, enum anonymous_8 (*)(struct DBusConnection *, struct DBusMessage *, void *), void *, void (*)(void *));
// dbus_connection_flush
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 200
void dbus_connection_flush(struct DBusConnection *);
// dbus_connection_read_write_dispatch
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 202
unsigned int dbus_connection_read_write_dispatch(struct DBusConnection *, signed int);
// dbus_connection_ref
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 179
struct DBusConnection * dbus_connection_ref(struct DBusConnection *);
// dbus_connection_register_object_path
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 403
unsigned int dbus_connection_register_object_path(struct DBusConnection *, const char *, const struct DBusObjectPathVTable *, void *);
// dbus_connection_remove_filter
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 300
void dbus_connection_remove_filter(struct DBusConnection *, enum anonymous_8 (*)(struct DBusConnection *, struct DBusMessage *, void *), void *);
// dbus_connection_send
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 224
unsigned int dbus_connection_send(struct DBusConnection *, struct DBusMessage *, unsigned int *);
// dbus_connection_send_with_reply_and_block
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 233
struct DBusMessage * dbus_connection_send_with_reply_and_block(struct DBusConnection *, struct DBusMessage *, signed int, struct DBusError *);
// dbus_connection_try_register_object_path
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 396
unsigned int dbus_connection_try_register_object_path(struct DBusConnection *, const char *, const struct DBusObjectPathVTable *, void *, struct DBusError *);
// dbus_connection_unref
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 181
void dbus_connection_unref(struct DBusConnection *);
// dbus_connection_unregister_object_path
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 421
unsigned int dbus_connection_unregister_object_path(struct DBusConnection *, const char *);
// dbus_error_free
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 67
void dbus_error_free(struct DBusError *);
// dbus_error_has_name
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 81
unsigned int dbus_error_has_name(const struct DBusError *, const char *);
// dbus_error_init
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 65
void dbus_error_init(struct DBusError *);
// dbus_error_is_set
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 84
unsigned int dbus_error_is_set(const struct DBusError *);
// dbus_message_append_args
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 189
unsigned int dbus_message_append_args(struct DBusMessage *, signed int, ...);
// dbus_message_append_args_valist
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 193
unsigned int dbus_message_append_args_valist(struct DBusMessage *, signed int, void **);
// dbus_message_get_args
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 197
unsigned int dbus_message_get_args(struct DBusMessage *, struct DBusError *, signed int, ...);
// dbus_message_get_args_valist
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 202
unsigned int dbus_message_get_args_valist(struct DBusMessage *, struct DBusError *, signed int, void **);
// dbus_message_get_interface
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 113
const char * dbus_message_get_interface(struct DBusMessage *);
// dbus_message_get_member
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 121
const char * dbus_message_get_member(struct DBusMessage *);
// dbus_message_get_signature
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 141
const char * dbus_message_get_signature(struct DBusMessage *);
// dbus_message_get_type
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 100
signed int dbus_message_get_type(struct DBusMessage *);
// dbus_message_is_method_call
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 148
unsigned int dbus_message_is_method_call(struct DBusMessage *, const char *, const char *);
// dbus_message_is_signal
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 152
unsigned int dbus_message_is_signal(struct DBusMessage *, const char *, const char *);
// dbus_message_iter_append_basic
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 249
unsigned int dbus_message_iter_append_basic(struct DBusMessageIter *, signed int, const void *);
// dbus_message_iter_close_container
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 263
unsigned int dbus_message_iter_close_container(struct DBusMessageIter *, struct DBusMessageIter *);
// dbus_message_iter_get_arg_type
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 220
signed int dbus_message_iter_get_arg_type(struct DBusMessageIter *);
// dbus_message_iter_get_basic
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 227
void dbus_message_iter_get_basic(struct DBusMessageIter *, void *);
// dbus_message_iter_get_signature
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 218
char * dbus_message_iter_get_signature(struct DBusMessageIter *);
// dbus_message_iter_has_next
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 214
unsigned int dbus_message_iter_has_next(struct DBusMessageIter *);
// dbus_message_iter_init
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 211
unsigned int dbus_message_iter_init(struct DBusMessage *, struct DBusMessageIter *);
// dbus_message_iter_init_append
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 246
void dbus_message_iter_init_append(struct DBusMessage *, struct DBusMessageIter *);
// dbus_message_iter_next
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 216
unsigned int dbus_message_iter_next(struct DBusMessageIter *);
// dbus_message_iter_open_container
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 258
unsigned int dbus_message_iter_open_container(struct DBusMessageIter *, signed int, const char *, struct DBusMessageIter *);
// dbus_message_iter_recurse
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 224
void dbus_message_iter_recurse(struct DBusMessageIter *, struct DBusMessageIter *);
// dbus_message_new_error
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 83
struct DBusMessage * dbus_message_new_error(struct DBusMessage *, const char *, const char *);
// dbus_message_new_error_printf
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 87
struct DBusMessage * dbus_message_new_error_printf(struct DBusMessage *, const char *, const char *, ...);
// dbus_message_new_method_call
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 72
struct DBusMessage * dbus_message_new_method_call(const char *, const char *, const char *, const char *);
// dbus_message_new_method_return
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 77
struct DBusMessage * dbus_message_new_method_return(struct DBusMessage *);
// dbus_message_new_signal
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 79
struct DBusMessage * dbus_message_new_signal(const char *, const char *, const char *);
// dbus_message_ref
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 96
struct DBusMessage * dbus_message_ref(struct DBusMessage *);
// dbus_message_unref
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 98
void dbus_message_unref(struct DBusMessage *);
// dbus_set_error
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 69
void dbus_set_error(struct DBusError *, const char *, const char *, ...);
// dbus_threads_init_default
// file /usr/include/dbus-1.0/dbus/dbus-threads.h line 183
unsigned int dbus_threads_init_default(void);
// dladdr
// file /usr/include/dlfcn.h line 98
extern signed int dladdr(const void *, struct anonymous_22 *);
// engine_driver_parameter_get_default_value
// file ../dbus/params.c line 426
union jackctl_parameter_value engine_driver_parameter_get_default_value(void *obj);
// engine_driver_parameter_get_value
// file ../dbus/params.c line 412
union jackctl_parameter_value engine_driver_parameter_get_value(void *obj);
// engine_driver_parameter_is_set
// file ../dbus/params.c line 395
static _Bool engine_driver_parameter_is_set(void *obj);
// engine_driver_parameter_reset
// file ../dbus/params.c line 400
static _Bool engine_driver_parameter_reset(void *obj);
// engine_driver_parameter_set_value
// file ../dbus/params.c line 421
_Bool engine_driver_parameter_set_value(void *obj, union jackctl_parameter_value *value_ptr);
// ensure_dir_exist
// file ../dbus/jackdbus.c line 644
_Bool ensure_dir_exist(const char *dirname, signed int mode);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// filter_handler
// file ../dbus/reserve.c line 294
static enum anonymous_8 filter_handler(struct DBusConnection *c, struct DBusMessage *m, void *userdata);
// find_container
// file ../dbus/params.c line 255
static struct jack_parameter_container * find_container(struct jack_parameter_container *parent_ptr, const char * const *address, signed int max_depth);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_containers
// file ../dbus/params.c line 232
static void free_containers(struct list_head *parent_list_ptr);
// free_params
// file ../dbus/params.c line 207
static void free_params(struct list_head *parent_list_ptr);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// init_driver
// file ../dbus/params.c line 378
static _Bool init_driver(struct jack_params *params_ptr);
// init_drivers
// file ../dbus/params.c line 323
static _Bool init_drivers(struct jack_params *params_ptr);
// init_engine
// file ../dbus/params.c line 318
static _Bool init_engine(struct jack_params *params_ptr);
// init_engine_driver_parameter
// file ../dbus/params.c line 445
static _Bool init_engine_driver_parameter(struct jack_params *params_ptr);
// init_internals
// file ../dbus/params.c line 353
static _Bool init_internals(struct jack_params *params_ptr);
// init_leaf
// file ../dbus/params.c line 292
static _Bool init_leaf(struct list_head *parent_list_ptr, const char *name, const struct _JSList *params_list, void *obj);
// jack_activate
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 211
signed int jack_activate(struct _jack_client *);
// jack_client_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 134
signed int jack_client_close(struct _jack_client *);
// jack_client_has_session_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/session.h line 265
signed int jack_client_has_session_callback(struct _jack_client *, const char *);
// jack_client_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 117
struct _jack_client * jack_client_open(const char *, enum JackOptions, enum JackStatus *, ...);
// jack_connect
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 993
signed int jack_connect(struct _jack_client *, const char *, const char *);
// jack_control_run_method
// file ../dbus/controller_iface_control.c line 67
static _Bool jack_control_run_method(struct jack_dbus_method_call *call, struct jack_dbus_interface_method_descriptor *methods);
// jack_controller_add_slave_driver
// file ../dbus/controller.c line 626
_Bool jack_controller_add_slave_driver(struct jack_controller *controller_ptr, const char *driver_name);
// jack_controller_check_slave_driver
// file ../dbus/controller.c line 72
static _Bool jack_controller_check_slave_driver(struct jack_controller *controller_ptr, const char *name);
// jack_controller_client_registration_callback
// file ../dbus/controller_iface_patchbay.c line 1540
void jack_controller_client_registration_callback(const char *client_name, signed int created, void *context);
// jack_controller_control_send_signal_server_started
// file ../dbus/controller_iface_control.c line 38
void jack_controller_control_send_signal_server_started();
// jack_controller_control_send_signal_server_stopped
// file ../dbus/controller_iface_control.c line 49
void jack_controller_control_send_signal_server_stopped();
// jack_controller_control_send_signal_session_state_changed
// file ../dbus/controller_iface_session_manager.c line 39
static void jack_controller_control_send_signal_session_state_changed(enum JackSessionEventType type, const char *target);
// jack_controller_create
// file ../dbus/controller.h line 24
void * jack_controller_create(struct DBusConnection *connection);
// jack_controller_dbus_connect_ports_by_id
// file ../dbus/controller_iface_patchbay.c line 1203
static void jack_controller_dbus_connect_ports_by_id(struct jack_dbus_method_call *call);
// jack_controller_dbus_connect_ports_by_name
// file ../dbus/controller_iface_patchbay.c line 1128
static void jack_controller_dbus_connect_ports_by_name(struct jack_dbus_method_call *call);
// jack_controller_dbus_disconnect_ports_by_connection_id
// file ../dbus/controller_iface_patchbay.c line 1412
static void jack_controller_dbus_disconnect_ports_by_connection_id(struct jack_dbus_method_call *call);
// jack_controller_dbus_disconnect_ports_by_id
// file ../dbus/controller_iface_patchbay.c line 1345
static void jack_controller_dbus_disconnect_ports_by_id(struct jack_dbus_method_call *call);
// jack_controller_dbus_disconnect_ports_by_name
// file ../dbus/controller_iface_patchbay.c line 1270
static void jack_controller_dbus_disconnect_ports_by_name(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_all_ports
// file ../dbus/controller_iface_patchbay.c line 797
static void jack_controller_dbus_get_all_ports(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_client_name_by_uuid
// file ../dbus/controller_iface_session_manager.c line 378
static void jack_controller_dbus_get_client_name_by_uuid(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_client_pid
// file ../dbus/controller_iface_patchbay.c line 1459
static void jack_controller_dbus_get_client_pid(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_graph
// file ../dbus/controller_iface_patchbay.c line 870
static void jack_controller_dbus_get_graph(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_parameter_address
// file ../dbus/controller_iface_configure.c line 264
static _Bool jack_controller_dbus_get_parameter_address(struct jack_dbus_method_call *call, const char **address_array);
// jack_controller_dbus_get_parameter_address_ex
// file ../dbus/controller_iface_configure.c line 180
static _Bool jack_controller_dbus_get_parameter_address_ex(struct jack_dbus_method_call *call, struct DBusMessageIter *iter_ptr, const char **address_array);
// jack_controller_dbus_get_parameter_constraint
// file ../dbus/controller_iface_configure.c line 550
static void jack_controller_dbus_get_parameter_constraint(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_parameter_info
// file ../dbus/controller_iface_configure.c line 492
static void jack_controller_dbus_get_parameter_info(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_parameter_value
// file ../dbus/controller_iface_configure.c line 762
static void jack_controller_dbus_get_parameter_value(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_parameters_info
// file ../dbus/controller_iface_configure.c line 421
static void jack_controller_dbus_get_parameters_info(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_session_state
// file ../dbus/controller_iface_session_manager.c line 468
static void jack_controller_dbus_get_session_state(struct jack_dbus_method_call *call);
// jack_controller_dbus_get_uuid_for_client_name
// file ../dbus/controller_iface_session_manager.c line 349
static void jack_controller_dbus_get_uuid_for_client_name(struct jack_dbus_method_call *call);
// jack_controller_dbus_has_session_callback
// file ../dbus/controller_iface_session_manager.c line 438
static void jack_controller_dbus_has_session_callback(struct jack_dbus_method_call *call);
// jack_controller_dbus_introspect
// file ../dbus/controller_iface_introspectable.c line 37
static void jack_controller_dbus_introspect(struct jack_dbus_method_call *call);
// jack_controller_dbus_read_container
// file ../dbus/controller_iface_configure.c line 294
static void jack_controller_dbus_read_container(struct jack_dbus_method_call *call);
// jack_controller_dbus_reserve_client_name
// file ../dbus/controller_iface_session_manager.c line 407
static void jack_controller_dbus_reserve_client_name(struct jack_dbus_method_call *call);
// jack_controller_dbus_reset_parameter_value
// file ../dbus/controller_iface_configure.c line 914
static void jack_controller_dbus_reset_parameter_value(struct jack_dbus_method_call *call);
// jack_controller_dbus_session_notify
// file ../dbus/controller_iface_session_manager.c line 259
static void jack_controller_dbus_session_notify(struct jack_dbus_method_call *call);
// jack_controller_dbus_set_parameter_value
// file ../dbus/controller_iface_configure.c line 816
static void jack_controller_dbus_set_parameter_value(struct jack_dbus_method_call *call);
// jack_controller_dbus_to_jack_variant
// file ../dbus/controller_iface_configure.c line 88
static _Bool jack_controller_dbus_to_jack_variant(signed int type, const union anonymous_5 *dbusv_ptr, union jackctl_parameter_value *value_ptr);
// jack_controller_deserialize_parameter_value
// file ../dbus/xml.c line 34
void jack_controller_deserialize_parameter_value(struct jack_controller *controller_ptr, const char * const *address, const char *option_value);
// jack_controller_destroy
// file ../dbus/controller.h line 32
void jack_controller_destroy(void *context);
// jack_controller_find_driver
// file ../dbus/controller.c line 51
static struct jackctl_driver * jack_controller_find_driver(struct jackctl_server *server, const char *driver_name);
// jack_controller_find_internal
// file ../dbus/controller.c line 147
static struct jackctl_internal * jack_controller_find_internal(struct jackctl_server *server, const char *internal_name);
// jack_controller_graph_order_callback
// file ../dbus/controller_iface_patchbay.c line 1502
static signed int jack_controller_graph_order_callback(void *context);
// jack_controller_introspect_init
// file ../dbus/controller_iface_introspectable.c line 81
void jack_controller_introspect_init();
// jack_controller_jack_to_dbus_variant
// file ../dbus/controller_iface_configure.c line 57
static _Bool jack_controller_jack_to_dbus_variant(enum anonymous_1 type, union jackctl_parameter_value *value_ptr, union anonymous_5 *dbusv_ptr);
// jack_controller_load_internal
// file ../dbus/controller.c line 729
_Bool jack_controller_load_internal(struct jack_controller *controller_ptr, const char *internal_name);
// jack_controller_load_slave_drivers
// file ../dbus/controller.c line 89
static _Bool jack_controller_load_slave_drivers(struct jack_controller *controller_ptr);
// jack_controller_patchbay_connect
// file ../dbus/controller_iface_patchbay.c line 744
static _Bool jack_controller_patchbay_connect(struct jack_dbus_method_call *dbus_call_ptr, struct jack_controller *controller_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr);
// jack_controller_patchbay_create_client
// file ../dbus/controller_iface_patchbay.c line 358
static struct jack_graph_client * jack_controller_patchbay_create_client(struct jack_controller_patchbay *patchbay_ptr, const char *client_name, unsigned long int client_name_len);
// jack_controller_patchbay_create_connection
// file ../dbus/controller_iface_patchbay.c line 632
static struct jack_graph_connection * jack_controller_patchbay_create_connection(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr);
// jack_controller_patchbay_destroy_client
// file ../dbus/controller_iface_patchbay.c line 407
static void jack_controller_patchbay_destroy_client(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_client *client_ptr);
// jack_controller_patchbay_destroy_client_by_name
// file ../dbus/controller_iface_patchbay.c line 426
static void jack_controller_patchbay_destroy_client_by_name(struct jack_controller_patchbay *patchbay_ptr, const char *client_name);
// jack_controller_patchbay_destroy_connection
// file ../dbus/controller_iface_patchbay.c line 672
static void jack_controller_patchbay_destroy_connection(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_connection *connection_ptr);
// jack_controller_patchbay_disconnect
// file ../dbus/controller_iface_patchbay.c line 769
static _Bool jack_controller_patchbay_disconnect(struct jack_dbus_method_call *dbus_call_ptr, struct jack_controller *controller_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr);
// jack_controller_patchbay_find_client
// file ../dbus/controller_iface_patchbay.c line 315
static struct jack_graph_client * jack_controller_patchbay_find_client(struct jack_controller_patchbay *patchbay_ptr, const char *client_name, unsigned long int client_name_len);
// jack_controller_patchbay_find_client_by_id
// file ../dbus/controller_iface_patchbay.c line 337
static struct jack_graph_client * jack_controller_patchbay_find_client_by_id(struct jack_controller_patchbay *patchbay_ptr, unsigned long int id);
// jack_controller_patchbay_find_client_port_by_name
// file ../dbus/controller_iface_patchbay.c line 558
static struct jack_graph_port * jack_controller_patchbay_find_client_port_by_name(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_client *client_ptr, const char *port_name);
// jack_controller_patchbay_find_connection
// file ../dbus/controller_iface_patchbay.c line 698
static struct jack_graph_connection * jack_controller_patchbay_find_connection(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr);
// jack_controller_patchbay_find_connection_by_id
// file ../dbus/controller_iface_patchbay.c line 723
static struct jack_graph_connection * jack_controller_patchbay_find_connection_by_id(struct jack_controller_patchbay *patchbay_ptr, unsigned long int connection_id);
// jack_controller_patchbay_find_port_by_full_name
// file ../dbus/controller_iface_patchbay.c line 580
static struct jack_graph_port * jack_controller_patchbay_find_port_by_full_name(struct jack_controller_patchbay *patchbay_ptr, const char *port_full_name);
// jack_controller_patchbay_find_port_by_id
// file ../dbus/controller_iface_patchbay.c line 537
static struct jack_graph_port * jack_controller_patchbay_find_port_by_id(struct jack_controller_patchbay *patchbay_ptr, unsigned long int port_id);
// jack_controller_patchbay_find_port_by_names
// file ../dbus/controller_iface_patchbay.c line 613
static struct jack_graph_port * jack_controller_patchbay_find_port_by_names(struct jack_controller_patchbay *patchbay_ptr, const char *client_name, const char *port_name);
// jack_controller_patchbay_init
// file ../dbus/controller_internal.h line 138
_Bool jack_controller_patchbay_init(struct jack_controller *controller_ptr);
// jack_controller_patchbay_new_port
// file ../dbus/controller_iface_patchbay.c line 444
static void jack_controller_patchbay_new_port(struct jack_controller_patchbay *patchbay_ptr, const char *port_full_name, unsigned int port_flags, unsigned int port_type);
// jack_controller_patchbay_remove_port
// file ../dbus/controller_iface_patchbay.c line 517
static void jack_controller_patchbay_remove_port(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_port *port_ptr);
// jack_controller_patchbay_send_signal_client_appeared
// file ../dbus/controller_iface_patchbay.c line 105
void jack_controller_patchbay_send_signal_client_appeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name);
// jack_controller_patchbay_send_signal_client_disappeared
// file ../dbus/controller_iface_patchbay.c line 125
void jack_controller_patchbay_send_signal_client_disappeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name);
// jack_controller_patchbay_send_signal_graph_changed
// file ../dbus/controller_iface_patchbay.c line 91
void jack_controller_patchbay_send_signal_graph_changed(unsigned long int new_graph_version);
// jack_controller_patchbay_send_signal_port_appeared
// file ../dbus/controller_iface_patchbay.c line 145
void jack_controller_patchbay_send_signal_port_appeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name, unsigned long int port_id, const char *port_name, unsigned int port_flags, unsigned int port_type);
// jack_controller_patchbay_send_signal_port_disappeared
// file ../dbus/controller_iface_patchbay.c line 177
void jack_controller_patchbay_send_signal_port_disappeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name, unsigned long int port_id, const char *port_name);
// jack_controller_patchbay_send_signal_port_renamed
// file ../dbus/controller_iface_patchbay.c line 285
void jack_controller_patchbay_send_signal_port_renamed(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name, unsigned long int port_id, const char *port_old_name, const char *port_new_name);
// jack_controller_patchbay_send_signal_ports_connected
// file ../dbus/controller_iface_patchbay.c line 203
void jack_controller_patchbay_send_signal_ports_connected(unsigned long int new_graph_version, unsigned long int client1_id, const char *client1_name, unsigned long int port1_id, const char *port1_name, unsigned long int client2_id, const char *client2_name, unsigned long int port2_id, const char *port2_name, unsigned long int connection_id);
// jack_controller_patchbay_send_signal_ports_disconnected
// file ../dbus/controller_iface_patchbay.c line 244
void jack_controller_patchbay_send_signal_ports_disconnected(unsigned long int new_graph_version, unsigned long int client1_id, const char *client1_name, unsigned long int port1_id, const char *port1_name, unsigned long int client2_id, const char *client2_name, unsigned long int port2_id, const char *port2_name, unsigned long int connection_id);
// jack_controller_patchbay_uninit
// file ../dbus/controller_internal.h line 142
void jack_controller_patchbay_uninit(struct jack_controller *controller_ptr);
// jack_controller_pending_save
// file ../dbus/controller.c line 813
void jack_controller_pending_save(struct jack_controller *controller_ptr);
// jack_controller_port_connect_callback
// file ../dbus/controller_iface_patchbay.c line 1590
void jack_controller_port_connect_callback(unsigned int port1_id, unsigned int port2_id, signed int connect, void *context);
// jack_controller_port_registration_callback
// file ../dbus/controller_iface_patchbay.c line 1558
void jack_controller_port_registration_callback(unsigned int port_id, signed int created, void *context);
// jack_controller_port_rename_callback
// file ../dbus/controller_iface_patchbay.c line 1650
signed int jack_controller_port_rename_callback(unsigned int port, const char *old_name, const char *new_name, void *context);
// jack_controller_process_session_command_thread
// file ../dbus/controller_iface_session_manager.c line 201
void * jack_controller_process_session_command_thread(void *context);
// jack_controller_remove_slave_driver
// file ../dbus/controller.c line 690
_Bool jack_controller_remove_slave_driver(struct jack_controller *controller_ptr, const char *driver_name);
// jack_controller_remove_slave_drivers
// file ../dbus/controller.c line 129
static void jack_controller_remove_slave_drivers(struct jack_controller *controller_ptr);
// jack_controller_run
// file ../dbus/controller.h line 28
void jack_controller_run(void *context);
// jack_controller_select_driver
// file ../dbus/controller.c line 169
_Bool jack_controller_select_driver(struct jack_controller *controller_ptr, const char *driver_name);
// jack_controller_serialize_parameter
// file ../dbus/xml_write_raw.c line 67
static _Bool jack_controller_serialize_parameter(void *context, struct jack_parameter *param_ptr);
// jack_controller_serialize_parameter_value
// file ../dbus/xml.c line 110
void jack_controller_serialize_parameter_value(struct jack_parameter *param_ptr, char *value_buffer);
// jack_controller_settings_callback_chrdata
// file ../dbus/xml_expat.c line 66
void jack_controller_settings_callback_chrdata(void *data, const char *s, signed int len);
// jack_controller_settings_callback_elend
// file ../dbus/xml_expat.c line 179
void jack_controller_settings_callback_elend(void *data, const char *el);
// jack_controller_settings_callback_elstart
// file ../dbus/xml_expat.c line 88
void jack_controller_settings_callback_elstart(void *data, const char *el, const char **attr);
// jack_controller_settings_init
// file ../dbus/jackdbus.h line 42
_Bool jack_controller_settings_init();
// jack_controller_settings_load
// file ../dbus/xml.h line 29
void jack_controller_settings_load(struct jack_controller *controller_ptr);
// jack_controller_settings_save
// file ../dbus/xml_write_raw.c line 109
_Bool jack_controller_settings_save(struct jack_controller *controller_ptr, void *dbus_call_context_ptr);
// jack_controller_settings_save_auto
// file ../dbus/xml.h line 33
void jack_controller_settings_save_auto(struct jack_controller *controller_ptr);
// jack_controller_settings_uninit
// file ../dbus/jackdbus.h line 45
void jack_controller_settings_uninit();
// jack_controller_settings_write_string
// file ../dbus/xml_write_raw.c line 39
_Bool jack_controller_settings_write_string(signed int fd, const char *string, void *dbus_call_context_ptr);
// jack_controller_start_server
// file ../dbus/controller.c line 193
_Bool jack_controller_start_server(struct jack_controller *controller_ptr, void *dbus_call_context_ptr);
// jack_controller_stop_server
// file ../dbus/controller.c line 287
_Bool jack_controller_stop_server(struct jack_controller *controller_ptr, void *dbus_call_context_ptr);
// jack_controller_switch_master
// file ../dbus/controller.c line 342
_Bool jack_controller_switch_master(struct jack_controller *controller_ptr, void *dbus_call_context_ptr);
// jack_controller_unload_internal
// file ../dbus/controller.c line 747
_Bool jack_controller_unload_internal(struct jack_controller *controller_ptr, const char *internal_name);
// jack_controller_unload_slave_drivers
// file ../dbus/controller.c line 113
static void jack_controller_unload_slave_drivers(struct jack_controller *controller_ptr);
// jack_controller_xrun
// file ../dbus/controller.c line 185
static signed int jack_controller_xrun(void *arg);
// jack_cpu_load
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 703
float jack_cpu_load(struct _jack_client *);
// jack_dbus_construct_method_return_array_of_strings
// file ../dbus/jackdbus.c line 516
void jack_dbus_construct_method_return_array_of_strings(struct jack_dbus_method_call *call, unsigned int num_members, const char **array);
// jack_dbus_construct_method_return_empty
// file ../dbus/jackdbus.c line 447
void jack_dbus_construct_method_return_empty(struct jack_dbus_method_call *call);
// jack_dbus_construct_method_return_parameter
// file ../dbus/controller_iface_configure.c line 133
static void jack_dbus_construct_method_return_parameter(struct jack_dbus_method_call *call, unsigned int is_set, signed int type, const char *signature, union anonymous_5 default_value, union anonymous_5 value);
// jack_dbus_construct_method_return_single
// file ../dbus/jackdbus.c line 468
void jack_dbus_construct_method_return_single(struct jack_dbus_method_call *call, signed int type, union anonymous_5 arg);
// jack_dbus_error
// file ../dbus/jackdbus.c line 791
void jack_dbus_error(void *dbus_call_context_ptr, const char *error_name, const char *format, ...);
// jack_dbus_error_callback
// file ../dbus/jackdbus.c line 627
void jack_dbus_error_callback(const char *msg);
// jack_dbus_get_method_args
// file ../dbus/jackdbus.c line 284
_Bool jack_dbus_get_method_args(struct jack_dbus_method_call *call, signed int type, ...);
// jack_dbus_get_method_args_string_and_variant
// file ../dbus/jackdbus.c line 316
_Bool jack_dbus_get_method_args_string_and_variant(struct jack_dbus_method_call *call, const char **arg1, union anonymous_5 *arg2, signed int *type_ptr);
// jack_dbus_get_method_args_two_strings_and_variant
// file ../dbus/jackdbus.c line 356
_Bool jack_dbus_get_method_args_two_strings_and_variant(struct jack_dbus_method_call *call, const char **arg1, const char **arg2, union anonymous_5 *arg3, signed int *type_ptr);
// jack_dbus_info_callback
// file ../dbus/jackdbus.c line 605
void jack_dbus_info_callback(const char *msg);
// jack_dbus_log_open
// file ../dbus/jackdbus.c line 561
static _Bool jack_dbus_log_open(void);
// jack_dbus_message_append_variant
// file ../dbus/jackdbus.c line 406
_Bool jack_dbus_message_append_variant(struct DBusMessageIter *iter, signed int type, const char *signature, union anonymous_5 *arg);
// jack_dbus_message_handler
// file ../dbus/jackdbus.c line 148
enum anonymous_8 jack_dbus_message_handler(struct DBusConnection *connection, struct DBusMessage *message, void *data);
// jack_dbus_message_handler_unregister
// file ../dbus/jackdbus.c line 242
void jack_dbus_message_handler_unregister(struct DBusConnection *connection, void *data);
// jack_dbus_only_error
// file ../dbus/jackdbus.c line 823
void jack_dbus_only_error(void *dbus_call_context_ptr, const char *error_name, const char *format, ...);
// jack_dbus_run_method
// file ../dbus/jackdbus.c line 256
_Bool jack_dbus_run_method(struct jack_dbus_method_call *call, struct jack_dbus_interface_method_descriptor *methods);
// jack_dbus_send_method_return
// file ../dbus/jackdbus.c line 105
static void jack_dbus_send_method_return(struct jack_dbus_method_call *call);
// jack_dbus_send_signal
// file ../dbus/jackdbus.c line 58
void jack_dbus_send_signal(const char *sender_object_path, const char *iface, const char *signal_name, signed int first_arg_type, ...);
// jack_deactivate
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 220
signed int jack_deactivate(struct _jack_client *);
// jack_disconnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 1010
signed int jack_disconnect(struct _jack_client *, const char *, const char *);
// jack_error
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 597
void jack_error(const char *, ...);

//

// jack_get_buffer_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 683
unsigned int jack_get_buffer_size(struct _jack_client *);
// jack_get_client_name_by_uuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 170
char * jack_get_client_name_by_uuid(struct _jack_client *, const char *);
// jack_get_client_pid
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 225
signed int jack_get_client_pid(const char *);
// jack_get_ports
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 1282
const char ** jack_get_ports(struct _jack_client *, const char *, const char *, unsigned long int);
// jack_get_sample_rate
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 672
unsigned int jack_get_sample_rate(struct _jack_client *);
// jack_get_uuid_for_client_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 158
char * jack_get_uuid_for_client_name(struct _jack_client *, const char *);
// jack_get_version_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 77
const char * jack_get_version_string();
// jack_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 607
void jack_info(const char *, ...);
// jack_is_realtime
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 242
signed int jack_is_realtime(struct _jack_client *);
// jack_log
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 618
void jack_log(const char *, ...);
// jack_params_add_parameter
// file ../dbus/params.h line 109
void jack_params_add_parameter(struct _jack_params *params, const char * const *address, _Bool end, struct jack_parameter *param_ptr);
// jack_params_check_address
// file ../dbus/params.c line 566
_Bool jack_params_check_address(struct _jack_params *params, const char * const *address, _Bool want_leaf);
// jack_params_create
// file ../dbus/params.h line 84
struct _jack_params * jack_params_create(struct jackctl_server *server);
// jack_params_destroy
// file ../dbus/params.h line 85
void jack_params_destroy(struct _jack_params *params);
// jack_params_get_driver
// file ../dbus/params.h line 88
struct jackctl_driver * jack_params_get_driver(struct _jack_params *params);
// jack_params_get_parameter
// file ../dbus/params.c line 666
struct jack_parameter * jack_params_get_parameter(struct _jack_params *params, const char * const *address);
// jack_params_is_leaf_container
// file ../dbus/params.c line 584
_Bool jack_params_is_leaf_container(struct _jack_params *params, const char * const *address);
// jack_params_iterate_container
// file ../dbus/params.c line 599
_Bool jack_params_iterate_container(struct _jack_params *params, const char * const *address, _Bool (*callback)(void *, const char *), void *context);

//

// jack_params_iterate_params
// file ../dbus/params.c line 637
_Bool jack_params_iterate_params(struct _jack_params *params, const char * const *address, _Bool (*callback)(void *, struct jack_parameter *), void *context);

//

// jack_params_set_driver
// file ../dbus/params.h line 87
_Bool jack_params_set_driver(struct _jack_params *params, const char *name);
// jack_port_by_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 1297
struct _jack_port * jack_port_by_id(struct _jack_client *, unsigned int);
// jack_port_by_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 1292
struct _jack_port * jack_port_by_name(struct _jack_client *, const char *);
// jack_port_flags
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 802
signed int jack_port_flags(const struct _jack_port *);
// jack_port_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 789
const char * jack_port_name(const struct _jack_port *);
// jack_port_type_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 813
unsigned int jack_port_type_id(const struct _jack_port *);
// jack_reserve_client_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/session.h line 254
signed int jack_reserve_client_name(struct _jack_client *, const char *, const char *);
// jack_ringbuffer_create
// file ../common/ringbuffer.c line 68
struct anonymous_0 * jack_ringbuffer_create(unsigned long int sz);
// jack_ringbuffer_free
// file ../common/ringbuffer.c line 96
void jack_ringbuffer_free(struct anonymous_0 *rb);
// jack_ringbuffer_get_read_vector
// file ../common/ringbuffer.c line 326
void jack_ringbuffer_get_read_vector(const struct anonymous_0 *rb, struct anonymous *vec);
// jack_ringbuffer_get_write_vector
// file ../common/ringbuffer.c line 370
void jack_ringbuffer_get_write_vector(const struct anonymous_0 *rb, struct anonymous *vec);
// jack_ringbuffer_mlock
// file ../common/ringbuffer.c line 110
signed int jack_ringbuffer_mlock(struct anonymous_0 *rb);
// jack_ringbuffer_peek
// file ../common/ringbuffer.c line 228
unsigned long int jack_ringbuffer_peek(struct anonymous_0 *rb, char *dest, unsigned long int cnt);
// jack_ringbuffer_read
// file ../common/ringbuffer.c line 189
unsigned long int jack_ringbuffer_read(struct anonymous_0 *rb, char *dest, unsigned long int cnt);
// jack_ringbuffer_read_advance
// file ../common/ringbuffer.c line 305
void jack_ringbuffer_read_advance(struct anonymous_0 *rb, unsigned long int cnt);
// jack_ringbuffer_read_space
// file ../common/ringbuffer.c line 150
unsigned long int jack_ringbuffer_read_space(const struct anonymous_0 *rb);
// jack_ringbuffer_reset
// file ../common/ringbuffer.c line 125
void jack_ringbuffer_reset(struct anonymous_0 *rb);
// jack_ringbuffer_reset_size
// file ../common/ringbuffer.c line 136
void jack_ringbuffer_reset_size(struct anonymous_0 *rb, unsigned long int sz);
// jack_ringbuffer_write
// file ../common/ringbuffer.c line 268
unsigned long int jack_ringbuffer_write(struct anonymous_0 *rb, const char *src, unsigned long int cnt);
// jack_ringbuffer_write_advance
// file ../common/ringbuffer.c line 314
void jack_ringbuffer_write_advance(struct anonymous_0 *rb, unsigned long int cnt);
// jack_ringbuffer_write_space
// file ../common/ringbuffer.c line 169
unsigned long int jack_ringbuffer_write_space(const struct anonymous_0 *rb);
// jack_session_commands_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/session.h line 242
void jack_session_commands_free(struct anonymous_9 *);
// jack_session_notify
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/session.h line 233
struct anonymous_9 * jack_session_notify(struct _jack_client *, const char *, enum JackSessionEventType, const char *);
// jack_set_buffer_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 666
signed int jack_set_buffer_size(struct _jack_client *, unsigned int);
// jack_set_client_registration_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 472
signed int jack_set_client_registration_callback(struct _jack_client *, void (*)(const char *, signed int, void *), void *);
// jack_set_error_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 1432
void jack_set_error_function(void (*)(const char *));
// jack_set_graph_order_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 540
signed int jack_set_graph_order_callback(struct _jack_client *, signed int (*)(void *), void *);
// jack_set_info_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 1451
void jack_set_info_function(void (*)(const char *));
// jack_set_port_connect_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 506
signed int jack_set_port_connect_callback(struct _jack_client *, void (*)(unsigned int, unsigned int, signed int, void *), void *);
// jack_set_port_registration_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 489
signed int jack_set_port_registration_callback(struct _jack_client *, void (*)(unsigned int, signed int, void *), void *);
// jack_set_port_rename_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 523
signed int jack_set_port_rename_callback(struct _jack_client *, void (*)(unsigned int, const char *, const char *, void *), void *);
// jack_set_xrun_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 557
signed int jack_set_xrun_callback(struct _jack_client *, signed int (*)(void *), void *);
// jackctl_driver_get_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 309
const char * jackctl_driver_get_name(struct jackctl_driver *);
// jackctl_driver_get_parameters
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 334
const struct _JSList * jackctl_driver_get_parameters(struct jackctl_driver *);
// jackctl_internal_get_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 361
const char * jackctl_internal_get_name(struct jackctl_internal *);
// jackctl_internal_get_parameters
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 374
const struct _JSList * jackctl_internal_get_parameters(struct jackctl_internal *);
// jackctl_parameter_constraint_is_fake_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 588
_Bool jackctl_parameter_constraint_is_fake_value(struct jackctl_parameter *);
// jackctl_parameter_constraint_is_strict
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 575
_Bool jackctl_parameter_constraint_is_strict(struct jackctl_parameter *);
// jackctl_parameter_get_default_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 491
union jackctl_parameter_value jackctl_parameter_get_default_value(struct jackctl_parameter *);
// jackctl_parameter_get_enum_constraint_description
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 549
const char * jackctl_parameter_get_enum_constraint_description(struct jackctl_parameter *, unsigned int);
// jackctl_parameter_get_enum_constraint_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 536
union jackctl_parameter_value jackctl_parameter_get_enum_constraint_value(struct jackctl_parameter *, unsigned int);
// jackctl_parameter_get_enum_constraints_count
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 524
unsigned int jackctl_parameter_get_enum_constraints_count(struct jackctl_parameter *);
// jackctl_parameter_get_long_description
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 410
const char * jackctl_parameter_get_long_description(struct jackctl_parameter *);
// jackctl_parameter_get_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 386
const char * jackctl_parameter_get_name(struct jackctl_parameter *);
// jackctl_parameter_get_range_constraint
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 561
void jackctl_parameter_get_range_constraint(struct jackctl_parameter *, union jackctl_parameter_value *, union jackctl_parameter_value *);
// jackctl_parameter_get_short_description
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 398
const char * jackctl_parameter_get_short_description(struct jackctl_parameter *);
// jackctl_parameter_get_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 421
enum anonymous_1 jackctl_parameter_get_type(struct jackctl_parameter *);
// jackctl_parameter_get_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 467
union jackctl_parameter_value jackctl_parameter_get_value(struct jackctl_parameter *);
// jackctl_parameter_has_enum_constraint
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 513
_Bool jackctl_parameter_has_enum_constraint(struct jackctl_parameter *);
// jackctl_parameter_has_range_constraint
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 502
_Bool jackctl_parameter_has_range_constraint(struct jackctl_parameter *);
// jackctl_parameter_is_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 445
_Bool jackctl_parameter_is_set(struct jackctl_parameter *);
// jackctl_parameter_reset
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 456
_Bool jackctl_parameter_reset(struct jackctl_parameter *);
// jackctl_parameter_set_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 479
_Bool jackctl_parameter_set_value(struct jackctl_parameter *, union jackctl_parameter_value *);
// jackctl_server_add_slave
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 270
_Bool jackctl_server_add_slave(struct jackctl_server *, struct jackctl_driver *);
// jackctl_server_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 189
_Bool jackctl_server_close(struct jackctl_server *);
// jackctl_server_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 133
struct jackctl_server * jackctl_server_create(_Bool (*)(const char *), void (*)(const char *));
// jackctl_server_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 143
void jackctl_server_destroy(struct jackctl_server *);
// jackctl_server_get_drivers_list
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 202
const struct _JSList * jackctl_server_get_drivers_list(struct jackctl_server *);
// jackctl_server_get_internals_list
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 228
const struct _JSList * jackctl_server_get_internals_list(struct jackctl_server *);
// jackctl_server_get_parameters
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 215
const struct _JSList * jackctl_server_get_parameters(struct jackctl_server *);
// jackctl_server_load_internal
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 241
_Bool jackctl_server_load_internal(struct jackctl_server *, struct jackctl_internal *);
// jackctl_server_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 155
_Bool jackctl_server_open(struct jackctl_server *, struct jackctl_driver *);
// jackctl_server_remove_slave
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 284
_Bool jackctl_server_remove_slave(struct jackctl_server *, struct jackctl_driver *);
// jackctl_server_start
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 167
_Bool jackctl_server_start(struct jackctl_server *);
// jackctl_server_stop
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 178
_Bool jackctl_server_stop(struct jackctl_server *);
// jackctl_server_switch_master
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 296
_Bool jackctl_server_switch_master(struct jackctl_server *, struct jackctl_driver *);
// jackctl_server_unload_internal
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 255
_Bool jackctl_server_unload_internal(struct jackctl_server *, struct jackctl_internal *);
// jackctl_setup_signals
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/control.h line 110
struct jackctl_sigmask * jackctl_setup_signals(unsigned int);
// list_add
// file ../dbus/list.h line 104
static inline void list_add(struct list_head *new, struct list_head *head);
// list_add_tail
// file ../dbus/list.h line 117
static inline void list_add_tail(struct list_head *new, struct list_head *head);
// list_add_tail_link1
// file ../dbus/list.h line 117
static inline void list_add_tail_link1(struct list_head *new_link1, struct list_head *head_link1);
// list_add_tail_link2
// file ../dbus/list.h line 117
static inline void list_add_tail_link2(struct list_head *new_link2, struct list_head *head_link2);
// list_add_tail_link3
// file ../dbus/list.h line 117
static inline void list_add_tail_link3(struct list_head *new_link3, struct list_head *head_link3);
// list_del
// file ../dbus/list.h line 200
static inline void list_del(struct list_head *entry);
// list_del_link1
// file ../dbus/list.h line 200
static inline void list_del_link1(struct list_head *entry_link1);
// list_del_link2
// file ../dbus/list.h line 200
static inline void list_del_link2(struct list_head *entry_link2);
// list_del_link3
// file ../dbus/list.h line 200
static inline void list_del_link3(struct list_head *entry_link3);
// list_empty
// file ../dbus/list.h line 292
static inline signed int list_empty(struct list_head *head);
// list_empty_link1
// file ../dbus/list.h line 292
static inline signed int list_empty_link1(struct list_head *head_link1);
// list_empty_link2
// file ../dbus/list.h line 292
static inline signed int list_empty_link2(struct list_head *head_link2);
// list_empty_link3
// file ../dbus/list.h line 292
static inline signed int list_empty_link3(struct list_head *head_link3);
// log_init
// file ../dbus/jackdbus.c line 755
static _Bool log_init(void);
// log_uninit
// file ../dbus/jackdbus.c line 780
static void log_uninit(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// object_handler
// file ../dbus/reserve.c line 118
static enum anonymous_8 object_handler(struct DBusConnection *c, struct DBusMessage *m, void *userdata);
// on_device_acquire
// file ../dbus/controller.c line 375
static _Bool on_device_acquire(const char *device_name);
// on_device_release
// file ../dbus/controller.c line 405
static void on_device_release(const char *device_name);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// pathname_cat
// file ../dbus/jackdbus.c line 676
char * pathname_cat(const char *pathname_a, const char *pathname_b);
// paths_init
// file ../dbus/jackdbus.c line 696
_Bool paths_init();
// paths_uninit
// file ../dbus/jackdbus.c line 749
void paths_uninit();
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_destroy
// file /usr/include/pthread.h line 292
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_23 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_23 *, const union anonymous_6 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_23 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_23 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous_6 *);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous_6 *, signed int);
// rd_acquire
// file ../dbus/reserve.h line 57
signed int rd_acquire(struct rd_device **_d, struct DBusConnection *connection, const char *device_name, const char *application_name, signed int priority, signed int (*request_cb)(struct rd_device *, signed int), struct DBusError *error);

//

// rd_get_userdata
// file ../dbus/reserve.c line 670
void * rd_get_userdata(struct rd_device *d);
// rd_release
// file ../dbus/reserve.h line 67
void rd_release(struct rd_device *d);
// rd_set_application_device_name
// file ../dbus/reserve.c line 645
signed int rd_set_application_device_name(struct rd_device *d, const char *n);
// rd_set_userdata
// file ../dbus/reserve.c line 661
void rd_set_userdata(struct rd_device *d, void *userdata);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// send_session_notify_reply
// file ../dbus/controller_iface_session_manager.c line 97
static void send_session_notify_reply(struct jack_session_pending_command *pending_cmd_ptr, struct anonymous_9 *commands);
// serialize_modules
// file ../dbus/xml_write_raw.c line 87
_Bool serialize_modules(void *context, const char *name);
// setup_sigsegv
// file ../dbus/sigsegv.h line 7
signed int setup_sigsegv();
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// signal_segv
// file ../dbus/sigsegv.c line 59
static void signal_segv(signed int signum, struct anonymous_12 *info, void *ptr);
// slave_drivers_parameter_get_default_value
// file ../dbus/controller.c line 512
static union jackctl_parameter_value slave_drivers_parameter_get_default_value(void *obj);
// slave_drivers_parameter_get_value
// file ../dbus/controller.c line 445
static union jackctl_parameter_value slave_drivers_parameter_get_value(void *obj);
// slave_drivers_parameter_is_set
// file ../dbus/controller.c line 427
static _Bool slave_drivers_parameter_is_set(void *obj);
// slave_drivers_parameter_reset
// file ../dbus/controller.c line 432
static _Bool slave_drivers_parameter_reset(void *obj);
// slave_drivers_parameter_set_value
// file ../dbus/controller.c line 450
static _Bool slave_drivers_parameter_set_value(void *obj, union jackctl_parameter_value *value_ptr);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// start_detached_thread
// file ../dbus/controller_iface_session_manager.c line 62
static _Bool start_detached_thread(void * (*start_routine)(void *), void *arg);
// start_detached_thread::start_routine_object
//
void * start_routine_object(void *);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
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
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtok_r
// file /usr/include/string.h line 358
extern char * strtok_r(char *, const char *, char ** restrict );
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// sysinfo
// file /usr/include/x86_64-linux-gnu/sys/sysinfo.h line 29
extern signed int sysinfo(struct sysinfo *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// vsprintf
// file /usr/include/stdio.h line 379
extern signed int vsprintf(char *, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_line
// file ../dbus/controller_iface_introspectable.c line 73
static void write_line(const char *line);
// write_line_format
// file ../dbus/controller_iface_introspectable.c line 62
static void write_line_format(const char *format, ...);

struct anonymous
{
  // buf
  char *buf;
  // len
  unsigned long int len;
};

struct anonymous_0
{
  // buf
  char *buf;
  // write_ptr
  volatile unsigned long int write_ptr;
  // read_ptr
  volatile unsigned long int read_ptr;
  // size
  unsigned long int size;
  // size_mask
  unsigned long int size_mask;
  // mlocked
  signed int mlocked;
};

struct anonymous_20
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_18
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_22
{
  // dli_fname
  const char *dli_fname;
  // dli_fbase
  void *dli_fbase;
  // dli_sname
  const char *dli_sname;
  // dli_saddr
  void *dli_saddr;
};

struct anonymous_9
{
  // uuid
  const char *uuid;
  // client_name
  const char *client_name;
  // command
  const char *command;
  // flags
  enum JackSessionFlags flags;
};

struct anonymous_11
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_10
{
  // gregs
  signed long long int gregs[23l];
  // fpregs
  struct _libc_fpstate *fpregs;
  // __reserved1
  unsigned long long int __reserved1[8l];
};

struct anonymous_14
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_17
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_status
  signed int si_status;
  // si_utime
  signed long int si_utime;
  // si_stime
  signed long int si_stime;
};

union sigval
{
  // sival_int
  signed int sival_int;
  // sival_ptr
  void *sival_ptr;
};

struct anonymous_16
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_15
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_19
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_21
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_14 _kill;
  // _timer
  struct anonymous_15 _timer;
  // _rt
  struct anonymous_16 _rt;
  // _sigchld
  struct anonymous_17 _sigchld;
  // _sigfault
  struct anonymous_18 _sigfault;
  // _sigpoll
  struct anonymous_19 _sigpoll;
  // _sigsys
  struct anonymous_20 _sigsys;
};

struct anonymous_12
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_21 _sifields;
};

union jackctl_parameter_value
{
  // ui
  unsigned int ui;
  // i
  signed int i;
  // c
  char c;
  // str
  char str[128l];
  // b
  _Bool b;
};

struct anonymous_2
{
  // min
  union jackctl_parameter_value min;
  // max
  union jackctl_parameter_value max;
};

struct anonymous_3
{
  // count
  unsigned int count;
  // possible_values_array
  struct jack_parameter_enum *possible_values_array;
};

union anonymous_13
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_12 *, void *);
};

union anonymous_6
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_4
{
  // range
  struct anonymous_2 range;
  // enumeration
  struct anonymous_3 enumeration;
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

union anonymous_23
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous_5
{
  // byte
  unsigned char byte;
  // boolean
  unsigned int boolean;
  // int16
  signed short int int16;
  // uint16
  unsigned short int uint16;
  // int32
  signed int int32;
  // uint32
  unsigned int uint32;
  // int64
  signed long int int64;
  // uint64
  unsigned long int uint64;
  // doubl
  double doubl;
  // string
  const char *string;
};

struct DBusError
{
  // name
  const char *name;
  // message
  const char *message;
  // dummy1
  unsigned int dummy1 : 1;
  // dummy2
  unsigned int dummy2 : 1;
  // dummy3
  unsigned int dummy3 : 1;
  // dummy4
  unsigned int dummy4 : 1;
  // dummy5
  unsigned int dummy5 : 1;
  // padding1
  void *padding1;
};

struct DBusMessageIter
{
  // dummy1
  void *dummy1;
  // dummy2
  void *dummy2;
  // dummy3
  unsigned int dummy3;
  // dummy4
  signed int dummy4;
  // dummy5
  signed int dummy5;
  // dummy6
  signed int dummy6;
  // dummy7
  signed int dummy7;
  // dummy8
  signed int dummy8;
  // dummy9
  signed int dummy9;
  // dummy10
  signed int dummy10;
  // dummy11
  signed int dummy11;
  // pad1
  signed int pad1;
  // pad2
  signed int pad2;
  // pad3
  void *pad3;
};

struct DBusObjectPathVTable
{
  // unregister_function
  void (*unregister_function)(struct DBusConnection *, void *);
  // message_function
  enum anonymous_8 (*message_function)(struct DBusConnection *, struct DBusMessage *, void *);
  // dbus_internal_pad1
  void (*dbus_internal_pad1)(void *);
  // dbus_internal_pad2
  void (*dbus_internal_pad2)(void *);
  // dbus_internal_pad3
  void (*dbus_internal_pad3)(void *);
  // dbus_internal_pad4
  void (*dbus_internal_pad4)(void *);
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

struct _JSList
{
  // data
  void *data;
  // next
  struct _JSList *next;
};

struct _jack_params
{
  // unused
  signed int unused;
};

struct _libc_fpxreg
{
  // significand
  unsigned short int significand[4l];
  // exponent
  unsigned short int exponent;
  // padding
  unsigned short int padding[3l];
};

struct _libc_xmmreg
{
  // element
  unsigned int element[4l];
};

struct _libc_fpstate
{
  // cwd
  unsigned short int cwd;
  // swd
  unsigned short int swd;
  // ftw
  unsigned short int ftw;
  // fop
  unsigned short int fop;
  // rip
  unsigned long int rip;
  // rdp
  unsigned long int rdp;
  // mxcsr
  unsigned int mxcsr;
  // mxcr_mask
  unsigned int mxcr_mask;
  // _st
  struct _libc_fpxreg _st[8l];
  // _xmm
  struct _libc_xmmreg _xmm[16l];
  // padding
  unsigned int padding[24l];
};

struct list_head
{
  // next
  struct list_head *next;
  // prev
  struct list_head *prev;
};

struct jack_parameter_vtable
{
  // is_set
  _Bool (*is_set)(void *);
  // reset
  _Bool (*reset)(void *);
  // get_value
  union jackctl_parameter_value (*get_value)(void *);
  // set_value
  _Bool (*set_value)(void *, union jackctl_parameter_value *);
  // get_default_value
  union jackctl_parameter_value (*get_default_value)(void *);
};

struct jack_parameter
{
  // obj
  void *obj;
  // vtable
  struct jack_parameter_vtable vtable;
  // siblings
  struct list_head siblings;
  // ext
  _Bool ext;
  // type
  enum anonymous_1 type;
  // name
  const char *name;
  // short_decr
  const char *short_decr;
  // long_descr
  const char *long_descr;
  // constraint_flags
  unsigned int constraint_flags;
  // constraint_range
  _Bool constraint_range;
  // constraint
  union anonymous_4 constraint;
};

struct jack_dbus_object_descriptor
{
  // interfaces
  struct jack_dbus_interface_descriptor **interfaces;
  // context
  void *context;
};

struct jack_controller
{
  // server
  struct jackctl_server *server;
  // params
  struct _jack_params *params;
  // patchbay_context
  void *patchbay_context;
  // started
  _Bool started;
  // client
  struct _jack_client *client;
  // xruns
  unsigned int xruns;
  // slave_drivers
  struct list_head slave_drivers;
  // slave_drivers_set
  _Bool slave_drivers_set;
  // slave_drivers_vparam
  struct jack_parameter slave_drivers_vparam;
  // slave_drivers_vparam_value
  union jackctl_parameter_value slave_drivers_vparam_value;
  // dbus_descriptor
  struct jack_dbus_object_descriptor dbus_descriptor;
  // lock
  union anonymous_23 lock;
  // session_pending_commands
  struct list_head session_pending_commands;
  // pending_save
  signed long int pending_save;
};

struct jack_graph
{
  // version
  unsigned long int version;
  // clients
  struct list_head clients;
  // ports
  struct list_head ports;
  // connections
  struct list_head connections;
};

struct jack_controller_patchbay
{
  // lock
  union anonymous_23 lock;
  // graph
  struct jack_graph graph;
  // next_client_id
  unsigned long int next_client_id;
  // next_port_id
  unsigned long int next_port_id;
  // next_connection_id
  unsigned long int next_connection_id;
};

struct jack_controller_slave_driver
{
  // siblings
  struct list_head siblings;
  // name
  char *name;
  // handle
  struct jackctl_driver *handle;
  // loaded
  _Bool loaded;
};

struct jack_dbus_interface_descriptor
{
  // name
  const char *name;
  // handler
  _Bool (*handler)(struct jack_dbus_method_call *, struct jack_dbus_interface_method_descriptor *);
  // methods
  struct jack_dbus_interface_method_descriptor *methods;
  // signals
  struct jack_dbus_interface_signal_descriptor *signals;
};

struct jack_dbus_interface_method_argument_descriptor
{
  // name
  const char *name;
  // type
  const char *type;
  // direction_out
  _Bool direction_out;
};

struct jack_dbus_interface_method_descriptor
{
  // name
  const char *name;
  // arguments
  struct jack_dbus_interface_method_argument_descriptor *arguments;
  // handler
  void (*handler)(struct jack_dbus_method_call *);
};

struct jack_dbus_interface_signal_argument_descriptor
{
  // name
  const char *name;
  // type
  const char *type;
};

struct jack_dbus_interface_signal_descriptor
{
  // name
  const char *name;
  // arguments
  struct jack_dbus_interface_signal_argument_descriptor *arguments;
};

struct jack_dbus_method_call
{
  // context
  void *context;
  // connection
  struct DBusConnection *connection;
  // method_name
  const char *method_name;
  // message
  struct DBusMessage *message;
  // reply
  struct DBusMessage *reply;
};

struct jack_graph_client
{
  // id
  unsigned long int id;
  // name
  char *name;
  // pid
  signed int pid;
  // siblings
  struct list_head siblings;
  // ports
  struct list_head ports;
};

struct jack_graph_connection
{
  // id
  unsigned long int id;
  // port1
  struct jack_graph_port *port1;
  // port2
  struct jack_graph_port *port2;
  // siblings
  struct list_head siblings;
};

struct jack_graph_port
{
  // id
  unsigned long int id;
  // name
  char *name;
  // flags
  unsigned int flags;
  // type
  unsigned int type;
  // siblings_graph
  struct list_head siblings_graph;
  // siblings_client
  struct list_head siblings_client;
  // client
  struct jack_graph_client *client;
};

struct jack_parameter_container
{
  // siblings
  struct list_head siblings;
  // name
  char *name;
  // symlink
  struct jack_parameter_container *symlink;
  // leaf
  _Bool leaf;
  // children
  struct list_head children;
  // obj
  void *obj;
};

struct jack_parameter_enum
{
  // value
  union jackctl_parameter_value value;
  // short_desc
  const char *short_desc;
};

struct jack_params
{
  // server
  struct jackctl_server *server;
  // root
  struct jack_parameter_container root;
  // drivers_ptr
  struct list_head *drivers_ptr;
  // drivers_count
  unsigned int drivers_count;
  // driver_ptr
  struct jack_parameter_container *driver_ptr;
  // driver_set
  _Bool driver_set;
};

struct jack_session_pending_command
{
  // siblings
  struct list_head siblings;
  // connection
  struct DBusConnection *connection;
  // message
  struct DBusMessage *message;
  // type
  enum JackSessionEventType type;
  // target
  const char *target;
  // path
  const char *path;
};

struct parse_context
{
  // controller_ptr
  struct jack_controller *controller_ptr;
  // error
  unsigned char error;
  // option_value_capture
  _Bool option_value_capture;
  // option
  char option[128l];
  // option_used
  signed int option_used;
  // address
  const char *address[3l];
  // address_index
  signed int address_index;
  // container
  char *container;
  // name
  char *name;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rd_device
{
  // ref
  signed int ref;
  // device_name
  char *device_name;
  // application_name
  char *application_name;
  // application_device_name
  char *application_device_name;
  // service_name
  char *service_name;
  // object_path
  char *object_path;
  // priority
  signed int priority;
  // connection
  struct DBusConnection *connection;
  // owning
  signed int owning : 1;
  // registered
  signed int registered : 1;
  // filtering
  signed int filtering : 1;
  // gave_up
  signed int gave_up : 1;
  // request_cb
  signed int (*request_cb)(struct rd_device *, signed int);
  // userdata
  void *userdata;
};

struct reserved_audio_device
{
  // device_name
  char device_name[64l];
  // reserved_device
  struct rd_device *reserved_device;
};

struct save_context
{
  // call
  void *call;
  // fd
  signed int fd;
  // indent
  const char *indent;
  // params
  struct _jack_params *params;
  // address
  const char *address[3l];
  // str
  const char *str;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_13 __sigaction_handler;
  // sa_mask
  struct anonymous_11 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct sigaltstack
{
  // ss_sp
  void *ss_sp;
  // ss_flags
  signed int ss_flags;
  // ss_size
  unsigned long int ss_size;
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

struct sysinfo
{
  // uptime
  signed long int uptime;
  // loads
  unsigned long int loads[3l];
  // totalram
  unsigned long int totalram;
  // freeram
  unsigned long int freeram;
  // sharedram
  unsigned long int sharedram;
  // bufferram
  unsigned long int bufferram;
  // totalswap
  unsigned long int totalswap;
  // freeswap
  unsigned long int freeswap;
  // procs
  unsigned short int procs;
  // pad
  unsigned short int pad;
  // totalhigh
  unsigned long int totalhigh;
  // freehigh
  unsigned long int freehigh;
  // mem_unit
  unsigned int mem_unit;
  // _f
  char _f[0l];
};

struct ucontext
{
  // uc_flags
  unsigned long int uc_flags;
  // uc_link
  struct ucontext *uc_link;
  // uc_stack
  struct sigaltstack uc_stack;
  // uc_mcontext
  struct anonymous_10 uc_mcontext;
  // uc_sigmask
  struct anonymous_11 uc_sigmask;
  // __fpregs_mem
  struct _libc_fpstate __fpregs_mem;
};


// AddSlaveDriver_arguments
// file ../dbus/controller_iface_control.c line 398
static struct jack_dbus_interface_method_argument_descriptor AddSlaveDriver_arguments[2l] = { { .name="driver_name", .type="s", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// ClientAppeared_arguments
// file ../dbus/controller_iface_patchbay.c line 1880
static struct jack_dbus_interface_signal_argument_descriptor ClientAppeared_arguments[4l] = { { .name="new_graph_version", .type="t" },
    { .name="client_id", .type="t" }, { .name="client_name", .type="s" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// ClientDisappeared_arguments
// file ../dbus/controller_iface_patchbay.c line 1886
static struct jack_dbus_interface_signal_argument_descriptor ClientDisappeared_arguments[4l] = { { .name="new_graph_version", .type="t" },
    { .name="client_id", .type="t" }, { .name="client_name", .type="s" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// ConnectPortsByID_arguments
// file ../dbus/controller_iface_patchbay.c line 1839
static struct jack_dbus_interface_method_argument_descriptor ConnectPortsByID_arguments[3l] = { { .name="port1_id", .type="t", .direction_out=(_Bool)0 },
    { .name="port2_id", .type="t", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// ConnectPortsByName_arguments
// file ../dbus/controller_iface_patchbay.c line 1832
static struct jack_dbus_interface_method_argument_descriptor ConnectPortsByName_arguments[5l] = { { .name="client1_name", .type="s", .direction_out=(_Bool)0 },
    { .name="port1_name", .type="s", .direction_out=(_Bool)0 },
    { .name="client2_name", .type="s", .direction_out=(_Bool)0 },
    { .name="port2_name", .type="s", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// DisconnectPortsByConnectionID_arguments
// file ../dbus/controller_iface_patchbay.c line 1856
static struct jack_dbus_interface_method_argument_descriptor DisconnectPortsByConnectionID_arguments[2l] = { { .name="connection_id", .type="t", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// DisconnectPortsByID_arguments
// file ../dbus/controller_iface_patchbay.c line 1851
static struct jack_dbus_interface_method_argument_descriptor DisconnectPortsByID_arguments[3l] = { { .name="port1_id", .type="t", .direction_out=(_Bool)0 },
    { .name="port2_id", .type="t", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// DisconnectPortsByName_arguments
// file ../dbus/controller_iface_patchbay.c line 1844
static struct jack_dbus_interface_method_argument_descriptor DisconnectPortsByName_arguments[5l] = { { .name="client1_name", .type="s", .direction_out=(_Bool)0 },
    { .name="port1_name", .type="s", .direction_out=(_Bool)0 },
    { .name="client2_name", .type="s", .direction_out=(_Bool)0 },
    { .name="port2_name", .type="s", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetAllPorts_arguments
// file ../dbus/controller_iface_patchbay.c line 1821
static struct jack_dbus_interface_method_argument_descriptor GetAllPorts_arguments[2l] = { { .name="ports_list", .type="as", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetBufferSize_arguments
// file ../dbus/controller_iface_control.c line 375
static struct jack_dbus_interface_method_argument_descriptor GetBufferSize_arguments[2l] = { { .name="buffer_size_frames", .type="u", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetClientNameByUuid_arguments
// file ../dbus/controller_iface_session_manager.c line 531
static struct jack_dbus_interface_method_argument_descriptor GetClientNameByUuid_arguments[3l] = { { .name="uuid", .type="s", .direction_out=(_Bool)0 },
    { .name="name", .type="s", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetClientPID_arguments
// file ../dbus/controller_iface_patchbay.c line 1860
static struct jack_dbus_interface_method_argument_descriptor GetClientPID_arguments[3l] = { { .name="client_id", .type="t", .direction_out=(_Bool)0 },
    { .name="process_id", .type="x", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetGraph_arguments
// file ../dbus/controller_iface_patchbay.c line 1825
static struct jack_dbus_interface_method_argument_descriptor GetGraph_arguments[5l] = { { .name="known_graph_version", .type="t", .direction_out=(_Bool)0 },
    { .name="current_graph_version", .type="t", .direction_out=(_Bool)1 },
    { .name="clients_and_ports", .type="a(tsa(tsuu))", .direction_out=(_Bool)1 },
    { .name="connections", .type="a(tstststst)", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetLatency_arguments
// file ../dbus/controller_iface_control.c line 371
static struct jack_dbus_interface_method_argument_descriptor GetLatency_arguments[2l] = { { .name="latency_ms", .type="d", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetLoad_arguments
// file ../dbus/controller_iface_control.c line 359
static struct jack_dbus_interface_method_argument_descriptor GetLoad_arguments[2l] = { { .name="load", .type="d", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetParameterConstraint_arguments
// file ../dbus/controller_iface_configure.c line 971
static struct jack_dbus_interface_method_argument_descriptor GetParameterConstraint_arguments[6l] = { { .name="parameter", .type="as", .direction_out=(_Bool)0 },
    { .name="is_range", .type="b", .direction_out=(_Bool)1 },
    { .name="is_strict", .type="b", .direction_out=(_Bool)1 },
    { .name="is_fake_value", .type="b", .direction_out=(_Bool)1 },
    { .name="values", .type="a(vs)", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetParameterInfo_arguments
// file ../dbus/controller_iface_configure.c line 966
static struct jack_dbus_interface_method_argument_descriptor GetParameterInfo_arguments[3l] = { { .name="parameter", .type="as", .direction_out=(_Bool)0 },
    { .name="parameter_info", .type="(ysss)", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetParameterValue_arguments
// file ../dbus/controller_iface_configure.c line 979
static struct jack_dbus_interface_method_argument_descriptor GetParameterValue_arguments[5l] = { { .name="parameter", .type="as", .direction_out=(_Bool)0 },
    { .name="is_set", .type="b", .direction_out=(_Bool)1 },
    { .name="default", .type="v", .direction_out=(_Bool)1 },
    { .name="value", .type="v", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetParametersInfo_arguments
// file ../dbus/controller_iface_configure.c line 961
static struct jack_dbus_interface_method_argument_descriptor GetParametersInfo_arguments[3l] = { { .name="parent", .type="as", .direction_out=(_Bool)0 },
    { .name="parameter_info_array", .type="a(ysss)", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetSampleRate_arguments
// file ../dbus/controller_iface_control.c line 367
static struct jack_dbus_interface_method_argument_descriptor GetSampleRate_arguments[2l] = { { .name="sample_rate", .type="u", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetState_arguments
// file ../dbus/controller_iface_session_manager.c line 546
static struct jack_dbus_interface_method_argument_descriptor GetState_arguments[3l] = { { .name="type", .type="u", .direction_out=(_Bool)1 },
    { .name="target", .type="s", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetUuidForClientName_arguments
// file ../dbus/controller_iface_session_manager.c line 526
static struct jack_dbus_interface_method_argument_descriptor GetUuidForClientName_arguments[3l] = { { .name="name", .type="s", .direction_out=(_Bool)0 },
    { .name="uuid", .type="s", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GetXruns_arguments
// file ../dbus/controller_iface_control.c line 363
static struct jack_dbus_interface_method_argument_descriptor GetXruns_arguments[2l] = { { .name="xruns_count", .type="u", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// GraphChanged_arguments
// file ../dbus/controller_iface_patchbay.c line 1876
static struct jack_dbus_interface_signal_argument_descriptor GraphChanged_arguments[2l] = { { .name="new_graph_version", .type="t" },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// HasSessionCallback_arguments
// file ../dbus/controller_iface_session_manager.c line 541
static struct jack_dbus_interface_method_argument_descriptor HasSessionCallback_arguments[3l] = { { .name="client_name", .type="s", .direction_out=(_Bool)0 },
    { .name="has_session_callback", .type="b", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// Introspect_arguments
// file ../dbus/controller_iface_introspectable.c line 46
static struct jack_dbus_interface_method_argument_descriptor Introspect_arguments[2l] = { { .name="xml_data", .type="s", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// IsRealtime_arguments
// file ../dbus/controller_iface_control.c line 383
static struct jack_dbus_interface_method_argument_descriptor IsRealtime_arguments[2l] = { { .name="realtime", .type="b", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// IsStarted_arguments
// file ../dbus/controller_iface_control.c line 346
static struct jack_dbus_interface_method_argument_descriptor IsStarted_arguments[2l] = { { .name="started", .type="b", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// LoadInternal_arguments
// file ../dbus/controller_iface_control.c line 390
static struct jack_dbus_interface_method_argument_descriptor LoadInternal_arguments[2l] = { { .name="internal", .type="s", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// Notify_arguments
// file ../dbus/controller_iface_session_manager.c line 518
static struct jack_dbus_interface_method_argument_descriptor Notify_arguments[6l] = { { .name="queue", .type="b", .direction_out=(_Bool)0 },
    { .name="target", .type="s", .direction_out=(_Bool)0 },
    { .name="type", .type="u", .direction_out=(_Bool)0 },
    { .name="path", .type="s", .direction_out=(_Bool)0 },
    { .name="result", .type="a(sssu)", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// PortAppeared_arguments
// file ../dbus/controller_iface_patchbay.c line 1892
static struct jack_dbus_interface_signal_argument_descriptor PortAppeared_arguments[8l] = { { .name="new_graph_version", .type="t" },
    { .name="client_id", .type="t" }, { .name="client_name", .type="s" }, { .name="port_id", .type="t" }, { .name="port_name", .type="s" }, { .name="port_flags", .type="u" }, { .name="port_type", .type="u" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// PortDisappeared_arguments
// file ../dbus/controller_iface_patchbay.c line 1902
static struct jack_dbus_interface_signal_argument_descriptor PortDisappeared_arguments[6l] = { { .name="new_graph_version", .type="t" },
    { .name="client_id", .type="t" }, { .name="client_name", .type="s" }, { .name="port_id", .type="t" }, { .name="port_name", .type="s" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// PortRenamed_arguments
// file ../dbus/controller_iface_patchbay.c line 1936
static struct jack_dbus_interface_signal_argument_descriptor PortRenamed_arguments[7l] = { { .name="new_graph_version", .type="t" },
    { .name="port_id", .type="t" }, { .name="client_id", .type="t" }, { .name="client_name", .type="s" }, { .name="port_old_name", .type="s" }, { .name="port_new_name", .type="s" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// PortsConnected_arguments
// file ../dbus/controller_iface_patchbay.c line 1910
static struct jack_dbus_interface_signal_argument_descriptor PortsConnected_arguments[11l] = { { .name="new_graph_version", .type="t" },
    { .name="client1_id", .type="t" }, { .name="client1_name", .type="s" }, { .name="port1_id", .type="t" }, { .name="port1_name", .type="s" }, { .name="client2_id", .type="t" }, { .name="client2_name", .type="s" }, { .name="port2_id", .type="t" }, { .name="port2_name", .type="s" }, { .name="connection_id", .type="t" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// PortsDisconnected_arguments
// file ../dbus/controller_iface_patchbay.c line 1923
static struct jack_dbus_interface_signal_argument_descriptor PortsDisconnected_arguments[11l] = { { .name="new_graph_version", .type="t" },
    { .name="client1_id", .type="t" }, { .name="client1_name", .type="s" }, { .name="port1_id", .type="t" }, { .name="port1_name", .type="s" }, { .name="client2_id", .type="t" }, { .name="client2_name", .type="s" }, { .name="port2_id", .type="t" }, { .name="port2_name", .type="s" }, { .name="connection_id", .type="t" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// ReadContainer_arguments
// file ../dbus/controller_iface_configure.c line 955
static struct jack_dbus_interface_method_argument_descriptor ReadContainer_arguments[4l] = { { .name="parent", .type="as", .direction_out=(_Bool)0 },
    { .name="leaf", .type="b", .direction_out=(_Bool)1 },
    { .name="children", .type="as", .direction_out=(_Bool)1 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// RemoveSlaveDriver_arguments
// file ../dbus/controller_iface_control.c line 402
static struct jack_dbus_interface_method_argument_descriptor RemoveSlaveDriver_arguments[2l] = { { .name="driver_name", .type="s", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// ReserveClientName_arguments
// file ../dbus/controller_iface_session_manager.c line 536
static struct jack_dbus_interface_method_argument_descriptor ReserveClientName_arguments[3l] = { { .name="name", .type="s", .direction_out=(_Bool)0 },
    { .name="uuid", .type="s", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// ResetParameterValue_arguments
// file ../dbus/controller_iface_configure.c line 991
static struct jack_dbus_interface_method_argument_descriptor ResetParameterValue_arguments[2l] = { { .name="parameter", .type="as", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// ResetXruns_arguments
// file ../dbus/controller_iface_control.c line 387
static struct jack_dbus_interface_method_argument_descriptor ResetXruns_arguments[1l] = { { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// ServerStarted_arguments
// file ../dbus/controller_iface_control.c line 425
static struct jack_dbus_interface_signal_argument_descriptor ServerStarted_arguments[1l] = { { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// ServerStopped_arguments
// file ../dbus/controller_iface_control.c line 428
static struct jack_dbus_interface_signal_argument_descriptor ServerStopped_arguments[1l] = { { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// SetBufferSize_arguments
// file ../dbus/controller_iface_control.c line 379
static struct jack_dbus_interface_method_argument_descriptor SetBufferSize_arguments[2l] = { { .name="buffer_size_frames", .type="u", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// SetParameterValue_arguments
// file ../dbus/controller_iface_configure.c line 986
static struct jack_dbus_interface_method_argument_descriptor SetParameterValue_arguments[3l] = { { .name="parameter", .type="as", .direction_out=(_Bool)0 },
    { .name="value", .type="v", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// StartServer_arguments
// file ../dbus/controller_iface_control.c line 350
static struct jack_dbus_interface_method_argument_descriptor StartServer_arguments[1l] = { { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// StateChanged_arguments
// file ../dbus/controller_iface_session_manager.c line 551
static struct jack_dbus_interface_signal_argument_descriptor StateChanged_arguments[3l] = { { .name="type", .type="u" }, { .name="target", .type="s" }, { .name=(const char *)(void *)0, .type=(const char *)(void *)0 } };
// StopServer_arguments
// file ../dbus/controller_iface_control.c line 353
static struct jack_dbus_interface_method_argument_descriptor StopServer_arguments[1l] = { { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// SwitchMaster_arguments
// file ../dbus/controller_iface_control.c line 356
static struct jack_dbus_interface_method_argument_descriptor SwitchMaster_arguments[1l] = { { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// UnloadInternal_arguments
// file ../dbus/controller_iface_control.c line 394
static struct jack_dbus_interface_method_argument_descriptor UnloadInternal_arguments[2l] = { { .name="internal", .type="s", .direction_out=(_Bool)0 },
    { .name=(const char *)(void *)0, .type=(const char *)(void *)0, .direction_out=(_Bool)0 } };
// g_buffer_ptr
// file ../dbus/controller_iface_introspectable.c line 58
static char *g_buffer_ptr;
// g_connection
// file ../dbus/jackdbus.c line 55
struct DBusConnection *g_connection;
// g_device_count
// file ../dbus/controller.c line 370
signed int g_device_count = 0;
// g_exit_command
// file ../dbus/jackdbus.c line 54
signed int g_exit_command;
// g_jack_controller_iface_configure
// file ../dbus/controller_iface_configure.c line 1028
struct jack_dbus_interface_descriptor g_jack_controller_iface_configure;
// methods_dtor
// file ../dbus/controller_iface_configure.c line 995
static struct jack_dbus_interface_method_descriptor methods_dtor[8l];
// methods_dtor
// file ../dbus/controller_iface_configure.c line 995
static struct jack_dbus_interface_method_descriptor methods_dtor[8l] = { { .name="ReadContainer", .arguments=ReadContainer_arguments, .handler=jack_controller_dbus_read_container },
    { .name="GetParametersInfo", .arguments=GetParametersInfo_arguments, .handler=jack_controller_dbus_get_parameters_info },
    { .name="GetParameterInfo", .arguments=GetParameterInfo_arguments, .handler=jack_controller_dbus_get_parameter_info },
    { .name="GetParameterConstraint", .arguments=GetParameterConstraint_arguments, .handler=jack_controller_dbus_get_parameter_constraint },
    { .name="GetParameterValue", .arguments=GetParameterValue_arguments, .handler=jack_controller_dbus_get_parameter_value },
    { .name="SetParameterValue", .arguments=SetParameterValue_arguments, .handler=jack_controller_dbus_set_parameter_value },
    { .name="ResetParameterValue", .arguments=ResetParameterValue_arguments, .handler=jack_controller_dbus_reset_parameter_value },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_method_argument_descriptor *)(void *)0, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 } };
// g_jack_controller_iface_configure
// file ../dbus/controller_iface_configure.c line 1028
struct jack_dbus_interface_descriptor g_jack_controller_iface_configure = { .name="org.jackaudio.Configure", .handler=jack_dbus_run_method, .methods=methods_dtor,
    .signals=((struct jack_dbus_interface_signal_descriptor *)NULL) };
// g_jack_controller_iface_control
// file ../dbus/controller_iface_control.c line 436
struct jack_dbus_interface_descriptor g_jack_controller_iface_control;
// methods_dtor_link1
// file ../dbus/controller_iface_control.c line 406
static struct jack_dbus_interface_method_descriptor methods_dtor_link1[17l];
// methods_dtor_link1
// file ../dbus/controller_iface_control.c line 406
static struct jack_dbus_interface_method_descriptor methods_dtor_link1[17l] = { { .name="IsStarted", .arguments=IsStarted_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="StartServer", .arguments=StartServer_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="StopServer", .arguments=StopServer_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="SwitchMaster", .arguments=SwitchMaster_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="GetLoad", .arguments=GetLoad_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="GetXruns", .arguments=GetXruns_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="GetSampleRate", .arguments=GetSampleRate_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="GetLatency", .arguments=GetLatency_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="GetBufferSize", .arguments=GetBufferSize_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="SetBufferSize", .arguments=SetBufferSize_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="IsRealtime", .arguments=IsRealtime_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="ResetXruns", .arguments=ResetXruns_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="LoadInternal", .arguments=LoadInternal_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="UnloadInternal", .arguments=UnloadInternal_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="AddSlaveDriver", .arguments=AddSlaveDriver_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name="RemoveSlaveDriver", .arguments=RemoveSlaveDriver_arguments, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_method_argument_descriptor *)(void *)0, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 } };
// signals_dtor
// file ../dbus/controller_iface_control.c line 431
static struct jack_dbus_interface_signal_descriptor signals_dtor[3l];
// signals_dtor
// file ../dbus/controller_iface_control.c line 431
static struct jack_dbus_interface_signal_descriptor signals_dtor[3l] = { { .name="ServerStarted", .arguments=ServerStarted_arguments },
    { .name="ServerStopped", .arguments=ServerStopped_arguments },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_signal_argument_descriptor *)(void *)0 } };
// g_jack_controller_iface_control
// file ../dbus/controller_iface_control.c line 436
struct jack_dbus_interface_descriptor g_jack_controller_iface_control = { .name="org.jackaudio.JackControl", .handler=jack_control_run_method, .methods=methods_dtor_link1,
    .signals=signals_dtor };
// g_jack_controller_iface_introspectable
// file ../dbus/controller_iface_introspectable.c line 54
struct jack_dbus_interface_descriptor g_jack_controller_iface_introspectable;
// methods_dtor_link2
// file ../dbus/controller_iface_introspectable.c line 50
static struct jack_dbus_interface_method_descriptor methods_dtor_link2[2l];
// methods_dtor_link2
// file ../dbus/controller_iface_introspectable.c line 50
static struct jack_dbus_interface_method_descriptor methods_dtor_link2[2l] = { { .name="Introspect", .arguments=Introspect_arguments, .handler=jack_controller_dbus_introspect },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_method_argument_descriptor *)(void *)0, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 } };
// g_jack_controller_iface_introspectable
// file ../dbus/controller_iface_introspectable.c line 54
struct jack_dbus_interface_descriptor g_jack_controller_iface_introspectable = { .name="org.freedesktop.DBus.Introspectable", .handler=jack_dbus_run_method,
    .methods=methods_dtor_link2, .signals=((struct jack_dbus_interface_signal_descriptor *)NULL) };
// g_jack_controller_iface_patchbay
// file ../dbus/controller_iface_patchbay.c line 1956
struct jack_dbus_interface_descriptor g_jack_controller_iface_patchbay;
// methods_dtor_link3
// file ../dbus/controller_iface_patchbay.c line 1865
static struct jack_dbus_interface_method_descriptor methods_dtor_link3[9l];
// methods_dtor_link3
// file ../dbus/controller_iface_patchbay.c line 1865
static struct jack_dbus_interface_method_descriptor methods_dtor_link3[9l] = { { .name="GetAllPorts", .arguments=GetAllPorts_arguments, .handler=jack_controller_dbus_get_all_ports },
    { .name="GetGraph", .arguments=GetGraph_arguments, .handler=jack_controller_dbus_get_graph },
    { .name="ConnectPortsByName", .arguments=ConnectPortsByName_arguments, .handler=jack_controller_dbus_connect_ports_by_name },
    { .name="ConnectPortsByID", .arguments=ConnectPortsByID_arguments, .handler=jack_controller_dbus_connect_ports_by_id },
    { .name="DisconnectPortsByName", .arguments=DisconnectPortsByName_arguments, .handler=jack_controller_dbus_disconnect_ports_by_name },
    { .name="DisconnectPortsByID", .arguments=DisconnectPortsByID_arguments, .handler=jack_controller_dbus_disconnect_ports_by_id },
    { .name="DisconnectPortsByConnectionID", .arguments=DisconnectPortsByConnectionID_arguments,
    .handler=jack_controller_dbus_disconnect_ports_by_connection_id },
    { .name="GetClientPID", .arguments=GetClientPID_arguments, .handler=jack_controller_dbus_get_client_pid },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_method_argument_descriptor *)(void *)0, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 } };
// signals_dtor_link1
// file ../dbus/controller_iface_patchbay.c line 1945
static struct jack_dbus_interface_signal_descriptor signals_dtor_link1[9l];
// signals_dtor_link1
// file ../dbus/controller_iface_patchbay.c line 1945
static struct jack_dbus_interface_signal_descriptor signals_dtor_link1[9l] = { { .name="GraphChanged", .arguments=GraphChanged_arguments },
    { .name="ClientAppeared", .arguments=ClientAppeared_arguments },
    { .name="ClientDisappeared", .arguments=ClientDisappeared_arguments },
    { .name="PortAppeared", .arguments=PortAppeared_arguments },
    { .name="PortDisappeared", .arguments=PortDisappeared_arguments },
    { .name="PortsConnected", .arguments=PortsConnected_arguments },
    { .name="PortsDisconnected", .arguments=PortsDisconnected_arguments },
    { .name="PortRenamed", .arguments=PortRenamed_arguments },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_signal_argument_descriptor *)(void *)0 } };
// g_jack_controller_iface_patchbay
// file ../dbus/controller_iface_patchbay.c line 1956
struct jack_dbus_interface_descriptor g_jack_controller_iface_patchbay = { .name="org.jackaudio.JackPatchbay", .handler=jack_dbus_run_method, .methods=methods_dtor_link3,
    .signals=signals_dtor_link1 };
// g_jack_controller_iface_session_manager
// file ../dbus/controller_iface_session_manager.c line 569
struct jack_dbus_interface_descriptor g_jack_controller_iface_session_manager;
// methods_dtor_link4
// file ../dbus/controller_iface_session_manager.c line 556
static struct jack_dbus_interface_method_descriptor methods_dtor_link4[7l];
// methods_dtor_link4
// file ../dbus/controller_iface_session_manager.c line 556
static struct jack_dbus_interface_method_descriptor methods_dtor_link4[7l] = { { .name="Notify", .arguments=Notify_arguments, .handler=jack_controller_dbus_session_notify },
    { .name="GetUuidForClientName", .arguments=GetUuidForClientName_arguments, .handler=jack_controller_dbus_get_uuid_for_client_name },
    { .name="GetClientNameByUuid", .arguments=GetClientNameByUuid_arguments, .handler=jack_controller_dbus_get_client_name_by_uuid },
    { .name="ReserveClientName", .arguments=ReserveClientName_arguments, .handler=jack_controller_dbus_reserve_client_name },
    { .name="HasSessionCallback", .arguments=HasSessionCallback_arguments, .handler=jack_controller_dbus_has_session_callback },
    { .name="GetState", .arguments=GetState_arguments, .handler=jack_controller_dbus_get_session_state },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_method_argument_descriptor *)(void *)0, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 } };
// signals_dtor_link2
// file ../dbus/controller_iface_session_manager.c line 565
static struct jack_dbus_interface_signal_descriptor signals_dtor_link2[2l];
// signals_dtor_link2
// file ../dbus/controller_iface_session_manager.c line 565
static struct jack_dbus_interface_signal_descriptor signals_dtor_link2[2l] = { { .name="StateChanged", .arguments=StateChanged_arguments },
    { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_signal_argument_descriptor *)(void *)0 } };
// g_jack_controller_iface_session_manager
// file ../dbus/controller_iface_session_manager.c line 569
struct jack_dbus_interface_descriptor g_jack_controller_iface_session_manager = { .name="org.jackaudio.SessionManager", .handler=jack_dbus_run_method, .methods=methods_dtor_link4,
    .signals=signals_dtor_link2 };
// g_jack_controller_iface_transport
// file ../dbus/controller_iface_transport.c line 36
struct jack_dbus_interface_descriptor g_jack_controller_iface_transport;
// methods_dtor_link5
// file ../dbus/controller_iface_transport.c line 33
static struct jack_dbus_interface_method_descriptor methods_dtor_link5[1l] = { { .name=(const char *)(void *)0, .arguments=(struct jack_dbus_interface_method_argument_descriptor *)(void *)0, .handler=(void (*)(struct jack_dbus_method_call *))(void *)0 } };
// g_jack_controller_iface_transport
// file ../dbus/controller_iface_transport.c line 36
struct jack_dbus_interface_descriptor g_jack_controller_iface_transport = { .name="org.jackaudio.JackTransport", .handler=jack_dbus_run_method, .methods=methods_dtor_link5,
    .signals=((struct jack_dbus_interface_signal_descriptor *)NULL) };
// g_jackcontroller_interfaces
// file ../dbus/controller.c line 38
struct jack_dbus_interface_descriptor *g_jackcontroller_interfaces[7l];
// g_jackcontroller_interfaces
// file ../dbus/controller.c line 38
struct jack_dbus_interface_descriptor *g_jackcontroller_interfaces[7l] = { &g_jack_controller_iface_introspectable,
    &g_jack_controller_iface_control, &g_jack_controller_iface_configure, &g_jack_controller_iface_patchbay, &g_jack_controller_iface_session_manager,
    &g_jack_controller_iface_transport, (struct jack_dbus_interface_descriptor *)(void *)0 };
// g_jackdbus_config_dir
// file ../dbus/jackdbus.c line 50
char *g_jackdbus_config_dir;
// g_jackdbus_config_dir_len
// file ../dbus/jackdbus.c line 51
unsigned long int g_jackdbus_config_dir_len;
// g_jackdbus_log_dir
// file ../dbus/jackdbus.c line 52
char *g_jackdbus_log_dir;
// g_jackdbus_log_dir_len
// file ../dbus/jackdbus.c line 53
unsigned long int g_jackdbus_log_dir_len;
// g_log_file_ino
// file ../dbus/jackdbus.c line 48
static unsigned long int g_log_file_ino;
// g_log_filename
// file ../dbus/jackdbus.c line 47
static char *g_log_filename;
// g_logfile
// file ../dbus/jackdbus.c line 49
struct _IO_FILE *g_logfile;
// g_reserved_device
// file ../dbus/controller.c line 371
static struct reserved_audio_device g_reserved_device[2l];
// g_xml_data
// file ../dbus/controller_iface_introspectable.c line 33
static char g_xml_data[102400l];
// introspection
// file ../dbus/reserve.c line 65
static const char introspection[1066l] = { '<', '!', 'D', 'O', 'C', 'T', 'Y', 'P', 'E', ' ', 'n', 'o', 'd', 'e', ' ', 'P', 'U', 'B', 'L', 'I', 'C', ' ', '"', '-', '/', '/', 'f', 'r', 'e', 'e', 'd', 'e', 's', 'k', 't', 'o', 'p', '/', '/', 'D', 'T', 'D', ' ', 'D', '-', 'B', 'U', 'S', ' ', 'O', 'b', 'j', 'e', 'c', 't', ' ', 'I', 'n', 't', 'r', 'o', 's', 'p', 'e', 'c', 't', 'i', 'o', 'n', ' ', '1', '.', '0', '/', '/', 'E', 'N', '"', '\n', '"', 'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'f', 'r', 'e', 'e', 'd', 'e', 's', 'k', 't', 'o', 'p', '.', 'o', 'r', 'g', '/', 's', 't', 'a', 'n', 'd', 'a', 'r', 'd', 's', '/', 'd', 'b', 'u', 's', '/', '1', '.', '0', '/', 'i', 'n', 't', 'r', 'o', 's', 'p', 'e', 'c', 't', '.', 'd', 't', 'd', '"', '>', '\n', '<', 'n', 'o', 'd', 'e', '>', ' ', '<', '!', '-', '-', ' ', 'I', 'f', ' ', 'y', 'o', 'u', ' ', 'a', 'r', 'e', ' ', 'l', 'o', 'o', 'k', 'i', 'n', 'g', ' ', 'f', 'o', 'r', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', ' ', 'm', 'a', 'k', 'e', ' ', 's', 'u', 'r', 'e', ' ', 't', 'o', ' ', 'c', 'h', 'e', 'c', 'k', ' ', 'o', 'u', 't', '\n', ' ', ' ', ' ', ' ', ' ', ' ', 'h', 't', 't', 'p', ':', '/', '/', 'g', 'i', 't', '.', '0', 'p', 'o', 'i', 'n', 't', 'e', 'r', '.', 'd', 'e', '/', '?', 'p', '=', 'r', 'e', 's', 'e', 'r', 'v', 'e', '.', 'g', 'i', 't', ';', 'a', '=', 'b', 'l', 'o', 'b', ';', 'f', '=', 'r', 'e', 's', 'e', 'r', 'v', 'e', '.', 't', 'x', 't', ' ', '-', '-', '>', '\n', ' ', '<', 'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ' ', 'n', 'a', 'm', 'e', '=', '"', 'o', 'r', 'g', '.', 'f', 'r', 'e', 'e', 'd', 'e', 's', 'k', 't', 'o', 'p', '.', 'R', 'e', 's', 'e', 'r', 'v', 'e', 'D', 'e', 'v', 'i', 'c', 'e', '1', '"', '>', ' ', ' ', '<', 'm', 'e', 't', 'h', 'o', 'd', ' ', 'n', 'a', 'm', 'e', '=', '"', 'R', 'e', 'q', 'u', 'e', 's', 't', 'R', 'e', 'l', 'e', 'a', 's', 'e', '"', '>', ' ', ' ', ' ', '<', 'a', 'r', 'g', ' ', 'n', 'a', 'm', 'e', '=', '"', 'p', 'r', 'i', 'o', 'r', 'i', 't', 'y', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 'i', '"', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', '=', '"', 'i', 'n', '"', '/', '>', ' ', ' ', ' ', '<', 'a', 'r', 'g', ' ', 'n', 'a', 'm', 'e', '=', '"', 'r', 'e', 's', 'u', 'l', 't', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 'b', '"', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', '=', '"', 'o', 'u', 't', '"', '/', '>', ' ', ' ', '<', '/', 'm', 'e', 't', 'h', 'o', 'd', '>', ' ', ' ', '<', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', ' ', 'n', 'a', 'm', 'e', '=', '"', 'P', 'r', 'i', 'o', 'r', 'i', 't', 'y', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 'i', '"', ' ', 'a', 'c', 'c', 'e', 's', 's', '=', '"', 'r', 'e', 'a', 'd', '"', '/', '>', ' ', ' ', '<', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', ' ', 'n', 'a', 'm', 'e', '=', '"', 'A', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'N', 'a', 'm', 'e', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 's', '"', ' ', 'a', 'c', 'c', 'e', 's', 's', '=', '"', 'r', 'e', 'a', 'd', '"', '/', '>', ' ', ' ', '<', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', ' ', 'n', 'a', 'm', 'e', '=', '"', 'A', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'D', 'e', 'v', 'i', 'c', 'e', 'N', 'a', 'm', 'e', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 's', '"', ' ', 'a', 'c', 'c', 'e', 's', 's', '=', '"', 'r', 'e', 'a', 'd', '"', '/', '>', ' ', '<', '/', 'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', '>', ' ', '<', 'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ' ', 'n', 'a', 'm', 'e', '=', '"', 'o', 'r', 'g', '.', 'f', 'r', 'e', 'e', 'd', 'e', 's', 'k', 't', 'o', 'p', '.', 'D', 'B', 'u', 's', '.', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', '"', '>', ' ', ' ', '<', 'm', 'e', 't', 'h', 'o', 'd', ' ', 'n', 'a', 'm', 'e', '=', '"', 'G', 'e', 't', '"', '>', ' ', ' ', ' ', '<', 'a', 'r', 'g', ' ', 'n', 'a', 'm', 'e', '=', '"', 'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', '"', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', '=', '"', 'i', 'n', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 's', '"', '/', '>', ' ', ' ', ' ', '<', 'a', 'r', 'g', ' ', 'n', 'a', 'm', 'e', '=', '"', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', '"', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', '=', '"', 'i', 'n', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 's', '"', '/', '>', ' ', ' ', ' ', '<', 'a', 'r', 'g', ' ', 'n', 'a', 'm', 'e', '=', '"', 'v', 'a', 'l', 'u', 'e', '"', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', '=', '"', 'o', 'u', 't', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 'v', '"', '/', '>', ' ', ' ', '<', '/', 'm', 'e', 't', 'h', 'o', 'd', '>', ' ', '<', '/', 'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', '>', ' ', '<', 'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ' ', 'n', 'a', 'm', 'e', '=', '"', 'o', 'r', 'g', '.', 'f', 'r', 'e', 'e', 'd', 'e', 's', 'k', 't', 'o', 'p', '.', 'D', 'B', 'u', 's', '.', 'I', 'n', 't', 'r', 'o', 's', 'p', 'e', 'c', 't', 'a', 'b', 'l', 'e', '"', '>', ' ', ' ', '<', 'm', 'e', 't', 'h', 'o', 'd', ' ', 'n', 'a', 'm', 'e', '=', '"', 'I', 'n', 't', 'r', 'o', 's', 'p', 'e', 'c', 't', '"', '>', ' ', ' ', ' ', '<', 'a', 'r', 'g', ' ', 'n', 'a', 'm', 'e', '=', '"', 'd', 'a', 't', 'a', '"', ' ', 't', 'y', 'p', 'e', '=', '"', 's', '"', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', '=', '"', 'o', 'u', 't', '"', '/', '>', ' ', ' ', '<', '/', 'm', 'e', 't', 'h', 'o', 'd', '>', ' ', '<', '/', 'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', '>', '<', '/', 'n', 'o', 'd', 'e', '>', 0 };
// jack_controller_dbus_type_signatures
// file ../dbus/controller_iface_configure.c line 43
const char *jack_controller_dbus_type_signatures[6l] = { ((const char *)NULL), "i", "u", "y", "s", "b" };
// jack_controller_dbus_types
// file ../dbus/controller_iface_configure.c line 34
unsigned char jack_controller_dbus_types[6l] = { 0, (unsigned char)(signed int)105, (unsigned char)(signed int)117, (unsigned char)(signed int)121, (unsigned char)(signed int)115, (unsigned char)(signed int)98 };
// jack_error_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-jackd2/jackd2-1.9.10+20150825git1ed50c92~dfsg/common/jack/jack.h line 1423
extern void (*jack_error_callback)(const char *);
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// vtable
// file ../dbus/reserve.c line 361
static struct DBusObjectPathVTable vtable;

// INIT_LIST_HEAD
// file ../dbus/list.h line 74
static inline void INIT_LIST_HEAD(struct list_head *list)
{
  list->next = list;
  list->prev = list;
}

// INIT_LIST_HEAD_link1
// file ../dbus/list.h line 74
static inline void INIT_LIST_HEAD_link1(struct list_head *list_link1)
{
  list_link1->next = list_link1;
  list_link1->prev = list_link1;
}

// INIT_LIST_HEAD_link2
// file ../dbus/list.h line 74
static inline void INIT_LIST_HEAD_link2(struct list_head *list_link2)
{
  list_link2->next = list_link2;
  list_link2->prev = list_link2;
}

// __list_add
// file ../dbus/list.h line 86
static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
{
  next->prev = new;
  new->next = next;
  new->prev = prev;
  prev->next = new;
}

// __list_add_link1
// file ../dbus/list.h line 86
static inline void __list_add_link1(struct list_head *new_link1, struct list_head *prev_link1, struct list_head *next_link1)
{
  next_link1->prev = new_link1;
  new_link1->next = next_link1;
  new_link1->prev = prev_link1;
  prev_link1->next = new_link1;
}

// __list_add_link2
// file ../dbus/list.h line 86
static inline void __list_add_link2(struct list_head *new_link2, struct list_head *prev_link2, struct list_head *next_link2)
{
  next_link2->prev = new_link2;
  new_link2->next = next_link2;
  new_link2->prev = prev_link2;
  prev_link2->next = new_link2;
}

// __list_add_link3
// file ../dbus/list.h line 86
static inline void __list_add_link3(struct list_head *new_link3, struct list_head *prev_link3, struct list_head *next_link3)
{
  next_link3->prev = new_link3;
  new_link3->next = next_link3;
  new_link3->prev = prev_link3;
  prev_link3->next = new_link3;
}

// __list_del
// file ../dbus/list.h line 188
static inline void __list_del(struct list_head *prev, struct list_head *next)
{
  next->prev = prev;
  prev->next = next;
}

// __list_del_link1
// file ../dbus/list.h line 188
static inline void __list_del_link1(struct list_head *prev_link1, struct list_head *next_link1)
{
  next_link1->prev = prev_link1;
  prev_link1->next = next_link1;
}

// __list_del_link2
// file ../dbus/list.h line 188
static inline void __list_del_link2(struct list_head *prev_link2, struct list_head *next_link2)
{
  next_link2->prev = prev_link2;
  prev_link2->next = next_link2;
}

// __list_del_link3
// file ../dbus/list.h line 188
static inline void __list_del_link3(struct list_head *prev_link3, struct list_head *next_link3)
{
  next_link3->prev = prev_link3;
  prev_link3->next = next_link3;
}

// add_controlapi_param
// file ../dbus/params.c line 133
static _Bool add_controlapi_param(struct list_head *parent_list_ptr, struct jackctl_parameter *param)
{
  struct jack_parameter *param_ptr;
  unsigned int i;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct jack_parameter) /*360ul*/ );
  param_ptr = (struct jack_parameter *)return_value_malloc_1;
  _Bool return_value_jackctl_parameter_has_range_constraint_4;
  _Bool return_value_jackctl_parameter_has_enum_constraint_3;
  _Bool return_value_jackctl_parameter_constraint_is_strict_5;
  _Bool return_value_jackctl_parameter_constraint_is_fake_value_6;
  if(param_ptr == ((struct jack_parameter *)NULL))
    jack_error("Ran out of memory trying to allocate struct jack_parameter");

  else
  {
    param_ptr->ext = (_Bool)0;
    param_ptr->obj = (void *)param;
    param_ptr->vtable.is_set = controlapi_parameter_is_set;
    param_ptr->vtable.reset = controlapi_parameter_reset;
    param_ptr->vtable.get_value = controlapi_parameter_get_value;
    param_ptr->vtable.set_value = controlapi_parameter_set_value;
    param_ptr->vtable.get_default_value = controlapi_parameter_get_default_value;
    param_ptr->type=jackctl_parameter_get_type(param);
    param_ptr->name=jackctl_parameter_get_name(param);
    param_ptr->short_decr=jackctl_parameter_get_short_description(param);
    param_ptr->long_descr=jackctl_parameter_get_long_description(param);
    return_value_jackctl_parameter_has_range_constraint_4=jackctl_parameter_has_range_constraint(param);
    if(!(return_value_jackctl_parameter_has_range_constraint_4 == (_Bool)0))
    {
      param_ptr->constraint_flags = (unsigned int)1;
      param_ptr->constraint_range = (_Bool)1;
      jackctl_parameter_get_range_constraint(param, &param_ptr->constraint.range.min, &param_ptr->constraint.range.max);
    }

    else
    {
      return_value_jackctl_parameter_has_enum_constraint_3=jackctl_parameter_has_enum_constraint(param);
      if(!(return_value_jackctl_parameter_has_enum_constraint_3 == (_Bool)0))
      {
        param_ptr->constraint_flags = (unsigned int)1;
        param_ptr->constraint_range = (_Bool)0;
        param_ptr->constraint.enumeration.count=jackctl_parameter_get_enum_constraints_count(param);
        void *return_value_malloc_2;
        return_value_malloc_2=malloc(sizeof(struct jack_parameter_enum) /*136ul*/  * (unsigned long int)param_ptr->constraint.enumeration.count);
        param_ptr->constraint.enumeration.possible_values_array = (struct jack_parameter_enum *)return_value_malloc_2;
        if(param_ptr->constraint.enumeration.possible_values_array == ((struct jack_parameter_enum *)NULL))
          goto free;

        i = (unsigned int)0;
        for( ; !(i >= param_ptr->constraint.enumeration.count); i = i + 1u)
        {
          (param_ptr->constraint.enumeration.possible_values_array + (signed long int)i)->value=jackctl_parameter_get_enum_constraint_value(param, i);
          (param_ptr->constraint.enumeration.possible_values_array + (signed long int)i)->short_desc=jackctl_parameter_get_enum_constraint_description(param, i);
        }
      }

      else
      {
        param_ptr->constraint_flags = (unsigned int)0;
        goto add;
      }
    }
    return_value_jackctl_parameter_constraint_is_strict_5=jackctl_parameter_constraint_is_strict(param);
    if(!(return_value_jackctl_parameter_constraint_is_strict_5 == (_Bool)0))
      param_ptr->constraint_flags = param_ptr->constraint_flags | (unsigned int)2;

    return_value_jackctl_parameter_constraint_is_fake_value_6=jackctl_parameter_constraint_is_fake_value(param);
    if(!(return_value_jackctl_parameter_constraint_is_fake_value_6 == (_Bool)0))
      param_ptr->constraint_flags = param_ptr->constraint_flags | (unsigned int)4;


  add:
    ;
    list_add_tail_link1(&param_ptr->siblings, parent_list_ptr);
    return (_Bool)1;

  free:
    ;
    free((void *)param_ptr);
  }

fail:
  ;
  return (_Bool)0;
}

// add_engine_driver_enum_constraint
// file ../dbus/params.c line 437
static _Bool add_engine_driver_enum_constraint(void *context, const char *name)
{
  strcpy((*((struct jack_parameter_enum **)context))->value.str, name);
  (*((struct jack_parameter_enum **)context))->short_desc = name;
  *((struct jack_parameter_enum **)context) = *((struct jack_parameter_enum **)context) + 1l;
  return (_Bool)1;
}

// add_variant
// file ../dbus/reserve.c line 93
static unsigned int add_variant(struct DBusMessage *m, signed int type, const void *data)
{
  struct DBusMessageIter iter;
  struct DBusMessageIter sub;
  char t[2l];
  t[(signed long int)0] = (char)type;
  t[(signed long int)1] = (char)0;
  dbus_message_iter_init_append(m, &iter);
  unsigned int return_value_dbus_message_iter_open_container_1;
  return_value_dbus_message_iter_open_container_1=dbus_message_iter_open_container(&iter, (signed int)118, t, &sub);
  if(return_value_dbus_message_iter_open_container_1 == 0u)
    return (unsigned int)0;

  else
  {
    unsigned int return_value_dbus_message_iter_append_basic_2;
    return_value_dbus_message_iter_append_basic_2=dbus_message_iter_append_basic(&sub, type, data);
    if(return_value_dbus_message_iter_append_basic_2 == 0u)
      return (unsigned int)0;

    else
    {
      unsigned int return_value_dbus_message_iter_close_container_3;
      return_value_dbus_message_iter_close_container_3=dbus_message_iter_close_container(&iter, &sub);
      if(return_value_dbus_message_iter_close_container_3 == 0u)
        return (unsigned int)0;

      else
        return (unsigned int)1;
    }
  }
}

// append_node_name
// file ../dbus/controller_iface_configure.c line 287
static _Bool append_node_name(void *context, const char *name)
{
  unsigned int return_value_dbus_message_iter_append_basic_1;
  return_value_dbus_message_iter_append_basic_1=dbus_message_iter_append_basic((struct DBusMessageIter *)context, (signed int)115, (const void *)&name);
  return (_Bool)return_value_dbus_message_iter_append_basic_1;
}

// append_parameter
// file ../dbus/controller_iface_configure.c line 368
static _Bool append_parameter(void *context, struct jack_parameter *param_ptr)
{
  struct DBusMessageIter struct_iter;
  unsigned char type;
  unsigned int return_value_dbus_message_iter_open_container_1;
  return_value_dbus_message_iter_open_container_1=dbus_message_iter_open_container((struct DBusMessageIter *)context, (signed int)114, (const char *)(void *)0, &struct_iter);
  unsigned int return_value_dbus_message_iter_append_basic_2;
  unsigned int return_value_dbus_message_iter_append_basic_3;
  unsigned int return_value_dbus_message_iter_append_basic_4;
  unsigned int return_value_dbus_message_iter_append_basic_5;
  unsigned int return_value_dbus_message_iter_close_container_6;
  if(!(return_value_dbus_message_iter_open_container_1 == 0u))
  {
    type = jack_controller_dbus_types[(signed long int)param_ptr->type];
    return_value_dbus_message_iter_append_basic_2=dbus_message_iter_append_basic(&struct_iter, (signed int)121, (const void *)&type);
    if(!(return_value_dbus_message_iter_append_basic_2 == 0u))
    {
      return_value_dbus_message_iter_append_basic_3=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&param_ptr->name);
      if(!(return_value_dbus_message_iter_append_basic_3 == 0u))
      {
        return_value_dbus_message_iter_append_basic_4=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&param_ptr->short_decr);
        if(!(return_value_dbus_message_iter_append_basic_4 == 0u))
        {
          return_value_dbus_message_iter_append_basic_5=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&param_ptr->long_descr);
          if(!(return_value_dbus_message_iter_append_basic_5 == 0u))
          {
            return_value_dbus_message_iter_close_container_6=dbus_message_iter_close_container((struct DBusMessageIter *)context, &struct_iter);
            if(return_value_dbus_message_iter_close_container_6 == 0u)
              goto fail;

            return (_Bool)1;
          }

        }

      }

    }


  fail_close:
    ;
    dbus_message_iter_close_container((struct DBusMessageIter *)context, &struct_iter);
  }


fail:
  ;
  return (_Bool)0;
}

// controlapi_parameter_get_default_value
// file ../dbus/params.c line 96
union jackctl_parameter_value controlapi_parameter_get_default_value(void *obj)
{
  union jackctl_parameter_value return_value_jackctl_parameter_get_default_value_1;
  return_value_jackctl_parameter_get_default_value_1=jackctl_parameter_get_default_value((struct jackctl_parameter *)obj);
  return return_value_jackctl_parameter_get_default_value_1;
}

// controlapi_parameter_get_value
// file ../dbus/params.c line 86
union jackctl_parameter_value controlapi_parameter_get_value(void *obj)
{
  union jackctl_parameter_value return_value_jackctl_parameter_get_value_1;
  return_value_jackctl_parameter_get_value_1=jackctl_parameter_get_value((struct jackctl_parameter *)obj);
  return return_value_jackctl_parameter_get_value_1;
}

// controlapi_parameter_is_set
// file ../dbus/params.c line 76
static _Bool controlapi_parameter_is_set(void *obj)
{
  _Bool return_value_jackctl_parameter_is_set_1;
  return_value_jackctl_parameter_is_set_1=jackctl_parameter_is_set((struct jackctl_parameter *)obj);
  return return_value_jackctl_parameter_is_set_1;
}

// controlapi_parameter_reset
// file ../dbus/params.c line 81
static _Bool controlapi_parameter_reset(void *obj)
{
  _Bool return_value_jackctl_parameter_reset_1;
  return_value_jackctl_parameter_reset_1=jackctl_parameter_reset((struct jackctl_parameter *)obj);
  return return_value_jackctl_parameter_reset_1;
}

// controlapi_parameter_set_value
// file ../dbus/params.c line 91
_Bool controlapi_parameter_set_value(void *obj, union jackctl_parameter_value *value_ptr)
{
  _Bool return_value_jackctl_parameter_set_value_1;
  return_value_jackctl_parameter_set_value_1=jackctl_parameter_set_value((struct jackctl_parameter *)obj, value_ptr);
  return return_value_jackctl_parameter_set_value_1;
}

// create_container
// file ../dbus/params.c line 101
static struct jack_parameter_container * create_container(struct list_head *parent_list_ptr, const char *name)
{
  struct jack_parameter_container *container_ptr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct jack_parameter_container) /*64ul*/ );
  container_ptr = (struct jack_parameter_container *)return_value_malloc_1;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    jack_error("Ran out of memory trying to allocate struct jack_parameter_container");

  else
  {
    container_ptr->name=strdup(name);
    if(container_ptr->name == ((char *)NULL))
      jack_error("Ran out of memory trying to strdup parameter container name");

    else
    {
      container_ptr->leaf = (_Bool)0;
      container_ptr->symlink = (struct jack_parameter_container *)(void *)0;
      container_ptr->obj = (void *)0;
      INIT_LIST_HEAD_link1(&container_ptr->children);
      list_add_tail_link1(&container_ptr->siblings, parent_list_ptr);
      return container_ptr;
    }

  free:
    ;
    free((void *)container_ptr);
  }

fail:
  ;
  return (struct jack_parameter_container *)(void *)0;
}

// engine_driver_parameter_get_default_value
// file ../dbus/params.c line 426
union jackctl_parameter_value engine_driver_parameter_get_default_value(void *obj)
{
  union jackctl_parameter_value value;
  strcpy(value.str, "dummy");
  return value;
}

// engine_driver_parameter_get_value
// file ../dbus/params.c line 412
union jackctl_parameter_value engine_driver_parameter_get_value(void *obj)
{
  union jackctl_parameter_value value;
  strcpy(value.str, ((struct jack_params *)obj)->driver_ptr->symlink->name);
  return value;
}

// engine_driver_parameter_is_set
// file ../dbus/params.c line 395
static _Bool engine_driver_parameter_is_set(void *obj)
{
  return ((struct jack_params *)obj)->driver_set;
}

// engine_driver_parameter_reset
// file ../dbus/params.c line 400
static _Bool engine_driver_parameter_reset(void *obj)
{
  _Bool return_value_jack_params_set_driver_1;
  return_value_jack_params_set_driver_1=jack_params_set_driver((struct _jack_params *)obj, "dummy");
  if(return_value_jack_params_set_driver_1 == (_Bool)0)
    return (_Bool)0;

  else
  {
    ((struct jack_params *)obj)->driver_set = (_Bool)0;
    return (_Bool)1;
  }
}

// engine_driver_parameter_set_value
// file ../dbus/params.c line 421
_Bool engine_driver_parameter_set_value(void *obj, union jackctl_parameter_value *value_ptr)
{
  _Bool return_value_jack_params_set_driver_1;
  return_value_jack_params_set_driver_1=jack_params_set_driver((struct _jack_params *)obj, value_ptr->str);
  return return_value_jack_params_set_driver_1;
}

// ensure_dir_exist
// file ../dbus/jackdbus.c line 644
_Bool ensure_dir_exist(const char *dirname, signed int mode)
{
  struct stat st;
  signed int return_value_stat_9;
  return_value_stat_9=stat(dirname, &st);
  if(!(return_value_stat_9 == 0))
  {
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    if(*return_value___errno_location_8 == 2)
    {
      printf("Directory \"%s\" does not exist. Creating...\n", dirname);
      signed int return_value_mkdir_4;
      return_value_mkdir_4=mkdir(dirname, (unsigned int)mode);
      if(!(return_value_mkdir_4 == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        fprintf(stderr, "Failed to create \"%s\" directory: %d (%s)\n", dirname, *return_value___errno_location_1, return_value_strerror_3);
        return (_Bool)0;
      }

    }

    else
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      char *return_value_strerror_7;
      return_value_strerror_7=strerror(*return_value___errno_location_6);
      fprintf(stderr, "Failed to stat \"%s\": %d (%s)\n", dirname, *return_value___errno_location_5, return_value_strerror_7);
      return (_Bool)0;
    }
  }

  else
    if(!((61440u & st.st_mode) == 16384u))
    {
      fprintf(stderr, "\"%s\" exists but is not directory.\n", dirname);
      return (_Bool)0;
    }

  return (_Bool)1;
}

// filter_handler
// file ../dbus/reserve.c line 294
static enum anonymous_8 filter_handler(struct DBusConnection *c, struct DBusMessage *m, void *userdata)
{
  struct DBusMessage *reply;
  struct rd_device *d;
  struct DBusError error;
  dbus_error_init(&error);
  d = (struct rd_device *)userdata;
  unsigned int return_value_dbus_message_is_signal_3;
  return_value_dbus_message_is_signal_3=dbus_message_is_signal(m, "org.freedesktop.DBus", "NameLost");
  if(!(return_value_dbus_message_is_signal_3 == 0u))
  {
    const char *name;
    unsigned int return_value_dbus_message_get_args_1;
    return_value_dbus_message_get_args_1=dbus_message_get_args(m, &error, (signed int)115, &name, (signed int)0);
    if(return_value_dbus_message_get_args_1 == 0u)
      goto invalid;

    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(name, d->service_name);
    if(return_value_strcmp_2 == 0)
    {
      if(!(d->owning == 0))
      {
        d->owning = 0;
        if(d->gave_up == 0)
        {
          d->ref = d->ref + 1;
          if(!(d->request_cb == ((signed int (*)(struct rd_device *, signed int))NULL)))
            d->request_cb(d, 1);

          d->gave_up = 1;
          rd_release(d);
        }

        return (enum anonymous_8)DBUS_HANDLER_RESULT_HANDLED;
      }

    }

  }

  return (enum anonymous_8)DBUS_HANDLER_RESULT_NOT_YET_HANDLED;

invalid:
  ;
  reply=dbus_message_new_error(m, "org.freedesktop.DBus.Error.InvalidArgs", "Invalid arguments");
  unsigned int return_value_dbus_connection_send_4;
  if(!(reply == ((struct DBusMessage *)NULL)))
  {
    return_value_dbus_connection_send_4=dbus_connection_send(c, reply, (unsigned int *)(void *)0);
    if(return_value_dbus_connection_send_4 == 0u)
      goto oom;

    dbus_message_unref(reply);
    dbus_error_free(&error);
    return (enum anonymous_8)DBUS_HANDLER_RESULT_HANDLED;
  }

  else
  {

  oom:
    ;
    if(!(reply == ((struct DBusMessage *)NULL)))
      dbus_message_unref(reply);

    dbus_error_free(&error);
    return (enum anonymous_8)DBUS_HANDLER_RESULT_NEED_MEMORY;
  }
}

// find_container
// file ../dbus/params.c line 255
static struct jack_parameter_container * find_container(struct jack_parameter_container *parent_ptr, const char * const *address, signed int max_depth)
{
  struct list_head *node_ptr;
  struct jack_parameter_container *container_ptr;
  _Bool tmp_if_expr_1;
  if(max_depth == 0)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = *address == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  struct jack_parameter_container *tmp_statement_expression_2;
  if(tmp_if_expr_1)
    return parent_ptr;

  else
    if(!(parent_ptr->leaf == (_Bool)0))
      return (struct jack_parameter_container *)(void *)0;

    else
    {
      if(max_depth >= 1)
        max_depth = max_depth - 1;

      node_ptr = (&parent_ptr->children)->next;
      do
      {
        node_ptr->next = node_ptr->next;
        if(node_ptr == &parent_ptr->children)
          break;

        const struct list_head *__mptr = node_ptr;
        tmp_statement_expression_2 = (struct jack_parameter_container *)((char *)__mptr - (signed long int)0ul);
        container_ptr = tmp_statement_expression_2;
        signed int return_value_strcmp_4;
        return_value_strcmp_4=strcmp(container_ptr->name, *address);
        if(return_value_strcmp_4 == 0)
        {
          if(!(container_ptr->symlink == ((struct jack_parameter_container *)NULL)))
            container_ptr = container_ptr->symlink;

          struct jack_parameter_container *return_value_find_container_3;
          return_value_find_container_3=find_container(container_ptr, address + (signed long int)1, max_depth);
          return return_value_find_container_3;
        }

        node_ptr = node_ptr->next;
      }
      while((_Bool)1);
      return (struct jack_parameter_container *)(void *)0;
    }
}

// free_containers
// file ../dbus/params.c line 232
static void free_containers(struct list_head *parent_list_ptr)
{
  struct jack_parameter_container *container_ptr;
  signed int return_value_list_empty_1;
  struct jack_parameter_container *tmp_statement_expression_2;
  do
  {
    return_value_list_empty_1=list_empty_link1(parent_list_ptr);
    if(!(return_value_list_empty_1 == 0))
      break;

    const struct list_head *__mptr = parent_list_ptr->next;
    tmp_statement_expression_2 = (struct jack_parameter_container *)((char *)__mptr - (signed long int)0ul);
    container_ptr = tmp_statement_expression_2;
    list_del_link1(&container_ptr->siblings);
    if(!(container_ptr->leaf == (_Bool)0))
      free_params(&container_ptr->children);

    else
      free_containers(&container_ptr->children);
    free((void *)container_ptr->name);
    free((void *)container_ptr);
  }
  while((_Bool)1);
}

// free_params
// file ../dbus/params.c line 207
static void free_params(struct list_head *parent_list_ptr)
{
  struct jack_parameter *param_ptr;
  signed int return_value_list_empty_1;
  struct jack_parameter *tmp_statement_expression_2;
  do
  {
    return_value_list_empty_1=list_empty_link1(parent_list_ptr);
    if(!(return_value_list_empty_1 == 0))
      break;

    const struct list_head *__mptr = parent_list_ptr->next;
    tmp_statement_expression_2 = (struct jack_parameter *)((char *)__mptr - (signed long int)48ul);
    param_ptr = tmp_statement_expression_2;
    list_del_link1(&param_ptr->siblings);
    if(param_ptr->ext == (_Bool)0)
    {
      if(!((1u & param_ptr->constraint_flags) == 0u))
      {
        if(param_ptr->constraint_range == (_Bool)0)
        {
          if(!(param_ptr->constraint.enumeration.possible_values_array == ((struct jack_parameter_enum *)NULL)))
            free((void *)param_ptr->constraint.enumeration.possible_values_array);

        }

      }

      free((void *)param_ptr);
    }

  }
  while((_Bool)1);
}

// init_driver
// file ../dbus/params.c line 378
static _Bool init_driver(struct jack_params *params_ptr)
{
  struct jack_parameter_container *container_ptr;
  container_ptr=create_container(&params_ptr->root.children, "driver");
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    return (_Bool)0;

  else
  {
    params_ptr->driver_ptr = container_ptr;
    return (_Bool)1;
  }
}

// init_drivers
// file ../dbus/params.c line 323
static _Bool init_drivers(struct jack_params *params_ptr)
{
  const struct _JSList *list;
  struct jack_parameter_container *container_ptr;
  container_ptr=create_container(&params_ptr->root.children, "drivers");
  struct _JSList *tmp_if_expr_4;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    return (_Bool)0;

  else
  {
    params_ptr->drivers_ptr = &container_ptr->children;
    params_ptr->drivers_count = (unsigned int)0;
    list=jackctl_server_get_drivers_list(params_ptr->server);
    while(!(list == ((const struct _JSList *)NULL)))
    {
      const char *return_value_jackctl_driver_get_name_1;
      return_value_jackctl_driver_get_name_1=jackctl_driver_get_name((struct jackctl_driver *)list->data);
      const struct _JSList *return_value_jackctl_driver_get_parameters_2;
      return_value_jackctl_driver_get_parameters_2=jackctl_driver_get_parameters((struct jackctl_driver *)list->data);
      _Bool return_value_init_leaf_3;
      return_value_init_leaf_3=init_leaf(&container_ptr->children, return_value_jackctl_driver_get_name_1, return_value_jackctl_driver_get_parameters_2, list->data);
      if(return_value_init_leaf_3 == (_Bool)0)
        return (_Bool)0;

      params_ptr->drivers_count = params_ptr->drivers_count + 1u;
      if(!(list == ((const struct _JSList *)NULL)))
        tmp_if_expr_4 = ((struct _JSList *)list)->next;

      else
        tmp_if_expr_4 = (struct _JSList *)(void *)0;
      list = tmp_if_expr_4;
    }
    return (_Bool)1;
  }
}

// init_engine
// file ../dbus/params.c line 318
static _Bool init_engine(struct jack_params *params_ptr)
{
  const struct _JSList *return_value_jackctl_server_get_parameters_1;
  return_value_jackctl_server_get_parameters_1=jackctl_server_get_parameters(params_ptr->server);
  _Bool return_value_init_leaf_2;
  return_value_init_leaf_2=init_leaf(&params_ptr->root.children, "engine", return_value_jackctl_server_get_parameters_1, (void *)0);
  return return_value_init_leaf_2;
}

// init_engine_driver_parameter
// file ../dbus/params.c line 445
static _Bool init_engine_driver_parameter(struct jack_params *params_ptr)
{
  struct jack_parameter *param_ptr;
  const char *address[3l] = { "engine", (const char *)(void *)0, ((const char *)NULL) };
  struct jack_parameter_container *engine_ptr;
  struct jack_parameter_enum *possible_value;
  engine_ptr=find_container(&params_ptr->root, address, 3);
  void *return_value_malloc_2;
  if(engine_ptr == ((struct jack_parameter_container *)NULL))
    return (_Bool)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct jack_parameter) /*360ul*/ );
    param_ptr = (struct jack_parameter *)return_value_malloc_1;
    if(param_ptr == ((struct jack_parameter *)NULL))
      jack_error("Ran out of memory trying to allocate struct jack_parameter");

    else
    {
      param_ptr->ext = (_Bool)0;
      param_ptr->obj = (void *)params_ptr;
      param_ptr->vtable.is_set = engine_driver_parameter_is_set;
      param_ptr->vtable.reset = engine_driver_parameter_reset;
      param_ptr->vtable.get_value = engine_driver_parameter_get_value;
      param_ptr->vtable.set_value = engine_driver_parameter_set_value;
      param_ptr->vtable.get_default_value = engine_driver_parameter_get_default_value;
      param_ptr->type = (enum anonymous_1)JackParamString;
      param_ptr->name = "driver";
      param_ptr->short_decr = "Driver to use";
      param_ptr->long_descr = "";
      param_ptr->constraint_flags = (unsigned int)1 | (unsigned int)2 | (unsigned int)4;
      param_ptr->constraint_range = (_Bool)0;
      param_ptr->constraint.enumeration.count = params_ptr->drivers_count;
      return_value_malloc_2=malloc(sizeof(struct jack_parameter_enum) /*136ul*/  * (unsigned long int)params_ptr->drivers_count);
      param_ptr->constraint.enumeration.possible_values_array = (struct jack_parameter_enum *)return_value_malloc_2;
      if(!(param_ptr->constraint.enumeration.possible_values_array == ((struct jack_parameter_enum *)NULL)))
      {
        address[(signed long int)0] = "drivers";
        possible_value = param_ptr->constraint.enumeration.possible_values_array;
        jack_params_iterate_container((struct _jack_params *)params_ptr, address, add_engine_driver_enum_constraint, (void *)&possible_value);
        list_add(&param_ptr->siblings, &engine_ptr->children);
        return (_Bool)1;
      }


    free:
      ;
      free((void *)param_ptr);
    }

  fail:
    ;
    return (_Bool)0;
  }
}

// init_internals
// file ../dbus/params.c line 353
static _Bool init_internals(struct jack_params *params_ptr)
{
  const struct _JSList *list;
  struct jack_parameter_container *container_ptr;
  container_ptr=create_container(&params_ptr->root.children, "internals");
  struct _JSList *tmp_if_expr_4;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    return (_Bool)0;

  else
  {
    list=jackctl_server_get_internals_list(params_ptr->server);
    while(!(list == ((const struct _JSList *)NULL)))
    {
      const char *return_value_jackctl_internal_get_name_1;
      return_value_jackctl_internal_get_name_1=jackctl_internal_get_name((struct jackctl_internal *)list->data);
      const struct _JSList *return_value_jackctl_internal_get_parameters_2;
      return_value_jackctl_internal_get_parameters_2=jackctl_internal_get_parameters((struct jackctl_internal *)list->data);
      _Bool return_value_init_leaf_3;
      return_value_init_leaf_3=init_leaf(&container_ptr->children, return_value_jackctl_internal_get_name_1, return_value_jackctl_internal_get_parameters_2, (void *)0);
      if(return_value_init_leaf_3 == (_Bool)0)
        return (_Bool)0;

      if(!(list == ((const struct _JSList *)NULL)))
        tmp_if_expr_4 = ((struct _JSList *)list)->next;

      else
        tmp_if_expr_4 = (struct _JSList *)(void *)0;
      list = tmp_if_expr_4;
    }
    return (_Bool)1;
  }
}

// init_leaf
// file ../dbus/params.c line 292
static _Bool init_leaf(struct list_head *parent_list_ptr, const char *name, const struct _JSList *params_list, void *obj)
{
  struct jack_parameter_container *container_ptr;
  container_ptr=create_container(parent_list_ptr, name);
  struct _JSList *tmp_if_expr_2;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    return (_Bool)0;

  else
  {
    container_ptr->leaf = (_Bool)1;
    container_ptr->obj = obj;
    while(!(params_list == ((const struct _JSList *)NULL)))
    {
      _Bool return_value_add_controlapi_param_1;
      return_value_add_controlapi_param_1=add_controlapi_param(&container_ptr->children, (struct jackctl_parameter *)params_list->data);
      if(return_value_add_controlapi_param_1 == (_Bool)0)
        return (_Bool)0;

      if(!(params_list == ((const struct _JSList *)NULL)))
        tmp_if_expr_2 = ((struct _JSList *)params_list)->next;

      else
        tmp_if_expr_2 = (struct _JSList *)(void *)0;
      params_list = tmp_if_expr_2;
    }
    return (_Bool)1;
  }
}

// jack_control_run_method
// file ../dbus/controller_iface_control.c line 67
static _Bool jack_control_run_method(struct jack_dbus_method_call *call, struct jack_dbus_interface_method_descriptor *methods)
{
  signed int ret;
  signed int type;
  union anonymous_5 arg;
  type = (signed int)0;
  signed int return_value_strcmp_33;
  return_value_strcmp_33=strcmp(call->method_name, "Exit");
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
  if(return_value_strcmp_33 == 0)
    g_exit_command = 1;

  else
  {
    return_value_strcmp_32=strcmp(call->method_name, "IsStarted");
    if(return_value_strcmp_32 == 0)
    {
      type = (signed int)98;
      arg.boolean = (unsigned int)(((struct jack_controller *)call->context)->started != (_Bool)0 ? 1 : 0);
    }

    else
    {
      return_value_strcmp_31=strcmp(call->method_name, "StartServer");
      if(return_value_strcmp_31 == 0)
      {
        if(!(((struct jack_controller *)call->context)->started == (_Bool)0))
          jack_info("Ignoring JACK server start request because server is already started.");

        else
        {
          _Bool return_value_jack_controller_start_server_1;
          return_value_jack_controller_start_server_1=jack_controller_start_server((struct jack_controller *)call->context, (void *)call);
          if(return_value_jack_controller_start_server_1 == (_Bool)0)
          {
            /* assertion call->reply != ((void *)0) */
            assert(call->reply != (struct DBusMessage *)(void *)0);
            return (_Bool)1;
          }

          jack_controller_control_send_signal_server_started();
        }
      }

      else
      {
        return_value_strcmp_30=strcmp(call->method_name, "StopServer");
        if(return_value_strcmp_30 == 0)
        {
          if(((struct jack_controller *)call->context)->started == (_Bool)0)
            jack_info("Ignoring JACK server stop request because server is already stopped.");

          else
          {
            _Bool return_value_jack_controller_stop_server_2;
            return_value_jack_controller_stop_server_2=jack_controller_stop_server((struct jack_controller *)call->context, (void *)call);
            if(return_value_jack_controller_stop_server_2 == (_Bool)0)
            {
              /* assertion call->reply != ((void *)0) */
              assert(call->reply != (struct DBusMessage *)(void *)0);
              return (_Bool)1;
            }

            jack_controller_control_send_signal_server_stopped();
          }
        }

        else
        {
          return_value_strcmp_29=strcmp(call->method_name, "SwitchMaster");
          if(return_value_strcmp_29 == 0)
          {
            if(((struct jack_controller *)call->context)->started == (_Bool)0)
              goto not_started;

            else
            {
              _Bool return_value_jack_controller_switch_master_3;
              return_value_jack_controller_switch_master_3=jack_controller_switch_master((struct jack_controller *)call->context, (void *)call);
              if(return_value_jack_controller_switch_master_3 == (_Bool)0)
              {
                /* assertion call->reply != ((void *)0) */
                assert(call->reply != (struct DBusMessage *)(void *)0);
                return (_Bool)1;
              }

            }
          }

          else
          {
            return_value_strcmp_28=strcmp(call->method_name, "GetLoad");
            if(return_value_strcmp_28 == 0)
            {
              if(((struct jack_controller *)call->context)->started == (_Bool)0)
                goto not_started;

              type = (signed int)100;
              float return_value_jack_cpu_load_4;
              return_value_jack_cpu_load_4=jack_cpu_load(((struct jack_controller *)call->context)->client);
              arg.doubl = (double)return_value_jack_cpu_load_4;
            }

            else
            {
              return_value_strcmp_27=strcmp(call->method_name, "GetXruns");
              if(return_value_strcmp_27 == 0)
              {
                type = (signed int)117;
                arg.uint32 = ((struct jack_controller *)call->context)->xruns;
              }

              else
              {
                return_value_strcmp_26=strcmp(call->method_name, "GetSampleRate");
                if(return_value_strcmp_26 == 0)
                {
                  if(((struct jack_controller *)call->context)->started == (_Bool)0)
                    goto not_started;

                  type = (signed int)117;
                  arg.uint32=jack_get_sample_rate(((struct jack_controller *)call->context)->client);
                }

                else
                {
                  return_value_strcmp_25=strcmp(call->method_name, "GetLatency");
                  if(return_value_strcmp_25 == 0)
                  {
                    if(((struct jack_controller *)call->context)->started == (_Bool)0)
                      goto not_started;

                    type = (signed int)100;
                    unsigned int return_value_jack_get_buffer_size_5;
                    return_value_jack_get_buffer_size_5=jack_get_buffer_size(((struct jack_controller *)call->context)->client);
                    unsigned int return_value_jack_get_sample_rate_6;
                    return_value_jack_get_sample_rate_6=jack_get_sample_rate(((struct jack_controller *)call->context)->client);
                    arg.doubl = (double)(((float)return_value_jack_get_buffer_size_5 / (float)return_value_jack_get_sample_rate_6) * 1000.0f);
                  }

                  else
                  {
                    return_value_strcmp_24=strcmp(call->method_name, "GetBufferSize");
                    if(return_value_strcmp_24 == 0)
                    {
                      if(((struct jack_controller *)call->context)->started == (_Bool)0)
                        goto not_started;

                      type = (signed int)117;
                      arg.uint32=jack_get_buffer_size(((struct jack_controller *)call->context)->client);
                    }

                    else
                    {
                      return_value_strcmp_23=strcmp(call->method_name, "SetBufferSize");
                      if(return_value_strcmp_23 == 0)
                      {
                        unsigned int buffer_size;
                        if(((struct jack_controller *)call->context)->started == (_Bool)0)
                          goto not_started;

                        _Bool return_value_jack_dbus_get_method_args_7;
                        return_value_jack_dbus_get_method_args_7=jack_dbus_get_method_args(call, (signed int)117, &buffer_size, (signed int)0);
                        if(return_value_jack_dbus_get_method_args_7 == (_Bool)0)
                          goto exit;

                        ret=jack_set_buffer_size(((struct jack_controller *)call->context)->client, buffer_size);
                        if(!(ret == 0))
                        {
                          jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_set_buffer_size(%u) failed with error %d", (unsigned int)buffer_size, ret);
                          goto exit;
                        }

                      }

                      else
                      {
                        return_value_strcmp_22=strcmp(call->method_name, "IsRealtime");
                        if(return_value_strcmp_22 == 0)
                        {
                          type = (signed int)98;
                          signed int return_value_jack_is_realtime_8;
                          return_value_jack_is_realtime_8=jack_is_realtime(((struct jack_controller *)call->context)->client);
                          arg.boolean = (unsigned int)(return_value_jack_is_realtime_8 != 0 ? 1 : 0);
                        }

                        else
                        {
                          return_value_strcmp_21=strcmp(call->method_name, "ResetXruns");
                          if(return_value_strcmp_21 == 0)
                            ((struct jack_controller *)call->context)->xruns = (unsigned int)0;

                          else
                          {
                            return_value_strcmp_20=strcmp(call->method_name, "LoadInternal");
                            if(return_value_strcmp_20 == 0)
                            {
                              const char *internal_name;
                              _Bool return_value_jack_dbus_get_method_args_9;
                              return_value_jack_dbus_get_method_args_9=jack_dbus_get_method_args(call, (signed int)115, &internal_name, (signed int)0);
                              if(return_value_jack_dbus_get_method_args_9 == (_Bool)0)
                                goto exit;

                              _Bool return_value_jack_controller_load_internal_10;
                              return_value_jack_controller_load_internal_10=jack_controller_load_internal((struct jack_controller *)call->context, internal_name);
                              if(return_value_jack_controller_load_internal_10 == (_Bool)0)
                                jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_controller_load_internal failed for internal (%s)", internal_name);

                            }

                            else
                            {
                              return_value_strcmp_19=strcmp(call->method_name, "AddSlaveDriver");
                              if(return_value_strcmp_19 == 0)
                              {
                                const char *driver_name;
                                if(((struct jack_controller *)call->context)->started != (_Bool)0)
                                  goto fail_started;

                                _Bool return_value_jack_dbus_get_method_args_11;
                                return_value_jack_dbus_get_method_args_11=jack_dbus_get_method_args(call, (signed int)115, &driver_name, (signed int)0);
                                if(return_value_jack_dbus_get_method_args_11 == (_Bool)0)
                                  goto exit;

                                _Bool return_value_jack_controller_add_slave_driver_12;
                                return_value_jack_controller_add_slave_driver_12=jack_controller_add_slave_driver((struct jack_controller *)call->context, driver_name);
                                if(return_value_jack_controller_add_slave_driver_12 == (_Bool)0)
                                  jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_controller_add_slave_driver failed for driver (%s)", driver_name);

                                else
                                  jack_controller_pending_save((struct jack_controller *)call->context);
                              }

                              else
                              {
                                return_value_strcmp_18=strcmp(call->method_name, "RemoveSlaveDriver");
                                if(return_value_strcmp_18 == 0)
                                {
                                  const char *jack_control_run_method__1__16__driver_name;
                                  if(((struct jack_controller *)call->context)->started != (_Bool)0)
                                    goto fail_started;

                                  _Bool return_value_jack_dbus_get_method_args_13;
                                  return_value_jack_dbus_get_method_args_13=jack_dbus_get_method_args(call, (signed int)115, &jack_control_run_method__1__16__driver_name, (signed int)0);
                                  if(return_value_jack_dbus_get_method_args_13 == (_Bool)0)
                                    goto exit;

                                  _Bool return_value_jack_controller_remove_slave_driver_14;
                                  return_value_jack_controller_remove_slave_driver_14=jack_controller_remove_slave_driver((struct jack_controller *)call->context, jack_control_run_method__1__16__driver_name);
                                  if(return_value_jack_controller_remove_slave_driver_14 == (_Bool)0)
                                    jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_controller_remove_slave_driver failed for driver (%s)", jack_control_run_method__1__16__driver_name);

                                  else
                                    jack_controller_pending_save((struct jack_controller *)call->context);
                                }

                                else
                                {
                                  return_value_strcmp_17=strcmp(call->method_name, "UnloadInternal");
                                  if(return_value_strcmp_17 == 0)
                                  {
                                    const char *jack_control_run_method__1__17__internal_name;
                                    _Bool return_value_jack_dbus_get_method_args_15;
                                    return_value_jack_dbus_get_method_args_15=jack_dbus_get_method_args(call, (signed int)115, &jack_control_run_method__1__17__internal_name, (signed int)0);
                                    if(return_value_jack_dbus_get_method_args_15 == (_Bool)0)
                                      goto exit;

                                    _Bool return_value_jack_controller_unload_internal_16;
                                    return_value_jack_controller_unload_internal_16=jack_controller_unload_internal((struct jack_controller *)call->context, jack_control_run_method__1__17__internal_name);
                                    if(return_value_jack_controller_unload_internal_16 == (_Bool)0)
                                      jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_controller_unload_internal failed for internal (%s)", jack_control_run_method__1__17__internal_name);

                                  }

                                  else
                                    return (_Bool)0;
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
  jack_dbus_construct_method_return_single(call, type, arg);
  goto exit;

not_started:
  ;
  jack_dbus_only_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute method '%s' with stopped JACK server", call->method_name);
  goto exit;

fail_started:
  ;
  jack_dbus_only_error((void *)call, "org.jackaudio.Error.ServerRunning", "Can't execute method '%s' with started JACK server", call->method_name);

exit:
  ;
  return (_Bool)1;
}

// jack_controller_add_slave_driver
// file ../dbus/controller.c line 626
_Bool jack_controller_add_slave_driver(struct jack_controller *controller_ptr, const char *driver_name)
{
  struct jackctl_driver *driver;
  struct jack_controller_slave_driver *driver_ptr;
  unsigned long int len_old;
  unsigned long int len_new;
  len_old=strlen(controller_ptr->slave_drivers_vparam_value.str);
  len_new=strlen(driver_name);
  unsigned long int tmp_post_3;
  if(2ul + len_new + len_old >= 129ul)
  {
    jack_error("No more space for slave drivers.");
    return (_Bool)0;
  }

  else
  {
    driver=jack_controller_find_driver(controller_ptr->server, driver_name);
    if(driver == ((struct jackctl_driver *)NULL))
    {
      jack_error("Unknown driver \"%s\"", driver_name);
      return (_Bool)0;
    }

    else
    {
      _Bool return_value_jack_controller_check_slave_driver_1;
      return_value_jack_controller_check_slave_driver_1=jack_controller_check_slave_driver(controller_ptr, driver_name);
      if(!(return_value_jack_controller_check_slave_driver_1 == (_Bool)0))
      {
        jack_info("Driver \"%s\" is already slave", driver_name);
        return (_Bool)1;
      }

      else
      {
        void *return_value_malloc_2;
        return_value_malloc_2=malloc(sizeof(struct jack_controller_slave_driver) /*40ul*/ );
        driver_ptr = (struct jack_controller_slave_driver *)return_value_malloc_2;
        if(driver_ptr == ((struct jack_controller_slave_driver *)NULL))
        {
          jack_error("malloc() failed to allocate jack_controller_slave_driver struct");
          return (_Bool)0;
        }

        else
        {
          driver_ptr->name=strdup(driver_name);
          if(driver_ptr->name == ((char *)NULL))
          {
            jack_error("strdup() failed for slave driver name \"%s\"", driver_name);
            free((void *)driver_ptr);
            return (_Bool)0;
          }

          else
          {
            driver_ptr->handle = driver;
            driver_ptr->loaded = (_Bool)0;
            jack_info("driver \"%s\" set as slave", driver_name);
            list_add_tail(&driver_ptr->siblings, &controller_ptr->slave_drivers);
            if(!(len_old == 0ul))
            {
              tmp_post_3 = len_old;
              len_old = len_old + 1ul;
              controller_ptr->slave_drivers_vparam_value.str[(signed long int)tmp_post_3] = (char)44;
            }

            memcpy((void *)(controller_ptr->slave_drivers_vparam_value.str + (signed long int)len_old), (const void *)driver_name, len_new + (unsigned long int)1);
            controller_ptr->slave_drivers_set = (_Bool)1;
            return (_Bool)1;
          }
        }
      }
    }
  }
}

// jack_controller_check_slave_driver
// file ../dbus/controller.c line 72
static _Bool jack_controller_check_slave_driver(struct jack_controller *controller_ptr, const char *name)
{
  struct list_head *node_ptr;
  struct jack_controller_slave_driver *driver_ptr;
  node_ptr = (&controller_ptr->slave_drivers)->next;
  struct jack_controller_slave_driver *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &controller_ptr->slave_drivers)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_controller_slave_driver *)((char *)__mptr - (signed long int)0ul);
    driver_ptr = tmp_statement_expression_1;
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(name, driver_ptr->name);
    if(return_value_strcmp_2 == 0)
      return (_Bool)1;

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (_Bool)0;
}

// jack_controller_client_registration_callback
// file ../dbus/controller_iface_patchbay.c line 1540
void jack_controller_client_registration_callback(const char *client_name, signed int created, void *context)
{
  if(!(created == 0))
  {
    jack_log("client '%s' created", client_name);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(client_name);
    jack_controller_patchbay_create_client((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, client_name, return_value_strlen_1);
  }

  else
  {
    jack_log("client '%s' destroyed", client_name);
    jack_controller_patchbay_destroy_client_by_name((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, client_name);
  }
}

// jack_controller_control_send_signal_server_started
// file ../dbus/controller_iface_control.c line 38
void jack_controller_control_send_signal_server_started()
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackControl", "ServerStarted", (signed int)0);
}

// jack_controller_control_send_signal_server_stopped
// file ../dbus/controller_iface_control.c line 49
void jack_controller_control_send_signal_server_stopped()
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackControl", "ServerStopped", (signed int)0);
}

// jack_controller_control_send_signal_session_state_changed
// file ../dbus/controller_iface_session_manager.c line 39
static void jack_controller_control_send_signal_session_state_changed(enum JackSessionEventType type, const char *target)
{
  unsigned int u32 = (unsigned int)type;
  if(target == ((const char *)NULL))
    target = "";

  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.SessionManager", "StateChanged", (signed int)117, &u32, (signed int)115, &target, (signed int)0);
}

// jack_controller_create
// file ../dbus/controller.h line 24
void * jack_controller_create(struct DBusConnection *connection)
{
  signed int error;
  struct jack_controller *controller_ptr;
  const char *address[3l];
  struct DBusObjectPathVTable jack_controller_create__1__vtable = { .unregister_function=jack_dbus_message_handler_unregister, .message_function=jack_dbus_message_handler,
    .dbus_internal_pad1=(void (*)(void *))(void *)0,
    .dbus_internal_pad2=((void (*)(void *))NULL),
    .dbus_internal_pad3=((void (*)(void *))NULL),
    .dbus_internal_pad4=((void (*)(void *))NULL) };
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct jack_controller) /*640ul*/ );
  controller_ptr = (struct jack_controller *)return_value_malloc_1;
  unsigned int return_value_dbus_connection_register_object_path_2;
  if(controller_ptr == ((struct jack_controller *)NULL))
    jack_error("Ran out of memory trying to allocate struct jack_controller");

  else
  {
    error=pthread_mutex_init(&controller_ptr->lock, (const union anonymous_6 *)(void *)0);
    if(!(error == 0))
      jack_error("Failed to initialize mutex. error %d", error);

    else
    {
      INIT_LIST_HEAD(&controller_ptr->session_pending_commands);
      controller_ptr->server=jackctl_server_create(on_device_acquire, on_device_release);
      if(controller_ptr->server == ((struct jackctl_server *)NULL))
        jack_error("Failed to create server object");

      else
      {
        controller_ptr->params=jack_params_create(controller_ptr->server);
        if(controller_ptr->params == ((struct _jack_params *)NULL))
          jack_error("Failed to initialize parameter tree");

        else
        {
          controller_ptr->client = (struct _jack_client *)(void *)0;
          controller_ptr->started = (_Bool)0;
          controller_ptr->pending_save = (signed long int)0;
          INIT_LIST_HEAD(&controller_ptr->slave_drivers);
          controller_ptr->slave_drivers_set = (_Bool)0;
          controller_ptr->slave_drivers_vparam_value.str[(signed long int)0] = (char)0;
          controller_ptr->slave_drivers_vparam.obj = (void *)controller_ptr;
          controller_ptr->slave_drivers_vparam.vtable.is_set = slave_drivers_parameter_is_set;
          controller_ptr->slave_drivers_vparam.vtable.reset = slave_drivers_parameter_reset;
          controller_ptr->slave_drivers_vparam.vtable.get_value = slave_drivers_parameter_get_value;
          controller_ptr->slave_drivers_vparam.vtable.set_value = slave_drivers_parameter_set_value;
          controller_ptr->slave_drivers_vparam.vtable.get_default_value = slave_drivers_parameter_get_default_value;
          controller_ptr->slave_drivers_vparam.type = (enum anonymous_1)JackParamString;
          controller_ptr->slave_drivers_vparam.name = "slave-drivers";
          controller_ptr->slave_drivers_vparam.short_decr = "Slave drivers to use";
          controller_ptr->slave_drivers_vparam.long_descr = "A comma separated list of slave drivers";
          controller_ptr->slave_drivers_vparam.constraint_flags = (unsigned int)0;
          address[(signed long int)0] = "engine";
          address[(signed long int)1] = (const char *)(void *)0;
          jack_params_add_parameter(controller_ptr->params, address, (_Bool)1, &controller_ptr->slave_drivers_vparam);
          controller_ptr->dbus_descriptor.context = (void *)controller_ptr;
          controller_ptr->dbus_descriptor.interfaces = g_jackcontroller_interfaces;
          return_value_dbus_connection_register_object_path_2=dbus_connection_register_object_path(connection, "/org/jackaudio/Controller", &jack_controller_create__1__vtable, (void *)&controller_ptr->dbus_descriptor);
          if(return_value_dbus_connection_register_object_path_2 == 0u)
            jack_error("Ran out of memory trying to register D-Bus object path");

          else
          {
            jack_controller_settings_load(controller_ptr);
            return (void *)controller_ptr;
          }

        fail_destroy_params:
          ;
          jack_params_destroy(controller_ptr->params);
        }

      fail_destroy_server:
        ;
        jackctl_server_destroy(controller_ptr->server);
      }

    fail_uninit_mutex:
      ;
      pthread_mutex_destroy(&controller_ptr->lock);
    }

  fail_free:
    ;
    free((void *)controller_ptr);
  }

fail:
  ;
  return (void *)0;
}

// jack_controller_dbus_connect_ports_by_id
// file ../dbus/controller_iface_patchbay.c line 1203
static void jack_controller_dbus_connect_ports_by_id(struct jack_dbus_method_call *call)
{
  unsigned long int port1_id;
  unsigned long int port2_id;
  struct jack_graph_port *port1_ptr;
  struct jack_graph_port *port2_ptr;
  _Bool return_value_jack_controller_patchbay_connect_2;
  if(((struct jack_controller *)call->context)->started == (_Bool)0)
    jack_dbus_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute this method with stopped JACK server");

  else
  {
    _Bool return_value_jack_dbus_get_method_args_1;
    return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)116, &port1_id, (signed int)116, &port2_id, (signed int)0);
    if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
    {
      pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
      port1_ptr=jack_controller_patchbay_find_port_by_id((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, port1_id);
      if(port1_ptr == ((struct jack_graph_port *)NULL))
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port %lu", port1_id);

      else
      {
        port2_ptr=jack_controller_patchbay_find_port_by_id((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, port2_id);
        if(port2_ptr == ((struct jack_graph_port *)NULL))
          jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port %lu", port2_id);

        else
        {
          return_value_jack_controller_patchbay_connect_2=jack_controller_patchbay_connect(call, (struct jack_controller *)call->context, port1_ptr, port2_ptr);
          if(!(return_value_jack_controller_patchbay_connect_2 == (_Bool)0))
            jack_dbus_construct_method_return_empty(call);

        }
      }

    unlock:
      ;
      pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
    }

  }
}

// jack_controller_dbus_connect_ports_by_name
// file ../dbus/controller_iface_patchbay.c line 1128
static void jack_controller_dbus_connect_ports_by_name(struct jack_dbus_method_call *call)
{
  const char *client1_name;
  const char *port1_name;
  const char *client2_name;
  const char *port2_name;
  struct jack_graph_port *port1_ptr;
  struct jack_graph_port *port2_ptr;
  _Bool return_value_jack_controller_patchbay_connect_2;
  if(((struct jack_controller *)call->context)->started == (_Bool)0)
    jack_dbus_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute this method with stopped JACK server");

  else
  {
    _Bool return_value_jack_dbus_get_method_args_1;
    return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)115, &client1_name, (signed int)115, &port1_name, (signed int)115, &client2_name, (signed int)115, &port2_name, (signed int)0);
    if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
    {
      pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
      port1_ptr=jack_controller_patchbay_find_port_by_names((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, client1_name, port1_name);
      if(port1_ptr == ((struct jack_graph_port *)NULL))
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port '%s':'%s'", client1_name, port1_name);

      else
      {
        port2_ptr=jack_controller_patchbay_find_port_by_names((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, client2_name, port2_name);
        if(port2_ptr == ((struct jack_graph_port *)NULL))
          jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port '%s':'%s'", client2_name, port2_name);

        else
        {
          return_value_jack_controller_patchbay_connect_2=jack_controller_patchbay_connect(call, (struct jack_controller *)call->context, port1_ptr, port2_ptr);
          if(!(return_value_jack_controller_patchbay_connect_2 == (_Bool)0))
            jack_dbus_construct_method_return_empty(call);

        }
      }

    unlock:
      ;
      pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
    }

  }
}

// jack_controller_dbus_disconnect_ports_by_connection_id
// file ../dbus/controller_iface_patchbay.c line 1412
static void jack_controller_dbus_disconnect_ports_by_connection_id(struct jack_dbus_method_call *call)
{
  unsigned long int connection_id;
  struct jack_graph_connection *connection_ptr;
  _Bool return_value_jack_dbus_get_method_args_1;
  return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)116, &connection_id, (signed int)0);
  _Bool return_value_jack_controller_patchbay_disconnect_2;
  if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
  {
    pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
    connection_ptr=jack_controller_patchbay_find_connection_by_id((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, connection_id);
    if(connection_ptr == ((struct jack_graph_connection *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find connection %lu", connection_id);

    else
    {
      return_value_jack_controller_patchbay_disconnect_2=jack_controller_patchbay_disconnect(call, (struct jack_controller *)call->context, connection_ptr->port1, connection_ptr->port2);
      if(!(return_value_jack_controller_patchbay_disconnect_2 == (_Bool)0))
        jack_dbus_construct_method_return_empty(call);

    }

  unlock:
    ;
    pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
  }

}

// jack_controller_dbus_disconnect_ports_by_id
// file ../dbus/controller_iface_patchbay.c line 1345
static void jack_controller_dbus_disconnect_ports_by_id(struct jack_dbus_method_call *call)
{
  unsigned long int port1_id;
  unsigned long int port2_id;
  struct jack_graph_port *port1_ptr;
  struct jack_graph_port *port2_ptr;
  _Bool return_value_jack_controller_patchbay_disconnect_2;
  if(((struct jack_controller *)call->context)->started == (_Bool)0)
    jack_dbus_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute this method with stopped JACK server");

  else
  {
    _Bool return_value_jack_dbus_get_method_args_1;
    return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)116, &port1_id, (signed int)116, &port2_id, (signed int)0);
    if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
    {
      pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
      port1_ptr=jack_controller_patchbay_find_port_by_id((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, port1_id);
      if(port1_ptr == ((struct jack_graph_port *)NULL))
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port %lu", port1_id);

      else
      {
        port2_ptr=jack_controller_patchbay_find_port_by_id((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, port2_id);
        if(port2_ptr == ((struct jack_graph_port *)NULL))
          jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port %lu", port2_id);

        else
        {
          return_value_jack_controller_patchbay_disconnect_2=jack_controller_patchbay_disconnect(call, (struct jack_controller *)call->context, port1_ptr, port2_ptr);
          if(!(return_value_jack_controller_patchbay_disconnect_2 == (_Bool)0))
            jack_dbus_construct_method_return_empty(call);

        }
      }

    unlock:
      ;
      pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
    }

  }
}

// jack_controller_dbus_disconnect_ports_by_name
// file ../dbus/controller_iface_patchbay.c line 1270
static void jack_controller_dbus_disconnect_ports_by_name(struct jack_dbus_method_call *call)
{
  const char *client1_name;
  const char *port1_name;
  const char *client2_name;
  const char *port2_name;
  struct jack_graph_port *port1_ptr;
  struct jack_graph_port *port2_ptr;
  _Bool return_value_jack_controller_patchbay_disconnect_2;
  if(((struct jack_controller *)call->context)->started == (_Bool)0)
    jack_dbus_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute this method with stopped JACK server");

  else
  {
    _Bool return_value_jack_dbus_get_method_args_1;
    return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)115, &client1_name, (signed int)115, &port1_name, (signed int)115, &client2_name, (signed int)115, &port2_name, (signed int)0);
    if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
    {
      pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
      port1_ptr=jack_controller_patchbay_find_port_by_names((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, client1_name, port1_name);
      if(port1_ptr == ((struct jack_graph_port *)NULL))
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port '%s':'%s'", client1_name, port1_name);

      else
      {
        port2_ptr=jack_controller_patchbay_find_port_by_names((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, client2_name, port2_name);
        if(port2_ptr == ((struct jack_graph_port *)NULL))
          jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find port '%s':'%s'", client2_name, port2_name);

        else
        {
          return_value_jack_controller_patchbay_disconnect_2=jack_controller_patchbay_disconnect(call, (struct jack_controller *)call->context, port1_ptr, port2_ptr);
          if(!(return_value_jack_controller_patchbay_disconnect_2 == (_Bool)0))
            jack_dbus_construct_method_return_empty(call);

        }
      }

    unlock:
      ;
      pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
    }

  }
}

// jack_controller_dbus_get_all_ports
// file ../dbus/controller_iface_patchbay.c line 797
static void jack_controller_dbus_get_all_ports(struct jack_dbus_method_call *call)
{
  struct list_head *client_node_ptr;
  struct list_head *port_node_ptr;
  struct jack_graph_client *client_ptr;
  struct jack_graph_port *port_ptr;
  struct DBusMessageIter iter;
  struct DBusMessageIter sub_iter;
  char fullname[320l];
  char *fullname_var = fullname;
  unsigned int return_value_dbus_message_iter_open_container_1;
  struct jack_graph_client *tmp_statement_expression_2;
  struct jack_graph_port *tmp_statement_expression_3;
  unsigned int return_value_dbus_message_iter_close_container_5;
  if(((struct jack_controller *)call->context)->started == (_Bool)0)
    jack_dbus_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute this method with stopped JACK server");

  else
  {
    call->reply=dbus_message_new_method_return(call->message);
    if(!(call->reply == ((struct DBusMessage *)NULL)))
    {
      dbus_message_iter_init_append(call->reply, &iter);
      return_value_dbus_message_iter_open_container_1=dbus_message_iter_open_container(&iter, (signed int)97, "s", &sub_iter);
      if(!(return_value_dbus_message_iter_open_container_1 == 0u))
      {
        pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
        client_node_ptr = (&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.clients)->next;
        do
        {
          client_node_ptr->next = client_node_ptr->next;
          if(client_node_ptr == &((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.clients)
            break;

          const struct list_head *__mptr = client_node_ptr;
          tmp_statement_expression_2 = (struct jack_graph_client *)((char *)__mptr - (signed long int)24ul);
          client_ptr = tmp_statement_expression_2;
          port_node_ptr = (&client_ptr->ports)->next;
          do
          {
            port_node_ptr->next = port_node_ptr->next;
            if(port_node_ptr == &client_ptr->ports)
              break;

            const struct list_head *jack_controller_dbus_get_all_ports__1__4__1__2__1__1____mptr = port_node_ptr;
            tmp_statement_expression_3 = (struct jack_graph_port *)((char *)jack_controller_dbus_get_all_ports__1__4__1__2__1__1____mptr - (signed long int)40ul);
            port_ptr = tmp_statement_expression_3;
            jack_info("%s:%s", client_ptr->name, port_ptr->name);
            sprintf(fullname, "%s:%s", client_ptr->name, port_ptr->name);
            unsigned int return_value_dbus_message_iter_append_basic_4;
            return_value_dbus_message_iter_append_basic_4=dbus_message_iter_append_basic(&sub_iter, (signed int)115, (const void *)&fullname_var);
            if(return_value_dbus_message_iter_append_basic_4 == 0u)
            {
              pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
              dbus_message_iter_close_container(&iter, &sub_iter);
              goto fail_unref;
            }

            port_node_ptr = port_node_ptr->next;
          }
          while((_Bool)1);
          client_node_ptr = client_node_ptr->next;
        }
        while((_Bool)1);
        pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
        return_value_dbus_message_iter_close_container_5=dbus_message_iter_close_container(&iter, &sub_iter);
        if(!(return_value_dbus_message_iter_close_container_5 == 0u))
          goto __CPROVER_DUMP_L9;

      }


    fail_unref:
      ;
      dbus_message_unref(call->reply);
      call->reply = (struct DBusMessage *)(void *)0;
    }


  fail:
    ;
    jack_error("Ran out of memory trying to construct method return");
  }

__CPROVER_DUMP_L9:
  ;
}

// jack_controller_dbus_get_client_name_by_uuid
// file ../dbus/controller_iface_session_manager.c line 378
static void jack_controller_dbus_get_client_name_by_uuid(struct jack_dbus_method_call *call)
{
  const char *client_uuid;
  char *client_name;
  _Bool return_value_jack_dbus_get_method_args_1;
  return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)115, &client_uuid, (signed int)0);
  if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
  {
    client_name=jack_get_client_name_by_uuid(((struct jack_controller *)call->context)->client, client_uuid);
    if(client_name == ((char *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_get_client_name_by_uuid(\"%s\") failed", client_uuid);

    else
    {
      jack_dbus_construct_method_return_single(call, (signed int)115, (union anonymous_5){ .string=(const char *)client_name });
      free((void *)client_name);
    }
  }

}

// jack_controller_dbus_get_client_pid
// file ../dbus/controller_iface_patchbay.c line 1459
static void jack_controller_dbus_get_client_pid(struct jack_dbus_method_call *call)
{
  unsigned long int client_id;
  struct jack_graph_client *client_ptr;
  union anonymous_5 arg;
  _Bool return_value_jack_dbus_get_method_args_1;
  return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)116, &client_id, (signed int)0);
  if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
  {
    pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
    client_ptr=jack_controller_patchbay_find_client_by_id((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context, client_id);
    if(client_ptr == ((struct jack_graph_client *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "cannot find client %lu", client_id);

    else
    {
      arg.int64 = (signed long int)client_ptr->pid;
      jack_dbus_construct_method_return_single(call, (signed int)120, arg);
    }

  unlock:
    ;
    pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
  }

}

// jack_controller_dbus_get_graph
// file ../dbus/controller_iface_patchbay.c line 870
static void jack_controller_dbus_get_graph(struct jack_dbus_method_call *call)
{
  struct list_head *client_node_ptr;
  struct list_head *port_node_ptr;
  struct list_head *connection_node_ptr;
  struct jack_graph_client *client_ptr;
  struct jack_graph_port *port_ptr;
  struct jack_graph_connection *connection_ptr;
  struct DBusMessageIter iter;
  struct DBusMessageIter clients_array_iter;
  struct DBusMessageIter client_struct_iter;
  struct DBusMessageIter ports_array_iter;
  struct DBusMessageIter port_struct_iter;
  unsigned long int version;
  struct DBusMessageIter connections_array_iter;
  struct DBusMessageIter connection_struct_iter;
  unsigned int return_value_dbus_message_iter_append_basic_2;
  unsigned int return_value_dbus_message_iter_open_container_3;
  struct jack_graph_client *tmp_statement_expression_4;
  struct jack_graph_port *tmp_statement_expression_9;
  unsigned int return_value_dbus_message_iter_close_container_18;
  unsigned int return_value_dbus_message_iter_open_container_19;
  struct jack_graph_connection *tmp_statement_expression_20;
  unsigned int return_value_dbus_message_iter_close_container_32;
  if(((struct jack_controller *)call->context)->started == (_Bool)0)
    jack_dbus_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute this method with stopped JACK server");

  else
  {
    _Bool return_value_jack_dbus_get_method_args_1;
    return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)116, &version, (signed int)0);
    if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
    {
      call->reply=dbus_message_new_method_return(call->message);
      if(call->reply == ((struct DBusMessage *)NULL))
        jack_error("Ran out of memory trying to construct method return");

      else
      {
        dbus_message_iter_init_append(call->reply, &iter);
        pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
        if(!(((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.version >= version))
        {
          jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "known graph version %lu is newer than actual version %lu", version, ((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.version);
          pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
        }

        else
        {
          return_value_dbus_message_iter_append_basic_2=dbus_message_iter_append_basic(&iter, (signed int)116, (const void *)&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.version);
          if(!(return_value_dbus_message_iter_append_basic_2 == 0u))
          {
            return_value_dbus_message_iter_open_container_3=dbus_message_iter_open_container(&iter, (signed int)97, "(tsa(tsuu))", &clients_array_iter);
            if(!(return_value_dbus_message_iter_open_container_3 == 0u))
            {
              if(!(version >= ((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.version))
              {
                client_node_ptr = (&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.clients)->next;
                do
                {
                  client_node_ptr->next = client_node_ptr->next;
                  if(client_node_ptr == &((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.clients)
                    break;

                  const struct list_head *__mptr = client_node_ptr;
                  tmp_statement_expression_4 = (struct jack_graph_client *)((char *)__mptr - (signed long int)24ul);
                  client_ptr = tmp_statement_expression_4;
                  unsigned int return_value_dbus_message_iter_open_container_5;
                  return_value_dbus_message_iter_open_container_5=dbus_message_iter_open_container(&clients_array_iter, (signed int)114, (const char *)(void *)0, &client_struct_iter);
                  if(return_value_dbus_message_iter_open_container_5 == 0u)
                    goto nomem_close_clients_array;

                  unsigned int return_value_dbus_message_iter_append_basic_6;
                  return_value_dbus_message_iter_append_basic_6=dbus_message_iter_append_basic(&client_struct_iter, (signed int)116, (const void *)&client_ptr->id);
                  if(return_value_dbus_message_iter_append_basic_6 == 0u)
                    goto nomem_close_client_struct;

                  unsigned int return_value_dbus_message_iter_append_basic_7;
                  return_value_dbus_message_iter_append_basic_7=dbus_message_iter_append_basic(&client_struct_iter, (signed int)115, (const void *)&client_ptr->name);
                  if(return_value_dbus_message_iter_append_basic_7 == 0u)
                    goto nomem_close_client_struct;

                  unsigned int return_value_dbus_message_iter_open_container_8;
                  return_value_dbus_message_iter_open_container_8=dbus_message_iter_open_container(&client_struct_iter, (signed int)97, "(tsuu)", &ports_array_iter);
                  if(return_value_dbus_message_iter_open_container_8 == 0u)
                    goto nomem_close_client_struct;

                  port_node_ptr = (&client_ptr->ports)->next;
                  do
                  {
                    port_node_ptr->next = port_node_ptr->next;
                    if(port_node_ptr == &client_ptr->ports)
                      break;

                    const struct list_head *jack_controller_dbus_get_graph__1__7__1__1__6__1__1____mptr = port_node_ptr;
                    tmp_statement_expression_9 = (struct jack_graph_port *)((char *)jack_controller_dbus_get_graph__1__7__1__1__6__1__1____mptr - (signed long int)40ul);
                    port_ptr = tmp_statement_expression_9;
                    unsigned int return_value_dbus_message_iter_open_container_10;
                    return_value_dbus_message_iter_open_container_10=dbus_message_iter_open_container(&ports_array_iter, (signed int)114, (const char *)(void *)0, &port_struct_iter);
                    if(return_value_dbus_message_iter_open_container_10 == 0u)
                      goto nomem_close_ports_array;

                    unsigned int return_value_dbus_message_iter_append_basic_11;
                    return_value_dbus_message_iter_append_basic_11=dbus_message_iter_append_basic(&port_struct_iter, (signed int)116, (const void *)&port_ptr->id);
                    if(return_value_dbus_message_iter_append_basic_11 == 0u)
                      goto nomem_close_port_struct;

                    unsigned int return_value_dbus_message_iter_append_basic_12;
                    return_value_dbus_message_iter_append_basic_12=dbus_message_iter_append_basic(&port_struct_iter, (signed int)115, (const void *)&port_ptr->name);
                    if(return_value_dbus_message_iter_append_basic_12 == 0u)
                      goto nomem_close_port_struct;

                    unsigned int return_value_dbus_message_iter_append_basic_13;
                    return_value_dbus_message_iter_append_basic_13=dbus_message_iter_append_basic(&port_struct_iter, (signed int)117, (const void *)&port_ptr->flags);
                    if(return_value_dbus_message_iter_append_basic_13 == 0u)
                      goto nomem_close_port_struct;

                    unsigned int return_value_dbus_message_iter_append_basic_14;
                    return_value_dbus_message_iter_append_basic_14=dbus_message_iter_append_basic(&port_struct_iter, (signed int)117, (const void *)&port_ptr->type);
                    if(return_value_dbus_message_iter_append_basic_14 == 0u)
                      goto nomem_close_port_struct;

                    unsigned int return_value_dbus_message_iter_close_container_15;
                    return_value_dbus_message_iter_close_container_15=dbus_message_iter_close_container(&ports_array_iter, &port_struct_iter);
                    if(return_value_dbus_message_iter_close_container_15 == 0u)
                      goto nomem_close_ports_array;

                    port_node_ptr = port_node_ptr->next;
                  }
                  while((_Bool)1);
                  unsigned int return_value_dbus_message_iter_close_container_16;
                  return_value_dbus_message_iter_close_container_16=dbus_message_iter_close_container(&client_struct_iter, &ports_array_iter);
                  if(return_value_dbus_message_iter_close_container_16 == 0u)
                    goto nomem_close_client_struct;

                  unsigned int return_value_dbus_message_iter_close_container_17;
                  return_value_dbus_message_iter_close_container_17=dbus_message_iter_close_container(&clients_array_iter, &client_struct_iter);
                  if(return_value_dbus_message_iter_close_container_17 == 0u)
                    goto nomem_close_clients_array;

                  client_node_ptr = client_node_ptr->next;
                }
                while((_Bool)1);
              }

              return_value_dbus_message_iter_close_container_18=dbus_message_iter_close_container(&iter, &clients_array_iter);
              if(!(return_value_dbus_message_iter_close_container_18 == 0u))
              {
                return_value_dbus_message_iter_open_container_19=dbus_message_iter_open_container(&iter, (signed int)97, "(tstststst)", &connections_array_iter);
                if(!(return_value_dbus_message_iter_open_container_19 == 0u))
                {
                  if(!(version >= ((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.version))
                  {
                    connection_node_ptr = (&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.connections)->next;
                    do
                    {
                      connection_node_ptr->next = connection_node_ptr->next;
                      if(connection_node_ptr == &((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->graph.connections)
                        break;

                      const struct list_head *jack_controller_dbus_get_graph__1__10__1__1__1____mptr = connection_node_ptr;
                      tmp_statement_expression_20 = (struct jack_graph_connection *)((char *)jack_controller_dbus_get_graph__1__10__1__1__1____mptr - (signed long int)24ul);
                      connection_ptr = tmp_statement_expression_20;
                      unsigned int return_value_dbus_message_iter_open_container_21;
                      return_value_dbus_message_iter_open_container_21=dbus_message_iter_open_container(&connections_array_iter, (signed int)114, (const char *)(void *)0, &connection_struct_iter);
                      if(return_value_dbus_message_iter_open_container_21 == 0u)
                        goto nomem_close_connections_array;

                      unsigned int return_value_dbus_message_iter_append_basic_22;
                      return_value_dbus_message_iter_append_basic_22=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)116, (const void *)&connection_ptr->port1->client->id);
                      if(return_value_dbus_message_iter_append_basic_22 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_23;
                      return_value_dbus_message_iter_append_basic_23=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)115, (const void *)&connection_ptr->port1->client->name);
                      if(return_value_dbus_message_iter_append_basic_23 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_24;
                      return_value_dbus_message_iter_append_basic_24=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)116, (const void *)&connection_ptr->port1->id);
                      if(return_value_dbus_message_iter_append_basic_24 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_25;
                      return_value_dbus_message_iter_append_basic_25=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)115, (const void *)&connection_ptr->port1->name);
                      if(return_value_dbus_message_iter_append_basic_25 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_26;
                      return_value_dbus_message_iter_append_basic_26=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)116, (const void *)&connection_ptr->port2->client->id);
                      if(return_value_dbus_message_iter_append_basic_26 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_27;
                      return_value_dbus_message_iter_append_basic_27=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)115, (const void *)&connection_ptr->port2->client->name);
                      if(return_value_dbus_message_iter_append_basic_27 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_28;
                      return_value_dbus_message_iter_append_basic_28=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)116, (const void *)&connection_ptr->port2->id);
                      if(return_value_dbus_message_iter_append_basic_28 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_29;
                      return_value_dbus_message_iter_append_basic_29=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)115, (const void *)&connection_ptr->port2->name);
                      if(return_value_dbus_message_iter_append_basic_29 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_append_basic_30;
                      return_value_dbus_message_iter_append_basic_30=dbus_message_iter_append_basic(&connection_struct_iter, (signed int)116, (const void *)&connection_ptr->id);
                      if(return_value_dbus_message_iter_append_basic_30 == 0u)
                        goto nomem_close_connection_struct;

                      unsigned int return_value_dbus_message_iter_close_container_31;
                      return_value_dbus_message_iter_close_container_31=dbus_message_iter_close_container(&connections_array_iter, &connection_struct_iter);
                      if(return_value_dbus_message_iter_close_container_31 == 0u)
                        goto nomem_close_connections_array;

                      connection_node_ptr = connection_node_ptr->next;
                    }
                    while((_Bool)1);
                  }

                  return_value_dbus_message_iter_close_container_32=dbus_message_iter_close_container(&iter, &connections_array_iter);
                  if(!(return_value_dbus_message_iter_close_container_32 == 0u))
                  {
                    pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
                    goto __CPROVER_DUMP_L18;

                  nomem_close_connection_struct:
                    ;
                    dbus_message_iter_close_container(&connections_array_iter, &connection_struct_iter);

                  nomem_close_connections_array:
                    ;
                    dbus_message_iter_close_container(&iter, &connections_array_iter);
                    goto nomem_unlock;

                  nomem_close_port_struct:
                    ;
                    dbus_message_iter_close_container(&ports_array_iter, &port_struct_iter);

                  nomem_close_ports_array:
                    ;
                    dbus_message_iter_close_container(&client_struct_iter, &ports_array_iter);

                  nomem_close_client_struct:
                    ;
                    dbus_message_iter_close_container(&clients_array_iter, &client_struct_iter);

                  nomem_close_clients_array:
                    ;
                    dbus_message_iter_close_container(&iter, &clients_array_iter);
                  }

                }

              }

            }

          }


        nomem_unlock:
          ;
          pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)call->context)->patchbay_context)->lock);
          dbus_message_unref(call->reply);
          call->reply = (struct DBusMessage *)(void *)0;
          jack_error("Ran out of memory trying to construct method return");
        }
      }
    }


  exit:
    ;
    goto __CPROVER_DUMP_L18;
  }

__CPROVER_DUMP_L18:
  ;
}

// jack_controller_dbus_get_parameter_address
// file ../dbus/controller_iface_configure.c line 264
static _Bool jack_controller_dbus_get_parameter_address(struct jack_dbus_method_call *call, const char **address_array)
{
  struct DBusMessageIter iter;
  _Bool ret;
  ret=jack_controller_dbus_get_parameter_address_ex(call, &iter, address_array);
  unsigned int return_value_dbus_message_iter_has_next_1;
  if(!(ret == (_Bool)0))
  {
    return_value_dbus_message_iter_has_next_1=dbus_message_iter_has_next(&iter);
    if(return_value_dbus_message_iter_has_next_1 == 0u)
      goto __CPROVER_DUMP_L1;

    jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method '%s'. Input arguments signature must be 'as'.", call->method_name);
    return (_Bool)0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return ret;
  }
}

// jack_controller_dbus_get_parameter_address_ex
// file ../dbus/controller_iface_configure.c line 180
static _Bool jack_controller_dbus_get_parameter_address_ex(struct jack_dbus_method_call *call, struct DBusMessageIter *iter_ptr, const char **address_array)
{
  const char *signature;
  struct DBusMessageIter array_iter;
  signed int type;
  signed int index;
  unsigned int return_value_dbus_message_iter_init_1;
  return_value_dbus_message_iter_init_1=dbus_message_iter_init(call->message, iter_ptr);
  if(return_value_dbus_message_iter_init_1 == 0u)
  {
    jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method '%s'. No input arguments found.", call->method_name);
    return (_Bool)0;
  }

  else
  {
    signature=dbus_message_iter_get_signature(iter_ptr);
    if(signature == ((const char *)NULL))
    {
      jack_error("dbus_message_iter_get_signature() failed");
      return (_Bool)0;
    }

    else
    {
      signed int return_value_strcmp_2;
      return_value_strcmp_2=strcmp(signature, "as");
      if(!(return_value_strcmp_2 == 0))
      {
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method '%s'. Input arguments signature '%s', must begin with 'as'.", call->method_name, signature);
        return (_Bool)0;
      }

      else
      {
        dbus_message_iter_recurse(iter_ptr, &array_iter);
        index = 0;
        do
        {
          type=dbus_message_iter_get_arg_type(&array_iter);
          if(type == 0)
            break;

          if(index == 3)
          {
            jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method '%s'. Parameter address array must contain not more than %u elements.", (unsigned int)3, call->method_name);
            return (_Bool)0;
          }

          if(!(type == 115))
          {
            jack_dbus_error((void *)call, "org.jackaudio.Error.Fatal", "Internal error when parsing parameter address of method '%s'. Address array element type '%c' is not string type.", call->method_name, type);
            return (_Bool)0;
          }

          dbus_message_iter_get_basic(&array_iter, (void *)(address_array + (signed long int)index));
          dbus_message_iter_next(&array_iter);
          index = index + 1;
        }
        while((_Bool)1);
        for( ; !(index >= 3); index = index + 1)
          address_array[(signed long int)index] = (const char *)(void *)0;
        return (_Bool)1;
      }
    }
  }
}

// jack_controller_dbus_get_parameter_constraint
// file ../dbus/controller_iface_configure.c line 550
static void jack_controller_dbus_get_parameter_constraint(struct jack_dbus_method_call *call)
{
  const char *address[3l];
  struct jack_parameter *param_ptr;
  unsigned int index;
  struct DBusMessageIter iter;
  struct DBusMessageIter array_iter;
  struct DBusMessageIter struct_iter;
  const char *descr;
  union anonymous_5 value;
  _Bool return_value_jack_controller_dbus_get_parameter_address_1;
  return_value_jack_controller_dbus_get_parameter_address_1=jack_controller_dbus_get_parameter_address(call, address);
  unsigned int return_value_dbus_message_iter_append_basic_2;
  unsigned int return_value_dbus_message_iter_append_basic_3;
  unsigned int return_value_dbus_message_iter_append_basic_4;
  unsigned int return_value_dbus_message_iter_open_container_5;
  unsigned int return_value_dbus_message_iter_close_container_18;
  if(!(return_value_jack_controller_dbus_get_parameter_address_1 == (_Bool)0))
  {
    param_ptr=jack_params_get_parameter(((struct jack_controller *)call->context)->params, address);
    if(param_ptr == ((struct jack_parameter *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid container address '%s':'%s':'%s' supplied to method '%s'.", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], call->method_name);

    else
    {
      call->reply=dbus_message_new_method_return(call->message);
      if(!(call->reply == ((struct DBusMessage *)NULL)))
      {
        dbus_message_iter_init_append(call->reply, &iter);
        if(!((1u & param_ptr->constraint_flags) == 0u))
          value.boolean = (unsigned int)param_ptr->constraint_range;

        else
          value.boolean = (unsigned int)0;
        return_value_dbus_message_iter_append_basic_2=dbus_message_iter_append_basic(&iter, (signed int)98, (const void *)&value);
        if(!(return_value_dbus_message_iter_append_basic_2 == 0u))
        {
          if(!((1u & param_ptr->constraint_flags) == 0u))
            value.boolean = (unsigned int)((param_ptr->constraint_flags & (unsigned int)2) != (unsigned int)0);

          return_value_dbus_message_iter_append_basic_3=dbus_message_iter_append_basic(&iter, (signed int)98, (const void *)&value);
          if(!(return_value_dbus_message_iter_append_basic_3 == 0u))
          {
            if(!((1u & param_ptr->constraint_flags) == 0u))
              value.boolean = (unsigned int)((param_ptr->constraint_flags & (unsigned int)4) != (unsigned int)0);

            return_value_dbus_message_iter_append_basic_4=dbus_message_iter_append_basic(&iter, (signed int)98, (const void *)&value);
            if(!(return_value_dbus_message_iter_append_basic_4 == 0u))
            {
              return_value_dbus_message_iter_open_container_5=dbus_message_iter_open_container(&iter, (signed int)97, "(vs)", &array_iter);
              if(!(return_value_dbus_message_iter_open_container_5 == 0u))
              {
                if(!((1u & param_ptr->constraint_flags) == 0u))
                {
                  if(!(param_ptr->constraint_range == (_Bool)0))
                  {
                    unsigned int return_value_dbus_message_iter_open_container_6;
                    return_value_dbus_message_iter_open_container_6=dbus_message_iter_open_container(&array_iter, (signed int)114, (const char *)(void *)0, &struct_iter);
                    if(return_value_dbus_message_iter_open_container_6 == 0u)
                      goto fail_close_unref;

                    jack_controller_jack_to_dbus_variant(param_ptr->type, &param_ptr->constraint.range.min, &value);
                    _Bool return_value_jack_dbus_message_append_variant_7;
                    return_value_jack_dbus_message_append_variant_7=jack_dbus_message_append_variant(&struct_iter, (signed int)jack_controller_dbus_types[(signed long int)param_ptr->type], jack_controller_dbus_type_signatures[(signed long int)param_ptr->type], &value);
                    if(return_value_jack_dbus_message_append_variant_7 == (_Bool)0)
                      goto fail_close2_unref;

                    descr = "min";
                    unsigned int return_value_dbus_message_iter_append_basic_8;
                    return_value_dbus_message_iter_append_basic_8=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&descr);
                    if(return_value_dbus_message_iter_append_basic_8 == 0u)
                      goto fail_close2_unref;

                    unsigned int return_value_dbus_message_iter_close_container_9;
                    return_value_dbus_message_iter_close_container_9=dbus_message_iter_close_container(&array_iter, &struct_iter);
                    if(return_value_dbus_message_iter_close_container_9 == 0u)
                      goto fail_close_unref;

                    unsigned int return_value_dbus_message_iter_open_container_10;
                    return_value_dbus_message_iter_open_container_10=dbus_message_iter_open_container(&array_iter, (signed int)114, (const char *)(void *)0, &struct_iter);
                    if(return_value_dbus_message_iter_open_container_10 == 0u)
                      goto fail_close_unref;

                    jack_controller_jack_to_dbus_variant(param_ptr->type, &param_ptr->constraint.range.max, &value);
                    _Bool return_value_jack_dbus_message_append_variant_11;
                    return_value_jack_dbus_message_append_variant_11=jack_dbus_message_append_variant(&struct_iter, (signed int)jack_controller_dbus_types[(signed long int)param_ptr->type], jack_controller_dbus_type_signatures[(signed long int)param_ptr->type], &value);
                    if(return_value_jack_dbus_message_append_variant_11 == (_Bool)0)
                      goto fail_close2_unref;

                    descr = "max";
                    unsigned int return_value_dbus_message_iter_append_basic_12;
                    return_value_dbus_message_iter_append_basic_12=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&descr);
                    if(return_value_dbus_message_iter_append_basic_12 == 0u)
                      goto fail_close2_unref;

                    unsigned int return_value_dbus_message_iter_close_container_13;
                    return_value_dbus_message_iter_close_container_13=dbus_message_iter_close_container(&array_iter, &struct_iter);
                    if(return_value_dbus_message_iter_close_container_13 == 0u)
                      goto fail_close_unref;

                  }

                  else
                  {
                    index = (unsigned int)0;
                    for( ; !(index >= param_ptr->constraint.enumeration.count); index = index + 1u)
                    {
                      descr = (param_ptr->constraint.enumeration.possible_values_array + (signed long int)index)->short_desc;
                      jack_controller_jack_to_dbus_variant(param_ptr->type, &(param_ptr->constraint.enumeration.possible_values_array + (signed long int)index)->value, &value);
                      unsigned int return_value_dbus_message_iter_open_container_14;
                      return_value_dbus_message_iter_open_container_14=dbus_message_iter_open_container(&array_iter, (signed int)114, (const char *)(void *)0, &struct_iter);
                      if(return_value_dbus_message_iter_open_container_14 == 0u)
                        goto fail_close_unref;

                      _Bool return_value_jack_dbus_message_append_variant_15;
                      return_value_jack_dbus_message_append_variant_15=jack_dbus_message_append_variant(&struct_iter, (signed int)jack_controller_dbus_types[(signed long int)param_ptr->type], jack_controller_dbus_type_signatures[(signed long int)param_ptr->type], &value);
                      if(return_value_jack_dbus_message_append_variant_15 == (_Bool)0)
                        goto fail_close2_unref;

                      unsigned int return_value_dbus_message_iter_append_basic_16;
                      return_value_dbus_message_iter_append_basic_16=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&descr);
                      if(return_value_dbus_message_iter_append_basic_16 == 0u)
                        goto fail_close2_unref;

                      unsigned int return_value_dbus_message_iter_close_container_17;
                      return_value_dbus_message_iter_close_container_17=dbus_message_iter_close_container(&array_iter, &struct_iter);
                      if(return_value_dbus_message_iter_close_container_17 == 0u)
                        goto fail_close_unref;

                    }
                  }
                }


              close:
                ;
                return_value_dbus_message_iter_close_container_18=dbus_message_iter_close_container(&iter, &array_iter);
                if(!(return_value_dbus_message_iter_close_container_18 == 0u))
                {
                  goto __CPROVER_DUMP_L14;

                fail_close2_unref:
                  ;
                  dbus_message_iter_close_container(&array_iter, &struct_iter);

                fail_close_unref:
                  ;
                  dbus_message_iter_close_container(&iter, &array_iter);
                }

              }

            }

          }

        }


      fail_unref:
        ;
        dbus_message_unref(call->reply);
        call->reply = (struct DBusMessage *)(void *)0;
      }


    fail:
      ;
      jack_error("Ran out of memory trying to construct method return");
    }
  }


__CPROVER_DUMP_L14:
  ;
}

// jack_controller_dbus_get_parameter_info
// file ../dbus/controller_iface_configure.c line 492
static void jack_controller_dbus_get_parameter_info(struct jack_dbus_method_call *call)
{
  const char *address[3l];
  struct jack_parameter *param_ptr;
  struct DBusMessageIter iter;
  _Bool return_value_jack_controller_dbus_get_parameter_address_1;
  return_value_jack_controller_dbus_get_parameter_address_1=jack_controller_dbus_get_parameter_address(call, address);
  _Bool return_value_append_parameter_2;
  if(!(return_value_jack_controller_dbus_get_parameter_address_1 == (_Bool)0))
  {
    param_ptr=jack_params_get_parameter(((struct jack_controller *)call->context)->params, address);
    if(param_ptr == ((struct jack_parameter *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid container address '%s':'%s':'%s' supplied to method '%s'.", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], call->method_name);

    else
    {
      call->reply=dbus_message_new_method_return(call->message);
      if(!(call->reply == ((struct DBusMessage *)NULL)))
      {
        dbus_message_iter_init_append(call->reply, &iter);
        return_value_append_parameter_2=append_parameter((void *)&iter, param_ptr);
        if(!(return_value_append_parameter_2 == (_Bool)0))
          goto __CPROVER_DUMP_L5;


      fail_unref:
        ;
        dbus_message_unref(call->reply);
        call->reply = (struct DBusMessage *)(void *)0;
      }


    fail:
      ;
      jack_error("Ran out of memory trying to construct method return");
    }
  }


__CPROVER_DUMP_L5:
  ;
}

// jack_controller_dbus_get_parameter_value
// file ../dbus/controller_iface_configure.c line 762
static void jack_controller_dbus_get_parameter_value(struct jack_dbus_method_call *call)
{
  const char *address[3l];
  struct jack_parameter *param_ptr;
  union jackctl_parameter_value jackctl_value;
  union jackctl_parameter_value jackctl_default_value;
  union anonymous_5 value;
  union anonymous_5 default_value;
  _Bool return_value_jack_controller_dbus_get_parameter_address_1;
  return_value_jack_controller_dbus_get_parameter_address_1=jack_controller_dbus_get_parameter_address(call, address);
  if(!(return_value_jack_controller_dbus_get_parameter_address_1 == (_Bool)0))
  {
    param_ptr=jack_params_get_parameter(((struct jack_controller *)call->context)->params, address);
    if(param_ptr == ((struct jack_parameter *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid container address '%s':'%s':'%s' supplied to method '%s'.", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], call->method_name);

    else
    {
      jackctl_default_value=param_ptr->vtable.get_default_value(param_ptr->obj);
      jackctl_value=param_ptr->vtable.get_value(param_ptr->obj);
      jack_controller_jack_to_dbus_variant(param_ptr->type, &jackctl_value, &value);
      jack_controller_jack_to_dbus_variant(param_ptr->type, &jackctl_default_value, &default_value);
      _Bool return_value;
      return_value=param_ptr->vtable.is_set(param_ptr->obj);
      jack_dbus_construct_method_return_parameter(call, (unsigned int)(return_value != (_Bool)0 ? 1 : 0), (signed int)jack_controller_dbus_types[(signed long int)param_ptr->type], jack_controller_dbus_type_signatures[(signed long int)param_ptr->type], default_value, value);
    }
  }

}

// jack_controller_dbus_get_parameters_info
// file ../dbus/controller_iface_configure.c line 421
static void jack_controller_dbus_get_parameters_info(struct jack_dbus_method_call *call)
{
  const char *address[3l];
  struct DBusMessageIter iter;
  struct DBusMessageIter array_iter;
  _Bool return_value_jack_controller_dbus_get_parameter_address_1;
  return_value_jack_controller_dbus_get_parameter_address_1=jack_controller_dbus_get_parameter_address(call, address);
  unsigned int return_value_dbus_message_iter_open_container_3;
  _Bool return_value_jack_params_iterate_params_4;
  unsigned int return_value_dbus_message_iter_close_container_5;
  if(!(return_value_jack_controller_dbus_get_parameter_address_1 == (_Bool)0))
  {
    _Bool return_value_jack_params_check_address_2;
    return_value_jack_params_check_address_2=jack_params_check_address(((struct jack_controller *)call->context)->params, address, (_Bool)1);
    if(return_value_jack_params_check_address_2 == (_Bool)0)
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid container address '%s':'%s':'%s' supplied to method '%s'.", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], call->method_name);

    else
    {
      call->reply=dbus_message_new_method_return(call->message);
      if(!(call->reply == ((struct DBusMessage *)NULL)))
      {
        dbus_message_iter_init_append(call->reply, &iter);
        return_value_dbus_message_iter_open_container_3=dbus_message_iter_open_container(&iter, (signed int)97, "(ysss)", &array_iter);
        if(!(return_value_dbus_message_iter_open_container_3 == 0u))
        {
          return_value_jack_params_iterate_params_4=jack_params_iterate_params(((struct jack_controller *)call->context)->params, address, append_parameter, (void *)&array_iter);
          if(!(return_value_jack_params_iterate_params_4 == (_Bool)0))
          {
            return_value_dbus_message_iter_close_container_5=dbus_message_iter_close_container(&iter, &array_iter);
            if(return_value_dbus_message_iter_close_container_5 == 0u)
              goto fail_unref;

            goto __CPROVER_DUMP_L6;
          }


        fail_close_unref:
          ;
          dbus_message_iter_close_container(&iter, &array_iter);
        }


      fail_unref:
        ;
        dbus_message_unref(call->reply);
        call->reply = (struct DBusMessage *)(void *)0;
      }


    fail:
      ;
      jack_error("Ran out of memory trying to construct method return");
    }
  }


__CPROVER_DUMP_L6:
  ;
}

// jack_controller_dbus_get_session_state
// file ../dbus/controller_iface_session_manager.c line 468
static void jack_controller_dbus_get_session_state(struct jack_dbus_method_call *call)
{
  struct DBusMessageIter iter;
  struct jack_session_pending_command *cmd_ptr;
  const char *target;
  unsigned int type;
  _Bool append_failed;
  call->reply=dbus_message_new_method_return(call->message);
  signed int return_value_list_empty_2;
  struct jack_session_pending_command *tmp_statement_expression_1;
  unsigned int return_value_dbus_message_iter_append_basic_3;
  _Bool tmp_if_expr_5;
  unsigned int return_value_dbus_message_iter_append_basic_4;
  if(!(call->reply == ((struct DBusMessage *)NULL)))
  {
    dbus_message_iter_init_append(call->reply, &iter);
    pthread_mutex_lock(&((struct jack_controller *)call->context)->lock);
    return_value_list_empty_2=list_empty_link3(&((struct jack_controller *)call->context)->session_pending_commands);
    if(!(return_value_list_empty_2 == 0))
    {
      type = (unsigned int)0;
      target = "";
    }

    else
    {
      const struct list_head *__mptr = ((struct jack_controller *)call->context)->session_pending_commands.next;
      tmp_statement_expression_1 = (struct jack_session_pending_command *)((char *)__mptr - (signed long int)0ul);
      cmd_ptr = tmp_statement_expression_1;
      type = (unsigned int)cmd_ptr->type;
      target = cmd_ptr->target;
    }
    return_value_dbus_message_iter_append_basic_3=dbus_message_iter_append_basic(&iter, (signed int)117, (const void *)&type);
    if(return_value_dbus_message_iter_append_basic_3 == 0u)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_dbus_message_iter_append_basic_4=dbus_message_iter_append_basic(&iter, (signed int)115, (const void *)&target);
      tmp_if_expr_5 = !(return_value_dbus_message_iter_append_basic_4 != 0u) ? (_Bool)1 : (_Bool)0;
    }
    append_failed = tmp_if_expr_5;
    pthread_mutex_unlock(&((struct jack_controller *)call->context)->lock);
    if(append_failed == (_Bool)0)
      goto __CPROVER_DUMP_L7;

    dbus_message_unref(call->reply);
    call->reply = (struct DBusMessage *)(void *)0;
  }


oom:
  ;
  jack_error("Ran out of memory trying to construct method return");

__CPROVER_DUMP_L7:
  ;
}

// jack_controller_dbus_get_uuid_for_client_name
// file ../dbus/controller_iface_session_manager.c line 349
static void jack_controller_dbus_get_uuid_for_client_name(struct jack_dbus_method_call *call)
{
  const char *client_name;
  char *client_uuid;
  _Bool return_value_jack_dbus_get_method_args_1;
  return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)115, &client_name, (signed int)0);
  if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
  {
    client_uuid=jack_get_uuid_for_client_name(((struct jack_controller *)call->context)->client, client_name);
    if(client_uuid == ((char *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_get_uuid_for_client_name(\"%s\") failed", client_name);

    else
    {
      jack_dbus_construct_method_return_single(call, (signed int)115, (union anonymous_5){ .string=(const char *)client_uuid });
      free((void *)client_uuid);
    }
  }

}

// jack_controller_dbus_has_session_callback
// file ../dbus/controller_iface_session_manager.c line 438
static void jack_controller_dbus_has_session_callback(struct jack_dbus_method_call *call)
{
  signed int ret;
  const char *client_name;
  union anonymous_5 retval;
  _Bool return_value_jack_dbus_get_method_args_1;
  return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)115, &client_name, (signed int)0);
  if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
  {
    ret=jack_client_has_session_callback(((struct jack_controller *)call->context)->client, client_name);
    if(!(ret >= 0))
      jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_client_has_session_callback(\"%s\") failed (%d)", client_name, ret);

    else
    {
      retval.boolean = (unsigned int)ret;
      jack_dbus_construct_method_return_single(call, (signed int)98, retval);
    }
  }

}

// jack_controller_dbus_introspect
// file ../dbus/controller_iface_introspectable.c line 37
static void jack_controller_dbus_introspect(struct jack_dbus_method_call *call)
{
  jack_dbus_construct_method_return_single(call, (signed int)115, (union anonymous_5){ .string=(const char *)g_xml_data });
}

// jack_controller_dbus_read_container
// file ../dbus/controller_iface_configure.c line 294
static void jack_controller_dbus_read_container(struct jack_dbus_method_call *call)
{
  const char *address[3l];
  unsigned int leaf;
  struct DBusMessageIter iter;
  struct DBusMessageIter array_iter;
  _Bool return_value_jack_controller_dbus_get_parameter_address_1;
  return_value_jack_controller_dbus_get_parameter_address_1=jack_controller_dbus_get_parameter_address(call, address);
  _Bool return_value_jack_params_check_address_2;
  _Bool return_value_jack_params_is_leaf_container_3;
  unsigned int return_value_dbus_message_iter_append_basic_4;
  unsigned int return_value_dbus_message_iter_open_container_5;
  _Bool return_value_jack_params_iterate_container_6;
  if(!(return_value_jack_controller_dbus_get_parameter_address_1 == (_Bool)0))
  {
    call->reply=dbus_message_new_method_return(call->message);
    if(!(call->reply == ((struct DBusMessage *)NULL)))
    {
      dbus_message_iter_init_append(call->reply, &iter);
      return_value_jack_params_check_address_2=jack_params_check_address(((struct jack_controller *)call->context)->params, address, (_Bool)0);
      if(return_value_jack_params_check_address_2 == (_Bool)0)
      {
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid container address '%s':'%s':'%s' supplied to method '%s'.", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], call->method_name);
        goto __CPROVER_DUMP_L6;
      }

      return_value_jack_params_is_leaf_container_3=jack_params_is_leaf_container(((struct jack_controller *)call->context)->params, address);
      leaf = (unsigned int)return_value_jack_params_is_leaf_container_3;
      return_value_dbus_message_iter_append_basic_4=dbus_message_iter_append_basic(&iter, (signed int)98, (const void *)&leaf);
      if(!(return_value_dbus_message_iter_append_basic_4 == 0u))
      {
        return_value_dbus_message_iter_open_container_5=dbus_message_iter_open_container(&iter, (signed int)97, "s", &array_iter);
        if(!(return_value_dbus_message_iter_open_container_5 == 0u))
        {
          return_value_jack_params_iterate_container_6=jack_params_iterate_container(((struct jack_controller *)call->context)->params, address, append_node_name, (void *)&array_iter);
          if(!(return_value_jack_params_iterate_container_6 == (_Bool)0))
          {
            dbus_message_iter_close_container(&iter, &array_iter);
            goto __CPROVER_DUMP_L6;
          }


        oom_close_unref:
          ;
          dbus_message_iter_close_container(&iter, &array_iter);
        }

      }


    oom_unref:
      ;
      dbus_message_unref(call->reply);
      call->reply = (struct DBusMessage *)(void *)0;
    }


  oom:
    ;
    jack_error("Ran out of memory trying to construct method return");
  }


__CPROVER_DUMP_L6:
  ;
}

// jack_controller_dbus_reserve_client_name
// file ../dbus/controller_iface_session_manager.c line 407
static void jack_controller_dbus_reserve_client_name(struct jack_dbus_method_call *call)
{
  signed int ret;
  const char *client_name;
  const char *client_uuid;
  _Bool return_value_jack_dbus_get_method_args_1;
  return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)115, &client_name, (signed int)115, &client_uuid, (signed int)0);
  if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
  {
    ret=jack_reserve_client_name(((struct jack_controller *)call->context)->client, client_name, client_uuid);
    if(!(ret >= 0))
      jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "jack_reserve_client_name(name=\"%s\", uuid=\"%s\") failed (%d)", client_name, client_uuid, ret);

    else
      jack_dbus_construct_method_return_empty(call);
  }

}

// jack_controller_dbus_reset_parameter_value
// file ../dbus/controller_iface_configure.c line 914
static void jack_controller_dbus_reset_parameter_value(struct jack_dbus_method_call *call)
{
  const char *address[3l];
  struct jack_parameter *param_ptr;
  _Bool return_value_jack_controller_dbus_get_parameter_address_1;
  return_value_jack_controller_dbus_get_parameter_address_1=jack_controller_dbus_get_parameter_address(call, address);
  if(!(return_value_jack_controller_dbus_get_parameter_address_1 == (_Bool)0))
  {
    param_ptr=jack_params_get_parameter(((struct jack_controller *)call->context)->params, address);
    if(param_ptr == ((struct jack_parameter *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid container address '%s':'%s':'%s' supplied to method '%s'.", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], call->method_name);

    else
    {
      param_ptr->vtable.reset(param_ptr->obj);
      jack_controller_pending_save((struct jack_controller *)call->context);
      jack_dbus_construct_method_return_empty(call);
    }
  }

}

// jack_controller_dbus_session_notify
// file ../dbus/controller_iface_session_manager.c line 259
static void jack_controller_dbus_session_notify(struct jack_dbus_method_call *call)
{
  unsigned int queue;
  const char *target;
  unsigned int u32;
  const char *path;
  enum JackSessionEventType type;
  struct jack_session_pending_command *cmd_ptr;
  if(((struct jack_controller *)call->context)->started == (_Bool)0)
    jack_dbus_only_error((void *)call, "org.jackaudio.Error.ServerNotRunning", "Can't execute method '%s' with stopped JACK server", call->method_name);

  else
  {
    _Bool return_value_jack_dbus_get_method_args_1;
    return_value_jack_dbus_get_method_args_1=jack_dbus_get_method_args(call, (signed int)98, &queue, (signed int)115, &target, (signed int)117, &u32, (signed int)115, &path, (signed int)0);
    if(!(return_value_jack_dbus_get_method_args_1 == (_Bool)0))
    {
      if((signed int)*target == 0)
        target = (const char *)(void *)0;

      type = (enum JackSessionEventType)u32;
      if(!((signed int)type == JackSessionSave) && !((signed int)type == JackSessionSaveAndQuit) && !((signed int)type == JackSessionSaveTemplate))
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid session event type %u", u32);

      else
      {
        pthread_mutex_lock(&((struct jack_controller *)call->context)->lock);
        signed int return_value_list_empty_3;
        return_value_list_empty_3=list_empty_link3(&((struct jack_controller *)call->context)->session_pending_commands);
        if(!(return_value_list_empty_3 == 0))
        {
          _Bool return_value_start_detached_thread_2;
          return_value_start_detached_thread_2=start_detached_thread(jack_controller_process_session_command_thread, (void *)(struct jack_controller *)call->context);
          if(return_value_start_detached_thread_2 == (_Bool)0)
          {
            jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "Cannot start thread to process the command");
            goto unlock;
          }

          jack_log("Session notify thread started");
        }

        else
          if(queue == 0u)
          {
            jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "Busy");
            goto unlock;
          }

        void *return_value_malloc_4;
        return_value_malloc_4=malloc(sizeof(struct jack_session_pending_command) /*56ul*/ );
        cmd_ptr = (struct jack_session_pending_command *)return_value_malloc_4;
        if(cmd_ptr == ((struct jack_session_pending_command *)NULL))
          jack_dbus_error((void *)call, "org.jackaudio.Error.Generic", "malloc() failed for jack_session_pending_command struct");

        else
        {
          cmd_ptr->message=dbus_message_ref(call->message);
          call->message = (struct DBusMessage *)(void *)0;
          cmd_ptr->connection=dbus_connection_ref(call->connection);
          cmd_ptr->type = type;
          cmd_ptr->target = target;
          cmd_ptr->path = path;
          list_add_tail_link3(&cmd_ptr->siblings, &((struct jack_controller *)call->context)->session_pending_commands);
          jack_log("Session notify scheduled. target='%s', type=%u, path='%s'", target, u32, path);
        }

      unlock:
        ;
        pthread_mutex_unlock(&((struct jack_controller *)call->context)->lock);
      }
    }

  }
}

// jack_controller_dbus_set_parameter_value
// file ../dbus/controller_iface_configure.c line 816
static void jack_controller_dbus_set_parameter_value(struct jack_dbus_method_call *call)
{
  const char *address[3l];
  struct jack_parameter *param_ptr;
  struct DBusMessageIter iter;
  struct DBusMessageIter variant_iter;
  union anonymous_5 arg;
  signed int arg_type;
  union jackctl_parameter_value value;
  _Bool return_value_jack_controller_dbus_get_parameter_address_ex_1;
  return_value_jack_controller_dbus_get_parameter_address_ex_1=jack_controller_dbus_get_parameter_address_ex(call, &iter, address);
  if(!(return_value_jack_controller_dbus_get_parameter_address_ex_1 == (_Bool)0))
  {
    param_ptr=jack_params_get_parameter(((struct jack_controller *)call->context)->params, address);
    if(param_ptr == ((struct jack_parameter *)NULL))
      jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid container address '%s':'%s':'%s' supplied to method '%s'.", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], call->method_name);

    else
    {
      dbus_message_iter_next(&iter);
      unsigned int return_value_dbus_message_iter_has_next_2;
      return_value_dbus_message_iter_has_next_2=dbus_message_iter_has_next(&iter);
      if(!(return_value_dbus_message_iter_has_next_2 == 0u))
        jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method '%s'. Too many arguments.", call->method_name);

      else
      {
        signed int return_value_dbus_message_iter_get_arg_type_3;
        return_value_dbus_message_iter_get_arg_type_3=dbus_message_iter_get_arg_type(&iter);
        if(!(return_value_dbus_message_iter_get_arg_type_3 == 118))
          jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method '%s'. Value to set must be variant.", call->method_name);

        else
        {
          dbus_message_iter_recurse(&iter, &variant_iter);
          dbus_message_iter_get_basic(&variant_iter, (void *)&arg);
          arg_type=dbus_message_iter_get_arg_type(&variant_iter);
          if(!((signed int)jack_controller_dbus_types[(signed long int)param_ptr->type] == arg_type))
            jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Parameter value type mismatch: was expecting '%c', got '%c'", (char)jack_controller_dbus_types[(signed long int)param_ptr->type], (char)arg_type);

          else
          {
            _Bool return_value_jack_controller_dbus_to_jack_variant_4;
            return_value_jack_controller_dbus_to_jack_variant_4=jack_controller_dbus_to_jack_variant(arg_type, &arg, &value);
            if(return_value_jack_controller_dbus_to_jack_variant_4 == (_Bool)0)
              jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Cannot convert parameter value");

            else
            {
              param_ptr->vtable.set_value(param_ptr->obj, &value);
              jack_controller_pending_save((struct jack_controller *)call->context);
              jack_dbus_construct_method_return_empty(call);
            }
          }
        }
      }
    }
  }

}

// jack_controller_dbus_to_jack_variant
// file ../dbus/controller_iface_configure.c line 88
static _Bool jack_controller_dbus_to_jack_variant(signed int type, const union anonymous_5 *dbusv_ptr, union jackctl_parameter_value *value_ptr)
{
  unsigned long int len;
  switch(type)
  {
    case (signed int)105:
    {
      value_ptr->i = dbusv_ptr->int32;
      return (_Bool)1;
    }
    case (signed int)117:
    {
      value_ptr->ui = dbusv_ptr->uint32;
      return (_Bool)1;
    }
    case (signed int)121:
    {
      value_ptr->c = (char)dbusv_ptr->byte;
      return (_Bool)1;
    }
    case (signed int)115:
    {
      len=strlen(dbusv_ptr->string);
      if(len >= 128ul)
      {
        jack_error("Parameter string value is too long (%u)", (unsigned int)len);
        return (_Bool)0;
      }

      memcpy((void *)value_ptr->str, (const void *)dbusv_ptr->string, len + (unsigned long int)1);
      return (_Bool)1;
    }
    case (signed int)98:
    {
      value_ptr->b = (_Bool)dbusv_ptr->boolean;
      return (_Bool)1;
    }
    default:
    {
      jack_error("Unknown D-Bus parameter type %i", (signed int)type);
      return (_Bool)0;
    }
  }
}

// jack_controller_deserialize_parameter_value
// file ../dbus/xml.c line 34
void jack_controller_deserialize_parameter_value(struct jack_controller *controller_ptr, const char * const *address, const char *option_value)
{
  struct jack_parameter *param_ptr;
  union jackctl_parameter_value value;
  unsigned long int size;
  param_ptr=jack_params_get_parameter(controller_ptr->params, address);
  unsigned long int return_value_strtoul_1;
  _Bool tmp_if_expr_2;
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  _Bool return_value;
  if(param_ptr == ((struct jack_parameter *)NULL))
    jack_error("Unknown parameter");

  else
  {
    jack_info("setting parameter '%s':'%s':'%s' to value \"%s\"", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2], option_value);
    switch((signed int)param_ptr->type)
    {
      case JackParamInt:
      {
        value.i=atoi(option_value);
        break;
      }
      case JackParamUInt:
      {
        return_value_strtoul_1=strtoul(option_value, (char ** restrict )(void *)0, 10);
        value.ui = (unsigned int)return_value_strtoul_1;
        break;
      }
      case JackParamChar:
      {
        if((signed int)*option_value == 0)
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = (signed int)option_value[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
        {
          jack_error("invalid char option value \"%s\"", option_value);
          goto ignore;
        }

        value.c = *option_value;
        break;
      }
      case JackParamString:
      {
        size=strlen(option_value);
        if(size >= sizeof(char [128l]) /*128ul*/ )
        {
          jack_error("string option value \"%s\" is too long, max is %zu chars (including terminating zero)", option_value, sizeof(char [128l]) /*128ul*/ );
          goto ignore;
        }

        strcpy(value.str, option_value);
        break;
      }
      case JackParamBool:
      {
        return_value_strcmp_4=strcmp(option_value, "true");
        if(return_value_strcmp_4 == 0)
          value.b = (_Bool)1;

        else
        {
          return_value_strcmp_3=strcmp(option_value, "false");
          if(return_value_strcmp_3 == 0)
            value.b = (_Bool)0;

          else
          {
            jack_error("ignoring unknown bool value \"%s\"", option_value);
            goto ignore;
          }
        }
        break;
      }
      default:
      {
        jack_error("Unknown type %d", (signed int)param_ptr->type);
        goto ignore;
      }
    }
    return_value=param_ptr->vtable.set_value(param_ptr->obj, &value);
    jack_error("Parameter set failed");
  }

ignore:
  ;
  jack_error("Ignoring restore attempt of parameter '%s':'%s':'%s'", address[(signed long int)0], address[(signed long int)1], address[(signed long int)2]);
}

// jack_controller_destroy
// file ../dbus/controller.h line 32
void jack_controller_destroy(void *context)
{
  _Bool return_value_jack_controller_stop_server_1;
  if(!(((struct jack_controller *)context)->started == (_Bool)0))
    do
    {
      return_value_jack_controller_stop_server_1=jack_controller_stop_server((struct jack_controller *)context, (void *)0);
      if(return_value_jack_controller_stop_server_1 != (_Bool)0)
        break;

      jack_info("jack server failed to stop, retrying in 3 seconds...");
      usleep((unsigned int)3000000);
    }
    while((_Bool)1);

  jack_controller_remove_slave_drivers((struct jack_controller *)context);
  jack_params_destroy(((struct jack_controller *)context)->params);
  jackctl_server_destroy(((struct jack_controller *)context)->server);
  pthread_mutex_destroy(&((struct jack_controller *)context)->lock);
  free((void *)(struct jack_controller *)context);
}

// jack_controller_find_driver
// file ../dbus/controller.c line 51
static struct jackctl_driver * jack_controller_find_driver(struct jackctl_server *server, const char *driver_name)
{
  const struct _JSList *node_ptr;
  node_ptr=jackctl_server_get_drivers_list(server);
  struct _JSList *tmp_if_expr_3;
  while(!(node_ptr == ((const struct _JSList *)NULL)))
  {
    const char *return_value_jackctl_driver_get_name_1;
    return_value_jackctl_driver_get_name_1=jackctl_driver_get_name((struct jackctl_driver *)node_ptr->data);
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(return_value_jackctl_driver_get_name_1, driver_name);
    if(return_value_strcmp_2 == 0)
      return (struct jackctl_driver *)node_ptr->data;

    if(!(node_ptr == ((const struct _JSList *)NULL)))
      tmp_if_expr_3 = ((struct _JSList *)node_ptr)->next;

    else
      tmp_if_expr_3 = (struct _JSList *)(void *)0;
    node_ptr = tmp_if_expr_3;
  }
  return (struct jackctl_driver *)(void *)0;
}

// jack_controller_find_internal
// file ../dbus/controller.c line 147
static struct jackctl_internal * jack_controller_find_internal(struct jackctl_server *server, const char *internal_name)
{
  const struct _JSList *node_ptr;
  node_ptr=jackctl_server_get_internals_list(server);
  struct _JSList *tmp_if_expr_3;
  while(!(node_ptr == ((const struct _JSList *)NULL)))
  {
    const char *return_value_jackctl_internal_get_name_1;
    return_value_jackctl_internal_get_name_1=jackctl_internal_get_name((struct jackctl_internal *)node_ptr->data);
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(return_value_jackctl_internal_get_name_1, internal_name);
    if(return_value_strcmp_2 == 0)
      return (struct jackctl_internal *)node_ptr->data;

    if(!(node_ptr == ((const struct _JSList *)NULL)))
      tmp_if_expr_3 = ((struct _JSList *)node_ptr)->next;

    else
      tmp_if_expr_3 = (struct _JSList *)(void *)0;
    node_ptr = tmp_if_expr_3;
  }
  return (struct jackctl_internal *)(void *)0;
}

// jack_controller_graph_order_callback
// file ../dbus/controller_iface_patchbay.c line 1502
static signed int jack_controller_graph_order_callback(void *context)
{
  const char **ports;
  signed int i;
  struct _jack_port *port_ptr;
  if(((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version >= 2ul)
    return 0;

  else
  {
    ports=jack_get_ports(((struct jack_controller *)context)->client, (const char *)(void *)0, (const char *)(void *)0, (unsigned long int)0);
    if(!(ports == ((const char **)NULL)))
    {
      i = 0;
      for( ; !(ports[(signed long int)i] == ((const char *)NULL)); i = i + 1)
      {
        jack_info("graph reorder: new port '%s'", ports[(signed long int)i]);
        port_ptr=jack_port_by_name(((struct jack_controller *)context)->client, ports[(signed long int)i]);
        signed int return_value_jack_port_flags_1;
        return_value_jack_port_flags_1=jack_port_flags(port_ptr);
        unsigned int return_value_jack_port_type_id_2;
        return_value_jack_port_type_id_2=jack_port_type_id(port_ptr);
        jack_controller_patchbay_new_port((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, ports[(signed long int)i], (unsigned int)return_value_jack_port_flags_1, return_value_jack_port_type_id_2);
      }
      free((void *)ports);
    }

    if(((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version == 1ul)
      ((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version = ((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version + 1ul;

    return 0;
  }
}

// jack_controller_introspect_init
// file ../dbus/controller_iface_introspectable.c line 81
void jack_controller_introspect_init()
{
  struct jack_dbus_interface_descriptor **interface_ptr_ptr;
  struct jack_dbus_interface_method_descriptor *method_ptr;
  struct jack_dbus_interface_method_argument_descriptor *method_argument_ptr;
  struct jack_dbus_interface_signal_descriptor *signal_ptr;
  struct jack_dbus_interface_signal_argument_descriptor *signal_argument_ptr;
  g_buffer_ptr = g_xml_data;
  write_line("<!DOCTYPE node PUBLIC \"-//freedesktop//DTD D-BUS Object Introspection 1.0//EN\"");
  write_line("\"http://www.freedesktop.org/standards/dbus/1.0/introspect.dtd\">");
  write_line("<node name=\"/org/jackaudio/Controller\">");
  interface_ptr_ptr = g_jackcontroller_interfaces;
  for( ; !(*interface_ptr_ptr == ((struct jack_dbus_interface_descriptor *)NULL)); interface_ptr_ptr = interface_ptr_ptr + 1l)
  {
    write_line_format("  <interface name=\"%s\">\n", (*interface_ptr_ptr)->name);
    if(!((*interface_ptr_ptr)->methods == ((struct jack_dbus_interface_method_descriptor *)NULL)))
    {
      method_ptr = (*interface_ptr_ptr)->methods;
      for( ; !(method_ptr->name == ((const char *)NULL)); method_ptr = method_ptr + 1l)
      {
        write_line_format("    <method name=\"%s\">\n", method_ptr->name);
        method_argument_ptr = method_ptr->arguments;
        for( ; !(method_argument_ptr->name == ((const char *)NULL)); method_argument_ptr = method_argument_ptr + 1l)
          write_line_format("      <arg name=\"%s\" type=\"%s\" direction=\"%s\" />\n", method_argument_ptr->name, method_argument_ptr->type, method_argument_ptr->direction_out != (_Bool)0 ? "out" : "in");
        write_line("    </method>");
      }
    }

    if(!((*interface_ptr_ptr)->signals == ((struct jack_dbus_interface_signal_descriptor *)NULL)))
    {
      signal_ptr = (*interface_ptr_ptr)->signals;
      for( ; !(signal_ptr->name == ((const char *)NULL)); signal_ptr = signal_ptr + 1l)
      {
        write_line_format("    <signal name=\"%s\">\n", signal_ptr->name);
        signal_argument_ptr = signal_ptr->arguments;
        for( ; !(signal_argument_ptr->name == ((const char *)NULL)); signal_argument_ptr = signal_argument_ptr + 1l)
          write_line_format("      <arg name=\"%s\" type=\"%s\" />\n", signal_argument_ptr->name, signal_argument_ptr->type);
        write_line("    </signal>");
      }
    }

    write_line("  </interface>");
  }
  write_line("</node>");
  *g_buffer_ptr = (char)0;
}

// jack_controller_jack_to_dbus_variant
// file ../dbus/controller_iface_configure.c line 57
static _Bool jack_controller_jack_to_dbus_variant(enum anonymous_1 type, union jackctl_parameter_value *value_ptr, union anonymous_5 *dbusv_ptr)
{
  switch((signed int)type)
  {
    case JackParamInt:
    {
      dbusv_ptr->int32 = (signed int)value_ptr->i;
      return (_Bool)1;
    }
    case JackParamUInt:
    {
      dbusv_ptr->uint32 = (unsigned int)value_ptr->ui;
      return (_Bool)1;
    }
    case JackParamChar:
    {
      dbusv_ptr->byte = (unsigned char)value_ptr->c;
      return (_Bool)1;
    }
    case JackParamString:
    {
      dbusv_ptr->string = value_ptr->str;
      return (_Bool)1;
    }
    case JackParamBool:
    {
      dbusv_ptr->boolean = (unsigned int)value_ptr->b;
      return (_Bool)1;
    }
    default:
    {
      jack_error("Unknown JACK parameter type %i", (signed int)type);
      /* assertion 0 */
      assert(0 != 0);
      return (_Bool)0;
    }
  }
}

// jack_controller_load_internal
// file ../dbus/controller.c line 729
_Bool jack_controller_load_internal(struct jack_controller *controller_ptr, const char *internal_name)
{
  struct jackctl_internal *internal;
  internal=jack_controller_find_internal(controller_ptr->server, internal_name);
  if(internal == ((struct jackctl_internal *)NULL))
    return (_Bool)0;

  else
  {
    jack_info("internal \"%s\" selected", internal_name);
    _Bool return_value_jackctl_server_load_internal_1;
    return_value_jackctl_server_load_internal_1=jackctl_server_load_internal(controller_ptr->server, internal);
    return return_value_jackctl_server_load_internal_1;
  }
}

// jack_controller_load_slave_drivers
// file ../dbus/controller.c line 89
static _Bool jack_controller_load_slave_drivers(struct jack_controller *controller_ptr)
{
  struct list_head *node_ptr;
  struct jack_controller_slave_driver *driver_ptr;
  node_ptr = (&controller_ptr->slave_drivers)->next;
  struct jack_controller_slave_driver *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &controller_ptr->slave_drivers)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_controller_slave_driver *)((char *)__mptr - (signed long int)0ul);
    driver_ptr = tmp_statement_expression_1;
    /* assertion driver_ptr->handle != ((void *)0) */
    assert(driver_ptr->handle != (struct jackctl_driver *)(void *)0);
    /* assertion !driver_ptr->loaded */
    assert(!(driver_ptr->loaded != (_Bool)0));
    _Bool return_value_jackctl_server_add_slave_2;
    return_value_jackctl_server_add_slave_2=jackctl_server_add_slave(controller_ptr->server, driver_ptr->handle);
    if(return_value_jackctl_server_add_slave_2 == (_Bool)0)
    {
      jack_error("Driver \"%s\" cannot be loaded", driver_ptr->name);
      return (_Bool)0;
    }

    driver_ptr->loaded = (_Bool)1;
    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (_Bool)1;
}

// jack_controller_patchbay_connect
// file ../dbus/controller_iface_patchbay.c line 744
static _Bool jack_controller_patchbay_connect(struct jack_dbus_method_call *dbus_call_ptr, struct jack_controller *controller_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr)
{
  signed int ret;
  char port1_name[320l];
  char port2_name[320l];
  sprintf(port1_name, "%s:%s", port1_ptr->client->name, port1_ptr->name);
  sprintf(port2_name, "%s:%s", port2_ptr->client->name, port2_ptr->name);
  ret=jack_connect(controller_ptr->client, port1_name, port2_name);
  if(!(ret == 0))
  {
    jack_dbus_error((void *)dbus_call_ptr, "org.jackaudio.Error.Generic", "jack_connect() failed with %d", ret);
    return (_Bool)0;
  }

  else
    return (_Bool)1;
}

// jack_controller_patchbay_create_client
// file ../dbus/controller_iface_patchbay.c line 358
static struct jack_graph_client * jack_controller_patchbay_create_client(struct jack_controller_patchbay *patchbay_ptr, const char *client_name, unsigned long int client_name_len)
{
  struct jack_graph_client *client_ptr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct jack_graph_client) /*56ul*/ );
  client_ptr = (struct jack_graph_client *)return_value_malloc_1;
  void *return_value_malloc_2;
  unsigned long int tmp_post_3;
  if(client_ptr == ((struct jack_graph_client *)NULL))
    jack_error("Memory allocation of jack_graph_client structure failed.");

  else
  {
    return_value_malloc_2=malloc(client_name_len + (unsigned long int)1);
    client_ptr->name = (char *)return_value_malloc_2;
    if(client_ptr->name == ((char *)NULL))
      jack_error("malloc() failed to allocate memory for client name.");

    else
    {
      memcpy((void *)client_ptr->name, (const void *)client_name, client_name_len);
      client_ptr->name[(signed long int)client_name_len] = (char)0;
      client_ptr->pid=jack_get_client_pid(client_ptr->name);
      jack_info("New client '%s' with PID %d", client_ptr->name, client_ptr->pid);
      tmp_post_3 = patchbay_ptr->next_client_id;
      patchbay_ptr->next_client_id = patchbay_ptr->next_client_id + 1ul;
      client_ptr->id = tmp_post_3;
      INIT_LIST_HEAD_link2(&client_ptr->ports);
      pthread_mutex_lock(&patchbay_ptr->lock);
      list_add_tail_link2(&client_ptr->siblings, &patchbay_ptr->graph.clients);
      patchbay_ptr->graph.version = patchbay_ptr->graph.version + 1ul;
      jack_controller_patchbay_send_signal_client_appeared(patchbay_ptr->graph.version, client_ptr->id, client_ptr->name);
      jack_controller_patchbay_send_signal_graph_changed(patchbay_ptr->graph.version);
      pthread_mutex_unlock(&patchbay_ptr->lock);
      return client_ptr;
    }

  fail_free_client:
    ;
    free((void *)client_ptr);
  }

fail:
  ;
  return (struct jack_graph_client *)(void *)0;
}

// jack_controller_patchbay_create_connection
// file ../dbus/controller_iface_patchbay.c line 632
static struct jack_graph_connection * jack_controller_patchbay_create_connection(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr)
{
  struct jack_graph_connection *connection_ptr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct jack_graph_connection) /*40ul*/ );
  connection_ptr = (struct jack_graph_connection *)return_value_malloc_1;
  unsigned long int tmp_post_2;
  if(connection_ptr == ((struct jack_graph_connection *)NULL))
  {
    jack_error("Memory allocation of jack_graph_connection structure failed.");
    return (struct jack_graph_connection *)(void *)0;
  }

  else
  {
    tmp_post_2 = patchbay_ptr->next_connection_id;
    patchbay_ptr->next_connection_id = patchbay_ptr->next_connection_id + 1ul;
    connection_ptr->id = tmp_post_2;
    connection_ptr->port1 = port1_ptr;
    connection_ptr->port2 = port2_ptr;
    pthread_mutex_lock(&patchbay_ptr->lock);
    list_add_tail_link2(&connection_ptr->siblings, &patchbay_ptr->graph.connections);
    patchbay_ptr->graph.version = patchbay_ptr->graph.version + 1ul;
    jack_controller_patchbay_send_signal_ports_connected(patchbay_ptr->graph.version, port1_ptr->client->id, port1_ptr->client->name, port1_ptr->id, port1_ptr->name, port2_ptr->client->id, port2_ptr->client->name, port2_ptr->id, port2_ptr->name, connection_ptr->id);
    jack_controller_patchbay_send_signal_graph_changed(patchbay_ptr->graph.version);
    pthread_mutex_unlock(&patchbay_ptr->lock);
    return connection_ptr;
  }
}

// jack_controller_patchbay_destroy_client
// file ../dbus/controller_iface_patchbay.c line 407
static void jack_controller_patchbay_destroy_client(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_client *client_ptr)
{
  jack_info("Client '%s' with PID %d is out", client_ptr->name, client_ptr->pid);
  pthread_mutex_lock(&patchbay_ptr->lock);
  list_del_link2(&client_ptr->siblings);
  patchbay_ptr->graph.version = patchbay_ptr->graph.version + 1ul;
  jack_controller_patchbay_send_signal_client_disappeared(patchbay_ptr->graph.version, client_ptr->id, client_ptr->name);
  jack_controller_patchbay_send_signal_graph_changed(patchbay_ptr->graph.version);
  pthread_mutex_unlock(&patchbay_ptr->lock);
  free((void *)client_ptr->name);
  free((void *)client_ptr);
}

// jack_controller_patchbay_destroy_client_by_name
// file ../dbus/controller_iface_patchbay.c line 426
static void jack_controller_patchbay_destroy_client_by_name(struct jack_controller_patchbay *patchbay_ptr, const char *client_name)
{
  struct jack_graph_client *client_ptr;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(client_name);
  client_ptr=jack_controller_patchbay_find_client(patchbay_ptr, client_name, return_value_strlen_1);
  if(client_ptr == ((struct jack_graph_client *)NULL))
    jack_error("Cannot destroy unknown client '%s'", client_name);

  else
    jack_controller_patchbay_destroy_client(patchbay_ptr, client_ptr);
}

// jack_controller_patchbay_destroy_connection
// file ../dbus/controller_iface_patchbay.c line 672
static void jack_controller_patchbay_destroy_connection(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_connection *connection_ptr)
{
  pthread_mutex_lock(&patchbay_ptr->lock);
  list_del_link2(&connection_ptr->siblings);
  patchbay_ptr->graph.version = patchbay_ptr->graph.version + 1ul;
  jack_controller_patchbay_send_signal_ports_disconnected(patchbay_ptr->graph.version, connection_ptr->port1->client->id, connection_ptr->port1->client->name, connection_ptr->port1->id, connection_ptr->port1->name, connection_ptr->port2->client->id, connection_ptr->port2->client->name, connection_ptr->port2->id, connection_ptr->port2->name, connection_ptr->id);
  jack_controller_patchbay_send_signal_graph_changed(patchbay_ptr->graph.version);
  pthread_mutex_unlock(&patchbay_ptr->lock);
  free((void *)connection_ptr);
}

// jack_controller_patchbay_disconnect
// file ../dbus/controller_iface_patchbay.c line 769
static _Bool jack_controller_patchbay_disconnect(struct jack_dbus_method_call *dbus_call_ptr, struct jack_controller *controller_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr)
{
  signed int ret;
  char port1_name[320l];
  char port2_name[320l];
  sprintf(port1_name, "%s:%s", port1_ptr->client->name, port1_ptr->name);
  sprintf(port2_name, "%s:%s", port2_ptr->client->name, port2_ptr->name);
  ret=jack_disconnect(controller_ptr->client, port1_name, port2_name);
  if(!(ret == 0))
  {
    jack_dbus_error((void *)dbus_call_ptr, "org.jackaudio.Error.Generic", "jack_disconnect() failed with %d", ret);
    return (_Bool)0;
  }

  else
    return (_Bool)1;
}

// jack_controller_patchbay_find_client
// file ../dbus/controller_iface_patchbay.c line 315
static struct jack_graph_client * jack_controller_patchbay_find_client(struct jack_controller_patchbay *patchbay_ptr, const char *client_name, unsigned long int client_name_len)
{
  struct list_head *node_ptr;
  struct jack_graph_client *client_ptr;
  node_ptr = (&patchbay_ptr->graph.clients)->next;
  struct jack_graph_client *tmp_statement_expression_1;
  signed int return_value_strncmp_2;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &patchbay_ptr->graph.clients)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_graph_client *)((char *)__mptr - (signed long int)24ul);
    client_ptr = tmp_statement_expression_1;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(client_ptr->name);
    if(return_value_strlen_3 == client_name_len)
    {
      return_value_strncmp_2=strncmp(client_ptr->name, client_name, client_name_len);
      if(return_value_strncmp_2 == 0)
        return client_ptr;

    }

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (struct jack_graph_client *)(void *)0;
}

// jack_controller_patchbay_find_client_by_id
// file ../dbus/controller_iface_patchbay.c line 337
static struct jack_graph_client * jack_controller_patchbay_find_client_by_id(struct jack_controller_patchbay *patchbay_ptr, unsigned long int id)
{
  struct list_head *node_ptr;
  struct jack_graph_client *client_ptr;
  node_ptr = (&patchbay_ptr->graph.clients)->next;
  struct jack_graph_client *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &patchbay_ptr->graph.clients)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_graph_client *)((char *)__mptr - (signed long int)24ul);
    client_ptr = tmp_statement_expression_1;
    if(client_ptr->id == id)
      return client_ptr;

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (struct jack_graph_client *)(void *)0;
}

// jack_controller_patchbay_find_client_port_by_name
// file ../dbus/controller_iface_patchbay.c line 558
static struct jack_graph_port * jack_controller_patchbay_find_client_port_by_name(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_client *client_ptr, const char *port_name)
{
  struct list_head *node_ptr;
  struct jack_graph_port *port_ptr;
  node_ptr = (&client_ptr->ports)->next;
  struct jack_graph_port *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &client_ptr->ports)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_graph_port *)((char *)__mptr - (signed long int)40ul);
    port_ptr = tmp_statement_expression_1;
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(port_ptr->name, port_name);
    if(return_value_strcmp_2 == 0)
      return port_ptr;

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (struct jack_graph_port *)(void *)0;
}

// jack_controller_patchbay_find_connection
// file ../dbus/controller_iface_patchbay.c line 698
static struct jack_graph_connection * jack_controller_patchbay_find_connection(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_port *port1_ptr, struct jack_graph_port *port2_ptr)
{
  struct list_head *node_ptr;
  struct jack_graph_connection *connection_ptr;
  node_ptr = (&patchbay_ptr->graph.connections)->next;
  struct jack_graph_connection *tmp_statement_expression_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &patchbay_ptr->graph.connections)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_graph_connection *)((char *)__mptr - (signed long int)24ul);
    connection_ptr = tmp_statement_expression_1;
    if(connection_ptr->port1 == port1_ptr)
      tmp_if_expr_2 = connection_ptr->port2 == port2_ptr ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      if(connection_ptr->port1 == port2_ptr)
        tmp_if_expr_3 = connection_ptr->port2 == port1_ptr ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      return connection_ptr;

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (struct jack_graph_connection *)(void *)0;
}

// jack_controller_patchbay_find_connection_by_id
// file ../dbus/controller_iface_patchbay.c line 723
static struct jack_graph_connection * jack_controller_patchbay_find_connection_by_id(struct jack_controller_patchbay *patchbay_ptr, unsigned long int connection_id)
{
  struct list_head *node_ptr;
  struct jack_graph_connection *connection_ptr;
  node_ptr = (&patchbay_ptr->graph.connections)->next;
  struct jack_graph_connection *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &patchbay_ptr->graph.connections)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_graph_connection *)((char *)__mptr - (signed long int)24ul);
    connection_ptr = tmp_statement_expression_1;
    if(connection_ptr->id == connection_id)
      return connection_ptr;

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (struct jack_graph_connection *)(void *)0;
}

// jack_controller_patchbay_find_port_by_full_name
// file ../dbus/controller_iface_patchbay.c line 580
static struct jack_graph_port * jack_controller_patchbay_find_port_by_full_name(struct jack_controller_patchbay *patchbay_ptr, const char *port_full_name)
{
  const char *port_short_name;
  unsigned long int client_name_len;
  struct jack_graph_client *client_ptr;
  port_short_name=strchr(port_full_name, 58);
  if(port_short_name == ((const char *)NULL))
  {
    jack_error("port name '%s' does not contain ':' separator char", port_full_name);
    return (struct jack_graph_port *)(void *)0;
  }

  else
  {
    port_short_name = port_short_name + 1l;
    client_name_len = (unsigned long int)((port_short_name - port_full_name) - (signed long int)1);
    client_ptr=jack_controller_patchbay_find_client(patchbay_ptr, port_full_name, client_name_len);
    if(client_ptr == ((struct jack_graph_client *)NULL))
    {
      jack_error("cannot find client of port '%s'", port_full_name);
      return (struct jack_graph_port *)(void *)0;
    }

    else
    {
      struct jack_graph_port *return_value_jack_controller_patchbay_find_client_port_by_name_1;
      return_value_jack_controller_patchbay_find_client_port_by_name_1=jack_controller_patchbay_find_client_port_by_name(patchbay_ptr, client_ptr, port_short_name);
      return return_value_jack_controller_patchbay_find_client_port_by_name_1;
    }
  }
}

// jack_controller_patchbay_find_port_by_id
// file ../dbus/controller_iface_patchbay.c line 537
static struct jack_graph_port * jack_controller_patchbay_find_port_by_id(struct jack_controller_patchbay *patchbay_ptr, unsigned long int port_id)
{
  struct list_head *node_ptr;
  struct jack_graph_port *port_ptr;
  node_ptr = (&patchbay_ptr->graph.ports)->next;
  struct jack_graph_port *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &patchbay_ptr->graph.ports)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_graph_port *)((char *)__mptr - (signed long int)24ul);
    port_ptr = tmp_statement_expression_1;
    if(port_ptr->id == port_id)
      return port_ptr;

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (struct jack_graph_port *)(void *)0;
}

// jack_controller_patchbay_find_port_by_names
// file ../dbus/controller_iface_patchbay.c line 613
static struct jack_graph_port * jack_controller_patchbay_find_port_by_names(struct jack_controller_patchbay *patchbay_ptr, const char *client_name, const char *port_name)
{
  struct jack_graph_client *client_ptr;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(client_name);
  client_ptr=jack_controller_patchbay_find_client(patchbay_ptr, client_name, return_value_strlen_1);
  if(client_ptr == ((struct jack_graph_client *)NULL))
  {
    jack_error("cannot find client '%s'", client_name);
    return (struct jack_graph_port *)(void *)0;
  }

  else
  {
    struct jack_graph_port *return_value_jack_controller_patchbay_find_client_port_by_name_2;
    return_value_jack_controller_patchbay_find_client_port_by_name_2=jack_controller_patchbay_find_client_port_by_name(patchbay_ptr, client_ptr, port_name);
    return return_value_jack_controller_patchbay_find_client_port_by_name_2;
  }
}

// jack_controller_patchbay_init
// file ../dbus/controller_internal.h line 138
_Bool jack_controller_patchbay_init(struct jack_controller *controller_ptr)
{
  signed int ret;
  struct jack_controller_patchbay *patchbay_ptr;
  union anonymous_6 attr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct jack_controller_patchbay) /*120ul*/ );
  patchbay_ptr = (struct jack_controller_patchbay *)return_value_malloc_1;
  if(patchbay_ptr == ((struct jack_controller_patchbay *)NULL))
    jack_error("Memory allocation of jack_controller_patchbay structure failed.");

  else
  {
    ret=pthread_mutexattr_init(&attr);
    if(ret == 0)
    {
      ret=pthread_mutexattr_settype(&attr, 1);
      if(ret == 0)
      {
        pthread_mutex_init(&patchbay_ptr->lock, &attr);
        INIT_LIST_HEAD_link2(&patchbay_ptr->graph.clients);
        INIT_LIST_HEAD_link2(&patchbay_ptr->graph.ports);
        INIT_LIST_HEAD_link2(&patchbay_ptr->graph.connections);
        patchbay_ptr->graph.version = (unsigned long int)1;
        patchbay_ptr->next_client_id = (unsigned long int)1;
        patchbay_ptr->next_port_id = (unsigned long int)1;
        patchbay_ptr->next_connection_id = (unsigned long int)1;
        controller_ptr->patchbay_context = (void *)patchbay_ptr;
        ret=jack_set_graph_order_callback(controller_ptr->client, jack_controller_graph_order_callback, (void *)controller_ptr);
        if(!(ret == 0))
          jack_error("jack_set_graph_order_callback() failed with error %d", ret);

        else
        {
          ret=jack_set_client_registration_callback(controller_ptr->client, jack_controller_client_registration_callback, (void *)controller_ptr);
          if(!(ret == 0))
            jack_error("jack_set_client_registration_callback() failed with error %d", ret);

          else
          {
            ret=jack_set_port_registration_callback(controller_ptr->client, jack_controller_port_registration_callback, (void *)controller_ptr);
            if(!(ret == 0))
              jack_error("jack_set_port_registration_callback() failed with error %d", ret);

            else
            {
              ret=jack_set_port_connect_callback(controller_ptr->client, jack_controller_port_connect_callback, (void *)controller_ptr);
              if(!(ret == 0))
                jack_error("jack_set_port_connect_callback() failed with error %d", ret);

              else
              {
                ret=jack_set_port_rename_callback(controller_ptr->client, (void (*)(unsigned int, const char *, const char *, void *))jack_controller_port_rename_callback, (void *)controller_ptr);
                if(!(ret == 0))
                  jack_error("jack_set_port_rename_callback() failed with error %d", ret);

                else
                  return (_Bool)1;
              }
            }
          }
        }

      fail_uninit_mutex:
        ;
        pthread_mutex_destroy(&patchbay_ptr->lock);
      }

    }

  }

fail:
  ;
  return (_Bool)0;
}

// jack_controller_patchbay_new_port
// file ../dbus/controller_iface_patchbay.c line 444
static void jack_controller_patchbay_new_port(struct jack_controller_patchbay *patchbay_ptr, const char *port_full_name, unsigned int port_flags, unsigned int port_type)
{
  struct jack_graph_client *client_ptr;
  struct jack_graph_port *port_ptr;
  const char *port_short_name;
  unsigned long int client_name_len;
  port_short_name=strchr(port_full_name, 58);
  unsigned long int tmp_post_2;
  if(port_short_name == ((const char *)NULL))
    jack_error("port name '%s' does not contain ':' separator char", port_full_name);

  else
  {
    port_short_name = port_short_name + 1l;
    client_name_len = (unsigned long int)((port_short_name - port_full_name) - (signed long int)1);
    client_ptr=jack_controller_patchbay_find_client(patchbay_ptr, port_full_name, client_name_len);
    if(client_ptr == ((struct jack_graph_client *)NULL))
    {
      client_ptr=jack_controller_patchbay_create_client(patchbay_ptr, port_full_name, client_name_len);
      if(!(client_ptr == ((struct jack_graph_client *)NULL)))
        goto __CPROVER_DUMP_L2;

      jack_error("Creation of new jack_graph client failed.");
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct jack_graph_port) /*64ul*/ );
      port_ptr = (struct jack_graph_port *)return_value_malloc_1;
      if(port_ptr == ((struct jack_graph_port *)NULL))
        jack_error("Memory allocation of jack_graph_port structure failed.");

      else
      {
        port_ptr->name=strdup(port_short_name);
        if(port_ptr->name == ((char *)NULL))
        {
          jack_error("strdup() call for port name '%s' failed.", port_short_name);
          free((void *)port_ptr);
        }

        else
        {
          tmp_post_2 = patchbay_ptr->next_port_id;
          patchbay_ptr->next_port_id = patchbay_ptr->next_port_id + 1ul;
          port_ptr->id = tmp_post_2;
          port_ptr->flags = port_flags;
          port_ptr->type = port_type;
          port_ptr->client = client_ptr;
          pthread_mutex_lock(&patchbay_ptr->lock);
          list_add_tail_link2(&port_ptr->siblings_client, &client_ptr->ports);
          list_add_tail_link2(&port_ptr->siblings_graph, &patchbay_ptr->graph.ports);
          patchbay_ptr->graph.version = patchbay_ptr->graph.version + 1ul;
          jack_controller_patchbay_send_signal_port_appeared(patchbay_ptr->graph.version, client_ptr->id, client_ptr->name, port_ptr->id, port_ptr->name, port_ptr->flags, port_ptr->type);
          jack_controller_patchbay_send_signal_graph_changed(patchbay_ptr->graph.version);
          pthread_mutex_unlock(&patchbay_ptr->lock);
        }
      }
    }
  }
}

// jack_controller_patchbay_remove_port
// file ../dbus/controller_iface_patchbay.c line 517
static void jack_controller_patchbay_remove_port(struct jack_controller_patchbay *patchbay_ptr, struct jack_graph_port *port_ptr)
{
  pthread_mutex_lock(&patchbay_ptr->lock);
  list_del_link2(&port_ptr->siblings_client);
  list_del_link2(&port_ptr->siblings_graph);
  patchbay_ptr->graph.version = patchbay_ptr->graph.version + 1ul;
  jack_controller_patchbay_send_signal_port_disappeared(patchbay_ptr->graph.version, port_ptr->client->id, port_ptr->client->name, port_ptr->id, port_ptr->name);
  jack_controller_patchbay_send_signal_graph_changed(patchbay_ptr->graph.version);
  pthread_mutex_unlock(&patchbay_ptr->lock);
  free((void *)port_ptr->name);
  free((void *)port_ptr);
}

// jack_controller_patchbay_send_signal_client_appeared
// file ../dbus/controller_iface_patchbay.c line 105
void jack_controller_patchbay_send_signal_client_appeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "ClientAppeared", (signed int)116, &new_graph_version, (signed int)116, &client_id, (signed int)115, &client_name, (signed int)0);
}

// jack_controller_patchbay_send_signal_client_disappeared
// file ../dbus/controller_iface_patchbay.c line 125
void jack_controller_patchbay_send_signal_client_disappeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "ClientDisappeared", (signed int)116, &new_graph_version, (signed int)116, &client_id, (signed int)115, &client_name, (signed int)0);
}

// jack_controller_patchbay_send_signal_graph_changed
// file ../dbus/controller_iface_patchbay.c line 91
void jack_controller_patchbay_send_signal_graph_changed(unsigned long int new_graph_version)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "GraphChanged", (signed int)116, &new_graph_version, (signed int)0);
}

// jack_controller_patchbay_send_signal_port_appeared
// file ../dbus/controller_iface_patchbay.c line 145
void jack_controller_patchbay_send_signal_port_appeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name, unsigned long int port_id, const char *port_name, unsigned int port_flags, unsigned int port_type)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "PortAppeared", (signed int)116, &new_graph_version, (signed int)116, &client_id, (signed int)115, &client_name, (signed int)116, &port_id, (signed int)115, &port_name, (signed int)117, &port_flags, (signed int)117, &port_type, (signed int)0);
}

// jack_controller_patchbay_send_signal_port_disappeared
// file ../dbus/controller_iface_patchbay.c line 177
void jack_controller_patchbay_send_signal_port_disappeared(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name, unsigned long int port_id, const char *port_name)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "PortDisappeared", (signed int)116, &new_graph_version, (signed int)116, &client_id, (signed int)115, &client_name, (signed int)116, &port_id, (signed int)115, &port_name, (signed int)0);
}

// jack_controller_patchbay_send_signal_port_renamed
// file ../dbus/controller_iface_patchbay.c line 285
void jack_controller_patchbay_send_signal_port_renamed(unsigned long int new_graph_version, unsigned long int client_id, const char *client_name, unsigned long int port_id, const char *port_old_name, const char *port_new_name)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "PortRenamed", (signed int)116, &new_graph_version, (signed int)116, &client_id, (signed int)115, &client_name, (signed int)116, &port_id, (signed int)115, &port_old_name, (signed int)115, &port_new_name, (signed int)0);
}

// jack_controller_patchbay_send_signal_ports_connected
// file ../dbus/controller_iface_patchbay.c line 203
void jack_controller_patchbay_send_signal_ports_connected(unsigned long int new_graph_version, unsigned long int client1_id, const char *client1_name, unsigned long int port1_id, const char *port1_name, unsigned long int client2_id, const char *client2_name, unsigned long int port2_id, const char *port2_name, unsigned long int connection_id)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "PortsConnected", (signed int)116, &new_graph_version, (signed int)116, &client1_id, (signed int)115, &client1_name, (signed int)116, &port1_id, (signed int)115, &port1_name, (signed int)116, &client2_id, (signed int)115, &client2_name, (signed int)116, &port2_id, (signed int)115, &port2_name, (signed int)116, &connection_id, (signed int)0);
}

// jack_controller_patchbay_send_signal_ports_disconnected
// file ../dbus/controller_iface_patchbay.c line 244
void jack_controller_patchbay_send_signal_ports_disconnected(unsigned long int new_graph_version, unsigned long int client1_id, const char *client1_name, unsigned long int port1_id, const char *port1_name, unsigned long int client2_id, const char *client2_name, unsigned long int port2_id, const char *port2_name, unsigned long int connection_id)
{
  jack_dbus_send_signal("/org/jackaudio/Controller", "org.jackaudio.JackPatchbay", "PortsDisconnected", (signed int)116, &new_graph_version, (signed int)116, &client1_id, (signed int)115, &client1_name, (signed int)116, &port1_id, (signed int)115, &port1_name, (signed int)116, &client2_id, (signed int)115, &client2_name, (signed int)116, &port2_id, (signed int)115, &port2_name, (signed int)116, &connection_id, (signed int)0);
}

// jack_controller_patchbay_uninit
// file ../dbus/controller_internal.h line 142
void jack_controller_patchbay_uninit(struct jack_controller *controller_ptr)
{
  struct jack_graph_client *client_ptr;
  struct jack_graph_port *port_ptr;
  signed int return_value_list_empty_1;
  struct jack_graph_port *tmp_statement_expression_2;
  do
  {
    return_value_list_empty_1=list_empty_link2(&((struct jack_controller_patchbay *)controller_ptr->patchbay_context)->graph.ports);
    if(!(return_value_list_empty_1 == 0))
      break;

    const struct list_head *__mptr = ((struct jack_controller_patchbay *)controller_ptr->patchbay_context)->graph.ports.next;
    tmp_statement_expression_2 = (struct jack_graph_port *)((char *)__mptr - (signed long int)24ul);
    port_ptr = tmp_statement_expression_2;
    jack_controller_patchbay_remove_port((struct jack_controller_patchbay *)controller_ptr->patchbay_context, port_ptr);
  }
  while((_Bool)1);
  signed int return_value_list_empty_3;
  struct jack_graph_client *tmp_statement_expression_4;
  do
  {
    return_value_list_empty_3=list_empty_link2(&((struct jack_controller_patchbay *)controller_ptr->patchbay_context)->graph.clients);
    if(!(return_value_list_empty_3 == 0))
      break;

    const struct list_head *jack_controller_patchbay_uninit__1__2__1____mptr = ((struct jack_controller_patchbay *)controller_ptr->patchbay_context)->graph.clients.next;
    tmp_statement_expression_4 = (struct jack_graph_client *)((char *)jack_controller_patchbay_uninit__1__2__1____mptr - (signed long int)24ul);
    client_ptr = tmp_statement_expression_4;
    jack_controller_patchbay_destroy_client((struct jack_controller_patchbay *)controller_ptr->patchbay_context, client_ptr);
  }
  while((_Bool)1);
  pthread_mutex_destroy(&((struct jack_controller_patchbay *)controller_ptr->patchbay_context)->lock);
}

// jack_controller_pending_save
// file ../dbus/controller.c line 813
void jack_controller_pending_save(struct jack_controller *controller_ptr)
{
  struct sysinfo si;
  signed int return_value_sysinfo_2;
  return_value_sysinfo_2=sysinfo(&si);
  if(!(return_value_sysinfo_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    jack_error("sysinfo() failed with %d.", *return_value___errno_location_1);
    controller_ptr->pending_save = (signed long int)0;
    jack_controller_settings_save_auto(controller_ptr);
    goto __CPROVER_DUMP_L2;
  }

  controller_ptr->pending_save = si.uptime;

__CPROVER_DUMP_L2:
  ;
}

// jack_controller_port_connect_callback
// file ../dbus/controller_iface_patchbay.c line 1590
void jack_controller_port_connect_callback(unsigned int port1_id, unsigned int port2_id, signed int connect, void *context)
{
  struct _jack_port *port1;
  struct _jack_port *port2;
  const char *port1_name;
  const char *port2_name;
  struct jack_graph_port *port1_ptr;
  struct jack_graph_port *port2_ptr;
  struct jack_graph_connection *connection_ptr;
  port1=jack_port_by_id(((struct jack_controller *)context)->client, port1_id);
  port2=jack_port_by_id(((struct jack_controller *)context)->client, port2_id);
  port1_name=jack_port_name(port1);
  port2_name=jack_port_name(port2);
  port1_ptr=jack_controller_patchbay_find_port_by_full_name((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, port1_name);
  if(port1_ptr == ((struct jack_graph_port *)NULL))
    jack_error("Failed to find port '%s' to [dis]connect", port1_name);

  else
  {
    port2_ptr=jack_controller_patchbay_find_port_by_full_name((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, port2_name);
    if(port2_ptr == ((struct jack_graph_port *)NULL))
      jack_error("Failed to find port '%s' to [dis]connect", port2_name);

    else
      if(!(connect == 0))
      {
        jack_info("Connecting '%s' to '%s'", port1_name, port2_name);
        connection_ptr=jack_controller_patchbay_find_connection((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, port1_ptr, port2_ptr);
        if(!(connection_ptr == ((struct jack_graph_connection *)NULL)))
        {
          jack_error("'%s' and '%s' are already connected", port1_name, port2_name);
          goto __CPROVER_DUMP_L7;
        }

        jack_controller_patchbay_create_connection((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, port1_ptr, port2_ptr);
      }

      else
      {
        jack_info("Disconnecting '%s' from '%s'", port1_name, port2_name);
        connection_ptr=jack_controller_patchbay_find_connection((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, port1_ptr, port2_ptr);
        if(connection_ptr == ((struct jack_graph_connection *)NULL))
        {
          jack_error("Cannot find connection being removed");
          goto __CPROVER_DUMP_L7;
        }

        jack_controller_patchbay_destroy_connection((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, connection_ptr);
      }
  }

__CPROVER_DUMP_L7:
  ;
}

// jack_controller_port_registration_callback
// file ../dbus/controller_iface_patchbay.c line 1558
void jack_controller_port_registration_callback(unsigned int port_id, signed int created, void *context)
{
  struct _jack_port *port_ptr;
  struct jack_graph_port *graph_port_ptr;
  const char *port_name;
  port_ptr=jack_port_by_id(((struct jack_controller *)context)->client, port_id);
  port_name=jack_port_name(port_ptr);
  if(!(created == 0))
  {
    jack_log("port '%s' created", port_name);
    signed int return_value_jack_port_flags_1;
    return_value_jack_port_flags_1=jack_port_flags(port_ptr);
    unsigned int return_value_jack_port_type_id_2;
    return_value_jack_port_type_id_2=jack_port_type_id(port_ptr);
    jack_controller_patchbay_new_port((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, port_name, (unsigned int)return_value_jack_port_flags_1, return_value_jack_port_type_id_2);
  }

  else
  {
    jack_log("port '%s' destroyed", port_name);
    graph_port_ptr=jack_controller_patchbay_find_port_by_full_name((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, port_name);
    if(graph_port_ptr == ((struct jack_graph_port *)NULL))
    {
      jack_error("Failed to find port '%s' to destroy", port_name);
      goto __CPROVER_DUMP_L4;
    }

    jack_controller_patchbay_remove_port((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, graph_port_ptr);
  }

__CPROVER_DUMP_L4:
  ;
}

// jack_controller_port_rename_callback
// file ../dbus/controller_iface_patchbay.c line 1650
signed int jack_controller_port_rename_callback(unsigned int port, const char *old_name, const char *new_name, void *context)
{
  struct jack_graph_port *port_ptr;
  const char *port_new_short_name;
  const char *port_old_short_name;
  char *name_buffer;
  jack_info("port renamed: '%s' -> '%s'", old_name, new_name);
  port_new_short_name=strchr(new_name, 58);
  if(port_new_short_name == ((const char *)NULL))
  {
    jack_error("renamed port new name '%s' does not contain ':' separator char", new_name);
    return -1;
  }

  else
  {
    port_new_short_name = port_new_short_name + 1l;
    port_old_short_name=strchr(old_name, 58);
    if(port_old_short_name == ((const char *)NULL))
    {
      jack_error("renamed port old name '%s' does not contain ':' separator char", old_name);
      return -1;
    }

    else
    {
      port_old_short_name = port_old_short_name + 1l;
      port_ptr=jack_controller_patchbay_find_port_by_full_name((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context, old_name);
      if(port_ptr == ((struct jack_graph_port *)NULL))
      {
        jack_error("renamed port '%s' not found", old_name);
        return -1;
      }

      else
      {
        name_buffer=strdup(port_new_short_name);
        if(name_buffer == ((char *)NULL))
        {
          jack_error("strdup() call for port name '%s' failed.", port_new_short_name);
          return 1;
        }

        else
        {
          free((void *)port_ptr->name);
          port_ptr->name = name_buffer;
          pthread_mutex_lock(&((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->lock);
          ((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version = ((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version + 1ul;
          jack_controller_patchbay_send_signal_port_renamed(((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version, port_ptr->client->id, port_ptr->client->name, port_ptr->id, port_old_short_name, port_ptr->name);
          jack_controller_patchbay_send_signal_graph_changed(((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->graph.version);
          pthread_mutex_unlock(&((struct jack_controller_patchbay *)((struct jack_controller *)context)->patchbay_context)->lock);
          return 0;
        }
      }
    }
  }
}

// jack_controller_process_session_command_thread
// file ../dbus/controller_iface_session_manager.c line 201
void * jack_controller_process_session_command_thread(void *context)
{
  struct jack_session_pending_command *pending_cmd_ptr;
  struct anonymous_9 *commands;
  jack_log("jack_controller_process_session_command_thread enter");
  pthread_mutex_lock(&((struct jack_controller *)context)->lock);
  signed int return_value_list_empty_1;
  struct jack_session_pending_command *tmp_statement_expression_2;
  signed int return_value_list_empty_3;
  struct jack_session_pending_command *tmp_statement_expression_4;
  signed int return_value_list_empty_5;
  do
  {

  loop:
    ;
    return_value_list_empty_1=list_empty_link3(&((struct jack_controller *)context)->session_pending_commands);
    /* assertion !list_empty(&((struct jack_controller *)context)->session_pending_commands) */
    assert(!(return_value_list_empty_1 != 0));
    const struct list_head *__mptr = ((struct jack_controller *)context)->session_pending_commands.next;
    tmp_statement_expression_2 = (struct jack_session_pending_command *)((char *)__mptr - (signed long int)0ul);
    pending_cmd_ptr = tmp_statement_expression_2;
    pthread_mutex_unlock(&((struct jack_controller *)context)->lock);
    jack_info("Session notify initiated. target='%s', type=%d, path='%s'", pending_cmd_ptr->target, (signed int)pending_cmd_ptr->type, pending_cmd_ptr->path);
    jack_controller_control_send_signal_session_state_changed(pending_cmd_ptr->type, pending_cmd_ptr->target);
    commands=jack_session_notify(((struct jack_controller *)context)->client, pending_cmd_ptr->target, pending_cmd_ptr->type, pending_cmd_ptr->path);
    send_session_notify_reply(pending_cmd_ptr, commands);
    if(!(commands == ((struct anonymous_9 *)NULL)))
      jack_session_commands_free(commands);

    pthread_mutex_lock(&((struct jack_controller *)context)->lock);
    jack_controller_control_send_signal_session_state_changed((enum JackSessionEventType)0, (const char *)(void *)0);
    return_value_list_empty_3=list_empty_link3(&((struct jack_controller *)context)->session_pending_commands);
    /* assertion !list_empty(&((struct jack_controller *)context)->session_pending_commands) */
    assert(!(return_value_list_empty_3 != 0));
    const struct list_head *jack_controller_process_session_command_thread__1__3____mptr = ((struct jack_controller *)context)->session_pending_commands.next;
    tmp_statement_expression_4 = (struct jack_session_pending_command *)((char *)jack_controller_process_session_command_thread__1__3____mptr - (signed long int)0ul);
    /* assertion pending_cmd_ptr == ({ const typeof( ((struct jack_session_pending_command *)0)->siblings ) *__mptr = (((struct jack_controller *)context)->session_pending_commands.next); (struct jack_session_pending_command *)( (char *)__mptr - __builtin_offsetof (struct jack_session_pending_command, siblings) );}) */
    assert(pending_cmd_ptr == tmp_statement_expression_4);
    list_del_link3(&pending_cmd_ptr->siblings);
    dbus_message_unref(pending_cmd_ptr->message);
    dbus_connection_ref(pending_cmd_ptr->connection);
    free((void *)pending_cmd_ptr);
    return_value_list_empty_5=list_empty_link3(&((struct jack_controller *)context)->session_pending_commands);
  }
  while(return_value_list_empty_5 == 0);
  pthread_mutex_unlock(&((struct jack_controller *)context)->lock);
  jack_log("jack_controller_process_session_command_thread exit");
  return (void *)0;
}

// jack_controller_remove_slave_driver
// file ../dbus/controller.c line 690
_Bool jack_controller_remove_slave_driver(struct jack_controller *controller_ptr, const char *driver_name)
{
  struct list_head *node_ptr;
  struct jack_controller_slave_driver *driver_ptr;
  node_ptr = (&controller_ptr->slave_drivers)->next;
  struct jack_controller_slave_driver *tmp_statement_expression_1;
  struct jack_controller_slave_driver *tmp_statement_expression_2;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &controller_ptr->slave_drivers)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_controller_slave_driver *)((char *)__mptr - (signed long int)0ul);
    driver_ptr = tmp_statement_expression_1;
    signed int return_value_strcmp_3;
    return_value_strcmp_3=strcmp(driver_ptr->name, driver_name);
    if(return_value_strcmp_3 == 0)
    {
      list_del(&driver_ptr->siblings);
      free((void *)driver_ptr->name);
      free((void *)driver_ptr);
      controller_ptr->slave_drivers_vparam_value.str[(signed long int)0] = (char)0;
      node_ptr = (&controller_ptr->slave_drivers)->next;
      do
      {
        node_ptr->next = node_ptr->next;
        if(node_ptr == &controller_ptr->slave_drivers)
          break;

        const struct list_head *jack_controller_remove_slave_driver__1__1__1__2__1__1__1____mptr = node_ptr;
        tmp_statement_expression_2 = (struct jack_controller_slave_driver *)((char *)jack_controller_remove_slave_driver__1__1__1__2__1__1__1____mptr - (signed long int)0ul);
        driver_ptr = tmp_statement_expression_2;
        if(!((signed int)controller_ptr->slave_drivers_vparam_value.str[0l] == 0))
          strcat(controller_ptr->slave_drivers_vparam_value.str, ",");

        strcat(controller_ptr->slave_drivers_vparam_value.str, driver_ptr->name);
        node_ptr = node_ptr->next;
      }
      while((_Bool)1);
      jack_info("driver \"%s\" is not slave anymore", driver_name);
      return (_Bool)1;
    }

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (_Bool)0;
}

// jack_controller_remove_slave_drivers
// file ../dbus/controller.c line 129
static void jack_controller_remove_slave_drivers(struct jack_controller *controller_ptr)
{
  struct jack_controller_slave_driver *driver_ptr;
  signed int return_value_list_empty_1;
  struct jack_controller_slave_driver *tmp_statement_expression_2;
  do
  {
    return_value_list_empty_1=list_empty(&controller_ptr->slave_drivers);
    if(!(return_value_list_empty_1 == 0))
      break;

    const struct list_head *__mptr = controller_ptr->slave_drivers.next;
    tmp_statement_expression_2 = (struct jack_controller_slave_driver *)((char *)__mptr - (signed long int)0ul);
    driver_ptr = tmp_statement_expression_2;
    /* assertion !driver_ptr->loaded */
    assert(!(driver_ptr->loaded != (_Bool)0));
    list_del(&driver_ptr->siblings);
    free((void *)driver_ptr->name);
    free((void *)driver_ptr);
  }
  while((_Bool)1);
  controller_ptr->slave_drivers_vparam_value.str[(signed long int)0] = (char)0;
}

// jack_controller_run
// file ../dbus/controller.h line 28
void jack_controller_run(void *context)
{
  struct sysinfo si;
  if(!(((struct jack_controller *)context)->pending_save == 0l))
  {
    signed int return_value_sysinfo_2;
    return_value_sysinfo_2=sysinfo(&si);
    if(!(return_value_sysinfo_2 == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      jack_error("sysinfo() failed with %d", *return_value___errno_location_1);
    }

    else
      if(!(si.uptime >= 2l + ((struct jack_controller *)context)->pending_save))
        goto __CPROVER_DUMP_L4;

    ((struct jack_controller *)context)->pending_save = (signed long int)0;
    jack_controller_settings_save_auto((struct jack_controller *)context);
  }


__CPROVER_DUMP_L4:
  ;
}

// jack_controller_select_driver
// file ../dbus/controller.c line 169
_Bool jack_controller_select_driver(struct jack_controller *controller_ptr, const char *driver_name)
{
  _Bool return_value_jack_params_set_driver_1;
  return_value_jack_params_set_driver_1=jack_params_set_driver(controller_ptr->params, driver_name);
  if(return_value_jack_params_set_driver_1 == (_Bool)0)
    return (_Bool)0;

  else
  {
    jack_info("driver \"%s\" selected", driver_name);
    return (_Bool)1;
  }
}

// jack_controller_serialize_parameter
// file ../dbus/xml_write_raw.c line 67
static _Bool jack_controller_serialize_parameter(void *context, struct jack_parameter *param_ptr)
{
  char value[128l];
  _Bool return_value;
  return_value=param_ptr->vtable.is_set(param_ptr->obj);
  _Bool tmp_if_expr_3;
  _Bool return_value_jack_controller_settings_write_string_2;
  _Bool tmp_if_expr_5;
  _Bool return_value_jack_controller_settings_write_string_4;
  _Bool tmp_if_expr_7;
  _Bool return_value_jack_controller_settings_write_string_6;
  _Bool tmp_if_expr_9;
  _Bool return_value_jack_controller_settings_write_string_8;
  _Bool tmp_if_expr_11;
  _Bool return_value_jack_controller_settings_write_string_10;
  if(return_value == (_Bool)0)
    return (_Bool)1;

  else
  {
    jack_controller_serialize_parameter_value(param_ptr, value);
    _Bool return_value_jack_controller_settings_write_string_1;
    return_value_jack_controller_settings_write_string_1=jack_controller_settings_write_string(((struct save_context *)context)->fd, ((struct save_context *)context)->indent, ((struct save_context *)context)->call);
    if(!(return_value_jack_controller_settings_write_string_1 == (_Bool)0))
    {
      return_value_jack_controller_settings_write_string_2=jack_controller_settings_write_string(((struct save_context *)context)->fd, "<option name=\"", ((struct save_context *)context)->call);
      tmp_if_expr_3 = return_value_jack_controller_settings_write_string_2 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      return_value_jack_controller_settings_write_string_4=jack_controller_settings_write_string(((struct save_context *)context)->fd, param_ptr->name, ((struct save_context *)context)->call);
      tmp_if_expr_5 = return_value_jack_controller_settings_write_string_4 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      return_value_jack_controller_settings_write_string_6=jack_controller_settings_write_string(((struct save_context *)context)->fd, "\">", ((struct save_context *)context)->call);
      tmp_if_expr_7 = return_value_jack_controller_settings_write_string_6 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
    {
      return_value_jack_controller_settings_write_string_8=jack_controller_settings_write_string(((struct save_context *)context)->fd, value, ((struct save_context *)context)->call);
      tmp_if_expr_9 = return_value_jack_controller_settings_write_string_8 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_9 = (_Bool)0;
    if(tmp_if_expr_9)
    {
      return_value_jack_controller_settings_write_string_10=jack_controller_settings_write_string(((struct save_context *)context)->fd, "</option>\n", ((struct save_context *)context)->call);
      tmp_if_expr_11 = return_value_jack_controller_settings_write_string_10 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_11 = (_Bool)0;
    return tmp_if_expr_11;
  }
}

// jack_controller_serialize_parameter_value
// file ../dbus/xml.c line 110
void jack_controller_serialize_parameter_value(struct jack_parameter *param_ptr, char *value_buffer)
{
  union jackctl_parameter_value value;
  value=param_ptr->vtable.get_value(param_ptr->obj);
  if((signed int)param_ptr->type == JackParamInt)
  {
    sprintf(value_buffer, "%d", (signed int)value.i);
    sprintf(value_buffer, "%u", (unsigned int)value.ui);
    sprintf(value_buffer, "%c", (char)value.c);
    strcpy(value_buffer, value.str);
    strcpy(value_buffer, value.b != (_Bool)0 ? "true" : "false");
  }

  jack_error("parameter of unknown type %d", (signed int)param_ptr->type);
  /* assertion 0 */
  assert(0 != 0);
  *value_buffer = (char)0;
}

// jack_controller_settings_callback_chrdata
// file ../dbus/xml_expat.c line 66
void jack_controller_settings_callback_chrdata(void *data, const char *s, signed int len)
{
  if(((struct parse_context *)data)->error == 0)
  {
    if(!(((struct parse_context *)data)->option_value_capture == (_Bool)0))
    {
      if(((struct parse_context *)data)->option_used + len >= 127)
      {
        jack_error("xml parse max char data length reached");
        ((struct parse_context *)data)->error = (unsigned char)1;
      }

      else
      {
        memcpy((void *)(((struct parse_context *)data)->option + (signed long int)((struct parse_context *)data)->option_used), (const void *)s, (unsigned long int)len);
        ((struct parse_context *)data)->option_used = ((struct parse_context *)data)->option_used + len;
      }
    }

  }

}

// jack_controller_settings_callback_elend
// file ../dbus/xml_expat.c line 179
void jack_controller_settings_callback_elend(void *data, const char *el)
{
  signed int i;
  signed int return_value_strcmp_1;
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_2;
  _Bool tmp_if_expr_5;
  signed int return_value_strcmp_4;
  if(((struct parse_context *)data)->error == 0)
  {
    signed int return_value_strcmp_6;
    return_value_strcmp_6=strcmp(el, "option");
    if(return_value_strcmp_6 == 0)
    {
      /* assertion ((struct parse_context *)data)->option_value_capture */
      assert(((struct parse_context *)data)->option_value_capture != (_Bool)0);
      ((struct parse_context *)data)->option[(signed long int)((struct parse_context *)data)->option_used] = (char)0;
      i = ((struct parse_context *)data)->address_index;
      for( ; !(i >= 3); i = i + 1)
        ((struct parse_context *)data)->address[(signed long int)((struct parse_context *)data)->address_index] = (const char *)(void *)0;
      jack_controller_deserialize_parameter_value(((struct parse_context *)data)->controller_ptr, ((struct parse_context *)data)->address, ((struct parse_context *)data)->option);
      free((void *)((struct parse_context *)data)->name);
      ((struct parse_context *)data)->name = (char *)(void *)0;
      ((struct parse_context *)data)->option_value_capture = (_Bool)0;
      ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index - 1;
    }

    else
      if(!(((struct parse_context *)data)->container == ((char *)NULL)))
      {
        free((void *)((struct parse_context *)data)->container);
        ((struct parse_context *)data)->container = (char *)(void *)0;
        ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index - 1;
      }

      else
      {
        return_value_strcmp_1=strcmp(el, "engine");
        if(return_value_strcmp_1 == 0)
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          return_value_strcmp_2=strcmp(el, "drivers");
          tmp_if_expr_3 = return_value_strcmp_2 == 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_3)
          tmp_if_expr_5 = (_Bool)1;

        else
        {
          return_value_strcmp_4=strcmp(el, "internals");
          tmp_if_expr_5 = return_value_strcmp_4 == 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_5)
          ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index - 1;

      }
  }

}

// jack_controller_settings_callback_elstart
// file ../dbus/xml_expat.c line 88
void jack_controller_settings_callback_elstart(void *data, const char *el, const char **attr)
{
  signed int tmp_post_2;
  signed int tmp_post_4;
  signed int tmp_post_6;
  _Bool tmp_if_expr_14;
  signed int return_value_strcmp_13;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_10;
  signed int return_value_strcmp_9;
  signed int tmp_post_11;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_17;
  signed int return_value_strcmp_16;
  signed int tmp_post_18;
  if(((struct parse_context *)data)->error == 0)
  {
    if(((struct parse_context *)data)->address_index >= 3)
    {
      /* assertion ((struct parse_context *)data)->address_index == 3 */
      assert(((struct parse_context *)data)->address_index == 3);
      jack_error("xml param address max depth reached");
      ((struct parse_context *)data)->error = (unsigned char)1;
    }

    else
    {
      signed int return_value_strcmp_1;
      return_value_strcmp_1=strcmp(el, "jack");
      if(!(return_value_strcmp_1 == 0))
      {
        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(el, "engine");
        if(return_value_strcmp_3 == 0)
        {
          tmp_post_2 = ((struct parse_context *)data)->address_index;
          ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index + 1;
          ((struct parse_context *)data)->address[(signed long int)tmp_post_2] = "engine";
        }

        else
        {
          signed int return_value_strcmp_5;
          return_value_strcmp_5=strcmp(el, "drivers");
          if(return_value_strcmp_5 == 0)
          {
            tmp_post_4 = ((struct parse_context *)data)->address_index;
            ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index + 1;
            ((struct parse_context *)data)->address[(signed long int)tmp_post_4] = "drivers";
          }

          else
          {
            signed int return_value_strcmp_7;
            return_value_strcmp_7=strcmp(el, "internals");
            if(return_value_strcmp_7 == 0)
            {
              tmp_post_6 = ((struct parse_context *)data)->address_index;
              ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index + 1;
              ((struct parse_context *)data)->address[(signed long int)tmp_post_6] = "internals";
            }

            else
            {
              signed int return_value_strcmp_12;
              return_value_strcmp_12=strcmp(el, "driver");
              if(return_value_strcmp_12 == 0)
                tmp_if_expr_14 = (_Bool)1;

              else
              {
                return_value_strcmp_13=strcmp(el, "internal");
                tmp_if_expr_14 = return_value_strcmp_13 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_14)
              {
                if(*attr == ((const char *)NULL))
                  tmp_if_expr_8 = (_Bool)1;

                else
                  tmp_if_expr_8 = attr[(signed long int)2] != (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_8)
                  tmp_if_expr_10 = (_Bool)1;

                else
                {
                  return_value_strcmp_9=strcmp(attr[(signed long int)0], "name");
                  tmp_if_expr_10 = return_value_strcmp_9 != 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_10)
                {
                  jack_error("<%s> XML element must contain exactly one attribute, named \"name\"", el);
                  ((struct parse_context *)data)->error = (unsigned char)1;
                  goto __CPROVER_DUMP_L21;
                }

                ((struct parse_context *)data)->container=strdup(attr[(signed long int)1]);
                if(((struct parse_context *)data)->container == ((char *)NULL))
                {
                  jack_error("strdup() failed");
                  ((struct parse_context *)data)->error = (unsigned char)1;
                  goto __CPROVER_DUMP_L21;
                }

                tmp_post_11 = ((struct parse_context *)data)->address_index;
                ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index + 1;
                ((struct parse_context *)data)->address[(signed long int)tmp_post_11] = ((struct parse_context *)data)->container;
                goto __CPROVER_DUMP_L21;
              }

              signed int return_value_strcmp_19;
              return_value_strcmp_19=strcmp(el, "option");
              if(return_value_strcmp_19 == 0)
              {
                if(*attr == ((const char *)NULL))
                  tmp_if_expr_15 = (_Bool)1;

                else
                  tmp_if_expr_15 = attr[(signed long int)2] != (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_15)
                  tmp_if_expr_17 = (_Bool)1;

                else
                {
                  return_value_strcmp_16=strcmp(attr[(signed long int)0], "name");
                  tmp_if_expr_17 = return_value_strcmp_16 != 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_17)
                {
                  jack_error("<option> XML element must contain exactly one attribute, named \"name\"");
                  ((struct parse_context *)data)->error = (unsigned char)1;
                  goto __CPROVER_DUMP_L21;
                }

                ((struct parse_context *)data)->name=strdup(attr[(signed long int)1]);
                if(((struct parse_context *)data)->name == ((char *)NULL))
                {
                  jack_error("strdup() failed");
                  ((struct parse_context *)data)->error = (unsigned char)1;
                  goto __CPROVER_DUMP_L21;
                }

                tmp_post_18 = ((struct parse_context *)data)->address_index;
                ((struct parse_context *)data)->address_index = ((struct parse_context *)data)->address_index + 1;
                ((struct parse_context *)data)->address[(signed long int)tmp_post_18] = ((struct parse_context *)data)->name;
                ((struct parse_context *)data)->option_value_capture = (_Bool)1;
                ((struct parse_context *)data)->option_used = 0;
                goto __CPROVER_DUMP_L21;
              }

              jack_error("unknown element \"%s\"", el);
              ((struct parse_context *)data)->error = (unsigned char)1;
            }
          }
        }
      }

    }
  }


__CPROVER_DUMP_L21:
  ;
}

// jack_controller_settings_init
// file ../dbus/jackdbus.h line 42
_Bool jack_controller_settings_init()
{
  return (_Bool)1;
}

// jack_controller_settings_load
// file ../dbus/xml.h line 29
void jack_controller_settings_load(struct jack_controller *controller_ptr)
{
  struct XML_ParserStruct *parser;
  signed int bytes_read;
  void *buffer;
  char *filename;
  unsigned long int conf_len;
  struct stat st;
  signed int fd;
  enum XML_Status xmls;
  struct parse_context context;
  conf_len=strlen("/conf.xml");
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(g_jackdbus_config_dir_len + conf_len + (unsigned long int)1);
  filename = (char *)return_value_malloc_1;
  const char *return_value_XML_ExpatVersion_2;
  signed int return_value_stat_6;
  signed long int return_value_read_7;
  if(filename == ((char *)NULL))
    jack_error("Out of memory.");

  else
  {
    memcpy((void *)filename, (const void *)g_jackdbus_config_dir, g_jackdbus_config_dir_len);
    memcpy((void *)(filename + (signed long int)g_jackdbus_config_dir_len), (const void *)"/conf.xml", conf_len);
    filename[(signed long int)(g_jackdbus_config_dir_len + conf_len)] = (char)0;
    return_value_XML_ExpatVersion_2=XML_ExpatVersion();
    jack_info("Loading settings from \"%s\" using %s ...", filename, return_value_XML_ExpatVersion_2);
    return_value_stat_6=stat(filename, &st);
    if(!(return_value_stat_6 == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      char *return_value_strerror_5;
      return_value_strerror_5=strerror(*return_value___errno_location_4);
      jack_error("failed to stat \"%s\", error is %d (%s)", filename, *return_value___errno_location_3, return_value_strerror_5);
    }

    fd=open(filename, 00);
    if(fd == -1)
      jack_error("open() failed to open conf filename.");

    else
    {
      parser=XML_ParserCreate((const char *)(void *)0);
      if(parser == ((struct XML_ParserStruct *)NULL))
        jack_error("XML_ParserCreate() failed to create parser object.");

      else
      {
        buffer=XML_GetBuffer(parser, (signed int)st.st_size);
        if(buffer == NULL)
          jack_error("XML_GetBuffer() failed.");

        else
        {
          return_value_read_7=read(fd, buffer, (unsigned long int)st.st_size);
          bytes_read = (signed int)return_value_read_7;
          if(!((signed long int)bytes_read == st.st_size))
            jack_error("read() returned unexpected result.");

          else
          {
            context.controller_ptr = controller_ptr;
            context.error = (unsigned char)0;
            context.option_value_capture = (_Bool)0;
            context.address_index = 0;
            context.name = (char *)(void *)0;
            context.container = (char *)(void *)0;
            XML_SetElementHandler(parser, jack_controller_settings_callback_elstart, jack_controller_settings_callback_elend);
            XML_SetCharacterDataHandler(parser, jack_controller_settings_callback_chrdata);
            XML_SetUserData(parser, (void *)&context);
            xmls=XML_ParseBuffer(parser, bytes_read, (signed int)(unsigned char)1);
            free((void *)context.name);
            free((void *)context.container);
            if((signed int)xmls == XML_STATUS_ERROR)
              jack_error("XML_ParseBuffer() failed.");

          }
        }

      exit_free_parser:
        ;
        XML_ParserFree(parser);
      }

    exit_close_file:
      ;
      close(fd);
    }

  exit_free_filename:
    ;
    free((void *)filename);
  }

exit:
  ;
  goto __CPROVER_DUMP_L11;

__CPROVER_DUMP_L11:
  ;
}

// jack_controller_settings_save
// file ../dbus/xml_write_raw.c line 109
_Bool jack_controller_settings_save(struct jack_controller *controller_ptr, void *dbus_call_context_ptr)
{
  char *filename;
  unsigned long int conf_len;
  signed int fd;
  _Bool ret;
  signed long int timestamp;
  char timestamp_str[26l];
  struct save_context context;
  const char *modules[3l] = { "driver", "internal", (const char *)(void *)0 };
  char buffer[100l];
  unsigned int i;
  time(&timestamp);
  ctime_r(&timestamp, timestamp_str);
  timestamp_str[(signed long int)24] = (char)0;
  ret = (_Bool)0;
  conf_len=strlen("/conf.xml");
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(g_jackdbus_config_dir_len + conf_len + (unsigned long int)1);
  filename = (char *)return_value_malloc_1;
  _Bool return_value_jack_controller_settings_write_string_5;
  _Bool return_value_jack_controller_settings_write_string_6;
  _Bool return_value_jack_controller_settings_write_string_7;
  _Bool return_value_jack_controller_settings_write_string_8;
  _Bool return_value_jack_controller_settings_write_string_9;
  _Bool return_value_jack_controller_settings_write_string_10;
  _Bool return_value_jack_controller_settings_write_string_11;
  _Bool return_value_jack_controller_settings_write_string_12;
  _Bool return_value_jack_controller_settings_write_string_13;
  _Bool return_value_jack_params_iterate_params_14;
  _Bool return_value_jack_controller_settings_write_string_15;
  _Bool return_value_jack_controller_settings_write_string_23;
  if(filename == ((char *)NULL))
    jack_error("Out of memory.");

  else
  {
    memcpy((void *)filename, (const void *)g_jackdbus_config_dir, g_jackdbus_config_dir_len);
    memcpy((void *)(filename + (signed long int)g_jackdbus_config_dir_len), (const void *)"/conf.xml", conf_len);
    filename[(signed long int)(g_jackdbus_config_dir_len + conf_len)] = (char)0;
    jack_info("Saving settings to \"%s\" ...", filename);
    fd=open(filename, 01 | 01000 | 0100, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
    if(fd == -1)
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(*return_value___errno_location_3);
      jack_error("open() failed to open conf filename. error is %d (%s)", *return_value___errno_location_2, return_value_strerror_4);
      goto exit_free_filename;
    }

    context.fd = fd;
    context.call = dbus_call_context_ptr;
    return_value_jack_controller_settings_write_string_5=jack_controller_settings_write_string(fd, "<?xml version=\"1.0\"?>\n", dbus_call_context_ptr);
    if(!(return_value_jack_controller_settings_write_string_5 == (_Bool)0))
    {
      return_value_jack_controller_settings_write_string_6=jack_controller_settings_write_string(fd, "<!--\n", dbus_call_context_ptr);
      if(!(return_value_jack_controller_settings_write_string_6 == (_Bool)0))
      {
        return_value_jack_controller_settings_write_string_7=jack_controller_settings_write_string(fd, "JACK settings, as persisted by D-Bus object.\nYou probably don't want to edit this because\nit will be overwritten next time jackdbus saves.\n", dbus_call_context_ptr);
        if(!(return_value_jack_controller_settings_write_string_7 == (_Bool)0))
        {
          return_value_jack_controller_settings_write_string_8=jack_controller_settings_write_string(fd, "-->\n", dbus_call_context_ptr);
          if(!(return_value_jack_controller_settings_write_string_8 == (_Bool)0))
          {
            return_value_jack_controller_settings_write_string_9=jack_controller_settings_write_string(fd, "<!-- ", dbus_call_context_ptr);
            if(!(return_value_jack_controller_settings_write_string_9 == (_Bool)0))
            {
              return_value_jack_controller_settings_write_string_10=jack_controller_settings_write_string(fd, timestamp_str, dbus_call_context_ptr);
              if(!(return_value_jack_controller_settings_write_string_10 == (_Bool)0))
              {
                return_value_jack_controller_settings_write_string_11=jack_controller_settings_write_string(fd, " -->\n", dbus_call_context_ptr);
                if(!(return_value_jack_controller_settings_write_string_11 == (_Bool)0))
                {
                  return_value_jack_controller_settings_write_string_12=jack_controller_settings_write_string(fd, "<jack>\n", dbus_call_context_ptr);
                  if(!(return_value_jack_controller_settings_write_string_12 == (_Bool)0))
                  {
                    return_value_jack_controller_settings_write_string_13=jack_controller_settings_write_string(fd, " <engine>\n", dbus_call_context_ptr);
                    if(!(return_value_jack_controller_settings_write_string_13 == (_Bool)0))
                    {
                      context.indent = "  ";
                      context.address[(signed long int)0] = "engine";
                      context.address[(signed long int)1] = (const char *)(void *)0;
                      return_value_jack_params_iterate_params_14=jack_params_iterate_params(controller_ptr->params, context.address, jack_controller_serialize_parameter, (void *)&context);
                      if(!(return_value_jack_params_iterate_params_14 == (_Bool)0))
                      {
                        return_value_jack_controller_settings_write_string_15=jack_controller_settings_write_string(fd, " </engine>\n", dbus_call_context_ptr);
                        if(!(return_value_jack_controller_settings_write_string_15 == (_Bool)0))
                        {
                          i = (unsigned int)0;
                          for( ; !(modules[(signed long int)i] == ((const char *)NULL)); i = i + 1u)
                          {
                            _Bool return_value_jack_controller_settings_write_string_16;
                            return_value_jack_controller_settings_write_string_16=jack_controller_settings_write_string(fd, " <", dbus_call_context_ptr);
                            if(return_value_jack_controller_settings_write_string_16 == (_Bool)0)
                              goto exit_close;

                            _Bool return_value_jack_controller_settings_write_string_17;
                            return_value_jack_controller_settings_write_string_17=jack_controller_settings_write_string(fd, modules[(signed long int)i], dbus_call_context_ptr);
                            if(return_value_jack_controller_settings_write_string_17 == (_Bool)0)
                              goto exit_close;

                            _Bool return_value_jack_controller_settings_write_string_18;
                            return_value_jack_controller_settings_write_string_18=jack_controller_settings_write_string(fd, "s>\n", dbus_call_context_ptr);
                            if(return_value_jack_controller_settings_write_string_18 == (_Bool)0)
                              goto exit_close;

                            context.indent = "  ";
                            context.params = controller_ptr->params;
                            context.str = modules[(signed long int)i];
                            strcpy(buffer, modules[(signed long int)i]);
                            strcat(buffer, "s");
                            context.address[(signed long int)0] = buffer;
                            context.address[(signed long int)1] = (const char *)(void *)0;
                            _Bool return_value_jack_params_iterate_container_19;
                            return_value_jack_params_iterate_container_19=jack_params_iterate_container(controller_ptr->params, context.address, serialize_modules, (void *)&context);
                            if(return_value_jack_params_iterate_container_19 == (_Bool)0)
                              goto exit_close;

                            _Bool return_value_jack_controller_settings_write_string_20;
                            return_value_jack_controller_settings_write_string_20=jack_controller_settings_write_string(fd, " </", dbus_call_context_ptr);
                            if(return_value_jack_controller_settings_write_string_20 == (_Bool)0)
                              goto exit_close;

                            _Bool return_value_jack_controller_settings_write_string_21;
                            return_value_jack_controller_settings_write_string_21=jack_controller_settings_write_string(fd, modules[(signed long int)i], dbus_call_context_ptr);
                            if(return_value_jack_controller_settings_write_string_21 == (_Bool)0)
                              goto exit_close;

                            _Bool return_value_jack_controller_settings_write_string_22;
                            return_value_jack_controller_settings_write_string_22=jack_controller_settings_write_string(fd, "s>\n", dbus_call_context_ptr);
                            if(return_value_jack_controller_settings_write_string_22 == (_Bool)0)
                              goto exit_close;

                          }
                          return_value_jack_controller_settings_write_string_23=jack_controller_settings_write_string(fd, "</jack>\n", dbus_call_context_ptr);
                          if(!(return_value_jack_controller_settings_write_string_23 == (_Bool)0))
                            ret = (_Bool)1;

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


  exit_close:
    ;
    close(fd);

  exit_free_filename:
    ;
    free((void *)filename);
  }

exit:
  ;
  return ret;
}

// jack_controller_settings_save_auto
// file ../dbus/xml.h line 33
void jack_controller_settings_save_auto(struct jack_controller *controller_ptr)
{
  jack_controller_settings_save(controller_ptr, (void *)0);
}

// jack_controller_settings_uninit
// file ../dbus/jackdbus.h line 45
void jack_controller_settings_uninit()
{
  ;
}

// jack_controller_settings_write_string
// file ../dbus/xml_write_raw.c line 39
_Bool jack_controller_settings_write_string(signed int fd, const char *string, void *dbus_call_context_ptr)
{
  unsigned long int len;
  len=strlen(string);
  signed long int return_value_write_1;
  return_value_write_1=write(fd, (const void *)string, len);
  if(!((unsigned long int)return_value_write_1 == len))
  {
    jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "write() failed to write config file.");
    return (_Bool)0;
  }

  else
    return (_Bool)1;
}

// jack_controller_start_server
// file ../dbus/controller.c line 193
_Bool jack_controller_start_server(struct jack_controller *controller_ptr, void *dbus_call_context_ptr)
{
  signed int ret;
  jack_info("Starting jack server...");
  /* assertion !controller_ptr->started */
  assert(!(controller_ptr->started != (_Bool)0));
  controller_ptr->xruns = (unsigned int)0;
  struct jackctl_driver *return_value_jack_params_get_driver_1;
  return_value_jack_params_get_driver_1=jack_params_get_driver(controller_ptr->params);
  _Bool return_value_jackctl_server_open_2;
  return_value_jackctl_server_open_2=jackctl_server_open(controller_ptr->server, return_value_jack_params_get_driver_1);
  _Bool return_value_jackctl_server_start_3;
  _Bool return_value_jack_controller_patchbay_init_4;
  _Bool return_value_jackctl_server_stop_5;
  _Bool return_value_jackctl_server_close_6;
  if(return_value_jackctl_server_open_2 == (_Bool)0)
    jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "Failed to open server");

  else
  {
    jack_controller_load_slave_drivers(controller_ptr);
    return_value_jackctl_server_start_3=jackctl_server_start(controller_ptr->server);
    if(return_value_jackctl_server_start_3 == (_Bool)0)
      jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "Failed to start server");

    else
    {
      controller_ptr->client=jack_client_open("dbusapi", (enum JackOptions)JackNoStartServer, (enum JackStatus *)(void *)0);
      if(controller_ptr->client == ((struct _jack_client *)NULL))
        jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "failed to create dbusapi jack client");

      else
      {
        ret=jack_set_xrun_callback(controller_ptr->client, jack_controller_xrun, (void *)controller_ptr);
        if(!(ret == 0))
          jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "failed to set xrun callback. error is %d", ret);

        else
        {
          return_value_jack_controller_patchbay_init_4=jack_controller_patchbay_init(controller_ptr);
          if(return_value_jack_controller_patchbay_init_4 == (_Bool)0)
            jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "Failed to initialize patchbay district");

          else
          {
            ret=jack_activate(controller_ptr->client);
            if(!(ret == 0))
              jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "failed to activate dbusapi jack client. error is %d", ret);

            else
            {
              controller_ptr->started = (_Bool)1;
              return (_Bool)1;
            }

          fail_patchbay_uninit:
            ;
            jack_controller_patchbay_uninit(controller_ptr);
          }
        }

      fail_close_client:
        ;
        ret=jack_client_close(controller_ptr->client);
        if(!(ret == 0))
          jack_error("jack_client_close() failed with error %d", ret);

        controller_ptr->client = (struct _jack_client *)(void *)0;
      }

    fail_stop_server:
      ;
      return_value_jackctl_server_stop_5=jackctl_server_stop(controller_ptr->server);
      if(return_value_jackctl_server_stop_5 == (_Bool)0)
        jack_error("failed to stop jack server");

    }

  fail_close_server:
    ;
    jack_controller_unload_slave_drivers(controller_ptr);
    return_value_jackctl_server_close_6=jackctl_server_close(controller_ptr->server);
    if(return_value_jackctl_server_close_6 == (_Bool)0)
      jack_error("failed to close jack server");

  }

fail:
  ;
  return (_Bool)0;
}

// jack_controller_stop_server
// file ../dbus/controller.c line 287
_Bool jack_controller_stop_server(struct jack_controller *controller_ptr, void *dbus_call_context_ptr)
{
  signed int ret;
  pthread_mutex_lock(&controller_ptr->lock);
  signed int return_value_list_empty_1;
  return_value_list_empty_1=list_empty(&controller_ptr->session_pending_commands);
  if(return_value_list_empty_1 == 0)
  {
    pthread_mutex_unlock(&controller_ptr->lock);
    jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "Refusing to stop JACK server because of pending session commands");
    return (_Bool)0;
  }

  else
  {
    pthread_mutex_unlock(&controller_ptr->lock);
    jack_info("Stopping jack server...");
    /* assertion controller_ptr->started */
    assert(controller_ptr->started != (_Bool)0);
    ret=jack_deactivate(controller_ptr->client);
    if(!(ret == 0))
      jack_error("failed to deactivate dbusapi jack client. error is %d", ret);

    jack_controller_patchbay_uninit(controller_ptr);
    ret=jack_client_close(controller_ptr->client);
    if(!(ret == 0))
      jack_error("jack_client_close() failed with error %d", ret);

    controller_ptr->client = (struct _jack_client *)(void *)0;
    _Bool return_value_jackctl_server_stop_2;
    return_value_jackctl_server_stop_2=jackctl_server_stop(controller_ptr->server);
    if(return_value_jackctl_server_stop_2 == (_Bool)0)
    {
      jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "Failed to stop server");
      return (_Bool)0;
    }

    else
    {
      jack_controller_unload_slave_drivers(controller_ptr);
      _Bool return_value_jackctl_server_close_3;
      return_value_jackctl_server_close_3=jackctl_server_close(controller_ptr->server);
      if(return_value_jackctl_server_close_3 == (_Bool)0)
      {
        jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "Failed to close server");
        return (_Bool)0;
      }

      else
      {
        controller_ptr->started = (_Bool)0;
        return (_Bool)1;
      }
    }
  }
}

// jack_controller_switch_master
// file ../dbus/controller.c line 342
_Bool jack_controller_switch_master(struct jack_controller *controller_ptr, void *dbus_call_context_ptr)
{
  /* assertion controller_ptr->started */
  assert(controller_ptr->started != (_Bool)0);
  struct jackctl_driver *return_value_jack_params_get_driver_1;
  return_value_jack_params_get_driver_1=jack_params_get_driver(controller_ptr->params);
  _Bool return_value_jackctl_server_switch_master_2;
  return_value_jackctl_server_switch_master_2=jackctl_server_switch_master(controller_ptr->server, return_value_jack_params_get_driver_1);
  if(return_value_jackctl_server_switch_master_2 == (_Bool)0)
  {
    jack_dbus_error(dbus_call_context_ptr, "org.jackaudio.Error.Generic", "Failed to switch master");
    controller_ptr->started = (_Bool)0;
    return (_Bool)0;
  }

  else
    return (_Bool)1;
}

// jack_controller_unload_internal
// file ../dbus/controller.c line 747
_Bool jack_controller_unload_internal(struct jack_controller *controller_ptr, const char *internal_name)
{
  struct jackctl_internal *internal;
  internal=jack_controller_find_internal(controller_ptr->server, internal_name);
  if(internal == ((struct jackctl_internal *)NULL))
    return (_Bool)0;

  else
  {
    jack_info("internal \"%s\" selected", internal_name);
    _Bool return_value_jackctl_server_unload_internal_1;
    return_value_jackctl_server_unload_internal_1=jackctl_server_unload_internal(controller_ptr->server, internal);
    return return_value_jackctl_server_unload_internal_1;
  }
}

// jack_controller_unload_slave_drivers
// file ../dbus/controller.c line 113
static void jack_controller_unload_slave_drivers(struct jack_controller *controller_ptr)
{
  struct list_head *node_ptr;
  struct jack_controller_slave_driver *driver_ptr;
  node_ptr = (&controller_ptr->slave_drivers)->next;
  struct jack_controller_slave_driver *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == &controller_ptr->slave_drivers)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_controller_slave_driver *)((char *)__mptr - (signed long int)0ul);
    driver_ptr = tmp_statement_expression_1;
    if(!(driver_ptr->loaded == (_Bool)0))
    {
      jackctl_server_remove_slave(controller_ptr->server, driver_ptr->handle);
      driver_ptr->loaded = (_Bool)0;
    }

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
}

// jack_controller_xrun
// file ../dbus/controller.c line 185
static signed int jack_controller_xrun(void *arg)
{
  ((struct jack_controller *)arg)->xruns = ((struct jack_controller *)arg)->xruns + 1u;
  return 0;
}

// jack_dbus_construct_method_return_array_of_strings
// file ../dbus/jackdbus.c line 516
void jack_dbus_construct_method_return_array_of_strings(struct jack_dbus_method_call *call, unsigned int num_members, const char **array)
{
  struct DBusMessageIter iter;
  struct DBusMessageIter sub_iter;
  unsigned int i;
  call->reply=dbus_message_new_method_return(call->message);
  unsigned int return_value_dbus_message_iter_open_container_1;
  unsigned int return_value_dbus_message_iter_close_container_3;
  if(!(call->reply == ((struct DBusMessage *)NULL)))
  {
    dbus_message_iter_init_append(call->reply, &iter);
    return_value_dbus_message_iter_open_container_1=dbus_message_iter_open_container(&iter, (signed int)97, "s", &sub_iter);
    if(!(return_value_dbus_message_iter_open_container_1 == 0u))
    {
      i = (unsigned int)0;
      for( ; !(i >= num_members); i = i + 1u)
      {
        unsigned int return_value_dbus_message_iter_append_basic_2;
        return_value_dbus_message_iter_append_basic_2=dbus_message_iter_append_basic(&sub_iter, (signed int)115, (const void *)&array[(signed long int)i]);
        if(return_value_dbus_message_iter_append_basic_2 == 0u)
        {
          dbus_message_iter_close_container(&iter, &sub_iter);
          goto fail_unref;
        }

      }
      return_value_dbus_message_iter_close_container_3=dbus_message_iter_close_container(&iter, &sub_iter);
      if(!(return_value_dbus_message_iter_close_container_3 == 0u))
        goto __CPROVER_DUMP_L6;

    }


  fail_unref:
    ;
    dbus_message_unref(call->reply);
    call->reply = (struct DBusMessage *)(void *)0;
  }


fail:
  ;
  jack_error("Ran out of memory trying to construct method return");

__CPROVER_DUMP_L6:
  ;
}

// jack_dbus_construct_method_return_empty
// file ../dbus/jackdbus.c line 447
void jack_dbus_construct_method_return_empty(struct jack_dbus_method_call *call)
{
  call->reply=dbus_message_new_method_return(call->message);
  if(call->reply == ((struct DBusMessage *)NULL))
    jack_error("Ran out of memory trying to construct method return");

}

// jack_dbus_construct_method_return_parameter
// file ../dbus/controller_iface_configure.c line 133
static void jack_dbus_construct_method_return_parameter(struct jack_dbus_method_call *call, unsigned int is_set, signed int type, const char *signature, union anonymous_5 default_value, union anonymous_5 value)
{
  struct DBusMessageIter iter;
  call->reply=dbus_message_new_method_return(call->message);
  unsigned int return_value_dbus_message_iter_append_basic_1;
  _Bool return_value_jack_dbus_message_append_variant_2;
  _Bool return_value_jack_dbus_message_append_variant_3;
  if(!(call->reply == ((struct DBusMessage *)NULL)))
  {
    dbus_message_iter_init_append(call->reply, &iter);
    return_value_dbus_message_iter_append_basic_1=dbus_message_iter_append_basic(&iter, (signed int)98, (const void *)&is_set);
    if(!(return_value_dbus_message_iter_append_basic_1 == 0u))
    {
      return_value_jack_dbus_message_append_variant_2=jack_dbus_message_append_variant(&iter, type, signature, &default_value);
      if(!(return_value_jack_dbus_message_append_variant_2 == (_Bool)0))
      {
        return_value_jack_dbus_message_append_variant_3=jack_dbus_message_append_variant(&iter, type, signature, &value);
        if(!(return_value_jack_dbus_message_append_variant_3 == (_Bool)0))
          goto __CPROVER_DUMP_L3;

      }

    }


  fail_unref:
    ;
    dbus_message_unref(call->reply);
    call->reply = (struct DBusMessage *)(void *)0;
  }


fail:
  ;
  jack_error("Ran out of memory trying to construct method return");

__CPROVER_DUMP_L3:
  ;
}

// jack_dbus_construct_method_return_single
// file ../dbus/jackdbus.c line 468
void jack_dbus_construct_method_return_single(struct jack_dbus_method_call *call, signed int type, union anonymous_5 arg)
{
  struct DBusMessageIter iter;
  call->reply=dbus_message_new_method_return(call->message);
  unsigned int return_value_dbus_message_iter_append_basic_1;
  if(!(call->reply == ((struct DBusMessage *)NULL)))
  {
    if(type == 0)
      goto __CPROVER_DUMP_L5;

    else
      if(arg.string == ((const char *)NULL) && type == 115)
        arg.string = "";

    dbus_message_iter_init_append(call->reply, &iter);
    return_value_dbus_message_iter_append_basic_1=dbus_message_iter_append_basic(&iter, type, (const void *)&arg);
    if(return_value_dbus_message_iter_append_basic_1 == 0u)
    {
      dbus_message_unref(call->reply);
      call->reply = (struct DBusMessage *)(void *)0;
      goto fail_no_mem;
    }

  }

  else
  {

  fail_no_mem:
    ;
    jack_error("Ran out of memory trying to construct method return");
  }

__CPROVER_DUMP_L5:
  ;
}

// jack_dbus_error
// file ../dbus/jackdbus.c line 791
void jack_dbus_error(void *dbus_call_context_ptr, const char *error_name, const char *format, ...)
{
  void **ap;
  char buffer[300l];
  ap = (void **)&format;
  vsnprintf(buffer, sizeof(char [300l]) /*300ul*/ , format, ap);
  jack_error_callback(buffer);
  if(!(dbus_call_context_ptr == NULL))
  {
    if(!(((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply == ((struct DBusMessage *)NULL)))
    {
      dbus_message_unref(((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply);
      ((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply = (struct DBusMessage *)(void *)0;
    }

    ((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply=dbus_message_new_error(((struct jack_dbus_method_call *)dbus_call_context_ptr)->message, error_name, buffer);
  }

  ap = ((void **)NULL);
}

// jack_dbus_error_callback
// file ../dbus/jackdbus.c line 627
void jack_dbus_error_callback(const char *msg)
{
  signed long int timestamp;
  char timestamp_str[26l];
  time(&timestamp);
  ctime_r(&timestamp, timestamp_str);
  timestamp_str[(signed long int)24] = (char)0;
  _Bool return_value_jack_dbus_log_open_1;
  return_value_jack_dbus_log_open_1=jack_dbus_log_open();
  if(!(return_value_jack_dbus_log_open_1 == (_Bool)0))
  {
    fprintf(g_logfile, "%s: \033[1m\033[31mERROR: %s\033[0m\n", (const void *)timestamp_str, msg);
    fflush(g_logfile);
  }

}

// jack_dbus_get_method_args
// file ../dbus/jackdbus.c line 284
_Bool jack_dbus_get_method_args(struct jack_dbus_method_call *call, signed int type, ...)
{
  void **args;
  struct DBusError error;
  _Bool retval = (_Bool)1;
  args = (void **)&type;
  dbus_error_init(&error);
  unsigned int return_value_dbus_message_get_args_valist_1;
  return_value_dbus_message_get_args_valist_1=dbus_message_get_args_valist(call->message, &error, type, args);
  if(return_value_dbus_message_get_args_valist_1 == 0u)
  {
    jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method \"%s\"", call->method_name);
    retval = (_Bool)0;
  }

  dbus_error_free(&error);
  args = ((void **)NULL);
  return retval;
}

// jack_dbus_get_method_args_string_and_variant
// file ../dbus/jackdbus.c line 316
_Bool jack_dbus_get_method_args_string_and_variant(struct jack_dbus_method_call *call, const char **arg1, union anonymous_5 *arg2, signed int *type_ptr)
{
  struct DBusMessageIter iter;
  struct DBusMessageIter sub_iter;
  unsigned int return_value_dbus_message_iter_init_3;
  return_value_dbus_message_iter_init_3=dbus_message_iter_init(call->message, &iter);
  signed int return_value_dbus_message_iter_get_arg_type_2;
  if(!(return_value_dbus_message_iter_init_3 == 0u))
  {
    return_value_dbus_message_iter_get_arg_type_2=dbus_message_iter_get_arg_type(&iter);
    if(return_value_dbus_message_iter_get_arg_type_2 == 115)
    {
      dbus_message_iter_get_basic(&iter, (void *)arg1);
      dbus_message_iter_next(&iter);
      signed int return_value_dbus_message_iter_get_arg_type_1;
      return_value_dbus_message_iter_get_arg_type_1=dbus_message_iter_get_arg_type(&iter);
      if(return_value_dbus_message_iter_get_arg_type_1 == 118)
      {
        dbus_message_iter_recurse(&iter, &sub_iter);
        dbus_message_iter_get_basic(&sub_iter, (void *)arg2);
        *type_ptr=dbus_message_iter_get_arg_type(&sub_iter);
        return (_Bool)1;
      }

    }

  }

  jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method \"%s\"", call->method_name);
  return (_Bool)0;
}

// jack_dbus_get_method_args_two_strings_and_variant
// file ../dbus/jackdbus.c line 356
_Bool jack_dbus_get_method_args_two_strings_and_variant(struct jack_dbus_method_call *call, const char **arg1, const char **arg2, union anonymous_5 *arg3, signed int *type_ptr)
{
  struct DBusMessageIter iter;
  struct DBusMessageIter sub_iter;
  unsigned int return_value_dbus_message_iter_init_4;
  return_value_dbus_message_iter_init_4=dbus_message_iter_init(call->message, &iter);
  signed int return_value_dbus_message_iter_get_arg_type_3;
  if(!(return_value_dbus_message_iter_init_4 == 0u))
  {
    return_value_dbus_message_iter_get_arg_type_3=dbus_message_iter_get_arg_type(&iter);
    if(return_value_dbus_message_iter_get_arg_type_3 == 115)
    {
      dbus_message_iter_get_basic(&iter, (void *)arg1);
      dbus_message_iter_next(&iter);
      signed int return_value_dbus_message_iter_get_arg_type_1;
      return_value_dbus_message_iter_get_arg_type_1=dbus_message_iter_get_arg_type(&iter);
      if(!(return_value_dbus_message_iter_get_arg_type_1 == 115))
        return (_Bool)0;

      dbus_message_iter_get_basic(&iter, (void *)arg2);
      dbus_message_iter_next(&iter);
      signed int return_value_dbus_message_iter_get_arg_type_2;
      return_value_dbus_message_iter_get_arg_type_2=dbus_message_iter_get_arg_type(&iter);
      if(return_value_dbus_message_iter_get_arg_type_2 == 118)
      {
        dbus_message_iter_recurse(&iter, &sub_iter);
        dbus_message_iter_get_basic(&sub_iter, (void *)arg3);
        *type_ptr=dbus_message_iter_get_arg_type(&sub_iter);
        return (_Bool)1;
      }

    }

  }

  jack_dbus_error((void *)call, "org.jackaudio.Error.InvalidArgs", "Invalid arguments to method \"%s\"", call->method_name);
  return (_Bool)0;
}

// jack_dbus_info_callback
// file ../dbus/jackdbus.c line 605
void jack_dbus_info_callback(const char *msg)
{
  signed long int timestamp;
  char timestamp_str[26l];
  time(&timestamp);
  ctime_r(&timestamp, timestamp_str);
  timestamp_str[(signed long int)24] = (char)0;
  _Bool return_value_jack_dbus_log_open_1;
  return_value_jack_dbus_log_open_1=jack_dbus_log_open();
  if(!(return_value_jack_dbus_log_open_1 == (_Bool)0))
  {
    fprintf(g_logfile, "%s: %s\n", (const void *)timestamp_str, msg);
    fflush(g_logfile);
  }

}

// jack_dbus_log_open
// file ../dbus/jackdbus.c line 561
static _Bool jack_dbus_log_open(void)
{
  struct stat st;
  signed int ret;
  signed int retry;
  if(!(g_logfile == ((struct _IO_FILE *)NULL)))
  {
    ret=stat(g_log_filename, &st);
    if(!(ret == 0) || !(g_log_file_ino == st.st_ino))
    {
      fclose(g_logfile);
      goto __CPROVER_DUMP_L2;
    }

    return (_Bool)1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    retry = 0;
    for( ; !(retry >= 10); retry = retry + 1)
    {
      g_logfile=fopen(g_log_filename, "a");
      if(g_logfile == ((struct _IO_FILE *)NULL))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        fprintf(stderr, "Cannot open jackdbus log file \"%s\": %d (%s)\n", g_log_filename, *return_value___errno_location_1, return_value_strerror_3);
        return (_Bool)0;
      }

      ret=stat(g_log_filename, &st);
      if(ret == 0)
      {
        g_log_file_ino = st.st_ino;
        return (_Bool)1;
      }

      fclose(g_logfile);
      g_logfile = (struct _IO_FILE *)(void *)0;
    }
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    char *return_value_strerror_6;
    return_value_strerror_6=strerror(*return_value___errno_location_5);
    fprintf(stderr, "Cannot stat just opened jackdbus log file \"%s\": %d (%s). %d retries\n", g_log_filename, *return_value___errno_location_4, return_value_strerror_6, retry);
    return (_Bool)0;
  }
}

// jack_dbus_message_append_variant
// file ../dbus/jackdbus.c line 406
_Bool jack_dbus_message_append_variant(struct DBusMessageIter *iter, signed int type, const char *signature, union anonymous_5 *arg)
{
  struct DBusMessageIter sub_iter;
  unsigned int return_value_dbus_message_iter_open_container_1;
  return_value_dbus_message_iter_open_container_1=dbus_message_iter_open_container(iter, (signed int)118, signature, &sub_iter);
  unsigned int return_value_dbus_message_iter_append_basic_2;
  unsigned int return_value_dbus_message_iter_close_container_3;
  if(!(return_value_dbus_message_iter_open_container_1 == 0u))
  {
    return_value_dbus_message_iter_append_basic_2=dbus_message_iter_append_basic(&sub_iter, type, (const void *)arg);
    if(return_value_dbus_message_iter_append_basic_2 == 0u)
    {
      dbus_message_iter_close_container(iter, &sub_iter);
      goto fail;
    }

    return_value_dbus_message_iter_close_container_3=dbus_message_iter_close_container(iter, &sub_iter);
    if(return_value_dbus_message_iter_close_container_3 == 0u)
      goto fail;

    return (_Bool)1;
  }

  else
  {

  fail:
    ;
    return (_Bool)0;
  }
}

// jack_dbus_message_handler
// file ../dbus/jackdbus.c line 148
enum anonymous_8 jack_dbus_message_handler(struct DBusConnection *connection, struct DBusMessage *message, void *data)
{
  struct jack_dbus_method_call call;
  const char *interface_name;
  struct jack_dbus_interface_descriptor **interface_ptr_ptr;
  signed int return_value_dbus_message_get_type_1;
  return_value_dbus_message_get_type_1=dbus_message_get_type(message);
  const char *return_value_dbus_message_get_signature_3;
  if(return_value_dbus_message_get_type_1 == 1)
  {
    call.method_name=dbus_message_get_member(message);
    if(call.method_name == ((const char *)NULL))
      jack_dbus_error((void *)&call, "org.jackaudio.Error.UnknownMethod", "Received method call with empty method name");

    else
    {
      call.context = ((struct jack_dbus_object_descriptor *)data)->context;
      call.connection = connection;
      call.message = message;
      call.reply = (struct DBusMessage *)(void *)0;
      interface_name=dbus_message_get_interface(message);
      if(!(interface_name == ((const char *)NULL)))
      {
        interface_ptr_ptr = ((struct jack_dbus_object_descriptor *)data)->interfaces;
        while(!(*interface_ptr_ptr == ((struct jack_dbus_interface_descriptor *)NULL)))
        {
          signed int return_value_strcmp_2;
          return_value_strcmp_2=strcmp(interface_name, (*interface_ptr_ptr)->name);
          if(return_value_strcmp_2 == 0)
          {
            _Bool return_value;
            return_value=(*interface_ptr_ptr)->handler(&call, (*interface_ptr_ptr)->methods);
            if(return_value == (_Bool)0)
              break;

          }

          interface_ptr_ptr = interface_ptr_ptr + 1l;
        }
      }

      else
      {
        interface_ptr_ptr = ((struct jack_dbus_object_descriptor *)data)->interfaces;
        if(!(*interface_ptr_ptr == ((struct jack_dbus_interface_descriptor *)NULL)))
        {
          _Bool return_value_1;
          return_value_1=(*interface_ptr_ptr)->handler(&call, (*interface_ptr_ptr)->methods);
          interface_ptr_ptr = interface_ptr_ptr + 1l;
        }

      }
      return_value_dbus_message_get_signature_3=dbus_message_get_signature(message);
      jack_dbus_error((void *)&call, "org.jackaudio.Error.UnknownMethod", "Method \"%s\" with signature \"%s\" on interface \"%s\" doesn't exist", call.method_name, return_value_dbus_message_get_signature_3, interface_name);
    }

  send_return:
    ;
    jack_dbus_send_method_return(&call);
  }


handled:
  ;
  return (enum anonymous_8)DBUS_HANDLER_RESULT_HANDLED;
}

// jack_dbus_message_handler_unregister
// file ../dbus/jackdbus.c line 242
void jack_dbus_message_handler_unregister(struct DBusConnection *connection, void *data)
{
  jack_info("Message handler was unregistered");
}

// jack_dbus_only_error
// file ../dbus/jackdbus.c line 823
void jack_dbus_only_error(void *dbus_call_context_ptr, const char *error_name, const char *format, ...)
{
  void **ap;
  char buffer[300l];
  ap = (void **)&format;
  vsnprintf(buffer, sizeof(char [300l]) /*300ul*/ , format, ap);
  if(!(((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply == ((struct DBusMessage *)NULL)))
  {
    dbus_message_unref(((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply);
    ((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply = (struct DBusMessage *)(void *)0;
  }

  ((struct jack_dbus_method_call *)dbus_call_context_ptr)->reply=dbus_message_new_error(((struct jack_dbus_method_call *)dbus_call_context_ptr)->message, error_name, buffer);
  ap = ((void **)NULL);
}

// jack_dbus_run_method
// file ../dbus/jackdbus.c line 256
_Bool jack_dbus_run_method(struct jack_dbus_method_call *call, struct jack_dbus_interface_method_descriptor *methods)
{
  struct jack_dbus_interface_method_descriptor *method_ptr = methods;
  while(!(method_ptr->name == ((const char *)NULL)))
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(call->method_name, method_ptr->name);
    if(return_value_strcmp_1 == 0)
    {
      method_ptr->handler(call);
      return (_Bool)1;
    }

    method_ptr = method_ptr + 1l;
  }
  return (_Bool)0;
}

// jack_dbus_send_method_return
// file ../dbus/jackdbus.c line 105
static void jack_dbus_send_method_return(struct jack_dbus_method_call *call)
{
  if(!(call->message == ((struct DBusMessage *)NULL)))
  {
    if(!(call->reply == ((struct DBusMessage *)NULL)))
    {

    retry_send:
      ;
      unsigned int return_value_dbus_connection_send_1;
      return_value_dbus_connection_send_1=dbus_connection_send(call->connection, call->reply, (unsigned int *)(void *)0);
      if(return_value_dbus_connection_send_1 == 0u)
        jack_error("Ran out of memory trying to queue method return");

      dbus_connection_flush(call->connection);
      dbus_message_unref(call->reply);
      call->reply = (struct DBusMessage *)(void *)0;
    }

    else
    {
      jack_error("send_method_return() called with a NULL message, trying to construct a void return...");
      call->reply=dbus_message_new_method_return(call->message);
      if(!(call->reply == ((struct DBusMessage *)NULL)))
        goto retry_send;

      else
        jack_error("Failed to construct method return!");
    }
  }

}

// jack_dbus_send_signal
// file ../dbus/jackdbus.c line 58
void jack_dbus_send_signal(const char *sender_object_path, const char *iface, const char *signal_name, signed int first_arg_type, ...)
{
  struct DBusMessage *message_ptr;
  void **ap = (void **)&first_arg_type;
  message_ptr=dbus_message_new_signal(sender_object_path, iface, signal_name);
  unsigned int return_value_dbus_message_append_args_valist_1;
  unsigned int return_value_dbus_connection_send_2;
  if(message_ptr == ((struct DBusMessage *)NULL))
    jack_error("dbus_message_new_signal() failed.");

  else
  {
    return_value_dbus_message_append_args_valist_1=dbus_message_append_args_valist(message_ptr, first_arg_type, ap);
    if(return_value_dbus_message_append_args_valist_1 == 0u)
      jack_error("dbus_message_append_args_valist() failed.");

    else
    {
      return_value_dbus_connection_send_2=dbus_connection_send(g_connection, message_ptr, (unsigned int *)(void *)0);
      if(return_value_dbus_connection_send_2 == 0u)
        jack_error("dbus_connection_send() failed.");

    }

  unref:
    ;
    dbus_message_unref(message_ptr);
  }

exit:
  ;
  ap = ((void **)NULL);
}

// jack_params_add_parameter
// file ../dbus/params.h line 109
void jack_params_add_parameter(struct _jack_params *params, const char * const *address, _Bool end, struct jack_parameter *param_ptr)
{
  struct jack_parameter_container *container_ptr;
  container_ptr=find_container(&((struct jack_params *)params)->root, address, 3);
  _Bool tmp_if_expr_1;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(container_ptr->leaf != (_Bool)0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    /* assertion 0 */
    assert(0 != 0);

  else
  {
    param_ptr->ext = (_Bool)1;
    if(!(end == (_Bool)0))
      list_add_tail_link1(&param_ptr->siblings, &container_ptr->children);

    else
      list_add(&param_ptr->siblings, &container_ptr->children);
    goto __CPROVER_DUMP_L6;
  }

__CPROVER_DUMP_L6:
  ;
}

// jack_params_check_address
// file ../dbus/params.c line 566
_Bool jack_params_check_address(struct _jack_params *params, const char * const *address, _Bool want_leaf)
{
  struct jack_parameter_container *container_ptr;
  container_ptr=find_container(&((struct jack_params *)params)->root, address, 3);
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    return (_Bool)0;

  else
    if(!(want_leaf == (_Bool)0))
    {
      if(container_ptr->leaf != (_Bool)0)
        goto __CPROVER_DUMP_L2;

      return (_Bool)0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      return (_Bool)1;
    }
}

// jack_params_create
// file ../dbus/params.h line 84
struct _jack_params * jack_params_create(struct jackctl_server *server)
{
  struct jack_params *params_ptr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct jack_params) /*104ul*/ );
  params_ptr = (struct jack_params *)return_value_malloc_1;
  _Bool tmp_if_expr_4;
  _Bool return_value_init_drivers_3;
  _Bool tmp_if_expr_6;
  _Bool return_value_init_driver_5;
  _Bool tmp_if_expr_8;
  _Bool return_value_init_engine_driver_parameter_7;
  _Bool tmp_if_expr_10;
  _Bool return_value_jack_params_set_driver_9;
  _Bool tmp_if_expr_12;
  _Bool return_value_init_internals_11;
  if(params_ptr == ((struct jack_params *)NULL))
  {
    jack_error("Ran out of memory trying to allocate struct jack_params");
    return (struct _jack_params *)(void *)0;
  }

  else
  {
    params_ptr->server = server;
    INIT_LIST_HEAD_link1(&params_ptr->root.children);
    params_ptr->root.leaf = (_Bool)0;
    params_ptr->root.name = (char *)(void *)0;
    _Bool return_value_init_engine_2;
    return_value_init_engine_2=init_engine(params_ptr);
    if(return_value_init_engine_2 == (_Bool)0)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_init_drivers_3=init_drivers(params_ptr);
      tmp_if_expr_4 = !(return_value_init_drivers_3 != (_Bool)0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_init_driver_5=init_driver(params_ptr);
      tmp_if_expr_6 = !(return_value_init_driver_5 != (_Bool)0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_init_engine_driver_parameter_7=init_engine_driver_parameter(params_ptr);
      tmp_if_expr_8 = !(return_value_init_engine_driver_parameter_7 != (_Bool)0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value_jack_params_set_driver_9=jack_params_set_driver((struct _jack_params *)params_ptr, "dummy");
      tmp_if_expr_10 = !(return_value_jack_params_set_driver_9 != (_Bool)0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_init_internals_11=init_internals(params_ptr);
      tmp_if_expr_12 = !(return_value_init_internals_11 != (_Bool)0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
    {
      jack_params_destroy((struct _jack_params *)params_ptr);
      return (struct _jack_params *)(void *)0;
    }

    else
    {
      params_ptr->driver_set = (_Bool)0;
      signed int return_value_strcmp_13;
      return_value_strcmp_13=strcmp(params_ptr->driver_ptr->symlink->name, "dummy");
      /* assertion strcmp(params_ptr->driver_ptr->symlink->name, "dummy") == 0 */
      assert(return_value_strcmp_13 == 0);
      return (struct _jack_params *)params_ptr;
    }
  }
}

// jack_params_destroy
// file ../dbus/params.h line 85
void jack_params_destroy(struct _jack_params *params)
{
  free_containers(&((struct jack_params *)params)->root.children);
  free((void *)params);
}

// jack_params_get_driver
// file ../dbus/params.h line 88
struct jackctl_driver * jack_params_get_driver(struct _jack_params *params)
{
  return (struct jackctl_driver *)((struct jack_params *)params)->driver_ptr->symlink->obj;
}

// jack_params_get_parameter
// file ../dbus/params.c line 666
struct jack_parameter * jack_params_get_parameter(struct _jack_params *params, const char * const *address)
{
  signed int depth;
  struct jack_parameter_container *container_ptr;
  struct list_head *node_ptr;
  struct jack_parameter *param_ptr;
  depth = 0;
  for( ; !(depth >= 3); depth = depth + 1)
    if(address[(signed long int)depth] == ((const char *)NULL))
      break;

  depth = depth - 1;
  container_ptr=find_container(&((struct jack_params *)params)->root, address, depth);
  _Bool tmp_if_expr_1;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(container_ptr->leaf != (_Bool)0) ? (_Bool)1 : (_Bool)0;
  struct jack_parameter *tmp_statement_expression_2;
  if(tmp_if_expr_1)
    return (struct jack_parameter *)(void *)0;

  else
  {
    node_ptr = (&container_ptr->children)->next;
    do
    {
      node_ptr->next = node_ptr->next;
      if(node_ptr == &container_ptr->children)
        break;

      const struct list_head *__mptr = node_ptr;
      tmp_statement_expression_2 = (struct jack_parameter *)((char *)__mptr - (signed long int)48ul);
      param_ptr = tmp_statement_expression_2;
      signed int return_value_strcmp_3;
      return_value_strcmp_3=strcmp(param_ptr->name, address[(signed long int)depth]);
      if(return_value_strcmp_3 == 0)
        return param_ptr;

      node_ptr = node_ptr->next;
    }
    while((_Bool)1);
    return (struct jack_parameter *)(void *)0;
  }
}

// jack_params_is_leaf_container
// file ../dbus/params.c line 584
_Bool jack_params_is_leaf_container(struct _jack_params *params, const char * const *address)
{
  struct jack_parameter_container *container_ptr;
  container_ptr=find_container(&((struct jack_params *)params)->root, address, 3);
  if(container_ptr == ((struct jack_parameter_container *)NULL))
  {
    /* assertion 0 */
    assert(0 != 0);
    return (_Bool)0;
  }

  else
    return container_ptr->leaf;
}

// jack_params_iterate_container
// file ../dbus/params.c line 599
_Bool jack_params_iterate_container(struct _jack_params *params, const char * const *address, _Bool (*callback)(void *, const char *), void *context)
{
  struct jack_parameter_container *container_ptr;
  struct list_head *node_ptr;
  const char *name;
  container_ptr=find_container(&((struct jack_params *)params)->root, address, 3);
  struct jack_parameter *tmp_statement_expression_1;
  struct jack_parameter_container *tmp_statement_expression_2;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
  {
    /* assertion 0 */
    assert(0 != 0);
    return (_Bool)1;
  }

  else
  {
    node_ptr = (&container_ptr->children)->next;
    node_ptr->next = node_ptr->next;
    if(!(node_ptr == &container_ptr->children))
    {
      if(!(container_ptr->leaf == (_Bool)0))
      {
        const struct list_head *__mptr = node_ptr;
        tmp_statement_expression_1 = (struct jack_parameter *)((char *)__mptr - (signed long int)48ul);
        name = tmp_statement_expression_1->name;
      }

      else
      {
        const struct list_head *jack_params_iterate_container__1__2__1__2__1____mptr = node_ptr;
        tmp_statement_expression_2 = (struct jack_parameter_container *)((char *)jack_params_iterate_container__1__2__1__2__1____mptr - (signed long int)0ul);
        name = tmp_statement_expression_2->name;
      }
      _Bool return_value;
      return_value=callback(context, name);
      if(return_value == (_Bool)0)
        return (_Bool)0;

      node_ptr = node_ptr->next;
    }

    return (_Bool)1;
  }
}

// jack_params_iterate_params
// file ../dbus/params.c line 637
_Bool jack_params_iterate_params(struct _jack_params *params, const char * const *address, _Bool (*callback)(void *, struct jack_parameter *), void *context)
{
  struct jack_parameter_container *container_ptr;
  struct list_head *node_ptr;
  struct jack_parameter *param_ptr;
  container_ptr=find_container(&((struct jack_params *)params)->root, address, 3);
  _Bool tmp_if_expr_1;
  if(container_ptr == ((struct jack_parameter_container *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(container_ptr->leaf != (_Bool)0) ? (_Bool)1 : (_Bool)0;
  struct jack_parameter *tmp_statement_expression_2;
  if(tmp_if_expr_1)
  {
    /* assertion 0 */
    assert(0 != 0);
    return (_Bool)1;
  }

  else
  {
    node_ptr = (&container_ptr->children)->next;
    node_ptr->next = node_ptr->next;
    if(!(node_ptr == &container_ptr->children))
    {
      const struct list_head *__mptr = node_ptr;
      tmp_statement_expression_2 = (struct jack_parameter *)((char *)__mptr - (signed long int)48ul);
      param_ptr = tmp_statement_expression_2;
      _Bool return_value;
      return_value=callback(context, param_ptr);
      if(return_value == (_Bool)0)
        return (_Bool)0;

      node_ptr = node_ptr->next;
    }

    return (_Bool)1;
  }
}

// jack_params_set_driver
// file ../dbus/params.h line 87
_Bool jack_params_set_driver(struct _jack_params *params, const char *name)
{
  struct list_head *node_ptr;
  struct jack_parameter_container *container_ptr;
  node_ptr = ((struct jack_params *)params)->drivers_ptr->next;
  struct jack_parameter_container *tmp_statement_expression_1;
  do
  {
    node_ptr->next = node_ptr->next;
    if(node_ptr == ((struct jack_params *)params)->drivers_ptr)
      break;

    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression_1 = (struct jack_parameter_container *)((char *)__mptr - (signed long int)0ul);
    container_ptr = tmp_statement_expression_1;
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(container_ptr->name, name);
    if(return_value_strcmp_2 == 0)
    {
      ((struct jack_params *)params)->driver_ptr->symlink = container_ptr;
      ((struct jack_params *)params)->driver_set = (_Bool)1;
      return (_Bool)1;
    }

    node_ptr = node_ptr->next;
  }
  while((_Bool)1);
  return (_Bool)0;
}

// jack_ringbuffer_create
// file ../common/ringbuffer.c line 68
struct anonymous_0 * jack_ringbuffer_create(unsigned long int sz)
{
  signed int power_of_two;
  struct anonymous_0 *rb;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_0) /*48ul*/ );
  rb = (struct anonymous_0 *)return_value_malloc_1;
  if(rb == ((struct anonymous_0 *)NULL))
    return (struct anonymous_0 *)(void *)0;

  else
  {
    power_of_two = 1;
    for( ; !((unsigned long int)(1 << power_of_two) >= sz); power_of_two = power_of_two + 1)
      ;
    rb->size = (unsigned long int)(1 << power_of_two);
    rb->size_mask = rb->size;
    rb->size_mask = rb->size_mask - (unsigned long int)1;
    rb->write_ptr = (volatile unsigned long int)0;
    rb->read_ptr = (volatile unsigned long int)0;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(rb->size);
    rb->buf = (char *)return_value_malloc_2;
    if(rb->buf == ((char *)NULL))
    {
      free((void *)rb);
      return (struct anonymous_0 *)(void *)0;
    }

    else
    {
      rb->mlocked = 0;
      return rb;
    }
  }
}

// jack_ringbuffer_free
// file ../common/ringbuffer.c line 96
void jack_ringbuffer_free(struct anonymous_0 *rb)
{
  free((void *)rb->buf);
  free((void *)rb);
}

// jack_ringbuffer_get_read_vector
// file ../common/ringbuffer.c line 326
void jack_ringbuffer_get_read_vector(const struct anonymous_0 *rb, struct anonymous *vec)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    free_cnt = w - r;

  else
    free_cnt = (w - r) + rb->size & rb->size_mask;
  cnt2 = r + free_cnt;
  if(!(rb->size >= cnt2))
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)r];
    (vec + (signed long int)0)->len = rb->size - r;
    (vec + (signed long int)1)->buf = rb->buf;
    (vec + (signed long int)1)->len = cnt2 & rb->size_mask;
  }

  else
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)r];
    (vec + (signed long int)0)->len = free_cnt;
    (vec + (signed long int)1)->len = (unsigned long int)0;
  }
}

// jack_ringbuffer_get_write_vector
// file ../common/ringbuffer.c line 370
void jack_ringbuffer_get_write_vector(const struct anonymous_0 *rb, struct anonymous *vec)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    free_cnt = ((r - w) + rb->size & rb->size_mask) - (unsigned long int)1;

  else
    if(!(w >= r))
      free_cnt = (r - w) - (unsigned long int)1;

    else
      free_cnt = rb->size - (unsigned long int)1;
  cnt2 = w + free_cnt;
  if(!(rb->size >= cnt2))
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)w];
    (vec + (signed long int)0)->len = rb->size - w;
    (vec + (signed long int)1)->buf = rb->buf;
    (vec + (signed long int)1)->len = cnt2 & rb->size_mask;
  }

  else
  {
    (vec + (signed long int)0)->buf = &rb->buf[(signed long int)w];
    (vec + (signed long int)0)->len = free_cnt;
    (vec + (signed long int)1)->len = (unsigned long int)0;
  }
}

// jack_ringbuffer_mlock
// file ../common/ringbuffer.c line 110
signed int jack_ringbuffer_mlock(struct anonymous_0 *rb)
{
  rb->mlocked = 1;
  return 0;
}

// jack_ringbuffer_peek
// file ../common/ringbuffer.c line 228
unsigned long int jack_ringbuffer_peek(struct anonymous_0 *rb, char *dest, unsigned long int cnt)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int to_read;
  unsigned long int n1;
  unsigned long int n2;
  unsigned long int tmp_read_ptr = rb->read_ptr;
  free_cnt=jack_ringbuffer_read_space(rb);
  if(free_cnt == 0ul)
    return (unsigned long int)0;

  else
  {
    to_read = cnt > free_cnt ? free_cnt : cnt;
    cnt2 = tmp_read_ptr + to_read;
    if(!(rb->size >= cnt2))
    {
      n1 = rb->size - tmp_read_ptr;
      n2 = cnt2 & rb->size_mask;
    }

    else
    {
      n1 = to_read;
      n2 = (unsigned long int)0;
    }
    memcpy((void *)dest, (const void *)&rb->buf[(signed long int)tmp_read_ptr], n1);
    tmp_read_ptr = tmp_read_ptr + n1 & rb->size_mask;
    if(!(n2 == 0ul))
      memcpy((void *)(dest + (signed long int)n1), (const void *)&rb->buf[(signed long int)tmp_read_ptr], n2);

    return to_read;
  }
}

// jack_ringbuffer_read
// file ../common/ringbuffer.c line 189
unsigned long int jack_ringbuffer_read(struct anonymous_0 *rb, char *dest, unsigned long int cnt)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int to_read;
  unsigned long int n1;
  unsigned long int n2;
  free_cnt=jack_ringbuffer_read_space(rb);
  if(free_cnt == 0ul)
    return (unsigned long int)0;

  else
  {
    to_read = cnt > free_cnt ? free_cnt : cnt;
    cnt2 = rb->read_ptr + to_read;
    if(!(rb->size >= cnt2))
    {
      n1 = rb->size - rb->read_ptr;
      n2 = cnt2 & rb->size_mask;
    }

    else
    {
      n1 = to_read;
      n2 = (unsigned long int)0;
    }
    memcpy((void *)dest, (const void *)&rb->buf[(signed long int)rb->read_ptr], n1);
    rb->read_ptr = rb->read_ptr + n1 & rb->size_mask;
    if(!(n2 == 0ul))
    {
      memcpy((void *)(dest + (signed long int)n1), (const void *)&rb->buf[(signed long int)rb->read_ptr], n2);
      rb->read_ptr = rb->read_ptr + n2 & rb->size_mask;
    }

    return to_read;
  }
}

// jack_ringbuffer_read_advance
// file ../common/ringbuffer.c line 305
void jack_ringbuffer_read_advance(struct anonymous_0 *rb, unsigned long int cnt)
{
  unsigned long int tmp = rb->read_ptr + cnt & rb->size_mask;
  rb->read_ptr = tmp;
}

// jack_ringbuffer_read_space
// file ../common/ringbuffer.c line 150
unsigned long int jack_ringbuffer_read_space(const struct anonymous_0 *rb)
{
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    return w - r;

  else
    return (w - r) + rb->size & rb->size_mask;
}

// jack_ringbuffer_reset
// file ../common/ringbuffer.c line 125
void jack_ringbuffer_reset(struct anonymous_0 *rb)
{
  rb->read_ptr = (volatile unsigned long int)0;
  rb->write_ptr = (volatile unsigned long int)0;
  memset((void *)rb->buf, 0, rb->size);
}

// jack_ringbuffer_reset_size
// file ../common/ringbuffer.c line 136
void jack_ringbuffer_reset_size(struct anonymous_0 *rb, unsigned long int sz)
{
  rb->size = sz;
  rb->size_mask = rb->size;
  rb->size_mask = rb->size_mask - (unsigned long int)1;
  rb->read_ptr = (volatile unsigned long int)0;
  rb->write_ptr = (volatile unsigned long int)0;
}

// jack_ringbuffer_write
// file ../common/ringbuffer.c line 268
unsigned long int jack_ringbuffer_write(struct anonymous_0 *rb, const char *src, unsigned long int cnt)
{
  unsigned long int free_cnt;
  unsigned long int cnt2;
  unsigned long int to_write;
  unsigned long int n1;
  unsigned long int n2;
  free_cnt=jack_ringbuffer_write_space(rb);
  if(free_cnt == 0ul)
    return (unsigned long int)0;

  else
  {
    to_write = cnt > free_cnt ? free_cnt : cnt;
    cnt2 = rb->write_ptr + to_write;
    if(!(rb->size >= cnt2))
    {
      n1 = rb->size - rb->write_ptr;
      n2 = cnt2 & rb->size_mask;
    }

    else
    {
      n1 = to_write;
      n2 = (unsigned long int)0;
    }
    memcpy((void *)&rb->buf[(signed long int)rb->write_ptr], (const void *)src, n1);
    rb->write_ptr = rb->write_ptr + n1 & rb->size_mask;
    if(!(n2 == 0ul))
    {
      memcpy((void *)&rb->buf[(signed long int)rb->write_ptr], (const void *)(src + (signed long int)n1), n2);
      rb->write_ptr = rb->write_ptr + n2 & rb->size_mask;
    }

    return to_write;
  }
}

// jack_ringbuffer_write_advance
// file ../common/ringbuffer.c line 314
void jack_ringbuffer_write_advance(struct anonymous_0 *rb, unsigned long int cnt)
{
  unsigned long int tmp = rb->write_ptr + cnt & rb->size_mask;
  rb->write_ptr = tmp;
}

// jack_ringbuffer_write_space
// file ../common/ringbuffer.c line 169
unsigned long int jack_ringbuffer_write_space(const struct anonymous_0 *rb)
{
  unsigned long int w;
  unsigned long int r;
  w = rb->write_ptr;
  r = rb->read_ptr;
  if(!(r >= w))
    return ((r - w) + rb->size & rb->size_mask) - (unsigned long int)1;

  else
    if(!(w >= r))
      return (r - w) - (unsigned long int)1;

    else
      return rb->size - (unsigned long int)1;
}

// list_add
// file ../dbus/list.h line 104
static inline void list_add(struct list_head *new, struct list_head *head)
{
  __list_add_link1(new, head, head->next);
}

// list_add_tail
// file ../dbus/list.h line 117
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
  __list_add(new, head->prev, head);
}

// list_add_tail_link1
// file ../dbus/list.h line 117
static inline void list_add_tail_link1(struct list_head *new_link1, struct list_head *head_link1)
{
  __list_add_link1(new_link1, head_link1->prev, head_link1);
}

// list_add_tail_link2
// file ../dbus/list.h line 117
static inline void list_add_tail_link2(struct list_head *new_link2, struct list_head *head_link2)
{
  __list_add_link2(new_link2, head_link2->prev, head_link2);
}

// list_add_tail_link3
// file ../dbus/list.h line 117
static inline void list_add_tail_link3(struct list_head *new_link3, struct list_head *head_link3)
{
  __list_add_link3(new_link3, head_link3->prev, head_link3);
}

// list_del
// file ../dbus/list.h line 200
static inline void list_del(struct list_head *entry)
{
  __list_del(entry->prev, entry->next);
  entry->next = (struct list_head *)(void *)0x00100100;
  entry->prev = (struct list_head *)(void *)0x00200200;
}

// list_del_link1
// file ../dbus/list.h line 200
static inline void list_del_link1(struct list_head *entry_link1)
{
  __list_del_link1(entry_link1->prev, entry_link1->next);
  entry_link1->next = (struct list_head *)(void *)0x00100100;
  entry_link1->prev = (struct list_head *)(void *)0x00200200;
}

// list_del_link2
// file ../dbus/list.h line 200
static inline void list_del_link2(struct list_head *entry_link2)
{
  __list_del_link2(entry_link2->prev, entry_link2->next);
  entry_link2->next = (struct list_head *)(void *)0x00100100;
  entry_link2->prev = (struct list_head *)(void *)0x00200200;
}

// list_del_link3
// file ../dbus/list.h line 200
static inline void list_del_link3(struct list_head *entry_link3)
{
  __list_del_link3(entry_link3->prev, entry_link3->next);
  entry_link3->next = (struct list_head *)(void *)0x00100100;
  entry_link3->prev = (struct list_head *)(void *)0x00200200;
}

// list_empty
// file ../dbus/list.h line 292
static inline signed int list_empty(struct list_head *head)
{
  return (signed int)(head->next == head);
}

// list_empty_link1
// file ../dbus/list.h line 292
static inline signed int list_empty_link1(struct list_head *head_link1)
{
  return (signed int)(head_link1->next == head_link1);
}

// list_empty_link2
// file ../dbus/list.h line 292
static inline signed int list_empty_link2(struct list_head *head_link2)
{
  return (signed int)(head_link2->next == head_link2);
}

// list_empty_link3
// file ../dbus/list.h line 292
static inline signed int list_empty_link3(struct list_head *head_link3)
{
  return (signed int)(head_link3->next == head_link3);
}

// log_init
// file ../dbus/jackdbus.c line 755
static _Bool log_init(void)
{
  unsigned long int log_len;
  log_len=strlen("/jackdbus.log");
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(g_jackdbus_log_dir_len + log_len + (unsigned long int)1);
  g_log_filename = (char *)return_value_malloc_1;
  if(g_log_filename == ((char *)NULL))
  {
    fprintf(stderr, "Out of memory\n");
    return (_Bool)0;
  }

  else
  {
    memcpy((void *)g_log_filename, (const void *)g_jackdbus_log_dir, g_jackdbus_log_dir_len);
    memcpy((void *)(g_log_filename + (signed long int)g_jackdbus_log_dir_len), (const void *)"/jackdbus.log", log_len);
    g_log_filename[(signed long int)(g_jackdbus_log_dir_len + log_len)] = (char)0;
    _Bool return_value_jack_dbus_log_open_2;
    return_value_jack_dbus_log_open_2=jack_dbus_log_open();
    if(return_value_jack_dbus_log_open_2 == (_Bool)0)
      return (_Bool)0;

    else
      return (_Bool)1;
  }
}

// log_uninit
// file ../dbus/jackdbus.c line 780
static void log_uninit(void)
{
  if(!(g_logfile == ((struct _IO_FILE *)NULL)))
    fclose(g_logfile);

  free((void *)g_log_filename);
}

// main
// file ../dbus/jackdbus.c line 851
signed int main(signed int argc, char **argv)
{
  struct DBusError error;
  signed int ret;
  void *controller_ptr;
  struct stat st;
  char timestamp_str[26l];
  st.st_mtim.tv_sec = (signed long int)0;
  stat(argv[(signed long int)0], &st);
  ctime_r(&st.st_mtim.tv_sec, timestamp_str);
  timestamp_str[(signed long int)24] = (char)0;
  _Bool return_value_jack_controller_settings_init_1;
  return_value_jack_controller_settings_init_1=jack_controller_settings_init();
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_2;
  _Bool return_value_paths_init_4;
  _Bool return_value_log_init_5;
  const char *return_value_jack_get_version_string_6;
  unsigned int return_value_dbus_threads_init_default_7;
  unsigned int return_value_dbus_error_is_set_8;
  unsigned int return_value_dbus_connection_read_write_dispatch_9;
  if(return_value_jack_controller_settings_init_1 == (_Bool)0)
    ret = 1;

  else
  {
    if(!(argc == 2))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_strcmp_2=strcmp(argv[(signed long int)1], "auto");
      tmp_if_expr_3 = return_value_strcmp_2 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      ret = 0;
      fprintf(stderr, "jackdbus should be auto-executed by D-Bus message bus daemon.\nIf you want to run it manually anyway, specify \"auto\" as only parameter\n");
    }

    else
    {
      return_value_paths_init_4=paths_init();
      if(return_value_paths_init_4 == (_Bool)0)
        ret = 1;

      else
      {
        return_value_log_init_5=log_init();
        if(return_value_log_init_5 == (_Bool)0)
          ret = 1;

        else
        {
          jackctl_setup_signals((unsigned int)0);
          jack_set_error_function(jack_dbus_error_callback);
          jack_set_info_function(jack_dbus_info_callback);
          setup_sigsegv();
          jack_info("------------------");
          return_value_jack_get_version_string_6=jack_get_version_string();
          jack_info("Controller activated. Version %s (%s) built on %s", return_value_jack_get_version_string_6, (const void *)"unknown", (const void *)timestamp_str);
          return_value_dbus_threads_init_default_7=dbus_threads_init_default();
          if(return_value_dbus_threads_init_default_7 == 0u)
          {
            jack_error("dbus_threads_init_default() failed");
            ret = 1;
          }

          else
          {
            dbus_error_init(&error);
            g_connection=dbus_bus_get((enum anonymous_7)DBUS_BUS_SESSION, &error);
            return_value_dbus_error_is_set_8=dbus_error_is_set(&error);
            if(!(return_value_dbus_error_is_set_8 == 0u))
            {
              jack_error("Cannot connect to D-Bus session bus: %s", error.message);
              ret = 1;
            }

            else
            {
              ret=dbus_bus_request_name(g_connection, "org.jackaudio.service", (unsigned int)0x4, &error);
              if(ret == -1)
              {
                jack_error("Cannot request service name: %s", error.message);
                dbus_error_free(&error);
                ret = 1;
                goto fail_unref_connection;
              }

              else
                if(ret == 3)
                {
                  jack_error("Requested D-Bus service name already exists");
                  ret = 1;
                  goto fail_unref_connection;
                }

              controller_ptr=jack_controller_create(g_connection);
              if(controller_ptr == NULL)
                ret = 1;

              else
              {
                jack_info("Listening for D-Bus messages");
                g_exit_command = 0;
                while(g_exit_command == 0)
                {
                  return_value_dbus_connection_read_write_dispatch_9=dbus_connection_read_write_dispatch(g_connection, 200);
                  if(return_value_dbus_connection_read_write_dispatch_9 == 0u)
                    break;

                  jack_controller_run(controller_ptr);
                }
                jack_controller_destroy(controller_ptr);
                jack_info("Controller deactivated.");
                ret = 0;
              }

            fail_unref_connection:
              ;
              dbus_connection_unref(g_connection);
            }
          }

        fail_uninit_log:
          ;
          log_uninit();
        }

      fail_uninit_paths:
        ;
        paths_uninit();
      }
    }

  fail_uninit_xml:
    ;
    jack_controller_settings_uninit();
  }

fail:
  ;
  return ret;
}

// object_handler
// file ../dbus/reserve.c line 118
static enum anonymous_8 object_handler(struct DBusConnection *c, struct DBusMessage *m, void *userdata)
{
  struct rd_device *d;
  struct DBusError error;
  struct DBusMessage *reply = (struct DBusMessage *)(void *)0;
  dbus_error_init(&error);
  d = (struct rd_device *)userdata;
  /* assertion d->ref >= 1 */
  assert(d->ref >= 1);
  unsigned int return_value_dbus_message_is_method_call_20;
  return_value_dbus_message_is_method_call_20=dbus_message_is_method_call(m, "org.freedesktop.ReserveDevice1", "RequestRelease");
  unsigned int return_value_dbus_message_is_method_call_19;
  _Bool tmp_if_expr_13;
  const char **tmp_if_expr_5;
  signed int return_value_strcmp_11;
  const char **tmp_if_expr_7;
  signed int return_value_strcmp_10;
  unsigned int return_value_dbus_message_is_method_call_18;
  if(!(return_value_dbus_message_is_method_call_20 == 0u))
  {
    signed int priority;
    unsigned int ret;
    unsigned int return_value_dbus_message_get_args_1;
    return_value_dbus_message_get_args_1=dbus_message_get_args(m, &error, (signed int)105, &priority, (signed int)0);
    if(return_value_dbus_message_get_args_1 == 0u)
      goto invalid;

    ret = (unsigned int)0;
    if(!(d->priority >= priority))
    {
      if(!(d->request_cb == ((signed int (*)(struct rd_device *, signed int))NULL)))
      {
        d->ref = d->ref + 1;
        signed int return_value;
        return_value=d->request_cb(d, 0);
        if(return_value >= 1)
        {
          ret = (unsigned int)1;
          d->gave_up = 1;
        }

        rd_release(d);
      }

    }

    reply=dbus_message_new_method_return(m);
    if(reply == ((struct DBusMessage *)NULL))
      goto oom;

    unsigned int return_value_dbus_message_append_args_2;
    return_value_dbus_message_append_args_2=dbus_message_append_args(reply, (signed int)98, &ret, (signed int)0);
    if(return_value_dbus_message_append_args_2 == 0u)
      goto oom;

    unsigned int return_value_dbus_connection_send_3;
    return_value_dbus_connection_send_3=dbus_connection_send(c, reply, (unsigned int *)(void *)0);
    if(return_value_dbus_connection_send_3 == 0u)
      goto oom;

    dbus_message_unref(reply);
    return (enum anonymous_8)DBUS_HANDLER_RESULT_HANDLED;
  }

  else
  {
    return_value_dbus_message_is_method_call_19=dbus_message_is_method_call(m, "org.freedesktop.DBus.Properties", "Get");
    if(!(return_value_dbus_message_is_method_call_19 == 0u))
    {
      const char *interface;
      const char *property;
      unsigned int return_value_dbus_message_get_args_4;
      return_value_dbus_message_get_args_4=dbus_message_get_args(m, &error, (signed int)115, &interface, (signed int)115, &property, (signed int)0);
      if(return_value_dbus_message_get_args_4 == 0u)
        goto invalid;

      signed int return_value_strcmp_15;
      return_value_strcmp_15=strcmp(interface, "org.freedesktop.ReserveDevice1");
      if(return_value_strcmp_15 == 0)
      {
        const char *empty = "";
        signed int return_value_strcmp_12;
        return_value_strcmp_12=strcmp(property, "ApplicationName");
        if(return_value_strcmp_12 == 0)
          tmp_if_expr_13 = d->application_name != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_13 = (_Bool)0;
        if(tmp_if_expr_13)
        {
          reply=dbus_message_new_method_return(m);
          if(reply == ((struct DBusMessage *)NULL))
            goto oom;

          if(!(d->application_name == ((char *)NULL)))
            tmp_if_expr_5 = (const char **)&d->application_name;

          else
            tmp_if_expr_5 = &empty;
          unsigned int return_value_add_variant_6;
          return_value_add_variant_6=add_variant(reply, (signed int)115, (const void *)tmp_if_expr_5);
          if(return_value_add_variant_6 == 0u)
            goto oom;

        }

        else
        {
          return_value_strcmp_11=strcmp(property, "ApplicationDeviceName");
          if(return_value_strcmp_11 == 0)
          {
            reply=dbus_message_new_method_return(m);
            if(reply == ((struct DBusMessage *)NULL))
              goto oom;

            if(!(d->application_device_name == ((char *)NULL)))
              tmp_if_expr_7 = (const char **)&d->application_device_name;

            else
              tmp_if_expr_7 = &empty;
            unsigned int return_value_add_variant_8;
            return_value_add_variant_8=add_variant(reply, (signed int)115, (const void *)tmp_if_expr_7);
            if(return_value_add_variant_8 == 0u)
              goto oom;

          }

          else
          {
            return_value_strcmp_10=strcmp(property, "Priority");
            if(return_value_strcmp_10 == 0)
            {
              reply=dbus_message_new_method_return(m);
              if(reply == ((struct DBusMessage *)NULL))
                goto oom;

              unsigned int return_value_add_variant_9;
              return_value_add_variant_9=add_variant(reply, (signed int)105, (const void *)&d->priority);
              if(return_value_add_variant_9 == 0u)
                goto oom;

            }

            else
            {
              reply=dbus_message_new_error_printf(m, "org.freedesktop.DBus.Error.UnknownMethod", "Unknown property %s", property);
              if(reply == ((struct DBusMessage *)NULL))
                goto oom;

            }
          }
        }
        unsigned int return_value_dbus_connection_send_14;
        return_value_dbus_connection_send_14=dbus_connection_send(c, reply, (unsigned int *)(void *)0);
        if(return_value_dbus_connection_send_14 == 0u)
          goto oom;

        dbus_message_unref(reply);
        return (enum anonymous_8)DBUS_HANDLER_RESULT_HANDLED;
      }

    }

    else
    {
      return_value_dbus_message_is_method_call_18=dbus_message_is_method_call(m, "org.freedesktop.DBus.Introspectable", "Introspect");
      if(!(return_value_dbus_message_is_method_call_18 == 0u))
      {
        const char *i = introspection;
        reply=dbus_message_new_method_return(m);
        if(reply == ((struct DBusMessage *)NULL))
          goto oom;

        unsigned int return_value_dbus_message_append_args_16;
        return_value_dbus_message_append_args_16=dbus_message_append_args(reply, (signed int)115, &i, (signed int)0);
        if(return_value_dbus_message_append_args_16 == 0u)
          goto oom;

        unsigned int return_value_dbus_connection_send_17;
        return_value_dbus_connection_send_17=dbus_connection_send(c, reply, (unsigned int *)(void *)0);
        if(return_value_dbus_connection_send_17 == 0u)
          goto oom;

        dbus_message_unref(reply);
        return (enum anonymous_8)DBUS_HANDLER_RESULT_HANDLED;
      }

    }
  }
  return (enum anonymous_8)DBUS_HANDLER_RESULT_NOT_YET_HANDLED;

invalid:
  ;
  if(!(reply == ((struct DBusMessage *)NULL)))
    dbus_message_unref(reply);

  reply=dbus_message_new_error(m, "org.freedesktop.DBus.Error.InvalidArgs", "Invalid arguments");
  unsigned int return_value_dbus_connection_send_21;
  if(!(reply == ((struct DBusMessage *)NULL)))
  {
    return_value_dbus_connection_send_21=dbus_connection_send(c, reply, (unsigned int *)(void *)0);
    if(return_value_dbus_connection_send_21 == 0u)
      goto oom;

    dbus_message_unref(reply);
    dbus_error_free(&error);
    return (enum anonymous_8)DBUS_HANDLER_RESULT_HANDLED;
  }

  else
  {

  oom:
    ;
    if(!(reply == ((struct DBusMessage *)NULL)))
      dbus_message_unref(reply);

    dbus_error_free(&error);
    return (enum anonymous_8)DBUS_HANDLER_RESULT_NEED_MEMORY;
  }
}

// on_device_acquire
// file ../dbus/controller.c line 375
static _Bool on_device_acquire(const char *device_name)
{
  signed int ret;
  struct DBusError error;
  dbus_error_init(&error);
  ret=rd_acquire(&g_reserved_device[(signed long int)g_device_count].reserved_device, g_connection, device_name, "Jack audio server", 2147483647, (signed int (*)(struct rd_device *, signed int))(void *)0, &error);
  const char *tmp_if_expr_2;
  char *return_value_strerror_1;
  if(!(ret >= 0))
  {
    if(!(error.message == ((const char *)NULL)))
      tmp_if_expr_2 = error.message;

    else
    {
      return_value_strerror_1=strerror(-ret);
      tmp_if_expr_2 = return_value_strerror_1;
    }
    jack_error("Failed to acquire device name : %s error : %s", device_name, tmp_if_expr_2);
    dbus_error_free(&error);
    return (_Bool)0;
  }

  strcpy(g_reserved_device[(signed long int)g_device_count].device_name, device_name);
  g_device_count = g_device_count + 1;
  jack_info("Acquired audio card %s", device_name);
  return (_Bool)1;
}

// on_device_release
// file ../dbus/controller.c line 405
static void on_device_release(const char *device_name)
{
  signed int i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(g_reserved_device[(signed long int)i].device_name, device_name);
    if(return_value_strcmp_1 == 0)
      break;

  }
  if(!(i >= 2))
  {
    jack_info("Released audio card %s", device_name);
    rd_release(g_reserved_device[(signed long int)i].reserved_device);
  }

  else
    jack_error("Audio card %s not found!!", device_name);
  g_device_count = g_device_count - 1;
}

// pathname_cat
// file ../dbus/jackdbus.c line 676
char * pathname_cat(const char *pathname_a, const char *pathname_b)
{
  char *pathname;
  signed int pathname_a_len;
  signed int pathname_b_len;
  signed int pathname_len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(pathname_a);
  pathname_a_len = (signed int)return_value_strlen_1;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(pathname_b);
  pathname_b_len = (signed int)return_value_strlen_2;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc((unsigned long int)(pathname_a_len + pathname_b_len + 1));
  pathname = (char *)return_value_malloc_3;
  if(pathname == ((char *)NULL))
  {
    fprintf(stderr, "Out of memory\n");
    return (char *)(void *)0;
  }

  else
  {
    memcpy((void *)pathname, (const void *)pathname_a, (unsigned long int)pathname_a_len);
    memcpy((void *)(pathname + (signed long int)pathname_a_len), (const void *)pathname_b, (unsigned long int)pathname_b_len);
    pathname_len = pathname_a_len + pathname_b_len;
    pathname[(signed long int)pathname_len] = (char)0;
    return pathname;
  }
}

// paths_init
// file ../dbus/jackdbus.c line 696
_Bool paths_init()
{
  const char *home_dir;
  const char *xdg_config_home;
  const char *xdg_log_home;
  home_dir=getenv("HOME");
  _Bool return_value_ensure_dir_exist_1;
  _Bool return_value_ensure_dir_exist_2;
  _Bool return_value_ensure_dir_exist_3;
  _Bool return_value_ensure_dir_exist_4;
  if(home_dir == ((const char *)NULL))
    fprintf(stderr, "Environment variable HOME not set\n");

  else
  {
    xdg_config_home=getenv("XDG_CONFIG_HOME");
    if(xdg_config_home == ((const char *)NULL))
    {
      xdg_config_home=pathname_cat(home_dir, "/.config");
      if(xdg_config_home == ((const char *)NULL))
        goto fail;

    }

    xdg_log_home=pathname_cat(home_dir, "/.log");
    if(!(xdg_log_home == ((const char *)NULL)))
    {
      g_jackdbus_config_dir=pathname_cat(xdg_config_home, "/jack");
      if(!(g_jackdbus_config_dir == ((char *)NULL)))
      {
        g_jackdbus_log_dir=pathname_cat(xdg_log_home, "/jack");
        if(!(g_jackdbus_log_dir == ((char *)NULL)))
        {
          return_value_ensure_dir_exist_1=ensure_dir_exist(xdg_config_home, 0700);
          if(!(return_value_ensure_dir_exist_1 == (_Bool)0))
          {
            return_value_ensure_dir_exist_2=ensure_dir_exist(xdg_log_home, 0700);
            if(!(return_value_ensure_dir_exist_2 == (_Bool)0))
            {
              return_value_ensure_dir_exist_3=ensure_dir_exist(g_jackdbus_config_dir, 0700);
              if(return_value_ensure_dir_exist_3 == (_Bool)0)
                free((void *)g_jackdbus_config_dir);

              else
              {
                g_jackdbus_config_dir_len=strlen(g_jackdbus_config_dir);
                return_value_ensure_dir_exist_4=ensure_dir_exist(g_jackdbus_log_dir, 0700);
                if(return_value_ensure_dir_exist_4 == (_Bool)0)
                  free((void *)g_jackdbus_log_dir);

                else
                {
                  g_jackdbus_log_dir_len=strlen(g_jackdbus_log_dir);
                  return (_Bool)1;
                }
              }
            }

          }

        }

      }

    }

  }

fail:
  ;
  return (_Bool)0;
}

// paths_uninit
// file ../dbus/jackdbus.c line 749
void paths_uninit()
{
  free((void *)g_jackdbus_config_dir);
  free((void *)g_jackdbus_log_dir);
}

// rd_acquire
// file ../dbus/reserve.h line 57
signed int rd_acquire(struct rd_device **_d, struct DBusConnection *connection, const char *device_name, const char *application_name, signed int priority, signed int (*request_cb)(struct rd_device *, signed int), struct DBusError *error)
{
  struct rd_device *d = (struct rd_device *)(void *)0;
  signed int r;
  signed int k;
  struct DBusError _error;
  struct DBusMessage *m = (struct DBusMessage *)(void *)0;
  struct DBusMessage *reply = (struct DBusMessage *)(void *)0;
  unsigned int good;
  vtable.message_function = object_handler;
  if(error == ((struct DBusError *)NULL))
  {
    error = &_error;
    dbus_error_init(error);
  }

  void *return_value_calloc_1;
  unsigned long int return_value_strlen_2;
  void *return_value_malloc_3;
  unsigned long int return_value_strlen_4;
  void *return_value_malloc_5;
  unsigned int return_value_dbus_message_append_args_6;
  _Bool tmp_if_expr_9;
  unsigned int return_value_dbus_error_has_name_8;
  _Bool tmp_if_expr_11;
  unsigned int return_value_dbus_error_has_name_10;
  unsigned int return_value_dbus_message_get_args_12;
  unsigned int return_value_dbus_connection_try_register_object_path_13;
  unsigned int return_value_dbus_connection_add_filter_14;
  if(_d == ((struct rd_device **)NULL))
  {
    /* assertion 0 */
    assert(0 != 0);
    r = -22;
  }

  else
    if(connection == ((struct DBusConnection *)NULL))
    {
      /* assertion 0 */
      assert(0 != 0);
      r = -22;
    }

    else
      if(device_name == ((const char *)NULL))
      {
        /* assertion 0 */
        assert(0 != 0);
        r = -22;
      }

      else
        if(request_cb == ((signed int (*)(struct rd_device *, signed int))NULL) && !(priority == 2147483647))
        {
          /* assertion 0 */
          assert(0 != 0);
          r = -22;
        }

        else
        {
          return_value_calloc_1=calloc(sizeof(struct rd_device) /*88ul*/ , (unsigned long int)1);
          d = (struct rd_device *)return_value_calloc_1;
          if(d == ((struct rd_device *)NULL))
          {
            dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot allocate memory for rd_device struct");
            r = -12;
          }

          else
          {
            d->ref = 1;
            d->device_name=strdup(device_name);
            if(d->device_name == ((char *)NULL))
            {
              dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot duplicate device name string");
              r = -12;
            }

            else
            {
              d->application_name=strdup(application_name);
              if(d->application_name == ((char *)NULL))
              {
                dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot duplicate application name string");
                r = -12;
              }

              else
              {
                d->priority = priority;
                d->connection=dbus_connection_ref(connection);
                d->request_cb = request_cb;
                return_value_strlen_2=strlen(device_name);
                return_value_malloc_3=malloc(sizeof(char [32l]) /*32ul*/  + return_value_strlen_2);
                d->service_name = (char *)return_value_malloc_3;
                if(d->service_name == ((char *)NULL))
                {
                  dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot allocate memory for service name string");
                  r = -12;
                }

                else
                {
                  sprintf(d->service_name, "org.freedesktop.ReserveDevice1.%s", d->device_name);
                  return_value_strlen_4=strlen(device_name);
                  return_value_malloc_5=malloc(sizeof(char [33l]) /*33ul*/  + return_value_strlen_4);
                  d->object_path = (char *)return_value_malloc_5;
                  if(d->object_path == ((char *)NULL))
                  {
                    dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot allocate memory for object path string");
                    r = -12;
                  }

                  else
                  {
                    sprintf(d->object_path, "/org/freedesktop/ReserveDevice1/%s", d->device_name);
                    k=dbus_bus_request_name(d->connection, d->service_name, (unsigned int)(0x4 | (priority < 2147483647 ? 0x1 : 0)), error);
                    if(!(k >= 0))
                    {
                      jack_error("dbus_bus_request_name() failed. (1)");
                      r = -5;
                    }

                    else
                    {
                      switch(k)
                      {
                        case 1:

                        case 4:
                          goto success;
                        case 3:
                          break;
                        case 2:

                        default:
                        {
                          jack_error("request name reply with unexpected value %d.", k);
                          /* assertion 0 */
                          assert(0 != 0);
                          r = -5;
                          goto fail;
                        }
                      }
                      if(!(priority >= -2147483647))
                      {
                        r = -16;
                        dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.ReleaseDenied", "Device reservation request with priority %i denied for \"%s\"", priority, device_name);
                      }

                      else
                      {
                        m=dbus_message_new_method_call(d->service_name, d->object_path, "org.freedesktop.ReserveDevice1", "RequestRelease");
                        if(m == ((struct DBusMessage *)NULL))
                        {
                          dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot allocate memory for RequestRelease method call");
                          r = -12;
                        }

                        else
                        {
                          return_value_dbus_message_append_args_6=dbus_message_append_args(m, (signed int)105, &d->priority, (signed int)0);
                          if(return_value_dbus_message_append_args_6 == 0u)
                          {
                            dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot append args for RequestRelease method call");
                            r = -12;
                          }

                          else
                          {
                            reply=dbus_connection_send_with_reply_and_block(d->connection, m, 5000, error);
                            if(reply == ((struct DBusMessage *)NULL))
                            {
                              unsigned int return_value_dbus_error_has_name_7;
                              return_value_dbus_error_has_name_7=dbus_error_has_name(error, "org.freedesktop.DBus.Error.TimedOut");
                              if(!(return_value_dbus_error_has_name_7 == 0u))
                                tmp_if_expr_9 = (_Bool)1;

                              else
                              {
                                return_value_dbus_error_has_name_8=dbus_error_has_name(error, "org.freedesktop.DBus.Error.UnknownMethod");
                                tmp_if_expr_9 = return_value_dbus_error_has_name_8 != 0u ? (_Bool)1 : (_Bool)0;
                              }
                              if(tmp_if_expr_9)
                                tmp_if_expr_11 = (_Bool)1;

                              else
                              {
                                return_value_dbus_error_has_name_10=dbus_error_has_name(error, "org.freedesktop.DBus.Error.NoReply");
                                tmp_if_expr_11 = return_value_dbus_error_has_name_10 != 0u ? (_Bool)1 : (_Bool)0;
                              }
                              if(tmp_if_expr_11)
                              {
                                jack_info("Device reservation request with priority %i denied for \"%s\": %s (%s)", priority, device_name, error->name, error->message);
                                r = -16;
                                goto fail;
                              }

                              jack_error("dbus_connection_send_with_reply_and_block(RequestRelease) failed.");
                              r = -5;
                              goto fail;
                            }

                            return_value_dbus_message_get_args_12=dbus_message_get_args(reply, error, (signed int)98, &good, (signed int)0);
                            if(return_value_dbus_message_get_args_12 == 0u)
                            {
                              jack_error("RequestRelease() reply is invalid.");
                              r = -5;
                            }

                            else
                              if(good == 0u)
                              {
                                dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.ReleaseDenied", "Device reservation request with priority %i denied for \"%s\" via RequestRelease()", priority, device_name);
                                r = -16;
                              }

                              else
                              {
                                k=dbus_bus_request_name(d->connection, d->service_name, (unsigned int)(0x4 | (priority < 2147483647 ? 0x1 : 0) | 0x2), error);
                                if(!(k >= 0))
                                {
                                  jack_error("dbus_bus_request_name() failed. (2)");
                                  r = -5;
                                }

                                else
                                  if(!(k == 1))
                                  {
                                    dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.Protocol", "request name reply is not DBUS_REQUEST_NAME_REPLY_PRIMARY_OWNER but %d.", k);
                                    r = -5;
                                  }

                                  else
                                  {

                                  success:
                                    ;
                                    d->owning = 1;
                                    return_value_dbus_connection_try_register_object_path_13=dbus_connection_try_register_object_path(d->connection, d->object_path, &vtable, (void *)d, error);
                                    if(return_value_dbus_connection_try_register_object_path_13 == 0u)
                                    {
                                      jack_error("cannot register object path \"%s\": %s", d->object_path, error->message);
                                      r = -12;
                                    }

                                    else
                                    {
                                      d->registered = 1;
                                      return_value_dbus_connection_add_filter_14=dbus_connection_add_filter(d->connection, filter_handler, (void *)d, (void (*)(void *))(void *)0);
                                      if(return_value_dbus_connection_add_filter_14 == 0u)
                                      {
                                        dbus_set_error(error, "org.freedesktop.ReserveDevice1.Error.NoMemory", "Cannot add filter");
                                        r = -12;
                                      }

                                      else
                                      {
                                        d->filtering = 1;
                                        *_d = d;
                                        return 0;
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

fail:
  ;
  if(!(m == ((struct DBusMessage *)NULL)))
    dbus_message_unref(m);

  if(!(reply == ((struct DBusMessage *)NULL)))
    dbus_message_unref(reply);

  if(&_error == error)
    dbus_error_free(&_error);

  if(!(d == ((struct rd_device *)NULL)))
    rd_release(d);

  return r;
}

// rd_get_userdata
// file ../dbus/reserve.c line 670
void * rd_get_userdata(struct rd_device *d)
{
  if(d == ((struct rd_device *)NULL))
    return (void *)0;

  else
  {
    /* assertion d->ref > 0 */
    assert(d->ref > 0);
    return d->userdata;
  }
}

// rd_release
// file ../dbus/reserve.h line 67
void rd_release(struct rd_device *d)
{
  if(!(d == ((struct rd_device *)NULL)))
  {
    /* assertion d->ref > 0 */
    assert(d->ref > 0);
    d->ref = d->ref - 1;
    if(d->ref == 0)
    {
      if(!(d->filtering == 0))
        dbus_connection_remove_filter(d->connection, filter_handler, (void *)d);

      if(!(d->registered == 0))
        dbus_connection_unregister_object_path(d->connection, d->object_path);

      if(!(d->owning == 0))
      {
        struct DBusError error;
        dbus_error_init(&error);
        dbus_bus_release_name(d->connection, d->service_name, &error);
        dbus_error_free(&error);
      }

      free((void *)d->device_name);
      free((void *)d->application_name);
      free((void *)d->application_device_name);
      free((void *)d->service_name);
      free((void *)d->object_path);
      if(!(d->connection == ((struct DBusConnection *)NULL)))
        dbus_connection_unref(d->connection);

      free((void *)d);
    }

  }

}

// rd_set_application_device_name
// file ../dbus/reserve.c line 645
signed int rd_set_application_device_name(struct rd_device *d, const char *n)
{
  char *t;
  if(d == ((struct rd_device *)NULL))
    return -22;

  else
  {
    /* assertion d->ref > 0 */
    assert(d->ref > 0);
    t=strdup(n);
    if(t == ((char *)NULL))
      return -12;

    else
    {
      free((void *)d->application_device_name);
      d->application_device_name = t;
      return 0;
    }
  }
}

// rd_set_userdata
// file ../dbus/reserve.c line 661
void rd_set_userdata(struct rd_device *d, void *userdata)
{
  if(!(d == ((struct rd_device *)NULL)))
  {
    /* assertion d->ref > 0 */
    assert(d->ref > 0);
    d->userdata = userdata;
  }

}

// send_session_notify_reply
// file ../dbus/controller_iface_session_manager.c line 97
static void send_session_notify_reply(struct jack_session_pending_command *pending_cmd_ptr, struct anonymous_9 *commands)
{
  struct jack_dbus_method_call call;
  const struct anonymous_9 *cmd_ptr;
  struct DBusMessageIter top_iter;
  struct DBusMessageIter array_iter;
  struct DBusMessageIter struct_iter;
  unsigned int u32;
  call.message = pending_cmd_ptr->message;
  call.connection = pending_cmd_ptr->connection;
  unsigned int return_value_dbus_message_iter_open_container_1;
  unsigned int return_value_dbus_message_iter_close_container_8;
  if(commands == ((struct anonymous_9 *)NULL))
    jack_dbus_error((void *)&call, "org.jackaudio.Error.Generic", "jack_session_notify() failed");

  else
  {
    jack_info("Session notify complete, commands follow:");
    call.reply=dbus_message_new_method_return(pending_cmd_ptr->message);
    if(call.reply == ((struct DBusMessage *)NULL))
      goto oom;

    dbus_message_iter_init_append(call.reply, &top_iter);
    return_value_dbus_message_iter_open_container_1=dbus_message_iter_open_container(&top_iter, (signed int)97, "(sssu)", &array_iter);
    if(!(return_value_dbus_message_iter_open_container_1 == 0u))
    {
      cmd_ptr = commands;
      for( ; !(cmd_ptr->uuid == ((const char *)NULL)); cmd_ptr = cmd_ptr + 1l)
      {
        unsigned int return_value_dbus_message_iter_open_container_2;
        return_value_dbus_message_iter_open_container_2=dbus_message_iter_open_container(&array_iter, (signed int)114, (const char *)(void *)0, &struct_iter);
        if(return_value_dbus_message_iter_open_container_2 == 0u)
          goto close_array;

        unsigned int return_value_dbus_message_iter_append_basic_3;
        return_value_dbus_message_iter_append_basic_3=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&cmd_ptr->uuid);
        if(return_value_dbus_message_iter_append_basic_3 == 0u)
          goto close_struct;

        unsigned int return_value_dbus_message_iter_append_basic_4;
        return_value_dbus_message_iter_append_basic_4=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&cmd_ptr->client_name);
        if(return_value_dbus_message_iter_append_basic_4 == 0u)
          goto close_struct;

        unsigned int return_value_dbus_message_iter_append_basic_5;
        return_value_dbus_message_iter_append_basic_5=dbus_message_iter_append_basic(&struct_iter, (signed int)115, (const void *)&cmd_ptr->command);
        if(return_value_dbus_message_iter_append_basic_5 == 0u)
          goto close_struct;

        u32 = (unsigned int)cmd_ptr->flags;
        unsigned int return_value_dbus_message_iter_append_basic_6;
        return_value_dbus_message_iter_append_basic_6=dbus_message_iter_append_basic(&struct_iter, (signed int)117, (const void *)&u32);
        if(return_value_dbus_message_iter_append_basic_6 == 0u)
          goto close_struct;

        jack_info("uuid='%s', client='%s', command='%s', flags=0x%X", cmd_ptr->uuid, cmd_ptr->client_name, cmd_ptr->command, u32);
        unsigned int return_value_dbus_message_iter_close_container_7;
        return_value_dbus_message_iter_close_container_7=dbus_message_iter_close_container(&array_iter, &struct_iter);
        if(return_value_dbus_message_iter_close_container_7 == 0u)
          goto close_array;

      }
      jack_info("End of session commands.");
      return_value_dbus_message_iter_close_container_8=dbus_message_iter_close_container(&top_iter, &array_iter);
      if(!(return_value_dbus_message_iter_close_container_8 == 0u))
      {
        goto send_reply;

      close_struct:
        ;
        dbus_message_iter_close_container(&array_iter, &struct_iter);

      close_array:
        ;
        dbus_message_iter_close_container(&top_iter, &array_iter);
      }

    }


  unref:
    ;
    dbus_message_unref(call.reply);
    goto oom;
  }

send_reply:
  ;
  if(!(call.reply == ((struct DBusMessage *)NULL)))
  {
    unsigned int return_value_dbus_connection_send_9;
    return_value_dbus_connection_send_9=dbus_connection_send(pending_cmd_ptr->connection, call.reply, (unsigned int *)(void *)0);
    if(return_value_dbus_connection_send_9 == 0u)
      jack_error("Ran out of memory trying to queue method return");

    dbus_connection_flush(pending_cmd_ptr->connection);
    dbus_message_unref(call.reply);
  }

  else
  {

  oom:
    ;
    jack_error("Ran out of memory trying to construct method return");
  }
}

// serialize_modules
// file ../dbus/xml_write_raw.c line 87
_Bool serialize_modules(void *context, const char *name)
{
  ((struct save_context *)context)->indent = "   ";
  ((struct save_context *)context)->address[(signed long int)1] = name;
  ((struct save_context *)context)->address[(signed long int)2] = (const char *)(void *)0;
  _Bool return_value_jack_controller_settings_write_string_1;
  return_value_jack_controller_settings_write_string_1=jack_controller_settings_write_string(((struct save_context *)context)->fd, "  <", ((struct save_context *)context)->call);
  _Bool tmp_if_expr_3;
  _Bool return_value_jack_controller_settings_write_string_2;
  if(!(return_value_jack_controller_settings_write_string_1 == (_Bool)0))
  {
    return_value_jack_controller_settings_write_string_2=jack_controller_settings_write_string(((struct save_context *)context)->fd, ((struct save_context *)context)->str, ((struct save_context *)context)->call);
    tmp_if_expr_3 = return_value_jack_controller_settings_write_string_2 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_5;
  _Bool return_value_jack_controller_settings_write_string_4;
  if(tmp_if_expr_3)
  {
    return_value_jack_controller_settings_write_string_4=jack_controller_settings_write_string(((struct save_context *)context)->fd, " name=\"", ((struct save_context *)context)->call);
    tmp_if_expr_5 = return_value_jack_controller_settings_write_string_4 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  _Bool tmp_if_expr_7;
  _Bool return_value_jack_controller_settings_write_string_6;
  if(tmp_if_expr_5)
  {
    return_value_jack_controller_settings_write_string_6=jack_controller_settings_write_string(((struct save_context *)context)->fd, name, ((struct save_context *)context)->call);
    tmp_if_expr_7 = return_value_jack_controller_settings_write_string_6 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_7 = (_Bool)0;
  _Bool tmp_if_expr_9;
  _Bool return_value_jack_controller_settings_write_string_8;
  if(tmp_if_expr_7)
  {
    return_value_jack_controller_settings_write_string_8=jack_controller_settings_write_string(((struct save_context *)context)->fd, "\">\n", ((struct save_context *)context)->call);
    tmp_if_expr_9 = return_value_jack_controller_settings_write_string_8 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_9 = (_Bool)0;
  _Bool tmp_if_expr_11;
  _Bool return_value_jack_params_iterate_params_10;
  if(tmp_if_expr_9)
  {
    return_value_jack_params_iterate_params_10=jack_params_iterate_params(((struct save_context *)context)->params, ((struct save_context *)context)->address, jack_controller_serialize_parameter, (void *)(struct save_context *)context);
    tmp_if_expr_11 = return_value_jack_params_iterate_params_10 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_11 = (_Bool)0;
  _Bool tmp_if_expr_13;
  _Bool return_value_jack_controller_settings_write_string_12;
  if(tmp_if_expr_11)
  {
    return_value_jack_controller_settings_write_string_12=jack_controller_settings_write_string(((struct save_context *)context)->fd, "  </", ((struct save_context *)context)->call);
    tmp_if_expr_13 = return_value_jack_controller_settings_write_string_12 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_13 = (_Bool)0;
  _Bool tmp_if_expr_15;
  _Bool return_value_jack_controller_settings_write_string_14;
  if(tmp_if_expr_13)
  {
    return_value_jack_controller_settings_write_string_14=jack_controller_settings_write_string(((struct save_context *)context)->fd, ((struct save_context *)context)->str, ((struct save_context *)context)->call);
    tmp_if_expr_15 = return_value_jack_controller_settings_write_string_14 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_15 = (_Bool)0;
  _Bool tmp_if_expr_17;
  _Bool return_value_jack_controller_settings_write_string_16;
  if(tmp_if_expr_15)
  {
    return_value_jack_controller_settings_write_string_16=jack_controller_settings_write_string(((struct save_context *)context)->fd, ">\n", ((struct save_context *)context)->call);
    tmp_if_expr_17 = return_value_jack_controller_settings_write_string_16 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_17 = (_Bool)0;
  return tmp_if_expr_17;
}

// setup_sigsegv
// file ../dbus/sigsegv.h line 7
signed int setup_sigsegv()
{
  struct sigaction action;
  memset((void *)&action, 0, sizeof(struct sigaction) /*152ul*/ );
  action.__sigaction_handler.sa_sigaction = signal_segv;
  action.sa_flags = 4;
  signed int return_value_sigaction_4;
  return_value_sigaction_4=sigaction(11, &action, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_4 >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    jack_error("sigaction failed. errno is %d (%s)", *return_value___errno_location_1, return_value_strerror_3);
    return 0;
  }

  signed int return_value_sigaction_8;
  return_value_sigaction_8=sigaction(4, &action, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_8 >= 0))
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    char *return_value_strerror_7;
    return_value_strerror_7=strerror(*return_value___errno_location_6);
    jack_error("sigaction failed. errno is %d (%s)", *return_value___errno_location_5, return_value_strerror_7);
    return 0;
  }

  signed int return_value_sigaction_12;
  return_value_sigaction_12=sigaction(6, &action, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_12 >= 0))
  {
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    signed int *return_value___errno_location_10;
    return_value___errno_location_10=__errno_location();
    char *return_value_strerror_11;
    return_value_strerror_11=strerror(*return_value___errno_location_10);
    jack_error("sigaction failed. errno is %d (%s)", *return_value___errno_location_9, return_value_strerror_11);
    return 0;
  }

  signed int return_value_sigaction_16;
  return_value_sigaction_16=sigaction(8, &action, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_16 >= 0))
  {
    signed int *return_value___errno_location_13;
    return_value___errno_location_13=__errno_location();
    signed int *return_value___errno_location_14;
    return_value___errno_location_14=__errno_location();
    char *return_value_strerror_15;
    return_value_strerror_15=strerror(*return_value___errno_location_14);
    jack_error("sigaction failed. errno is %d (%s)", *return_value___errno_location_13, return_value_strerror_15);
    return 0;
  }

  return 1;
}

// signal_segv
// file ../dbus/sigsegv.c line 59
static void signal_segv(signed int signum, struct anonymous_12 *info, void *ptr)
{
  unsigned long int i;
  const char *si_code_str;
  struct ucontext *ucontext = (struct ucontext *)ptr;
  signed int f = 0;
  struct anonymous_22 dlinfo;
  void **bp = ((void **)NULL);
  void *ip = NULL;
  if(signum == 11)
    jack_error("Segmentation Fault!");

  else
    if(signum == 6)
      jack_error("Abort!");

    else
      if(signum == 4)
        jack_error("Illegal instruction!");

      else
        if(signum == 8)
          jack_error("Floating point exception!");

        else
          jack_error("Unknown bad signal catched!");
  _Bool tmp_if_expr_1;
  if(info->si_code >= 0)
    tmp_if_expr_1 = info->si_code < 3 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  static const char *si_codes[3l] = { "", "SEGV_MAPERR", "SEGV_ACCERR" };
  if(tmp_if_expr_1)
    si_code_str = si_codes[(signed long int)info->si_code];

  else
    si_code_str = "unknown";
  jack_error("info.si_signo = %d", signum);
  jack_error("info.si_errno = %d", info->si_errno);
  jack_error("info.si_code  = %d (%s)", info->si_code, si_code_str);
  jack_error("info.si_addr  = %p", info->_sifields._sigfault.si_addr);
  i = (unsigned long int)0;
  for( ; !(i >= 23ul); i = i + 1ul)
    jack_error("reg[%02d]       = 0x%016lx", i, ucontext->uc_mcontext.gregs[(signed long int)i]);
  ip = (void *)ucontext->uc_mcontext.gregs[(signed long int)16];
  bp = (void **)ucontext->uc_mcontext.gregs[(signed long int)10];
  jack_error("Stack trace:");
  signed int return_value_strcmp_3;
  while(!(ip == NULL) && !(bp == ((void **)NULL)))
  {
    signed int return_value_dladdr_2;
    return_value_dladdr_2=dladdr(ip, &dlinfo);
    if(return_value_dladdr_2 == 0)
      break;

    const char *symname = dlinfo.dli_sname;
    signed int status;
    char *tmp;
    tmp=__cxa_demangle(symname, (char *)(void *)0, ((unsigned long int *)NULL), &status);
    if(status == 0 && !(tmp == ((char *)NULL)))
      symname = tmp;

    f = f + 1;
    jack_error("% 2d: %p <%s+%u> (%s)", f, ip, symname, (unsigned int)(ip - dlinfo.dli_saddr), dlinfo.dli_fname);
    if(!(tmp == ((char *)NULL)))
      free((void *)tmp);

    if(!(dlinfo.dli_sname == ((const char *)NULL)))
    {
      return_value_strcmp_3=strcmp(dlinfo.dli_sname, "main");
      if(return_value_strcmp_3 == 0)
        break;

    }

    ip = bp[(signed long int)1];
    bp = (void **)bp[(signed long int)0];
  }
  jack_error("End of stack trace");
  exit(-1);
}

// slave_drivers_parameter_get_default_value
// file ../dbus/controller.c line 512
static union jackctl_parameter_value slave_drivers_parameter_get_default_value(void *obj)
{
  union jackctl_parameter_value value;
  value.str[(signed long int)0] = (char)0;
  return value;
}

// slave_drivers_parameter_get_value
// file ../dbus/controller.c line 445
static union jackctl_parameter_value slave_drivers_parameter_get_value(void *obj)
{
  return ((struct jack_controller *)obj)->slave_drivers_vparam_value;
}

// slave_drivers_parameter_is_set
// file ../dbus/controller.c line 427
static _Bool slave_drivers_parameter_is_set(void *obj)
{
  return ((struct jack_controller *)obj)->slave_drivers_set;
}

// slave_drivers_parameter_reset
// file ../dbus/controller.c line 432
static _Bool slave_drivers_parameter_reset(void *obj)
{
  if(!(((struct jack_controller *)obj)->started == (_Bool)0))
  {
    jack_error("Cannot modify slave-drivers when server is started");
    return (_Bool)0;
  }

  else
  {
    jack_controller_remove_slave_drivers((struct jack_controller *)obj);
    ((struct jack_controller *)obj)->slave_drivers_set = (_Bool)0;
    return (_Bool)1;
  }
}

// slave_drivers_parameter_set_value
// file ../dbus/controller.c line 450
static _Bool slave_drivers_parameter_set_value(void *obj, union jackctl_parameter_value *value_ptr)
{
  char *buffer;
  char *save;
  const char *token;
  struct list_head old_list;
  struct list_head new_list;
  union jackctl_parameter_value old_value;
  union jackctl_parameter_value new_value;
  _Bool old_set;
  if(!(((struct jack_controller *)obj)->started == (_Bool)0))
  {
    jack_error("Cannot modify slave-drivers when server is started");
    return (_Bool)0;
  }

  else
  {
    old_set = ((struct jack_controller *)obj)->slave_drivers_set;
    old_value = ((struct jack_controller *)obj)->slave_drivers_vparam_value;
    ((struct jack_controller *)obj)->slave_drivers_vparam_value.str[(signed long int)0] = (char)0;
    old_list = ((struct jack_controller *)obj)->slave_drivers;
    INIT_LIST_HEAD(&((struct jack_controller *)obj)->slave_drivers);
    buffer=strdup(value_ptr->str);
    if(buffer == ((char *)NULL))
    {
      jack_error("strdup() failed.");
      return (_Bool)0;
    }

    else
    {
      token=strtok_r(buffer, ",", &save);
      while(!(token == ((const char *)NULL)))
      {
        _Bool return_value_jack_controller_add_slave_driver_1;
        return_value_jack_controller_add_slave_driver_1=jack_controller_add_slave_driver((struct jack_controller *)obj, token);
        if(return_value_jack_controller_add_slave_driver_1 == (_Bool)0)
        {
          jack_controller_remove_slave_drivers((struct jack_controller *)obj);
          ((struct jack_controller *)obj)->slave_drivers = old_list;
          ((struct jack_controller *)obj)->slave_drivers_vparam_value = old_value;
          ((struct jack_controller *)obj)->slave_drivers_set = old_set;
          free((void *)buffer);
          return (_Bool)0;
        }

        token=strtok_r((char *)(void *)0, ",", &save);
      }
      new_value = ((struct jack_controller *)obj)->slave_drivers_vparam_value;
      new_list = ((struct jack_controller *)obj)->slave_drivers;
      ((struct jack_controller *)obj)->slave_drivers = old_list;
      jack_controller_remove_slave_drivers((struct jack_controller *)obj);
      ((struct jack_controller *)obj)->slave_drivers_vparam_value = new_value;
      ((struct jack_controller *)obj)->slave_drivers = new_list;
      ((struct jack_controller *)obj)->slave_drivers_set = (_Bool)1;
      free((void *)buffer);
      return (_Bool)1;
    }
  }
}

// start_detached_thread
// file ../dbus/controller_iface_session_manager.c line 62
static _Bool start_detached_thread(void * (*start_routine)(void *), void *arg)
{
  signed int ret;
  unsigned long int tid;
  static union pthread_attr_t attr;
  ret=pthread_attr_init(&attr);
  if(!(ret == 0))
    jack_error("pthread_attr_init() failed with %d", ret);

  else
  {
    ret=pthread_attr_setdetachstate(&attr, 1);
    if(!(ret == 0))
      jack_error("pthread_attr_setdetachstate() failed with %d", ret);

    else
    {
      ret=pthread_create(&tid, &attr, start_routine, arg);
      if(!(ret == 0))
        jack_error("pthread_create() failed with %d", ret);

      else
        jack_log("Detached thread %d created", (signed int)tid);
    }

  destroy_attr:
    ;
    pthread_attr_destroy(&attr);
  }

exit:
  ;
  return ret == 0;
}

// write_line
// file ../dbus/controller_iface_introspectable.c line 73
static void write_line(const char *line)
{
  write_line_format("%s\n", line);
}

// write_line_format
// file ../dbus/controller_iface_introspectable.c line 62
static void write_line_format(const char *format, ...)
{
  void **ap = (void **)&format;
  signed int return_value_vsprintf_1;
  return_value_vsprintf_1=vsprintf(g_buffer_ptr, format, ap);
  g_buffer_ptr = g_buffer_ptr + (signed long int)return_value_vsprintf_1;
  ap = ((void **)NULL);
}

