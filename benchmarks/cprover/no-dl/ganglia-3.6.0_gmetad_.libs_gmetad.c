// #anon_enum_APR_LOCAL=0_APR_REMOTE=1
// file /usr/include/apr-1.0/apr_network_io.h line 172
enum anonymous_33 { APR_LOCAL=0, APR_REMOTE=1 };

// #anon_enum_ARG_NO=0_ARG_STRING=1_ARG_INT=2
// file cmdline.c line 43
enum anonymous_23 { ARG_NO=0, ARG_STRING=1, ARG_INT=2 };

// #anon_enum_GANGLIA_XML_TAG=0_GRID_TAG=1_CLUSTER_TAG=2_HOST_TAG=3_NAME_TAG=4_METRIC_TAG=5_TN_TAG=6_TMAX_TAG=7_DMAX_TAG=8_VAL_TAG=9_TYPE_TAG=10_SLOPE_TAG=11_SOURCE_TAG=12_VERSION_TAG=13_REPORTED_TAG=14_LOCALTIME_TAG=15_OWNER_TAG=16_LATLONG_TAG=17_URL_TAG=18_AUTHORITY_TAG=19_IP_TAG=20_LOCATION_TAG=21_STARTED_TAG=22_UNITS_TAG=23_HOSTS_TAG=24_UP_TAG=25_DOWN_TAG=26_METRICS_TAG=27_SUM_TAG=28_NUM_TAG=29_EXTRA_DATA_TAG=30_EXTRA_ELEMENT_TAG=31_TAGS_TAG=32
// file gmetad.h line 44
enum anonymous_34 { GANGLIA_XML_TAG=0, GRID_TAG=1, CLUSTER_TAG=2, HOST_TAG=3, NAME_TAG=4, METRIC_TAG=5, TN_TAG=6, TMAX_TAG=7, DMAX_TAG=8, VAL_TAG=9, TYPE_TAG=10, SLOPE_TAG=11, SOURCE_TAG=12, VERSION_TAG=13, REPORTED_TAG=14, LOCALTIME_TAG=15, OWNER_TAG=16, LATLONG_TAG=17, URL_TAG=18, AUTHORITY_TAG=19, IP_TAG=20, LOCATION_TAG=21, STARTED_TAG=22, UNITS_TAG=23, HOSTS_TAG=24, UP_TAG=25, DOWN_TAG=26, METRICS_TAG=27, SUM_TAG=28, NUM_TAG=29, EXTRA_DATA_TAG=30, EXTRA_ELEMENT_TAG=31, TAGS_TAG=32 };

// #anon_enum_INT=0_UINT=1_FLOAT=2_TIMESTAMP=3_STRING=4
// file ./gmetad.h line 23
enum anonymous_18 { INT=0, UINT=1, FLOAT=2, TIMESTAMP=3, STRING=4 };

// #anon_enum_NO_FILTER=0_SUMMARY=1
// file ./gmetad.h line 94
enum anonymous_22 { NO_FILTER=0, SUMMARY=1 };

// #anon_enum_ROOT_NODE=0_GRID_NODE=1_CLUSTER_NODE=2_HOST_NODE=3_METRIC_NODE=4
// file ./gmetad.h line 83
enum anonymous_15 { ROOT_NODE=0, GRID_NODE=1, CLUSTER_NODE=2, HOST_NODE=3, METRIC_NODE=4 };

// #anon_enum_cfg_false=0_cfg_true=1
// file /usr/include/confuse.h line 205
enum anonymous_14 { cfg_false=0, cfg_true=1 };

// tag-#anon#ST[*{S8}_S8_'gridname'||S32'xml_port'||S32'interactive_port'||S32'server_threads'||S32'umask'||*{SYM#tag-_llist_entry#}_SYM#tag-_llist_entry#_'trusted_hosts'||*{SYM#tag-_llist_entry#}_SYM#tag-_llist_entry#_'unsummarized_metrics'||S32'debug_level'||S32'should_setuid'||*{S8}_S8_'setuid_username'||*{S8}_S8_'rrd_rootdir'||*{S8}_S8_'carbon_server'||S32'carbon_port'||U32'_pad0'||*{S8}_S8_'carbon_protocol'||S32'carbon_timeout'||U32'_pad1'||*{S8}_S8_'memcached_parameters'||*{S8}_S8_'graphite_prefix'||*{S8}_S8_'graphite_path'||S32'scalable_mode'||S32'write_rrds'||S32'all_trusted'||S32'num_RRAs'||ARR32{*{S8}_S8_}_*{S8}_S8__'RRAs'||S32'case_sensitive_hostnames'||S32'shortest_step'|]
// file ./conf.h line 8
struct anonymous_5;

// tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]
// file ../lib/net.h line 29
struct anonymous_4;

// tag-#anon#ST[*{S8}_S8_'name'||U32'step'||U32'num_sources'||*{*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#_}_*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#__'sources'||S32'dead'||S32'last_good_index'|]
// file ./gmetad.h line 107
struct anonymous_6;

// tag-#anon#ST[*{S8}_S8_'torepl'||*{S8}_S8_'replwith'|]
// file export_helpers.h line 9
struct anonymous_1;

// tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]
// file ../lib/hash.h line 33
struct anonymous_20;

// tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]
// file ../lib/hash.h line 18
struct anonymous_7;

// tag-#anon#ST[ARR16{S64}_S64_'fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_31;

// tag-#anon#ST[ARR256{S8}_S8_'name'||S64'localtime'||U32'num_hosts'||U32'_pad0'||*{V}_V_'hosts'||U32'num_gexec_hosts'||U32'_pad1'||*{V}_V_'gexec_hosts'||U32'num_dead_hosts'||U32'_pad2'||*{V}_V_'dead_hosts'||S32'malloc_error'||U32'_pad3'||*{SYM#tag-gexec_host_t#}_SYM#tag-gexec_host_t#_'host'||S32'host_up'||S32'start'|]
// file ../include/ganglia_gexec.h line 30
struct anonymous_36;

// tag-#anon#ST[EN#anon_enum_ROOT_NODE=0_GRID_NODE=1_CLUSTER_NODE=2_HOST_NODE=3_METRIC_NODE=4#{U32}_U32_'id'||U32'_pad0'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_start'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_end'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'authority'||S16'authority_ptr'||U48'_pad1'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'metric_summary'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'metric_summary_pending'||*{SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]#}_SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]#_'sum_finished'||*{SYM#tag-#anon#ST[*{S8}_S8_'name'||U32'step'||U32'num_sources'||*{*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#_}_*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#__'sources'||S32'dead'||S32'last_good_index'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||U32'step'||U32'num_sources'||*{*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#_}_*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#__'sources'||S32'dead'||S32'last_good_index'|]#_'ds'||U32'hosts_up'||U32'hosts_down'||U32'localtime'||S16'owner'||S16'latlong'||S16'url'||S16'stringslen'||ARR1572{S8}_S8_'strings'|]
// file ./gmetad.h line 163
struct anonymous_11;

// tag-#anon#ST[EN#anon_enum_ROOT_NODE=0_GRID_NODE=1_CLUSTER_NODE=2_HOST_NODE=3_METRIC_NODE=4#{U32}_U32_'id'||U32'_pad0'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_start'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_end'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'leaf'||SYM#tag-timeval#'t0'||SYM#tag-#anon#UN[F64'd'||S32'str'|]#'val'||S16'name'||S16'valstr'||S16'precision'||U16'_pad1'||U32'num'||S16'type'||S16'units'||U32'tn'||U32'tmax'||U32'dmax'||S16'slope'||S16'source'||S16'ednameslen'||S16'edvalueslen'||ARR32{S16}_S16_'ednames'||ARR32{S16}_S16_'edvalues'||S16'stringslen'||ARR1572{S8}_S8_'strings'||U48'_pad2'|]
// file ./gmetad.h line 215
struct anonymous_9;

// tag-#anon#ST[EN#anon_enum_ROOT_NODE=0_GRID_NODE=1_CLUSTER_NODE=2_HOST_NODE=3_METRIC_NODE=4#{U32}_U32_'id'||U32'_pad0'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_start'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_end'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'metrics'||SYM#tag-timeval#'t0'||S16'ip'||U16'_pad1'||U32'tn'||U32'tmax'||U32'dmax'||S16'location'||S16'tags'||U32'reported'||U32'started'||S16'stringslen'||ARR1572{S8}_S8_'strings'||U48'_pad2'|]
// file gmetad.h line 187
struct anonymous_10;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_12;

// tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]
// file ./gmetad.h line 133
struct anonymous_16;

// tag-#anon#ST[S32'rval'||S32'old'||*{S8}_S8_'sourcename'||*{S8}_S8_'hostname'||*{SYM#tag-#anon#ST[*{S8}_S8_'name'||U32'step'||U32'num_sources'||*{*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#_}_*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#__'sources'||S32'dead'||S32'last_good_index'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||U32'step'||U32'num_sources'||*{*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#_}_*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#__'sources'||S32'dead'||S32'last_good_index'|]#_'ds'||S32'grid_depth'||S32'host_alive'||SYM#tag-#anon#ST[EN#anon_enum_ROOT_NODE=0_GRID_NODE=1_CLUSTER_NODE=2_HOST_NODE=3_METRIC_NODE=4#{U32}_U32_'id'||U32'_pad0'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_start'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_end'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'authority'||S16'authority_ptr'||U48'_pad1'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'metric_summary'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'metric_summary_pending'||*{SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]#}_SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]#_'sum_finished'||*{SYM#tag-#anon#ST[*{S8}_S8_'name'||U32'step'||U32'num_sources'||*{*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#_}_*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#__'sources'||S32'dead'||S32'last_good_index'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||U32'step'||U32'num_sources'||*{*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#_}_*{SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||SYM#tag-sockaddr#'sa'||U32'ref_count'||U32'_pad0'|]#__'sources'||S32'dead'||S32'last_good_index'|]#_'ds'||U32'hosts_up'||U32'hosts_down'||U32'localtime'||S16'owner'||S16'latlong'||S16'url'||S16'stringslen'||ARR1572{S8}_S8_'strings'|]#'source'||SYM#tag-#anon#ST[EN#anon_enum_ROOT_NODE=0_GRID_NODE=1_CLUSTER_NODE=2_HOST_NODE=3_METRIC_NODE=4#{U32}_U32_'id'||U32'_pad0'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_start'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_end'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'metrics'||SYM#tag-timeval#'t0'||S16'ip'||U16'_pad1'||U32'tn'||U32'tmax'||U32'dmax'||S16'location'||S16'tags'||U32'reported'||U32'started'||S16'stringslen'||ARR1572{S8}_S8_'strings'||U48'_pad2'|]#'host'||SYM#tag-#anon#ST[EN#anon_enum_ROOT_NODE=0_GRID_NODE=1_CLUSTER_NODE=2_HOST_NODE=3_METRIC_NODE=4#{U32}_U32_'id'||U32'_pad0'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#}_SYM#tag-#anon#ST[*{V}_V_'data'||U32'size'||U32'_pad0'|]#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_start'||*{S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32}_S32(*{SYM#tag-Generic_type#}_SYM#tag-Generic_type#_|*{SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#}_SYM#tag-#anon#ST[S32'fd'||BF{U32}_U32_'valid'||BF{U32}_U32_'http'||BF{U6}_U6_'_bit_field_pad0'||U24'_pad0'||SYM#tag-sockaddr_in#'addr'||EN#anon_enum_NO_FILTER=0_SUMMARY=1#{U32}_U32_'filter'||U32'_pad1'||SYM#tag-timeval#'now'|]#_|*{V}_V_)->S32_'report_end'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'leaf'||SYM#tag-timeval#'t0'||SYM#tag-#anon#UN[F64'd'||S32'str'|]#'val'||S16'name'||S16'valstr'||S16'precision'||U16'_pad1'||U32'num'||S16'type'||S16'units'||U32'tn'||U32'tmax'||U32'dmax'||S16'slope'||S16'source'||S16'ednameslen'||S16'edvalueslen'||ARR32{S16}_S16_'ednames'||ARR32{S16}_S16_'edvalues'||S16'stringslen'||ARR1572{S8}_S8_'strings'||U48'_pad2'|]#'metric'||*{SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#}_SYM#tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]#_'root'||SYM#tag-timeval#'now'|]
// file process_xml.c line 38
struct anonymous_35;

// tag-#anon#ST[S32'sockfd'||SYM#tag-sockaddr#'sa'||U32'ref_count'|]
// file ../lib/net.h line 36
struct anonymous_2;

// tag-#anon#ST[S64'value'||*{S8}_S8_'str'||*{*{S8}_S8_}_*{S8}_S8__'list'|]
// file ../lib/dotconf.h line 167
struct anonymous_3;

// tag-#anon#ST[SYM#tag-timeval#'last_read'||F32'thresh'||U32'_pad0'||*{S8}_S8_'name'||*{S8}_S8_'buffer'||U64'buffersize'|]
// file ../include/gm_file.h line 11
struct anonymous_37;

// tag-#anon#ST[U32'metadata_len'||U32'_pad0'||*{SYM#tag-Ganglia_extra_data#}_SYM#tag-Ganglia_extra_data#_'metadata_val'|]
// file gm_protocol.h line 45
struct anonymous_27;

// tag-#anon#ST[U64'size'||*{*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#_}_*{SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#}_SYM#tag-#anon#ST[*{SYM#tag-bucket#}_SYM#tag-bucket#_'bucket'||SYM#tag-rdwr_var#'rwlock'|]#__'node'||S32'flags'||U32'_pad0'|]
// file ../lib/hash.h line 40
struct anonymous_8;

// tag-#anon#UN[*{S8}_S8_'ifcu_buf'||*{SYM#tag-ifreq#}_SYM#tag-ifreq#_'ifcu_req'|]
// file /usr/include/net/if.h line 179
union anonymous_26;

// tag-#anon#UN[ARR16{S8}_S8_'ifrn_name'|]
// file /usr/include/net/if.h line 130
union anonymous_24;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_28;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_21;

// tag-#anon#UN[F64'd'||S32'str'|]
// file ./gmetad.h line 126
union anonymous_17;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_13;

// tag-#anon#UN[SYM#tag-Ganglia_gmetric_ushort#'gu_short'||SYM#tag-Ganglia_gmetric_short#'gs_short'||SYM#tag-Ganglia_gmetric_int#'gs_int'||SYM#tag-Ganglia_gmetric_uint#'gu_int'||SYM#tag-Ganglia_gmetric_string#'gstr'||SYM#tag-Ganglia_gmetric_float#'gf'||SYM#tag-Ganglia_gmetric_double#'gd'|]
// file gm_protocol.h line 143
union anonymous_30;

// tag-#anon#UN[SYM#tag-Ganglia_metadatadef#'gfull'||SYM#tag-Ganglia_metadatareq#'grequest'|]
// file gm_protocol.h line 134
union anonymous_29;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}_S8_'ifru_slave'||ARR16{S8}_S8_'ifru_newname'||*{S8}_S8_'ifru_data'|]
// file /usr/include/net/if.h line 135
union anonymous_25;

// tag-#anon#UN[SYM#tag-sockaddr_in#'sin'||SYM#tag-sockaddr_in6#'sin6'||SYM#tag-sockaddr_storage#'sas'|]
// file /usr/include/apr-1.0/apr_network_io.h line 238
union anonymous_32;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_0;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]_transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_19;

// tag-Ganglia_25metric
// file gm_protocol.h line 155
struct Ganglia_25metric;

// tag-Ganglia_extra_data
// file gm_protocol.h line 32
struct Ganglia_extra_data;

// tag-Ganglia_gmetric_double
// file gm_protocol.h line 112
struct Ganglia_gmetric_double;

// tag-Ganglia_gmetric_float
// file gm_protocol.h line 105
struct Ganglia_gmetric_float;

// tag-Ganglia_gmetric_int
// file gm_protocol.h line 84
struct Ganglia_gmetric_int;

// tag-Ganglia_gmetric_short
// file gm_protocol.h line 77
struct Ganglia_gmetric_short;

// tag-Ganglia_gmetric_string
// file gm_protocol.h line 98
struct Ganglia_gmetric_string;

// tag-Ganglia_gmetric_uint
// file gm_protocol.h line 91
struct Ganglia_gmetric_uint;

// tag-Ganglia_gmetric_ushort
// file gm_protocol.h line 70
struct Ganglia_gmetric_ushort;

// tag-Ganglia_gmond_config
// file ../include/ganglia.h line 29
struct Ganglia_gmond_config;

// tag-Ganglia_metadata_message
// file gm_protocol.h line 38
struct Ganglia_metadata_message;

// tag-Ganglia_metadata_msg
// file gm_protocol.h line 132
struct Ganglia_metadata_msg;

// tag-Ganglia_metadatadef
// file gm_protocol.h line 59
struct Ganglia_metadatadef;

// tag-Ganglia_metadatareq
// file gm_protocol.h line 65
struct Ganglia_metadatareq;

// tag-Ganglia_metric
// file ../include/ganglia.h line 32
struct Ganglia_metric;

// tag-Ganglia_metric_id
// file gm_protocol.h line 52
struct Ganglia_metric_id;

// tag-Ganglia_msg_formats
// file gm_protocol.h line 119
enum Ganglia_msg_formats { gmetadata_full=128, gmetric_ushort=129, gmetric_short=130, gmetric_int=131, gmetric_uint=132, gmetric_string=133, gmetric_float=134, gmetric_double=135, gmetadata_request=136 };

// tag-Ganglia_pool
// file ../include/ganglia.h line 28
struct Ganglia_pool;

// tag-Ganglia_udp_send_channels
// file ../include/ganglia.h line 30
struct Ganglia_udp_send_channels;

// tag-Ganglia_value_msg
// file gm_protocol.h line 141
struct Ganglia_value_msg;

// tag-Ganglia_value_types
// file gm_protocol.h line 20
enum Ganglia_value_types { GANGLIA_VALUE_UNKNOWN=0, GANGLIA_VALUE_STRING=1, GANGLIA_VALUE_UNSIGNED_SHORT=2, GANGLIA_VALUE_SHORT=3, GANGLIA_VALUE_UNSIGNED_INT=4, GANGLIA_VALUE_INT=5, GANGLIA_VALUE_FLOAT=6, GANGLIA_VALUE_DOUBLE=7 };

// tag-Generic_type
// file ./gmetad.h line 146
struct Generic_type;

// tag-XDR
// file /usr/include/rpc/xdr.h line 109
struct XDR;

// tag-XML_Error
// file /usr/include/expat.h line 54
enum XML_Error { XML_ERROR_NONE=0, XML_ERROR_NO_MEMORY=1, XML_ERROR_SYNTAX=2, XML_ERROR_NO_ELEMENTS=3, XML_ERROR_INVALID_TOKEN=4, XML_ERROR_UNCLOSED_TOKEN=5, XML_ERROR_PARTIAL_CHAR=6, XML_ERROR_TAG_MISMATCH=7, XML_ERROR_DUPLICATE_ATTRIBUTE=8, XML_ERROR_JUNK_AFTER_DOC_ELEMENT=9, XML_ERROR_PARAM_ENTITY_REF=10, XML_ERROR_UNDEFINED_ENTITY=11, XML_ERROR_RECURSIVE_ENTITY_REF=12, XML_ERROR_ASYNC_ENTITY=13, XML_ERROR_BAD_CHAR_REF=14, XML_ERROR_BINARY_ENTITY_REF=15, XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF=16, XML_ERROR_MISPLACED_XML_PI=17, XML_ERROR_UNKNOWN_ENCODING=18, XML_ERROR_INCORRECT_ENCODING=19, XML_ERROR_UNCLOSED_CDATA_SECTION=20, XML_ERROR_EXTERNAL_ENTITY_HANDLING=21, XML_ERROR_NOT_STANDALONE=22, XML_ERROR_UNEXPECTED_STATE=23, XML_ERROR_ENTITY_DECLARED_IN_PE=24, XML_ERROR_FEATURE_REQUIRES_XML_DTD=25, XML_ERROR_CANT_CHANGE_FEATURE_ONCE_PARSING=26, XML_ERROR_UNBOUND_PREFIX=27, XML_ERROR_UNDECLARING_PREFIX=28, XML_ERROR_INCOMPLETE_PE=29, XML_ERROR_XML_DECL=30, XML_ERROR_TEXT_DECL=31, XML_ERROR_PUBLICID=32, XML_ERROR_SUSPENDED=33, XML_ERROR_NOT_SUSPENDED=34, XML_ERROR_ABORTED=35, XML_ERROR_FINISHED=36, XML_ERROR_SUSPEND_PE=37, XML_ERROR_RESERVED_PREFIX_XML=38, XML_ERROR_RESERVED_PREFIX_XMLNS=39, XML_ERROR_RESERVED_NAMESPACE_URI=40 };

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

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_llist_entry
// file ../lib/llist.h line 25
struct _llist_entry;

// tag-apr_allocator_t
// file /usr/include/apr-1.0/apr_allocator.h line 41
struct apr_allocator_t;

// tag-apr_array_header_t
// file /usr/include/apr-1.0/apr_tables.h line 59
struct apr_array_header_t;

// tag-apr_file_t
// file /usr/include/apr-1.0/apr_file_info.h line 212
struct apr_file_t;

// tag-apr_pool_t
// file /usr/include/apr-1.0/apr_pools.h line 60
struct apr_pool_t;

// tag-apr_sockaddr_t
// file /usr/include/apr-1.0/apr_network_io.h line 209
struct apr_sockaddr_t;

// tag-apr_socket_t
// file /usr/include/apr-1.0/apr_network_io.h line 193
struct apr_socket_t;

// tag-apr_table_entry_t
// file /usr/include/apr-1.0/apr_tables.h line 78
struct apr_table_entry_t;

// tag-apr_table_t
// file /usr/include/apr-1.0/apr_tables.h line 56
struct apr_table_t;

// tag-bucket
// file ../lib/hash.h line 25
struct bucket;

// tag-callback_types
// file ./dotconf.h line 107
enum callback_types { ERROR_HANDLER=1, CONTEXT_CHECKER=2 };

// tag-cfg_defvalue_t
// file /usr/include/confuse.h line 102
struct cfg_defvalue_t;

// tag-cfg_opt_t
// file /usr/include/confuse.h line 100
struct cfg_opt_t;

// tag-cfg_t
// file /usr/include/confuse.h line 101
struct cfg_t;

// tag-cfg_type_t
// file /usr/include/confuse.h line 68
enum cfg_type_t { CFGT_NONE=0, CFGT_INT=1, CFGT_FLOAT=2, CFGT_STR=3, CFGT_BOOL=4, CFGT_SEC=5, CFGT_FUNC=6, CFGT_PTR=7 };

// tag-cfg_value_t
// file /usr/include/confuse.h line 99
union cfg_value_t;

// tag-cleanup_arg
// file cleanup.c line 51
struct cleanup_arg;

// tag-cmdline_parser_params
// file cmdline.h line 61
struct cmdline_parser_params;

// tag-command_t
// file ../lib/dotconf.h line 117
struct command_t;

// tag-configfile_t
// file ../lib/dotconf.h line 114
struct configfile_t;

// tag-configoption_t
// file ../lib/dotconf.h line 115
struct configoption_t;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-ganglia_slope
// file ../include/ganglia.h line 18
enum ganglia_slope { GANGLIA_SLOPE_ZERO=0, GANGLIA_SLOPE_POSITIVE=1, GANGLIA_SLOPE_NEGATIVE=2, GANGLIA_SLOPE_BOTH=3, GANGLIA_SLOPE_UNSPECIFIED=4, GANGLIA_SLOPE_DERIVATIVE=5 };

// tag-gengetopt_args_info
// file ./cmdline.h line 38
struct gengetopt_args_info;

// tag-gexec_host_t
// file ../include/ganglia_gexec.h line 9
struct gexec_host_t;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-ifconf
// file /usr/include/net/if.h line 176
struct ifconf;

// tag-ifmap
// file /usr/include/net/if.h line 111
struct ifmap;

// tag-ifreq
// file /usr/include/net/if.h line 126
struct ifreq;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-internal_state
// file /usr/include/zlib.h line 83
struct internal_state;

// tag-ip_mreq
// file /usr/include/netinet/in.h line 264
struct ip_mreq;

// tag-ipv6_mreq
// file /usr/include/netinet/in.h line 288
struct ipv6_mreq;

// tag-option
// file ../lib/getopt.h line 94
struct option;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rdwr_var
// file ../lib/rdwr.h line 21
struct rdwr_var;

// tag-request_context
// file server_priv.h line 4
struct request_context;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_at
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_at;

// tag-sockaddr_ax25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ax25;

// tag-sockaddr_dl
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_dl;

// tag-sockaddr_eon
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_eon;

// tag-sockaddr_in
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in6;

// tag-sockaddr_inarp
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_inarp;

// tag-sockaddr_ipx
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ipx;

// tag-sockaddr_iso
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_iso;

// tag-sockaddr_ns
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ns;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-type_tag
// file ./gmetad.h line 31
struct type_tag;

// tag-xdr_op
// file /usr/include/rpc/xdr.h line 81
enum xdr_op { XDR_ENCODE=0, XDR_DECODE=1, XDR_FREE=2 };

// tag-xdr_ops
// file /usr/include/rpc/xdr.h line 113
struct xdr_ops;

// tag-xml_tag
// file gmetad.h line 101
struct xml_tag;

// tag-z_stream_s
// file /usr/include/zlib.h line 85
struct z_stream_s;

#ifndef NULL
#define NULL ((void*)0)
#endif

// Ganglia_cfg_include
// file libgmond.c line 782
static signed int Ganglia_cfg_include(struct cfg_t *cfg, struct cfg_opt_t *opt, signed int argc, const char **argv);
// Ganglia_default_collection_groups
// file libgmond.c line 198
char * Ganglia_default_collection_groups(void);
// Ganglia_gmond_config_create
// file libgmond.c line 264
struct Ganglia_gmond_config * Ganglia_gmond_config_create(char *path, signed int fallback_to_default);
// Ganglia_metadata_add
// file libgmond.c line 681
void Ganglia_metadata_add(struct Ganglia_metric *gmetric, char *name, char *value);
// Ganglia_metadata_send
// file libgmond.c line 443
signed int Ganglia_metadata_send(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels);
// Ganglia_metadata_send_real
// file libgmond.c line 449
signed int Ganglia_metadata_send_real(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels, char *override_string);
// Ganglia_metric_create
// file libgmond.c line 415
struct Ganglia_metric * Ganglia_metric_create(struct Ganglia_pool *parent_pool);
// Ganglia_metric_destroy
// file libgmond.c line 599
void Ganglia_metric_destroy(struct Ganglia_metric *gmetric);
// Ganglia_metric_send
// file libgmond.c line 590
signed int Ganglia_metric_send(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels);
// Ganglia_metric_set
// file libgmond.c line 638
signed int Ganglia_metric_set(struct Ganglia_metric *gmetric, char *name, char *value, char *type, char *units, unsigned int slope, unsigned int tmax, unsigned int dmax);
// Ganglia_pool_create
// file libgmond.c line 233
struct Ganglia_pool * Ganglia_pool_create(struct Ganglia_pool *p);
// Ganglia_pool_destroy
// file libgmond.c line 258
void Ganglia_pool_destroy(struct Ganglia_pool *pool);
// Ganglia_udp_send_channels_create
// file libgmond.c line 308
struct Ganglia_udp_send_channels * Ganglia_udp_send_channels_create(struct Ganglia_pool *p, struct Ganglia_gmond_config *config);
// Ganglia_udp_send_message
// file libgmond.c line 390
signed int Ganglia_udp_send_message(struct Ganglia_udp_send_channels *channels, char *buf, signed int len);
// Ganglia_value_send
// file libgmond.c line 584
signed int Ganglia_value_send(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels);
// Ganglia_value_send_real
// file libgmond.c line 522
signed int Ganglia_value_send_real(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels, char *override_string);
// RRD_create
// file rrd_helpers.c line 73
static signed int RRD_create(char *rrd, signed int summary, unsigned int step, unsigned int process_time, enum ganglia_slope slope);
// RRD_update
// file rrd_helpers.c line 39
static signed int RRD_update(char *rrd, const char *sum, const char *num, unsigned int process_time);
// XML_ErrorString
// file /usr/include/expat.h line 990
const char * XML_ErrorString(enum XML_Error);
// XML_GetBuffer
// file /usr/include/expat.h line 781
void * XML_GetBuffer(struct XML_ParserStruct *, signed int);
// XML_GetCurrentLineNumber
// file /usr/include/expat.h line 940
unsigned long int XML_GetCurrentLineNumber(struct XML_ParserStruct *);
// XML_GetErrorCode
// file /usr/include/expat.h line 922
enum XML_Error XML_GetErrorCode(struct XML_ParserStruct *);
// XML_Parse
// file /usr/include/expat.h line 778
enum XML_Status XML_Parse(struct XML_ParserStruct *, const char *, signed int, signed int);
// XML_ParseBuffer
// file /usr/include/expat.h line 784
enum XML_Status XML_ParseBuffer(struct XML_ParserStruct *, signed int, signed int);
// XML_ParserCreate
// file /usr/include/expat.h line 206
struct XML_ParserStruct * XML_ParserCreate(const char *);
// XML_ParserFree
// file /usr/include/expat.h line 986
void XML_ParserFree(struct XML_ParserStruct *);
// XML_SetElementHandler
// file /usr/include/expat.h line 534
void XML_SetElementHandler(struct XML_ParserStruct *, void (*)(void *, const char *, const char **), void (*)(void *, const char *));
// XML_SetUserData
// file /usr/include/expat.h line 671
void XML_SetUserData(struct XML_ParserStruct *, void *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// addstring
// file gmetad.c line 100
signed int addstring(char *strings, signed int *edge, const char *s);
// applicable
// file server.c line 289
signed int applicable(enum anonymous_22 filter, struct Generic_type *node);
// applyfilter
// file server.c line 309
signed int applyfilter(struct anonymous_16 *client, struct Generic_type *node);
// apr_array_make
// file /usr/include/apr-1.0/apr_tables.h line 121
struct apr_array_header_t * apr_array_make(struct apr_pool_t *, signed int, signed int);
// apr_array_push
// file /usr/include/apr-1.0/apr_tables.h line 131
void * apr_array_push(struct apr_array_header_t *);
// apr_file_close
// file /usr/include/apr-1.0/apr_file_io.h line 258
signed int apr_file_close(struct apr_file_t *);
// apr_file_mktemp
// file /usr/include/apr-1.0/apr_file_io.h line 951
signed int apr_file_mktemp(struct apr_file_t **, char *, signed int, struct apr_pool_t *);
// apr_file_puts
// file /usr/include/apr-1.0/apr_file_io.h line 593
signed int apr_file_puts(const char *, struct apr_file_t *);
// apr_gethostname
// file /usr/include/apr-1.0/apr_network_io.h line 459
signed int apr_gethostname(char *, signed int, struct apr_pool_t *);
// apr_inet_ntop
// file apr_net.c line 41
const char * apr_inet_ntop(signed int, const void *, char *, unsigned long int);
// apr_initialize
// file /usr/include/apr-1.0/apr_general.h line 177
signed int apr_initialize(void);
// apr_mcast_hops
// file /usr/include/apr-1.0/apr_network_io.h line 850
signed int apr_mcast_hops(struct apr_socket_t *, unsigned char);
// apr_os_sock_get
// file /usr/include/apr-1.0/apr_portable.h line 240
signed int apr_os_sock_get(signed int *, struct apr_socket_t *);
// apr_palloc
// file /usr/include/apr-1.0/apr_pools.h line 430
void * apr_palloc(struct apr_pool_t *, unsigned long int);
// apr_pool_create_ex
// file /usr/include/apr-1.0/apr_pools.h line 196
signed int apr_pool_create_ex(struct apr_pool_t **, struct apr_pool_t *, signed int (*)(signed int), struct apr_allocator_t *);
// apr_pool_destroy
// file /usr/include/apr-1.0/apr_pools.h line 395
void apr_pool_destroy(struct apr_pool_t *);
// apr_psprintf
// file /usr/include/apr-1.0/apr_strings.h line 182
char * apr_psprintf(struct apr_pool_t *, const char *, ...);
// apr_pstrcat
// file /usr/include/apr-1.0/apr_strings.h line 147
char * apr_pstrcat(struct apr_pool_t *, ...);
// apr_pstrdup
// file /usr/include/apr-1.0/apr_strings.h line 95
char * apr_pstrdup(struct apr_pool_t *, const char *);
// apr_sleep
// file /usr/include/apr-1.0/apr_time.h line 181
void apr_sleep(signed long int);
// apr_sockaddr_info_get
// file /usr/include/apr-1.0/apr_network_io.h line 396
signed int apr_sockaddr_info_get(struct apr_sockaddr_t **, const char *, signed int, unsigned short int, signed int, struct apr_pool_t *);
// apr_sockaddr_ip_buffer_get
// file apr_net.c line 46
signed int apr_sockaddr_ip_buffer_get(char *addr, signed int len, struct apr_sockaddr_t *sockaddr);
// apr_sockaddr_vars_set
// file apr_net.c line 15
void apr_sockaddr_vars_set(struct apr_sockaddr_t *, signed int, unsigned short int);
// apr_socket_addr_get
// file /usr/include/apr-1.0/apr_network_io.h line 690
signed int apr_socket_addr_get(struct apr_sockaddr_t **, enum anonymous_33, struct apr_socket_t *);
// apr_socket_bind
// file /usr/include/apr-1.0/apr_network_io.h line 321
signed int apr_socket_bind(struct apr_socket_t *, struct apr_sockaddr_t *);
// apr_socket_close
// file /usr/include/apr-1.0/apr_network_io.h line 312
signed int apr_socket_close(struct apr_socket_t *);
// apr_socket_connect
// file /usr/include/apr-1.0/apr_network_io.h line 355
signed int apr_socket_connect(struct apr_socket_t *, struct apr_sockaddr_t *);
// apr_socket_create
// file /usr/include/apr-1.0/apr_network_io.h line 287
signed int apr_socket_create(struct apr_socket_t **, signed int, signed int, signed int, struct apr_pool_t *);
// apr_socket_listen
// file /usr/include/apr-1.0/apr_network_io.h line 331
signed int apr_socket_listen(struct apr_socket_t *, signed int);
// apr_socket_opt_set
// file /usr/include/apr-1.0/apr_network_io.h line 626
signed int apr_socket_opt_set(struct apr_socket_t *, signed int, signed int);
// apr_socket_send
// file /usr/include/apr-1.0/apr_network_io.h line 498
signed int apr_socket_send(struct apr_socket_t *, const char *, unsigned long int *);
// apr_strnatcasecmp
// file /usr/include/apr-1.0/apr_strings.h line 87
signed int apr_strnatcasecmp(const char *, const char *);
// apr_table_add
// file /usr/include/apr-1.0/apr_tables.h line 347
void apr_table_add(struct apr_table_t *, const char *, const char *);
// apr_table_elts
// file /usr/include/apr-1.0/apr_tables.h line 98
const struct apr_array_header_t * apr_table_elts(const struct apr_table_t *);
// apr_table_make
// file /usr/include/apr-1.0/apr_tables.h line 232
struct apr_table_t * apr_table_make(struct apr_pool_t *, signed int);
// apr_temp_dir_get
// file /usr/include/apr-1.0/apr_file_io.h line 964
signed int apr_temp_dir_get(const char **, struct apr_pool_t *);
// apr_terminate
// file /usr/include/apr-1.0/apr_general.h line 205
void apr_terminate(void);
// apr_time_now
// file /usr/include/apr-1.0/apr_time.h line 88
signed long int apr_time_now(void);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// atof
// file /usr/include/stdlib.h line 144
extern double atof(const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// authority_mode
// file process_xml.c line 60
static signed int authority_mode(struct anonymous_35 *xmldata);
// become_a_nobody
// file ../lib/become_a_nobody.h line 4
void become_a_nobody(const char *username);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// build_default_gmond_configuration
// file libgmond.c line 204
void build_default_gmond_configuration(struct Ganglia_pool *p);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cb_RRAs
// file conf.c line 63
static const char * cb_RRAs(struct command_t *cmd, void *ctx);
// cb_all_trusted
// file conf.c line 33
static const char * cb_all_trusted(struct command_t *cmd, void *ctx);
// cb_authority
// file conf.c line 23
static const char * cb_authority(struct command_t *cmd, void *ctx);
// cb_carbon_port
// file conf.c line 265
static const char * cb_carbon_port(struct command_t *cmd, void *ctx);
// cb_carbon_protocol
// file conf.c line 273
static const char * cb_carbon_protocol(struct command_t *cmd, void *ctx);
// cb_carbon_server
// file conf.c line 257
static const char * cb_carbon_server(struct command_t *cmd, void *ctx);
// cb_carbon_timeout
// file conf.c line 281
static const char * cb_carbon_timeout(struct command_t *cmd, void *ctx);
// cb_case_sensitive_hostnames
// file conf.c line 250
static const char * cb_case_sensitive_hostnames(struct command_t *cmd, void *ctx);
// cb_data_source
// file conf.c line 75
static const char * cb_data_source(struct command_t *cmd, void *ctx);
// cb_debug_level
// file conf.c line 169
static const char * cb_debug_level(struct command_t *cmd, void *ctx);
// cb_graphite_path
// file conf.c line 305
static const char * cb_graphite_path(struct command_t *cmd, void *ctx);
// cb_graphite_prefix
// file conf.c line 297
static const char * cb_graphite_prefix(struct command_t *cmd, void *ctx);
// cb_gridname
// file conf.c line 15
static const char * cb_gridname(struct command_t *cmd, void *ctx);
// cb_interactive_port
// file conf.c line 185
static const char * cb_interactive_port(struct command_t *cmd, void *ctx);
// cb_memcached_parameters
// file conf.c line 289
static const char * cb_memcached_parameters(struct command_t *cmd, void *ctx);
// cb_rrd_rootdir
// file conf.c line 209
static const char * cb_rrd_rootdir(struct command_t *cmd, void *ctx);
// cb_scalable
// file conf.c line 232
static const char * cb_scalable(struct command_t *cmd, void *ctx);
// cb_server_threads
// file conf.c line 193
static const char * cb_server_threads(struct command_t *cmd, void *ctx);
// cb_setuid
// file conf.c line 225
static const char * cb_setuid(struct command_t *cmd, void *ctx);
// cb_setuid_username
// file conf.c line 217
static const char * cb_setuid_username(struct command_t *cmd, void *ctx);
// cb_trusted_hosts
// file conf.c line 41
static const char * cb_trusted_hosts(struct command_t *cmd, void *ctx);
// cb_umask
// file conf.c line 201
static const char * cb_umask(struct command_t *cmd, void *ctx);
// cb_unsummarized_metrics
// file conf.c line 313
static const char * cb_unsummarized_metrics(struct command_t *cmd, void *ctx);
// cb_write_rrds
// file conf.c line 241
static const char * cb_write_rrds(struct command_t *cmd, void *ctx);
// cb_xml_port
// file conf.c line 177
static const char * cb_xml_port(struct command_t *cmd, void *ctx);
// cfg_error
// file /usr/include/confuse.h line 598
void cfg_error(struct cfg_t *, const char *, ...);
// cfg_getbool
// file /usr/include/confuse.h line 704
enum anonymous_14 cfg_getbool(struct cfg_t *, const char *);
// cfg_getint
// file /usr/include/confuse.h line 625
signed long int cfg_getint(struct cfg_t *, const char *);
// cfg_getnsec
// file /usr/include/confuse.h line 736
struct cfg_t * cfg_getnsec(struct cfg_t *, const char *, unsigned int);
// cfg_getstr
// file /usr/include/confuse.h line 677
char * cfg_getstr(struct cfg_t *, const char *);
// cfg_include
// file /usr/include/confuse.h line 822
signed int cfg_include(struct cfg_t *, struct cfg_opt_t *, signed int, const char **);
// cfg_init
// file /usr/include/confuse.h line 538
struct cfg_t * cfg_init(struct cfg_opt_t *, signed int);
// cfg_parse
// file /usr/include/confuse.h line 553
signed int cfg_parse(struct cfg_t *, const char *);
// cfg_parse_buf
// file /usr/include/confuse.h line 575
signed int cfg_parse_buf(struct cfg_t *, const char *);
// cfg_size
// file /usr/include/confuse.h line 791
unsigned int cfg_size(struct cfg_t *, const char *);
// cfg_tilde_expand
// file /usr/include/confuse.h line 831
char * cfg_tilde_expand(const char *);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// check_value
// file libgmond.c line 608
signed int check_value(char *type, char *value);
// cleanup_metric
// file cleanup.c line 60
static signed int cleanup_metric(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// cleanup_node
// file cleanup.c line 80
static signed int cleanup_node(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// cleanup_source
// file cleanup.c line 121
static signed int cleanup_source(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// cleanup_thread
// file cleanup.c line 187
void * cleanup_thread(void *arg);
// clear_args
// file cmdline.c line 72
static void clear_args(struct gengetopt_args_info *args_info);
// clear_given
// file cmdline.c line 62
static void clear_given(struct gengetopt_args_info *args_info);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// cluster_dead_hosts_sort
// file ganglia.c line 241
static signed int cluster_dead_hosts_sort(struct _llist_entry *a, struct _llist_entry *b);
// cmdline_parser
// file ./cmdline.h line 84
signed int cmdline_parser(signed int argc, char **argv, struct gengetopt_args_info *args_info);
// cmdline_parser2
// file cmdline.c line 289
signed int cmdline_parser2(signed int argc, char **argv, struct gengetopt_args_info *args_info, signed int override, signed int initialize, signed int check_required);
// cmdline_parser_dump
// file cmdline.c line 199
signed int cmdline_parser_dump(struct _IO_FILE *outfile, struct gengetopt_args_info *args_info);
// cmdline_parser_ext
// file cmdline.c line 273
signed int cmdline_parser_ext(signed int argc, char **argv, struct gengetopt_args_info *args_info, struct cmdline_parser_params *params);
// cmdline_parser_file_save
// file cmdline.c line 226
signed int cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info);
// cmdline_parser_free
// file cmdline.c line 246
void cmdline_parser_free(struct gengetopt_args_info *args_info);
// cmdline_parser_init
// file cmdline.c line 130
void cmdline_parser_init(struct gengetopt_args_info *args_info);
// cmdline_parser_internal
// file cmdline.c line 433
static signed int cmdline_parser_internal(signed int argc, char **argv, struct gengetopt_args_info *args_info, struct cmdline_parser_params *params, const char *additional_error);
// cmdline_parser_params_create
// file cmdline.c line 151
struct cmdline_parser_params * cmdline_parser_params_create(void);
// cmdline_parser_params_init
// file cmdline.c line 138
void cmdline_parser_params_init(struct cmdline_parser_params *params);
// cmdline_parser_print_help
// file cmdline.c line 121
void cmdline_parser_print_help(void);
// cmdline_parser_print_version
// file cmdline.c line 98
void cmdline_parser_print_version(void);
// cmdline_parser_release
// file cmdline.c line 171
static void cmdline_parser_release(struct gengetopt_args_info *args_info);
// cmdline_parser_required
// file cmdline.c line 312
signed int cmdline_parser_required(struct gengetopt_args_info *args_info, const char *prog_name);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// copy_word
// file dotconf.c line 101
static void copy_word(char **dest, char **src, signed int max, char term);
// create_mcast_client
// file apr_net.c line 441
struct apr_socket_t * create_mcast_client(struct apr_pool_t *context, char *mcast_ip, unsigned short int port, signed int ttl, const char *interface, char *bind_address, signed int bind_hostname);
// create_mcast_server
// file apr_net.c line 456
struct apr_socket_t * create_mcast_server(struct apr_pool_t *context, signed int family, char *mcast_ip, unsigned short int port, char *bind_addr, char *interface);
// create_net_client
// file apr_net.c line 84
static struct apr_socket_t * create_net_client(struct apr_pool_t *context, signed int type, char *host, unsigned short int port, const char *interface, char *bind_address, signed int bind_hostname);
// create_net_server
// file apr_net.c line 164
static struct apr_socket_t * create_net_server(struct apr_pool_t *context, signed int ofamily, signed int type, unsigned short int port, char *bind_addr, signed int blocking);
// create_tcp_server
// file apr_net.c line 246
struct apr_socket_t * create_tcp_server(struct apr_pool_t *context, signed int family, unsigned short int port, char *bind_addr, char *interface, signed int blocking, signed int gzip_output);
// create_udp_client
// file apr_net.c line 158
struct apr_socket_t * create_udp_client(struct apr_pool_t *context, char *host, unsigned short int port, const char *interface, char *bind_address, signed int bind_hostname);
// create_udp_server
// file apr_net.c line 239
struct apr_socket_t * create_udp_server(struct apr_pool_t *context, signed int family, unsigned short int port, char *bind_addr);
// cstr_to_slope
// file ../include/ganglia.h line 67
enum ganglia_slope cstr_to_slope(const char *str);
// daemon_init
// file ./daemon_init.h line 7
void daemon_init(const char *pname, signed int facility, unsigned int rrd_umask);
// data_thread
// file data_thread.c line 23
void * data_thread(void *arg);
// datum_dup
// file hash.c line 30
static struct anonymous_7 * datum_dup(struct anonymous_7 *src);
// datum_free
// file ../lib/hash.h line 62
void datum_free(struct anonymous_7 *datum);
// datum_new
// file ../lib/hash.h line 61
struct anonymous_7 * datum_new(void *data, unsigned long int size);
// debug_msg
// file ../include/gm_msg.h line 16
void debug_msg(const char *format, ...);
// do_root_summary
// file gmetad.c line 192
static signed int do_root_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// dotconf_callback
// file dotconf.c line 244
void dotconf_callback(struct configfile_t *configfile, enum callback_types type, const char * (*callback)(struct command_t *, void *));

//

// dotconf_cb_include
// file dotconf.c line 1298
static const char * dotconf_cb_include(struct command_t *cmd, void *ctx);
// dotconf_cb_includepath
// file dotconf.c line 1378
static const char * dotconf_cb_includepath(struct command_t *cmd, void *ctx);
// dotconf_cleanup
// file ../lib/dotconf.h line 183
void dotconf_cleanup(struct configfile_t *configfile);
// dotconf_command_loop
// file ../lib/dotconf.h line 186
signed int dotconf_command_loop(struct configfile_t *configfile);
// dotconf_command_loop_until_error
// file dotconf.c line 680
const char * dotconf_command_loop_until_error(struct configfile_t *configfile);
// dotconf_continue_line
// file dotconf.c line 259
signed int dotconf_continue_line(char *buffer, unsigned long int length);
// dotconf_create
// file ../lib/dotconf.h line 180
struct configfile_t * dotconf_create(char *fname, const struct configoption_t *options, void *context, unsigned long int flags);
// dotconf_find_command
// file dotconf.c line 462
struct configoption_t * dotconf_find_command(struct configfile_t *configfile, const char *command);
// dotconf_find_wild_card
// file dotconf.c line 834
signed int dotconf_find_wild_card(char *filename, char *wildcard, char **path, char **pre, char **ext);
// dotconf_free_command
// file dotconf.c line 580
void dotconf_free_command(struct command_t *command);
// dotconf_get_here_document
// file dotconf.c line 317
char * dotconf_get_here_document(struct configfile_t *configfile, const char *delimit);
// dotconf_get_next_line
// file ../lib/dotconf.h line 195
signed int dotconf_get_next_line(char *buffer, unsigned long int bufsize, struct configfile_t *configfile);
// dotconf_handle_command
// file dotconf.c line 592
const char * dotconf_handle_command(struct configfile_t *configfile, char *buffer);
// dotconf_handle_question_mark
// file dotconf.c line 976
signed int dotconf_handle_question_mark(struct command_t *cmd, char *path, char *pre, char *ext);
// dotconf_handle_star
// file dotconf.c line 1114
signed int dotconf_handle_star(struct command_t *cmd, char *path, char *pre, char *ext);
// dotconf_handle_wild_card
// file dotconf.c line 790
signed int dotconf_handle_wild_card(struct command_t *cmd, char wild_card, char *path, char *pre, char *ext);
// dotconf_invoke_command
// file dotconf.c line 366
const char * dotconf_invoke_command(struct configfile_t *configfile, struct command_t *cmd);
// dotconf_is_wild_card
// file dotconf.c line 771
signed int dotconf_is_wild_card(char value);
// dotconf_question_mark_match
// file dotconf.c line 916
signed int dotconf_question_mark_match(char *dir_name, char *pre, char *ext);
// dotconf_read_arg
// file dotconf.c line 374
char * dotconf_read_arg(struct configfile_t *configfile, char **line);
// dotconf_register_options
// file dotconf.c line 220
void dotconf_register_options(struct configfile_t *configfile, const struct configoption_t *options);
// dotconf_set_command
// file dotconf.c line 490
void dotconf_set_command(struct configfile_t *configfile, const struct configoption_t *option, char *args, struct command_t *cmd);
// dotconf_star_match
// file dotconf.c line 945
signed int dotconf_star_match(char *dir_name, char *pre, char *ext);
// dotconf_strcmp_from_back
// file dotconf.c line 896
signed int dotconf_strcmp_from_back(const char *s1, const char *s2);
// dotconf_substitute_env
// file dotconf.c line 123
char * dotconf_substitute_env(struct configfile_t *configfile, char *str);
// dotconf_warning
// file dotconf.c line 196
signed int dotconf_warning(struct configfile_t *configfile, signed int type, unsigned long int errnum, const char *fmt, ...);
// dotconf_wild_card_cleanup
// file dotconf.c line 817
void dotconf_wild_card_cleanup(char *path, char *pre);
// end
// file process_xml.c line 1218
static void end(void *data, const char *el);
// end_link1
// file ganglia.c line 141
static void end_link1(void *data_link1, const char *el_link1);
// endElement_CLUSTER
// file process_xml.c line 1175
static signed int endElement_CLUSTER(void *data, const char *el);
// endElement_GRID
// file process_xml.c line 1124
static signed int endElement_GRID(void *data, const char *el);
// err_doit
// file error_msg.c line 130
static void err_doit(signed int errnoflag, signed int level, const char *fmt, void **ap);
// err_dump
// file error_msg.c line 81
void err_dump(const char *fmt, ...);
// err_msg
// file ../include/gm_msg.h line 24
void err_msg(const char *fmt, ...);
// err_quiet
// file error_msg.c line 27
void err_quiet(void);
// err_quit
// file ../include/gm_msg.h line 25
void err_quit(const char *fmt, ...);
// err_ret
// file ../include/gm_msg.h line 21
void err_ret(const char *fmt, ...);
// err_sys
// file ../include/gm_msg.h line 22
void err_sys(const char *fmt, ...);
// err_verbose
// file error_msg.c line 33
void err_verbose(void);
// errorhandler
// file conf.c line 329
static signed int errorhandler(struct configfile_t *configfile, signed int type, signed long int dc_errno, const char *msg);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fillmetric
// file process_xml.c line 72
static void fillmetric(const char **attr, struct anonymous_9 *metric, const char *type);
// finish_processing_source
// file process_xml.c line 1066
static signed int finish_processing_source(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// fnmatch
// file /usr/include/fnmatch.h line 56
extern signed int fnmatch(const char *, const char *, signed int);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_string_field
// file cmdline.c line 160
static void free_string_field(char **s);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// g_gethostbyaddr
// file inetaddr.c line 74
char * g_gethostbyaddr(const char *addr, unsigned long int length, signed int type);
// g_gethostbyname
// file ../lib/net.h line 51
signed int g_gethostbyname(const char *hostname, struct sockaddr_in *sa, char **nicename);
// g_inetaddr_delete
// file inetaddr.c line 156
void g_inetaddr_delete(struct anonymous_4 *ia);
// g_inetaddr_get_interface_to
// file inetaddr.c line 199
struct anonymous_4 * g_inetaddr_get_interface_to(const struct anonymous_4 *addr);
// g_inetaddr_get_port
// file inetaddr.c line 163
signed int g_inetaddr_get_port(const struct anonymous_4 *ia);
// g_inetaddr_is_multicast
// file inetaddr.c line 182
signed int g_inetaddr_is_multicast(const struct anonymous_4 *inetaddr);
// g_inetaddr_list_interfaces
// file inetaddr.c line 239
struct _llist_entry * g_inetaddr_list_interfaces(void);
// g_inetaddr_new
// file ../lib/net.h line 55
struct anonymous_4 * g_inetaddr_new(const char *name, signed int port);
// g_inetaddr_ref
// file inetaddr.c line 131
void g_inetaddr_ref(struct anonymous_4 *ia);
// g_inetaddr_set_port
// file inetaddr.c line 172
void g_inetaddr_set_port(const struct anonymous_4 *ia, unsigned int port);
// g_inetaddr_unref
// file inetaddr.c line 140
void g_inetaddr_unref(struct anonymous_4 *ia);
// g_tcp_socket_connect
// file net.h line 101
struct anonymous_2 * g_tcp_socket_connect(const char *hostname, signed int port);
// g_tcp_socket_delete
// file ../lib/net.h line 105
void g_tcp_socket_delete(struct anonymous_2 *s);
// g_tcp_socket_new
// file ../lib/net.h line 103
struct anonymous_2 * g_tcp_socket_new(const struct anonymous_4 *addr);
// g_tcp_socket_server_accept
// file tcp.c line 207
struct anonymous_2 * g_tcp_socket_server_accept(struct anonymous_2 *socket);
// g_tcp_socket_server_new
// file ../lib/net.h line 107
struct anonymous_2 * g_tcp_socket_server_new(signed int port);
// g_tcp_socket_server_new_interface
// file tcp.c line 134
struct anonymous_2 * g_tcp_socket_server_new_interface(const struct anonymous_4 *iface);
// g_tcp_socket_unref
// file tcp.c line 95
static void g_tcp_socket_unref(struct anonymous_2 *s);
// gengetopt_strdup
// file cmdline.c line 253
static char * gengetopt_strdup(const char *s);
// get_apr_os_socket
// file apr_net.c line 265
signed int get_apr_os_socket(struct apr_socket_t *socket);
// get_argname_fallback
// file dotconf.c line 113
static const struct configoption_t * get_argname_fallback(const struct configoption_t *options);
// get_debug_msg_level
// file ../include/gm_msg.h line 18
signed int get_debug_msg_level();
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getfield
// file gmetad.c line 89
char * getfield(char *buf, signed short int index);
// gethostbyaddr
// file /usr/include/netdb.h line 137
extern struct hostent * gethostbyaddr(const void *, unsigned int, signed int);
// gethostbyname
// file /usr/include/netdb.h line 144
extern struct hostent * gethostbyname(const char *);
// gethostname
// file /usr/include/unistd.h line 879
extern signed int gethostname(char *, unsigned long int);
// getopt_long
// file ../lib/getopt.h line 151
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpgid
// file /usr/include/unistd.h line 639
extern signed int getpgid(signed int);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getpwuid
// file /usr/include/pwd.h line 110
extern struct passwd * getpwuid(unsigned int);
// getsockname
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 127
extern signed int getsockname(signed int, struct sockaddr *, unsigned int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// gexec_cluster
// file ganglia.c line 253
signed int gexec_cluster(struct anonymous_36 *cluster, char *ip, unsigned short int port);
// gexec_cluster_free
// file ganglia.c line 193
signed int gexec_cluster_free(struct anonymous_36 *cluster);
// has_wildcard
// file libgmond.c line 749
signed int has_wildcard(const char *pattern);
// hash_create
// file ../lib/hash.h line 48
struct anonymous_8 * hash_create(unsigned long int size);
// hash_delete
// file ../lib/hash.h line 55
struct anonymous_7 * hash_delete(struct anonymous_7 *key, struct anonymous_8 *hash);
// hash_destroy
// file ../lib/hash.h line 49
void hash_destroy(struct anonymous_8 *hash);
// hash_foreach
// file ../lib/hash.h line 58
signed int hash_foreach(struct anonymous_8 *hash, signed int (*func)(struct anonymous_7 *, struct anonymous_7 *, void *), void *arg);

//

// hash_get_flags
// file hash.c line 175
signed int hash_get_flags(struct anonymous_8 *hash);
// hash_insert
// file ../lib/hash.h line 54
struct anonymous_7 * hash_insert(struct anonymous_7 *key, struct anonymous_7 *val, struct anonymous_8 *hash);
// hash_keycmp
// file hash.c line 213
signed int hash_keycmp(struct anonymous_8 *hash, struct anonymous_7 *key1, struct anonymous_7 *key2);
// hash_lookup
// file ../lib/hash.h line 57
struct anonymous_7 * hash_lookup(struct anonymous_7 *key, struct anonymous_8 *hash);
// hash_prime
// file hash.c line 58
static unsigned long int hash_prime(unsigned long int size);
// hash_set_flags
// file ../lib/hash.h line 52
void hash_set_flags(struct anonymous_8 *hash, signed int flags);
// hash_walkfrom
// file ../lib/hash.h line 59
signed int hash_walkfrom(struct anonymous_8 *hash, unsigned long int from, signed int (*func)(struct anonymous_7 *, struct anonymous_7 *, void *), void *arg);

//

// hashval
// file ../lib/hash.h line 64
unsigned long int hashval(struct anonymous_7 *key, struct anonymous_8 *hash);
// host_report_end
// file server.c line 206
signed int host_report_end(struct Generic_type *self, struct anonymous_16 *client, void *arg);
// host_report_start
// file server.c line 183
signed int host_report_start(struct Generic_type *self, struct anonymous_7 *key, struct anonymous_16 *client, void *arg);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// if_nametoindex
// file /usr/include/net/if.h line 193
extern unsigned int if_nametoindex(const char *);
// in_type_list
// file gmetad.c line 40
extern struct type_tag * in_type_list(char *, unsigned int);
// in_xml_list
// file process_xml.c line 14
extern struct xml_tag * in_xml_list(const char *, unsigned int);
// inet_aton
// file /usr/include/arpa/inet.h line 73
extern signed int inet_aton(const char *, struct in_addr *);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// inflate
// file /usr/include/zlib.h line 392
extern signed int inflate(struct z_stream_s *, signed int);
// inflateEnd
// file /usr/include/zlib.h line 508
extern signed int inflateEnd(struct z_stream_s *);
// inflateInit2_
// file /usr/include/zlib.h line 1641
extern signed int inflateInit2_(struct z_stream_s *, signed int, const char *, signed int);
// init_args_info
// file cmdline.c line 85
static void init_args_info(struct gengetopt_args_info *args_info);
// init_carbon_udp_socket
// file export_helpers.h line 23
struct anonymous_2 * init_carbon_udp_socket(const char *hostname, unsigned short int port);
// init_sockaddr
// file export_helpers.c line 63
void init_sockaddr(struct sockaddr_in *name, const char *hostname, unsigned short int port);
// initgroups
// file /usr/include/grp.h line 200
extern signed int initgroups(const char *, unsigned int);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// join_mcast
// file apr_net.c line 341
signed int join_mcast(struct apr_pool_t *context, struct apr_socket_t *sock, char *mcast_channel, unsigned short int port, char *ifname);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// llist_add
// file ../lib/llist.h line 31
void llist_add(struct _llist_entry **llist, struct _llist_entry *e);
// llist_print
// file llist.c line 112
signed int llist_print(struct _llist_entry **llist);
// llist_remove
// file llist.c line 54
signed int llist_remove(struct _llist_entry **llist, struct _llist_entry *e);
// llist_search
// file ../lib/llist.h line 34
signed int llist_search(struct _llist_entry **llist, void *val, signed int (*compare_function)(const char *, const char *), struct _llist_entry **e);

//

// llist_sort
// file llist.h line 37
signed int llist_sort(struct _llist_entry *llist, signed int (*compare_function)(struct _llist_entry *, struct _llist_entry *));

//

// llist_strncmp
// file ../lib/llist.h line 32
signed int llist_strncmp(const char *s1, const char *s2);
// load_sort
// file ganglia.c line 229
static signed int load_sort(struct _llist_entry *a, struct _llist_entry *b);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mcast_emit_on_if
// file apr_net.c line 274
static signed int mcast_emit_on_if(struct apr_pool_t *context, struct apr_socket_t *sock, const char *mcast_channel, unsigned short int port, const char *ifname);
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
// metric_report_end
// file server.c line 176
signed int metric_report_end(struct Generic_type *self, struct anonymous_16 *client, void *arg);
// metric_report_start
// file server.c line 136
signed int metric_report_start(struct Generic_type *self, struct anonymous_7 *key, struct anonymous_16 *client, void *arg);
// metric_summary
// file server.c line 64
static signed int metric_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// my_inet_ntop
// file ../lib/my_inet_ntop.h line 3
const char * my_inet_ntop(signed int af, void *src, char *dst, unsigned long int cnt);
// my_mkdir
// file rrd_helpers.c line 27
static inline void my_mkdir(const char *dir);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// number_of_datasources
// file conf.c line 417
signed int number_of_datasources(char *config_file);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse_config_file
// file conf.c line 394
signed int parse_config_file(char *config_file);
// path_macro_replace
// file export_helpers.c line 215
char * path_macro_replace(char *path, struct anonymous_1 *patrn);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// print_help_common
// file cmdline.c line 105
static void print_help_common(void);
// print_sources
// file gmetad.c line 53
static signed int print_sources(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_path
// file server.c line 396
static signed int process_path(struct anonymous_16 *client, char *path, struct anonymous_7 *myroot, struct anonymous_7 *key);
// process_path_adapter
// file server.c line 496
static signed int process_path_adapter(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// process_request
// file server.c line 507
static signed int process_request(struct anonymous_16 *client, char *path);
// process_xml
// file process_xml.c line 1245
signed int process_xml(struct anonymous_6 *d, char *buf);
// processfilter
// file server.c line 340
signed int processfilter(struct anonymous_16 *client, const char *filter);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_13 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_13 *, const union anonymous_21 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_13 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_13 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_21 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_rdwr_init_np
// file rdwr.h line 32
signed int pthread_rdwr_init_np(struct rdwr_var *rdwrp);
// pthread_rdwr_rlock_np
// file rdwr.h line 33
signed int pthread_rdwr_rlock_np(struct rdwr_var *rdwrp);
// pthread_rdwr_runlock_np
// file rdwr.h line 34
signed int pthread_rdwr_runlock_np(struct rdwr_var *rdwrp);
// pthread_rdwr_wlock_np
// file rdwr.h line 35
signed int pthread_rdwr_wlock_np(struct rdwr_var *rdwrp);
// pthread_rdwr_wunlock_np
// file rdwr.h line 36
signed int pthread_rdwr_wunlock_np(struct rdwr_var *rdwrp);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// push_data_to_carbon
// file export_helpers.c line 79
static signed int push_data_to_carbon(char *graphite_msg);
// push_data_to_rrd
// file rrd_helpers.c line 156
static signed int push_data_to_rrd(char *rrd, const char *sum, const char *num, unsigned int step, unsigned int process_time, enum ganglia_slope slope);
// rand_r
// file /usr/include/stdlib.h line 381
extern signed int rand_r(unsigned int *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// readline
// file server.c line 551
signed int readline(signed int fd, char *buf, signed int maxlen);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// root_report_end
// file server.c line 281
signed int root_report_end(struct anonymous_16 *client);
// root_report_start
// file server.c line 251
signed int root_report_start(struct anonymous_16 *client);
// rrd_clear_error
// file /usr/include/rrd.h line 356
void rrd_clear_error(void);
// rrd_create
// file /usr/include/rrd.h line 153
signed int rrd_create(signed int, char **);
// rrd_get_error
// file /usr/include/rrd.h line 360
char * rrd_get_error(void);
// rrd_test_error
// file /usr/include/rrd.h line 358
signed int rrd_test_error(void);
// rrd_update
// file /usr/include/rrd.h line 168
signed int rrd_update(signed int, char **);
// safe_skip_whitespace
// file dotconf.c line 93
static void safe_skip_whitespace(char **cp, signed int n, char term);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_31 *, struct anonymous_31 *, struct anonymous_31 *, struct timeval *);
// sendto
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 163
extern signed long int sendto(signed int, const void *, unsigned long int, signed int,  struct sockaddr *, unsigned int);
// server_thread
// file server.c line 598
void * server_thread(void *arg);
// set_debug_msg_level
// file ../include/gm_msg.h line 17
void set_debug_msg_level(signed int level);
// set_defaults
// file conf.c line 366
static void set_defaults(struct anonymous_5 *config);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// skip_token
// file file.c line 128
char * skip_token(const char *p);
// skip_whitespace
// file file.c line 121
char * skip_whitespace(const char *p);
// slope_to_cstr
// file libgmond.c line 720
const char * slope_to_cstr(unsigned int slope);
// slurpfile
// file file.c line 28
signed int slurpfile(char *filename, char **buffer, signed int buflen);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// source_report_end
// file server.c line 239
signed int source_report_end(struct Generic_type *self, struct anonymous_16 *client, void *arg);
// source_report_start
// file server.c line 213
signed int source_report_start(struct Generic_type *self, struct anonymous_7 *key, struct anonymous_16 *client, void *arg);
// source_summary
// file server.c line 119
static signed int source_summary(struct anonymous_11 *source, struct anonymous_16 *client);
// spin_off_the_data_threads
// file gmetad.c line 71
static signed int spin_off_the_data_threads(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// start
// file process_xml.c line 1008
static void start(void *data, const char *el, const char **attr);
// start_link1
// file ganglia.c line 19
static void start_link1(void *data_link1, const char *el_link1, const char **attr_link1);
// startElement_CLUSTER
// file process_xml.c line 270
static signed int startElement_CLUSTER(void *data, const char *el, const char **attr);
// startElement_EXTRA_DATA
// file process_xml.c line 734
static signed int startElement_EXTRA_DATA(void *data, const char *el, const char **attr);
// startElement_EXTRA_ELEMENT
// file process_xml.c line 744
static signed int startElement_EXTRA_ELEMENT(void *data, const char *el, const char **attr);
// startElement_GANGLIA_XML
// file process_xml.c line 972
static signed int startElement_GANGLIA_XML(void *data, const char *el, const char **attr);
// startElement_GRID
// file process_xml.c line 153
static signed int startElement_GRID(void *data, const char *el, const char **attr);
// startElement_HOST
// file process_xml.c line 392
static signed int startElement_HOST(void *data, const char *el, const char **attr);
// startElement_HOSTS
// file process_xml.c line 542
static signed int startElement_HOSTS(void *data, const char *el, const char **attr);
// startElement_METRIC
// file process_xml.c line 577
static signed int startElement_METRIC(void *data, const char *el, const char **attr);
// startElement_METRICS
// file process_xml.c line 882
static signed int startElement_METRICS(void *data, const char *el, const char **attr);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
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
// strcspn
// file /usr/include/string.h line 284
extern unsigned long int strcspn(const char *, const char *);
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
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
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
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// sum_metrics
// file gmetad.c line 136
static signed int sum_metrics(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// timediff
// file file.c line 81
float timediff(struct timeval *thistime, struct timeval *lasttime);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// tree_report
// file server.c line 366
static signed int tree_report(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// update_arg
// file cmdline.c line 341
static signed int update_arg(void *field, char **orig_field, unsigned int *field_given, unsigned int *prev_given, char *value, const char **possible_values, const char *default_value, enum anonymous_23 arg_type, signed int check_ambiguity, signed int override, signed int no_free, signed int multiple_option, const char *long_opt, char short_opt, const char *additional_error);
// update_file
// file file.c line 95
char * update_file(struct anonymous_37 *tf);
// update_pidfile
// file ../lib/update_pidfile.h line 4
void update_pidfile(char *pidfile);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_data_to_carbon
// file export_helpers.h line 25
signed int write_data_to_carbon(const char *source, const char *host, const char *metric, const char *sum, unsigned int process_time);
// write_data_to_rrd
// file rrd_helpers.h line 4
signed int write_data_to_rrd(const char *source, const char *host, const char *metric, const char *sum, const char *num, unsigned int step, unsigned int process_time, enum ganglia_slope slope);
// write_into_file
// file cmdline.c line 187
static void write_into_file(struct _IO_FILE *outfile, const char *opt, const char *arg, const char **values);
// write_root_summary
// file gmetad.c line 224
static signed int write_root_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);
// xdr_Ganglia_25metric
// file gm_protocol_xdr.c line 318
extern signed int xdr_Ganglia_25metric(struct XDR *xdrs, struct Ganglia_25metric *objp);
// xdr_Ganglia_extra_data
// file gm_protocol_xdr.c line 22
extern signed int xdr_Ganglia_extra_data(struct XDR *xdrs, struct Ganglia_extra_data *objp);
// xdr_Ganglia_gmetric_double
// file gm_protocol_xdr.c line 230
extern signed int xdr_Ganglia_gmetric_double(struct XDR *xdrs, struct Ganglia_gmetric_double *objp);
// xdr_Ganglia_gmetric_float
// file gm_protocol_xdr.c line 216
extern signed int xdr_Ganglia_gmetric_float(struct XDR *xdrs, struct Ganglia_gmetric_float *objp);
// xdr_Ganglia_gmetric_int
// file gm_protocol_xdr.c line 174
extern signed int xdr_Ganglia_gmetric_int(struct XDR *xdrs, struct Ganglia_gmetric_int *objp);
// xdr_Ganglia_gmetric_short
// file gm_protocol_xdr.c line 160
extern signed int xdr_Ganglia_gmetric_short(struct XDR *xdrs, struct Ganglia_gmetric_short *objp);
// xdr_Ganglia_gmetric_string
// file gm_protocol_xdr.c line 202
extern signed int xdr_Ganglia_gmetric_string(struct XDR *xdrs, struct Ganglia_gmetric_string *objp);
// xdr_Ganglia_gmetric_uint
// file gm_protocol_xdr.c line 188
extern signed int xdr_Ganglia_gmetric_uint(struct XDR *xdrs, struct Ganglia_gmetric_uint *objp);
// xdr_Ganglia_gmetric_ushort
// file gm_protocol_xdr.c line 146
extern signed int xdr_Ganglia_gmetric_ushort(struct XDR *xdrs, struct Ganglia_gmetric_ushort *objp);
// xdr_Ganglia_metadata_message
// file gm_protocol_xdr.c line 34
extern signed int xdr_Ganglia_metadata_message(struct XDR *xdrs, struct Ganglia_metadata_message *objp);
// xdr_Ganglia_metadata_msg
// file gm_protocol_xdr.c line 254
extern signed int xdr_Ganglia_metadata_msg(struct XDR *xdrs, struct Ganglia_metadata_msg *objp);
// xdr_Ganglia_metadatadef
// file gm_protocol_xdr.c line 124
extern signed int xdr_Ganglia_metadatadef(struct XDR *xdrs, struct Ganglia_metadatadef *objp);
// xdr_Ganglia_metadatareq
// file gm_protocol_xdr.c line 136
extern signed int xdr_Ganglia_metadatareq(struct XDR *xdrs, struct Ganglia_metadatareq *objp);
// xdr_Ganglia_metric_id
// file gm_protocol_xdr.c line 110
extern signed int xdr_Ganglia_metric_id(struct XDR *xdrs, struct Ganglia_metric_id *objp);
// xdr_Ganglia_msg_formats
// file gm_protocol_xdr.c line 244
extern signed int xdr_Ganglia_msg_formats(struct XDR *xdrs, enum Ganglia_msg_formats *objp);
// xdr_Ganglia_value_msg
// file gm_protocol_xdr.c line 276
extern signed int xdr_Ganglia_value_msg(struct XDR *xdrs, struct Ganglia_value_msg *objp);
// xdr_Ganglia_value_types
// file gm_protocol_xdr.c line 12
extern signed int xdr_Ganglia_value_types(struct XDR *xdrs, enum Ganglia_value_types *objp);
// xdr_array
// file /usr/include/rpc/xdr.h line 308
extern signed int xdr_array(struct XDR *, char **, unsigned int *, unsigned int, unsigned int, signed int (*)(struct XDR *, void *, ...));
// xdr_bool
// file /usr/include/rpc/xdr.h line 306
extern signed int xdr_bool(struct XDR *, signed int *);
// xdr_double
// file /usr/include/rpc/xdr.h line 323
extern signed int xdr_double(struct XDR *, double *);
// xdr_enum
// file /usr/include/rpc/xdr.h line 307
extern signed int xdr_enum(struct XDR *, signed int *);
// xdr_float
// file /usr/include/rpc/xdr.h line 322
extern signed int xdr_float(struct XDR *, float *);
// xdr_int
// file /usr/include/rpc/xdr.h line 288
extern signed int xdr_int(struct XDR *, signed int *);
// xdr_pointer
// file /usr/include/rpc/xdr.h line 326
extern signed int xdr_pointer(struct XDR *, char **, unsigned int, signed int (*)(struct XDR *, void *, ...));
// xdr_short
// file /usr/include/rpc/xdr.h line 286
extern signed int xdr_short(struct XDR *, signed short int *);
// xdr_string
// file /usr/include/rpc/xdr.h line 314
extern signed int xdr_string(struct XDR *, char **, unsigned int);
// xdr_u_int
// file /usr/include/rpc/xdr.h line 289
extern signed int xdr_u_int(struct XDR *, unsigned int *);
// xdr_u_short
// file /usr/include/rpc/xdr.h line 287
extern signed int xdr_u_short(struct XDR *, unsigned short int *);
// xdrmem_create
// file /usr/include/rpc/xdr.h line 350
extern void xdrmem_create(struct XDR *, char *, unsigned int, enum xdr_op);
// xml_print
// file server.c line 32
static inline signed int xml_print(struct anonymous_16 *client, const char *fmt, ...);
// zError
// file /usr/include/zlib.h line 1746
extern const char * zError(signed int);
// zero_out_summary
// file gmetad.c line 121
signed int zero_out_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg);

struct anonymous_5
{
  // gridname
  char *gridname;
  // xml_port
  signed int xml_port;
  // interactive_port
  signed int interactive_port;
  // server_threads
  signed int server_threads;
  // umask
  signed int umask;
  // trusted_hosts
  struct _llist_entry *trusted_hosts;
  // unsummarized_metrics
  struct _llist_entry *unsummarized_metrics;
  // debug_level
  signed int debug_level;
  // should_setuid
  signed int should_setuid;
  // setuid_username
  char *setuid_username;
  // rrd_rootdir
  char *rrd_rootdir;
  // carbon_server
  char *carbon_server;
  // carbon_port
  signed int carbon_port;
  // carbon_protocol
  char *carbon_protocol;
  // carbon_timeout
  signed int carbon_timeout;
  // memcached_parameters
  char *memcached_parameters;
  // graphite_prefix
  char *graphite_prefix;
  // graphite_path
  char *graphite_path;
  // scalable_mode
  signed int scalable_mode;
  // write_rrds
  signed int write_rrds;
  // all_trusted
  signed int all_trusted;
  // num_RRAs
  signed int num_RRAs;
  // RRAs
  char *RRAs[32l];
  // case_sensitive_hostnames
  signed int case_sensitive_hostnames;
  // shortest_step
  signed int shortest_step;
};

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct anonymous_4
{
  // name
  char *name;
  // sa
  struct sockaddr sa;
  // ref_count
  unsigned int ref_count;
};

struct anonymous_6
{
  // name
  char *name;
  // step
  unsigned int step;
  // num_sources
  unsigned int num_sources;
  // sources
  struct anonymous_4 **sources;
  // dead
  signed int dead;
  // last_good_index
  signed int last_good_index;
};

struct anonymous_1
{
  // torepl
  char *torepl;
  // replwith
  char *replwith;
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

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct anonymous_12
{
  // __lock
  signed int __lock;
  // __futex
  unsigned int __futex;
  // __total_seq
  unsigned long long int __total_seq;
  // __wakeup_seq
  unsigned long long int __wakeup_seq;
  // __woken_seq
  unsigned long long int __woken_seq;
  // __mutex
  void *__mutex;
  // __nwaiters
  unsigned int __nwaiters;
  // __broadcast_seq
  unsigned int __broadcast_seq;
};

union anonymous_13
{
  // __data
  struct anonymous_12 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct rdwr_var
{
  // readers_reading
  signed int readers_reading;
  // writer_writing
  signed int writer_writing;
  // mutex
  union anonymous mutex;
  // lock_free
  union anonymous_13 lock_free;
};

struct anonymous_20
{
  // bucket
  struct bucket *bucket;
  // rwlock
  struct rdwr_var rwlock;
};

struct anonymous_7
{
  // data
  void *data;
  // size
  unsigned int size;
};

struct anonymous_31
{
  // fds_bits
  signed long int fds_bits[16l];
};

struct anonymous_36
{
  // name
  char name[256l];
  // localtime
  signed long int localtime;
  // num_hosts
  unsigned int num_hosts;
  // hosts
  void *hosts;
  // num_gexec_hosts
  unsigned int num_gexec_hosts;
  // gexec_hosts
  void *gexec_hosts;
  // num_dead_hosts
  unsigned int num_dead_hosts;
  // dead_hosts
  void *dead_hosts;
  // malloc_error
  signed int malloc_error;
  // host
  struct gexec_host_t *host;
  // host_up
  signed int host_up;
  // start
  signed int start;
};

struct anonymous_11
{
  // id
  enum anonymous_15 id;
  // report_start
  signed int (*report_start)(struct Generic_type *, struct anonymous_7 *, struct anonymous_16 *, void *);
  // report_end
  signed int (*report_end)(struct Generic_type *, struct anonymous_16 *, void *);
  // authority
  struct anonymous_8 *authority;
  // authority_ptr
  signed short int authority_ptr;
  // metric_summary
  struct anonymous_8 *metric_summary;
  // metric_summary_pending
  struct anonymous_8 *metric_summary_pending;
  // sum_finished
  union anonymous *sum_finished;
  // ds
  struct anonymous_6 *ds;
  // hosts_up
  unsigned int hosts_up;
  // hosts_down
  unsigned int hosts_down;
  // localtime
  unsigned int localtime;
  // owner
  signed short int owner;
  // latlong
  signed short int latlong;
  // url
  signed short int url;
  // stringslen
  signed short int stringslen;
  // strings
  char strings[1572l];
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

union anonymous_17
{
  // d
  double d;
  // str
  signed int str;
};

struct anonymous_9
{
  // id
  enum anonymous_15 id;
  // report_start
  signed int (*report_start)(struct Generic_type *, struct anonymous_7 *, struct anonymous_16 *, void *);
  // report_end
  signed int (*report_end)(struct Generic_type *, struct anonymous_16 *, void *);
  // leaf
  struct anonymous_8 *leaf;
  // t0
  struct timeval t0;
  // val
  union anonymous_17 val;
  // name
  signed short int name;
  // valstr
  signed short int valstr;
  // precision
  signed short int precision;
  // num
  unsigned int num;
  // type
  signed short int type;
  // units
  signed short int units;
  // tn
  unsigned int tn;
  // tmax
  unsigned int tmax;
  // dmax
  unsigned int dmax;
  // slope
  signed short int slope;
  // source
  signed short int source;
  // ednameslen
  signed short int ednameslen;
  // edvalueslen
  signed short int edvalueslen;
  // ednames
  signed short int ednames[32l];
  // edvalues
  signed short int edvalues[32l];
  // stringslen
  signed short int stringslen;
  // strings
  char strings[1572l];
};

struct anonymous_10
{
  // id
  enum anonymous_15 id;
  // report_start
  signed int (*report_start)(struct Generic_type *, struct anonymous_7 *, struct anonymous_16 *, void *);
  // report_end
  signed int (*report_end)(struct Generic_type *, struct anonymous_16 *, void *);
  // metrics
  struct anonymous_8 *metrics;
  // t0
  struct timeval t0;
  // ip
  signed short int ip;
  // tn
  unsigned int tn;
  // tmax
  unsigned int tmax;
  // dmax
  unsigned int dmax;
  // location
  signed short int location;
  // tags
  signed short int tags;
  // reported
  unsigned int reported;
  // started
  unsigned int started;
  // stringslen
  signed short int stringslen;
  // strings
  char strings[1572l];
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

struct anonymous_16
{
  // fd
  signed int fd;
  // valid
  unsigned int valid : 1;
  // http
  unsigned int http : 1;
  // addr
  struct sockaddr_in addr;
  // filter
  enum anonymous_22 filter;
  // now
  struct timeval now;
};

struct anonymous_35
{
  // rval
  signed int rval;
  // old
  signed int old;
  // sourcename
  char *sourcename;
  // hostname
  char *hostname;
  // ds
  struct anonymous_6 *ds;
  // grid_depth
  signed int grid_depth;
  // host_alive
  signed int host_alive;
  // source
  struct anonymous_11 source;
  // host
  struct anonymous_10 host;
  // metric
  struct anonymous_9 metric;
  // root
  struct anonymous_8 *root;
  // now
  struct timeval now;
};

struct anonymous_2
{
  // sockfd
  signed int sockfd;
  // sa
  struct sockaddr sa;
  // ref_count
  unsigned int ref_count;
};

struct anonymous_3
{
  // value
  signed long int value;
  // str
  char *str;
  // list
  char **list;
};

struct anonymous_37
{
  // last_read
  struct timeval last_read;
  // thresh
  float thresh;
  // name
  char *name;
  // buffer
  char *buffer;
  // buffersize
  unsigned long int buffersize;
};

struct anonymous_27
{
  // metadata_len
  unsigned int metadata_len;
  // metadata_val
  struct Ganglia_extra_data *metadata_val;
};

struct anonymous_8
{
  // size
  unsigned long int size;
  // node
  struct anonymous_20 **node;
  // flags
  signed int flags;
};

union anonymous_26
{
  // ifcu_buf
  char *ifcu_buf;
  // ifcu_req
  struct ifreq *ifcu_req;
};

union anonymous_24
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous_28
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_21
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

struct Ganglia_metric_id
{
  // host
  char *host;
  // name
  char *name;
  // spoof
  signed int spoof;
};

struct Ganglia_gmetric_ushort
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // fmt
  char *fmt;
  // us
  unsigned short int us;
};

struct Ganglia_gmetric_short
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // fmt
  char *fmt;
  // ss
  signed short int ss;
};

struct Ganglia_gmetric_int
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // fmt
  char *fmt;
  // si
  signed int si;
};

struct Ganglia_gmetric_uint
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // fmt
  char *fmt;
  // ui
  unsigned int ui;
};

struct Ganglia_gmetric_string
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // fmt
  char *fmt;
  // str
  char *str;
};

struct Ganglia_gmetric_float
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // fmt
  char *fmt;
  // f
  float f;
};

struct Ganglia_gmetric_double
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // fmt
  char *fmt;
  // d
  double d;
};

union anonymous_30
{
  // gu_short
  struct Ganglia_gmetric_ushort gu_short;
  // gs_short
  struct Ganglia_gmetric_short gs_short;
  // gs_int
  struct Ganglia_gmetric_int gs_int;
  // gu_int
  struct Ganglia_gmetric_uint gu_int;
  // gstr
  struct Ganglia_gmetric_string gstr;
  // gf
  struct Ganglia_gmetric_float gf;
  // gd
  struct Ganglia_gmetric_double gd;
};

struct Ganglia_metadata_message
{
  // type
  char *type;
  // name
  char *name;
  // units
  char *units;
  // slope
  unsigned int slope;
  // tmax
  unsigned int tmax;
  // dmax
  unsigned int dmax;
  // metadata
  struct anonymous_27 metadata;
};

struct Ganglia_metadatadef
{
  // metric_id
  struct Ganglia_metric_id metric_id;
  // metric
  struct Ganglia_metadata_message metric;
};

struct Ganglia_metadatareq
{
  // metric_id
  struct Ganglia_metric_id metric_id;
};

union anonymous_29
{
  // gfull
  struct Ganglia_metadatadef gfull;
  // grequest
  struct Ganglia_metadatareq grequest;
};

struct ifmap
{
  // mem_start
  unsigned long int mem_start;
  // mem_end
  unsigned long int mem_end;
  // base_addr
  unsigned short int base_addr;
  // irq
  unsigned char irq;
  // dma
  unsigned char dma;
  // port
  unsigned char port;
};

union anonymous_25
{
  // ifru_addr
  struct sockaddr ifru_addr;
  // ifru_dstaddr
  struct sockaddr ifru_dstaddr;
  // ifru_broadaddr
  struct sockaddr ifru_broadaddr;
  // ifru_netmask
  struct sockaddr ifru_netmask;
  // ifru_hwaddr
  struct sockaddr ifru_hwaddr;
  // ifru_flags
  signed short int ifru_flags;
  // ifru_ivalue
  signed int ifru_ivalue;
  // ifru_mtu
  signed int ifru_mtu;
  // ifru_map
  struct ifmap ifru_map;
  // ifru_slave
  char ifru_slave[16l];
  // ifru_newname
  char ifru_newname[16l];
  // ifru_data
  char *ifru_data;
};

struct in6_addr
{
  // __in6_u
  union anonymous_28 __in6_u;
};

struct sockaddr_in6
{
  // sin6_family
  unsigned short int sin6_family;
  // sin6_port
  unsigned short int sin6_port;
  // sin6_flowinfo
  unsigned int sin6_flowinfo;
  // sin6_addr
  struct in6_addr sin6_addr;
  // sin6_scope_id
  unsigned int sin6_scope_id;
};

struct sockaddr_storage
{
  // ss_family
  unsigned short int ss_family;
  // __ss_align
  unsigned long int __ss_align;
  // __ss_padding
  char __ss_padding[112l];
};

union anonymous_32
{
  // sin
  struct sockaddr_in sin;
  // sin6
  struct sockaddr_in6 sin6;
  // sas
  struct sockaddr_storage sas;
};

union anonymous_0
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
};

union anonymous_19
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
} __attribute__ ((__transparent_union__));

struct Ganglia_25metric
{
  // key
  signed int key;
  // name
  char *name;
  // tmax
  signed int tmax;
  // type
  enum Ganglia_value_types type;
  // units
  char *units;
  // slope
  char *slope;
  // fmt
  char *fmt;
  // msg_size
  signed int msg_size;
  // desc
  char *desc;
  // metadata
  signed int *metadata;
};

struct Ganglia_extra_data
{
  // name
  char *name;
  // data
  char *data;
};

struct Ganglia_metadata_msg
{
  // id
  enum Ganglia_msg_formats id;
  // Ganglia_metadata_msg_u
  union anonymous_29 Ganglia_metadata_msg_u;
};

struct Ganglia_metric
{
  // pool
  struct Ganglia_pool *pool;
  // msg
  struct Ganglia_metadata_message *msg;
  // value
  char *value;
  // extra
  void *extra;
};

struct Ganglia_value_msg
{
  // id
  enum Ganglia_msg_formats id;
  // Ganglia_value_msg_u
  union anonymous_30 Ganglia_value_msg_u;
};

struct Generic_type
{
  // id
  enum anonymous_15 id;
  // report_start
  signed int (*report_start)(struct Generic_type *, struct anonymous_7 *, struct anonymous_16 *, void *);
  // report_end
  signed int (*report_end)(struct Generic_type *, struct anonymous_16 *, void *);
  // children
  struct anonymous_8 *children;
  // therest
  char *therest;
};

struct XDR
{
  // x_op
  enum xdr_op x_op;
  // x_ops
  struct xdr_ops *x_ops;
  // x_public
  char *x_public;
  // x_private
  char *x_private;
  // x_base
  char *x_base;
  // x_handy
  unsigned int x_handy;
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

struct _llist_entry
{
  // prev
  struct _llist_entry *prev;
  // next
  struct _llist_entry *next;
  // val
  void *val;
};

struct apr_array_header_t
{
  // pool
  struct apr_pool_t *pool;
  // elt_size
  signed int elt_size;
  // nelts
  signed int nelts;
  // nalloc
  signed int nalloc;
  // elts
  char *elts;
};

struct apr_sockaddr_t
{
  // pool
  struct apr_pool_t *pool;
  // hostname
  char *hostname;
  // servname
  char *servname;
  // port
  unsigned short int port;
  // family
  signed int family;
  // salen
  unsigned int salen;
  // ipaddr_len
  signed int ipaddr_len;
  // addr_str_len
  signed int addr_str_len;
  // ipaddr_ptr
  void *ipaddr_ptr;
  // next
  struct apr_sockaddr_t *next;
  // sa
  union anonymous_32 sa;
};

struct apr_socket_t
{
  // pool
  struct apr_pool_t *pool;
  // socketdes
  signed int socketdes;
  // type
  signed int type;
  // protocol
  signed int protocol;
};

struct apr_table_entry_t
{
  // key
  char *key;
  // val
  char *val;
  // key_checksum
  unsigned int key_checksum;
};

struct bucket
{
  // key
  struct anonymous_7 *key;
  // val
  struct anonymous_7 *val;
  // next
  struct bucket *next;
};

struct cfg_defvalue_t
{
  // number
  signed long int number;
  // fpnumber
  double fpnumber;
  // boolean
  enum anonymous_14 boolean;
  // string
  char *string;
  // parsed
  char *parsed;
};

struct cfg_opt_t
{
  // name
  char *name;
  // type
  enum cfg_type_t type;
  // nvalues
  unsigned int nvalues;
  // values
  union cfg_value_t **values;
  // flags
  signed int flags;
  // subopts
  struct cfg_opt_t *subopts;
  // def
  struct cfg_defvalue_t def;
  // func
  signed int (*func)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **);
  // simple_value
  void *simple_value;
  // parsecb
  signed int (*parsecb)(struct cfg_t *, struct cfg_opt_t *, const char *, void *);
  // validcb
  signed int (*validcb)(struct cfg_t *, struct cfg_opt_t *);
  // pf
  void (*pf)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *);
  // freecb
  void (*freecb)(void *);
};

struct cfg_t
{
  // flags
  signed int flags;
  // name
  char *name;
  // opts
  struct cfg_opt_t *opts;
  // title
  char *title;
  // filename
  char *filename;
  // line
  signed int line;
  // errfunc
  void (*errfunc)(struct cfg_t *, const char *, void **);
};

union cfg_value_t
{
  // number
  signed long int number;
  // fpnumber
  double fpnumber;
  // boolean
  enum anonymous_14 boolean;
  // string
  char *string;
  // section
  struct cfg_t *section;
  // ptr
  void *ptr;
};

struct cleanup_arg
{
  // tv
  struct timeval *tv;
  // key
  struct anonymous_7 *key;
  // val
  struct anonymous_7 *val;
  // hashval
  unsigned long int hashval;
};

struct cmdline_parser_params
{
  // override
  signed int override;
  // initialize
  signed int initialize;
  // check_required
  signed int check_required;
  // check_ambiguity
  signed int check_ambiguity;
  // print_errors
  signed int print_errors;
};

struct command_t
{
  // name
  const char *name;
  // option
  struct configoption_t *option;
  // data
  struct anonymous_3 data;
  // arg_count
  signed int arg_count;
  // configfile
  struct configfile_t *configfile;
  // context
  void *context;
};

struct configfile_t
{
  // stream
  struct _IO_FILE *stream;
  // eof
  char eof;
  // size
  unsigned long int size;
  // context
  void *context;
  // config_options
  const struct configoption_t **config_options;
  // config_option_count
  signed int config_option_count;
  // filename
  char *filename;
  // line
  unsigned long int line;
  // flags
  unsigned long int flags;
  // includepath
  char *includepath;
  // errorhandler
  signed int (*errorhandler)(struct configfile_t *, signed int, unsigned long int, const char *);
  // contextchecker
  const char * (*contextchecker)(struct command_t *, unsigned long int);
  // cmp_func
  signed int (*cmp_func)(const char *, const char *, unsigned long int);
};

struct configoption_t
{
  // name
  const char *name;
  // type
  signed int type;
  // callback
  const char * (*callback)(struct command_t *, void *);
  // info
  void *info;
  // context
  unsigned long int context;
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

struct gengetopt_args_info
{
  // help_help
  const char *help_help;
  // version_help
  const char *version_help;
  // conf_arg
  char *conf_arg;
  // conf_orig
  char *conf_orig;
  // conf_help
  const char *conf_help;
  // debug_arg
  signed int debug_arg;
  // debug_orig
  char *debug_orig;
  // debug_help
  const char *debug_help;
  // pid_file_arg
  char *pid_file_arg;
  // pid_file_orig
  char *pid_file_orig;
  // pid_file_help
  const char *pid_file_help;
  // help_given
  unsigned int help_given;
  // version_given
  unsigned int version_given;
  // conf_given
  unsigned int conf_given;
  // debug_given
  unsigned int debug_given;
  // pid_file_given
  unsigned int pid_file_given;
};

struct gexec_host_t
{
  // ip
  char ip[64l];
  // name
  char name[256l];
  // domain
  char domain[256l];
  // load_one
  double load_one;
  // load_five
  double load_five;
  // load_fifteen
  double load_fifteen;
  // cpu_user
  double cpu_user;
  // cpu_nice
  double cpu_nice;
  // cpu_system
  double cpu_system;
  // cpu_idle
  double cpu_idle;
  // cpu_wio
  double cpu_wio;
  // proc_run
  unsigned int proc_run;
  // proc_total
  unsigned int proc_total;
  // cpu_num
  unsigned int cpu_num;
  // last_reported
  signed long int last_reported;
  // gexec_on
  signed int gexec_on;
  // name_resolved
  signed int name_resolved;
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

struct ifconf
{
  // ifc_len
  signed int ifc_len;
  // ifc_ifcu
  union anonymous_26 ifc_ifcu;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous_24 ifr_ifrn;
  // ifr_ifru
  union anonymous_25 ifr_ifru;
};

struct internal_state
{
  // dummy
  signed int dummy;
};

struct ip_mreq
{
  // imr_multiaddr
  struct in_addr imr_multiaddr;
  // imr_interface
  struct in_addr imr_interface;
};

struct ipv6_mreq
{
  // ipv6mr_multiaddr
  struct in6_addr ipv6mr_multiaddr;
  // ipv6mr_interface
  unsigned int ipv6mr_interface;
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

struct passwd
{
  // pw_name
  char *pw_name;
  // pw_passwd
  char *pw_passwd;
  // pw_uid
  unsigned int pw_uid;
  // pw_gid
  unsigned int pw_gid;
  // pw_gecos
  char *pw_gecos;
  // pw_dir
  char *pw_dir;
  // pw_shell
  char *pw_shell;
};

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct request_context
{
  // path
  char *path;
  // client
  struct anonymous_16 *client;
};

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
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

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct type_tag
{
  // name
  const char *name;
  // type
  enum anonymous_18 type;
};

struct xdr_ops
{
  // x_getlong
  signed int (*x_getlong)(struct XDR *, signed long int *);
  // x_putlong
  signed int (*x_putlong)(struct XDR *, const signed long int *);
  // x_getbytes
  signed int (*x_getbytes)(struct XDR *, char *, unsigned int);
  // x_putbytes
  signed int (*x_putbytes)(struct XDR *, const char *, unsigned int);
  // x_getpostn
  unsigned int (*x_getpostn)(const struct XDR *);
  // x_setpostn
  signed int (*x_setpostn)(struct XDR *, unsigned int);
  // x_inline
  signed int * (*x_inline)(struct XDR *, unsigned int);
  // x_destroy
  void (*x_destroy)(struct XDR *);
  // x_getint32
  signed int (*x_getint32)(struct XDR *, signed int *);
  // x_putint32
  signed int (*x_putint32)(struct XDR *, const signed int *);
};

struct xml_tag
{
  // name
  const char *name;
  // tag
  enum anonymous_34 tag;
};

struct z_stream_s
{
  // next_in
  unsigned char *next_in;
  // avail_in
  unsigned int avail_in;
  // total_in
  unsigned long int total_in;
  // next_out
  unsigned char *next_out;
  // avail_out
  unsigned int avail_out;
  // total_out
  unsigned long int total_out;
  // msg
  char *msg;
  // state
  struct internal_state *state;
  // zalloc
  void * (*zalloc)(void *, unsigned int, unsigned int);
  // zfree
  void (*zfree)(void *, void *);
  // opaque
  void *opaque;
  // data_type
  signed int data_type;
  // adler
  unsigned long int adler;
  // reserved
  unsigned long int reserved;
};


// access_opts
// file libgmond.c line 75
static struct cfg_opt_t access_opts[4l] = { { .name="action", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="ip", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0, .values=((union cfg_value_t **)NULL),
    .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="mask", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// acl_opts
// file libgmond.c line 82
static struct cfg_opt_t acl_opts[3l];
// acl_opts
// file libgmond.c line 82
static struct cfg_opt_t acl_opts[3l] = { { .name="default", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="allow",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="access", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=1,
    .subopts=access_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// args_info
// file gmetad.c line 44
struct gengetopt_args_info args_info;
// carbon_mutex
// file export_helpers.c line 31
union anonymous carbon_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// carbon_udp_socket
// file export_helpers.c line 30
struct anonymous_2 *carbon_udp_socket;
// cluster_opts
// file libgmond.c line 40
static struct cfg_opt_t cluster_opts[5l] = { { .name="name", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="unspecified",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="owner", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="unspecified",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="latlong", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="unspecified",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="url", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="unspecified",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// collection_group_opts
// file libgmond.c line 132
static struct cfg_opt_t collection_group_opts[5l];
// metric_opts
// file libgmond.c line 122
static struct cfg_opt_t metric_opts[5l] = { { .name="name", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="name_match", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="value_threshold", .type=(enum cfg_type_t)2, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)-1, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="title", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// collection_group_opts
// file libgmond.c line 132
static struct cfg_opt_t collection_group_opts[5l] = { { .name="metric", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=1,
    .subopts=metric_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="collect_once", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="collect_every", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)60, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="time_threshold", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)3600, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// daemon_proc
// file error_msg.c line 20
signed int daemon_proc;
// debug_level
// file gmetad.c line 47
static signed int debug_level;
// debug_level_link1
// file debug_msg.c line 7
signed int debug_level_link1 = 0;
// default_gmond_configuration
// file default_conf.h line 4
char *default_gmond_configuration = (char *)(void *)0;
// dotconf_options
// file dotconf.c line 86
static struct configoption_t dotconf_options[3l];
// dotconf_options
// file dotconf.c line 86
static struct configoption_t dotconf_options[3l] = { { .name="Include", .type=2, .callback=dotconf_cb_include, .info=(void *)0,
    .context=(unsigned long int)0 },
    { .name="IncludePath", .type=2, .callback=dotconf_cb_includepath, .info=(void *)0,
    .context=(unsigned long int)0 },
    { .name="", .type=0, .callback=(const char * (*)(struct command_t *, void *))(void *)0, .info=(void *)0,
    .context=(unsigned long int)0 } };
// ganglia_quiet_errors
// file error_msg.c line 22
signed int ganglia_quiet_errors = 0;
// gengetopt_args_info_description
// file cmdline.c line 32
const char *gengetopt_args_info_description = "";
// gengetopt_args_info_help
// file cmdline.c line 34
const char *gengetopt_args_info_help[6l] = { "  -h, --help             Print help and exit",
    "  -V, --version          Print version and exit",
    "  -c, --conf=STRING      Location of gmetad configuration file  \n                           (default=`/etc/ganglia/gmetad.conf')",
    "  -d, --debug=INT        Debug level. If greater than zero, daemon will stay in \n                           foreground.  (default=`0')",
    "  -p, --pid-file=STRING  Write process-id to file",
    ((const char *)NULL) };
// gengetopt_args_info_purpose
// file cmdline.c line 28
const char *gengetopt_args_info_purpose = "The Ganglia Meta Daemon (gmetad) collects information from\nmultiple gmond or gmetad data sources, saves the information to local\nround-robin databases, and exports XML which is the concatentation of\nall data sources";
// gengetopt_args_info_usage
// file cmdline.c line 30
const char *gengetopt_args_info_usage = "Usage: gmetad [OPTIONS]...";
// gethostbyname_mutex
// file inetaddr.c line 33
union anonymous gethostbyname_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// gexec_errno
// file ganglia.c line 16
signed int gexec_errno = 0;
// globals_opts
// file libgmond.c line 53
static struct cfg_opt_t globals_opts[18l] = { { .name="daemonize", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)1,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="setuid", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)(1 - 0),
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="user", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="nobody",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="debug_level", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="max_udp_msg_len", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)1472, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="mute", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="deaf", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="allow_extra_data", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)1,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="host_dmax", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)86400, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="host_tmax", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)20, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="cleanup_threshold", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)300, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="gexec", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="send_metadata_interval", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="module_dir", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="override_hostname", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="override_ip", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="tags", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// gmetad_config
// file conf.c line 11
struct anonymous_5 gmetad_config;
// gmetad_options
// file conf.c line 335
static struct configoption_t gmetad_options[26l];
// gmetad_options
// file conf.c line 335
static struct configoption_t gmetad_options[26l] = { { .name="data_source", .type=3, .callback=cb_data_source, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="gridname", .type=2, .callback=cb_gridname, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="authority", .type=2, .callback=cb_authority, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="trusted_hosts", .type=3, .callback=cb_trusted_hosts, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="all_trusted", .type=1, .callback=cb_all_trusted, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="debug_level", .type=1, .callback=cb_debug_level, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="xml_port", .type=1, .callback=cb_xml_port, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="interactive_port", .type=1, .callback=cb_interactive_port, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="server_threads", .type=1, .callback=cb_server_threads, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="umask", .type=1, .callback=cb_umask, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="rrd_rootdir", .type=2, .callback=cb_rrd_rootdir, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="setuid", .type=0, .callback=cb_setuid, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="setuid_username", .type=2, .callback=cb_setuid_username, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="scalable", .type=2, .callback=cb_scalable, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="write_rrds", .type=2, .callback=cb_write_rrds, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="RRAs", .type=3, .callback=cb_RRAs, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="case_sensitive_hostnames", .type=1, .callback=cb_case_sensitive_hostnames,
    .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="carbon_server", .type=2, .callback=cb_carbon_server, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="carbon_port", .type=1, .callback=cb_carbon_port, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="carbon_protocol", .type=2, .callback=cb_carbon_protocol, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="carbon_timeout", .type=1, .callback=cb_carbon_timeout, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="memcached_parameters", .type=2, .callback=cb_memcached_parameters,
    .info=(void *)&gmetad_config, .context=(unsigned long int)0 },
    { .name="graphite_prefix", .type=2, .callback=cb_graphite_prefix, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="graphite_path", .type=2, .callback=cb_graphite_path, .info=(void *)&gmetad_config,
    .context=(unsigned long int)0 },
    { .name="unsummarized_metrics", .type=3, .callback=cb_unsummarized_metrics,
    .info=(void *)&gmetad_config, .context=(unsigned long int)0 },
    { .name="", .type=0, .callback=(const char * (*)(struct command_t *, void *))(void *)0, .info=(void *)0,
    .context=0ul } };
// gmond_opts
// file libgmond.c line 181
static struct cfg_opt_t gmond_opts[11l];
// host_opts
// file libgmond.c line 48
static struct cfg_opt_t host_opts[2l] = { { .name="location", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="unspecified",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// metric_modules_opts
// file libgmond.c line 162
static struct cfg_opt_t metric_modules_opts[2l];
// metric_module_opts
// file libgmond.c line 145
static struct cfg_opt_t metric_module_opts[7l];
// metric_module_param
// file libgmond.c line 140
static struct cfg_opt_t metric_module_param[2l] = { { .name="value", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// metric_module_opts
// file libgmond.c line 145
static struct cfg_opt_t metric_module_opts[7l] = { { .name="name", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="language", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="enabled", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)1,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="path", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="params", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="param", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=8 | 1,
    .subopts=metric_module_param, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// metric_modules_opts
// file libgmond.c line 162
static struct cfg_opt_t metric_modules_opts[2l] = { { .name="module", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=1,
    .subopts=metric_module_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// sflow_opts
// file libgmond.c line 168
static struct cfg_opt_t sflow_opts[9l] = { { .name="udp_port", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)6343, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="accept_vm_metrics", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)1,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="accept_http_metrics", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)1,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="multiple_http_instances", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="accept_memcache_metrics", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)1,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="multiple_memcache_instances", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="accept_jvm_metrics", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)1,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="multiple_jvm_instances", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// tcp_accept_channel_opts
// file libgmond.c line 111
static struct cfg_opt_t tcp_accept_channel_opts[8l];
// tcp_accept_channel_opts
// file libgmond.c line 111
static struct cfg_opt_t tcp_accept_channel_opts[8l] = { { .name="bind", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="port", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)-1, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="interface", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="acl", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=acl_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="timeout", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)-1, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="family", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="inet4",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="gzip_output", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// udp_recv_channel_opts
// file libgmond.c line 99
static struct cfg_opt_t udp_recv_channel_opts[9l];
// udp_recv_channel_opts
// file libgmond.c line 99
static struct cfg_opt_t udp_recv_channel_opts[9l] = { { .name="mcast_join", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="bind", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="port", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)-1, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="mcast_if", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="acl", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=acl_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="family", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string="inet4",
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="retry_bind", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_true,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="buffer", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// udp_send_channel_opts
// file libgmond.c line 88
static struct cfg_opt_t udp_send_channel_opts[8l] = { { .name="mcast_join", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="mcast_if", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="host", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="port", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)-1, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="ttl", .type=(enum cfg_type_t)1, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)1, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="bind", .type=(enum cfg_type_t)3, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=(char *)(void *)0,
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="bind_hostname", .type=(enum cfg_type_t)4, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)0,
    .string=((char *)NULL), .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// gmond_opts
// file libgmond.c line 181
static struct cfg_opt_t gmond_opts[11l] = { { .name="cluster", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=cluster_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="host", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=host_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="globals", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=globals_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="udp_send_channel", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=1,
    .subopts=udp_send_channel_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="udp_recv_channel", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=1,
    .subopts=udp_recv_channel_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="tcp_accept_channel", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=1,
    .subopts=tcp_accept_channel_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="collection_group", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=1,
    .subopts=collection_group_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="include", .type=(enum cfg_type_t)6, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=Ganglia_cfg_include,
    .simple_value=NULL, .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL),
    .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="modules", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=metric_modules_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name="sflow", .type=(enum cfg_type_t)5, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=sflow_opts, .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) }, .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) },
    { .name=((char *)NULL), .type=(enum cfg_type_t)0, .nvalues=(unsigned int)0,
    .values=((union cfg_value_t **)NULL), .flags=0,
    .subopts=((struct cfg_opt_t *)NULL), .def={ .number=(signed long int)0, .fpnumber=(double)0, .boolean=(enum anonymous_14)cfg_false,
    .string=((char *)NULL),
    .parsed=((char *)NULL) },
    .func=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, signed int, const char **))NULL),
    .simple_value=NULL,
    .parsecb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *, const char *, void *))NULL), .validcb=((signed int (*)(struct cfg_t *, struct cfg_opt_t *))NULL),
    .pf=((void (*)(struct cfg_opt_t *, unsigned int, struct _IO_FILE *))NULL),
    .freecb=((void (*)(void *))NULL) } };
// interactive_socket
// file gmetad.c line 31
struct anonymous_2 *interactive_socket;
// libgmond_apr_lib_initialized
// file libgmond.c line 230
signed int libgmond_apr_lib_initialized = 0;
// myhost
// file libgmond.c line 29
static char myhost[257l];
// name
// file dotconf.c line 77
static char name[33l];
// optarg
// file ../lib/getopt.h line 47
extern char *optarg;
// opterr
// file ../lib/getopt.h line 66
extern signed int opterr;
// optind
// file ../lib/getopt.h line 61
extern signed int optind;
// optopt
// file ../lib/getopt.h line 70
extern signed int optopt;
// package_name
// file cmdline.c line 320
static char *package_name = ((char *)NULL);
// root
// file gmetad.c line 28
struct anonymous_11 root;
// rrd_mutex
// file rrd_helpers.c line 24
union anonymous rrd_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// server_interactive_mutex
// file gmetad.c line 34
union anonymous server_interactive_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// server_socket
// file gmetad.c line 30
struct anonymous_2 *server_socket;
// server_socket_mutex
// file gmetad.c line 33
union anonymous server_socket_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// sources
// file gmetad.c line 25
struct anonymous_8 *sources;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// Ganglia_cfg_include
// file libgmond.c line 782
static signed int Ganglia_cfg_include(struct cfg_t *cfg, struct cfg_opt_t *opt, signed int argc, const char **argv)
{
  char *fname = (char *)argv[(signed long int)0];
  struct stat statbuf;
  struct __dirstream *dir;
  struct dirent *entry;
  signed int return_value_has_wildcard_7;
  if(!(argc == 1))
  {
    cfg_error(cfg, "wrong number of arguments to cfg_include()");
    return 1;
  }

  else
  {
    signed int return_value_stat_8;
    return_value_stat_8=stat(fname, &statbuf);
    if(return_value_stat_8 == 0)
    {
      signed int return_value_cfg_include_1;
      return_value_cfg_include_1=cfg_include(cfg, opt, argc, argv);
      return return_value_cfg_include_1;
    }

    else
    {
      return_value_has_wildcard_7=has_wildcard(fname);
      if(!(return_value_has_wildcard_7 == 0))
      {
        signed int ret;
        char *path;
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(fname);
        void *return_value_calloc_3;
        return_value_calloc_3=calloc(return_value_strlen_2 + (unsigned long int)1, sizeof(char) /*1ul*/ );
        path = (char *)return_value_calloc_3;
        char *pattern = (char *)(void *)0;
        char *idx;
        idx=strrchr(fname, 47);
        struct apr_pool_t *p;
        struct apr_file_t *ftemp;
        char *dirname = (char *)(void *)0;
        char tn[17l] = { 'g', 'm', 'o', 'n', 'd', '.', 't', 'm', 'p', '.', 'X', 'X', 'X', 'X', 'X', 'X', 0 };
        if(idx == ((char *)NULL))
          idx=strrchr(fname, 92);

        if(idx == ((char *)NULL))
        {
          strncpy(path, ".", (unsigned long int)1);
          pattern = fname;
        }

        else
        {
          strncpy(path, fname, (unsigned long int)(idx - fname));
          pattern = idx + (signed long int)1;
        }
        apr_pool_create_ex(&p, (struct apr_pool_t *)(void *)0, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
        signed int return_value_apr_temp_dir_get_4;
        return_value_apr_temp_dir_get_4=apr_temp_dir_get((const char **)&dirname, p);
        if(!(return_value_apr_temp_dir_get_4 == 0))
          dirname=apr_psprintf(p, "%s", (const void *)"/dev/shm");

        dirname=apr_psprintf(p, "%s/%s", dirname, (const void *)tn);
        signed int return_value_apr_file_mktemp_5;
        return_value_apr_file_mktemp_5=apr_file_mktemp(&ftemp, dirname, 0x00004 | 0x00001 | 0x00002 | 0x00100, p);
        if(!(return_value_apr_file_mktemp_5 == 0))
        {
          cfg_error(cfg, "unable to create a temporary file %s", dirname);
          apr_pool_destroy(p);
          return 1;
        }

        dir=opendir(path);
        if(!(dir == ((struct __dirstream *)NULL)))
        {
          do
          {
            entry=readdir(dir);
            if(entry == ((struct dirent *)NULL))
              break;

            ret=fnmatch(pattern, entry->d_name, 1 << 0 | 1 << 2);
            if(ret == 0)
            {
              char *newpath;
              char *line;
              newpath=apr_psprintf(p, "%s/%s", path, (const void *)entry->d_name);
              line=apr_pstrcat(p, (const void *)"include ('", newpath, (const void *)"')\n", (void *)0);
              apr_file_puts(line, ftemp);
            }

          }
          while((_Bool)1);
          closedir(dir);
          free((void *)path);
          argv[(signed long int)0] = dirname;
          signed int return_value_cfg_include_6;
          return_value_cfg_include_6=cfg_include(cfg, opt, argc, argv);
          if(!(return_value_cfg_include_6 == 0))
            cfg_error(cfg, "failed to process include file %s", fname);

          else
            debug_msg("processed include file %s\n", fname);
        }

        apr_file_close(ftemp);
        apr_pool_destroy(p);
        argv[(signed long int)0] = fname;
      }

      else
      {
        cfg_error(cfg, "invalid include path");
        return 1;
      }
    }
    return 0;
  }
}

// Ganglia_default_collection_groups
// file libgmond.c line 198
char * Ganglia_default_collection_groups(void)
{
  return "/* Each metrics module that is referenced by gmond must be specified and\n   loaded. If the module has been statically linked with gmond, it does\n   not require a load path. However all dynamically loadable modules must\n   include a load path. */\nmodules {\n  module {\n    name = \"core_metrics\"\n  }\n  module {\n    name = \"cpu_module\"\n    path = \"modcpu.so\"\n  }\n  module {\n    name = \"disk_module\"\n    path = \"moddisk.so\"\n  }\n  module {\n    name = \"load_module\"\n    path = \"modload.so\"\n  }\n  module {\n    name = \"mem_module\"\n    path = \"modmem.so\"\n  }\n  module {\n    name = \"net_module\"\n    path = \"modnet.so\"\n  }\n  module {\n    name = \"proc_module\"\n    path = \"modproc.so\"\n  }\n  module {\n    name = \"sys_module\"\n    path = \"modsys.so\"\n  }\n}\n\n/* The old internal 2.5.x metric array has been replaced by the following\n   collection_group directives.  What follows is the default behavior for\n   collecting and sending metrics that is as close to 2.5.x behavior as\n   possible. */\n\n/* This collection group will cause a heartbeat (or beacon) to be sent every\n   20 seconds.  In the heartbeat is the GMOND_STARTED data which expresses\n   the age of the running gmond. */\ncollection_group {\n  collect_once = yes\n  time_threshold = 20\n  metric {\n    name = \"heartbeat\"\n  }\n}\n\n/* This collection group will send general info about this host every\n   1200 secs.\n   This information doesn't change between reboots and is only collected\n   once. */\ncollection_group {\n  collect_once = yes\n  time_threshold = 1200\n  metric {\n    name = \"cpu_num\"\n    title = \"CPU Count\"\n  }\n  metric {\n    name = \"cpu_speed\"\n    title = \"CPU Speed\"\n  }\n  metric {\n    name = \"mem_total\"\n    title = \"Memory Total\"\n  }\n  /* Should this be here? Swap can be added/removed between reboots. */\n  metric {\n    name = \"swap_total\"\n    title = \"Swap Space Total\"\n  }\n  metric {\n    name = \"boottime\"\n    title = \"Last Boot Time\"\n  }\n  metric {\n    name = \"machine_type\"\n    title = \"Machine Type\"\n  }\n  metric {\n    name = \"os_name\"\n    title = \"Operating System\"\n  }\n  metric {\n    name = \"os_release\"\n    title = \"Operating System Release\"\n  }\n  metric {\n    name = \"location\"\n    title = \"Location\"\n  }\n}\n\n/* This collection group will send the status of gexecd for this host\n   every 300 secs.*/\n/* Unlike 2.5.x the default behavior is to report gexecd OFF. */\ncollection_group {\n  collect_once = yes\n  time_threshold = 300\n  metric {\n    name = \"gexec\"\n    title = \"Gexec Status\"\n  }\n}\n\n/* This collection group will collect the CPU status info every 20 secs.\n   The time threshold is set to 90 seconds.  In honesty, this\n   time_threshold could be set significantly higher to reduce\n   unneccessary  network chatter. */\ncollection_group {\n  collect_every = 20\n  time_threshold = 90\n  /* CPU status */\n  metric {\n    name = \"cpu_user\"\n    value_threshold = \"1.0\"\n    title = \"CPU User\"\n  }\n  metric {\n    name = \"cpu_system\"\n    value_threshold = \"1.0\"\n    title = \"CPU System\"\n  }\n  metric {\n    name = \"cpu_idle\"\n    value_threshold = \"5.0\"\n    title = \"CPU Idle\"\n  }\n  metric {\n    name = \"cpu_nice\"\n    value_threshold = \"1.0\"\n    title = \"CPU Nice\"\n  }\n  metric {\n    name = \"cpu_aidle\"\n    value_threshold = \"5.0\"\n    title = \"CPU aidle\"\n  }\n  metric {\n    name = \"cpu_wio\"\n    value_threshold = \"1.0\"\n    title = \"CPU wio\"\n  }\n  metric {\n    name = \"cpu_steal\"\n    value_threshold = \"1.0\"\n    title = \"CPU steal\"\n  }\n  /* The next two metrics are optional if you want more detail...\n     ... since they are accounted for in cpu_system.\n  metric {\n    name = \"cpu_intr\"\n    value_threshold = \"1.0\"\n    title = \"CPU intr\"\n  }\n  metric {\n    name = \"cpu_sintr\"\n    value_threshold = \"1.0\"\n    title = \"CPU sintr\"\n  }\n  */\n}\n\ncollection_group {\n  collect_every = 20\n  time_threshold = 90\n  /* Load Averages */\n  metric {\n    name = \"load_one\"\n    value_threshold = \"1.0\"\n    title = \"One Minute Load Average\"\n  }\n  metric {\n    name = \"load_five\"\n    value_threshold = \"1.0\"\n    title = \"Five Minute Load Average\"\n  }\n  metric {\n    name = \"load_fifteen\"\n    value_threshold = \"1.0\"\n    title = \"Fifteen Minute Load Average\"\n  }\n}\n\n/* This group collects the number of running and total processes */\ncollection_group {\n  collect_every = 80\n  time_threshold = 950\n  metric {\n    name = \"proc_run\"\n    value_threshold = \"1.0\"\n    title = \"Total Running Processes\"\n  }\n  metric {\n    name = \"proc_total\"\n    value_threshold = \"1.0\"\n    title = \"Total Processes\"\n  }\n}\n\n/* This collection group grabs the volatile memory metrics every 40 secs and\n   sends them at least every 180 secs.  This time_threshold can be increased\n   significantly to reduce unneeded network traffic. */\ncollection_group {\n  collect_every = 40\n  time_threshold = 180\n  metric {\n    name = \"mem_free\"\n    value_threshold = \"1024.0\"\n    title = \"Free Memory\"\n  }\n  metric {\n    name = \"mem_shared\"\n    value_threshold = \"1024.0\"\n    title = \"Shared Memory\"\n  }\n  metric {\n    name = \"mem_buffers\"\n    value_threshold = \"1024.0\"\n    title = \"Memory Buffers\"\n  }\n  metric {\n    name = \"mem_cached\"\n    value_threshold = \"1024.0\"\n    title = \"Cached Memory\"\n  }\n  metric {\n    name = \"swap_free\"\n    value_threshold = \"1024.0\"\n    title = \"Free Swap Space\"\n  }\n}\n\ncollection_group {\n  collect_every = 40\n  time_threshold = 300\n  metric {\n    name = \"bytes_out\"\n    value_threshold = 4096\n    title = \"Bytes Sent\"\n  }\n  metric {\n    name = \"bytes_in\"\n    value_threshold = 4096\n    title = \"Bytes Received\"\n  }\n  metric {\n    name = \"pkts_in\"\n    value_threshold = 256\n    title = \"Packets Received\"\n  }\n  metric {\n    name = \"pkts_out\"\n    value_threshold = 256\n    title = \"Packets Sent\"\n  }\n}\n\n/* Different than 2.5.x default since the old config made no sense */\ncollection_group {\n  collect_every = 1800\n  time_threshold = 3600\n  metric {\n    name = \"disk_total\"\n    value_threshold = 1.0\n    title = \"Total Disk Space\"\n  }\n}\n\ncollection_group {\n  collect_every = 40\n  time_threshold = 180\n  metric {\n    name = \"disk_free\"\n    value_threshold = 1.0\n    title = \"Disk Space Available\"\n  }\n  metric {\n    name = \"part_max_used\"\n    value_threshold = 1.0\n    title = \"Maximum Disk Space Used\"\n  }\n}\n\ninclude (\"/etc/ganglia/conf.d/*.conf\")\n\n";
}

// Ganglia_gmond_config_create
// file libgmond.c line 264
struct Ganglia_gmond_config * Ganglia_gmond_config_create(char *path, signed int fallback_to_default)
{
  struct cfg_t *config = (struct cfg_t *)(void *)0;
  char *tilde_expanded;
  tilde_expanded=cfg_tilde_expand(path);
  config=cfg_init(gmond_opts, 4);
  signed int return_value_cfg_parse_1;
  return_value_cfg_parse_1=cfg_parse(config, tilde_expanded);
  signed int return_value_cfg_parse_buf_2;
  if(!(return_value_cfg_parse_1 == -1))
  {
    if(return_value_cfg_parse_1 == 1)
      goto __CPROVER_DUMP_L4;

    if(return_value_cfg_parse_1 == 0)
      goto __CPROVER_DUMP_L5;

  }

  else
  {
    err_msg("Configuration file '%s' not found.\n", tilde_expanded);
    if(fallback_to_default == 0)
      exit(1);

    return_value_cfg_parse_buf_2=cfg_parse_buf(config, default_gmond_configuration);
    if(return_value_cfg_parse_buf_2 == 1)
    {
      err_msg("Your default configuration buffer failed to parse. Exiting.\n");
      exit(1);
    }

    goto __CPROVER_DUMP_L7;

  __CPROVER_DUMP_L4:
    ;
    err_msg("Parse error for '%s'\n", tilde_expanded);
    exit(1);

  __CPROVER_DUMP_L5:
    ;
    goto __CPROVER_DUMP_L7;
  }
  exit(1);

__CPROVER_DUMP_L7:
  ;
  if(!(tilde_expanded == ((char *)NULL)))
    free((void *)tilde_expanded);

  return (struct Ganglia_gmond_config *)config;
}

// Ganglia_metadata_add
// file libgmond.c line 681
void Ganglia_metadata_add(struct Ganglia_metric *gmetric, char *name, char *value)
{
  apr_table_add((struct apr_table_t *)gmetric->extra, name, value);
}

// Ganglia_metadata_send
// file libgmond.c line 443
signed int Ganglia_metadata_send(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels)
{
  signed int return_value_Ganglia_metadata_send_real_1;
  return_value_Ganglia_metadata_send_real_1=Ganglia_metadata_send_real(gmetric, send_channels, (char *)(void *)0);
  return return_value_Ganglia_metadata_send_real_1;
}

// Ganglia_metadata_send_real
// file libgmond.c line 449
signed int Ganglia_metadata_send_real(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels, char *override_string)
{
  signed int len;
  signed int i;
  struct XDR x;
  char gmetricmsg[1464l];
  struct Ganglia_metadata_msg msg;
  const struct apr_array_header_t *arr;
  const struct apr_table_entry_t *elts;
  const char *spoof = "SPOOF";
  struct apr_pool_t *gm_pool = (struct apr_pool_t *)gmetric->pool;
  if((signed int)myhost[0l] == 0)
    apr_gethostname((char *)myhost, 256 + 1, gm_pool);

  msg.id = (enum Ganglia_msg_formats)gmetadata_full;
  memcpy((void *)&msg.Ganglia_metadata_msg_u.gfull.metric, (const void *)gmetric->msg, sizeof(struct Ganglia_metadata_message) /*56ul*/ );
  msg.Ganglia_metadata_msg_u.gfull.metric_id.name=apr_pstrdup(gm_pool, gmetric->msg->name);
  debug_msg("  msg.Ganglia_metadata_msg_u.gfull.metric_id.name: %s\n", msg.Ganglia_metadata_msg_u.gfull.metric_id.name);
  if(!(override_string == ((char *)NULL)))
  {
    msg.Ganglia_metadata_msg_u.gfull.metric_id.host=apr_pstrdup(gm_pool, (char *)override_string);
    debug_msg("  msg.Ganglia_metadata_msg_u.gfull.metric_id.host: %s\n", msg.Ganglia_metadata_msg_u.gfull.metric_id.host);
    msg.Ganglia_metadata_msg_u.gfull.metric_id.spoof = 1;
  }

  else
  {
    msg.Ganglia_metadata_msg_u.gfull.metric_id.host=apr_pstrdup(gm_pool, (char *)myhost);
    debug_msg("  msg.Ganglia_metadata_msg_u.gfull.metric_id.host: %s\n", msg.Ganglia_metadata_msg_u.gfull.metric_id.host);
    msg.Ganglia_metadata_msg_u.gfull.metric_id.spoof = 0;
  }
  arr=apr_table_elts((const struct apr_table_t *)gmetric->extra);
  elts = (const struct apr_table_entry_t *)arr->elts;
  msg.Ganglia_metadata_msg_u.gfull.metric.metadata.metadata_len = (unsigned int)arr->nelts;
  void *return_value_apr_palloc_1;
  return_value_apr_palloc_1=apr_palloc(gm_pool, sizeof(struct Ganglia_extra_data) /*16ul*/  * (unsigned long int)arr->nelts);
  void *return_value_memset_2;
  return_value_memset_2=memset(return_value_apr_palloc_1, 0, sizeof(struct Ganglia_extra_data) /*16ul*/  * (unsigned long int)arr->nelts);
  msg.Ganglia_metadata_msg_u.gfull.metric.metadata.metadata_val = (struct Ganglia_extra_data *)return_value_memset_2;
  i = 0;
  signed int return_value_strcasecmp_3;
  signed int return_value_strcasecmp_5;
  for( ; !(i >= arr->nelts); i = i + 1)
    if(!((elts + (signed long int)i)->key == ((char *)NULL)))
    {
      signed int return_value_toupper_4;
      return_value_toupper_4=toupper((signed int)(unsigned char)(elts + (signed long int)i)->key[(signed long int)0]);
      if(return_value_toupper_4 == (signed int)*spoof)
      {
        return_value_strcasecmp_3=strcasecmp("SPOOF_HOST", (elts + (signed long int)i)->key);
        if(return_value_strcasecmp_3 == 0)
        {
          msg.Ganglia_metadata_msg_u.gfull.metric_id.host=apr_pstrdup(gm_pool, (elts + (signed long int)i)->val);
          msg.Ganglia_metadata_msg_u.gfull.metric_id.spoof = 1;
        }

      }

      signed int return_value_toupper_6;
      return_value_toupper_6=toupper((signed int)(unsigned char)(elts + (signed long int)i)->key[(signed long int)0]);
      if(return_value_toupper_6 == (signed int)*spoof)
      {
        return_value_strcasecmp_5=strcasecmp("SPOOF_HEARTBEAT", (elts + (signed long int)i)->key);
        if(return_value_strcasecmp_5 == 0)
        {
          msg.Ganglia_metadata_msg_u.gfull.metric_id.name=apr_pstrdup(gm_pool, "heartbeat");
          msg.Ganglia_metadata_msg_u.gfull.metric.name = msg.Ganglia_metadata_msg_u.gfull.metric_id.name;
          msg.Ganglia_metadata_msg_u.gfull.metric_id.spoof = 1;
        }

      }

      (msg.Ganglia_metadata_msg_u.gfull.metric.metadata.metadata_val + (signed long int)i)->name=apr_pstrdup(gm_pool, (elts + (signed long int)i)->key);
      (msg.Ganglia_metadata_msg_u.gfull.metric.metadata.metadata_val + (signed long int)i)->data=apr_pstrdup(gm_pool, (elts + (signed long int)i)->val);
    }

  xdrmem_create(&x, gmetricmsg, (unsigned int)((1500 - 28) - 8), (enum xdr_op)XDR_ENCODE);
  signed int return_value_xdr_Ganglia_metadata_msg_7;
  return_value_xdr_Ganglia_metadata_msg_7=xdr_Ganglia_metadata_msg(&x, &msg);
  if(return_value_xdr_Ganglia_metadata_msg_7 == 0)
    return 1;

  else
  {
    unsigned int return_value;
    return_value=(&x)->x_ops->x_getpostn(&x);
    len = (signed int)return_value;
    signed int return_value_Ganglia_udp_send_message_8;
    return_value_Ganglia_udp_send_message_8=Ganglia_udp_send_message(send_channels, gmetricmsg, len);
    return return_value_Ganglia_udp_send_message_8;
  }
}

// Ganglia_metric_create
// file libgmond.c line 415
struct Ganglia_metric * Ganglia_metric_create(struct Ganglia_pool *parent_pool)
{
  struct apr_pool_t *pool;
  struct Ganglia_pool *return_value_Ganglia_pool_create_1;
  return_value_Ganglia_pool_create_1=Ganglia_pool_create(parent_pool);
  pool = (struct apr_pool_t *)return_value_Ganglia_pool_create_1;
  struct Ganglia_metric *gmetric;
  if(pool == ((struct apr_pool_t *)NULL))
    return (struct Ganglia_metric *)(void *)0;

  else
  {
    void *return_value_apr_palloc_2;
    return_value_apr_palloc_2=apr_palloc(pool, sizeof(struct Ganglia_metric) /*32ul*/ );
    void *return_value_memset_3;
    return_value_memset_3=memset(return_value_apr_palloc_2, 0, sizeof(struct Ganglia_metric) /*32ul*/ );
    gmetric = (struct Ganglia_metric *)return_value_memset_3;
    if(gmetric == ((struct Ganglia_metric *)NULL))
    {
      Ganglia_pool_destroy((struct Ganglia_pool *)pool);
      return (struct Ganglia_metric *)(void *)0;
    }

    else
    {
      gmetric->pool = (struct Ganglia_pool *)pool;
      void *return_value_apr_palloc_4;
      return_value_apr_palloc_4=apr_palloc(pool, sizeof(struct Ganglia_metadata_message) /*56ul*/ );
      void *return_value_memset_5;
      return_value_memset_5=memset(return_value_apr_palloc_4, 0, sizeof(struct Ganglia_metadata_message) /*56ul*/ );
      gmetric->msg = (struct Ganglia_metadata_message *)return_value_memset_5;
      if(gmetric->msg == ((struct Ganglia_metadata_message *)NULL))
      {
        Ganglia_pool_destroy((struct Ganglia_pool *)pool);
        return (struct Ganglia_metric *)(void *)0;
      }

      else
      {
        struct apr_table_t *return_value_apr_table_make_6;
        return_value_apr_table_make_6=apr_table_make(pool, 2);
        gmetric->extra = (void *)return_value_apr_table_make_6;
        return gmetric;
      }
    }
  }
}

// Ganglia_metric_destroy
// file libgmond.c line 599
void Ganglia_metric_destroy(struct Ganglia_metric *gmetric)
{
  if(!(gmetric == ((struct Ganglia_metric *)NULL)))
    Ganglia_pool_destroy(gmetric->pool);

}

// Ganglia_metric_send
// file libgmond.c line 590
signed int Ganglia_metric_send(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels)
{
  signed int ret;
  ret=Ganglia_metadata_send(gmetric, send_channels);
  if(ret == 0)
    ret=Ganglia_value_send(gmetric, send_channels);

  return ret;
}

// Ganglia_metric_set
// file libgmond.c line 638
signed int Ganglia_metric_set(struct Ganglia_metric *gmetric, char *name, char *value, char *type, char *units, unsigned int slope, unsigned int tmax, unsigned int dmax)
{
  struct apr_pool_t *gm_pool;
  _Bool tmp_if_expr_3;
  char *return_value_strchr_2;
  _Bool tmp_if_expr_5;
  char *return_value_strchr_4;
  _Bool tmp_if_expr_7;
  char *return_value_strchr_6;
  _Bool tmp_if_expr_10;
  signed int return_value_strcmp_9;
  _Bool tmp_if_expr_12;
  signed int return_value_strcmp_11;
  _Bool tmp_if_expr_14;
  signed int return_value_strcmp_13;
  _Bool tmp_if_expr_16;
  signed int return_value_strcmp_15;
  _Bool tmp_if_expr_18;
  signed int return_value_strcmp_17;
  _Bool tmp_if_expr_20;
  signed int return_value_strcmp_19;
  _Bool tmp_if_expr_22;
  signed int return_value_strcmp_21;
  _Bool tmp_if_expr_24;
  signed int return_value_strcmp_23;
  if(name == ((char *)NULL) || type == ((char *)NULL) || units == ((char *)NULL) || value == ((char *)NULL) || gmetric == ((struct Ganglia_metric *)NULL) || slope >= 5u)
    return 1;

  else
  {
    gm_pool = (struct apr_pool_t *)gmetric->pool;
    char *return_value_strchr_1;
    return_value_strchr_1=strchr(name, 34);
    if(!(return_value_strchr_1 == ((char *)NULL)))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_strchr_2=strchr(value, 34);
      tmp_if_expr_3 = return_value_strchr_2 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_strchr_4=strchr(type, 34);
      tmp_if_expr_5 = return_value_strchr_4 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_strchr_6=strchr(units, 34);
      tmp_if_expr_7 = return_value_strchr_6 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
      return 2;

    else
    {
      signed int return_value_strcmp_8;
      return_value_strcmp_8=strcmp(type, "string");
      if(return_value_strcmp_8 == 0)
        tmp_if_expr_10 = (_Bool)1;

      else
      {
        return_value_strcmp_9=strcmp(type, "int8");
        tmp_if_expr_10 = !(return_value_strcmp_9 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_10)
        tmp_if_expr_12 = (_Bool)1;

      else
      {
        return_value_strcmp_11=strcmp(type, "uint8");
        tmp_if_expr_12 = !(return_value_strcmp_11 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_12)
        tmp_if_expr_14 = (_Bool)1;

      else
      {
        return_value_strcmp_13=strcmp(type, "int16");
        tmp_if_expr_14 = !(return_value_strcmp_13 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_14)
        tmp_if_expr_16 = (_Bool)1;

      else
      {
        return_value_strcmp_15=strcmp(type, "uint16");
        tmp_if_expr_16 = !(return_value_strcmp_15 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_16)
        tmp_if_expr_18 = (_Bool)1;

      else
      {
        return_value_strcmp_17=strcmp(type, "int32");
        tmp_if_expr_18 = !(return_value_strcmp_17 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_18)
        tmp_if_expr_20 = (_Bool)1;

      else
      {
        return_value_strcmp_19=strcmp(type, "uint32");
        tmp_if_expr_20 = !(return_value_strcmp_19 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_20)
        tmp_if_expr_22 = (_Bool)1;

      else
      {
        return_value_strcmp_21=strcmp(type, "float");
        tmp_if_expr_22 = !(return_value_strcmp_21 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_22)
        tmp_if_expr_24 = (_Bool)1;

      else
      {
        return_value_strcmp_23=strcmp(type, "double");
        tmp_if_expr_24 = !(return_value_strcmp_23 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_24)
        return 3;

      else
      {
        signed int return_value_strcmp_26;
        return_value_strcmp_26=strcmp(type, "string");
        if(!(return_value_strcmp_26 == 0))
        {
          signed int return_value_check_value_25;
          return_value_check_value_25=check_value(type, value);
          if(!(return_value_check_value_25 == 0))
            return 4;

        }

        gmetric->msg->name=apr_pstrdup(gm_pool, name);
        gmetric->value=apr_pstrdup(gm_pool, value);
        gmetric->msg->type=apr_pstrdup(gm_pool, type);
        gmetric->msg->units=apr_pstrdup(gm_pool, units);
        gmetric->msg->slope = slope;
        gmetric->msg->tmax = tmax;
        gmetric->msg->dmax = dmax;
        return 0;
      }
    }
  }
}

// Ganglia_pool_create
// file libgmond.c line 233
struct Ganglia_pool * Ganglia_pool_create(struct Ganglia_pool *p)
{
  signed int status;
  struct apr_pool_t *pool = (struct apr_pool_t *)(void *)0;
  struct apr_pool_t *parent = (struct apr_pool_t *)p;
  if(libgmond_apr_lib_initialized == 0)
  {
    status=apr_initialize();
    if(!(status == 0))
      return (struct Ganglia_pool *)(void *)0;

    libgmond_apr_lib_initialized = 1;
    atexit(apr_terminate);
  }

  status=apr_pool_create_ex(&pool, parent, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
  if(!(status == 0))
    return (struct Ganglia_pool *)(void *)0;

  else
    return (struct Ganglia_pool *)pool;
}

// Ganglia_pool_destroy
// file libgmond.c line 258
void Ganglia_pool_destroy(struct Ganglia_pool *pool)
{
  apr_pool_destroy((struct apr_pool_t *)pool);
}

// Ganglia_udp_send_channels_create
// file libgmond.c line 308
struct Ganglia_udp_send_channels * Ganglia_udp_send_channels_create(struct Ganglia_pool *p, struct Ganglia_gmond_config *config)
{
  struct apr_array_header_t *send_channels = (struct apr_array_header_t *)(void *)0;
  struct cfg_t *cfg = (struct cfg_t *)config;
  signed int i;
  signed int num_udp_send_channels;
  unsigned int return_value_cfg_size_1;
  return_value_cfg_size_1=cfg_size(cfg, "udp_send_channel");
  num_udp_send_channels = (signed int)return_value_cfg_size_1;
  struct apr_pool_t *context = (struct apr_pool_t *)p;
  if(!(num_udp_send_channels >= 1))
    return (struct Ganglia_udp_send_channels *)send_channels;

  else
  {
    send_channels=apr_array_make(context, num_udp_send_channels, (signed int)sizeof(struct apr_socket_t *) /*8ul*/ );
    i = 0;
    for( ; !(i >= num_udp_send_channels); i = i + 1)
    {
      struct cfg_t *udp_send_channel;
      char *mcast_join;
      char *mcast_if;
      char *host;
      signed int port;
      signed int ttl;
      signed int bind_hostname;
      struct apr_socket_t *Ganglia_udp_send_channels_create__1__1__1__socket = (struct apr_socket_t *)(void *)0;
      struct apr_pool_t *pool = (struct apr_pool_t *)(void *)0;
      char *bind_address;
      udp_send_channel=cfg_getnsec(cfg, "udp_send_channel", (unsigned int)i);
      host=cfg_getstr(udp_send_channel, "host");
      mcast_join=cfg_getstr(udp_send_channel, "mcast_join");
      mcast_if=cfg_getstr(udp_send_channel, "mcast_if");
      signed long int return_value_cfg_getint_2;
      return_value_cfg_getint_2=cfg_getint(udp_send_channel, "port");
      port = (signed int)return_value_cfg_getint_2;
      signed long int return_value_cfg_getint_3;
      return_value_cfg_getint_3=cfg_getint(udp_send_channel, "ttl");
      ttl = (signed int)return_value_cfg_getint_3;
      bind_address=cfg_getstr(udp_send_channel, "bind");
      enum anonymous_14 return_value_cfg_getbool_4;
      return_value_cfg_getbool_4=cfg_getbool(udp_send_channel, "bind_hostname");
      bind_hostname = (signed int)return_value_cfg_getbool_4;
      debug_msg("udp_send_channel mcast_join=%s mcast_if=%s host=%s port=%d\n", mcast_join != ((char *)NULL) ? mcast_join : "NULL", mcast_if != ((char *)NULL) ? mcast_if : "NULL", host != ((char *)NULL) ? host : "NULL", port);
      if(bind_hostname == cfg_true && !(bind_address == ((char *)NULL)))
      {
        err_msg("udp_send_channel: bind and bind_hostname are mutually exclusive, both parameters can't be specified for the same udp_send_channel\n");
        exit(1);
      }

      apr_pool_create_ex(&pool, context, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
      if(!(mcast_join == ((char *)NULL)))
      {
        Ganglia_udp_send_channels_create__1__1__1__socket=create_mcast_client(pool, mcast_join, (unsigned short int)port, ttl, mcast_if, bind_address, bind_hostname);
        if(Ganglia_udp_send_channels_create__1__1__1__socket == ((struct apr_socket_t *)NULL))
        {
          err_msg("Unable to join multicast channel %s:%d. Exiting\n", mcast_join, port);
          exit(1);
        }

      }

      else
      {
        Ganglia_udp_send_channels_create__1__1__1__socket=create_udp_client(pool, host, (unsigned short int)port, mcast_if, bind_address, bind_hostname);
        if(Ganglia_udp_send_channels_create__1__1__1__socket == ((struct apr_socket_t *)NULL))
        {
          err_msg("Unable to create UDP client for %s:%d. Exiting.\n", host != ((char *)NULL) ? host : "NULL", port);
          exit(1);
        }

      }
      void *return_value_apr_array_push_5;
      return_value_apr_array_push_5=apr_array_push(send_channels);
      *((struct apr_socket_t **)return_value_apr_array_push_5) = Ganglia_udp_send_channels_create__1__1__1__socket;
    }
    return (struct Ganglia_udp_send_channels *)send_channels;
  }
}

// Ganglia_udp_send_message
// file libgmond.c line 390
signed int Ganglia_udp_send_message(struct Ganglia_udp_send_channels *channels, char *buf, signed int len)
{
  signed int status;
  signed int i;
  signed int num_errors = 0;
  unsigned long int size;
  struct apr_array_header_t *chnls = (struct apr_array_header_t *)channels;
  if(buf == ((char *)NULL) || chnls == ((struct apr_array_header_t *)NULL) || !(len >= 1))
    return 1;

  else
  {
    i = 0;
    for( ; !(i >= chnls->nelts); i = i + 1)
    {
      struct apr_socket_t *Ganglia_udp_send_message__1__1__1__socket = ((struct apr_socket_t **)chnls->elts)[(signed long int)i];
      size = (unsigned long int)len;
      status=apr_socket_send(Ganglia_udp_send_message__1__1__1__socket, buf, &size);
      if(!(status == 0))
        num_errors = num_errors + 1;

    }
    return num_errors;
  }
}

// Ganglia_value_send
// file libgmond.c line 584
signed int Ganglia_value_send(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels)
{
  signed int return_value_Ganglia_value_send_real_1;
  return_value_Ganglia_value_send_real_1=Ganglia_value_send_real(gmetric, send_channels, (char *)(void *)0);
  return return_value_Ganglia_value_send_real_1;
}

// Ganglia_value_send_real
// file libgmond.c line 522
signed int Ganglia_value_send_real(struct Ganglia_metric *gmetric, struct Ganglia_udp_send_channels *send_channels, char *override_string)
{
  signed int len;
  signed int i;
  struct XDR x;
  char gmetricmsg[1464l];
  struct Ganglia_value_msg msg;
  const struct apr_array_header_t *arr;
  const struct apr_table_entry_t *elts;
  const char *spoof = "SPOOF";
  struct apr_pool_t *gm_pool = (struct apr_pool_t *)gmetric->pool;
  if((signed int)myhost[0l] == 0)
    apr_gethostname((char *)myhost, 256 + 1, gm_pool);

  msg.id = (enum Ganglia_msg_formats)gmetric_string;
  if(!(override_string == ((char *)NULL)))
  {
    msg.Ganglia_value_msg_u.gstr.metric_id.host=apr_pstrdup(gm_pool, (char *)override_string);
    msg.Ganglia_value_msg_u.gstr.metric_id.spoof = 1;
  }

  else
  {
    msg.Ganglia_value_msg_u.gstr.metric_id.host=apr_pstrdup(gm_pool, (char *)myhost);
    msg.Ganglia_value_msg_u.gstr.metric_id.spoof = 0;
  }
  msg.Ganglia_value_msg_u.gstr.metric_id.name=apr_pstrdup(gm_pool, gmetric->msg->name);
  msg.Ganglia_value_msg_u.gstr.fmt=apr_pstrdup(gm_pool, "%s");
  msg.Ganglia_value_msg_u.gstr.str=apr_pstrdup(gm_pool, gmetric->value);
  arr=apr_table_elts((const struct apr_table_t *)gmetric->extra);
  elts = (const struct apr_table_entry_t *)arr->elts;
  i = 0;
  signed int return_value_strcasecmp_1;
  signed int return_value_strcasecmp_3;
  for( ; !(i >= arr->nelts); i = i + 1)
    if(!((elts + (signed long int)i)->key == ((char *)NULL)))
    {
      signed int return_value_toupper_2;
      return_value_toupper_2=toupper((signed int)(unsigned char)(elts + (signed long int)i)->key[(signed long int)0]);
      if(return_value_toupper_2 == (signed int)*spoof)
      {
        return_value_strcasecmp_1=strcasecmp("SPOOF_HOST", (elts + (signed long int)i)->key);
        if(return_value_strcasecmp_1 == 0)
        {
          msg.Ganglia_value_msg_u.gstr.metric_id.host=apr_pstrdup(gm_pool, (elts + (signed long int)i)->val);
          msg.Ganglia_value_msg_u.gstr.metric_id.spoof = 1;
        }

      }

      signed int return_value_toupper_4;
      return_value_toupper_4=toupper((signed int)(unsigned char)(elts + (signed long int)i)->key[(signed long int)0]);
      if(return_value_toupper_4 == (signed int)*spoof)
      {
        return_value_strcasecmp_3=strcasecmp("SPOOF_HEARTBEAT", (elts + (signed long int)i)->key);
        if(return_value_strcasecmp_3 == 0)
        {
          msg.Ganglia_value_msg_u.gstr.metric_id.name=apr_pstrdup(gm_pool, "heartbeat");
          msg.Ganglia_value_msg_u.gstr.metric_id.spoof = 1;
        }

      }

    }

  xdrmem_create(&x, gmetricmsg, (unsigned int)((1500 - 28) - 8), (enum xdr_op)XDR_ENCODE);
  signed int return_value_xdr_Ganglia_value_msg_5;
  return_value_xdr_Ganglia_value_msg_5=xdr_Ganglia_value_msg(&x, &msg);
  if(return_value_xdr_Ganglia_value_msg_5 == 0)
    return 1;

  else
  {
    unsigned int return_value;
    return_value=(&x)->x_ops->x_getpostn(&x);
    len = (signed int)return_value;
    signed int return_value_Ganglia_udp_send_message_6;
    return_value_Ganglia_udp_send_message_6=Ganglia_udp_send_message(send_channels, gmetricmsg, len);
    return return_value_Ganglia_udp_send_message_6;
  }
}

// RRD_create
// file rrd_helpers.c line 73
static signed int RRD_create(char *rrd, signed int summary, unsigned int step, unsigned int process_time, enum ganglia_slope slope)
{
  const char *data_source_type = "GAUGE";
  char *argv[128l];
  signed int argc = 0;
  signed int heartbeat;
  char s[16l];
  char RRD_create__1__start[64l];
  char sum[64l];
  char num[64l];
  signed int i;
  heartbeat = (signed int)((unsigned int)8 * step);
  signed int tmp_post_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  signed int tmp_post_5;
  signed int tmp_post_6;
  signed int tmp_post_7;
  signed int tmp_post_8;
  signed int tmp_post_9;
  signed int return_value_rrd_test_error_11;
  switch((signed int)slope)
  {
    case GANGLIA_SLOPE_POSITIVE:
    {
      data_source_type = "COUNTER";
      goto __CPROVER_DUMP_L4;
    }
    case GANGLIA_SLOPE_DERIVATIVE:
    {
      data_source_type = "DERIVE";
      goto __CPROVER_DUMP_L4;
    }
    case GANGLIA_SLOPE_ZERO:

    case GANGLIA_SLOPE_NEGATIVE:

    case GANGLIA_SLOPE_BOTH:

    case GANGLIA_SLOPE_UNSPECIFIED:
      data_source_type = "GAUGE";
    default:
    {

    __CPROVER_DUMP_L4:
      ;
      tmp_post_1 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post_1] = "dummy";
      tmp_post_2 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post_2] = rrd;
      tmp_post_3 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post_3] = "--step";
      sprintf(s, "%u", step);
      tmp_post_4 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post_4] = s;
      tmp_post_5 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post_5] = "--start";
      sprintf(RRD_create__1__start, "%u", process_time - (unsigned int)1);
      tmp_post_6 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post_6] = RRD_create__1__start;
      sprintf(sum, "DS:sum:%s:%d:U:U", data_source_type, heartbeat);
      tmp_post_7 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post_7] = sum;
      if(!(summary == 0))
      {
        sprintf(num, "DS:num:%s:%d:U:U", data_source_type, heartbeat);
        tmp_post_8 = argc;
        argc = argc + 1;
        argv[(signed long int)tmp_post_8] = num;
      }

      i = 0;
      for( ; !(i >= gmetad_config.num_RRAs); i = i + 1)
      {
        tmp_post_9 = argc;
        argc = argc + 1;
        argv[(signed long int)tmp_post_9] = gmetad_config.RRAs[(signed long int)i];
      }
      pthread_mutex_lock(&rrd_mutex);
      optind = 0;
      opterr = 0;
      rrd_clear_error();
      rrd_create(argc, argv);
      return_value_rrd_test_error_11=rrd_test_error();
      if(!(return_value_rrd_test_error_11 == 0))
      {
        char *return_value_rrd_get_error_10;
        return_value_rrd_get_error_10=rrd_get_error();
        err_msg("RRD_create: %s", return_value_rrd_get_error_10);
        pthread_mutex_unlock(&rrd_mutex);
        return 1;
      }

      debug_msg("Created rrd %s", rrd);
      pthread_mutex_unlock(&rrd_mutex);
      return 0;
    }
  }
}

// RRD_update
// file rrd_helpers.c line 39
static signed int RRD_update(char *rrd, const char *sum, const char *num, unsigned int process_time)
{
  char *argv[3l];
  signed int argc = 3;
  char val[128l];
  if(!(num == ((const char *)NULL)))
    sprintf(val, "%u:%s:%s", process_time, sum, num);

  else
    sprintf(val, "%u:%s", process_time, sum);
  argv[(signed long int)0] = "dummy";
  argv[(signed long int)1] = rrd;
  argv[(signed long int)2] = val;
  pthread_mutex_lock(&rrd_mutex);
  optind = 0;
  opterr = 0;
  rrd_clear_error();
  rrd_update(argc, argv);
  signed int return_value_rrd_test_error_2;
  return_value_rrd_test_error_2=rrd_test_error();
  if(!(return_value_rrd_test_error_2 == 0))
  {
    char *return_value_rrd_get_error_1;
    return_value_rrd_get_error_1=rrd_get_error();
    err_msg("RRD_update (%s): %s", rrd, return_value_rrd_get_error_1);
    pthread_mutex_unlock(&rrd_mutex);
    return 0;
  }

  pthread_mutex_unlock(&rrd_mutex);
  return 0;
}

// addstring
// file gmetad.c line 100
signed int addstring(char *strings, signed int *edge, const char *s)
{
  signed int e = *edge;
  signed int addstring__1__end;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  addstring__1__end = (signed int)((unsigned long int)e + return_value_strlen_1 + (unsigned long int)1);
  if(e >= 1573 || addstring__1__end >= 1573)
  {
    err_msg("Field is too big!!");
    return -1;
  }

  else
  {
    strcpy(strings + (signed long int)e, s);
    *edge = addstring__1__end;
    return e;
  }
}

// applicable
// file server.c line 289
signed int applicable(enum anonymous_22 filter, struct Generic_type *node)
{
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  switch((signed int)filter)
  {
    case NO_FILTER:
      return 1;
    case SUMMARY:
    {
      if((signed int)node->id == ROOT_NODE)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)node->id == CLUSTER_NODE ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)node->id == GRID_NODE ? (_Bool)1 : (_Bool)0;
      return (signed int)tmp_if_expr_2;
    }
    default:
      return 0;
  }
}

// applyfilter
// file server.c line 309
signed int applyfilter(struct anonymous_16 *client, struct Generic_type *node)
{
  enum anonymous_22 f = client->filter;
  if((signed int)node->id == GRID_NODE)
    f = (enum anonymous_22)SUMMARY;

  signed int return_value_applicable_1;
  return_value_applicable_1=applicable(f, node);
  signed int return_value_source_summary_2;
  if(return_value_applicable_1 == 0)
    return 1;

  else
    switch((signed int)f)
    {
      case NO_FILTER:
        return 0;
      case SUMMARY:
      {
        return_value_source_summary_2=source_summary((struct anonymous_11 *)node, client);
        return return_value_source_summary_2;
      }
      default:
        return 0;
    }
}

// apr_sockaddr_ip_buffer_get
// file apr_net.c line 46
signed int apr_sockaddr_ip_buffer_get(char *addr, signed int len, struct apr_sockaddr_t *sockaddr)
{
  _Bool tmp_if_expr_1;
  if(addr == ((char *)NULL) || sockaddr == ((struct apr_sockaddr_t *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = len < sockaddr->addr_str_len ? (_Bool)1 : (_Bool)0;
  _Bool tmp_statement_expression_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  unsigned int return_value_htonl_5;
  if(tmp_if_expr_1)
    return 22;

  else
  {
    apr_inet_ntop(sockaddr->family, sockaddr->ipaddr_ptr, addr, (unsigned long int)sockaddr->addr_str_len);
    if(sockaddr->family == 10)
    {
      struct in6_addr *__a = (struct in6_addr *)sockaddr->ipaddr_ptr;
      if(__a->__in6_u.__u6_addr32[0l] == 0u)
        tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_4 = (_Bool)0;
      if(tmp_if_expr_4)
      {
        return_value_htonl_5=htonl((unsigned int)0xffff);
        tmp_if_expr_6 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl_5 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_6 = (_Bool)0;
      tmp_statement_expression_3 = tmp_if_expr_6;
      if(tmp_statement_expression_3)
      {
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(addr + (signed long int)7);
        memmove((void *)addr, (const void *)(addr + (signed long int)7), return_value_strlen_2 + (unsigned long int)1);
      }

    }

    return 0;
  }
}

// authority_mode
// file process_xml.c line 60
static signed int authority_mode(struct anonymous_35 *xmldata)
{
  return (signed int)(xmldata->grid_depth == 0);
}

// become_a_nobody
// file ../lib/become_a_nobody.h line 4
void become_a_nobody(const char *username)
{
  signed int rval;
  struct passwd *pw;
  pw=getpwnam(username);
  if(pw == ((struct passwd *)NULL))
    err_quit("user '%s' does not exist\n\n", username);

  unsigned int return_value_getuid_1;
  return_value_getuid_1=getuid();
  rval = (signed int)return_value_getuid_1;
  if(!((unsigned int)rval == pw->pw_uid))
  {
    if(!(rval == 0))
      err_quit("Must be root to setuid to \"%s\"\n\n", username);

    rval=setgid(pw->pw_gid);
    if(!(rval >= 0))
      err_quit("exiting. setgid %d error", (signed int)pw->pw_gid);

    rval=initgroups(username, pw->pw_gid);
    if(!(rval >= 0))
      err_quit("exiting. initgroups '%s', %d error", username, (signed int)pw->pw_gid);

    rval=setuid(pw->pw_uid);
    if(!(rval >= 0))
      err_quit("exiting. setuid '%s' error", username);

  }

}

// build_default_gmond_configuration
// file libgmond.c line 204
void build_default_gmond_configuration(struct Ganglia_pool *p)
{
  struct apr_pool_t *context = (struct apr_pool_t *)p;
  default_gmond_configuration=apr_pstrdup(context, "/* This configuration is as close to 2.5.x default behavior as possible\n   The values closely match ./gmond/metric.h definitions in 2.5.x */\nglobals {\n  daemonize = yes\n  setuid = yes\n  user = nobody\n  debug_level = 0\n  max_udp_msg_len = 1472\n  mute = no\n  deaf = no\n  allow_extra_data = yes\n  host_dmax = 86400 /*secs. Expires (removes from web interface) hosts in 1 day */\n  host_tmax = 20 /*secs */\n  cleanup_threshold = 300 /*secs */\n  gexec = no\n  # By default gmond will use reverse DNS resolution when displaying your hostname\n  # Uncommeting following value will override that value.\n  # override_hostname = \"mywebserver.domain.com\"\n  # If you are not using multicast this value should be set to something other than 0.\n  # Otherwise if you restart aggregator gmond you will get empty graphs. 60 seconds is reasonable\n  send_metadata_interval = 0 /*secs */\n\n}\n\n/*\n * The cluster attributes specified will be used as part of the <CLUSTER>\n * tag that will wrap all hosts collected by this instance.\n */\ncluster {\n  name = \"unspecified\"\n  owner = \"unspecified\"\n  latlong = \"unspecified\"\n  url = \"unspecified\"\n}\n\n/* The host section describes attributes of the host, like the location */\nhost {\n  location = \"unspecified\"\n}\n\n/* Feel free to specify as many udp_send_channels as you like.  Gmond\n   used to only support having a single channel */\nudp_send_channel {\n  #bind_hostname = yes # Highly recommended, soon to be default.\n                       # This option tells gmond to use a source address\n                       # that resolves to the machine's hostname.  Without\n                       # this, the metrics may appear to come from any\n                       # interface and the DNS names associated with\n                       # those IPs will be used to create the RRDs.\n  mcast_join = 239.2.11.71\n  port = 8649\n  ttl = 1\n}\n\n/* You can specify as many udp_recv_channels as you like as well. */\nudp_recv_channel {\n  mcast_join = 239.2.11.71\n  port = 8649\n  bind = 239.2.11.71\n  retry_bind = true\n  # Size of the UDP buffer. If you are handling lots of metrics you really\n  # should bump it up to e.g. 10MB or even higher.\n  # buffer = 10485760\n}\n\n/* You can specify as many tcp_accept_channels as you like to share\n   an xml description of the state of the cluster */\ntcp_accept_channel {\n  port = 8649\n  # If you want to gzip XML output\n  gzip_output = no\n}\n\n");
  default_gmond_configuration=apr_pstrcat(context, default_gmond_configuration, (const void *)"/* Channel to receive sFlow datagrams */\n#udp_recv_channel {\n#  port = 6343\n#}\n\n/* Optional sFlow settings */\n#sflow {\n# udp_port = 6343\n# accept_vm_metrics = yes\n# accept_jvm_metrics = yes\n# multiple_jvm_instances = no\n# accept_http_metrics = yes\n# multiple_http_instances = no\n# accept_memcache_metrics = yes\n# multiple_memcache_instances = no\n#}\n\n", (void *)0);
  default_gmond_configuration=apr_pstrcat(context, default_gmond_configuration, (const void *)"/* Each metrics module that is referenced by gmond must be specified and\n   loaded. If the module has been statically linked with gmond, it does\n   not require a load path. However all dynamically loadable modules must\n   include a load path. */\nmodules {\n  module {\n    name = \"core_metrics\"\n  }\n  module {\n    name = \"cpu_module\"\n    path = \"modcpu.so\"\n  }\n  module {\n    name = \"disk_module\"\n    path = \"moddisk.so\"\n  }\n  module {\n    name = \"load_module\"\n    path = \"modload.so\"\n  }\n  module {\n    name = \"mem_module\"\n    path = \"modmem.so\"\n  }\n  module {\n    name = \"net_module\"\n    path = \"modnet.so\"\n  }\n  module {\n    name = \"proc_module\"\n    path = \"modproc.so\"\n  }\n  module {\n    name = \"sys_module\"\n    path = \"modsys.so\"\n  }\n}\n\n/* The old internal 2.5.x metric array has been replaced by the following\n   collection_group directives.  What follows is the default behavior for\n   collecting and sending metrics that is as close to 2.5.x behavior as\n   possible. */\n\n/* This collection group will cause a heartbeat (or beacon) to be sent every\n   20 seconds.  In the heartbeat is the GMOND_STARTED data which expresses\n   the age of the running gmond. */\ncollection_group {\n  collect_once = yes\n  time_threshold = 20\n  metric {\n    name = \"heartbeat\"\n  }\n}\n\n/* This collection group will send general info about this host every\n   1200 secs.\n   This information doesn't change between reboots and is only collected\n   once. */\ncollection_group {\n  collect_once = yes\n  time_threshold = 1200\n  metric {\n    name = \"cpu_num\"\n    title = \"CPU Count\"\n  }\n  metric {\n    name = \"cpu_speed\"\n    title = \"CPU Speed\"\n  }\n  metric {\n    name = \"mem_total\"\n    title = \"Memory Total\"\n  }\n  /* Should this be here? Swap can be added/removed between reboots. */\n  metric {\n    name = \"swap_total\"\n    title = \"Swap Space Total\"\n  }\n  metric {\n    name = \"boottime\"\n    title = \"Last Boot Time\"\n  }\n  metric {\n    name = \"machine_type\"\n    title = \"Machine Type\"\n  }\n  metric {\n    name = \"os_name\"\n    title = \"Operating System\"\n  }\n  metric {\n    name = \"os_release\"\n    title = \"Operating System Release\"\n  }\n  metric {\n    name = \"location\"\n    title = \"Location\"\n  }\n}\n\n/* This collection group will send the status of gexecd for this host\n   every 300 secs.*/\n/* Unlike 2.5.x the default behavior is to report gexecd OFF. */\ncollection_group {\n  collect_once = yes\n  time_threshold = 300\n  metric {\n    name = \"gexec\"\n    title = \"Gexec Status\"\n  }\n}\n\n/* This collection group will collect the CPU status info every 20 secs.\n   The time threshold is set to 90 seconds.  In honesty, this\n   time_threshold could be set significantly higher to reduce\n   unneccessary  network chatter. */\ncollection_group {\n  collect_every = 20\n  time_threshold = 90\n  /* CPU status */\n  metric {\n    name = \"cpu_user\"\n    value_threshold = \"1.0\"\n    title = \"CPU User\"\n  }\n  metric {\n    name = \"cpu_system\"\n    value_threshold = \"1.0\"\n    title = \"CPU System\"\n  }\n  metric {\n    name = \"cpu_idle\"\n    value_threshold = \"5.0\"\n    title = \"CPU Idle\"\n  }\n  metric {\n    name = \"cpu_nice\"\n    value_threshold = \"1.0\"\n    title = \"CPU Nice\"\n  }\n  metric {\n    name = \"cpu_aidle\"\n    value_threshold = \"5.0\"\n    title = \"CPU aidle\"\n  }\n  metric {\n    name = \"cpu_wio\"\n    value_threshold = \"1.0\"\n    title = \"CPU wio\"\n  }\n  metric {\n    name = \"cpu_steal\"\n    value_threshold = \"1.0\"\n    title = \"CPU steal\"\n  }\n  /* The next two metrics are optional if you want more detail...\n     ... since they are accounted for in cpu_system.\n  metric {\n    name = \"cpu_intr\"\n    value_threshold = \"1.0\"\n    title = \"CPU intr\"\n  }\n  metric {\n    name = \"cpu_sintr\"\n    value_threshold = \"1.0\"\n    title = \"CPU sintr\"\n  }\n  */\n}\n\ncollection_group {\n  collect_every = 20\n  time_threshold = 90\n  /* Load Averages */\n  metric {\n    name = \"load_one\"\n    value_threshold = \"1.0\"\n    title = \"One Minute Load Average\"\n  }\n  metric {\n    name = \"load_five\"\n    value_threshold = \"1.0\"\n    title = \"Five Minute Load Average\"\n  }\n  metric {\n    name = \"load_fifteen\"\n    value_threshold = \"1.0\"\n    title = \"Fifteen Minute Load Average\"\n  }\n}\n\n/* This group collects the number of running and total processes */\ncollection_group {\n  collect_every = 80\n  time_threshold = 950\n  metric {\n    name = \"proc_run\"\n    value_threshold = \"1.0\"\n    title = \"Total Running Processes\"\n  }\n  metric {\n    name = \"proc_total\"\n    value_threshold = \"1.0\"\n    title = \"Total Processes\"\n  }\n}\n\n/* This collection group grabs the volatile memory metrics every 40 secs and\n   sends them at least every 180 secs.  This time_threshold can be increased\n   significantly to reduce unneeded network traffic. */\ncollection_group {\n  collect_every = 40\n  time_threshold = 180\n  metric {\n    name = \"mem_free\"\n    value_threshold = \"1024.0\"\n    title = \"Free Memory\"\n  }\n  metric {\n    name = \"mem_shared\"\n    value_threshold = \"1024.0\"\n    title = \"Shared Memory\"\n  }\n  metric {\n    name = \"mem_buffers\"\n    value_threshold = \"1024.0\"\n    title = \"Memory Buffers\"\n  }\n  metric {\n    name = \"mem_cached\"\n    value_threshold = \"1024.0\"\n    title = \"Cached Memory\"\n  }\n  metric {\n    name = \"swap_free\"\n    value_threshold = \"1024.0\"\n    title = \"Free Swap Space\"\n  }\n}\n\ncollection_group {\n  collect_every = 40\n  time_threshold = 300\n  metric {\n    name = \"bytes_out\"\n    value_threshold = 4096\n    title = \"Bytes Sent\"\n  }\n  metric {\n    name = \"bytes_in\"\n    value_threshold = 4096\n    title = \"Bytes Received\"\n  }\n  metric {\n    name = \"pkts_in\"\n    value_threshold = 256\n    title = \"Packets Received\"\n  }\n  metric {\n    name = \"pkts_out\"\n    value_threshold = 256\n    title = \"Packets Sent\"\n  }\n}\n\n/* Different than 2.5.x default since the old config made no sense */\ncollection_group {\n  collect_every = 1800\n  time_threshold = 3600\n  metric {\n    name = \"disk_total\"\n    value_threshold = 1.0\n    title = \"Total Disk Space\"\n  }\n}\n\ncollection_group {\n  collect_every = 40\n  time_threshold = 180\n  metric {\n    name = \"disk_free\"\n    value_threshold = 1.0\n    title = \"Disk Space Available\"\n  }\n  metric {\n    name = \"part_max_used\"\n    value_threshold = 1.0\n    title = \"Maximum Disk Space Used\"\n  }\n}\n\ninclude (\"/etc/ganglia/conf.d/*.conf\")\n\n", (void *)0);
}

// cb_RRAs
// file conf.c line 63
static const char * cb_RRAs(struct command_t *cmd, void *ctx)
{
  signed int i;
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  c->num_RRAs = cmd->arg_count;
  i = 0;
  for( ; !(i >= c->num_RRAs); i = i + 1)
    c->RRAs[(signed long int)i]=strdup(cmd->data.list[(signed long int)i]);
  return (const char *)(void *)0;
}

// cb_all_trusted
// file conf.c line 33
static const char * cb_all_trusted(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("All hosts are trusted!");
  c->all_trusted = 1;
  return (const char *)(void *)0;
}

// cb_authority
// file conf.c line 23
static const char * cb_authority(struct command_t *cmd, void *ctx)
{
  debug_msg("Grid authority %s", cmd->data.str);
  root.authority_ptr = (signed short int)0;
  strcpy(root.strings, cmd->data.str);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(root.strings);
  root.stringslen = root.stringslen + (signed short int)(return_value_strlen_1 + (unsigned long int)1);
  return (const char *)(void *)0;
}

// cb_carbon_port
// file conf.c line 265
static const char * cb_carbon_port(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting carbon port to %ld", cmd->data.value);
  c->carbon_port = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// cb_carbon_protocol
// file conf.c line 273
static const char * cb_carbon_protocol(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting carbon protocol to %s", cmd->data.str);
  c->carbon_protocol=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_carbon_server
// file conf.c line 257
static const char * cb_carbon_server(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Enabling Graphite proxy to %s", cmd->data.str);
  c->carbon_server=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_carbon_timeout
// file conf.c line 281
static const char * cb_carbon_timeout(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting carbon timeout to %ld", cmd->data.value);
  c->carbon_timeout = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// cb_case_sensitive_hostnames
// file conf.c line 250
static const char * cb_case_sensitive_hostnames(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  c->case_sensitive_hostnames = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// cb_data_source
// file conf.c line 75
static const char * cb_data_source(struct command_t *cmd, void *ctx)
{
  unsigned int i;
  struct anonymous_6 *dslist;
  struct anonymous_7 key;
  struct anonymous_7 val;
  struct anonymous_7 *find;
  signed int port;
  signed int rv = 0;
  unsigned long int step;
  unsigned int source_index = (unsigned int)0;
  char *p;
  char *str;
  char *endptr;
  struct sockaddr_in sa;
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  source_index = source_index + 1u;
  debug_msg("Datasource = [%s]", cmd->data.list[(signed long int)0]);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_6) /*32ul*/ );
  dslist = (struct anonymous_6 *)return_value_malloc_1;
  if(dslist == ((struct anonymous_6 *)NULL))
    err_quit("Unable to malloc data source list");

  dslist->name=strdup(cmd->data.list[(signed long int)0]);
  i = (unsigned int)1;
  step=strtoul(cmd->data.list[(signed long int)i], &endptr, 10);
  _Bool tmp_if_expr_2;
  if(!(step == 0ul))
    tmp_if_expr_2 = (signed int)*endptr == 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    dslist->step = (unsigned int)step;
    i = i + 1u;
  }

  else
    dslist->step = (unsigned int)15;
  debug_msg("Polling interval for %s is %u sec.", dslist->name, dslist->step);
  c->shortest_step = (signed int)dslist->step;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc((unsigned long int)((unsigned int)cmd->arg_count - i) * sizeof(struct anonymous_4 *) /*8ul*/ );
  dslist->sources = (struct anonymous_4 **)return_value_malloc_3;
  if(dslist->sources == ((struct anonymous_4 **)NULL))
    err_quit("Unable to malloc sources array");

  dslist->num_sources = (unsigned int)0;
  dslist->last_good_index = -1;
  for( ; !(i >= (unsigned int)cmd->arg_count); i = i + 1u)
  {
    str = cmd->data.list[(signed long int)i];
    p=strchr(str, 58);
    if(!(p == ((char *)NULL)))
    {
      *p = (char)0;
      port=atoi(p + (signed long int)1);
    }

    else
      port = 8649;
    rv=g_gethostbyname(cmd->data.list[(signed long int)i], &sa, (char **)(void *)0);
    if(rv == 0)
      err_msg("Warning: we failed to resolve data source name %s", cmd->data.list[(signed long int)i]);

    else
    {
      void *return_value_malloc_4;
      return_value_malloc_4=malloc((unsigned long int)128);
      str = (char *)return_value_malloc_4;
      my_inet_ntop(2, (void *)&sa.sin_addr, str, (unsigned long int)128);
      debug_msg("Trying to connect to %s:%d for [%s]", str, port, dslist->name);
      struct anonymous_4 *return_value_g_inetaddr_new_5;
      return_value_g_inetaddr_new_5=g_inetaddr_new(str, port);
      dslist->sources[(signed long int)dslist->num_sources] = (struct anonymous_4 *)return_value_g_inetaddr_new_5;
      if(dslist->sources[(signed long int)dslist->num_sources] == ((struct anonymous_4 *)NULL))
        err_quit("Unable to create inetaddr [%s:%d] and save it to [%s]", str, port, dslist->name);

      else
        dslist->num_sources = dslist->num_sources + 1u;
      free((void *)str);
    }
  }
  key.data = (void *)cmd->data.list[(signed long int)0];
  unsigned long int return_value_strlen_6;
  return_value_strlen_6=strlen((const char *)key.data);
  key.size = (unsigned int)(return_value_strlen_6 + (unsigned long int)1);
  val.data = (void *)&dslist;
  val.size = (unsigned int)sizeof(struct anonymous_6 *) /*8ul*/ ;
  find=hash_insert(&key, &val, sources);
  if(find == ((struct anonymous_7 *)NULL))
    err_quit("Unable to insert list pointer into source hash\n");

  debug_msg("Data inserted for [%s] into sources hash", (const char *)key.data);
  return (const char *)(void *)0;
}

// cb_debug_level
// file conf.c line 169
static const char * cb_debug_level(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  c->debug_level = (signed int)cmd->data.value;
  debug_msg("Setting the debug level to %ld", cmd->data.value);
  return (const char *)(void *)0;
}

// cb_graphite_path
// file conf.c line 305
static const char * cb_graphite_path(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting Graphite path to %s", cmd->data.str);
  c->graphite_path=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_graphite_prefix
// file conf.c line 297
static const char * cb_graphite_prefix(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Enabling Graphite proxy to %s", cmd->data.str);
  c->graphite_prefix=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_gridname
// file conf.c line 15
static const char * cb_gridname(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Grid name %s", cmd->data.str);
  c->gridname=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_interactive_port
// file conf.c line 185
static const char * cb_interactive_port(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting interactive port to %ld", cmd->data.value);
  c->interactive_port = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// cb_memcached_parameters
// file conf.c line 289
static const char * cb_memcached_parameters(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Enabling memcached parameters to %s", cmd->data.str);
  c->memcached_parameters=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_rrd_rootdir
// file conf.c line 209
static const char * cb_rrd_rootdir(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting the RRD Rootdir to %s", cmd->data.str);
  c->rrd_rootdir=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_scalable
// file conf.c line 232
static const char * cb_scalable(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting scalable = %s", cmd->data.str);
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(cmd->data.str, "off");
  if(return_value_strcmp_1 == 0)
    c->scalable_mode = 0;

  return (const char *)(void *)0;
}

// cb_server_threads
// file conf.c line 193
static const char * cb_server_threads(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting number of xml server threads to %ld", cmd->data.value);
  c->server_threads = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// cb_setuid
// file conf.c line 225
static const char * cb_setuid(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  c->should_setuid = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// cb_setuid_username
// file conf.c line 217
static const char * cb_setuid_username(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting setuid username to %s", cmd->data.str);
  c->setuid_username=strdup(cmd->data.str);
  return (const char *)(void *)0;
}

// cb_trusted_hosts
// file conf.c line 41
static const char * cb_trusted_hosts(struct command_t *cmd, void *ctx)
{
  signed int i;
  signed int rv;
  struct _llist_entry *le;
  struct sockaddr_in sa;
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  i = 0;
  for( ; !(i >= cmd->arg_count); i = i + 1)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct _llist_entry) /*24ul*/ );
    le = (struct _llist_entry *)return_value_malloc_1;
    rv=g_gethostbyname(cmd->data.list[(signed long int)i], &sa, (char **)(void *)0);
    if(rv == 0)
      err_msg("Warning: we failed to resolve trusted host name %s", cmd->data.list[(signed long int)i]);

    else
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)128);
      le->val = (void *)(char *)return_value_malloc_2;
      my_inet_ntop(2, (void *)&sa.sin_addr, (char *)le->val, (unsigned long int)128);
      llist_add(&c->trusted_hosts, le);
    }
  }
  return (const char *)(void *)0;
}

// cb_umask
// file conf.c line 201
static const char * cb_umask(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting umask to %.5lo & 07077", cmd->data.value);
  c->umask = (signed int)(cmd->data.value & (signed long int)07077);
  return (const char *)(void *)0;
}

// cb_unsummarized_metrics
// file conf.c line 313
static const char * cb_unsummarized_metrics(struct command_t *cmd, void *ctx)
{
  signed int i;
  struct _llist_entry *le;
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  i = 0;
  for( ; !(i >= cmd->arg_count); i = i + 1)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct _llist_entry) /*24ul*/ );
    le = (struct _llist_entry *)return_value_malloc_1;
    char *return_value_strdup_2;
    return_value_strdup_2=strdup(cmd->data.list[(signed long int)i]);
    le->val = (void *)return_value_strdup_2;
    llist_add(&c->unsummarized_metrics, le);
    debug_msg("Adding %s to unsummarized_metrics", (const char *)le->val);
  }
  return (const char *)(void *)0;
}

// cb_write_rrds
// file conf.c line 241
static const char * cb_write_rrds(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting write_rrds = %s", cmd->data.str);
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(cmd->data.str, "off");
  if(return_value_strcmp_1 == 0)
    c->write_rrds = (signed int)cmd->data.value;

  return (const char *)(void *)0;
}

// cb_xml_port
// file conf.c line 177
static const char * cb_xml_port(struct command_t *cmd, void *ctx)
{
  struct anonymous_5 *c = (struct anonymous_5 *)cmd->option->info;
  debug_msg("Setting xml port to %ld", cmd->data.value);
  c->xml_port = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// check_value
// file libgmond.c line 608
signed int check_value(char *type, char *value)
{
  char *tail;
  signed int ret = 1;
  double d;
  signed long int l;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(type, "float");
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_2;
  if(!(return_value_strcmp_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_strcmp_2=strcmp(type, "double");
    tmp_if_expr_3 = return_value_strcmp_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    d=strtod(value, &tail);

  else
    l=strtol(value, &tail, 10);
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(tail);
  if(return_value_strlen_4 == 0ul)
    ret = 0;

  return ret;
}

// cleanup_metric
// file cleanup.c line 60
static signed int cleanup_metric(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct cleanup_arg *cleanup = (struct cleanup_arg *)arg;
  struct timeval *tv = cleanup->tv;
  struct anonymous_9 *metric = (struct anonymous_9 *)val->data;
  unsigned int born = (unsigned int)metric->t0.tv_sec;
  if(!(metric->dmax == 0u))
  {
    if((signed long int)metric->dmax >= tv->tv_sec + -((signed long int)born))
      goto __CPROVER_DUMP_L1;

    cleanup->key = key;
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return 0;
  }
}

// cleanup_node
// file cleanup.c line 80
static signed int cleanup_node(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct cleanup_arg *nodecleanup = (struct cleanup_arg *)arg;
  struct cleanup_arg cleanup;
  struct timeval *tv = (struct timeval *)nodecleanup->tv;
  struct anonymous_10 *node = (struct anonymous_10 *)val->data;
  struct anonymous_7 *rv;
  unsigned int born = (unsigned int)node->t0.tv_sec;
  signed int return_value_hash_walkfrom_1;
  if(!(node->dmax == 0u))
  {
    if((signed long int)node->dmax >= tv->tv_sec + -((signed long int)born))
      goto __CPROVER_DUMP_L1;

    nodecleanup->key = key;
    nodecleanup->val = val;
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    cleanup.tv = tv;
    cleanup.key = ((struct anonymous_7 *)NULL);
    cleanup.hashval = (unsigned long int)0;
    do
    {
      return_value_hash_walkfrom_1=hash_walkfrom(node->metrics, cleanup.hashval, cleanup_metric, (void *)&cleanup);
      if(return_value_hash_walkfrom_1 == 0)
        break;

      if(!(cleanup.key == ((struct anonymous_7 *)NULL)))
      {
        cleanup.hashval=hashval(cleanup.key, node->metrics);
        rv=hash_delete(cleanup.key, node->metrics);
        if(!(rv == ((struct anonymous_7 *)NULL)))
          datum_free(rv);

        cleanup.key = ((struct anonymous_7 *)NULL);
      }

      else
        break;
    }
    while((_Bool)1);
    return 0;
  }
}

// cleanup_source
// file cleanup.c line 121
static signed int cleanup_source(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct cleanup_arg *nodecleanup = (struct cleanup_arg *)arg;
  struct cleanup_arg cleanup;
  struct timeval *tv = (struct timeval *)nodecleanup->tv;
  struct anonymous_11 *source = (struct anonymous_11 *)val->data;
  struct anonymous_7 *rv;
  struct anonymous_10 *node;
  struct anonymous_8 *cleanup_source__1__metric_summary;
  cleanup.tv = tv;
  cleanup.key = ((struct anonymous_7 *)NULL);
  cleanup.hashval = (unsigned long int)0;
  cleanup_source__1__metric_summary = source->metric_summary;
  signed int return_value_hash_walkfrom_1;
  do
  {
    return_value_hash_walkfrom_1=hash_walkfrom(cleanup_source__1__metric_summary, cleanup.hashval, cleanup_metric, (void *)&cleanup);
    if(return_value_hash_walkfrom_1 == 0)
      break;

    if(!(cleanup.key == ((struct anonymous_7 *)NULL)))
    {
      cleanup.hashval=hashval(cleanup.key, cleanup_source__1__metric_summary);
      rv=hash_delete(cleanup.key, cleanup_source__1__metric_summary);
      if(!(rv == ((struct anonymous_7 *)NULL)))
        datum_free(rv);

      cleanup.key = ((struct anonymous_7 *)NULL);
    }

    else
      break;
  }
  while((_Bool)1);
  signed int return_value_hash_walkfrom_2;
  if(source->authority == ((struct anonymous_8 *)NULL))
    return 0;

  else
  {
    cleanup.tv = tv;
    cleanup.key = ((struct anonymous_7 *)NULL);
    cleanup.hashval = (unsigned long int)0;
    do
    {
      return_value_hash_walkfrom_2=hash_walkfrom(source->authority, cleanup.hashval, cleanup_node, (void *)&cleanup);
      if(return_value_hash_walkfrom_2 == 0)
        break;

      if(!(cleanup.key == ((struct anonymous_7 *)NULL)))
      {
        debug_msg("Cleanup deleting host \"%s\"", (char *)cleanup.key->data);
        node = (struct anonymous_10 *)cleanup.val->data;
        hash_destroy(node->metrics);
        cleanup.hashval=hashval(cleanup.key, source->authority);
        rv=hash_delete(cleanup.key, source->authority);
        if(!(rv == ((struct anonymous_7 *)NULL)))
          datum_free(rv);

        cleanup.key = ((struct anonymous_7 *)NULL);
      }

      else
        break;
    }
    while((_Bool)1);
    return 0;
  }
}

// cleanup_thread
// file cleanup.c line 187
void * cleanup_thread(void *arg)
{
  struct timeval tv;
  struct cleanup_arg cleanup;
  struct anonymous_7 *rv;
  struct anonymous_11 *source;
  signed int return_value_hash_walkfrom_1;
  do
  {
    apr_sleep((signed long int)180 * 1000000L);
    debug_msg("Cleanup thread running...");
    gettimeofday(&tv, (struct timezone *)(void *)0);
    cleanup.tv = &tv;
    cleanup.key = ((struct anonymous_7 *)NULL);
    cleanup.val = ((struct anonymous_7 *)NULL);
    cleanup.hashval = (unsigned long int)0;
    do
    {
      return_value_hash_walkfrom_1=hash_walkfrom(root.authority, cleanup.hashval, cleanup_source, (void *)&cleanup);
      if(return_value_hash_walkfrom_1 == 0)
        break;

      if(!(cleanup.key == ((struct anonymous_7 *)NULL)))
      {
        debug_msg("Cleanup deleting source \"%s\"", (char *)cleanup.key->data);
        source = (struct anonymous_11 *)cleanup.val->data;
        hash_destroy(source->metric_summary);
        if(!(source->authority == ((struct anonymous_8 *)NULL)))
          hash_destroy(source->authority);

        cleanup.hashval=hashval(cleanup.key, root.authority);
        rv=hash_delete(cleanup.key, root.authority);
        if(!(rv == ((struct anonymous_7 *)NULL)))
          datum_free(rv);

        cleanup.key = ((struct anonymous_7 *)NULL);
      }

      else
        break;
    }
    while((_Bool)1);
  }
  while((_Bool)1);
}

// clear_args
// file cmdline.c line 72
static void clear_args(struct gengetopt_args_info *args_info)
{
  (void)args_info;
  args_info->conf_arg=gengetopt_strdup("/etc/ganglia/gmetad.conf");
  args_info->conf_orig = (char *)(void *)0;
  args_info->debug_arg = 0;
  args_info->debug_orig = (char *)(void *)0;
  args_info->pid_file_arg = (char *)(void *)0;
  args_info->pid_file_orig = (char *)(void *)0;
}

// clear_given
// file cmdline.c line 62
static void clear_given(struct gengetopt_args_info *args_info)
{
  args_info->help_given = (unsigned int)0;
  args_info->version_given = (unsigned int)0;
  args_info->conf_given = (unsigned int)0;
  args_info->debug_given = (unsigned int)0;
  args_info->pid_file_given = (unsigned int)0;
}

// cluster_dead_hosts_sort
// file ganglia.c line 241
static signed int cluster_dead_hosts_sort(struct _llist_entry *a, struct _llist_entry *b)
{
  double ai;
  double bi;
  ai = (double)((struct gexec_host_t *)a->val)->last_reported;
  bi = (double)((struct gexec_host_t *)b->val)->last_reported;
  if(ai < bi)
    return 1;

  else
    return 0;
}

// cmdline_parser
// file ./cmdline.h line 84
signed int cmdline_parser(signed int argc, char **argv, struct gengetopt_args_info *args_info)
{
  signed int return_value_cmdline_parser2_1;
  return_value_cmdline_parser2_1=cmdline_parser2(argc, argv, args_info, 0, 1, 1);
  return return_value_cmdline_parser2_1;
}

// cmdline_parser2
// file cmdline.c line 289
signed int cmdline_parser2(signed int argc, char **argv, struct gengetopt_args_info *args_info, signed int override, signed int initialize, signed int check_required)
{
  signed int result;
  struct cmdline_parser_params params;
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;
  result=cmdline_parser_internal(argc, argv, args_info, &params, ((const char *)NULL));
  if(result == 1)
  {
    cmdline_parser_free(args_info);
    exit(1);
  }

  return result;
}

// cmdline_parser_dump
// file cmdline.c line 199
signed int cmdline_parser_dump(struct _IO_FILE *outfile, struct gengetopt_args_info *args_info)
{
  signed int i = 0;
  if(outfile == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "%s: cannot dump options to stream\n", (const void *)"gmetad");
    return 1;
  }

  else
  {
    if(!(args_info->help_given == 0u))
      write_into_file(outfile, "help", ((const char *)NULL), ((const char **)NULL));

    if(!(args_info->version_given == 0u))
      write_into_file(outfile, "version", ((const char *)NULL), ((const char **)NULL));

    if(!(args_info->conf_given == 0u))
      write_into_file(outfile, "conf", args_info->conf_orig, ((const char **)NULL));

    if(!(args_info->debug_given == 0u))
      write_into_file(outfile, "debug", args_info->debug_orig, ((const char **)NULL));

    if(!(args_info->pid_file_given == 0u))
      write_into_file(outfile, "pid-file", args_info->pid_file_orig, ((const char **)NULL));

    i = 0;
    return i;
  }
}

// cmdline_parser_ext
// file cmdline.c line 273
signed int cmdline_parser_ext(signed int argc, char **argv, struct gengetopt_args_info *args_info, struct cmdline_parser_params *params)
{
  signed int result;
  result=cmdline_parser_internal(argc, argv, args_info, params, ((const char *)NULL));
  if(result == 1)
  {
    cmdline_parser_free(args_info);
    exit(1);
  }

  return result;
}

// cmdline_parser_file_save
// file cmdline.c line 226
signed int cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  struct _IO_FILE *outfile;
  signed int i = 0;
  outfile=fopen(filename, "w");
  if(outfile == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "%s: cannot open file for writing: %s\n", (const void *)"gmetad", filename);
    return 1;
  }

  else
  {
    i=cmdline_parser_dump(outfile, args_info);
    fclose(outfile);
    return i;
  }
}

// cmdline_parser_free
// file cmdline.c line 246
void cmdline_parser_free(struct gengetopt_args_info *args_info)
{
  cmdline_parser_release(args_info);
}

// cmdline_parser_init
// file cmdline.c line 130
void cmdline_parser_init(struct gengetopt_args_info *args_info)
{
  clear_given(args_info);
  clear_args(args_info);
  init_args_info(args_info);
}

// cmdline_parser_internal
// file cmdline.c line 433
static signed int cmdline_parser_internal(signed int argc, char **argv, struct gengetopt_args_info *args_info, struct cmdline_parser_params *params, const char *additional_error)
{
  signed int c;
  signed int error = 0;
  struct gengetopt_args_info local_args_info;
  signed int override;
  signed int initialize;
  signed int check_required;
  signed int check_ambiguity;
  package_name = argv[(signed long int)0];
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;
  if(!(initialize == 0))
    cmdline_parser_init(args_info);

  cmdline_parser_init(&local_args_info);
  optarg = ((char *)NULL);
  optind = 0;
  opterr = params->print_errors;
  optopt = 63;
  signed int return_value_update_arg_1;
  signed int return_value_update_arg_2;
  signed int return_value_update_arg_3;
  while((_Bool)1)
  {
    signed int option_index = 0;
    static struct option long_options[6l] = { { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name="conf", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 },
    { .name="debug", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 },
    { .name="pid-file", .has_arg=1, .flag=(signed int *)(void *)0, .val=112 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
    c=getopt_long(argc, argv, "hVc:d:p:", long_options, &option_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 104:
      {
        cmdline_parser_print_help();
        cmdline_parser_free(&local_args_info);
        exit(0);
      }
      case 86:
      {
        cmdline_parser_print_version();
        cmdline_parser_free(&local_args_info);
        exit(0);
      }
      case 99:
      {
        return_value_update_arg_1=update_arg((void *)&args_info->conf_arg, &args_info->conf_orig, &args_info->conf_given, &local_args_info.conf_given, optarg, ((const char **)NULL), "/etc/ganglia/gmetad.conf", (enum anonymous_23)ARG_STRING, check_ambiguity, override, 0, 0, "conf", (char)99, additional_error);
        if(!(return_value_update_arg_1 == 0))
          goto failure;

        break;
      }
      case 100:
      {
        return_value_update_arg_2=update_arg((void *)&args_info->debug_arg, &args_info->debug_orig, &args_info->debug_given, &local_args_info.debug_given, optarg, ((const char **)NULL), "0", (enum anonymous_23)ARG_INT, check_ambiguity, override, 0, 0, "debug", (char)100, additional_error);
        if(!(return_value_update_arg_2 == 0))
          goto failure;

        break;
      }
      case 112:
      {
        return_value_update_arg_3=update_arg((void *)&args_info->pid_file_arg, &args_info->pid_file_orig, &args_info->pid_file_given, &local_args_info.pid_file_given, optarg, ((const char **)NULL), ((const char *)NULL), (enum anonymous_23)ARG_STRING, check_ambiguity, override, 0, 0, "pid-file", (char)112, additional_error);
        if(!(return_value_update_arg_3 == 0))
          goto failure;

        break;
      }
      case 0:

      case 63:
        goto failure;
      default:
      {
        fprintf(stderr, "%s: option unknown: %c%s\n", (const void *)"gmetad", c, additional_error != ((const char *)NULL) ? additional_error : "");
        abort();
      }
    }
  }
  cmdline_parser_release(&local_args_info);
  if(!(error == 0))
    return 1;

  else
  {
    return 0;

  failure:
    ;
    cmdline_parser_release(&local_args_info);
    return 1;
  }
}

// cmdline_parser_params_create
// file cmdline.c line 151
struct cmdline_parser_params * cmdline_parser_params_create(void)
{
  struct cmdline_parser_params *params;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct cmdline_parser_params) /*20ul*/ );
  params = (struct cmdline_parser_params *)return_value_malloc_1;
  cmdline_parser_params_init(params);
  return params;
}

// cmdline_parser_params_init
// file cmdline.c line 138
void cmdline_parser_params_init(struct cmdline_parser_params *params)
{
  if(!(params == ((struct cmdline_parser_params *)NULL)))
  {
    params->override = 0;
    params->initialize = 1;
    params->check_required = 1;
    params->check_ambiguity = 0;
    params->print_errors = 1;
  }

}

// cmdline_parser_print_help
// file cmdline.c line 121
void cmdline_parser_print_help(void)
{
  signed int i = 0;
  print_help_common();
  signed int tmp_post_1;
  while(!(gengetopt_args_info_help[(signed long int)i] == ((const char *)NULL)))
  {
    tmp_post_1 = i;
    i = i + 1;
    printf("%s\n", gengetopt_args_info_help[(signed long int)tmp_post_1]);
  }
}

// cmdline_parser_print_version
// file cmdline.c line 98
void cmdline_parser_print_version(void)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen("gmetad");
  printf("%s %s\n", return_value_strlen_1 != 0ul ? "gmetad" : "gmetad", (const void *)"3.6.0");
}

// cmdline_parser_release
// file cmdline.c line 171
static void cmdline_parser_release(struct gengetopt_args_info *args_info)
{
  free_string_field(&args_info->conf_arg);
  free_string_field(&args_info->conf_orig);
  free_string_field(&args_info->debug_orig);
  free_string_field(&args_info->pid_file_arg);
  free_string_field(&args_info->pid_file_orig);
  clear_given(args_info);
}

// cmdline_parser_required
// file cmdline.c line 312
signed int cmdline_parser_required(struct gengetopt_args_info *args_info, const char *prog_name)
{
  (void)args_info;
  (void)prog_name;
  return 0;
}

// copy_word
// file dotconf.c line 101
static void copy_word(char **dest, char **src, signed int max, char term)
{
  char *cp1 = *src;
  char *cp2 = *dest;
  signed int tmp_post_1;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *tmp_post_3;
  char *tmp_post_4;
  do
  {
    tmp_post_1 = max;
    max = max - 1;
    if(tmp_post_1 == 0)
      break;

    return_value___ctype_b_loc_2=__ctype_b_loc();
    if(!((8192 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*cp1]) == 0))
      break;

    if(*cp1 == term)
      break;

    tmp_post_3 = cp2;
    cp2 = cp2 + 1l;
    tmp_post_4 = cp1;
    cp1 = cp1 + 1l;
    *tmp_post_3 = *tmp_post_4;
  }
  while((_Bool)1);
  *cp2 = (char)0;
  *src = cp1;
  *dest = cp2;
}

// create_mcast_client
// file apr_net.c line 441
struct apr_socket_t * create_mcast_client(struct apr_pool_t *context, char *mcast_ip, unsigned short int port, signed int ttl, const char *interface, char *bind_address, signed int bind_hostname)
{
  struct apr_socket_t *create_mcast_client__1__socket;
  create_mcast_client__1__socket=create_udp_client(context, mcast_ip, port, interface, bind_address, bind_hostname);
  if(create_mcast_client__1__socket == ((struct apr_socket_t *)NULL))
    return (struct apr_socket_t *)(void *)0;

  else
  {
    apr_mcast_hops(create_mcast_client__1__socket, (unsigned char)ttl);
    mcast_emit_on_if(context, create_mcast_client__1__socket, mcast_ip, port, interface);
    return create_mcast_client__1__socket;
  }
}

// create_mcast_server
// file apr_net.c line 456
struct apr_socket_t * create_mcast_server(struct apr_pool_t *context, signed int family, char *mcast_ip, unsigned short int port, char *bind_addr, char *interface)
{
  signed int status = 0;
  struct apr_socket_t *create_mcast_server__1__socket;
  create_mcast_server__1__socket=create_udp_server(context, family, port, bind_addr);
  _Bool tmp_if_expr_2;
  signed int return_value_apr_strnatcasecmp_1;
  if(create_mcast_server__1__socket == ((struct apr_socket_t *)NULL))
    return (struct apr_socket_t *)(void *)0;

  else
  {
    if(!(interface == ((char *)NULL)))
    {
      return_value_apr_strnatcasecmp_1=apr_strnatcasecmp(interface, "ALL");
      tmp_if_expr_2 = !(return_value_apr_strnatcasecmp_1 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      status=join_mcast(context, create_mcast_server__1__socket, mcast_ip, port, interface);

    return status == 0 ? create_mcast_server__1__socket : (struct apr_socket_t *)(void *)0;
  }
}

// create_net_client
// file apr_net.c line 84
static struct apr_socket_t * create_net_client(struct apr_pool_t *context, signed int type, char *host, unsigned short int port, const char *interface, char *bind_address, signed int bind_hostname)
{
  struct apr_sockaddr_t *localsa = (struct apr_sockaddr_t *)(void *)0;
  struct apr_sockaddr_t *remotesa = (struct apr_sockaddr_t *)(void *)0;
  struct apr_socket_t *sock = (struct apr_socket_t *)(void *)0;
  signed int status;
  signed int family = 0;
  char _bind_address[257l];
  status=apr_sockaddr_info_get(&remotesa, host, 0, port, 0, context);
  if(!(status == 0))
    return (struct apr_socket_t *)(void *)0;

  else
  {
    switch(bind_hostname)
    {
      case 0:
      {
        if(!(bind_address == ((char *)NULL)))
          status=apr_sockaddr_info_get(&localsa, bind_address, 0, (unsigned short int)0, 0, context);

        break;
      }
      case 1:
      {
        status=apr_gethostname(_bind_address, 256, context);
        if(!(status == 0))
          return (struct apr_socket_t *)(void *)0;

        status=apr_sockaddr_info_get(&localsa, _bind_address, 0, (unsigned short int)0, 0, context);
        break;
      }
      default:
        return (struct apr_socket_t *)(void *)0;
    }
    if(!(status == 0))
      return (struct apr_socket_t *)(void *)0;

    else
    {
      family = (signed int)remotesa->sa.sin.sin_family;
      status=apr_socket_create(&sock, family, type, 0, context);
      if(!(status == 0))
        return (struct apr_socket_t *)(void *)0;

      else
      {
        if(!(interface == ((const char *)NULL)))
          mcast_emit_on_if(context, sock, host, port, interface);

        if(!(localsa == ((struct apr_sockaddr_t *)NULL)))
        {
          status=apr_socket_bind(sock, localsa);
          if(status == 0)
            goto __CPROVER_DUMP_L11;

          return (struct apr_socket_t *)(void *)0;
        }

        else
        {

        __CPROVER_DUMP_L11:
          ;
          status=apr_socket_connect(sock, remotesa);
          if(!(status == 0))
          {
            apr_socket_close(sock);
            return (struct apr_socket_t *)(void *)0;
          }

          else
            return sock;
        }
      }
    }
  }
}

// create_net_server
// file apr_net.c line 164
static struct apr_socket_t * create_net_server(struct apr_pool_t *context, signed int ofamily, signed int type, unsigned short int port, char *bind_addr, signed int blocking)
{
  struct apr_sockaddr_t *localsa = (struct apr_sockaddr_t *)(void *)0;
  struct apr_socket_t *sock = (struct apr_socket_t *)(void *)0;
  signed int create_net_server__1__stat;
  signed int family = ofamily;
  if(!(bind_addr == ((char *)NULL)))
  {
    create_net_server__1__stat=apr_sockaddr_info_get(&localsa, bind_addr, 0, port, 0, context);
    if(!(create_net_server__1__stat == 0))
      return (struct apr_socket_t *)(void *)0;

    family = (signed int)localsa->sa.sin.sin_family;
  }

  create_net_server__1__stat=apr_socket_create(&sock, family, type, 0, context);
  if(!(create_net_server__1__stat == 0))
    return (struct apr_socket_t *)(void *)0;

  else
    if(blocking == 0)
    {
      create_net_server__1__stat=apr_socket_opt_set(sock, 8, 1);
      if(create_net_server__1__stat == 0)
        goto __CPROVER_DUMP_L4;

      apr_socket_close(sock);
      return (struct apr_socket_t *)(void *)0;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      create_net_server__1__stat=apr_socket_opt_set(sock, 16, 1);
      if(!(create_net_server__1__stat == 0))
      {
        apr_socket_close(sock);
        return (struct apr_socket_t *)(void *)0;
      }

      else
      {
        if(localsa == ((struct apr_sockaddr_t *)NULL))
        {
          apr_socket_addr_get(&localsa, (enum anonymous_33)APR_LOCAL, sock);
          apr_sockaddr_vars_set(localsa, localsa->family, port);
        }

        if(localsa->family == 10)
        {
          signed int one = 1;
          create_net_server__1__stat=apr_socket_opt_set(sock, 16384, one);
          if(create_net_server__1__stat == 23)
          {
            err_msg("Warning: your operating system does not support IPV6_V6ONLY!\n");
            err_msg("This means that you are also listening to IPv4 traffic on port %d\n", port);
            err_msg("This IPv6=>IPv4 mapping may be a security risk.\n");
          }

        }

        create_net_server__1__stat=apr_socket_bind(sock, localsa);
        if(!(create_net_server__1__stat == 0))
        {
          apr_socket_close(sock);
          return (struct apr_socket_t *)(void *)0;
        }

        else
          return sock;
      }
    }
}

// create_tcp_server
// file apr_net.c line 246
struct apr_socket_t * create_tcp_server(struct apr_pool_t *context, signed int family, unsigned short int port, char *bind_addr, char *interface, signed int blocking, signed int gzip_output)
{
  struct apr_socket_t *sock;
  sock=create_net_server(context, family, 1, port, bind_addr, blocking);
  if(sock == ((struct apr_socket_t *)NULL))
    return (struct apr_socket_t *)(void *)0;

  else
  {
    signed int return_value_apr_socket_listen_1;
    return_value_apr_socket_listen_1=apr_socket_listen(sock, 5);
    if(!(return_value_apr_socket_listen_1 == 0))
      return (struct apr_socket_t *)(void *)0;

    else
      return sock;
  }
}

// create_udp_client
// file apr_net.c line 158
struct apr_socket_t * create_udp_client(struct apr_pool_t *context, char *host, unsigned short int port, const char *interface, char *bind_address, signed int bind_hostname)
{
  struct apr_socket_t *return_value_create_net_client_1;
  return_value_create_net_client_1=create_net_client(context, 2, host, port, interface, bind_address, bind_hostname);
  return return_value_create_net_client_1;
}

// create_udp_server
// file apr_net.c line 239
struct apr_socket_t * create_udp_server(struct apr_pool_t *context, signed int family, unsigned short int port, char *bind_addr)
{
  struct apr_socket_t *return_value_create_net_server_1;
  return_value_create_net_server_1=create_net_server(context, family, 2, port, bind_addr, 0);
  return return_value_create_net_server_1;
}

// cstr_to_slope
// file ../include/ganglia.h line 67
enum ganglia_slope cstr_to_slope(const char *str)
{
  if(str == ((const char *)NULL))
    return (enum ganglia_slope)GANGLIA_SLOPE_UNSPECIFIED;

  else
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(str, "zero");
    if(return_value_strcmp_1 == 0)
      return (enum ganglia_slope)GANGLIA_SLOPE_ZERO;

    else
    {
      signed int return_value_strcmp_2;
      return_value_strcmp_2=strcmp(str, "positive");
      if(return_value_strcmp_2 == 0)
        return (enum ganglia_slope)GANGLIA_SLOPE_POSITIVE;

      else
      {
        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(str, "negative");
        if(return_value_strcmp_3 == 0)
          return (enum ganglia_slope)GANGLIA_SLOPE_NEGATIVE;

        else
        {
          signed int return_value_strcmp_4;
          return_value_strcmp_4=strcmp(str, "both");
          if(return_value_strcmp_4 == 0)
            return (enum ganglia_slope)GANGLIA_SLOPE_BOTH;

          else
          {
            signed int return_value_strcmp_5;
            return_value_strcmp_5=strcmp(str, "derivative");
            if(return_value_strcmp_5 == 0)
              return (enum ganglia_slope)GANGLIA_SLOPE_DERIVATIVE;

            else
              return (enum ganglia_slope)GANGLIA_SLOPE_UNSPECIFIED;
          }
        }
      }
    }
  }
}

// daemon_init
// file ./daemon_init.h line 7
void daemon_init(const char *pname, signed int facility, unsigned int rrd_umask)
{
  signed int i;
  signed int pid;
  pid=fork();
  if(!(pid == 0))
    exit(0);

  setsid();
  signal(1, (void (*)(signed int))1);
  pid=fork();
  if(!(pid == 0))
    exit(0);

  daemon_proc = 1;
  i=chdir("/");
  umask(rrd_umask);
  i = 0;
  for( ; !(i >= 64); i = i + 1)
    close(i);
  openlog(pname, 0x01, facility);
}

// data_thread
// file data_thread.c line 23
void * data_thread(void *arg)
{
  signed int i;
  signed int bytes_read;
  signed int rval;
  struct anonymous_6 *d = (struct anonymous_6 *)arg;
  struct anonymous_4 *addr;
  struct anonymous_2 *sock = ((struct anonymous_2 *)NULL);
  struct anonymous_7 key;
  char *buf;
  unsigned int buf_size = (unsigned int)1024;
  unsigned int read_index;
  unsigned int read_available;
  struct pollfd struct_poll;
  signed long int data_thread__1__start;
  signed long int data_thread__1__end;
  signed long int sleep_time;
  signed long int elapsed;
  double random_factor;
  unsigned int rand_seed;
  signed long int return_value_apr_time_now_1;
  return_value_apr_time_now_1=apr_time_now();
  unsigned long int return_value_pthread_self_2;
  return_value_pthread_self_2=pthread_self();
  rand_seed = (unsigned int)(return_value_apr_time_now_1 * (signed long int)(signed int)return_value_pthread_self_2);
  i = 0;
  signed int tmp_post_3;
  for( ; !((signed int)d->name[(signed long int)i] == 0); rand_seed = rand_seed * (unsigned int)d->name[(signed long int)tmp_post_3])
  {
    tmp_post_3 = i;
    i = i + 1;
  }
  signed int return_value_get_debug_msg_level_5;
  return_value_get_debug_msg_level_5=get_debug_msg_level();
  if(!(return_value_get_debug_msg_level_5 == 0))
  {
    unsigned long int return_value_pthread_self_4;
    return_value_pthread_self_4=pthread_self();
    fprintf(stderr, "Data thread %lu is monitoring [%s] data source\n", (unsigned long int)return_value_pthread_self_4, d->name);
    i = 0;
    for( ; !((unsigned int)i >= d->num_sources); i = i + 1)
    {
      addr = d->sources[(signed long int)i];
      fprintf(stderr, "\t%s\n", addr->name);
    }
  }

  key.data = (void *)d->name;
  unsigned long int return_value_strlen_6;
  return_value_strlen_6=strlen((const char *)key.data);
  key.size = (unsigned int)(return_value_strlen_6 + (unsigned long int)1);
  void *return_value_malloc_7;
  return_value_malloc_7=malloc((unsigned long int)buf_size);
  buf = (char *)return_value_malloc_7;
  if(buf == ((char *)NULL))
    err_quit("data_thread() unable to malloc initial buffer for [%s] data source\n", d->name);

  d->dead = 0;
  do
  {
    data_thread__1__start=apr_time_now();
    sock = (struct anonymous_2 *)(void *)0;
    if(!(d->last_good_index == -1))
      sock=g_tcp_socket_new(d->sources[(signed long int)d->last_good_index]);

    if(sock == ((struct anonymous_2 *)NULL))
    {
      i = 0;
      for( ; !((unsigned int)i >= d->num_sources); i = i + 1)
      {
        sock=g_tcp_socket_new(d->sources[(signed long int)i]);
        if(!(sock == ((struct anonymous_2 *)NULL)))
        {
          d->last_good_index = i;
          break;
        }

        else
          err_msg("data_thread() for [%s] failed to contact node %s", d->name, d->sources[(signed long int)i]->name);
      }
    }

    if(sock == ((struct anonymous_2 *)NULL))
    {
      err_msg("data_thread() got no answer from any [%s] datasource", d->name);
      d->dead = 1;
    }

    else
    {
      struct_poll.fd = sock->sockfd;
      struct_poll.events = (signed short int)0x001;
      read_index = (unsigned int)0;
      do
      {
        rval=poll(&struct_poll, (unsigned long int)1, 10000);
        if(!(rval >= 0))
        {
          err_msg("poll() error in data_thread from source %d for [%s] data source after %d bytes read", d->last_good_index, d->name, read_index);
          if(!((unsigned int)d->last_good_index >= d->num_sources + 4294967295u))
            d->last_good_index = d->last_good_index + 1;

          else
            d->last_good_index = -1;
          d->dead = 1;
          goto take_a_break;
        }

        else
          if(rval == 0)
          {
            err_msg("poll() timeout from source %d for [%s] data source after %d bytes read", d->last_good_index, d->name, read_index);
            if(!((unsigned int)d->last_good_index >= d->num_sources + 4294967295u))
              d->last_good_index = d->last_good_index + 1;

            else
              d->last_good_index = -1;
            d->dead = 1;
            goto take_a_break;
          }

          else
          {
            if(!((0x001 & (signed int)struct_poll.revents) == 0))
            {
              if(!(buf_size >= 1024u + read_index))
              {
                void *return_value_realloc_8;
                return_value_realloc_8=realloc((void *)buf, (unsigned long int)(buf_size + (unsigned int)1024));
                buf = (char *)return_value_realloc_8;
                if(buf == ((char *)NULL))
                  err_quit("data_thread() unable to malloc enough room for [%s] XML", d->name);

                buf_size = buf_size + (unsigned int)1024;
              }

              signed int return_value_ioctl_9;
              return_value_ioctl_9=ioctl(sock->sockfd, (unsigned long int)0x541B, &read_available);
              if(return_value_ioctl_9 == -1)
              {
                err_msg("data_thread() unable to ioctl(FIONREAD) socket for [%s] data source", d->name);
                d->last_good_index = -1;
                d->dead = 1;
                goto take_a_break;
              }

              read_available = read_available > (unsigned int)1023 ? (unsigned int)1023 : read_available;
              signed long int return_value_read_10;
              return_value_read_10=read(sock->sockfd, (void *)(buf + (signed long int)read_index), (unsigned long int)read_available);
              bytes_read = (signed int)return_value_read_10;
              if(!(bytes_read >= 0))
              {
                err_msg("data_thread() unable to read() socket for [%s] data source", d->name);
                d->last_good_index = -1;
                d->dead = 1;
                goto take_a_break;
              }

              else
                if(bytes_read == 0)
                  break;

              read_index = read_index + (unsigned int)bytes_read;
            }

            if(!((0x010 & (signed int)struct_poll.revents) == 0))
            {
              err_msg("The remote machine closed connection for [%s] data source after %d bytes read", d->name, read_index);
              d->last_good_index = -1;
              d->dead = 1;
              goto take_a_break;
            }

            if(!((0x008 & (signed int)struct_poll.revents) == 0))
            {
              err_msg("POLLERR! for [%s] data source after %d bytes read", d->name, read_index);
              d->last_good_index = -1;
              d->dead = 1;
              goto take_a_break;
            }

            if(!((0x020 & (signed int)struct_poll.revents) == 0))
            {
              err_msg("POLLNVAL! for [%s] data source after %d bytes read", d->name, read_index);
              d->last_good_index = -1;
              d->dead = 1;
              goto take_a_break;
            }

          }
      }
      while((_Bool)1);
      if(read_index >= 3u)
      {
        if((signed int)(unsigned char)*buf == 0x1f)
        {
          if((signed int)(unsigned char)buf[1l] == 0x8b)
          {
            signed int ret;
            struct z_stream_s strm;
            char *uncompressed;
            unsigned int write_index = (unsigned int)0;
            signed int return_value_get_debug_msg_level_11;
            return_value_get_debug_msg_level_11=get_debug_msg_level();
            if(return_value_get_debug_msg_level_11 >= 2)
              err_msg("GZIP compressed data for [%s] data source, %d bytes", d->name, read_index);

            void *return_value_malloc_12;
            return_value_malloc_12=malloc((unsigned long int)buf_size);
            uncompressed = (char *)return_value_malloc_12;
            if(uncompressed == ((char *)NULL))
              err_quit("data_thread() unable to malloc enough room for [%s] GZIP", d->name);

            strm.zalloc = (void * (*)(void *, unsigned int, unsigned int))(void *)0;
            strm.zfree = (void (*)(void *, void *))(void *)0;
            strm.opaque = (void *)0;
            strm.next_in = (unsigned char *)buf;
            strm.avail_in = read_index;
            ret=inflateInit2_(&strm, 15 + 16, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
            if(!(ret == 0))
            {
              err_msg("InflateInitError! for [%s] data source, failed to call inflateInit", d->name);
              d->dead = 1;
              free((void *)buf);
              buf = uncompressed;
              goto take_a_break;
            }

            while((_Bool)1)
            {
              if(!(buf_size >= 2048u + write_index))
              {
                buf_size = buf_size + (unsigned int)2048;
                void *return_value_realloc_13;
                return_value_realloc_13=realloc((void *)uncompressed, (unsigned long int)buf_size);
                uncompressed = (char *)return_value_realloc_13;
                if(uncompressed == ((char *)NULL))
                  err_quit("data_thread() unable to realloc enough room for [%s] GZIP", d->name);

              }

              strm.next_out = (unsigned char *)(uncompressed + (signed long int)write_index);
              strm.avail_out = (buf_size - write_index) - (unsigned int)1;
              ret=inflate(&strm, 4);
              write_index = (unsigned int)strm.total_out;
              if(ret == 0 || ret == -5)
                continue;

              else
                if(ret == 1)
                {
                  free((void *)buf);
                  buf = uncompressed;
                  read_index = write_index;
                  signed int return_value_get_debug_msg_level_14;
                  return_value_get_debug_msg_level_14=get_debug_msg_level();
                  if(return_value_get_debug_msg_level_14 >= 2)
                    err_msg("Uncompressed to %d bytes", read_index);

                  break;
                }

                else
                {
                  inflateEnd(&strm);
                  const char *return_value_zError_15;
                  return_value_zError_15=zError(ret);
                  err_msg("InflateError! for [%s] data source, failed to call inflate (%s)", d->name, return_value_zError_15);
                  d->dead = 1;
                  free((void *)buf);
                  buf = uncompressed;
                  goto take_a_break;
                }
            }
            inflateEnd(&strm);
          }

        }

      }

      buf[(signed long int)read_index] = (char)0;
      rval=process_xml(d, buf);
      if(rval == 0)
        d->dead = 0;

    }

  take_a_break:
    ;
    g_tcp_socket_delete(sock);
    data_thread__1__end=apr_time_now();
    signed int return_value_rand_r_16;
    return_value_rand_r_16=rand_r(&rand_seed);
    random_factor = (double)1 + (5.0 / 50.0) * (double)((float)(return_value_rand_r_16 - 2147483647 / 2) / (float)2147483647);
    elapsed = data_thread__1__end - data_thread__1__start;
    sleep_time = (signed long int)((double)((signed long int)d->step * 1000000L) * random_factor - (double)elapsed);
    if(sleep_time >= 1l)
      apr_sleep(sleep_time);

  }
  while((_Bool)1);
  return (void *)0;
}

// datum_dup
// file hash.c line 30
static struct anonymous_7 * datum_dup(struct anonymous_7 *src)
{
  struct anonymous_7 *dest;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_7) /*16ul*/ );
  dest = (struct anonymous_7 *)return_value_malloc_1;
  if(dest == ((struct anonymous_7 *)NULL))
    return (struct anonymous_7 *)(void *)0;

  else
  {
    dest->data=malloc((unsigned long int)src->size);
    if(dest->data == NULL)
    {
      free((void *)dest);
      return (struct anonymous_7 *)(void *)0;
    }

    else
    {
      dest->size = src->size;
      memcpy(dest->data, src->data, (unsigned long int)src->size);
      return dest;
    }
  }
}

// datum_free
// file ../lib/hash.h line 62
void datum_free(struct anonymous_7 *datum)
{
  free(datum->data);
  free((void *)datum);
}

// datum_new
// file ../lib/hash.h line 61
struct anonymous_7 * datum_new(void *data, unsigned long int size)
{
  struct anonymous_7 *datum;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_7) /*16ul*/ );
  datum = (struct anonymous_7 *)return_value_malloc_1;
  if(datum == ((struct anonymous_7 *)NULL))
    return (struct anonymous_7 *)(void *)0;

  else
  {
    datum->data=malloc(size);
    if(datum->data == NULL)
    {
      free((void *)datum);
      return (struct anonymous_7 *)(void *)0;
    }

    else
    {
      datum->size = (unsigned int)size;
      memcpy(datum->data, data, (unsigned long int)datum->size);
      return datum;
    }
  }
}

// debug_msg
// file ../include/gm_msg.h line 16
void debug_msg(const char *format, ...)
{
  if(debug_level_link1 >= 2 && !(format == ((const char *)NULL)))
  {
    void **ap = (void **)&format;
    vfprintf(stderr, format, ap);
    fprintf(stderr, "\n");
    ap = ((void **)NULL);
  }

}

// do_root_summary
// file gmetad.c line 192
static signed int do_root_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct anonymous_11 *source = (struct anonymous_11 *)val->data;
  signed int rc;
  struct _llist_entry *le;
  if(!(source->ds->dead == 0))
    return 0;

  else
  {
    signed int return_value_llist_search_1;
    return_value_llist_search_1=llist_search(&gmetad_config.unsummarized_metrics, (void *)key->data, llist_strncmp, &le);
    if(return_value_llist_search_1 == 0)
      return 0;

    else
    {
      pthread_mutex_lock(source->sum_finished);
      rc=hash_foreach(source->metric_summary, sum_metrics, arg);
      root.hosts_up = root.hosts_up + source->hosts_up;
      root.hosts_down = root.hosts_down + source->hosts_down;
      pthread_mutex_unlock(source->sum_finished);
      return rc;
    }
  }
}

// dotconf_callback
// file dotconf.c line 244
void dotconf_callback(struct configfile_t *configfile, enum callback_types type, const char * (*callback)(struct command_t *, void *))
{
  switch((signed int)type)
  {
    case ERROR_HANDLER:
    {
      configfile->errorhandler = (signed int (*)(struct configfile_t *, signed int, unsigned long int, const char *))callback;
      break;
    }
    case CONTEXT_CHECKER:
      configfile->contextchecker = (const char * (*)(struct command_t *, unsigned long int))callback;
  }
}

// dotconf_cb_include
// file dotconf.c line 1298
static const char * dotconf_cb_include(struct command_t *cmd, void *ctx)
{
  char *filename = ((char *)NULL);
  struct configfile_t *included;
  char wild_card;
  char *path = ((char *)NULL);
  char *pre = ((char *)NULL);
  char *ext = ((char *)NULL);
  _Bool tmp_if_expr_4;
  if(!(cmd->configfile->includepath == ((char *)NULL)))
    tmp_if_expr_4 = (signed int)cmd->data.str[(signed long int)0] != 47 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = (signed int)cmd->configfile->includepath[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_5 = (_Bool)0;
  if(tmp_if_expr_5)
  {
    signed int len;
    signed int inclen;
    char *sl;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(cmd->configfile->includepath);
    inclen = (signed int)return_value_strlen_1;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(cmd->data.str);
    len = (signed int)(return_value_strlen_2 + (unsigned long int)inclen + (unsigned long int)1);
    if(len == 256)
    {
      dotconf_warning(cmd->configfile, 4, (unsigned long int)0x0004, "Absolute filename too long (>%d)", 256);
      return (const char *)(void *)0;
    }

    if((signed int)cmd->configfile->includepath[(signed long int)(inclen + -1)] == 47)
      sl = "";

    else
    {
      sl = "/";
      len = len + 1;
    }
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)len);
    filename = (char *)return_value_malloc_3;
    snprintf(filename, (unsigned long int)len, "%s%s%s", cmd->configfile->includepath, sl, cmd->data.str);
  }

  else
    filename=strdup(cmd->data.str);
  signed int return_value_dotconf_find_wild_card_7;
  return_value_dotconf_find_wild_card_7=dotconf_find_wild_card(filename, &wild_card, &path, &pre, &ext);
  if(return_value_dotconf_find_wild_card_7 >= 0)
  {
    signed int return_value_dotconf_handle_wild_card_6;
    return_value_dotconf_handle_wild_card_6=dotconf_handle_wild_card(cmd, wild_card, path, pre, ext);
    if(!(return_value_dotconf_handle_wild_card_6 >= 0))
      dotconf_warning(cmd->configfile, 4, (unsigned long int)0x0004, "Error occured while attempting to process %s for inclusion.\nIncludePath is '%s'\n", filename, cmd->configfile->includepath);

    dotconf_wild_card_cleanup(path, pre);
    free((void *)filename);
    return (const char *)(void *)0;
  }

  signed int return_value_access_8;
  return_value_access_8=access(filename, 4);
  if(!(return_value_access_8 == 0))
  {
    dotconf_warning(cmd->configfile, 4, (unsigned long int)0x0004, "Cannot open %s for inclusion.\nIncludePath is '%s'\n", filename, cmd->configfile->includepath);
    free((void *)filename);
    return (const char *)(void *)0;
  }

  else
  {
    included=dotconf_create(filename, cmd->configfile->config_options[(signed long int)1], cmd->configfile->context, cmd->configfile->flags);
    if(!(included == ((struct configfile_t *)NULL)))
    {
      included->contextchecker = (const char * (*)(struct command_t *, unsigned long int))cmd->configfile->contextchecker;
      included->errorhandler = (signed int (*)(struct configfile_t *, signed int, unsigned long int, const char *))cmd->configfile->errorhandler;
      dotconf_command_loop(included);
      dotconf_cleanup(included);
    }

    free((void *)filename);
    return (const char *)(void *)0;
  }
}

// dotconf_cb_includepath
// file dotconf.c line 1378
static const char * dotconf_cb_includepath(struct command_t *cmd, void *ctx)
{
  char *env;
  env=getenv("DC_INCLUDEPATH");
  if(env == ((char *)NULL))
    snprintf(cmd->configfile->includepath, (unsigned long int)256, "%s", cmd->data.str);

  return (const char *)(void *)0;
}

// dotconf_cleanup
// file ../lib/dotconf.h line 183
void dotconf_cleanup(struct configfile_t *configfile)
{
  if(!(configfile->stream == ((struct _IO_FILE *)NULL)))
    fclose(configfile->stream);

  if(!(configfile->filename == ((char *)NULL)))
    free((void *)configfile->filename);

  if(!(configfile->config_options == ((const struct configoption_t **)NULL)))
    free((void *)configfile->config_options);

  if(!(configfile->includepath == ((char *)NULL)))
    free((void *)configfile->includepath);

  free((void *)configfile);
}

// dotconf_command_loop
// file ../lib/dotconf.h line 186
signed int dotconf_command_loop(struct configfile_t *configfile)
{
  char buffer[4096l];
  signed int return_value_dotconf_get_next_line_1;
  do
  {
    return_value_dotconf_get_next_line_1=dotconf_get_next_line(buffer, (unsigned long int)4096, configfile);
    if(!(return_value_dotconf_get_next_line_1 == 0))
      break;

    const char *error;
    error=dotconf_handle_command(configfile, buffer);
    if(!(error == ((const char *)NULL)))
    {
      signed int return_value_dotconf_warning_2;
      return_value_dotconf_warning_2=dotconf_warning(configfile, 3, (unsigned long int)0, error);
      if(!(return_value_dotconf_warning_2 == 0))
        return 0;

    }

  }
  while((_Bool)1);
  return 1;
}

// dotconf_command_loop_until_error
// file dotconf.c line 680
const char * dotconf_command_loop_until_error(struct configfile_t *configfile)
{
  char buffer[4096l];
  signed int return_value_dotconf_get_next_line_1;
  do
  {
    return_value_dotconf_get_next_line_1=dotconf_get_next_line(buffer, (unsigned long int)4096, configfile);
    if(!(return_value_dotconf_get_next_line_1 == 0))
      break;

    const char *error;
    error=dotconf_handle_command(configfile, buffer);
    if(!(error == ((const char *)NULL)))
      return error;

  }
  while((_Bool)1);
  return (const char *)(void *)0;
}

// dotconf_continue_line
// file dotconf.c line 259
signed int dotconf_continue_line(char *buffer, unsigned long int length)
{
  char *cp1 = (buffer + (signed long int)length) - (signed long int)1;
  char *tmp_post_1;
  char *tmp_post_2;
  if(!(length >= 2ul))
    return 0;

  else
  {
    tmp_post_1 = cp1;
    cp1 = cp1 - 1l;
    if(!((signed int)*tmp_post_1 == 10))
      return 0;

    else
    {
      if((signed int)*cp1 == 13)
        cp1 = cp1 - 1l;

      tmp_post_2 = cp1;
      cp1 = cp1 - 1l;
      if(!((signed int)*tmp_post_2 == 92))
        return 0;

      else
      {
        cp1[(signed long int)1] = (char)0;
        return (signed int)((signed int)*cp1 != 92);
      }
    }
  }
}

// dotconf_create
// file ../lib/dotconf.h line 180
struct configfile_t * dotconf_create(char *fname, const struct configoption_t *options, void *context, unsigned long int flags)
{
  struct configfile_t *new = ((struct configfile_t *)NULL);
  char *dc_env;
  signed int return_value_access_1;
  return_value_access_1=access(fname, 4);
  if(!(return_value_access_1 == 0))
  {
    fprintf(stderr, "Error opening configuration file '%s'\n", fname);
    return (struct configfile_t *)(void *)0;
  }

  else
  {
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct configfile_t) /*104ul*/ );
    new = (struct configfile_t *)return_value_calloc_2;
    new->stream=fopen(fname, "r");
    if(new->stream == ((struct _IO_FILE *)NULL))
    {
      fprintf(stderr, "Error opening configuration file '%s'\n", fname);
      free((void *)new);
      return (struct configfile_t *)(void *)0;
    }

    else
    {
      new->flags = flags;
      new->filename=strdup(fname);
      void *return_value_malloc_3;
      return_value_malloc_3=malloc((unsigned long int)256);
      new->includepath = (char *)return_value_malloc_3;
      new->includepath[(signed long int)0] = (char)0x00;
      dc_env=getenv("DC_INCLUDEPATH");
      if(!(dc_env == ((char *)NULL)))
        snprintf(new->includepath, (unsigned long int)256, "%s", dc_env);

      new->context = context;
      dotconf_register_options(new, dotconf_options);
      dotconf_register_options(new, options);
      if(!((1ul & new->flags) == 0ul))
        new->cmp_func = strncasecmp;

      else
        new->cmp_func = strncmp;
      return new;
    }
  }
}

// dotconf_find_command
// file dotconf.c line 462
struct configoption_t * dotconf_find_command(struct configfile_t *configfile, const char *command)
{
  struct configoption_t *option;
  signed int i = 0;
  signed int mod = 0;
  signed int done = 0;
  option = ((struct configoption_t *)NULL);
  mod = 0;
  for( ; done == 0 && !(configfile->config_options[(signed long int)mod] == ((const struct configoption_t *)NULL)); mod = mod + 1)
  {
    i = 0;
    if(!(*(configfile->config_options[(signed long int)mod] + (signed long int)i)->name == 0))
    {
      signed int return_value;
      return_value=configfile->cmp_func(name, (configfile->config_options[(signed long int)mod] + (signed long int)i)->name, (unsigned long int)32);
      if(return_value == 0)
      {
        option = (struct configoption_t *)&configfile->config_options[(signed long int)mod][(signed long int)i];
        done = 1;
      }

      else
        i = i + 1;
    }

  }
  _Bool tmp_if_expr_1;
  if(!(option == ((struct configoption_t *)NULL)))
    tmp_if_expr_1 = (signed int)option->name[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (configfile->config_options[(signed long int)(mod - 1)] + (signed long int)i)->type == 4 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    option = (struct configoption_t *)&configfile->config_options[(signed long int)(mod - 1)][(signed long int)i];

  return option;
}

// dotconf_find_wild_card
// file dotconf.c line 834
signed int dotconf_find_wild_card(char *filename, char *wildcard, char **path, char **pre, char **ext)
{
  signed int retval = -1;
  signed int prefix_len = 0;
  signed int tmp_count = 0;
  char *tmp = ((char *)NULL);
  signed int found_path = 0;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(filename);
  len = (signed int)return_value_strlen_1;
  void *return_value_malloc_4;
  if(len >= 1 && !(ext == ((char **)NULL)) && !(path == ((char **)NULL)) && !(pre == ((char **)NULL)) && !(wildcard == ((char *)NULL)))
  {
    unsigned long int return_value_strcspn_2;
    return_value_strcspn_2=strcspn(filename, "*?");
    prefix_len = (signed int)return_value_strcspn_2;
    if(!(prefix_len >= len))
    {
      tmp = filename + (signed long int)prefix_len;
      tmp_count = prefix_len + 1;
      for( ; !(tmp == filename); tmp_count = tmp_count - 1)
      {
        if((signed int)*tmp == 47)
          break;

        tmp = tmp - 1l;
      }
      if((signed int)*tmp == 47)
      {
        void *return_value_malloc_3;
        return_value_malloc_3=malloc((unsigned long int)(tmp_count + 1));
        *path = (char *)return_value_malloc_3;
        found_path = 1;
      }

      else
      {
        return_value_malloc_4=malloc((unsigned long int)1);
        *path = (char *)return_value_malloc_4;
      }
      void *return_value_malloc_5;
      return_value_malloc_5=malloc((unsigned long int)((prefix_len - (tmp_count - (found_path != 0 ? 0 : 1))) + 1));
      *pre = (char *)return_value_malloc_5;
      if(!(*path == ((char *)NULL)))
      {
        if(!(*pre == ((char *)NULL)))
        {
          if(!(found_path == 0))
            strncpy(*path, filename, (unsigned long int)tmp_count);

          (*path)[(signed long int)tmp_count] = (char)0;
          strncpy(*pre, tmp + (signed long int)(found_path != 0 ? 1 : 0), (unsigned long int)(prefix_len - (tmp_count - (found_path != 0 ? 0 : 1))));
          (*pre)[(signed long int)(prefix_len - (tmp_count - (found_path != 0 ? 0 : 1)))] = (char)0;
          *ext = filename + (signed long int)prefix_len;
          *wildcard = *(*ext);
          *ext = *ext + 1l;
          retval = prefix_len;
        }

      }

    }

  }

  return retval;
}

// dotconf_free_command
// file dotconf.c line 580
void dotconf_free_command(struct command_t *command)
{
  signed int i;
  if(!(command->data.str == ((char *)NULL)))
    free((void *)command->data.str);

  i = 0;
  for( ; !(i >= command->arg_count); i = i + 1)
    free((void *)command->data.list[(signed long int)i]);
  free((void *)command->data.list);
}

// dotconf_get_here_document
// file dotconf.c line 317
char * dotconf_get_here_document(struct configfile_t *configfile, const char *delimit)
{
  unsigned int limit_len;
  char here_string;
  char buffer[4096l];
  char *here_doc = ((char *)NULL);
  char here_limit[9l];
  struct stat finfo;
  signed int offset = 0;
  if(!(configfile->size >= 1ul))
  {
    signed int return_value_stat_1;
    return_value_stat_1=stat(configfile->filename, &finfo);
    if(!(return_value_stat_1 == 0))
    {
      dotconf_warning(configfile, 0, (unsigned long int)0x0005, "[emerg] could not stat currently read file (%s)\n", configfile->filename);
      return (char *)(void *)0;
    }

    configfile->size = (unsigned long int)finfo.st_size;
  }

  void *return_value_malloc_2;
  return_value_malloc_2=malloc(configfile->size);
  here_doc = (char *)return_value_malloc_2;
  memset((void *)here_doc, 0, configfile->size);
  here_string = (char)1;
  signed int return_value_snprintf_3;
  return_value_snprintf_3=snprintf(here_limit, (unsigned long int)9, "%s", delimit);
  limit_len = (unsigned int)return_value_snprintf_3;
  signed int return_value_dotconf_get_next_line_4;
  do
  {
    return_value_dotconf_get_next_line_4=dotconf_get_next_line(buffer, (unsigned long int)4096, configfile);
    if(!(return_value_dotconf_get_next_line_4 == 0))
      break;

    signed int return_value_strncmp_5;
    return_value_strncmp_5=strncmp(here_limit, buffer, (unsigned long int)(limit_len - (unsigned int)1));
    if(return_value_strncmp_5 == 0)
    {
      here_string = (char)0;
      break;
    }

    signed int return_value_snprintf_6;
    return_value_snprintf_6=snprintf(here_doc + (signed long int)offset, (configfile->size - (unsigned long int)offset) - (unsigned long int)1, "%s", (const void *)buffer);
    offset = offset + return_value_snprintf_6;
  }
  while((_Bool)1);
  if(!(here_string == 0))
    dotconf_warning(configfile, 4, (unsigned long int)0x0001, "Unterminated here-document!");

  here_doc[(signed long int)(offset - 1)] = (char)0;
  void *return_value_realloc_7;
  return_value_realloc_7=realloc((void *)here_doc, (unsigned long int)offset);
  return (char *)return_value_realloc_7;
}

// dotconf_get_next_line
// file ../lib/dotconf.h line 195
signed int dotconf_get_next_line(char *buffer, unsigned long int bufsize, struct configfile_t *configfile)
{
  char *cp1;
  char *cp2;
  char buf2[4096l];
  signed int length;
  signed int return_value_dotconf_continue_line_2;
  if(!(configfile->eof == 0))
    return 1;

  else
  {
    cp1=fgets(buffer, 4096, configfile->stream);
    if(cp1 == ((char *)NULL))
    {
      configfile->eof = (char)1;
      return 1;
    }

    else
    {
      configfile->line = configfile->line + 1ul;
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(cp1);
      length = (signed int)return_value_strlen_1;
      do
      {
        return_value_dotconf_continue_line_2=dotconf_continue_line(cp1, (unsigned long int)length);
        if(return_value_dotconf_continue_line_2 == 0)
          break;

        cp2=fgets(buf2, 4096, configfile->stream);
        if(cp2 == ((char *)NULL))
        {
          fprintf(stderr, "[dotconf] Parse error. Unexpected end of file at line %ld in file %s\n", configfile->line, configfile->filename);
          configfile->eof = (char)1;
          return 1;
        }

        configfile->line = configfile->line + 1ul;
        strcpy((cp1 + (signed long int)length) - (signed long int)2, cp2);
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(cp1);
        length = (signed int)return_value_strlen_3;
      }
      while((_Bool)1);
      return 0;
    }
  }
}

// dotconf_handle_command
// file dotconf.c line 592
const char * dotconf_handle_command(struct configfile_t *configfile, char *buffer)
{
  char *cp1;
  char *cp2;
  char *eob;
  const char *error;
  const char *context_error;
  struct command_t command;
  signed int mod = 0;
  signed int next_opt_idx = 0;
  memset((void *)&command, 0, sizeof(struct command_t) /*64ul*/ );
  name[(signed long int)0] = (char)0;
  error = ((const char *)NULL);
  context_error = ((const char *)NULL);
  cp1 = buffer;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(cp1);
  eob = cp1 + (signed long int)return_value_strlen_1;
  safe_skip_whitespace(&cp1, (signed int)((signed long int)eob - (signed long int)cp1), (char)0);
  _Bool tmp_if_expr_2;
  if(cp1 == ((char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(*cp1 != 0) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)*cp1 == 35 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = (signed int)*cp1 == 10 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = *cp1 == (char)-1 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_5)
    return (const char *)(void *)0;

  else
    if(cp1 == eob)
      return (const char *)(void *)0;

    else
    {
      cp2 = name;
      copy_word(&cp2, &cp1, (signed int)(eob - cp1 < (signed long int)32 ? eob - cp1 : (signed long int)32), (char)0);
      while((_Bool)1)
      {
        const struct configoption_t *option;
        signed int done = 0;
        signed int opt_idx = 0;
        option = ((const struct configoption_t *)NULL);
        for( ; done == 0 && !(configfile->config_options[(signed long int)mod] == ((const struct configoption_t *)NULL)); mod = mod + 1)
        {
          opt_idx = next_opt_idx;
          if(!(*(configfile->config_options[(signed long int)mod] + (signed long int)opt_idx)->name == 0))
          {
            signed int return_value;
            return_value=configfile->cmp_func(name, (configfile->config_options[(signed long int)mod] + (signed long int)opt_idx)->name, (unsigned long int)32);
            if(return_value == 0)
            {
              option = (struct configoption_t *)&configfile->config_options[(signed long int)mod][(signed long int)opt_idx];
              done = 1;
            }

            else
              opt_idx = opt_idx + 1;
          }

        }
        if(option == ((const struct configoption_t *)NULL))
          option=get_argname_fallback(configfile->config_options[(signed long int)1]);

        if(option == ((const struct configoption_t *)NULL))
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = !(option->callback != ((const char * (*)(struct command_t *, void *))NULL)) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_6)
        {
          if(!(error == ((const char *)NULL)))
            return error;

          dotconf_warning(configfile, 6, (unsigned long int)0x0002, "Unknown Config-Option: '%s'", (const void *)name);
          return (const char *)(void *)0;
        }

        dotconf_set_command(configfile, option, cp1, &command);
        if(!(configfile->contextchecker == ((const char * (*)(struct command_t *, unsigned long int))NULL)))
          context_error=configfile->contextchecker(&command, command.option->context);

        if(context_error == ((const char *)NULL))
          error=dotconf_invoke_command(configfile, &command);

        else
          if(error == ((const char *)NULL))
            error = context_error;

        dotconf_free_command(&command);
        if(context_error == ((const char *)NULL))
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = !((configfile->flags & (unsigned long int)(1 << 3)) != 0ul) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_7)
          break;

      }
      return error;
    }
}

// dotconf_handle_question_mark
// file dotconf.c line 976
signed int dotconf_handle_question_mark(struct command_t *cmd, char *path, char *pre, char *ext)
{
  struct configfile_t *included;
  struct __dirstream *dh = ((struct __dirstream *)NULL);
  struct dirent *dirptr = ((struct dirent *)NULL);
  signed int i;
  char new_pre[256l];
  char already_matched[256l];
  char wc = (char)0;
  char *new_path = ((char *)NULL);
  char *wc_path = ((char *)NULL);
  char *wc_pre = ((char *)NULL);
  char *wc_ext = ((char *)NULL);
  signed int pre_len;
  signed int new_path_len;
  signed int name_len = 0;
  signed int alloced = 0;
  signed int match_state = 0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(pre);
  pre_len = (signed int)return_value_strlen_1;
  dh=opendir(path);
  if(!(dh == ((struct __dirstream *)NULL)))
  {
    do
    {
      dirptr=readdir(dh);
      if(dirptr == ((struct dirent *)NULL))
        break;

      match_state=dotconf_question_mark_match(dirptr->d_name, pre, ext);
      if(match_state >= 0)
      {
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(dirptr->d_name);
        name_len = (signed int)return_value_strlen_2;
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(path);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(ext);
        new_path_len = (signed int)(return_value_strlen_3 + (unsigned long int)name_len + return_value_strlen_4 + (unsigned long int)1);
        if(alloced == 0)
        {
          void *return_value_malloc_5;
          return_value_malloc_5=malloc((unsigned long int)new_path_len);
          new_path = (char *)return_value_malloc_5;
          if(new_path == ((char *)NULL))
            return -1;

          alloced = new_path_len;
        }

        else
          if(!(alloced >= new_path_len))
          {
            void *return_value_realloc_6;
            return_value_realloc_6=realloc((void *)new_path, (unsigned long int)new_path_len);
            if(return_value_realloc_6 == NULL)
            {
              free((void *)new_path);
              return -1;
            }

          }

        if(match_state == 1)
        {
          strncpy(new_pre, dirptr->d_name, (unsigned long int)(name_len > pre_len ? pre_len + 1 : pre_len));
          new_pre[(signed long int)(name_len > pre_len ? pre_len + 1 : pre_len)] = (char)0;
          snprintf(new_path, (unsigned long int)new_path_len, "%s%s%s", path, (const void *)new_pre, ext);
          signed int return_value_strcmp_7;
          return_value_strcmp_7=strcmp(new_path, already_matched);
          if(return_value_strcmp_7 == 0)
            continue;

          else
            strcpy(already_matched, new_path);
          signed int return_value_dotconf_find_wild_card_9;
          return_value_dotconf_find_wild_card_9=dotconf_find_wild_card(new_path, &wc, &wc_path, &wc_pre, &wc_ext);
          if(return_value_dotconf_find_wild_card_9 >= 0)
          {
            signed int return_value_dotconf_handle_wild_card_8;
            return_value_dotconf_handle_wild_card_8=dotconf_handle_wild_card(cmd, wc, wc_path, wc_pre, wc_ext);
            if(!(return_value_dotconf_handle_wild_card_8 >= 0))
            {
              dotconf_warning(cmd->configfile, 4, (unsigned long int)0x0004, "Error occured while processing wildcard %c\nFilename is '%s'\n", wc, new_path);
              free((void *)new_path);
              dotconf_wild_card_cleanup(wc_path, wc_pre);
              return -1;
            }

            dotconf_wild_card_cleanup(wc_path, wc_pre);
            continue;
          }

        }

        snprintf(new_path, (unsigned long int)new_path_len, "%s%s", path, (const void *)dirptr->d_name);
        signed int return_value_access_10;
        return_value_access_10=access(new_path, 4);
        if(!(return_value_access_10 == 0))
        {
          dotconf_warning(cmd->configfile, 4, (unsigned long int)0x0004, "Cannot open %s for inclusion.\nIncludePath is '%s'\n", new_path, cmd->configfile->includepath);
          return -1;
        }

        included=dotconf_create(new_path, cmd->configfile->config_options[(signed long int)1], cmd->configfile->context, cmd->configfile->flags);
        if(!(included == ((struct configfile_t *)NULL)))
        {
          i = 2;
          for( ; !(cmd->configfile->config_options[(signed long int)i] == ((const struct configoption_t *)NULL)); i = i + 1)
            dotconf_register_options(included, cmd->configfile->config_options[(signed long int)i]);
          included->errorhandler = cmd->configfile->errorhandler;
          included->contextchecker = cmd->configfile->contextchecker;
          dotconf_command_loop(included);
          dotconf_cleanup(included);
        }

      }

    }
    while((_Bool)1);
    closedir(dh);
    free((void *)new_path);
  }

  return 0;
}

// dotconf_handle_star
// file dotconf.c line 1114
signed int dotconf_handle_star(struct command_t *cmd, char *path, char *pre, char *ext)
{
  struct configfile_t *included;
  struct __dirstream *dh = ((struct __dirstream *)NULL);
  struct dirent *dirptr = ((struct dirent *)NULL);
  char new_pre[256l];
  char new_ext[256l];
  char already_matched[256l];
  char wc = (char)0;
  char *new_path = ((char *)NULL);
  char *s_ext = ((char *)NULL);
  char *t_ext = ((char *)NULL);
  char *sub = ((char *)NULL);
  char *wc_path = ((char *)NULL);
  char *wc_pre = ((char *)NULL);
  char *wc_ext = ((char *)NULL);
  signed int pre_len;
  signed int new_path_len;
  signed int name_len = 0;
  signed int alloced = 0;
  signed int match_state = 0;
  signed int t_ext_count = 0;
  signed int sub_count = 0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(pre);
  pre_len = (signed int)return_value_strlen_1;
  memset((void *)already_matched, 0, (unsigned long int)256);
  s_ext = ext;
  signed int return_value_dotconf_is_wild_card_2;
  do
  {
    return_value_dotconf_is_wild_card_2=dotconf_is_wild_card(*s_ext);
    if(return_value_dotconf_is_wild_card_2 == 0)
      break;

    s_ext = s_ext + 1l;
  }
  while((_Bool)1);
  t_ext = s_ext;
  signed int return_value_dotconf_is_wild_card_3;
  for( ; !(t_ext == ((char *)NULL)); t_ext_count = t_ext_count + 1)
  {
    return_value_dotconf_is_wild_card_3=dotconf_is_wild_card(*t_ext);
    if(!(return_value_dotconf_is_wild_card_3 == 0))
      break;

    if((signed int)*t_ext == 0)
      break;

    t_ext = t_ext + 1l;
  }
  strncpy(new_ext, s_ext, (unsigned long int)t_ext_count);
  new_ext[(signed long int)t_ext_count] = (char)0;
  dh=opendir(path);
  if(!(dh == ((struct __dirstream *)NULL)))
  {
    do
    {
      dirptr=readdir(dh);
      if(dirptr == ((struct dirent *)NULL))
        break;

      sub_count = 0;
      t_ext_count = 0;
      match_state=dotconf_star_match(dirptr->d_name, pre, s_ext);
      if(match_state >= 0)
      {
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(dirptr->d_name);
        name_len = (signed int)return_value_strlen_4;
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen(path);
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(s_ext);
        new_path_len = (signed int)(return_value_strlen_5 + (unsigned long int)name_len + return_value_strlen_6 + (unsigned long int)1);
        if(alloced == 0)
        {
          void *return_value_malloc_7;
          return_value_malloc_7=malloc((unsigned long int)new_path_len);
          new_path = (char *)return_value_malloc_7;
          if(new_path == ((char *)NULL))
            return -1;

          alloced = new_path_len;
        }

        else
          if(!(alloced >= new_path_len))
          {
            void *return_value_realloc_8;
            return_value_realloc_8=realloc((void *)new_path, (unsigned long int)new_path_len);
            if(return_value_realloc_8 == NULL)
            {
              free((void *)new_path);
              return -1;
            }

          }

        if(match_state == 1)
        {
          sub=strstr(dirptr->d_name + (signed long int)pre_len, new_ext);
          if(sub == ((char *)NULL))
            continue;

          for( ; !(sub == dirptr->d_name); sub_count = sub_count + 1)
            sub = sub - 1l;
          if(!(name_len >= sub_count + t_ext_count))
            continue;

          strncpy(new_pre, dirptr->d_name, (unsigned long int)(sub_count + t_ext_count));
          new_pre[(signed long int)(sub_count + t_ext_count)] = (char)0;
          strcat(new_pre, new_ext);
          snprintf(new_path, (unsigned long int)new_path_len, "%s%s%s", path, (const void *)new_pre, t_ext);
          signed int return_value_strcmp_9;
          return_value_strcmp_9=strcmp(new_path, already_matched);
          if(return_value_strcmp_9 == 0)
            continue;

          else
            strcpy(already_matched, new_path);
          signed int return_value_dotconf_find_wild_card_11;
          return_value_dotconf_find_wild_card_11=dotconf_find_wild_card(new_path, &wc, &wc_path, &wc_pre, &wc_ext);
          if(return_value_dotconf_find_wild_card_11 >= 0)
          {
            signed int return_value_dotconf_handle_wild_card_10;
            return_value_dotconf_handle_wild_card_10=dotconf_handle_wild_card(cmd, wc, wc_path, wc_pre, wc_ext);
            if(!(return_value_dotconf_handle_wild_card_10 >= 0))
            {
              dotconf_warning(cmd->configfile, 4, (unsigned long int)0x0004, "Error occured while processing wildcard %c\nFilename is '%s'\n", wc, new_path);
              free((void *)new_path);
              dotconf_wild_card_cleanup(wc_path, wc_pre);
              return -1;
            }

            dotconf_wild_card_cleanup(wc_path, wc_pre);
            continue;
          }

        }

        snprintf(new_path, (unsigned long int)new_path_len, "%s%s", path, (const void *)dirptr->d_name);
        signed int return_value_access_12;
        return_value_access_12=access(new_path, 4);
        if(!(return_value_access_12 == 0))
        {
          dotconf_warning(cmd->configfile, 4, (unsigned long int)0x0004, "Cannot open %s for inclusion.\nIncludePath is '%s'\n", new_path, cmd->configfile->includepath);
          return -1;
        }

        included=dotconf_create(new_path, cmd->configfile->config_options[(signed long int)1], cmd->configfile->context, cmd->configfile->flags);
        if(!(included == ((struct configfile_t *)NULL)))
        {
          included->errorhandler = cmd->configfile->errorhandler;
          included->contextchecker = cmd->configfile->contextchecker;
          dotconf_command_loop(included);
          dotconf_cleanup(included);
        }

      }

    }
    while((_Bool)1);
    closedir(dh);
    free((void *)new_path);
  }

  return 0;
}

// dotconf_handle_wild_card
// file dotconf.c line 790
signed int dotconf_handle_wild_card(struct command_t *cmd, char wild_card, char *path, char *pre, char *ext)
{
  signed int retval = 0;
  switch((signed int)wild_card)
  {
    case 42:
    {
      retval=dotconf_handle_star(cmd, path, pre, ext);
      break;
    }
    case 63:
    {
      retval=dotconf_handle_question_mark(cmd, path, pre, ext);
      break;
    }
    default:
      retval = -1;
  }
  return retval;
}

// dotconf_invoke_command
// file dotconf.c line 366
const char * dotconf_invoke_command(struct configfile_t *configfile, struct command_t *cmd)
{
  const char *error = ((const char *)NULL);
  error=cmd->option->callback(cmd, configfile->context);
  return error;
}

// dotconf_is_wild_card
// file dotconf.c line 771
signed int dotconf_is_wild_card(char value)
{
  signed int retval = 0;
  signed int i;
  signed int wildcards_len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen("*?");
  wildcards_len = (signed int)return_value_strlen_1;
  i = 0;
  for( ; !(i >= wildcards_len); i = i + 1)
    if(value == "*?"[(signed long int)i])
    {
      retval = 1;
      break;
    }

  return retval;
}

// dotconf_question_mark_match
// file dotconf.c line 916
signed int dotconf_question_mark_match(char *dir_name, char *pre, char *ext)
{
  signed int retval = -1;
  signed int dir_name_len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(dir_name);
  dir_name_len = (signed int)return_value_strlen_1;
  signed int pre_len;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(pre);
  pre_len = (signed int)return_value_strlen_2;
  signed int ext_len;
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(ext);
  ext_len = (signed int)return_value_strlen_3;
  signed int w_card_check;
  unsigned long int return_value_strcspn_4;
  return_value_strcspn_4=strcspn(ext, "*?");
  w_card_check = (signed int)return_value_strcspn_4;
  _Bool tmp_if_expr_9;
  signed int return_value_strncmp_8;
  if(!(w_card_check >= ext_len))
  {
    return_value_strncmp_8=strncmp(dir_name, pre, (unsigned long int)pre_len);
    tmp_if_expr_9 = return_value_strncmp_8 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_9 = (_Bool)0;
  _Bool tmp_if_expr_11;
  signed int return_value_strcmp_10;
  if(tmp_if_expr_9)
  {
    return_value_strcmp_10=strcmp(dir_name, ".");
    tmp_if_expr_11 = return_value_strcmp_10 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_11 = (_Bool)0;
  _Bool tmp_if_expr_13;
  signed int return_value_strcmp_12;
  if(tmp_if_expr_11)
  {
    return_value_strcmp_12=strcmp(dir_name, "..");
    tmp_if_expr_13 = return_value_strcmp_12 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_13 = (_Bool)0;
  signed int return_value_strncmp_7;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_5;
  if(tmp_if_expr_13)
    retval = 1;

  else
    if(dir_name_len >= pre_len)
    {
      return_value_strncmp_7=strncmp(dir_name, pre, (unsigned long int)pre_len);
      if(return_value_strncmp_7 == 0)
      {
        return_value_strcmp_6=strcmp(dir_name, ".");
        if(!(return_value_strcmp_6 == 0))
        {
          return_value_strcmp_5=strcmp(dir_name, "..");
          if(!(return_value_strcmp_5 == 0))
            retval = 0;

        }

      }

    }

  return retval;
}

// dotconf_read_arg
// file dotconf.c line 374
char * dotconf_read_arg(struct configfile_t *configfile, char **line)
{
  signed int sq = 0;
  signed int dq = 0;
  signed int done;
  char *cp1 = *line;
  char *cp2;
  char *eos;
  char buf[4064l];
  memset((void *)buf, 0, (unsigned long int)4064);
  done = 0;
  cp2 = buf;
  eos = (cp2 + (signed long int)4064) - (signed long int)1;
  _Bool tmp_if_expr_1;
  if((signed int)*cp1 == 35)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(*cp1 != 0) ? (_Bool)1 : (_Bool)0;
  char *tmp_post_2;
  _Bool tmp_if_expr_11;
  const unsigned short int **return_value___ctype_b_loc_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  char *tmp_post_3;
  char *tmp_if_expr_14;
  char *return_value_strdup_13;
  char *tmp_if_expr_17;
  char *return_value_strdup_15;
  char *return_value_dotconf_substitute_env_16;
  if(tmp_if_expr_1)
    return (char *)(void *)0;

  else
  {
    safe_skip_whitespace(&cp1, 4064, (char)0);
    while(!((signed int)*cp1 == 0))
    {
      if(cp2 == eos)
        break;

      if(!(done == 0))
        break;

      switch((signed int)*cp1)
      {
        case 39:
        {
          if(!(dq == 0))
            goto __CPROVER_DUMP_L12;

          if(!(sq == 0))
            sq = sq - 1;

          else
            if(sq == 0)
              sq = sq + 1;

          goto __CPROVER_DUMP_L12;
        }
        case 34:
        {
          if(!(sq == 0))
            goto __CPROVER_DUMP_L12;

          if(!(dq == 0))
            dq = dq - 1;

          else
            if(dq == 0)
              dq = dq + 1;

          goto __CPROVER_DUMP_L12;
        }
        case 92:
          if(!(cp1[1l] == 0))
          {
            tmp_post_2 = cp2;
            cp2 = cp2 + 1l;
            cp1 = cp1 + 1l;
            *tmp_post_2 = *cp1;
            cp1 = cp1 + 1l;
            break;
          }

        default:
        {

        __CPROVER_DUMP_L12:
          ;
          const unsigned short int **return_value___ctype_b_loc_12;
          return_value___ctype_b_loc_12=__ctype_b_loc();
          if(dq == 0 && sq == 0 && !((8192 & (signed int)(*return_value___ctype_b_loc_12)[(signed long int)(signed int)*cp1]) == 0))
          {
            *cp2 = (char)0;
            goto __CPROVER_DUMP_L31;
          }

          else
          {
            if(dq == 0 && sq == 0 && (signed int)*cp1 == 35)
              tmp_if_expr_11 = !((configfile->flags & (unsigned long int)(1 << 2)) != 0ul) ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_11 = (_Bool)0;
            if(tmp_if_expr_11)
            {
              *cp2 = (char)0;
              *cp1 = (char)0;
              *line = cp1;
              return (char *)(void *)0;
            }

            else
            {
              return_value___ctype_b_loc_4=__ctype_b_loc();
              if((8192 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)*cp1]) == 0 && dq == 0 && sq == 0)
                tmp_if_expr_5 = (signed int)*cp1 != 34 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_5 = (_Bool)0;
              if(tmp_if_expr_5)
                tmp_if_expr_6 = (signed int)*cp1 != 39 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_6 = (_Bool)0;
              if(tmp_if_expr_6)
                tmp_if_expr_8 = (_Bool)1;

              else
              {
                if(!(dq == 0))
                  tmp_if_expr_7 = (signed int)*cp1 != 34 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_7 = (_Bool)0;
                tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_8)
                tmp_if_expr_10 = (_Bool)1;

              else
              {
                if(!(sq == 0))
                  tmp_if_expr_9 = (signed int)*cp1 != 39 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_9 = (_Bool)0;
                tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_10)
              {
                tmp_post_3 = cp2;
                cp2 = cp2 + 1l;
                *tmp_post_3 = *cp1;
              }

            }
          }
          cp1 = cp1 + 1l;
        }
      }
    }

  __CPROVER_DUMP_L31:
    ;
    *line = cp1;
    if((2ul & configfile->flags) == 2ul)
    {
      if(!(buf[0l] == 0))
      {
        return_value_strdup_13=strdup(buf);
        tmp_if_expr_14 = return_value_strdup_13;
      }

      else
        tmp_if_expr_14 = (char *)(void *)0;
      return tmp_if_expr_14;
    }

    else
    {
      if(!(buf[0l] == 0))
      {
        return_value_strdup_15=strdup(buf);
        return_value_dotconf_substitute_env_16=dotconf_substitute_env(configfile, return_value_strdup_15);
        tmp_if_expr_17 = return_value_dotconf_substitute_env_16;
      }

      else
        tmp_if_expr_17 = (char *)(void *)0;
      return tmp_if_expr_17;
    }
  }
}

// dotconf_register_options
// file dotconf.c line 220
void dotconf_register_options(struct configfile_t *configfile, const struct configoption_t *options)
{
  signed int num = configfile->config_option_count;
  void *return_value_malloc_1;
  void *return_value_realloc_2;
  if(configfile->config_options == ((const struct configoption_t **)NULL))
  {
    return_value_malloc_1=malloc(sizeof(void *) /*8ul*/  * (unsigned long int)(10 + 1));
    configfile->config_options = (const struct configoption_t **)return_value_malloc_1;
  }

  else
    if(num % 10 == 0)
    {
      return_value_realloc_2=realloc((void *)configfile->config_options, sizeof(void *) /*8ul*/  * (unsigned long int)(num + 10 + 1));
      configfile->config_options = (const struct configoption_t **)return_value_realloc_2;
    }

  configfile->config_options[(signed long int)configfile->config_option_count] = options;
  configfile->config_option_count = configfile->config_option_count + 1;
  configfile->config_options[(signed long int)configfile->config_option_count] = ((const struct configoption_t *)NULL);
}

// dotconf_set_command
// file dotconf.c line 490
void dotconf_set_command(struct configfile_t *configfile, const struct configoption_t *option, char *args, struct command_t *cmd)
{
  char *eob = ((char *)NULL);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(args);
  eob = args + (signed long int)return_value_strlen_1;
  char *tmp_if_expr_2;
  if(option->type == 4)
    tmp_if_expr_2 = name;

  else
    tmp_if_expr_2 = option->name;
  cmd->name = tmp_if_expr_2;
  cmd->option = (struct configoption_t *)option;
  cmd->context = configfile->context;
  cmd->configfile = configfile;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)16, sizeof(char *) /*8ul*/ );
  cmd->data.list = (char **)return_value_calloc_3;
  cmd->data.str = ((char *)NULL);
  if(option->type == 5)
    cmd->data.str=strdup(args);

  else
    if(option->type == 2)
    {
      char *cp = args;
      safe_skip_whitespace(&cp, (signed int)((signed long int)eob - (signed long int)cp), (char)0);
      signed int return_value_strncmp_4;
      return_value_strncmp_4=strncmp("<<", cp, (unsigned long int)2);
      if(return_value_strncmp_4 == 0)
      {
        cmd->data.str=dotconf_get_here_document(configfile, cp + (signed long int)2);
        cmd->arg_count = 1;
      }

    }

  _Bool tmp_if_expr_14;
  if(option->type == 2)
    tmp_if_expr_14 = cmd->data.str != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_14 = (_Bool)0;
  signed int tmp_post_5;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  if(!tmp_if_expr_14)
  {
    safe_skip_whitespace(&args, (signed int)(eob - args), (char)0);
    cmd->arg_count = 0;
    for( ; !(cmd->arg_count >= 16); cmd->arg_count = cmd->arg_count + 1)
    {
      cmd->data.list[(signed long int)cmd->arg_count]=dotconf_read_arg(configfile, &args);
      if(cmd->data.list[(signed long int)cmd->arg_count] == ((char *)NULL))
        break;

    }
    safe_skip_whitespace(&args, (signed int)(eob - args), (char)0);
    if(!(cmd->arg_count == 0))
    {
      if(!(cmd->data.list[(signed long int)(cmd->arg_count + -1)] == ((char *)NULL)))
      {
        if(!(*args == 0))
        {
          tmp_post_5 = cmd->arg_count;
          cmd->arg_count = cmd->arg_count + 1;
          cmd->data.list[(signed long int)tmp_post_5]=strdup(args);
        }

      }

    }

    if(!(option->name == ((const char *)NULL)))
      tmp_if_expr_12 = (signed int)option->name[(signed long int)0] > 32 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_12 = (_Bool)0;
    if(tmp_if_expr_12)
      tmp_if_expr_13 = (_Bool)1;

    else
      tmp_if_expr_13 = option->type == 4 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_13)
      switch(option->type)
      {
        case 0:
        {
          if(!(cmd->arg_count >= 1))
          {
            dotconf_warning(configfile, 4, (unsigned long int)0x0003, "Missing argument to option '%s'", (const void *)name);
            goto __CPROVER_DUMP_L34;
          }

          if((signed int)*(*cmd->data.list) == 89)
            tmp_if_expr_6 = (_Bool)1;

          else
            tmp_if_expr_6 = (signed int)cmd->data.list[(signed long int)0][(signed long int)0] == 121 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_6)
            tmp_if_expr_7 = (_Bool)1;

          else
            tmp_if_expr_7 = (signed int)cmd->data.list[(signed long int)0][(signed long int)0] == 49 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_7)
            tmp_if_expr_11 = (_Bool)1;

          else
          {
            if((signed int)*(*cmd->data.list) == 111)
              tmp_if_expr_8 = (_Bool)1;

            else
              tmp_if_expr_8 = (signed int)cmd->data.list[(signed long int)0][(signed long int)0] == 79 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_8)
            {
              if((signed int)(*cmd->data.list)[1l] == 110)
                tmp_if_expr_9 = (_Bool)1;

              else
                tmp_if_expr_9 = (signed int)cmd->data.list[(signed long int)0][(signed long int)1] == 78 ? (_Bool)1 : (_Bool)0;
              tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_10 = (_Bool)0;
            tmp_if_expr_11 = tmp_if_expr_10 ? (_Bool)1 : (_Bool)0;
          }
          cmd->data.value = (signed long int)tmp_if_expr_11;
          break;
        }
        case 1:
        {
          if(!(cmd->arg_count >= 1))
          {
            dotconf_warning(configfile, 4, (unsigned long int)0x0003, "Missing argument to option '%s'", (const void *)name);
            goto __CPROVER_DUMP_L34;
          }

          sscanf(cmd->data.list[(signed long int)0], "%li", &cmd->data.value);
          break;
        }
        case 2:
        {
          if(!(cmd->arg_count >= 1))
          {
            dotconf_warning(configfile, 4, (unsigned long int)0x0003, "Missing argument to option '%s'", (const void *)name);
            goto __CPROVER_DUMP_L34;
          }

          cmd->data.str=strdup(cmd->data.list[(signed long int)0]);
        }
        case 4:

        case 3:

        case 6:

        case 5:

        default:
          ;
      }

  }


__CPROVER_DUMP_L34:
  ;
}

// dotconf_star_match
// file dotconf.c line 945
signed int dotconf_star_match(char *dir_name, char *pre, char *ext)
{
  signed int retval = -1;
  signed int dir_name_len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(dir_name);
  dir_name_len = (signed int)return_value_strlen_1;
  signed int pre_len;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(pre);
  pre_len = (signed int)return_value_strlen_2;
  signed int ext_len;
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(ext);
  ext_len = (signed int)return_value_strlen_3;
  signed int w_card_check;
  unsigned long int return_value_strcspn_4;
  return_value_strcspn_4=strcspn(ext, "*?");
  w_card_check = (signed int)return_value_strcspn_4;
  _Bool tmp_if_expr_10;
  signed int return_value_strncmp_9;
  if(!(w_card_check >= ext_len))
  {
    return_value_strncmp_9=strncmp(dir_name, pre, (unsigned long int)pre_len);
    tmp_if_expr_10 = return_value_strncmp_9 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_10 = (_Bool)0;
  _Bool tmp_if_expr_12;
  signed int return_value_strcmp_11;
  if(tmp_if_expr_10)
  {
    return_value_strcmp_11=strcmp(dir_name, ".");
    tmp_if_expr_12 = return_value_strcmp_11 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_12 = (_Bool)0;
  _Bool tmp_if_expr_14;
  signed int return_value_strcmp_13;
  if(tmp_if_expr_12)
  {
    return_value_strcmp_13=strcmp(dir_name, "..");
    tmp_if_expr_14 = return_value_strcmp_13 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_14 = (_Bool)0;
  signed int return_value_dotconf_strcmp_from_back_8;
  signed int return_value_strncmp_7;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_5;
  if(tmp_if_expr_14)
    retval = 1;

  else
    if(dir_name_len >= ext_len + pre_len)
    {
      return_value_dotconf_strcmp_from_back_8=dotconf_strcmp_from_back(dir_name, ext);
      if(return_value_dotconf_strcmp_from_back_8 == 0)
      {
        return_value_strncmp_7=strncmp(dir_name, pre, (unsigned long int)pre_len);
        if(return_value_strncmp_7 == 0)
        {
          return_value_strcmp_6=strcmp(dir_name, ".");
          if(!(return_value_strcmp_6 == 0))
          {
            return_value_strcmp_5=strcmp(dir_name, "..");
            if(!(return_value_strcmp_5 == 0))
              retval = 0;

          }

        }

      }

    }

  return retval;
}

// dotconf_strcmp_from_back
// file dotconf.c line 896
signed int dotconf_strcmp_from_back(const char *s1, const char *s2)
{
  signed int retval = 0;
  signed int i;
  signed int j;
  signed int len_1;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s1);
  len_1 = (signed int)return_value_strlen_1;
  signed int len_2;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(s2);
  len_2 = (signed int)return_value_strlen_2;
  i = len_1;
  j = len_2;
  for( ; i >= 0 && j >= 0; j = j - 1)
  {
    if(!(s1[(signed long int)i] == s2[(signed long int)j]))
    {
      retval = -1;
      break;
    }

    i = i - 1;
  }
  return retval;
}

// dotconf_substitute_env
// file dotconf.c line 123
char * dotconf_substitute_env(struct configfile_t *configfile, char *str)
{
  char *cp1;
  char *cp2;
  char *cp3;
  char *eos;
  char *eob;
  char *env_value;
  char env_name[4065l];
  char env_default[4065l];
  char tmp_value[4065l];
  memset((void *)env_name, 0, (unsigned long int)(4064 + 1));
  memset((void *)env_default, 0, (unsigned long int)(4064 + 1));
  memset((void *)tmp_value, 0, (unsigned long int)(4064 + 1));
  cp1 = str;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str);
  eob = cp1 + (signed long int)return_value_strlen_1 + (signed long int)1;
  cp2 = tmp_value;
  eos = cp2 + (signed long int)4064 + (signed long int)1;
  char *tmp_post_2;
  char *tmp_post_3;
  _Bool tmp_if_expr_6;
  char *tmp_post_4;
  char *tmp_post_5;
  char *tmp_post_9;
  char *tmp_post_10;
  for( ; !(cp1 >= eob); *tmp_post_9 = *tmp_post_10)
  {
    if(cp2 >= eos)
      break;

    if((signed int)*cp1 == 0)
      break;

    if((signed int)*cp1 == 36)
    {
      if((signed int)cp1[1l] == 123)
      {
        cp1 = cp1 + (signed long int)2;
        cp3 = env_name;
        for( ; !(cp1 >= eob); *tmp_post_2 = *tmp_post_3)
        {
          if((signed int)*cp1 == 125)
            break;

          if((signed int)*cp1 == 58)
            break;

          tmp_post_2 = cp3;
          cp3 = cp3 + 1l;
          tmp_post_3 = cp1;
          cp1 = cp1 + 1l;
        }
        *cp3 = (char)0;
        if((signed int)*cp1 == 58)
          tmp_if_expr_6 = (signed int)cp1[(signed long int)1] == 45 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
        {
          cp1 = cp1 + (signed long int)2;
          cp3 = env_default;
          for( ; !(cp1 >= eob); *tmp_post_4 = *tmp_post_5)
          {
            if((signed int)*cp1 == 125)
              break;

            tmp_post_4 = cp3;
            cp3 = cp3 + 1l;
            tmp_post_5 = cp1;
            cp1 = cp1 + 1l;
          }
          *cp3 = (char)0;
        }

        else
          for( ; !(cp1 >= eob); cp1 = cp1 + 1l)
            if((signed int)*cp1 == 125)
              break;

        if(!((signed int)*cp1 == 125))
          dotconf_warning(configfile, 4, (unsigned long int)0x0001, "Unbalanced '{'");

        else
        {
          cp1 = cp1 + 1l;
          env_value=getenv(env_name);
          if(!(env_value == ((char *)NULL)))
          {
            strncat(cp2, env_value, (unsigned long int)(eos - cp2));
            unsigned long int return_value_strlen_7;
            return_value_strlen_7=strlen(env_value);
            cp2 = cp2 + (signed long int)return_value_strlen_7;
          }

          else
          {
            strncat(cp2, env_default, (unsigned long int)(eos - cp2));
            unsigned long int return_value_strlen_8;
            return_value_strlen_8=strlen(env_default);
            cp2 = cp2 + (signed long int)return_value_strlen_8;
          }
        }
      }

    }

    tmp_post_9 = cp2;
    cp2 = cp2 + 1l;
    tmp_post_10 = cp1;
    cp1 = cp1 + 1l;
  }
  *cp2 = (char)0;
  free((void *)str);
  char *return_value_strdup_11;
  return_value_strdup_11=strdup(tmp_value);
  return return_value_strdup_11;
}

// dotconf_warning
// file dotconf.c line 196
signed int dotconf_warning(struct configfile_t *configfile, signed int type, unsigned long int errnum, const char *fmt, ...)
{
  void **args;
  signed int retval = 0;
  args = (void **)&fmt;
  if(!(configfile->errorhandler == ((signed int (*)(struct configfile_t *, signed int, unsigned long int, const char *))NULL)))
  {
    char msg[4096l];
    vsnprintf(msg, (unsigned long int)4096, fmt, args);
    retval=configfile->errorhandler(configfile, type, errnum, msg);
  }

  else
  {
    retval = 0;
    fprintf(stderr, "%s:%ld: ", configfile->filename, configfile->line);
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
  }
  args = ((void **)NULL);
  return retval;
}

// dotconf_wild_card_cleanup
// file dotconf.c line 817
void dotconf_wild_card_cleanup(char *path, char *pre)
{
  if(!(path == ((char *)NULL)))
    free((void *)path);

  if(!(pre == ((char *)NULL)))
    free((void *)pre);

}

// end
// file process_xml.c line 1218
static void end(void *data, const char *el)
{
  struct xml_tag *xt;
  signed int rc;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(el);
  xt=in_xml_list((char *)el, (unsigned int)return_value_strlen_1);
  if(!(xt == ((struct xml_tag *)NULL)))
  {
    switch((signed int)xt->tag)
    {
      case GRID_TAG:
      {
        rc=endElement_GRID(data, el);
        break;
      }
      case CLUSTER_TAG:
        rc=endElement_CLUSTER(data, el);
    }
    goto __CPROVER_DUMP_L5;
  }


__CPROVER_DUMP_L5:
  ;
}

// end_link1
// file ganglia.c line 141
static void end_link1(void *data_link1, const char *el_link1)
{
  struct anonymous_36 *cluster = (struct anonymous_36 *)data_link1;
  struct _llist_entry *e;
  struct _llist_entry *e2;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp("HOST", el_link1);
  if(return_value_strcmp_1 == 0)
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct _llist_entry) /*24ul*/ );
    e = (struct _llist_entry *)return_value_malloc_2;
    if(e == ((struct _llist_entry *)NULL))
    {
      if(!(cluster->host == ((struct gexec_host_t *)NULL)))
        free((void *)cluster->host);

      gexec_errno = 1;
    }

    else
    {
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(struct _llist_entry) /*24ul*/ );
      e2 = (struct _llist_entry *)return_value_malloc_3;
      if(e == ((struct _llist_entry *)NULL))
      {
        if(!(cluster->host == ((struct gexec_host_t *)NULL)))
          free((void *)cluster->host);

        gexec_errno = 1;
        free((void *)e);
      }

      else
      {
        e2->val = (void *)cluster->host;
        e->val = e2->val;
        if(!(cluster->host_up == 0))
        {
          cluster->num_hosts = cluster->num_hosts + 1u;
          llist_add((struct _llist_entry **)&cluster->hosts, e);
          if(!(cluster->host->gexec_on == 0))
          {
            cluster->num_gexec_hosts = cluster->num_gexec_hosts + 1u;
            llist_add((struct _llist_entry **)&cluster->gexec_hosts, e2);
          }

          else
            free((void *)e2);
        }

        else
        {
          cluster->num_dead_hosts = cluster->num_dead_hosts + 1u;
          llist_add((struct _llist_entry **)&cluster->dead_hosts, e);
        }
      }
    }
  }

}

// endElement_CLUSTER
// file process_xml.c line 1175
static signed int endElement_CLUSTER(void *data, const char *el)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  struct anonymous_7 hashkey;
  struct anonymous_7 endElement_CLUSTER__1__hashval;
  struct anonymous_7 *rdatum;
  struct anonymous_8 *summary;
  struct anonymous_11 *source;
  signed int return_value_authority_mode_2;
  return_value_authority_mode_2=authority_mode(xmldata);
  if(!(return_value_authority_mode_2 == 0))
  {
    source = &xmldata->source;
    pthread_mutex_lock(source->sum_finished);
    summary = xmldata->source.metric_summary_pending;
    xmldata->source.metric_summary_pending = xmldata->source.metric_summary;
    xmldata->source.metric_summary = summary;
    pthread_mutex_unlock(source->sum_finished);
    hashkey.data = (void *)xmldata->sourcename;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(xmldata->sourcename);
    hashkey.size = (unsigned int)(return_value_strlen_1 + (unsigned long int)1);
    endElement_CLUSTER__1__hashval.data = (void *)source;
    endElement_CLUSTER__1__hashval.size = (unsigned int)((sizeof(struct anonymous_11) /*1664ul*/  - (unsigned long int)1572) + (unsigned long int)source->stringslen);
    rdatum=hash_insert(&hashkey, &endElement_CLUSTER__1__hashval, xmldata->root);
    if(rdatum == ((struct anonymous_7 *)NULL))
    {
      err_msg("Could not insert source %s", xmldata->sourcename);
      return 1;
    }

    hash_foreach(summary, finish_processing_source, data);
  }

  return 0;
}

// endElement_GRID
// file process_xml.c line 1124
static signed int endElement_GRID(void *data, const char *el)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  if(gmetad_config.scalable_mode == 0)
    return 0;

  else
  {
    xmldata->grid_depth = xmldata->grid_depth - 1;
    debug_msg("Found a </GRID>, depth is now %d", xmldata->grid_depth);
    struct anonymous_7 hashkey;
    struct anonymous_7 endElement_GRID__1__hashval;
    struct anonymous_7 *rdatum;
    struct anonymous_8 *summary;
    struct anonymous_11 *source;
    signed int return_value_authority_mode_2;
    return_value_authority_mode_2=authority_mode(xmldata);
    if(!(return_value_authority_mode_2 == 0))
    {
      source = &xmldata->source;
      pthread_mutex_lock(source->sum_finished);
      summary = xmldata->source.metric_summary_pending;
      xmldata->source.metric_summary_pending = xmldata->source.metric_summary;
      xmldata->source.metric_summary = summary;
      pthread_mutex_unlock(source->sum_finished);
      hashkey.data = (void *)xmldata->sourcename;
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(xmldata->sourcename);
      hashkey.size = (unsigned int)(return_value_strlen_1 + (unsigned long int)1);
      endElement_GRID__1__hashval.data = (void *)source;
      endElement_GRID__1__hashval.size = (unsigned int)((sizeof(struct anonymous_11) /*1664ul*/  - (unsigned long int)1572) + (unsigned long int)source->stringslen);
      rdatum=hash_insert(&hashkey, &endElement_GRID__1__hashval, xmldata->root);
      if(rdatum == ((struct anonymous_7 *)NULL))
      {
        err_msg("Could not insert source %s", xmldata->sourcename);
        return 1;
      }

      hash_foreach(summary, finish_processing_source, data);
    }

    return 0;
  }
}

// err_doit
// file error_msg.c line 130
static void err_doit(signed int errnoflag, signed int level, const char *fmt, void **ap)
{
  signed int errno_save;
  signed int n;
  char buf[4097l];
  char *return_value_strerror_3;
  if(ganglia_quiet_errors == 0)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    errno_save = *return_value___errno_location_1;
    vsnprintf(buf, (unsigned long int)4096, fmt, ap);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(buf);
    n = (signed int)return_value_strlen_2;
    if(!(errnoflag == 0))
    {
      return_value_strerror_3=strerror(errno_save);
      snprintf(buf + (signed long int)n, (unsigned long int)(4096 - n), ": %s", return_value_strerror_3);
    }

    strcat(buf, "\n");
    if(!(daemon_proc == 0))
      syslog(level, "%s", (const void *)buf);

    else
    {
      fflush(stdout);
      fputs(buf, stderr);
      fflush(stderr);
    }
    goto __CPROVER_DUMP_L5;
  }


__CPROVER_DUMP_L5:
  ;
}

// err_dump
// file error_msg.c line 81
void err_dump(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(1, 3, fmt, ap);
  ap = ((void **)NULL);
  abort();
  exit(1);
}

// err_msg
// file ../include/gm_msg.h line 24
void err_msg(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(0, 6, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// err_quiet
// file error_msg.c line 27
void err_quiet(void)
{
  ganglia_quiet_errors = 1;
}

// err_quit
// file ../include/gm_msg.h line 25
void err_quit(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(0, 3, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// err_ret
// file ../include/gm_msg.h line 21
void err_ret(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(1, 6, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// err_sys
// file ../include/gm_msg.h line 22
void err_sys(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(1, 3, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// err_verbose
// file error_msg.c line 33
void err_verbose(void)
{
  ganglia_quiet_errors = 0;
}

// errorhandler
// file conf.c line 329
static signed int errorhandler(struct configfile_t *configfile, signed int type, signed long int dc_errno, const char *msg)
{
  err_quit("gmetad config file error: %s\n", msg);
  return 0;
}

// fillmetric
// file process_xml.c line 72
static void fillmetric(const char **attr, struct anonymous_9 *metric, const char *type)
{
  signed int i;
  signed int edge = 0;
  struct type_tag *tt;
  struct xml_tag *xt;
  char *metricval;
  char *p;
  metric->slope = (signed short int)-1;
  i = 0;
  unsigned long int return_value_strlen_2;
  double return_value_strtod_3;
  unsigned long int return_value_strlen_4;
  signed int return_value_addstring_5;
  signed int return_value_addstring_6;
  signed int return_value_addstring_7;
  signed int return_value_atoi_8;
  signed int return_value_atoi_9;
  signed int return_value_atoi_10;
  signed int return_value_addstring_11;
  signed int return_value_addstring_12;
  signed int return_value_atoi_13;
  for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(attr[(signed long int)i]);
    xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_1);
    if(!(xt == ((struct xml_tag *)NULL)))
      switch((signed int)xt->tag)
      {
        case SUM_TAG:

        case VAL_TAG:
        {
          metricval = (char *)attr[(signed long int)(i + 1)];
          return_value_strlen_2=strlen(type);
          tt=in_type_list(type, (unsigned int)return_value_strlen_2);
          if(tt == ((struct type_tag *)NULL))
            goto __CPROVER_DUMP_L21;

          switch((signed int)tt->type)
          {
            case INT:

            case TIMESTAMP:

            case UINT:

            case FLOAT:
            {
              return_value_strtod_3=strtod(metricval, (char **)(void *)0);
              metric->val.d = (double)return_value_strtod_3;
              p=strrchr(metricval, 46);
              if(!(p == ((char *)NULL)))
              {
                return_value_strlen_4=strlen(p + (signed long int)1);
                metric->precision = (signed short int)return_value_strlen_4;
              }

              break;
            }
            case STRING:
              ;
          }
          return_value_addstring_5=addstring(metric->strings, &edge, metricval);
          metric->valstr = (signed short int)return_value_addstring_5;
          break;
        }
        case TYPE_TAG:
        {
          return_value_addstring_6=addstring(metric->strings, &edge, attr[(signed long int)(i + 1)]);
          metric->type = (signed short int)return_value_addstring_6;
          break;
        }
        case UNITS_TAG:
        {
          return_value_addstring_7=addstring(metric->strings, &edge, attr[(signed long int)(i + 1)]);
          metric->units = (signed short int)return_value_addstring_7;
          break;
        }
        case TN_TAG:
        {
          return_value_atoi_8=atoi(attr[(signed long int)(i + 1)]);
          metric->tn = (unsigned int)return_value_atoi_8;
          break;
        }
        case TMAX_TAG:
        {
          return_value_atoi_9=atoi(attr[(signed long int)(i + 1)]);
          metric->tmax = (unsigned int)return_value_atoi_9;
          break;
        }
        case DMAX_TAG:
        {
          return_value_atoi_10=atoi(attr[(signed long int)(i + 1)]);
          metric->dmax = (unsigned int)return_value_atoi_10;
          break;
        }
        case SLOPE_TAG:
        {
          return_value_addstring_11=addstring(metric->strings, &edge, attr[(signed long int)(i + 1)]);
          metric->slope = (signed short int)return_value_addstring_11;
          break;
        }
        case SOURCE_TAG:
        {
          return_value_addstring_12=addstring(metric->strings, &edge, attr[(signed long int)(i + 1)]);
          metric->source = (signed short int)return_value_addstring_12;
          break;
        }
        case NUM_TAG:
        {
          return_value_atoi_13=atoi(attr[(signed long int)(i + 1)]);
          metric->num = (unsigned int)return_value_atoi_13;
          break;
        }
        default:
          ;
      }

  }
  metric->stringslen = (signed short int)edge;

__CPROVER_DUMP_L21:
  ;
}

// finish_processing_source
// file process_xml.c line 1066
static signed int finish_processing_source(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)arg;
  char *finish_processing_source__1__name;
  char *type;
  char sum[512l];
  char num[256l];
  struct anonymous_9 *metric;
  struct type_tag *tt;
  struct _llist_entry *le;
  finish_processing_source__1__name = (char *)key->data;
  metric = (struct anonymous_9 *)val->data;
  type=getfield(metric->strings, metric->type);
  if(!(xmldata->ds->dead == 0) || !(gmetad_config.write_rrds == 1))
    return 1;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(type);
    tt=in_type_list(type, (unsigned int)return_value_strlen_1);
    if(tt == ((struct type_tag *)NULL))
      return 0;

    else
    {
      signed int return_value_llist_search_2;
      return_value_llist_search_2=llist_search(&gmetad_config.unsummarized_metrics, (void *)finish_processing_source__1__name, llist_strncmp, &le);
      if(return_value_llist_search_2 == 0)
        return 0;

      else
      {
        switch((signed int)tt->type)
        {
          case INT:

          case UINT:
          {
            sprintf(sum, "%.f", metric->val.d);
            break;
          }
          case FLOAT:
            sprintf(sum, "%.*f", (signed int)metric->precision, metric->val.d);
        }
        sprintf(num, "%u", metric->num);
        if(xmldata->ds->dead == 0)
        {
          if(xmldata->rval == 0)
          {
            debug_msg("Writing Summary data for source %s, metric %s", xmldata->sourcename, finish_processing_source__1__name);
            char *return_value_getfield_3;
            return_value_getfield_3=getfield(metric->strings, metric->slope);
            enum ganglia_slope return_value_cstr_to_slope_4;
            return_value_cstr_to_slope_4=cstr_to_slope(return_value_getfield_3);
            xmldata->rval=write_data_to_rrd(xmldata->sourcename, (const char *)(void *)0, finish_processing_source__1__name, sum, num, xmldata->ds->step, xmldata->source.localtime, return_value_cstr_to_slope_4);
          }

        }

        return xmldata->rval;
      }
    }
  }
}

// free_string_field
// file cmdline.c line 160
static void free_string_field(char **s)
{
  if(!(*s == ((char *)NULL)))
  {
    free((void *)*s);
    *s = ((char *)NULL);
  }

}

// g_gethostbyaddr
// file inetaddr.c line 74
char * g_gethostbyaddr(const char *addr, unsigned long int length, signed int type)
{
  char *rv = (char *)(void *)0;
  struct hostent *he;
  pthread_mutex_lock(&gethostbyname_mutex);
  he=gethostbyaddr((const void *)addr, (unsigned int)length, type);
  char *return_value_strdup_1;
  if(!(he == ((struct hostent *)NULL)))
  {
    if(!(he->h_name == ((char *)NULL)))
    {
      return_value_strdup_1=strdup(he->h_name);
      rv = (char *)return_value_strdup_1;
    }

  }

  pthread_mutex_unlock(&gethostbyname_mutex);
  return rv;
}

// g_gethostbyname
// file ../lib/net.h line 51
signed int g_gethostbyname(const char *hostname, struct sockaddr_in *sa, char **nicename)
{
  signed int rv = 0;
  struct in_addr inaddr;
  struct hostent *he;
  signed int return_value_inet_aton_2;
  return_value_inet_aton_2=inet_aton(hostname, &inaddr);
  char *return_value_strdup_1;
  if(!(return_value_inet_aton_2 == 0))
  {
    sa->sin_family = (unsigned short int)2;
    memcpy((void *)&sa->sin_addr, (const void *)(char *)&inaddr, sizeof(struct in_addr) /*4ul*/ );
    if(!(nicename == ((char **)NULL)))
    {
      return_value_strdup_1=strdup(hostname);
      *nicename = (char *)return_value_strdup_1;
    }

    return 1;
  }

  pthread_mutex_lock(&gethostbyname_mutex);
  struct hostent *return_value_gethostbyname_3;
  return_value_gethostbyname_3=gethostbyname(hostname);
  he = (struct hostent *)return_value_gethostbyname_3;
  char *return_value_strdup_4;
  if(!(he == ((struct hostent *)NULL)))
  {
    if(he->h_addrtype == 2)
    {
      if(!(*he->h_addr_list == ((char *)NULL)))
      {
        if(!(sa == ((struct sockaddr_in *)NULL)))
        {
          sa->sin_family = (unsigned short int)he->h_addrtype;
          memcpy((void *)&sa->sin_addr, (const void *)he->h_addr_list[(signed long int)0], (unsigned long int)he->h_length);
        }

        if(!(nicename == ((char **)NULL)))
        {
          if(!(he->h_name == ((char *)NULL)))
          {
            return_value_strdup_4=strdup(he->h_name);
            *nicename = (char *)return_value_strdup_4;
          }

        }

        rv = 1;
      }

    }

  }

  pthread_mutex_unlock(&gethostbyname_mutex);
  return rv;
}

// g_inetaddr_delete
// file inetaddr.c line 156
void g_inetaddr_delete(struct anonymous_4 *ia)
{
  if(!(ia == ((struct anonymous_4 *)NULL)))
    g_inetaddr_unref(ia);

}

// g_inetaddr_get_interface_to
// file inetaddr.c line 199
struct anonymous_4 * g_inetaddr_get_interface_to(const struct anonymous_4 *addr)
{
  signed int sockfd;
  struct sockaddr_in myaddr;
  unsigned int len;
  struct anonymous_4 *iface;
  if(addr == ((const struct anonymous_4 *)NULL))
    return (struct anonymous_4 *)(void *)0;

  else
  {
    sockfd=socket(2, 2, 0);
    if(sockfd == -1)
      return (struct anonymous_4 *)(void *)0;

    else
    {
      signed int return_value_connect_1;
      return_value_connect_1=connect(sockfd, &addr->sa, (unsigned int)sizeof(struct sockaddr) /*16ul*/ );
      if(return_value_connect_1 == -1)
      {
        close(sockfd);
        return (struct anonymous_4 *)(void *)0;
      }

      else
      {
        len = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;
        signed int return_value_getsockname_2;
        return_value_getsockname_2=getsockname(sockfd, (struct sockaddr *)&myaddr, &len);
        if(!(return_value_getsockname_2 == 0))
        {
          close(sockfd);
          return (struct anonymous_4 *)(void *)0;
        }

        else
        {
          void *return_value_malloc_3;
          return_value_malloc_3=malloc(sizeof(struct anonymous_4) /*32ul*/ );
          iface = (struct anonymous_4 *)return_value_malloc_3;
          if(iface == ((struct anonymous_4 *)NULL))
          {
            close(sockfd);
            return (struct anonymous_4 *)(void *)0;
          }

          else
          {
            iface->ref_count = (unsigned int)1;
            memcpy((void *)&iface->sa, (const void *)(char *)&myaddr, sizeof(struct sockaddr_in) /*16ul*/ );
            return iface;
          }
        }
      }
    }
  }
}

// g_inetaddr_get_port
// file inetaddr.c line 163
signed int g_inetaddr_get_port(const struct anonymous_4 *ia)
{
  if(ia == ((const struct anonymous_4 *)NULL))
    return -1;

  else
  {
    unsigned short int return_value_ntohs_1;
    return_value_ntohs_1=ntohs(((struct sockaddr_in *)&ia->sa)->sin_port);
    return (signed int)return_value_ntohs_1;
  }
}

// g_inetaddr_is_multicast
// file inetaddr.c line 182
signed int g_inetaddr_is_multicast(const struct anonymous_4 *inetaddr)
{
  unsigned int addr;
  if(inetaddr == ((const struct anonymous_4 *)NULL))
    return 0;

  else
  {
    addr = ((struct sockaddr_in *)&inetaddr->sa)->sin_addr.s_addr;
    addr=htonl(addr);
    if((0xF0000000 & addr) == 0xE0000000)
      return 1;

    else
      return 0;
  }
}

// g_inetaddr_list_interfaces
// file inetaddr.c line 239
struct _llist_entry * g_inetaddr_list_interfaces(void)
{
  struct _llist_entry *list = (struct _llist_entry *)(void *)0;
  struct _llist_entry *e;
  signed int len;
  signed int lastlen;
  char *buf;
  char *ptr;
  signed int sockfd;
  struct ifconf ifc;
  sockfd=socket(2, 2, 0);
  _Bool tmp_if_expr_4;
  if(sockfd == -1)
    return (struct _llist_entry *)(void *)0;

  else
  {
    len = (signed int)((unsigned long int)8 * sizeof(struct ifreq) /*40ul*/ );
    lastlen = 0;
    while((_Bool)1)
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)len);
      buf = (char *)return_value_malloc_1;
      memset((void *)buf, 0, (unsigned long int)len);
      ifc.ifc_len = len;
      ifc.ifc_ifcu.ifcu_buf = buf;
      signed int return_value_ioctl_3;
      return_value_ioctl_3=ioctl(sockfd, (unsigned long int)0x8912, &ifc);
      if(!(return_value_ioctl_3 >= 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        if(!(*return_value___errno_location_2 == 22) || !(lastlen == 0))
        {
          free((void *)buf);
          return (struct _llist_entry *)(void *)0;
        }

      }

      else
      {
        if(ifc.ifc_len == lastlen)
          break;

        lastlen = ifc.ifc_len;
      }
      len = len + (signed int)((unsigned long int)8 * sizeof(struct ifreq) /*40ul*/ );
      free((void *)buf);
    }
    ptr = buf;
    while(!(ptr >= buf + (signed long int)ifc.ifc_len))
    {
      struct ifreq *ifr = (struct ifreq *)ptr;
      struct sockaddr addr;
      struct anonymous_4 *ia;
      ptr = ptr + (signed long int)sizeof(struct ifreq) /*40ul*/ ;
      if((signed int)ifr->ifr_ifru.ifru_addr.sa_family == 2)
      {
        memcpy((void *)&addr, (const void *)&ifr->ifr_ifru.ifru_addr, sizeof(struct sockaddr) /*16ul*/ );
        ioctl(sockfd, (unsigned long int)0x8913, ifr);
        if((1 & (signed int)ifr->ifr_ifru.ifru_flags) == 0)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = ((signed int)ifr->ifr_ifru.ifru_flags & 8) != 0 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_4)
        {
          void *return_value_malloc_5;
          return_value_malloc_5=malloc(sizeof(struct anonymous_4) /*32ul*/ );
          ia = (struct anonymous_4 *)return_value_malloc_5;
          memset((void *)ia, 0, sizeof(struct anonymous_4) /*32ul*/ );
          ia->ref_count = (unsigned int)1;
          memcpy((void *)&ia->sa, (const void *)&addr, sizeof(struct sockaddr) /*16ul*/ );
          void *return_value_malloc_6;
          return_value_malloc_6=malloc(sizeof(struct _llist_entry) /*24ul*/ );
          e = (struct _llist_entry *)return_value_malloc_6;
          if(e == ((struct _llist_entry *)NULL))
          {
            free((void *)ia);
            free((void *)buf);
            return (struct _llist_entry *)(void *)0;
          }

          e->val = (void *)ia;
          llist_add(&list, e);
        }

      }

    }
    free((void *)buf);
    return list;
  }
}

// g_inetaddr_new
// file ../lib/net.h line 55
struct anonymous_4 * g_inetaddr_new(const char *name, signed int port)
{
  struct sockaddr_in *sa_in;
  struct in_addr inaddr;
  struct anonymous_4 *ia = (struct anonymous_4 *)(void *)0;
  if(name == ((const char *)NULL))
    return (struct anonymous_4 *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct anonymous_4) /*32ul*/ );
    ia = (struct anonymous_4 *)return_value_malloc_1;
    if(ia == ((struct anonymous_4 *)NULL))
      return (struct anonymous_4 *)(void *)0;

    else
    {
      memset((void *)ia, 0, sizeof(struct anonymous_4) /*32ul*/ );
      char *return_value_strdup_2;
      return_value_strdup_2=strdup(name);
      ia->name = (char *)return_value_strdup_2;
      ia->ref_count = (unsigned int)1;
      signed int return_value_inet_aton_4;
      return_value_inet_aton_4=inet_aton(name, &inaddr);
      if(!(return_value_inet_aton_4 == 0))
      {
        sa_in = (struct sockaddr_in *)&ia->sa;
        sa_in->sin_family = (unsigned short int)2;
        sa_in->sin_port=htons((unsigned short int)port);
        memcpy((void *)&sa_in->sin_addr, (const void *)(char *)&inaddr, sizeof(struct in_addr) /*4ul*/ );
      }

      else
      {
        struct sockaddr_in sa;
        signed int return_value_g_gethostbyname_3;
        return_value_g_gethostbyname_3=g_gethostbyname(name, &sa, (char **)(void *)0);
        if(!(return_value_g_gethostbyname_3 == 0))
        {
          sa_in = (struct sockaddr_in *)&ia->sa;
          sa_in->sin_family = (unsigned short int)2;
          sa_in->sin_port=htons((unsigned short int)port);
          memcpy((void *)&sa_in->sin_addr, (const void *)&sa.sin_addr, (unsigned long int)4);
        }

      }
      return ia;
    }
  }
}

// g_inetaddr_ref
// file inetaddr.c line 131
void g_inetaddr_ref(struct anonymous_4 *ia)
{
  if(!(ia == ((struct anonymous_4 *)NULL)))
    ia->ref_count = ia->ref_count + 1u;

}

// g_inetaddr_set_port
// file inetaddr.c line 172
void g_inetaddr_set_port(const struct anonymous_4 *ia, unsigned int port)
{
  if(!(ia == ((const struct anonymous_4 *)NULL)))
    ((struct sockaddr_in *)&ia->sa)->sin_port=htons((unsigned short int)port);

}

// g_inetaddr_unref
// file inetaddr.c line 140
void g_inetaddr_unref(struct anonymous_4 *ia)
{
  if(!(ia == ((struct anonymous_4 *)NULL)))
  {
    ia->ref_count = ia->ref_count - 1u;
    if(ia->ref_count == 0u)
    {
      if(!(ia->name == ((char *)NULL)))
        free((void *)ia->name);

      free((void *)ia);
    }

  }

}

// g_tcp_socket_connect
// file net.h line 101
struct anonymous_2 * g_tcp_socket_connect(const char *hostname, signed int port)
{
  struct anonymous_4 *ia;
  struct anonymous_2 *g_tcp_socket_connect__1__socket;
  ia=g_inetaddr_new(hostname, port);
  if(ia == ((struct anonymous_4 *)NULL))
    return (struct anonymous_2 *)(void *)0;

  else
  {
    g_tcp_socket_connect__1__socket=g_tcp_socket_new(ia);
    g_inetaddr_delete(ia);
    return g_tcp_socket_connect__1__socket;
  }
}

// g_tcp_socket_delete
// file ../lib/net.h line 105
void g_tcp_socket_delete(struct anonymous_2 *s)
{
  if(!(s == ((struct anonymous_2 *)NULL)))
    g_tcp_socket_unref(s);

}

// g_tcp_socket_new
// file ../lib/net.h line 103
struct anonymous_2 * g_tcp_socket_new(const struct anonymous_4 *addr)
{
  signed int sockfd;
  struct anonymous_2 *s;
  struct sockaddr_in *sa_in;
  signed int rv;
  if(addr == ((const struct anonymous_4 *)NULL))
    return (struct anonymous_2 *)(void *)0;

  else
  {
    sockfd=socket(2, 1, 0);
    if(!(sockfd >= 0))
      return (struct anonymous_2 *)(void *)0;

    else
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct anonymous_2) /*24ul*/ );
      s = (struct anonymous_2 *)return_value_malloc_1;
      memset((void *)s, 0, sizeof(struct anonymous_2) /*24ul*/ );
      s->sockfd = sockfd;
      s->ref_count = (unsigned int)1;
      memcpy((void *)&s->sa, (const void *)&addr->sa, sizeof(struct sockaddr) /*16ul*/ );
      sa_in = (struct sockaddr_in *)&s->sa;
      sa_in->sin_family = (unsigned short int)2;
      rv=connect(sockfd, &s->sa, (unsigned int)sizeof(struct sockaddr) /*16ul*/ );
      if(!(rv == 0))
      {
        close(sockfd);
        free((void *)s);
        return (struct anonymous_2 *)(void *)0;
      }

      else
        return s;
    }
  }
}

// g_tcp_socket_server_accept
// file tcp.c line 207
struct anonymous_2 * g_tcp_socket_server_accept(struct anonymous_2 *socket)
{
  signed int sockfd;
  struct sockaddr sa;
  unsigned int n;
  struct anonymous_31 fdset;
  struct anonymous_2 *s;
  signed int return_value_select_2;
  signed int *return_value___errno_location_3;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  _Bool tmp_if_expr_7;
  signed int *return_value___errno_location_6;
  _Bool tmp_if_expr_9;
  signed int *return_value___errno_location_8;
  if(socket == ((struct anonymous_2 *)NULL))
    return (struct anonymous_2 *)(void *)0;

  else
  {
    do
    {

    try_again:
      ;
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_31) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fdset)->fds_bits[(signed long int)0]) : "memory");
      (&fdset)->fds_bits[(signed long int)(socket->sockfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&fdset)->fds_bits[(signed long int)(socket->sockfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << socket->sockfd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      return_value_select_2=select(socket->sockfd + 1, &fdset, (struct anonymous_31 *)(void *)0, (struct anonymous_31 *)(void *)0, (struct timeval *)(void *)0);
      if(return_value_select_2 == -1)
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        if(*return_value___errno_location_1 == 4)
          goto try_again;

        return (struct anonymous_2 *)(void *)0;
      }

      n = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
      sockfd=accept(socket->sockfd, &sa, &n);
      if(!(sockfd == -1))
        goto __CPROVER_DUMP_L9;

      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 11)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value___errno_location_4=__errno_location();
        tmp_if_expr_5 = *return_value___errno_location_4 == 103 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value___errno_location_6=__errno_location();
        tmp_if_expr_7 = *return_value___errno_location_6 == 71 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        return_value___errno_location_8=__errno_location();
        tmp_if_expr_9 = *return_value___errno_location_8 == 4 ? (_Bool)1 : (_Bool)0;
      }
    }
    while(tmp_if_expr_9);
    return (struct anonymous_2 *)(void *)0;

  __CPROVER_DUMP_L9:
    ;
    void *return_value_malloc_10;
    return_value_malloc_10=malloc(sizeof(struct anonymous_2) /*24ul*/ );
    s = (struct anonymous_2 *)return_value_malloc_10;
    memset((void *)s, 0, sizeof(struct anonymous_2) /*24ul*/ );
    s->ref_count = (unsigned int)1;
    s->sockfd = sockfd;
    memcpy((void *)&s->sa, (const void *)&sa, sizeof(struct sockaddr) /*16ul*/ );
    return s;
  }
}

// g_tcp_socket_server_new
// file ../lib/net.h line 107
struct anonymous_2 * g_tcp_socket_server_new(signed int port)
{
  struct anonymous_4 iface;
  struct sockaddr_in *sa_in;
  memset((void *)&iface, 0, sizeof(struct anonymous_4) /*32ul*/ );
  sa_in = (struct sockaddr_in *)&iface.sa;
  sa_in->sin_family = (unsigned short int)2;
  sa_in->sin_addr.s_addr=htonl((unsigned int)0x00000000);
  sa_in->sin_port=htons((unsigned short int)port);
  struct anonymous_2 *return_value_g_tcp_socket_server_new_interface_1;
  return_value_g_tcp_socket_server_new_interface_1=g_tcp_socket_server_new_interface(&iface);
  return return_value_g_tcp_socket_server_new_interface_1;
}

// g_tcp_socket_server_new_interface
// file tcp.c line 134
struct anonymous_2 * g_tcp_socket_server_new_interface(const struct anonymous_4 *iface)
{
  struct anonymous_2 *s;
  struct sockaddr_in *sa_in;
  unsigned int socklen;
  signed int rval;
  const signed int on = 1;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_2) /*24ul*/ );
  s = (struct anonymous_2 *)return_value_malloc_1;
  memset((void *)s, 0, sizeof(struct anonymous_2) /*24ul*/ );
  s->ref_count = (unsigned int)1;
  s->sockfd=socket(2, 1, 0);
  signed int return_value_bind_2;
  signed int return_value_getsockname_3;
  signed int return_value_listen_4;
  if(s->sockfd >= 0)
  {
    sa_in = (struct sockaddr_in *)&s->sa;
    sa_in->sin_family = (unsigned short int)2;
    if(!(iface == ((const struct anonymous_4 *)NULL)))
    {
      sa_in->sin_addr.s_addr = ((struct sockaddr_in *)&iface->sa)->sin_addr.s_addr;
      sa_in->sin_port = ((struct sockaddr_in *)&iface->sa)->sin_port;
    }

    else
    {
      sa_in->sin_addr.s_addr=htonl((unsigned int)0x00000000);
      sa_in->sin_port = (unsigned short int)0;
    }
    rval=setsockopt(s->sockfd, 1, 2, (void *)&on, (unsigned int)sizeof(const signed int) /*4ul*/ );
    if(!(rval >= 0))
    {
      err_ret("tcp_listen() setsockopt() SO_REUSEADDR error");
      goto error;
    }

    rval=setsockopt(s->sockfd, 1, 9, (void *)&on, (unsigned int)sizeof(const signed int) /*4ul*/ );
    if(!(rval >= 0))
    {
      err_ret("tcp_listen() setsockopt() SO_KEEPALIVE error");
      goto error;
    }

    rval=setsockopt(s->sockfd, 6, 1, (void *)&on, (unsigned int)sizeof(const signed int) /*4ul*/ );
    if(!(rval >= 0))
    {
      err_ret("tcp_listen() setsockopt() TCP_NODELAY error");
      goto error;
    }

    return_value_bind_2=bind(s->sockfd, &s->sa, (unsigned int)sizeof(struct sockaddr) /*16ul*/ );
    if(!(return_value_bind_2 == 0))
      goto error;

    socklen = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
    return_value_getsockname_3=getsockname(s->sockfd, &s->sa, &socklen);
    if(!(return_value_getsockname_3 == 0))
      goto error;

    return_value_listen_4=listen(s->sockfd, 10);
    if(!(return_value_listen_4 == 0))
      goto error;

    return s;
  }

  else
  {

  error:
    ;
    if(!(s == ((struct anonymous_2 *)NULL)))
      free((void *)s);

    return (struct anonymous_2 *)(void *)0;
  }
}

// g_tcp_socket_unref
// file tcp.c line 95
static void g_tcp_socket_unref(struct anonymous_2 *s)
{
  if(!(s == ((struct anonymous_2 *)NULL)))
  {
    s->ref_count = s->ref_count - 1u;
    if(s->ref_count == 0u)
    {
      close(s->sockfd);
      free((void *)s);
    }

  }

}

// gengetopt_strdup
// file cmdline.c line 253
static char * gengetopt_strdup(const char *s)
{
  char *result = ((char *)NULL);
  if(s == ((const char *)NULL))
    return result;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(s);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(return_value_strlen_1 + (unsigned long int)1);
    result = (char *)return_value_malloc_2;
    if(result == ((char *)NULL))
      return (char *)0;

    else
    {
      strcpy(result, s);
      return result;
    }
  }
}

// get_apr_os_socket
// file apr_net.c line 265
signed int get_apr_os_socket(struct apr_socket_t *socket)
{
  return socket->socketdes;
}

// get_argname_fallback
// file dotconf.c line 113
static const struct configoption_t * get_argname_fallback(const struct configoption_t *options)
{
  signed int i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if(!((options + (signed long int)i)->name == ((const char *)NULL)))
      tmp_if_expr_1 = (options + (signed long int)i)->name[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  if((options + (signed long int)i)->type == 4)
  {
    if((options + (signed long int)i)->callback == ((const char * (*)(struct command_t *, void *))NULL))
      goto __CPROVER_DUMP_L5;

    return &options[(signed long int)i];
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    return (const struct configoption_t *)(void *)0;
  }
}

// get_debug_msg_level
// file ../include/gm_msg.h line 18
signed int get_debug_msg_level()
{
  return debug_level_link1;
}

// getfield
// file gmetad.c line 89
char * getfield(char *buf, signed short int index)
{
  if(!((signed int)index >= 0))
    return "unspecified";

  else
    return (char *)buf + (signed long int)index;
}

// gexec_cluster
// file ganglia.c line 253
signed int gexec_cluster(struct anonymous_36 *cluster, char *ip, unsigned short int port)
{
  struct XML_ParserStruct *xml_parser;
  struct anonymous_2 *gmond_socket;
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  if(cluster == ((struct anonymous_36 *)NULL))
  {
    gexec_errno = 2;
    return gexec_errno;
  }

  else
  {
    gmond_socket=g_tcp_socket_connect(ip, (signed int)port);
    if(gmond_socket == ((struct anonymous_2 *)NULL))
    {
      gexec_errno = 3;
      return gexec_errno;
    }

    else
    {
      debug_msg("Connected to socket %s:%d", ip, port);
      xml_parser=XML_ParserCreate((const char *)(void *)0);
      if(xml_parser == ((struct XML_ParserStruct *)NULL))
      {
        gexec_errno = 4;
        return gexec_errno;
      }

      else
      {
        debug_msg("Created the XML Parser");
        memset((void *)cluster, 0, sizeof(struct anonymous_36) /*336ul*/ );
        cluster->localtime=time((signed long int *)(void *)0);
        XML_SetElementHandler(xml_parser, start_link1, end_link1);
        XML_SetUserData(xml_parser, (void *)cluster);
        do
        {
          signed int bytes_read;
          void *buff;
          buff=XML_GetBuffer(xml_parser, 8192);
          if(buff == NULL)
          {
            gexec_errno = 5;
            goto error;
          }

          debug_msg("Got the XML Buffer");
          do
          {
            signed long int return_value_read_3;
            return_value_read_3=read(gmond_socket->sockfd, buff, (unsigned long int)8192);
            bytes_read = (signed int)return_value_read_3;
            if(!(bytes_read >= 0))
            {
              return_value___errno_location_1=__errno_location();
              tmp_if_expr_2 = *return_value___errno_location_1 == 4 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_2 = (_Bool)0;
          }
          while(tmp_if_expr_2);
          if(!(bytes_read >= 0))
          {
            gexec_errno = 6;
            goto error;
          }

          debug_msg("Read %d bytes of data", bytes_read);
          enum XML_Status return_value_XML_ParseBuffer_7;
          return_value_XML_ParseBuffer_7=XML_ParseBuffer(xml_parser, bytes_read, (signed int)(bytes_read == 0));
          if(return_value_XML_ParseBuffer_7 == /*enum*/XML_STATUS_ERROR)
          {
            gexec_errno = 7;
            unsigned long int return_value_XML_GetCurrentLineNumber_4;
            return_value_XML_GetCurrentLineNumber_4=XML_GetCurrentLineNumber(xml_parser);
            enum XML_Error return_value_XML_GetErrorCode_5;
            return_value_XML_GetErrorCode_5=XML_GetErrorCode(xml_parser);
            const char *return_value_XML_ErrorString_6;
            return_value_XML_ErrorString_6=XML_ErrorString(return_value_XML_GetErrorCode_5);
            err_msg("gexec_cluster() XML_ParseBuffer() error at line %d:\n%s\n", (signed int)return_value_XML_GetCurrentLineNumber_4, return_value_XML_ErrorString_6);
            goto error;
          }

          if(bytes_read == 0)
            break;

        }
        while((_Bool)1);
        llist_sort((struct _llist_entry *)cluster->hosts, load_sort);
        llist_sort((struct _llist_entry *)cluster->gexec_hosts, load_sort);
        llist_sort((struct _llist_entry *)cluster->dead_hosts, cluster_dead_hosts_sort);
        gexec_errno = 0;

      error:
        ;
        XML_ParserFree(xml_parser);
        g_tcp_socket_delete(gmond_socket);
        return gexec_errno;
      }
    }
  }
}

// gexec_cluster_free
// file ganglia.c line 193
signed int gexec_cluster_free(struct anonymous_36 *cluster)
{
  struct _llist_entry *ei;
  struct _llist_entry *next;
  if(cluster == ((struct anonymous_36 *)NULL))
  {
    gexec_errno = 2;
    return gexec_errno;
  }

  else
  {
    ei = (struct _llist_entry *)cluster->hosts;
    for( ; !(ei == ((struct _llist_entry *)NULL)); ei = next)
    {
      next = ei->next;
      if(!(ei->val == NULL))
        free(ei->val);

      free((void *)ei);
    }
    ei = (struct _llist_entry *)cluster->gexec_hosts;
    for( ; !(ei == ((struct _llist_entry *)NULL)); ei = next)
    {
      next = ei->next;
      free((void *)ei);
    }
    ei = (struct _llist_entry *)cluster->dead_hosts;
    for( ; !(ei == ((struct _llist_entry *)NULL)); ei = next)
    {
      next = ei->next;
      if(!(ei->val == NULL))
        free(ei->val);

      free((void *)ei);
    }
    gexec_errno = 0;
    return gexec_errno;
  }
}

// has_wildcard
// file libgmond.c line 749
signed int has_wildcard(const char *pattern)
{
  signed int nesting = 0;
  const char *tmp_post_1;
  while(!(*pattern == 0))
    switch((signed int)*pattern)
    {
      case 63:

      case 42:
        return 1;
      case 92:
      {
        tmp_post_1 = pattern;
        pattern = pattern + 1l;
        if((signed int)*tmp_post_1 == 0)
          return 0;

        goto __CPROVER_DUMP_L7;
      }
      case 91:
      {
        nesting = nesting + 1;
        goto __CPROVER_DUMP_L7;
      }
      case 93:
        if(!(nesting == 0))
          return 1;

      default:
      {

      __CPROVER_DUMP_L7:
        ;
        pattern = pattern + 1l;
      }
    }
  return 0;
}

// hash_create
// file ../lib/hash.h line 48
struct anonymous_8 * hash_create(unsigned long int size)
{
  unsigned long int i;
  struct anonymous_8 *hash;
  debug_msg("hash_create size = %zd", size);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_8) /*24ul*/ );
  hash = (struct anonymous_8 *)return_value_malloc_1;
  if(hash == ((struct anonymous_8 *)NULL))
  {
    debug_msg("hash malloc error in hash_create()");
    return (struct anonymous_8 *)(void *)0;
  }

  else
  {
    hash->size=hash_prime(size);
    debug_msg("hash->size is %zd", hash->size);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct anonymous_20 *) /*8ul*/  * hash->size);
    hash->node = (struct anonymous_20 **)return_value_malloc_2;
    if(hash->node == ((struct anonymous_20 **)NULL))
    {
      debug_msg("hash->node malloc error. freeing hash.");
      free((void *)hash);
      return (struct anonymous_8 *)(void *)0;
    }

    else
    {
      i = (unsigned long int)0;
      for( ; !(i >= hash->size); i = i + 1ul)
      {
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(struct anonymous_20) /*104ul*/ );
        hash->node[(signed long int)i] = (struct anonymous_20 *)return_value_malloc_3;
        if(hash->node[(signed long int)i] == ((struct anonymous_20 *)NULL))
          break;

        hash->node[(signed long int)i]->bucket = (struct bucket *)(void *)0;
        pthread_rdwr_init_np(&hash->node[(signed long int)i]->rwlock);
      }
      if(!(i == hash->size))
      {
        debug_msg("hash->node[i] malloc error");
        hash->size = i;
        for( ; (_Bool)1; hash->size = hash->size - 1ul)
          free((void *)hash->node[(signed long int)hash->size]);
        free((void *)hash);
        return (struct anonymous_8 *)(void *)0;
      }

      else
        return hash;
    }
  }
}

// hash_delete
// file ../lib/hash.h line 55
struct anonymous_7 * hash_delete(struct anonymous_7 *key, struct anonymous_8 *hash)
{
  unsigned long int i;
  struct anonymous_7 *val;
  struct bucket *bucket;
  struct bucket *last = (struct bucket *)(void *)0;
  i=hashval(key, hash);
  pthread_rdwr_wlock_np(&hash->node[(signed long int)i]->rwlock);
  signed int return_value_hash_keycmp_1;
  if(hash->node[(signed long int)i]->bucket == ((struct bucket *)NULL))
  {
    pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
    return (struct anonymous_7 *)(void *)0;
  }

  else
  {
    last = (struct bucket *)(void *)0;
    bucket = hash->node[(signed long int)i]->bucket;
    for( ; !(bucket == ((struct bucket *)NULL)); bucket = bucket->next)
    {
      if(bucket->key->size == key->size)
      {
        return_value_hash_keycmp_1=hash_keycmp(hash, key, bucket->key);
        if(return_value_hash_keycmp_1 == 0)
        {
          if(!(last == ((struct bucket *)NULL)))
          {
            val = bucket->val;
            last->next = bucket->next;
            datum_free(bucket->key);
            free((void *)bucket);
            pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
            return val;
          }

          else
          {
            val = bucket->val;
            hash->node[(signed long int)i]->bucket = bucket->next;
            datum_free(bucket->key);
            free((void *)bucket);
            pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
            return val;
          }
        }

      }

      last = bucket;
    }
    pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
    return (struct anonymous_7 *)(void *)0;
  }
}

// hash_destroy
// file ../lib/hash.h line 49
void hash_destroy(struct anonymous_8 *hash)
{
  unsigned long int i;
  struct bucket *bucket;
  struct bucket *next;
  struct anonymous_7 *val;
  i = (unsigned long int)0;
  for( ; !(i >= hash->size); i = i + 1ul)
  {
    bucket = hash->node[(signed long int)i]->bucket;
    for( ; !(bucket == ((struct bucket *)NULL)); bucket = next)
    {
      next = bucket->next;
      val=hash_delete(bucket->key, hash);
      datum_free(val);
    }
    free((void *)hash->node[(signed long int)i]);
  }
  free((void *)hash->node);
  free((void *)hash);
}

// hash_foreach
// file ../lib/hash.h line 58
signed int hash_foreach(struct anonymous_8 *hash, signed int (*func)(struct anonymous_7 *, struct anonymous_7 *, void *), void *arg)
{
  signed int stop = 0;
  unsigned long int i;
  struct bucket *bucket;
  i = (unsigned long int)0;
  for( ; stop == 0 && !(i >= hash->size); i = i + 1ul)
  {
    pthread_rdwr_rlock_np(&hash->node[(signed long int)i]->rwlock);
    bucket = hash->node[(signed long int)i]->bucket;
    if(!(bucket == ((struct bucket *)NULL)))
    {
      stop=func(bucket->key, bucket->val, arg);
      if(stop == 0)
        bucket = bucket->next;

    }

    pthread_rdwr_runlock_np(&hash->node[(signed long int)i]->rwlock);
  }
  return stop;
}

// hash_get_flags
// file hash.c line 175
signed int hash_get_flags(struct anonymous_8 *hash)
{
  return hash->flags;
}

// hash_insert
// file ../lib/hash.h line 54
struct anonymous_7 * hash_insert(struct anonymous_7 *key, struct anonymous_7 *val, struct anonymous_8 *hash)
{
  unsigned long int i;
  struct bucket *bucket;
  i=hashval(key, hash);
  pthread_rdwr_wlock_np(&hash->node[(signed long int)i]->rwlock);
  bucket = hash->node[(signed long int)i]->bucket;
  if(bucket == ((struct bucket *)NULL))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct bucket) /*24ul*/ );
    bucket = (struct bucket *)return_value_malloc_1;
    if(bucket == ((struct bucket *)NULL))
    {
      pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
      return (struct anonymous_7 *)(void *)0;
    }

    bucket->next = (struct bucket *)(void *)0;
    bucket->key=datum_dup(key);
    if(bucket->key == ((struct anonymous_7 *)NULL))
    {
      free((void *)bucket);
      bucket = (struct bucket *)(void *)0;
      pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
      return (struct anonymous_7 *)(void *)0;
    }

    bucket->val=datum_dup(val);
    if(bucket->val == ((struct anonymous_7 *)NULL))
    {
      free((void *)bucket);
      bucket = (struct bucket *)(void *)0;
      pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
      return (struct anonymous_7 *)(void *)0;
    }

    hash->node[(signed long int)i]->bucket = bucket;
    pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
    return bucket->val;
  }

  bucket = hash->node[(signed long int)i]->bucket;
  for( ; !(bucket == ((struct bucket *)NULL)); bucket = bucket->next)
    if(bucket->key->size == key->size)
    {
      signed int return_value_hash_keycmp_2;
      return_value_hash_keycmp_2=hash_keycmp(hash, bucket->key, key);
      if(return_value_hash_keycmp_2 == 0)
      {
        if(!(bucket->val->size == val->size))
        {
          bucket->val->data=realloc(bucket->val->data, (unsigned long int)val->size);
          if(bucket->val->data == NULL)
          {
            pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
            return (struct anonymous_7 *)(void *)0;
          }

          bucket->val->size = val->size;
        }

        memcpy(bucket->val->data, val->data, (unsigned long int)val->size);
        pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
        return bucket->val;
      }

    }

  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct bucket) /*24ul*/ );
  bucket = (struct bucket *)return_value_malloc_3;
  if(bucket == ((struct bucket *)NULL))
  {
    pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
    return (struct anonymous_7 *)(void *)0;
  }

  else
  {
    bucket->key=datum_dup(key);
    if(bucket->key == ((struct anonymous_7 *)NULL))
    {
      free((void *)bucket);
      pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
      return (struct anonymous_7 *)(void *)0;
    }

    else
    {
      bucket->val=datum_dup(val);
      if(bucket->val == ((struct anonymous_7 *)NULL))
      {
        datum_free(bucket->key);
        free((void *)bucket);
        pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
        return (struct anonymous_7 *)(void *)0;
      }

      else
      {
        bucket->next = hash->node[(signed long int)i]->bucket;
        hash->node[(signed long int)i]->bucket = bucket;
        pthread_rdwr_wunlock_np(&hash->node[(signed long int)i]->rwlock);
        return bucket->val;
      }
    }
  }
}

// hash_keycmp
// file hash.c line 213
signed int hash_keycmp(struct anonymous_8 *hash, struct anonymous_7 *key1, struct anonymous_7 *key2)
{
  if(!((1 & hash->flags) == 0))
  {
    signed int return_value_strncasecmp_1;
    return_value_strncasecmp_1=strncasecmp((const char *)key1->data, (const char *)key2->data, (unsigned long int)key1->size);
    return return_value_strncasecmp_1;
  }

  else
  {
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp((const char *)key1->data, (const char *)key2->data, (unsigned long int)key1->size);
    return return_value_strncmp_2;
  }
}

// hash_lookup
// file ../lib/hash.h line 57
struct anonymous_7 * hash_lookup(struct anonymous_7 *key, struct anonymous_8 *hash)
{
  unsigned long int i;
  struct anonymous_7 *val;
  struct bucket *bucket;
  i=hashval(key, hash);
  pthread_rdwr_rlock_np(&hash->node[(signed long int)i]->rwlock);
  bucket = hash->node[(signed long int)i]->bucket;
  if(bucket == ((struct bucket *)NULL))
  {
    pthread_rdwr_runlock_np(&hash->node[(signed long int)i]->rwlock);
    return (struct anonymous_7 *)(void *)0;
  }

  else
  {
    for( ; !(bucket == ((struct bucket *)NULL)); bucket = bucket->next)
      if(key->size == bucket->key->size)
      {
        signed int return_value_hash_keycmp_1;
        return_value_hash_keycmp_1=hash_keycmp(hash, key, bucket->key);
        if(return_value_hash_keycmp_1 == 0)
        {
          val=datum_dup(bucket->val);
          pthread_rdwr_runlock_np(&hash->node[(signed long int)i]->rwlock);
          return val;
        }

      }

    pthread_rdwr_runlock_np(&hash->node[(signed long int)i]->rwlock);
    return (struct anonymous_7 *)(void *)0;
  }
}

// hash_prime
// file hash.c line 58
static unsigned long int hash_prime(unsigned long int size)
{
  unsigned long int i;
  unsigned long int num_primes;
  signed int primes[357l] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013, 1019, 1021, 1031, 1033, 1039, 1049, 1051, 1061, 1063, 1069, 1087, 1091, 1093, 1097, 1103, 1109, 1117, 1123, 1129, 1151, 1153, 1163, 1171, 1181, 1187, 1193, 1201, 1213, 1217, 1223, 1229, 1231, 1237, 1249, 1259, 1277, 1279, 1283, 1289, 1291, 1297, 1301, 1303, 1307, 1319, 1321, 1327, 1361, 1367, 1373, 1381, 1399, 1409, 1423, 1427, 1429, 1433, 1439, 1447, 1451, 1453, 1459, 1471, 1481, 1483, 1487, 1489, 1493, 1499, 1511, 1523, 1531, 1543, 1549, 1553, 1559, 1567, 1571, 1579, 1583, 1597, 1601, 1607, 1609, 1613, 1619, 1621, 1627, 1637, 1657, 1663, 1667, 1669, 1693, 1697, 1699, 1709, 1721, 1723, 1733, 1741, 1747, 1753, 1759, 1777, 1783, 1787, 1789, 1801, 1811, 1823, 1831, 1847, 1861, 1867, 1871, 1873, 1877, 1879, 1889, 1901, 1907, 1193, 1931, 1933, 1949, 1951, 1973, 1979, 1987, 1993, 1997, 1999, 2003, 2011, 2017, 2027, 2029, 2039, 2053, 2063, 2069, 2081, 2083, 2087, 2089, 2099, 2111, 2113, 2129, 2131, 2137, 2141, 2143, 2153, 2161, 2179, 2203, 2207, 2213, 2221, 2237, 2239, 2243, 2251, 2267, 2269, 2273, 2281, 2287, 2293, 2297, 2309, 2311, 2333, 2339, 2341, 2347, 2351, 2357, 2371, 2377, 2381, 2383, 2389, 2393, 2399 };
  num_primes = sizeof(signed int [357l]) /*1428ul*/  / sizeof(signed int) /*4ul*/ ;
  i = (unsigned long int)0;
  for( ; !(i >= num_primes); i = i + 1ul)
    if(!(size >= (unsigned long int)primes[(signed long int)i]))
      return (unsigned long int)primes[(signed long int)i];

  return (unsigned long int)primes[(signed long int)(num_primes - (unsigned long int)1)];
}

// hash_set_flags
// file ../lib/hash.h line 52
void hash_set_flags(struct anonymous_8 *hash, signed int flags)
{
  hash->flags = flags;
}

// hash_walkfrom
// file ../lib/hash.h line 59
signed int hash_walkfrom(struct anonymous_8 *hash, unsigned long int from, signed int (*func)(struct anonymous_7 *, struct anonymous_7 *, void *), void *arg)
{
  signed int stop = 0;
  unsigned long int i;
  struct bucket *bucket;
  i = from;
  for( ; stop == 0 && !(i >= hash->size); i = i + 1ul)
  {
    pthread_rdwr_rlock_np(&hash->node[(signed long int)i]->rwlock);
    bucket = hash->node[(signed long int)i]->bucket;
    if(!(bucket == ((struct bucket *)NULL)))
    {
      stop=func(bucket->key, bucket->val, arg);
      if(stop == 0)
        bucket = bucket->next;

    }

    pthread_rdwr_runlock_np(&hash->node[(signed long int)i]->rwlock);
  }
  return stop;
}

// hashval
// file ../lib/hash.h line 64
unsigned long int hashval(struct anonymous_7 *key, struct anonymous_8 *hash)
{
  signed int i;
  signed int hash_val;
  _Bool tmp_if_expr_1;
  if(key == ((struct anonymous_7 *)NULL) || hash == ((struct anonymous_8 *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = key->data == (void *)0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = key->size <= (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  signed int return_value_tolower_3;
  if(tmp_if_expr_2)
    return (unsigned long int)0;

  else
  {
    if(!((1 & hash->flags) == 0))
    {
      hash_val=tolower((signed int)((unsigned char *)key->data)[(signed long int)0]);
      i = 0;
      for( ; !((unsigned int)i >= key->size); i = i + 1)
      {
        return_value_tolower_3=tolower((signed int)((unsigned char *)key->data)[(signed long int)i]);
        hash_val = (signed int)((unsigned long int)(hash_val * 32 + return_value_tolower_3) % hash->size);
      }
    }

    else
    {
      hash_val = (signed int)((unsigned char *)key->data)[(signed long int)0];
      i = 0;
      for( ; !((unsigned int)i >= key->size); i = i + 1)
        hash_val = (signed int)((unsigned long int)(hash_val * 32 + (signed int)((unsigned char *)key->data)[(signed long int)i]) % hash->size);
    }
    return (unsigned long int)hash_val;
  }
}

// host_report_end
// file server.c line 206
signed int host_report_end(struct Generic_type *self, struct anonymous_16 *client, void *arg)
{
  signed int return_value_xml_print_1;
  return_value_xml_print_1=xml_print(client, "</HOST>\n");
  return return_value_xml_print_1;
}

// host_report_start
// file server.c line 183
signed int host_report_start(struct Generic_type *self, struct anonymous_7 *key, struct anonymous_16 *client, void *arg)
{
  signed int rc;
  char *host_report_start__1__name = (char *)key->data;
  struct anonymous_10 *host = (struct anonymous_10 *)self;
  signed long int tn = (signed long int)0;
  tn = client->now.tv_sec - host->t0.tv_sec;
  if(!(tn >= 0l))
    tn = (signed long int)0;

  char *return_value_getfield_1;
  return_value_getfield_1=getfield(host->strings, host->ip);
  char *return_value_getfield_2;
  return_value_getfield_2=getfield(host->strings, host->location);
  char *return_value_getfield_3;
  return_value_getfield_3=getfield(host->strings, host->tags);
  rc=xml_print(client, "<HOST NAME=\"%s\" IP=\"%s\" REPORTED=\"%u\" TN=\"%u\" TMAX=\"%u\" DMAX=\"%u\" LOCATION=\"%s\" GMOND_STARTED=\"%u\" TAGS=\"%s\">\n", host_report_start__1__name, return_value_getfield_1, host->reported, (unsigned int)tn, host->tmax, host->dmax, return_value_getfield_2, host->started, return_value_getfield_3);
  return rc;
}

// init_args_info
// file cmdline.c line 85
static void init_args_info(struct gengetopt_args_info *args_info)
{
  args_info->help_help = gengetopt_args_info_help[(signed long int)0];
  args_info->version_help = gengetopt_args_info_help[(signed long int)1];
  args_info->conf_help = gengetopt_args_info_help[(signed long int)2];
  args_info->debug_help = gengetopt_args_info_help[(signed long int)3];
  args_info->pid_file_help = gengetopt_args_info_help[(signed long int)4];
}

// init_carbon_udp_socket
// file export_helpers.h line 23
struct anonymous_2 * init_carbon_udp_socket(const char *hostname, unsigned short int port)
{
  signed int sockfd;
  struct anonymous_2 *s;
  struct sockaddr_in *sa_in;
  struct hostent *hostinfo;
  sockfd=socket(2, 2, 0);
  if(!(sockfd >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    err_msg("create socket (client): %s", return_value_strerror_2);
    return (struct anonymous_2 *)(void *)0;
  }

  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct anonymous_2) /*24ul*/ );
  s = (struct anonymous_2 *)return_value_malloc_3;
  memset((void *)s, 0, sizeof(struct anonymous_2) /*24ul*/ );
  s->sockfd = sockfd;
  s->ref_count = (unsigned int)1;
  sa_in = (struct sockaddr_in *)&s->sa;
  sa_in->sin_family = (unsigned short int)2;
  sa_in->sin_port=htons(port);
  hostinfo=gethostbyname(hostname);
  sa_in->sin_addr = *((struct in_addr *)hostinfo->h_addr_list[(signed long int)0]);
  return s;
}

// init_sockaddr
// file export_helpers.c line 63
void init_sockaddr(struct sockaddr_in *name, const char *hostname, unsigned short int port)
{
  struct hostent *hostinfo;
  name->sin_family = (unsigned short int)2;
  name->sin_port=htons(port);
  hostinfo=gethostbyname(hostname);
  if(hostinfo == ((struct hostent *)NULL))
  {
    fprintf(stderr, "Unknown host %s.\n", hostname);
    exit(1);
  }

  name->sin_addr = *((struct in_addr *)hostinfo->h_addr_list[(signed long int)0]);
}

// join_mcast
// file apr_net.c line 341
signed int join_mcast(struct apr_pool_t *context, struct apr_socket_t *sock, char *mcast_channel, unsigned short int port, char *ifname)
{
  struct apr_pool_t *pool = (struct apr_pool_t *)(void *)0;
  signed int status;
  signed int rval;
  struct apr_sockaddr_t *sa;
  signed int s;
  status=apr_pool_create_ex(&pool, context, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
  struct ip_mreq mreq[1l];
  struct ifreq ifreq[1l];
  struct ipv6_mreq join_mcast__1__3__2__mreq[1l];
  struct ifreq join_mcast__1__3__2__ifreq[1l];
  signed int return_value_ioctl_2;
  if(!(status == 0))
    return status;

  else
  {
    status=apr_sockaddr_info_get(&sa, mcast_channel, 0, port, 0, pool);
    if(!(status == 0))
    {
      apr_pool_destroy(pool);
      return status;
    }

    else
    {
      apr_os_sock_get(&s, sock);
      switch(sa->family)
      {
        case 2:
        {
          memcpy((void *)&mreq[0l].imr_multiaddr, (const void *)&sa->sa.sin.sin_addr, sizeof(struct in_addr) /*4ul*/ );
          memset((void *)&ifreq, 0, sizeof(struct ifreq [1l]) /*40ul*/ );
          if(!(ifname == ((char *)NULL)))
          {
            memset((void *)ifreq, 0, sizeof(struct ifreq) /*40ul*/ );
            strncpy(ifreq[0l].ifr_ifrn.ifrn_name, ifname, (unsigned long int)16);
            signed int return_value_ioctl_1;
            return_value_ioctl_1=ioctl(s, (unsigned long int)0x8915, (const void *)ifreq);
            if(return_value_ioctl_1 == -1)
            {
              apr_pool_destroy(pool);
              return 20000 + 14;
            }

          }

          else
            mreq[0l].imr_interface.s_addr=htonl((unsigned int)0x00000000);
          memcpy((void *)&mreq[0l].imr_interface, (const void *)&((struct sockaddr_in *)&ifreq[0l].ifr_ifru.ifru_addr)->sin_addr, sizeof(struct in_addr) /*4ul*/ );
          rval=setsockopt(s, 0, 35, (const void *)mreq, (unsigned int)sizeof(struct ip_mreq [1l]) /*8ul*/ );
          if(!(rval >= 0))
          {
            apr_pool_destroy(pool);
            return 20000 + 14;
          }

          break;
        }
        case 10:
        {
          memcpy((void *)&join_mcast__1__3__2__mreq[0l].ipv6mr_multiaddr, (const void *)&sa->sa.sin6.sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
          memset((void *)&join_mcast__1__3__2__ifreq, 0, sizeof(struct ifreq [1l]) /*40ul*/ );
          if(!(ifname == ((char *)NULL)))
            strncpy(join_mcast__1__3__2__ifreq[0l].ifr_ifrn.ifrn_name, ifname, (unsigned long int)16);

          return_value_ioctl_2=ioctl(s, (unsigned long int)0x8915, (const void *)join_mcast__1__3__2__ifreq);
          if(return_value_ioctl_2 == -1)
          {
            apr_pool_destroy(pool);
            return -1;
          }

          rval=setsockopt(s, 41, 20, (const void *)join_mcast__1__3__2__mreq, (unsigned int)sizeof(struct ipv6_mreq [1l]) /*20ul*/ );
          break;
        }
        default:
        {
          apr_pool_destroy(pool);
          return -1;
        }
      }
      apr_pool_destroy(pool);
      return 0;
    }
  }
}

// llist_add
// file ../lib/llist.h line 31
void llist_add(struct _llist_entry **llist, struct _llist_entry *e)
{
  if(!(*llist == ((struct _llist_entry *)NULL)))
  {
    e->prev = (struct _llist_entry *)(void *)0;
    e->next = *llist;
    (*llist)->prev = e;
    *llist = e;
  }

  else
  {
    e->prev = (struct _llist_entry *)(void *)0;
    e->next = (struct _llist_entry *)(void *)0;
    *llist = e;
  }
}

// llist_print
// file llist.c line 112
signed int llist_print(struct _llist_entry **llist)
{
  struct _llist_entry *ei = *llist;
  for( ; !(ei == ((struct _llist_entry *)NULL)); ei = ei->next)
    printf("%s\n", (char *)ei->val);
  return 0;
}

// llist_remove
// file llist.c line 54
signed int llist_remove(struct _llist_entry **llist, struct _llist_entry *e)
{
  struct _llist_entry *ei = *llist;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  for( ; !(ei == ((struct _llist_entry *)NULL)); ei = ei->next)
    if(ei == e)
    {
      if(e == *llist)
        tmp_if_expr_2 = e->next == (struct _llist_entry *)(void *)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        *llist = (struct _llist_entry *)(void *)0;

      else
      {
        if(e == *llist)
          tmp_if_expr_1 = e->next != (struct _llist_entry *)(void *)0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
        {
          e->next->prev = (struct _llist_entry *)(void *)0;
          *llist = e->next;
        }

        else
          if(e->next == ((struct _llist_entry *)NULL))
            e->prev->next = (struct _llist_entry *)(void *)0;

          else
          {
            e->prev->next = e->next;
            e->next->prev = e->prev;
          }
      }
      return 0;
    }

  return -1;
}

// llist_search
// file ../lib/llist.h line 34
signed int llist_search(struct _llist_entry **llist, void *val, signed int (*compare_function)(const char *, const char *), struct _llist_entry **e)
{
  struct _llist_entry *ei = *llist;
  signed int return_value;
  if(!(ei == ((struct _llist_entry *)NULL)))
  {
    return_value=compare_function((const char *)ei->val, (const char *)val);
    if(return_value == 0)
    {
      *e = ei;
      return 0;
    }

    ei = ei->next;
  }

  return -1;
}

// llist_sort
// file llist.h line 37
signed int llist_sort(struct _llist_entry *llist, signed int (*compare_function)(struct _llist_entry *, struct _llist_entry *))
{
  struct _llist_entry *lle1;
  struct _llist_entry *lle2;
  void *tmp_val;
  lle1 = llist;
  for( ; !(lle1 == ((struct _llist_entry *)NULL)); lle1 = lle1->next)
  {
    lle2 = lle1->next;
    if(!(lle2 == ((struct _llist_entry *)NULL)))
    {
      signed int return_value;
      return_value=compare_function(lle1, lle2);
      if(return_value == 1)
      {
        tmp_val = lle1->val;
        lle1->val = lle2->val;
        lle2->val = tmp_val;
      }

      lle2 = lle2->next;
    }

  }
  return 0;
}

// llist_strncmp
// file ../lib/llist.h line 32
signed int llist_strncmp(const char *s1, const char *s2)
{
  signed int len;
  signed int rv;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s1);
  len = (signed int)return_value_strlen_1;
  rv=strncmp(s1, s2, (unsigned long int)len);
  return rv;
}

// load_sort
// file ganglia.c line 229
static signed int load_sort(struct _llist_entry *a, struct _llist_entry *b)
{
  double ai;
  double bi;
  ai = ((struct gexec_host_t *)a->val)->load_one - (double)((struct gexec_host_t *)a->val)->cpu_num;
  bi = ((struct gexec_host_t *)b->val)->load_one - (double)((struct gexec_host_t *)b->val)->cpu_num;
  if(ai > bi)
    return 1;

  else
    return 0;
}

// main
// file gmetad.c line 273
signed int main(signed int argc, char **argv)
{
  struct stat struct_stat;
  unsigned long int pid;
  union pthread_attr_t attr;
  signed int i;
  signed int num_sources;
  unsigned int gmetad_uid;
  unsigned int rrd_umask;
  char *gmetad_username;
  struct passwd *pw;
  char hostname[64l];
  struct anonymous_5 *c = &gmetad_config;
  signed long int sleep_time;
  signed long int last_metadata;
  double random_sleep_factor;
  unsigned int rand_seed;
  signal(13, (void (*)(signed int))1);
  signed int return_value_cmdline_parser_1;
  return_value_cmdline_parser_1=cmdline_parser(argc, argv, &args_info);
  if(!(return_value_cmdline_parser_1 == 0))
    err_quit("command-line parser error");

  num_sources=number_of_datasources(args_info.conf_arg);
  if(num_sources == 0)
    err_quit("%s doesn't have any data sources specified", args_info.conf_arg);

  memset((void *)&root, 0, sizeof(struct anonymous_11) /*1664ul*/ );
  root.id = (enum anonymous_15)ROOT_NODE;
  sources=hash_create((unsigned long int)(num_sources + 10));
  if(sources == ((struct anonymous_8 *)NULL))
    err_quit("Unable to create sources hash\n");

  root.authority=hash_create((unsigned long int)(num_sources + 10));
  if(root.authority == ((struct anonymous_8 *)NULL))
    err_quit("Unable to create root authority (our grids and clusters) hash\n");

  root.metric_summary=hash_create((unsigned long int)50);
  if(root.metric_summary == ((struct anonymous_8 *)NULL))
    err_quit("Unable to create root summary hash");

  parse_config_file(args_info.conf_arg);
  if(!(args_info.debug_given == 0u))
    c->debug_level = args_info.debug_arg;

  debug_level = c->debug_level;
  set_debug_msg_level(debug_level);
  if(root.stringslen == 0)
  {
    gethostname(hostname, (unsigned long int)64);
    root.authority_ptr = (signed short int)0;
    sprintf(root.strings, "http://%s/ganglia/", (const void *)hostname);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(root.strings);
    root.stringslen = root.stringslen + (signed short int)(return_value_strlen_2 + (unsigned long int)1);
  }

  signed long int return_value_apr_time_now_3;
  return_value_apr_time_now_3=apr_time_now();
  unsigned long int return_value_pthread_self_4;
  return_value_pthread_self_4=pthread_self();
  rand_seed = (unsigned int)(return_value_apr_time_now_3 * (signed long int)(signed int)return_value_pthread_self_4);
  i = 0;
  signed int tmp_post_5;
  for( ; !(i >= (signed int)root.stringslen); rand_seed = rand_seed * (unsigned int)root.strings[(signed long int)tmp_post_5])
  {
    tmp_post_5 = i;
    i = i + 1;
  }
  if(debug_level == 0)
  {
    rrd_umask = (unsigned int)c->umask;
    daemon_init(argv[(signed long int)0], 0, rrd_umask);
  }

  if(!(args_info.pid_file_given == 0u))
    update_pidfile(args_info.pid_file_arg);

  if(!(c->should_setuid == 0))
  {
    pw=getpwnam(c->setuid_username);
    if(pw == ((struct passwd *)NULL))
      err_sys("Getpwnam error");

    gmetad_uid = pw->pw_uid;
    gmetad_username = c->setuid_username;
  }

  else
  {
    gmetad_uid=getuid();
    pw=getpwuid(gmetad_uid);
    if(pw == ((struct passwd *)NULL))
      err_sys("Getpwnam error");

    gmetad_username=strdup(pw->pw_name);
  }
  debug_msg("Going to run as user %s", gmetad_username);
  if(!(c->should_setuid == 0))
    become_a_nobody(c->setuid_username);

  if(!(c->write_rrds == 0))
  {
    signed int return_value_stat_6;
    return_value_stat_6=stat(c->rrd_rootdir, &struct_stat);
    if(!(return_value_stat_6 == 0))
      err_sys("Please make sure that %s exists", c->rrd_rootdir);

    if(!(struct_stat.st_uid == gmetad_uid))
      err_quit("Please make sure that %s is owned by %s", c->rrd_rootdir, gmetad_username);

    if((128u & struct_stat.st_mode) == 0u)
      err_quit("Please make sure %s has WRITE permission for %s", gmetad_username, c->rrd_rootdir);

  }

  if(!(debug_level == 0))
  {
    fprintf(stderr, "Sources are ...\n");
    hash_foreach(sources, print_sources, (void *)0);
  }

  server_socket=g_tcp_socket_server_new(c->xml_port);
  if(server_socket == ((struct anonymous_2 *)NULL))
    err_quit("tcp_listen() on xml_port failed");

  debug_msg("xml listening on port %d", c->xml_port);
  interactive_socket=g_tcp_socket_server_new(c->interactive_port);
  if(interactive_socket == ((struct anonymous_2 *)NULL))
    err_quit("tcp_listen() on interactive_port failed");

  debug_msg("interactive xml listening on port %d", c->interactive_port);
  if(!(c->carbon_server == ((char *)NULL)))
  {
    signed int return_value_strcmp_7;
    return_value_strcmp_7=strcmp(c->carbon_protocol, "udp");
    if(return_value_strcmp_7 == 0)
    {
      carbon_udp_socket=init_carbon_udp_socket(c->carbon_server, (unsigned short int)c->carbon_port);
      if(carbon_udp_socket == ((struct anonymous_2 *)NULL))
        err_quit("carbon %s socket failed for %s:%d", c->carbon_protocol, c->carbon_server, c->carbon_port);

    }

    debug_msg("carbon forwarding ready to send via %s to %s:%d", c->carbon_protocol, c->carbon_server, c->carbon_port);
  }

  void *return_value_malloc_8;
  return_value_malloc_8=malloc(sizeof(union anonymous) /*40ul*/ );
  root.sum_finished = (union anonymous *)return_value_malloc_8;
  pthread_mutex_init(root.sum_finished, (const union anonymous_21 *)(void *)0);
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 1);
  i = 0;
  for( ; !(i >= c->server_threads / 2); i = i + 1)
    pthread_create(&pid, &attr, server_thread, (void *)0);
  i = 0;
  for( ; !(i >= c->server_threads); i = i + 1)
    pthread_create(&pid, &attr, server_thread, (void *)1);
  hash_foreach(sources, spin_off_the_data_threads, (void *)0);
  pthread_create(&pid, &attr, cleanup_thread, (void *)0);
  debug_msg("cleanup thread has been started");
  last_metadata = (signed long int)0;
  do
  {
    signed int return_value_rand_r_9;
    return_value_rand_r_9=rand_r(&rand_seed);
    random_sleep_factor = (double)1 + (5.0 / 50.0) * (double)((float)(return_value_rand_r_9 - 2147483647 / 2) / (float)2147483647);
    sleep_time = (signed long int)((random_sleep_factor * (double)((signed long int)c->shortest_step * 1000000L)) / (double)2);
    signed long int return_value_apr_time_now_10;
    return_value_apr_time_now_10=apr_time_now();
    signed long int return_value_apr_time_now_11;
    return_value_apr_time_now_11=apr_time_now();
    if(!((return_value_apr_time_now_10 + sleep_time) / 1000000L >= return_value_apr_time_now_11 / 1000000L + 1l))
      sleep_time = sleep_time + (signed long int)1 * 1000000L;

    apr_sleep(sleep_time);
    pthread_mutex_lock(root.sum_finished);
    hash_foreach(root.metric_summary, zero_out_summary, (void *)0);
    root.hosts_up = (unsigned int)0;
    root.hosts_down = (unsigned int)0;
    hash_foreach(root.authority, do_root_summary, (void *)0);
    pthread_mutex_unlock(root.sum_finished);
    hash_foreach(root.metric_summary, write_root_summary, (void *)0);
    last_metadata=apr_time_now();
  }
  while((_Bool)1);
  return 0;
}

// mcast_emit_on_if
// file apr_net.c line 274
static signed int mcast_emit_on_if(struct apr_pool_t *context, struct apr_socket_t *sock, const char *mcast_channel, unsigned short int port, const char *ifname)
{
  signed int status;
  signed int rval;
  struct apr_sockaddr_t *sa;
  status=apr_sockaddr_info_get(&sa, mcast_channel, 0, port, 0, context);
  struct ifreq ifreq[1l];
  signed int return_value_get_apr_os_socket_3;
  unsigned int if_index;
  signed int return_value_get_apr_os_socket_4;
  if(!(status == 0))
    return status;

  else
  {
    switch(sa->family)
    {
      case 2:
      {
        memset((void *)&ifreq, 0, sizeof(struct ifreq [1l]) /*40ul*/ );
        if(!(ifname == ((const char *)NULL)))
        {
          strncpy(ifreq[0l].ifr_ifrn.ifrn_name, ifname, (unsigned long int)16);
          signed int return_value_get_apr_os_socket_1;
          return_value_get_apr_os_socket_1=get_apr_os_socket(sock);
          signed int return_value_ioctl_2;
          return_value_ioctl_2=ioctl(return_value_get_apr_os_socket_1, (unsigned long int)0x8915, (const void *)ifreq);
          if(return_value_ioctl_2 == -1)
            return 20000 + 14;

        }

        else
          ((struct sockaddr_in *)&ifreq[0l].ifr_ifru.ifru_addr)->sin_addr.s_addr=htonl((unsigned int)0x00000000);
        return_value_get_apr_os_socket_3=get_apr_os_socket(sock);
        rval=setsockopt(return_value_get_apr_os_socket_3, 0, 32, (const void *)&((struct sockaddr_in *)&ifreq[0l].ifr_ifru.ifru_addr)->sin_addr, (unsigned int)sizeof(struct in_addr) /*4ul*/ );
        if(!(rval >= 0))
          return 20000 + 14;

        break;
      }
      case 10:
      {
        if_index = (unsigned int)0;
        if(!(ifname == ((const char *)NULL)))
          if_index=if_nametoindex(ifname);

        return_value_get_apr_os_socket_4=get_apr_os_socket(sock);
        rval=setsockopt(return_value_get_apr_os_socket_4, 41, 17, (const void *)&if_index, (unsigned int)sizeof(unsigned int) /*4ul*/ );
        break;
      }
      default:
        return -1;
    }
    return 0;
  }
}

// metric_report_end
// file server.c line 176
signed int metric_report_end(struct Generic_type *self, struct anonymous_16 *client, void *arg)
{
  return 0;
}

// metric_report_start
// file server.c line 136
signed int metric_report_start(struct Generic_type *self, struct anonymous_7 *key, struct anonymous_16 *client, void *arg)
{
  signed int rc;
  signed int i;
  char *metric_report_start__1__name = (char *)key->data;
  struct anonymous_9 *metric = (struct anonymous_9 *)self;
  signed long int tn = (signed long int)0;
  tn = client->now.tv_sec - metric->t0.tv_sec;
  if(!(tn >= 0l))
    tn = (signed long int)0;

  _Bool tmp_if_expr_6;
  if(!(metric->dmax == 0u))
  {
    if((signed long int)metric->dmax >= tn)
      goto __CPROVER_DUMP_L2;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    char *return_value_getfield_1;
    return_value_getfield_1=getfield(metric->strings, metric->valstr);
    char *return_value_getfield_2;
    return_value_getfield_2=getfield(metric->strings, metric->type);
    char *return_value_getfield_3;
    return_value_getfield_3=getfield(metric->strings, metric->units);
    char *return_value_getfield_4;
    return_value_getfield_4=getfield(metric->strings, metric->slope);
    char *return_value_getfield_5;
    return_value_getfield_5=getfield(metric->strings, metric->source);
    rc=xml_print(client, "<METRIC NAME=\"%s\" VAL=\"%s\" TYPE=\"%s\" UNITS=\"%s\" TN=\"%u\" TMAX=\"%u\" DMAX=\"%u\" SLOPE=\"%s\" SOURCE=\"%s\">\n", metric_report_start__1__name, return_value_getfield_1, return_value_getfield_2, return_value_getfield_3, (unsigned int)tn, metric->tmax, metric->dmax, return_value_getfield_4, return_value_getfield_5);
    rc=xml_print(client, "<EXTRA_DATA>\n");
    i = 0;
    do
    {
      if(rc == 0)
        tmp_if_expr_6 = i < (signed int)metric->ednameslen ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      if(!tmp_if_expr_6)
        break;

      char *return_value_getfield_7;
      return_value_getfield_7=getfield(metric->strings, metric->ednames[(signed long int)i]);
      char *return_value_getfield_8;
      return_value_getfield_8=getfield(metric->strings, metric->edvalues[(signed long int)i]);
      rc=xml_print(client, "<EXTRA_ELEMENT NAME=\"%s\" VAL=\"%s\"/>\n", return_value_getfield_7, return_value_getfield_8);
      i = i + 1;
    }
    while((_Bool)1);
    rc=xml_print(client, "</EXTRA_DATA>\n");
    rc=xml_print(client, "</METRIC>\n");
    return rc;
  }
}

// metric_summary
// file server.c line 64
static signed int metric_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct anonymous_16 *client = (struct anonymous_16 *)arg;
  char *metric_summary__1__name = (char *)key->data;
  char *type;
  char sum[256l];
  struct anonymous_9 *metric = (struct anonymous_9 *)val->data;
  struct type_tag *tt;
  signed int rc;
  signed int i;
  type=getfield(metric->strings, metric->type);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(type);
  tt=in_type_list(type, (unsigned int)return_value_strlen_1);
  _Bool tmp_if_expr_5;
  if(tt == ((struct type_tag *)NULL))
    return 0;

  else
  {
    switch((signed int)tt->type)
    {
      case INT:

      case UINT:
      {
        sprintf(sum, "%.f", metric->val.d);
        break;
      }
      case FLOAT:
        sprintf(sum, "%.*f", (signed int)metric->precision, metric->val.d);
    }
    char *return_value_getfield_2;
    return_value_getfield_2=getfield(metric->strings, metric->units);
    char *return_value_getfield_3;
    return_value_getfield_3=getfield(metric->strings, metric->slope);
    char *return_value_getfield_4;
    return_value_getfield_4=getfield(metric->strings, metric->source);
    rc=xml_print(client, "<METRICS NAME=\"%s\" SUM=\"%s\" NUM=\"%u\" TYPE=\"%s\" UNITS=\"%s\" SLOPE=\"%s\" SOURCE=\"%s\">\n", metric_summary__1__name, (const void *)sum, metric->num, (const void *)"double", return_value_getfield_2, return_value_getfield_3, return_value_getfield_4);
    rc=xml_print(client, "<EXTRA_DATA>\n");
    i = 0;
    do
    {
      if(rc == 0)
        tmp_if_expr_5 = i < (signed int)metric->ednameslen ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(!tmp_if_expr_5)
        break;

      char *return_value_getfield_6;
      return_value_getfield_6=getfield(metric->strings, metric->ednames[(signed long int)i]);
      char *return_value_getfield_7;
      return_value_getfield_7=getfield(metric->strings, metric->edvalues[(signed long int)i]);
      rc=xml_print(client, "<EXTRA_ELEMENT NAME=\"%s\" VAL=\"%s\"/>\n", return_value_getfield_6, return_value_getfield_7);
      i = i + 1;
    }
    while((_Bool)1);
    rc=xml_print(client, "</EXTRA_DATA>\n");
    rc=xml_print(client, "</METRICS>\n");
    return rc;
  }
}

// my_inet_ntop
// file ../lib/my_inet_ntop.h line 3
const char * my_inet_ntop(signed int af, void *src, char *dst, unsigned long int cnt)
{
  const char *return_value_inet_ntop_1;
  return_value_inet_ntop_1=inet_ntop(af, src, dst, (unsigned int)cnt);
  return return_value_inet_ntop_1;
}

// my_mkdir
// file rrd_helpers.c line 27
static inline void my_mkdir(const char *dir)
{
  pthread_mutex_lock(&rrd_mutex);
  signed int return_value_mkdir_2;
  return_value_mkdir_2=mkdir(dir, (unsigned int)0755);
  signed int *return_value___errno_location_1;
  if(!(return_value_mkdir_2 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    if(!(*return_value___errno_location_1 == 17))
    {
      pthread_mutex_unlock(&rrd_mutex);
      err_sys("Unable to mkdir(%s)", dir);
    }

  }

  pthread_mutex_unlock(&rrd_mutex);
}

// number_of_datasources
// file conf.c line 417
signed int number_of_datasources(char *config_file)
{
  signed int number_of_sources = 0;
  char buf[1024l];
  struct configfile_t *configfile;
  configfile=dotconf_create(config_file, gmetad_options, NULL, (unsigned long int)(1 << 0));
  if(configfile == ((struct configfile_t *)NULL))
    err_quit("Unable to open config file: %s\n", config_file);

  signed int return_value_dotconf_get_next_line_1;
  do
  {
    return_value_dotconf_get_next_line_1=dotconf_get_next_line(buf, (unsigned long int)1024, configfile);
    if(!(return_value_dotconf_get_next_line_1 == 0))
      break;

    char *return_value_strstr_2;
    return_value_strstr_2=strstr(buf, "data_source");
    if(!(return_value_strstr_2 == ((char *)NULL)))
    {
      if(!((signed int)buf[0l] == 35))
        number_of_sources = number_of_sources + 1;

    }

  }
  while((_Bool)1);
  dotconf_cleanup(configfile);
  return number_of_sources;
}

// parse_config_file
// file conf.c line 394
signed int parse_config_file(char *config_file)
{
  struct configfile_t *configfile;
  set_defaults(&gmetad_config);
  configfile=dotconf_create(config_file, gmetad_options, NULL, (unsigned long int)(1 << 0));
  if(configfile == ((struct configfile_t *)NULL))
    err_quit("Unable to open config file: %s\n", config_file);

  configfile->errorhandler = (signed int (*)(struct configfile_t *, signed int, unsigned long int, const char *))errorhandler;
  signed int return_value_dotconf_command_loop_1;
  return_value_dotconf_command_loop_1=dotconf_command_loop(configfile);
  if(return_value_dotconf_command_loop_1 == 0)
  {
    dotconf_cleanup(configfile);
    err_quit("dotconf_command_loop error");
  }

  return 0;
}

// path_macro_replace
// file export_helpers.c line 215
char * path_macro_replace(char *path, struct anonymous_1 *patrn)
{
  char *final;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)4096);
  final = (char *)return_value_malloc_1;
  char path_cp[4096l];
  char *prefix;
  char *suffix;
  char *offset;
  strncpy(final, path, (unsigned long int)4096);
  strncpy(path_cp, path, (unsigned long int)4096);
  signed int i = 0;
  for( ; !((patrn + (signed long int)i)->torepl == ((char *)NULL)); i = i + 1)
    do
    {
      offset=strstr(path_cp, (patrn + (signed long int)i)->torepl);
      if(offset == ((char *)NULL))
        break;

      prefix = path_cp;
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen((patrn + (signed long int)i)->torepl);
      suffix = offset + (signed long int)return_value_strlen_2;
      *offset = (char)0;
      snprintf(final, (unsigned long int)4096, "%s%s%s", prefix, (patrn + (signed long int)i)->replwith, suffix);
      strncpy(path_cp, final, (unsigned long int)4096);
    }
    while((_Bool)1);
  return final;
}

// print_help_common
// file cmdline.c line 105
static void print_help_common(void)
{
  cmdline_parser_print_version();
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(gengetopt_args_info_purpose);
  if(return_value_strlen_1 >= 1ul)
    printf("\n%s\n", gengetopt_args_info_purpose);

  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(gengetopt_args_info_usage);
  if(return_value_strlen_2 >= 1ul)
    printf("\n%s\n", gengetopt_args_info_usage);

  printf("\n");
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(gengetopt_args_info_description);
  if(return_value_strlen_3 >= 1ul)
    printf("%s\n\n", gengetopt_args_info_description);

}

// print_sources
// file gmetad.c line 53
static signed int print_sources(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  signed int i;
  struct anonymous_6 *d = *((struct anonymous_6 **)val->data);
  struct anonymous_4 *addr;
  fprintf(stderr, "Source: [%s, step %d] has %d sources\n", (char *)key->data, d->step, d->num_sources);
  i = 0;
  for( ; !((unsigned int)i >= d->num_sources); i = i + 1)
  {
    addr = d->sources[(signed long int)i];
    fprintf(stderr, "\t%s\n", addr->name);
  }
  return 0;
}

// process_path
// file server.c line 396
static signed int process_path(struct anonymous_16 *client, char *path, struct anonymous_7 *myroot, struct anonymous_7 *key)
{
  char *p;
  char *q;
  char *pathend;
  char *element;
  signed int rc;
  signed int len;
  struct anonymous_7 *found;
  struct anonymous_7 findkey;
  struct Generic_type *node = (struct Generic_type *)myroot->data;
  signed int return_value_strcmp_3;
  if(path == ((char *)NULL))
  {
    applyfilter(client, node);
    if(!(node->children == ((struct anonymous_8 *)NULL)))
      hash_foreach(node->children, tree_report, (void *)client);

    return 0;
  }

  else
    if(!(node->report_start == ((signed int (*)(struct Generic_type *, struct anonymous_7 *, struct anonymous_16 *, void *))NULL)))
    {
      rc=node->report_start(node, key, client, (void *)0);
      return 1;
    }

    else
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(path);
      pathend = path + (signed long int)return_value_strlen_1;
      p = path + (signed long int)1;
      if(node->children == ((struct anonymous_8 *)NULL) || p >= pathend)
        rc=process_path(client, ((char *)NULL), myroot, (struct anonymous_7 *)(void *)0);

      else
      {
        q=strchr(p, 47);
        if(q == ((char *)NULL))
          q = pathend;

        len = (signed int)(q - p);
        void *return_value_malloc_2;
        return_value_malloc_2=malloc((unsigned long int)(len + 1));
        element = (char *)return_value_malloc_2;
        if(element == ((char *)NULL))
          return 1;

        strncpy(element, p, (unsigned long int)len);
        element[(signed long int)len] = (char)0;
        findkey.data = (void *)element;
        findkey.size = (unsigned int)(len + 1);
        found=hash_lookup(&findkey, node->children);
        if(!(found == ((struct anonymous_7 *)NULL)))
        {
          rc=process_path(client, q, found, &findkey);
          datum_free(found);
        }

        else
          if(client->http == 0u)
            rc=process_path(client, ((char *)NULL), myroot, (struct anonymous_7 *)(void *)0);

          else
          {
            return_value_strcmp_3=strcmp(element, "*");
            if(return_value_strcmp_3 == 0)
            {
              struct request_context ctxt;
              ctxt.path = q;
              ctxt.client = client;
              hash_foreach(node->children, process_path_adapter, (void *)&ctxt);
            }

            else
              rc = 0;
          }
        free((void *)element);
      }
      if(!(rc == 0))
        return 1;

      else
      {
        if(!(node->report_end == ((signed int (*)(struct Generic_type *, struct anonymous_16 *, void *))NULL)))
          rc=node->report_end(node, client, (void *)0);

        return rc;
      }
    }
}

// process_path_adapter
// file server.c line 496
static signed int process_path_adapter(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct request_context *ctxt = (struct request_context *)arg;
  signed int return_value_process_path_1;
  return_value_process_path_1=process_path(ctxt->client, ctxt->path, val, key);
  return return_value_process_path_1;
}

// process_request
// file server.c line 507
static signed int process_request(struct anonymous_16 *client, char *path)
{
  char *p;
  signed int rc;
  signed int pathlen;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(path);
  pathlen = (signed int)return_value_strlen_1;
  signed int return_value_memcmp_5;
  signed int return_value_memcmp_2;
  if(pathlen == 0)
    return 1;

  else
  {
    if(pathlen >= 12)
    {
      return_value_memcmp_5=memcmp((const void *)path, (const void *)"GET ", (unsigned long int)4);
      if(return_value_memcmp_5 == 0)
      {
        char *http_p = (path + (signed long int)pathlen) - (signed long int)9;
        signed int return_value_memcmp_3;
        return_value_memcmp_3=memcmp((const void *)http_p, (const void *)" HTTP/1.0", (unsigned long int)9);
        if(!(return_value_memcmp_3 == 0))
        {
          return_value_memcmp_2=memcmp((const void *)http_p, (const void *)" HTTP/1.1", (unsigned long int)9);
          if(!(return_value_memcmp_2 == 0))
            return 1;

        }

        *http_p = (char)0;
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(path + (signed long int)4);
        pathlen = (signed int)return_value_strlen_4;
        memmove((void *)path, (const void *)(path + (signed long int)4), (unsigned long int)(pathlen + 1));
        client->http = (unsigned int)1;
      }

    }

    if(!((signed int)*path == 47))
      return 1;

    else
    {
      unsigned long int return_value_strcspn_6;
      return_value_strcspn_6=strcspn(path, ">!@#_%`;|\"\\'<");
      if(!(return_value_strcspn_6 >= (unsigned long int)pathlen))
        return 1;

      else
      {
        p=strchr(path, 63);
        if(!(p == ((char *)NULL)))
        {
          *p = (char)0;
          debug_msg("Found subtree %s and %s", path, p + (signed long int)1);
          rc=processfilter(client, p + (signed long int)1);
          if(rc == 0)
            goto __CPROVER_DUMP_L6;

          return 1;
        }

        else
        {

        __CPROVER_DUMP_L6:
          ;
          return 0;
        }
      }
    }
  }
}

// process_xml
// file process_xml.c line 1245
signed int process_xml(struct anonymous_6 *d, char *buf)
{
  signed int rval;
  struct XML_ParserStruct *xml_parser;
  struct anonymous_35 xmldata;
  memset((void *)&xmldata, 0, sizeof(struct anonymous_35) /*5184ul*/ );
  xmldata.ds = d;
  xmldata.root = root.authority;
  gettimeofday(&xmldata.now, (struct timezone *)(void *)0);
  xml_parser=XML_ParserCreate((const char *)(void *)0);
  if(xml_parser == ((struct XML_ParserStruct *)NULL))
  {
    err_msg("Process XML: unable to create XML parser");
    return 1;
  }

  else
  {
    XML_SetElementHandler(xml_parser, start, end);
    XML_SetUserData(xml_parser, (void *)&xmldata);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(buf);
    enum XML_Status return_value_XML_Parse_2;
    return_value_XML_Parse_2=XML_Parse(xml_parser, buf, (signed int)return_value_strlen_1, 1);
    rval = (signed int)return_value_XML_Parse_2;
    if(rval == 0)
    {
      unsigned long int return_value_XML_GetCurrentLineNumber_3;
      return_value_XML_GetCurrentLineNumber_3=XML_GetCurrentLineNumber(xml_parser);
      enum XML_Error return_value_XML_GetErrorCode_4;
      return_value_XML_GetErrorCode_4=XML_GetErrorCode(xml_parser);
      const char *return_value_XML_ErrorString_5;
      return_value_XML_ErrorString_5=XML_ErrorString(return_value_XML_GetErrorCode_4);
      err_msg("Process XML (%s): XML_ParseBuffer() error at line %d:\n%s\n", d->name, (signed int)return_value_XML_GetCurrentLineNumber_3, return_value_XML_ErrorString_5);
      xmldata.rval = 1;
    }

    if(!(xmldata.sourcename == ((char *)NULL)))
      free((void *)xmldata.sourcename);

    if(!(xmldata.hostname == ((char *)NULL)))
      free((void *)xmldata.hostname);

    XML_ParserFree(xml_parser);
    return xmldata.rval;
  }
}

// processfilter
// file server.c line 340
signed int processfilter(struct anonymous_16 *client, const char *filter)
{
  const char *p = filter;
  client->filter = (enum anonymous_22)NO_FILTER;
  p=strchr(p, 61);
  if(p == ((const char *)NULL))
    return 1;

  else
  {
    p = p + 1l;
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(p, "summary");
    if(return_value_strcmp_1 == 0)
      client->filter = (enum anonymous_22)SUMMARY;

    else
      err_msg("Got unknown filter %s", filter);
    return 0;
  }
}

// pthread_rdwr_init_np
// file rdwr.h line 32
signed int pthread_rdwr_init_np(struct rdwr_var *rdwrp)
{
  rdwrp->readers_reading = 0;
  rdwrp->writer_writing = 0;
  pthread_mutex_init(&rdwrp->mutex, (const union anonymous_21 *)(void *)0);
  pthread_cond_init(&rdwrp->lock_free, (const union anonymous_21 *)(void *)0);
  return 0;
}

// pthread_rdwr_rlock_np
// file rdwr.h line 33
signed int pthread_rdwr_rlock_np(struct rdwr_var *rdwrp)
{
  pthread_mutex_lock(&rdwrp->mutex);
  while(!(rdwrp->writer_writing == 0))
    pthread_cond_wait(&rdwrp->lock_free, &rdwrp->mutex);
  rdwrp->readers_reading = rdwrp->readers_reading + 1;
  pthread_mutex_unlock(&rdwrp->mutex);
  return 0;
}

// pthread_rdwr_runlock_np
// file rdwr.h line 34
signed int pthread_rdwr_runlock_np(struct rdwr_var *rdwrp)
{
  pthread_mutex_lock(&rdwrp->mutex);
  if(rdwrp->readers_reading == 0)
  {
    pthread_mutex_unlock(&rdwrp->mutex);
    return -1;
  }

  else
  {
    rdwrp->readers_reading = rdwrp->readers_reading - 1;
    if(rdwrp->readers_reading == 0)
      pthread_cond_signal(&rdwrp->lock_free);

    pthread_mutex_unlock(&rdwrp->mutex);
    return 0;
  }
}

// pthread_rdwr_wlock_np
// file rdwr.h line 35
signed int pthread_rdwr_wlock_np(struct rdwr_var *rdwrp)
{
  pthread_mutex_lock(&rdwrp->mutex);
  while((_Bool)1)
  {
    if(rdwrp->writer_writing == 0)
    {
      if(rdwrp->readers_reading == 0)
        goto __CPROVER_DUMP_L3;

    }

    pthread_cond_wait(&rdwrp->lock_free, &rdwrp->mutex);
  }

__CPROVER_DUMP_L3:
  ;
  rdwrp->writer_writing = rdwrp->writer_writing + 1;
  pthread_mutex_unlock(&rdwrp->mutex);
  return 0;
}

// pthread_rdwr_wunlock_np
// file rdwr.h line 36
signed int pthread_rdwr_wunlock_np(struct rdwr_var *rdwrp)
{
  pthread_mutex_lock(&rdwrp->mutex);
  if(rdwrp->writer_writing == 0)
  {
    pthread_mutex_unlock(&rdwrp->mutex);
    return -1;
  }

  else
  {
    rdwrp->writer_writing = 0;
    pthread_cond_broadcast(&rdwrp->lock_free);
    pthread_mutex_unlock(&rdwrp->mutex);
    return 0;
  }
}

// push_data_to_carbon
// file export_helpers.c line 79
static signed int push_data_to_carbon(char *graphite_msg)
{
  signed int return_value_strcmp_12;
  return_value_strcmp_12=strcmp(gmetad_config.carbon_protocol, "tcp");
  if(return_value_strcmp_12 == 0)
  {
    signed int port;
    signed int carbon_socket;
    struct sockaddr_in server;
    signed int carbon_timeout;
    signed int nbytes;
    struct pollfd carbon_struct_poll;
    signed int poll_rval;
    signed int fl;
    if(!(gmetad_config.carbon_timeout == 0))
      carbon_timeout = gmetad_config.carbon_timeout;

    else
      carbon_timeout = 500;
    if(!(gmetad_config.carbon_port == 0))
      port = gmetad_config.carbon_port;

    else
      port = 2003;
    debug_msg("Carbon Proxy:: sending '%s' to %s", graphite_msg, gmetad_config.carbon_server);
    carbon_socket=socket(2, 1, 0);
    if(!(carbon_socket >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      err_msg("socket (client): %s", return_value_strerror_2);
      close(carbon_socket);
      return 1;
    }

    fl=fcntl(carbon_socket, 3, 0);
    fcntl(carbon_socket, 4, fl | 04000);
    init_sockaddr(&server, gmetad_config.carbon_server, (unsigned short int)port);
    connect(carbon_socket, (struct sockaddr *)&server, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    carbon_struct_poll.fd = carbon_socket;
    carbon_struct_poll.events = (signed short int)0x004;
    poll_rval=poll(&carbon_struct_poll, (unsigned long int)1, carbon_timeout);
    if(!(poll_rval >= 0))
      debug_msg("carbon proxy:: poll() error");

    else
      if(poll_rval == 0)
        debug_msg("carbon proxy:: Timeout connecting to %s", gmetad_config.carbon_server);

      else
        if(!((0x004 & (signed int)carbon_struct_poll.revents) == 0))
        {
          debug_msg("carbon proxy:: %s is ready to receive", gmetad_config.carbon_server);
          unsigned long int return_value_strlen_3;
          return_value_strlen_3=strlen(graphite_msg);
          signed long int return_value_write_4;
          return_value_write_4=write(carbon_socket, (const void *)graphite_msg, return_value_strlen_3 + (unsigned long int)1);
          nbytes = (signed int)return_value_write_4;
          if(!(nbytes >= 0))
          {
            signed int *return_value___errno_location_5;
            return_value___errno_location_5=__errno_location();
            char *return_value_strerror_6;
            return_value_strerror_6=strerror(*return_value___errno_location_5);
            err_msg("write: %s", return_value_strerror_6);
            close(carbon_socket);
            return 1;
          }

        }

        else
          if(!((0x010 & (signed int)carbon_struct_poll.revents) == 0))
          {
            debug_msg("carbon proxy:: Recvd an RST from %s during transmission", gmetad_config.carbon_server);
            close(carbon_socket);
            return 1;
          }

          else
            if(!((0x008 & (signed int)carbon_struct_poll.revents) == 0))
            {
              debug_msg("carbon proxy:: Recvd an POLLERR from %s during transmission", gmetad_config.carbon_server);
              close(carbon_socket);
              return 1;
            }

    close(carbon_socket);
    return 0;
  }

  else
  {
    signed int push_data_to_carbon__1__2__nbytes;
    pthread_mutex_lock(&carbon_mutex);
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(graphite_msg);
    signed long int return_value_sendto_8;
    return_value_sendto_8=sendto(carbon_udp_socket->sockfd, (const void *)graphite_msg, return_value_strlen_7, 0, (struct sockaddr_in *)&carbon_udp_socket->sa, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    push_data_to_carbon__1__2__nbytes = (signed int)return_value_sendto_8;
    pthread_mutex_unlock(&carbon_mutex);
    unsigned long int return_value_strlen_11;
    return_value_strlen_11=strlen(graphite_msg);
    if(!((unsigned long int)push_data_to_carbon__1__2__nbytes == return_value_strlen_11))
    {
      signed int *return_value___errno_location_9;
      return_value___errno_location_9=__errno_location();
      char *return_value_strerror_10;
      return_value_strerror_10=strerror(*return_value___errno_location_9);
      err_msg("sendto socket (client): %s", return_value_strerror_10);
      return 1;
    }

    return 0;
  }
}

// push_data_to_rrd
// file rrd_helpers.c line 156
static signed int push_data_to_rrd(char *rrd, const char *sum, const char *num, unsigned int step, unsigned int process_time, enum ganglia_slope slope)
{
  signed int rval;
  signed int summary;
  struct stat st;
  signed long int return_value_time_1;
  if(process_time == 0u)
  {
    return_value_time_1=time(((signed long int *)NULL));
    process_time = (unsigned int)return_value_time_1;
  }

  if(!(num == ((const char *)NULL)))
    summary = 1;

  else
    summary = 0;
  signed int return_value_stat_2;
  return_value_stat_2=stat(rrd, &st);
  if(!(return_value_stat_2 == 0))
  {
    rval=RRD_create(rrd, summary, step, process_time, slope);
    if(rval == 0)
      goto __CPROVER_DUMP_L4;

    return rval;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    signed int return_value_RRD_update_3;
    return_value_RRD_update_3=RRD_update(rrd, sum, num, process_time);
    return return_value_RRD_update_3;
  }
}

// readline
// file server.c line 551
signed int readline(signed int fd, char *buf, signed int maxlen)
{
  signed int i;
  signed int justread;
  signed int nleft;
  signed int stop;
  char c;
  char *ptr;
  stop = 0;
  ptr = buf;
  nleft = maxlen;
  while(stop == 0 && nleft >= 1)
  {
    signed long int return_value_read_1;
    return_value_read_1=read(fd, (void *)ptr, (unsigned long int)nleft);
    justread = (signed int)return_value_read_1;
    if(!(justread >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 4)
        justread = 0;

      else
        return -1;
    }

    else
      if(justread == 0)
        break;

    i = 0;
    for( ; !(i >= justread); i = i + 1)
    {
      c = ptr[(signed long int)i];
      if((signed int)c == 10 || (signed int)c == 13)
      {
        stop = 1;
        justread = i;
        break;
      }

    }
    nleft = nleft - justread;
    ptr = ptr + (signed long int)justread;
  }
  *ptr = (char)0;
  if(nleft == 0 && stop == 0)
    return -1;

  else
    return maxlen - nleft;
}

// root_report_end
// file server.c line 281
signed int root_report_end(struct anonymous_16 *client)
{
  signed int return_value_xml_print_1;
  return_value_xml_print_1=xml_print(client, "</GRID>\n</GANGLIA_XML>\n");
  return return_value_xml_print_1;
}

// root_report_start
// file server.c line 251
signed int root_report_start(struct anonymous_16 *client)
{
  signed int rc;
  if(!(client->http == 0u))
  {
    rc=xml_print(client, "HTTP/1.0 200 OK\r\nServer: gmetad/3.6.0-1\r\nContent-Type: application/xml\r\nConnection: close\r\n\r\n");
    if(rc == 0)
      goto __CPROVER_DUMP_L1;

    return rc;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    rc=xml_print(client, "<?xml version=\"1.0\" encoding=\"ISO-8859-1\" standalone=\"yes\"?>\n<!DOCTYPE GANGLIA_XML [\n   <!ELEMENT GANGLIA_XML (GRID|CLUSTER|HOST)*>\n      <!ATTLIST GANGLIA_XML VERSION CDATA #REQUIRED>\n      <!ATTLIST GANGLIA_XML SOURCE CDATA #REQUIRED>\n   <!ELEMENT GRID (CLUSTER | GRID | HOSTS | METRICS)*>\n      <!ATTLIST GRID NAME CDATA #REQUIRED>\n      <!ATTLIST GRID AUTHORITY CDATA #REQUIRED>\n      <!ATTLIST GRID LOCALTIME CDATA #IMPLIED>\n   <!ELEMENT CLUSTER (HOST | HOSTS | METRICS)*>\n      <!ATTLIST CLUSTER NAME CDATA #REQUIRED>\n      <!ATTLIST CLUSTER OWNER CDATA #IMPLIED>\n      <!ATTLIST CLUSTER LATLONG CDATA #IMPLIED>\n      <!ATTLIST CLUSTER URL CDATA #IMPLIED>\n      <!ATTLIST CLUSTER LOCALTIME CDATA #REQUIRED>\n   <!ELEMENT HOST (METRIC)*>\n      <!ATTLIST HOST NAME CDATA #REQUIRED>\n      <!ATTLIST HOST IP CDATA #REQUIRED>\n      <!ATTLIST HOST LOCATION CDATA #IMPLIED>\n      <!ATTLIST HOST TAGS CDATA #IMPLIED>\n      <!ATTLIST HOST REPORTED CDATA #REQUIRED>\n      <!ATTLIST HOST TN CDATA #IMPLIED>\n      <!ATTLIST HOST TMAX CDATA #IMPLIED>\n      <!ATTLIST HOST DMAX CDATA #IMPLIED>\n      <!ATTLIST HOST GMOND_STARTED CDATA #IMPLIED>\n   <!ELEMENT METRIC (EXTRA_DATA*)>\n      <!ATTLIST METRIC NAME CDATA #REQUIRED>\n      <!ATTLIST METRIC VAL CDATA #REQUIRED>\n      <!ATTLIST METRIC TYPE (string | int8 | uint8 | int16 | uint16 | int32 | uint32 | float | double | timestamp) #REQUIRED>\n      <!ATTLIST METRIC UNITS CDATA #IMPLIED>\n      <!ATTLIST METRIC TN CDATA #IMPLIED>\n      <!ATTLIST METRIC TMAX CDATA #IMPLIED>\n      <!ATTLIST METRIC DMAX CDATA #IMPLIED>\n      <!ATTLIST METRIC SLOPE (zero | positive | negative | both | unspecified) #IMPLIED>\n      <!ATTLIST METRIC SOURCE (gmond) 'gmond'>\n   <!ELEMENT EXTRA_DATA (EXTRA_ELEMENT*)>\n   <!ELEMENT EXTRA_ELEMENT EMPTY>\n      <!ATTLIST EXTRA_ELEMENT NAME CDATA #REQUIRED>\n      <!ATTLIST EXTRA_ELEMENT VAL CDATA #REQUIRED>\n   <!ELEMENT HOSTS EMPTY>\n      <!ATTLIST HOSTS UP CDATA #REQUIRED>\n      <!ATTLIST HOSTS DOWN CDATA #REQUIRED>\n      <!ATTLIST HOSTS SOURCE (gmond | gmetad) #REQUIRED>\n   <!ELEMENT METRICS (EXTRA_DATA*)>\n      <!ATTLIST METRICS NAME CDATA #REQUIRED>\n      <!ATTLIST METRICS SUM CDATA #REQUIRED>\n      <!ATTLIST METRICS NUM CDATA #REQUIRED>\n      <!ATTLIST METRICS TYPE (string | int8 | uint8 | int16 | uint16 | int32 | uint32 | float | double | timestamp) #REQUIRED>\n      <!ATTLIST METRICS UNITS CDATA #IMPLIED>\n      <!ATTLIST METRICS SLOPE (zero | positive | negative | both | unspecified) #IMPLIED>\n      <!ATTLIST METRICS SOURCE (gmond) 'gmond'>\n]>\n");
    if(!(rc == 0))
      return 1;

    else
    {
      rc=xml_print(client, "<GANGLIA_XML VERSION=\"%s\" SOURCE=\"gmetad\">\n", (const void *)"3.6.0");
      char *return_value_getfield_1;
      return_value_getfield_1=getfield(root.strings, root.authority_ptr);
      signed long int return_value_time_2;
      return_value_time_2=time(((signed long int *)NULL));
      rc=xml_print(client, "<GRID NAME=\"%s\" AUTHORITY=\"%s\" LOCALTIME=\"%u\">\n", gmetad_config.gridname, return_value_getfield_1, (unsigned int)return_value_time_2);
      return rc;
    }
  }
}

// safe_skip_whitespace
// file dotconf.c line 93
static void safe_skip_whitespace(char **cp, signed int n, char term)
{
  char *cp1 = *cp;
  const unsigned short int **return_value___ctype_b_loc_1;
  signed int tmp_post_2;
  do
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*cp1]) == 0)
      break;

    if(*cp1 == term)
      break;

    tmp_post_2 = n;
    n = n - 1;
    if(tmp_post_2 == 0)
      break;

    cp1 = cp1 + 1l;
  }
  while((_Bool)1);
  *cp = cp1;
}

// server_thread
// file server.c line 598
void * server_thread(void *arg)
{
  signed int interactive = (signed int)(arg != (void *)0);
  unsigned int len;
  signed int request_len;
  struct anonymous_16 client;
  char remote_ip[16l];
  char request[2049l];
  struct _llist_entry *le;
  struct anonymous_7 rootdatum;
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  _Bool tmp_if_expr_9;
  signed int return_value_llist_search_8;
  do
  {
    client.valid = (unsigned int)0;
    len = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;
    if(!(interactive == 0))
    {
      pthread_mutex_lock(&server_interactive_mutex);
      do
      {
        client.fd=accept(interactive_socket->sockfd, (struct sockaddr *)&client.addr, &len);
        if(!(client.fd >= 0))
        {
          return_value___errno_location_1=__errno_location();
          tmp_if_expr_2 = *return_value___errno_location_1 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_2 = (_Bool)0;
      }
      while(tmp_if_expr_2);
      pthread_mutex_unlock(&server_interactive_mutex);
    }

    else
    {
      pthread_mutex_lock(&server_socket_mutex);
      do
      {
        client.fd=accept(server_socket->sockfd, (struct sockaddr *)&client.addr, &len);
        if(!(client.fd >= 0))
        {
          return_value___errno_location_3=__errno_location();
          tmp_if_expr_4 = *return_value___errno_location_3 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
      }
      while(tmp_if_expr_4);
      pthread_mutex_unlock(&server_socket_mutex);
    }
    if(!(client.fd >= 0))
    {
      err_ret("server_thread() error");
      unsigned long int return_value_pthread_self_5;
      return_value_pthread_self_5=pthread_self();
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      debug_msg("server_thread() %lx clientfd = %d errno=%d\n", (unsigned long int)return_value_pthread_self_5, client.fd, *return_value___errno_location_6);
      continue;
    }

    my_inet_ntop(2, (void *)&client.addr.sin_addr, remote_ip, (unsigned long int)16);
    signed int return_value_strcmp_7;
    return_value_strcmp_7=strcmp(remote_ip, "127.0.0.1");
    if(return_value_strcmp_7 == 0 || !(gmetad_config.all_trusted == 0))
      tmp_if_expr_9 = (_Bool)1;

    else
    {
      return_value_llist_search_8=llist_search(&gmetad_config.trusted_hosts, (void *)remote_ip, strcmp, &le);
      tmp_if_expr_9 = return_value_llist_search_8 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_9)
      client.valid = (unsigned int)1;

    if(client.valid == 0u)
    {
      debug_msg("server_thread() %s tried to connect and is not a trusted host", (const void *)remote_ip);
      close(client.fd);
    }

    else
    {
      client.filter = (enum anonymous_22)0;
      client.http = (unsigned int)0;
      gettimeofday(&client.now, (struct timezone *)(void *)0);
      if(!(interactive == 0))
      {
        request_len=readline(client.fd, request, 2048);
        if(!(request_len >= 0))
        {
          err_msg("server_thread() could not read request from %s", (const void *)remote_ip);
          close(client.fd);
          continue;
        }

        debug_msg("server_thread() received request \"%s\" from %s", (const void *)request, (const void *)remote_ip);
        signed int return_value_process_request_10;
        return_value_process_request_10=process_request(&client, request);
        if(!(return_value_process_request_10 == 0))
        {
          err_msg("Got a malformed path request from %s", (const void *)remote_ip);
          close(client.fd);
          continue;
        }

      }

      else
        strcpy(request, "/");
      signed int return_value_root_report_start_12;
      return_value_root_report_start_12=root_report_start(&client);
      if(!(return_value_root_report_start_12 == 0))
      {
        unsigned long int return_value_pthread_self_11;
        return_value_pthread_self_11=pthread_self();
        err_msg("server_thread() %lx unable to write root preamble (DTD, etc)", (unsigned long int)return_value_pthread_self_11);
        close(client.fd);
        continue;
      }

      rootdatum.data = (void *)&root;
      rootdatum.size = (unsigned int)sizeof(struct anonymous_11) /*1664ul*/ ;
      signed int return_value_process_path_14;
      return_value_process_path_14=process_path(&client, request, &rootdatum, (struct anonymous_7 *)(void *)0);
      if(!(return_value_process_path_14 == 0))
      {
        unsigned long int return_value_pthread_self_13;
        return_value_pthread_self_13=pthread_self();
        err_msg("server_thread() %lx unable to write XML tree info", (unsigned long int)return_value_pthread_self_13);
        close(client.fd);
        continue;
      }

      signed int return_value_root_report_end_16;
      return_value_root_report_end_16=root_report_end(&client);
      if(!(return_value_root_report_end_16 == 0))
      {
        unsigned long int return_value_pthread_self_15;
        return_value_pthread_self_15=pthread_self();
        err_msg("server_thread() %lx unable to write root epilog", (unsigned long int)return_value_pthread_self_15);
      }

      close(client.fd);
    }
  }
  while((_Bool)1);
}

// set_debug_msg_level
// file ../include/gm_msg.h line 17
void set_debug_msg_level(signed int level)
{
  debug_level_link1 = level;
}

// set_defaults
// file conf.c line 366
static void set_defaults(struct anonymous_5 *config)
{
  config->gridname = "unspecified";
  config->xml_port = 8651;
  config->interactive_port = 8652;
  config->server_threads = 4;
  config->umask = 0;
  config->trusted_hosts = (struct _llist_entry *)(void *)0;
  config->debug_level = 0;
  config->should_setuid = 1;
  config->setuid_username = "nobody";
  config->rrd_rootdir = "/var/lib/ganglia/rrds";
  config->write_rrds = 1;
  config->scalable_mode = 1;
  config->all_trusted = 0;
  config->num_RRAs = 3;
  config->RRAs[(signed long int)0] = "RRA:AVERAGE:0.5:1:5856";
  config->RRAs[(signed long int)1] = "RRA:AVERAGE:0.5:4:20160";
  config->RRAs[(signed long int)2] = "RRA:AVERAGE:0.5:40:52704";
  config->case_sensitive_hostnames = 1;
  config->carbon_port = 2003;
  config->carbon_protocol = "tcp";
  config->carbon_timeout = 500;
  config->unsummarized_metrics = (struct _llist_entry *)(void *)0;
}

// skip_token
// file file.c line 128
char * skip_token(const char *p)
{
  const unsigned short int **return_value___ctype_b_loc_1;
  do
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)(unsigned char)*p]) == 0)
      break;

    p = p + 1l;
  }
  while((_Bool)1);
  const unsigned short int **return_value___ctype_b_loc_2;
  for( ; !(*p == 0); p = p + 1l)
  {
    return_value___ctype_b_loc_2=__ctype_b_loc();
    if(!((8192 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)(unsigned char)*p]) == 0))
      break;

  }
  return (char *)p;
}

// skip_whitespace
// file file.c line 121
char * skip_whitespace(const char *p)
{
  const unsigned short int **return_value___ctype_b_loc_1;
  do
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)(unsigned char)*p]) == 0)
      break;

    p = p + 1l;
  }
  while((_Bool)1);
  return (char *)p;
}

// slope_to_cstr
// file libgmond.c line 720
const char * slope_to_cstr(unsigned int slope)
{
  switch(slope)
  {
    case (unsigned int)GANGLIA_SLOPE_ZERO:
      return "zero";
    case (unsigned int)GANGLIA_SLOPE_POSITIVE:
      return "positive";
    case (unsigned int)GANGLIA_SLOPE_NEGATIVE:
      return "negative";
    case (unsigned int)GANGLIA_SLOPE_BOTH:
      return "both";
    case (unsigned int)GANGLIA_SLOPE_DERIVATIVE:
      return "derivative";
    case (unsigned int)GANGLIA_SLOPE_UNSPECIFIED:
      return "unspecified";
    default:
      return "unspecified";
  }
}

// slurpfile
// file file.c line 28
signed int slurpfile(char *filename, char **buffer, signed int buflen)
{
  signed int fd;
  signed int read_len;
  signed int dynamic = 0;
  signed int sl = 0;
  char *db;
  fd=open(filename, 00);
  signed long int return_value_read_2;
  void *return_value_realloc_4;
  if(!(fd >= 0))
  {
    err_ret("slurpfile() open() error on file %s", filename);
    return -1;
  }

  else
  {
    if(*buffer == ((char *)NULL))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)buflen);
      db = (char *)return_value_malloc_1;
      dynamic = buflen;
      *buffer = db;
    }

    else
      db = *buffer;
    do
    {

    read:
      ;
      return_value_read_2=read(fd, (void *)db, (unsigned long int)buflen);
      read_len = (signed int)return_value_read_2;
      if(!(read_len >= 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        if(*return_value___errno_location_3 == 4)
          goto read;

        err_ret("slurpfile() read() error on file %s", filename);
        close(fd);
        return -1;
      }

      else
        sl = sl + read_len;
      if(!(read_len == buflen))
        goto __CPROVER_DUMP_L7;

      if(dynamic == 0)
        break;

      dynamic = dynamic + buflen;
      return_value_realloc_4=realloc((void *)*buffer, (unsigned long int)dynamic);
      db = (char *)return_value_realloc_4;
      *buffer = db;
      db = (*buffer + (signed long int)dynamic) - (signed long int)buflen;
    }
    while((_Bool)1);
    read_len = read_len - 1;
    err_msg("slurpfile() read() buffer overflow on file %s", filename);

  __CPROVER_DUMP_L7:
    ;
    db[(signed long int)read_len] = (char)0;
    close(fd);
    return sl;
  }
}

// source_report_end
// file server.c line 239
signed int source_report_end(struct Generic_type *self, struct anonymous_16 *client, void *arg)
{
  signed int return_value_xml_print_1;
  signed int return_value_xml_print_2;
  if((signed int)self->id == CLUSTER_NODE)
  {
    return_value_xml_print_1=xml_print(client, "</CLUSTER>\n");
    return return_value_xml_print_1;
  }

  else
  {
    return_value_xml_print_2=xml_print(client, "</GRID>\n");
    return return_value_xml_print_2;
  }
}

// source_report_start
// file server.c line 213
signed int source_report_start(struct Generic_type *self, struct anonymous_7 *key, struct anonymous_16 *client, void *arg)
{
  signed int rc;
  char *source_report_start__1__name = (char *)key->data;
  struct anonymous_11 *source = (struct anonymous_11 *)self;
  if((signed int)self->id == CLUSTER_NODE)
  {
    char *return_value_getfield_1;
    return_value_getfield_1=getfield(source->strings, source->owner);
    char *return_value_getfield_2;
    return_value_getfield_2=getfield(source->strings, source->latlong);
    char *return_value_getfield_3;
    return_value_getfield_3=getfield(source->strings, source->url);
    rc=xml_print(client, "<CLUSTER NAME=\"%s\" LOCALTIME=\"%u\" OWNER=\"%s\" LATLONG=\"%s\" URL=\"%s\">\n", source_report_start__1__name, source->localtime, return_value_getfield_1, return_value_getfield_2, return_value_getfield_3);
  }

  else
  {
    char *return_value_getfield_4;
    return_value_getfield_4=getfield(source->strings, source->authority_ptr);
    rc=xml_print(client, "<GRID NAME=\"%s\" AUTHORITY=\"%s\" LOCALTIME=\"%u\">\n", source_report_start__1__name, return_value_getfield_4, source->localtime);
  }
  return rc;
}

// source_summary
// file server.c line 119
static signed int source_summary(struct anonymous_11 *source, struct anonymous_16 *client)
{
  signed int rc;
  rc=xml_print(client, "<HOSTS UP=\"%u\" DOWN=\"%u\" SOURCE=\"gmetad\"/>\n", source->hosts_up, source->hosts_down);
  if(!(rc == 0))
    return 1;

  else
  {
    pthread_mutex_lock(source->sum_finished);
    rc=hash_foreach(source->metric_summary, metric_summary, (void *)client);
    pthread_mutex_unlock(source->sum_finished);
    return rc;
  }
}

// spin_off_the_data_threads
// file gmetad.c line 71
static signed int spin_off_the_data_threads(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct anonymous_6 *d = *((struct anonymous_6 **)val->data);
  unsigned long int pid;
  union pthread_attr_t attr;
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 1);
  pthread_create(&pid, &attr, data_thread, (void *)d);
  return 0;
}

// start
// file process_xml.c line 1008
static void start(void *data, const char *el, const char **attr)
{
  struct xml_tag *xt;
  signed int rc;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(el);
  xt=in_xml_list((char *)el, (unsigned int)return_value_strlen_1);
  if(!(xt == ((struct xml_tag *)NULL)))
  {
    switch((signed int)xt->tag)
    {
      case GRID_TAG:
      {
        rc=startElement_GRID(data, el, attr);
        break;
      }
      case CLUSTER_TAG:
      {
        rc=startElement_CLUSTER(data, el, attr);
        break;
      }
      case HOST_TAG:
      {
        rc=startElement_HOST(data, el, attr);
        break;
      }
      case HOSTS_TAG:
      {
        rc=startElement_HOSTS(data, el, attr);
        break;
      }
      case METRIC_TAG:
      {
        rc=startElement_METRIC(data, el, attr);
        break;
      }
      case METRICS_TAG:
      {
        rc=startElement_METRICS(data, el, attr);
        break;
      }
      case GANGLIA_XML_TAG:
      {
        rc=startElement_GANGLIA_XML(data, el, attr);
        break;
      }
      case EXTRA_DATA_TAG:
      {
        rc=startElement_EXTRA_DATA(data, el, attr);
        break;
      }
      case EXTRA_ELEMENT_TAG:
        rc=startElement_EXTRA_ELEMENT(data, el, attr);
    }
    goto __CPROVER_DUMP_L12;
  }


__CPROVER_DUMP_L12:
  ;
}

// start_link1
// file ganglia.c line 19
static void start_link1(void *data_link1, const char *el_link1, const char **attr_link1)
{
  signed int n;
  struct anonymous_36 *cluster = (struct anonymous_36 *)data_link1;
  char *p;
  signed int return_value_strcmp_24;
  return_value_strcmp_24=strcmp("CLUSTER", el_link1);
  _Bool tmp_if_expr_2;
  signed int return_value_strcmp_1;
  signed int return_value_strcmp_23;
  signed int return_value_strcmp_22;
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
  if(return_value_strcmp_24 == 0)
  {
    strncpy(cluster->name, attr_link1[(signed long int)1], (unsigned long int)256);
    n = 0;
    do
    {
      if(!(attr_link1[(signed long int)n] == ((const char *)NULL)))
      {
        return_value_strcmp_1=strcmp(attr_link1[(signed long int)n], "LOCALTIME");
        tmp_if_expr_2 = return_value_strcmp_1 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      n = n + 2;
    }
    while((_Bool)1);
    cluster->localtime=atol(attr_link1[(signed long int)(n + 1)]);
  }

  else
  {
    return_value_strcmp_23=strcmp("HOST", el_link1);
    if(return_value_strcmp_23 == 0)
    {
      void *return_value_calloc_3;
      return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct gexec_host_t) /*672ul*/ );
      cluster->host = (struct gexec_host_t *)return_value_calloc_3;
      if(cluster->host == ((struct gexec_host_t *)NULL))
      {
        cluster->malloc_error = 1;
        gexec_errno = 1;
        goto __CPROVER_DUMP_L28;
      }

      signed int return_value_strcmp_4;
      return_value_strcmp_4=strcmp(attr_link1[(signed long int)1], attr_link1[(signed long int)3]);
      if(return_value_strcmp_4 == 0)
      {
        cluster->host->name_resolved = 0;
        strcpy(cluster->host->name, attr_link1[(signed long int)1]);
        strcpy(cluster->host->domain, "unresolved");
      }

      else
      {
        cluster->host->name_resolved = 1;
        p=strchr(attr_link1[(signed long int)1], 46);
        if(!(p == ((char *)NULL)))
        {
          n = (signed int)(p - attr_link1[(signed long int)1]);
          strncpy(cluster->host->name, attr_link1[(signed long int)1], (unsigned long int)n);
          cluster->host->name[(signed long int)n] = (char)0;
          p = p + 1l;
          strncpy(cluster->host->domain, p, (unsigned long int)256);
        }

        else
        {
          strncpy(cluster->host->name, attr_link1[(signed long int)1], (unsigned long int)256);
          strcpy(cluster->host->domain, "unspecified");
        }
      }
      strcpy(cluster->host->ip, attr_link1[(signed long int)3]);
      cluster->host->last_reported=atol(attr_link1[(signed long int)7]);
      signed int return_value_abs_5;
      return_value_abs_5=abs((signed int)(cluster->localtime - cluster->host->last_reported));
      if(!(return_value_abs_5 >= 60))
        cluster->host_up = 1;

      else
        cluster->host_up = 0;
    }

    else
    {
      return_value_strcmp_22=strcmp("METRIC", el_link1);
      if(return_value_strcmp_22 == 0)
      {
        if(!(cluster->malloc_error == 0))
          goto __CPROVER_DUMP_L28;

        signed int return_value_strcmp_21;
        return_value_strcmp_21=strcmp(attr_link1[(signed long int)1], "cpu_num");
        if(return_value_strcmp_21 == 0)
        {
          signed int return_value_atoi_6;
          return_value_atoi_6=atoi(attr_link1[(signed long int)3]);
          cluster->host->cpu_num = (unsigned int)return_value_atoi_6;
        }

        else
        {
          return_value_strcmp_20=strcmp(attr_link1[(signed long int)1], "load_one");
          if(return_value_strcmp_20 == 0)
            cluster->host->load_one=atof(attr_link1[(signed long int)3]);

          else
          {
            return_value_strcmp_19=strcmp(attr_link1[(signed long int)1], "load_five");
            if(return_value_strcmp_19 == 0)
              cluster->host->load_five=atof(attr_link1[(signed long int)3]);

            else
            {
              return_value_strcmp_18=strcmp(attr_link1[(signed long int)1], "load_fifteen");
              if(return_value_strcmp_18 == 0)
                cluster->host->load_fifteen=atof(attr_link1[(signed long int)3]);

              else
              {
                return_value_strcmp_17=strcmp(attr_link1[(signed long int)1], "proc_run");
                if(return_value_strcmp_17 == 0)
                {
                  signed int return_value_atoi_7;
                  return_value_atoi_7=atoi(attr_link1[(signed long int)3]);
                  cluster->host->proc_run = (unsigned int)return_value_atoi_7;
                }

                else
                {
                  return_value_strcmp_16=strcmp(attr_link1[(signed long int)1], "proc_total");
                  if(return_value_strcmp_16 == 0)
                  {
                    signed int return_value_atoi_8;
                    return_value_atoi_8=atoi(attr_link1[(signed long int)3]);
                    cluster->host->proc_total = (unsigned int)return_value_atoi_8;
                  }

                  else
                  {
                    return_value_strcmp_15=strcmp(attr_link1[(signed long int)1], "cpu_user");
                    if(return_value_strcmp_15 == 0)
                      cluster->host->cpu_user=atof(attr_link1[(signed long int)3]);

                    else
                    {
                      return_value_strcmp_14=strcmp(attr_link1[(signed long int)1], "cpu_nice");
                      if(return_value_strcmp_14 == 0)
                        cluster->host->cpu_nice=atof(attr_link1[(signed long int)3]);

                      else
                      {
                        return_value_strcmp_13=strcmp(attr_link1[(signed long int)1], "cpu_system");
                        if(return_value_strcmp_13 == 0)
                          cluster->host->cpu_system=atof(attr_link1[(signed long int)3]);

                        else
                        {
                          return_value_strcmp_12=strcmp(attr_link1[(signed long int)1], "cpu_idle");
                          if(return_value_strcmp_12 == 0)
                            cluster->host->cpu_idle=atof(attr_link1[(signed long int)3]);

                          else
                          {
                            return_value_strcmp_11=strcmp(attr_link1[(signed long int)1], "cpu_wio");
                            if(return_value_strcmp_11 == 0)
                              cluster->host->cpu_wio=atof(attr_link1[(signed long int)3]);

                            else
                            {
                              return_value_strcmp_10=strcmp(attr_link1[(signed long int)1], "gexec");
                              if(return_value_strcmp_10 == 0)
                              {
                                signed int return_value_strcmp_9;
                                return_value_strcmp_9=strcmp(attr_link1[(signed long int)3], "ON");
                                if(return_value_strcmp_9 == 0)
                                  cluster->host->gexec_on = 1;

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

__CPROVER_DUMP_L28:
  ;
}

// startElement_CLUSTER
// file process_xml.c line 270
static signed int startElement_CLUSTER(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  struct xml_tag *xt;
  struct anonymous_7 *hash_datum = (struct anonymous_7 *)(void *)0;
  struct anonymous_7 hashkey;
  const char *startElement_CLUSTER__1__name = (const char *)(void *)0;
  signed int edge;
  signed int i;
  struct anonymous_11 *source;
  i = 0;
  for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(attr[(signed long int)i]);
    xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_1);
    if(!(xt == ((struct xml_tag *)NULL)))
    {
      if((signed int)xt->tag == NAME_TAG)
        startElement_CLUSTER__1__name = attr[(signed long int)(i + 1)];

    }

  }
  signed int return_value_authority_mode_2;
  return_value_authority_mode_2=authority_mode(xmldata);
  signed int return_value_addstring_8;
  signed int return_value_addstring_9;
  signed int return_value_addstring_10;
  unsigned long int return_value_strtoul_11;
  if(return_value_authority_mode_2 == 0)
    return 0;

  else
  {
    source = &xmldata->source;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(startElement_CLUSTER__1__name);
    void *return_value_realloc_4;
    return_value_realloc_4=realloc((void *)xmldata->sourcename, return_value_strlen_3 + (unsigned long int)1);
    xmldata->sourcename = (char *)return_value_realloc_4;
    strcpy(xmldata->sourcename, startElement_CLUSTER__1__name);
    hashkey.data = (void *)startElement_CLUSTER__1__name;
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(startElement_CLUSTER__1__name);
    hashkey.size = (unsigned int)(return_value_strlen_5 + (unsigned long int)1);
    hash_datum=hash_lookup(&hashkey, xmldata->root);
    if(hash_datum == ((struct anonymous_7 *)NULL))
    {
      memset((void *)source, 0, sizeof(struct anonymous_11) /*1664ul*/ );
      source->id = (enum anonymous_15)CLUSTER_NODE;
      source->report_start = source_report_start;
      source->report_end = source_report_end;
      source->authority=hash_create((unsigned long int)1024);
      if(source->authority == ((struct anonymous_8 *)NULL))
      {
        err_msg("Could not create hash table for cluster %s", startElement_CLUSTER__1__name);
        return 1;
      }

      if(gmetad_config.case_sensitive_hostnames == 0)
        hash_set_flags(source->authority, 1);

      source->metric_summary=hash_create((unsigned long int)50);
      if(source->metric_summary == ((struct anonymous_8 *)NULL))
      {
        err_msg("Could not create summary hash for cluster %s", startElement_CLUSTER__1__name);
        return 1;
      }

      source->metric_summary_pending=hash_create((unsigned long int)50);
      if(source->metric_summary_pending == ((struct anonymous_8 *)NULL))
      {
        err_msg("Could not create pending summary hash for cluster %s", startElement_CLUSTER__1__name);
        return 1;
      }

      source->ds = xmldata->ds;
      void *return_value_malloc_6;
      return_value_malloc_6=malloc(sizeof(union anonymous) /*40ul*/ );
      source->sum_finished = (union anonymous *)return_value_malloc_6;
      pthread_mutex_init(source->sum_finished, (const union anonymous_21 *)(void *)0);
    }

    else
    {
      memcpy((void *)source, hash_datum->data, (unsigned long int)hash_datum->size);
      datum_free(hash_datum);
      source->hosts_up = (unsigned int)0;
      source->hosts_down = (unsigned int)0;
      hash_foreach(source->metric_summary_pending, zero_out_summary, (void *)0);
    }
    edge = 0;
    source->owner = (signed short int)-1;
    source->latlong = (signed short int)-1;
    source->url = (signed short int)-1;
    i = 0;
    for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
    {
      unsigned long int return_value_strlen_7;
      return_value_strlen_7=strlen(attr[(signed long int)i]);
      xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_7);
      if(!(xt == ((struct xml_tag *)NULL)))
        switch((signed int)xt->tag)
        {
          case OWNER_TAG:
          {
            return_value_addstring_8=addstring(source->strings, &edge, attr[(signed long int)(i + 1)]);
            source->owner = (signed short int)return_value_addstring_8;
            break;
          }
          case LATLONG_TAG:
          {
            return_value_addstring_9=addstring(source->strings, &edge, attr[(signed long int)(i + 1)]);
            source->latlong = (signed short int)return_value_addstring_9;
            break;
          }
          case URL_TAG:
          {
            return_value_addstring_10=addstring(source->strings, &edge, attr[(signed long int)(i + 1)]);
            source->url = (signed short int)return_value_addstring_10;
            break;
          }
          case LOCALTIME_TAG:
          {
            return_value_strtoul_11=strtoul(attr[(signed long int)(i + 1)], (char **)(void *)0, 10);
            source->localtime = (unsigned int)return_value_strtoul_11;
            break;
          }
          default:
            ;
        }

    }
    source->stringslen = (signed short int)edge;
    return 0;
  }
}

// startElement_EXTRA_DATA
// file process_xml.c line 734
static signed int startElement_EXTRA_DATA(void *data, const char *el, const char **attr)
{
  return 0;
}

// startElement_EXTRA_ELEMENT
// file process_xml.c line 744
static signed int startElement_EXTRA_ELEMENT(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  signed int edge;
  struct xml_tag *xt;
  signed int i;
  signed int name_off;
  signed int value_off;
  struct anonymous_9 metric;
  char *startElement_EXTRA_ELEMENT__1__name;
  startElement_EXTRA_ELEMENT__1__name=getfield(xmldata->metric.strings, xmldata->metric.name);
  struct anonymous_7 *rdatum;
  struct anonymous_7 hashkey;
  struct anonymous_7 startElement_EXTRA_ELEMENT__1__hashval;
  struct anonymous_7 *hash_datum = (struct anonymous_7 *)(void *)0;
  signed short int tmp_post_4;
  signed short int tmp_post_6;
  signed int return_value_strcasecmp_9;
  signed int return_value_strcasecmp_11;
  signed short int tmp_post_13;
  signed short int tmp_post_15;
  if(xmldata->host_alive == 0)
    return 0;

  else
  {
    signed int return_value_authority_mode_1;
    return_value_authority_mode_1=authority_mode(xmldata);
    if(return_value_authority_mode_1 == 0)
      return 0;

    else
    {
      hashkey.data = (void *)startElement_EXTRA_ELEMENT__1__name;
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(startElement_EXTRA_ELEMENT__1__name);
      hashkey.size = (unsigned int)(return_value_strlen_2 + (unsigned long int)1);
      hash_datum=hash_lookup(&hashkey, xmldata->host.metrics);
      if(hash_datum == ((struct anonymous_7 *)NULL))
        return 0;

      else
      {
        memcpy((void *)&metric, hash_datum->data, (unsigned long int)hash_datum->size);
        datum_free(hash_datum);
        if((signed int)metric.ednameslen >= 32)
        {
          debug_msg("Can not add more extra elements for [%s].  Capacity of %d reached.", startElement_EXTRA_ELEMENT__1__name, 32);
          return 0;
        }

        else
        {
          edge = (signed int)metric.stringslen;
          value_off = -1;
          name_off = value_off;
          i = 0;
          for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
          {
            unsigned long int return_value_strlen_3;
            return_value_strlen_3=strlen(attr[(signed long int)i]);
            xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_3);
            if(!(xt == ((struct xml_tag *)NULL)))
              switch((signed int)xt->tag)
              {
                case NAME_TAG:
                {
                  name_off = i;
                  break;
                }
                case VAL_TAG:
                  value_off = i;
              }

          }
          if(name_off >= 0 && value_off >= 0)
          {
            const char *new_name = attr[(signed long int)(name_off + 1)];
            const char *new_value = attr[(signed long int)(value_off + 1)];
            tmp_post_4 = metric.ednameslen;
            metric.ednameslen = metric.ednameslen + 1;
            signed int return_value_addstring_5;
            return_value_addstring_5=addstring(metric.strings, &edge, new_name);
            metric.ednames[(signed long int)tmp_post_4] = (signed short int)return_value_addstring_5;
            tmp_post_6 = metric.edvalueslen;
            metric.edvalueslen = metric.edvalueslen + 1;
            signed int return_value_addstring_7;
            return_value_addstring_7=addstring(metric.strings, &edge, new_value);
            metric.edvalues[(signed long int)tmp_post_6] = (signed short int)return_value_addstring_7;
            metric.stringslen = (signed short int)edge;
            hashkey.data = (void *)startElement_EXTRA_ELEMENT__1__name;
            unsigned long int return_value_strlen_8;
            return_value_strlen_8=strlen(startElement_EXTRA_ELEMENT__1__name);
            hashkey.size = (unsigned int)(return_value_strlen_8 + (unsigned long int)1);
            startElement_EXTRA_ELEMENT__1__hashval.size = (unsigned int)((sizeof(struct anonymous_9) /*1800ul*/  - (unsigned long int)1572) + (unsigned long int)metric.stringslen);
            startElement_EXTRA_ELEMENT__1__hashval.data = (void *)&metric;
            rdatum=hash_insert(&hashkey, &startElement_EXTRA_ELEMENT__1__hashval, xmldata->host.metrics);
            if(rdatum == ((struct anonymous_7 *)NULL))
              err_msg("Could not insert %s metric", startElement_EXTRA_ELEMENT__1__name);

            else
            {
              struct anonymous_8 *summary = xmldata->source.metric_summary;
              struct anonymous_9 sum_metric;
              unsigned long int return_value_strlen_10;
              return_value_strlen_10=strlen(new_name);
              if(return_value_strlen_10 == 10ul)
              {
                return_value_strcasecmp_9=strcasecmp(new_name, "SPOOF_HOST");
                if(return_value_strcasecmp_9 == 0)
                  return 0;

              }

              hash_datum=hash_lookup(&hashkey, summary);
              if(!(hash_datum == ((struct anonymous_7 *)NULL)))
              {
                signed int found = 0;
                memcpy((void *)&sum_metric, hash_datum->data, (unsigned long int)hash_datum->size);
                datum_free(hash_datum);
                i = 0;
                for( ; !(i >= (signed int)sum_metric.ednameslen); i = i + 1)
                {
                  char *chk_name;
                  chk_name=getfield(sum_metric.strings, sum_metric.ednames[(signed long int)i]);
                  char *chk_value;
                  chk_value=getfield(sum_metric.strings, sum_metric.edvalues[(signed long int)i]);
                  signed int return_value_strcasecmp_12;
                  return_value_strcasecmp_12=strcasecmp(chk_name, new_name);
                  if(return_value_strcasecmp_12 == 0)
                  {
                    return_value_strcasecmp_11=strcasecmp(chk_value, new_value);
                    if(return_value_strcasecmp_11 == 0)
                    {
                      found = 1;
                      break;
                    }

                  }

                }
                if(found == 0)
                {
                  edge = (signed int)sum_metric.stringslen;
                  tmp_post_13 = sum_metric.ednameslen;
                  sum_metric.ednameslen = sum_metric.ednameslen + 1;
                  signed int return_value_addstring_14;
                  return_value_addstring_14=addstring(sum_metric.strings, &edge, new_name);
                  sum_metric.ednames[(signed long int)tmp_post_13] = (signed short int)return_value_addstring_14;
                  tmp_post_15 = sum_metric.edvalueslen;
                  sum_metric.edvalueslen = sum_metric.edvalueslen + 1;
                  signed int return_value_addstring_16;
                  return_value_addstring_16=addstring(sum_metric.strings, &edge, new_value);
                  sum_metric.edvalues[(signed long int)tmp_post_15] = (signed short int)return_value_addstring_16;
                  sum_metric.stringslen = (signed short int)edge;
                }

                startElement_EXTRA_ELEMENT__1__hashval.size = (unsigned int)((sizeof(struct anonymous_9) /*1800ul*/  - (unsigned long int)1572) + (unsigned long int)sum_metric.stringslen);
                startElement_EXTRA_ELEMENT__1__hashval.data = (void *)&sum_metric;
                rdatum=hash_insert(&hashkey, &startElement_EXTRA_ELEMENT__1__hashval, summary);
                if(rdatum == ((struct anonymous_7 *)NULL))
                  err_msg("Could not insert summary %s metric", startElement_EXTRA_ELEMENT__1__name);

              }

            }
          }

          return 0;
        }
      }
    }
  }
}

// startElement_GANGLIA_XML
// file process_xml.c line 972
static signed int startElement_GANGLIA_XML(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  struct xml_tag *xt;
  signed int i = 0;
  for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(attr[(signed long int)i]);
    xt=in_xml_list((char *)attr[(signed long int)i], (unsigned int)return_value_strlen_1);
    if(!(xt == ((struct xml_tag *)NULL)))
    {
      if((signed int)xt->tag == VERSION_TAG)
      {
        signed int return_value_strncmp_2;
        return_value_strncmp_2=strncmp(attr[(signed long int)(i + 1)], "2.5", (unsigned long int)3);
        if(!(return_value_strncmp_2 >= 0))
        {
          debug_msg("[%s] is a pre-2.5 data stream", xmldata->ds->name);
          xmldata->old = 1;
        }

        else
        {
          debug_msg("[%s] is a 2.5 or later data stream", xmldata->ds->name);
          xmldata->old = 0;
        }
      }

    }

  }
  return 0;
}

// startElement_GRID
// file process_xml.c line 153
static signed int startElement_GRID(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  struct xml_tag *xt;
  struct anonymous_7 *hash_datum = (struct anonymous_7 *)(void *)0;
  struct anonymous_7 hashkey;
  const char *startElement_GRID__1__name = (const char *)(void *)0;
  signed int edge;
  signed int i;
  struct anonymous_11 *source;
  signed int return_value_addstring_7;
  unsigned long int return_value_strtoul_8;
  if(gmetad_config.scalable_mode == 0)
    return 0;

  else
  {
    signed int return_value_authority_mode_9;
    return_value_authority_mode_9=authority_mode(xmldata);
    if(!(return_value_authority_mode_9 == 0))
    {
      i = 0;
      for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
      {
        unsigned long int return_value_strlen_1;
        return_value_strlen_1=strlen(attr[(signed long int)i]);
        xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_1);
        if(!(xt == ((struct xml_tag *)NULL)))
        {
          if((signed int)xt->tag == NAME_TAG)
          {
            startElement_GRID__1__name = attr[(signed long int)(i + 1)];
            unsigned long int return_value_strlen_2;
            return_value_strlen_2=strlen(startElement_GRID__1__name);
            void *return_value_realloc_3;
            return_value_realloc_3=realloc((void *)xmldata->sourcename, return_value_strlen_2 + (unsigned long int)1);
            xmldata->sourcename = (char *)return_value_realloc_3;
            strcpy(xmldata->sourcename, startElement_GRID__1__name);
            hashkey.data = (void *)startElement_GRID__1__name;
            unsigned long int return_value_strlen_4;
            return_value_strlen_4=strlen(startElement_GRID__1__name);
            hashkey.size = (unsigned int)(return_value_strlen_4 + (unsigned long int)1);
          }

        }

      }
      source = &xmldata->source;
      hash_datum=hash_lookup(&hashkey, xmldata->root);
      if(hash_datum == ((struct anonymous_7 *)NULL))
      {
        memset((void *)source, 0, sizeof(struct anonymous_11) /*1664ul*/ );
        source->id = (enum anonymous_15)GRID_NODE;
        source->report_start = source_report_start;
        source->report_end = source_report_end;
        source->metric_summary=hash_create((unsigned long int)50);
        if(source->metric_summary == ((struct anonymous_8 *)NULL))
        {
          err_msg("Could not create summary hash for cluster %s", startElement_GRID__1__name);
          return 1;
        }

        source->metric_summary_pending=hash_create((unsigned long int)50);
        if(source->metric_summary_pending == ((struct anonymous_8 *)NULL))
        {
          err_msg("Could not create pending summary hash for cluster %s", startElement_GRID__1__name);
          return 1;
        }

        source->ds = xmldata->ds;
        void *return_value_malloc_5;
        return_value_malloc_5=malloc(sizeof(union anonymous) /*40ul*/ );
        source->sum_finished = (union anonymous *)return_value_malloc_5;
        pthread_mutex_init(source->sum_finished, (const union anonymous_21 *)(void *)0);
      }

      else
      {
        memcpy((void *)source, hash_datum->data, (unsigned long int)hash_datum->size);
        datum_free(hash_datum);
        source->hosts_up = (unsigned int)0;
        source->hosts_down = (unsigned int)0;
        hash_foreach(source->metric_summary_pending, zero_out_summary, (void *)0);
      }
      edge = 0;
      i = 0;
      for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
      {
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(attr[(signed long int)i]);
        xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_6);
        if(!(xt == ((struct xml_tag *)NULL)))
          switch((signed int)xt->tag)
          {
            case AUTHORITY_TAG:
            {
              return_value_addstring_7=addstring(source->strings, &edge, attr[(signed long int)(i + 1)]);
              source->authority_ptr = (signed short int)return_value_addstring_7;
              break;
            }
            case LOCALTIME_TAG:
            {
              return_value_strtoul_8=strtoul(attr[(signed long int)(i + 1)], (char **)(void *)0, 10);
              source->localtime = (unsigned int)return_value_strtoul_8;
              break;
            }
            default:
              ;
          }

      }
      source->stringslen = (signed short int)edge;
    }

    xmldata->grid_depth = xmldata->grid_depth + 1;
    debug_msg("Found a <GRID>, depth is now %d", xmldata->grid_depth);
    return 0;
  }
}

// startElement_HOST
// file process_xml.c line 392
static signed int startElement_HOST(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  struct anonymous_7 *hash_datum = (struct anonymous_7 *)(void *)0;
  struct anonymous_7 *rdatum;
  struct anonymous_7 hashkey;
  struct anonymous_7 startElement_HOST__1__hashval;
  struct xml_tag *xt;
  unsigned int tn = (unsigned int)0;
  unsigned int tmax = (unsigned int)0;
  unsigned int reported = (unsigned int)0;
  const char *startElement_HOST__1__name = (const char *)(void *)0;
  signed int edge;
  signed int i;
  struct anonymous_10 *host;
  struct anonymous_8 *hosts;
  i = 0;
  unsigned long int return_value_strtoul_2;
  signed int return_value_atoi_3;
  signed int return_value_atoi_4;
  for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(attr[(signed long int)i]);
    xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_1);
    if(!(xt == ((struct xml_tag *)NULL)))
    {
      if((signed int)xt->tag == REPORTED_TAG)
      {
        return_value_strtoul_2=strtoul(attr[(signed long int)(i + 1)], (char **)(void *)0, 10);
        reported = (unsigned int)return_value_strtoul_2;
      }

      else
        if((signed int)xt->tag == TN_TAG)
        {
          return_value_atoi_3=atoi(attr[(signed long int)(i + 1)]);
          tn = (unsigned int)return_value_atoi_3;
        }

        else
          if((signed int)xt->tag == TMAX_TAG)
          {
            return_value_atoi_4=atoi(attr[(signed long int)(i + 1)]);
            tmax = (unsigned int)return_value_atoi_4;
          }

          else
            if((signed int)xt->tag == NAME_TAG)
              startElement_HOST__1__name = attr[(signed long int)(i + 1)];

    }

  }
  signed int tmp_if_expr_6;
  signed int return_value_abs_5;
  if(tmax == 0u || !(xmldata->old == 0))
  {
    return_value_abs_5=abs((signed int)(xmldata->source.localtime - reported));
    tmp_if_expr_6 = (signed int)(return_value_abs_5 < 60);
  }

  else
    tmp_if_expr_6 = (signed int)(tn < tmax * (unsigned int)4);
  xmldata->host_alive = tmp_if_expr_6;
  if(!(xmldata->host_alive == 0))
    xmldata->source.hosts_up = xmldata->source.hosts_up + 1u;

  else
    xmldata->source.hosts_down = xmldata->source.hosts_down + 1u;
  signed int return_value_authority_mode_7;
  return_value_authority_mode_7=authority_mode(xmldata);
  signed int return_value_addstring_12;
  unsigned long int return_value_strtoul_13;
  signed int return_value_addstring_14;
  signed int return_value_addstring_15;
  unsigned long int return_value_strtoul_16;
  if(return_value_authority_mode_7 == 0)
    return 0;

  else
  {
    host = &xmldata->host;
    unsigned long int return_value_strlen_8;
    return_value_strlen_8=strlen(startElement_HOST__1__name);
    void *return_value_realloc_9;
    return_value_realloc_9=realloc((void *)xmldata->hostname, return_value_strlen_8 + (unsigned long int)1);
    xmldata->hostname = (char *)return_value_realloc_9;
    strcpy(xmldata->hostname, startElement_HOST__1__name);
    hashkey.data = (void *)startElement_HOST__1__name;
    unsigned long int return_value_strlen_10;
    return_value_strlen_10=strlen(startElement_HOST__1__name);
    hashkey.size = (unsigned int)(return_value_strlen_10 + (unsigned long int)1);
    hosts = xmldata->source.authority;
    hash_datum=hash_lookup(&hashkey, hosts);
    if(hash_datum == ((struct anonymous_7 *)NULL))
    {
      memset((void *)host, 0, sizeof(struct anonymous_10) /*1656ul*/ );
      host->id = (enum anonymous_15)HOST_NODE;
      host->report_start = host_report_start;
      host->report_end = host_report_end;
      host->metrics=hash_create((unsigned long int)50);
      if(host->metrics == ((struct anonymous_8 *)NULL))
      {
        err_msg("Could not create metric hash for host %s", startElement_HOST__1__name);
        return 1;
      }

    }

    else
    {
      memcpy((void *)host, hash_datum->data, (unsigned long int)hash_datum->size);
      datum_free(hash_datum);
    }
    edge = 0;
    host->location = (signed short int)-1;
    host->tags = (signed short int)-1;
    host->reported = reported;
    host->tn = tn;
    host->tmax = tmax;
    host->t0 = xmldata->now;
    host->t0.tv_sec = host->t0.tv_sec - (signed long int)host->tn;
    i = 0;
    for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
    {
      unsigned long int return_value_strlen_11;
      return_value_strlen_11=strlen(attr[(signed long int)i]);
      xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_11);
      if(!(xt == ((struct xml_tag *)NULL)))
        switch((signed int)xt->tag)
        {
          case IP_TAG:
          {
            return_value_addstring_12=addstring(host->strings, &edge, attr[(signed long int)(i + 1)]);
            host->ip = (signed short int)return_value_addstring_12;
            break;
          }
          case DMAX_TAG:
          {
            return_value_strtoul_13=strtoul(attr[(signed long int)(i + 1)], (char **)(void *)0, 10);
            host->dmax = (unsigned int)return_value_strtoul_13;
            break;
          }
          case LOCATION_TAG:
          {
            return_value_addstring_14=addstring(host->strings, &edge, attr[(signed long int)(i + 1)]);
            host->location = (signed short int)return_value_addstring_14;
            break;
          }
          case TAGS_TAG:
          {
            return_value_addstring_15=addstring(host->strings, &edge, attr[(signed long int)(i + 1)]);
            host->tags = (signed short int)return_value_addstring_15;
            break;
          }
          case STARTED_TAG:
          {
            return_value_strtoul_16=strtoul(attr[(signed long int)(i + 1)], (char **)(void *)0, 10);
            host->started = (unsigned int)return_value_strtoul_16;
            break;
          }
          default:
            ;
        }

    }
    host->stringslen = (signed short int)edge;
    startElement_HOST__1__hashval.size = (unsigned int)((sizeof(struct anonymous_10) /*1656ul*/  - (unsigned long int)1572) + (unsigned long int)host->stringslen);
    startElement_HOST__1__hashval.data = (void *)host;
    rdatum=hash_insert(&hashkey, &startElement_HOST__1__hashval, hosts);
    if(rdatum == ((struct anonymous_7 *)NULL))
    {
      err_msg("Could not insert host %s", startElement_HOST__1__name);
      return 1;
    }

    else
      return 0;
  }
}

// startElement_HOSTS
// file process_xml.c line 542
static signed int startElement_HOSTS(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  signed int i;
  struct xml_tag *xt;
  unsigned long int return_value_strtoul_2;
  unsigned long int return_value_strtoul_3;
  if(gmetad_config.scalable_mode == 0)
    return 0;

  else
  {
    i = 0;
    for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(attr[(signed long int)i]);
      xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_1);
      if(!(xt == ((struct xml_tag *)NULL)))
        switch((signed int)xt->tag)
        {
          case UP_TAG:
          {
            return_value_strtoul_2=strtoul(attr[(signed long int)(i + 1)], (char **)(void *)0, 10);
            xmldata->source.hosts_up = xmldata->source.hosts_up + (unsigned int)return_value_strtoul_2;
            break;
          }
          case DOWN_TAG:
          {
            return_value_strtoul_3=strtoul(attr[(signed long int)(i + 1)], (char **)(void *)0, 10);
            xmldata->source.hosts_down = xmldata->source.hosts_down + (unsigned int)return_value_strtoul_3;
            break;
          }
          default:
            ;
        }

    }
    return 0;
  }
}

// startElement_METRIC
// file process_xml.c line 577
static signed int startElement_METRIC(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  enum ganglia_slope slope = (enum ganglia_slope)GANGLIA_SLOPE_UNSPECIFIED;
  struct xml_tag *xt;
  struct type_tag *tt;
  struct anonymous_7 *hash_datum = (struct anonymous_7 *)(void *)0;
  struct anonymous_7 *rdatum;
  struct anonymous_7 hashkey;
  struct anonymous_7 startElement_METRIC__1__hashval;
  const char *startElement_METRIC__1__name = (const char *)(void *)0;
  const char *metricval = (const char *)(void *)0;
  const char *type = (const char *)(void *)0;
  signed int do_summary;
  signed int i;
  signed int edge;
  signed int carbon_ret;
  struct anonymous_8 *summary;
  struct anonymous_9 *metric;
  unsigned long int return_value_strlen_2;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  double return_value_strtod_9;
  if(xmldata->host_alive == 0)
    return 0;

  else
  {
    i = 0;
    for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(attr[(signed long int)i]);
      xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_1);
      if(!(xt == ((struct xml_tag *)NULL)))
        switch((signed int)xt->tag)
        {
          case NAME_TAG:
          {
            startElement_METRIC__1__name = attr[(signed long int)(i + 1)];
            hashkey.data = (void *)startElement_METRIC__1__name;
            return_value_strlen_2=strlen(startElement_METRIC__1__name);
            hashkey.size = (unsigned int)(return_value_strlen_2 + (unsigned long int)1);
            break;
          }
          case VAL_TAG:
          {
            metricval = attr[(signed long int)(i + 1)];
            break;
          }
          case TYPE_TAG:
          {
            type = attr[(signed long int)(i + 1)];
            break;
          }
          case SLOPE_TAG:
            slope=cstr_to_slope(attr[(signed long int)(i + 1)]);
          default:
            ;
        }

    }
    metric = &xmldata->metric;
    memset((void *)metric, 0, sizeof(struct anonymous_9) /*1800ul*/ );
    do_summary = 0;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(type);
    tt=in_type_list(type, (unsigned int)return_value_strlen_3);
    if(tt == ((struct type_tag *)NULL))
      return 0;

    else
    {
      if((signed int)tt->type == INT)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)tt->type == UINT ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = (signed int)tt->type == FLOAT ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        do_summary = 1;

      signed int return_value_authority_mode_7;
      return_value_authority_mode_7=authority_mode(xmldata);
      if(!(return_value_authority_mode_7 == 0))
      {
        fillmetric(attr, metric, type);
        if(!(metric->dmax == 0u))
        {
          if(!(metric->dmax >= metric->tn))
            return 0;

        }

        if(!(do_summary == 0))
        {
          if(xmldata->ds->dead == 0)
          {
            if(xmldata->rval == 0)
            {
              debug_msg("Updating host %s, metric %s", xmldata->hostname, startElement_METRIC__1__name);
              if(gmetad_config.write_rrds == 1)
                xmldata->rval=write_data_to_rrd(xmldata->sourcename, xmldata->hostname, startElement_METRIC__1__name, metricval, (const char *)(void *)0, xmldata->ds->step, xmldata->source.localtime, slope);

              if(!(gmetad_config.carbon_server == ((char *)NULL)))
                carbon_ret=write_data_to_carbon(xmldata->sourcename, xmldata->hostname, startElement_METRIC__1__name, metricval, xmldata->source.localtime);

            }

          }

        }

        metric->id = (enum anonymous_15)METRIC_NODE;
        metric->report_start = metric_report_start;
        metric->report_end = metric_report_end;
        edge = (signed int)metric->stringslen;
        signed int return_value_addstring_6;
        return_value_addstring_6=addstring(metric->strings, &edge, startElement_METRIC__1__name);
        metric->name = (signed short int)return_value_addstring_6;
        metric->stringslen = (signed short int)edge;
        metric->t0 = xmldata->now;
        metric->t0.tv_sec = metric->t0.tv_sec - (signed long int)metric->tn;
        startElement_METRIC__1__hashval.size = (unsigned int)((sizeof(struct anonymous_9) /*1800ul*/  - (unsigned long int)1572) + (unsigned long int)metric->stringslen);
        startElement_METRIC__1__hashval.data = (void *)metric;
        rdatum=hash_insert(&hashkey, &startElement_METRIC__1__hashval, xmldata->host.metrics);
        if(rdatum == ((struct anonymous_7 *)NULL))
          err_msg("Could not insert %s metric", startElement_METRIC__1__name);

      }

      if(!(do_summary == 0))
      {
        summary = xmldata->source.metric_summary_pending;
        hash_datum=hash_lookup(&hashkey, summary);
        if(hash_datum == ((struct anonymous_7 *)NULL))
        {
          signed int return_value_authority_mode_8;
          return_value_authority_mode_8=authority_mode(xmldata);
          if(return_value_authority_mode_8 == 0)
          {
            metric = &xmldata->metric;
            memset((void *)metric, 0, sizeof(struct anonymous_9) /*1800ul*/ );
            fillmetric(attr, metric, type);
          }

        }

        else
        {
          memcpy((void *)&xmldata->metric, hash_datum->data, (unsigned long int)hash_datum->size);
          datum_free(hash_datum);
          metric = &xmldata->metric;
          if((signed int)tt->type == INT || (signed int)tt->type == UINT || (signed int)tt->type == FLOAT)
          {
            return_value_strtod_9=strtod(metricval, (char **)(void *)0);
            metric->val.d = metric->val.d + (double)return_value_strtod_9;
            goto __CPROVER_DUMP_L27;
          }

          goto __CPROVER_DUMP_L27;
        }

      __CPROVER_DUMP_L27:
        ;
        metric->num = metric->num + 1u;
        metric->t0 = xmldata->now;
        startElement_METRIC__1__hashval.size = (unsigned int)((sizeof(struct anonymous_9) /*1800ul*/  - (unsigned long int)1572) + (unsigned long int)metric->stringslen);
        startElement_METRIC__1__hashval.data = (void *)metric;
        rdatum=hash_insert(&hashkey, &startElement_METRIC__1__hashval, summary);
        if(rdatum == ((struct anonymous_7 *)NULL))
          err_msg("Could not insert %s metric", startElement_METRIC__1__name);

      }

      return 0;
    }
  }
}

// startElement_METRICS
// file process_xml.c line 882
static signed int startElement_METRICS(void *data, const char *el, const char **attr)
{
  struct anonymous_35 *xmldata = (struct anonymous_35 *)data;
  struct xml_tag *xt;
  struct type_tag *tt;
  struct anonymous_7 *hash_datum = (struct anonymous_7 *)(void *)0;
  struct anonymous_7 *rdatum;
  struct anonymous_7 hashkey;
  struct anonymous_7 startElement_METRICS__1__hashval;
  const char *startElement_METRICS__1__name = (const char *)(void *)0;
  const char *metricval = (const char *)(void *)0;
  const char *metricnum = (const char *)(void *)0;
  const char *type = (const char *)(void *)0;
  signed int i;
  struct anonymous_8 *summary;
  struct anonymous_9 *metric;
  unsigned long int return_value_strlen_2;
  double return_value_strtod_4;
  if(gmetad_config.scalable_mode == 0)
    return 0;

  else
  {
    i = 0;
    for( ; !(attr[(signed long int)i] == ((const char *)NULL)); i = i + 2)
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(attr[(signed long int)i]);
      xt=in_xml_list(attr[(signed long int)i], (unsigned int)return_value_strlen_1);
      if(!(xt == ((struct xml_tag *)NULL)))
        switch((signed int)xt->tag)
        {
          case NAME_TAG:
          {
            startElement_METRICS__1__name = attr[(signed long int)(i + 1)];
            hashkey.data = (void *)startElement_METRICS__1__name;
            return_value_strlen_2=strlen(startElement_METRICS__1__name);
            hashkey.size = (unsigned int)(return_value_strlen_2 + (unsigned long int)1);
            break;
          }
          case TYPE_TAG:
          {
            type = attr[(signed long int)(i + 1)];
            break;
          }
          case SUM_TAG:
          {
            metricval = attr[(signed long int)(i + 1)];
            break;
          }
          case NUM_TAG:
            metricnum = attr[(signed long int)(i + 1)];
          default:
            ;
        }

    }
    summary = xmldata->source.metric_summary_pending;
    hash_datum=hash_lookup(&hashkey, summary);
    if(hash_datum == ((struct anonymous_7 *)NULL))
    {
      metric = &xmldata->metric;
      memset((void *)metric, 0, sizeof(struct anonymous_9) /*1800ul*/ );
      fillmetric(attr, metric, type);
    }

    else
    {
      memcpy((void *)&xmldata->metric, hash_datum->data, (unsigned long int)hash_datum->size);
      datum_free(hash_datum);
      metric = &xmldata->metric;
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(type);
      tt=in_type_list(type, (unsigned int)return_value_strlen_3);
      if(tt == ((struct type_tag *)NULL))
        return 0;

      if((signed int)tt->type == INT || (signed int)tt->type == UINT || (signed int)tt->type == FLOAT)
      {
        return_value_strtod_4=strtod(metricval, (char **)(void *)0);
        metric->val.d = metric->val.d + (double)return_value_strtod_4;
        goto __CPROVER_DUMP_L16;
      }

      goto __CPROVER_DUMP_L16;

    __CPROVER_DUMP_L16:
      ;
      signed int return_value_atoi_5;
      return_value_atoi_5=atoi(metricnum);
      metric->num = metric->num + (unsigned int)return_value_atoi_5;
    }
    startElement_METRICS__1__hashval.size = (unsigned int)((sizeof(struct anonymous_9) /*1800ul*/  - (unsigned long int)1572) + (unsigned long int)metric->stringslen);
    startElement_METRICS__1__hashval.data = (void *)metric;
    summary = xmldata->source.metric_summary;
    rdatum=hash_insert(&hashkey, &startElement_METRICS__1__hashval, summary);
    if(rdatum == ((struct anonymous_7 *)NULL))
    {
      err_msg("Could not insert %s metric", startElement_METRICS__1__name);
      return 1;
    }

    else
      return 0;
  }
}

// sum_metrics
// file gmetad.c line 136
static signed int sum_metrics(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct anonymous_7 *hash_datum;
  struct anonymous_7 *rdatum;
  struct anonymous_9 *rootmetric;
  struct anonymous_9 *metric;
  char *type;
  struct type_tag *tt;
  signed int do_sum = 1;
  metric = (struct anonymous_9 *)val->data;
  type=getfield(metric->strings, metric->type);
  hash_datum=hash_lookup(key, root.metric_summary);
  if(hash_datum == ((struct anonymous_7 *)NULL))
  {
    hash_datum=datum_new((void *)(char *)metric, (unsigned long int)val->size);
    do_sum = 0;
  }

  rootmetric = (struct anonymous_9 *)hash_datum->data;
  if(!(do_sum == 0))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(type);
    tt=in_type_list(type, (unsigned int)return_value_strlen_1);
    if(tt == ((struct type_tag *)NULL))
    {
      datum_free(hash_datum);
      return 0;
    }

    if((signed int)tt->type == INT || (signed int)tt->type == UINT || (signed int)tt->type == FLOAT)
      rootmetric->val.d = rootmetric->val.d + metric->val.d;

    rootmetric->num = rootmetric->num + metric->num;
  }

  rdatum=hash_insert(key, hash_datum, root.metric_summary);
  datum_free(hash_datum);
  if(rdatum == ((struct anonymous_7 *)NULL))
    return 1;

  else
    return 0;
}

// timediff
// file file.c line 81
float timediff(struct timeval *thistime, struct timeval *lasttime)
{
  float diff = (float)(((((double)thistime->tv_sec * 1.0e6 + (double)thistime->tv_usec) - (double)lasttime->tv_sec * 1.0e6) - (double)lasttime->tv_usec) / 1.0e6);
  return diff;
}

// tree_report
// file server.c line 366
static signed int tree_report(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct anonymous_16 *client = (struct anonymous_16 *)arg;
  struct Generic_type *node = (struct Generic_type *)val->data;
  signed int rc = 0;
  signed int return_value_applicable_1;
  if(!(client->filter == /*enum*/NO_FILTER))
  {
    return_value_applicable_1=applicable(client->filter, node);
    if(!(return_value_applicable_1 == 0))
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    rc=node->report_start(node, key, client, (void *)0);
    if(!(rc == 0))
      return 1;

    else
    {
      applyfilter(client, node);
      if(!(node->children == ((struct anonymous_8 *)NULL)))
        hash_foreach(node->children, tree_report, arg);

      rc=node->report_end(node, client, (void *)0);
      return rc;
    }
  }
}

// update_arg
// file cmdline.c line 341
static signed int update_arg(void *field, char **orig_field, unsigned int *field_given, unsigned int *prev_given, char *value, const char **possible_values, const char *default_value, enum anonymous_23 arg_type, signed int check_ambiguity, signed int override, signed int no_free, signed int multiple_option, const char *long_opt, char short_opt, const char *additional_error)
{
  char *stop_char = ((char *)NULL);
  const char *val = value;
  signed int found;
  char **string_field;
  (void)field;
  stop_char = ((char *)NULL);
  found = 0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  signed long int return_value_strtol_3;
  _Bool tmp_if_expr_4;
  if(multiple_option == 0 && !(prev_given == ((unsigned int *)NULL)))
  {
    if(!(*prev_given == 0u))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      if(!(check_ambiguity == 0))
        tmp_if_expr_1 = *field_given != 0u ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_2)
      goto __CPROVER_DUMP_L7;

    if(!((signed int)short_opt == 45))
      fprintf(stderr, "%s: `--%s' (`-%c') option given more than once%s\n", package_name, long_opt, short_opt, additional_error != ((const char *)NULL) ? additional_error : "");

    else
      fprintf(stderr, "%s: `--%s' option given more than once%s\n", package_name, long_opt, additional_error != ((const char *)NULL) ? additional_error : "");
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L7:
    ;
    (void)default_value;
    if(!(field_given == ((unsigned int *)NULL)))
    {
      if(*field_given == 0u)
        goto __CPROVER_DUMP_L8;

      if(!(override == 0))
        goto __CPROVER_DUMP_L8;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L8:
      ;
      if(!(prev_given == ((unsigned int *)NULL)))
        *prev_given = *prev_given + 1u;

      if(!(field_given == ((unsigned int *)NULL)))
        *field_given = *field_given + 1u;

      if(!(possible_values == ((const char **)NULL)))
        val = possible_values[(signed long int)found];

      switch((signed int)arg_type)
      {
        case ARG_INT:
        {
          if(!(val == ((const char *)NULL)))
          {
            return_value_strtol_3=strtol(val, &stop_char, 0);
            *((signed int *)field) = (signed int)return_value_strtol_3;
          }

          break;
        }
        case ARG_STRING:
        {
          if(!(val == ((const char *)NULL)))
          {
            string_field = (char **)field;
            if(no_free == 0)
            {
              if(!(*string_field == ((char *)NULL)))
                free((void *)*string_field);

            }

            *string_field=gengetopt_strdup(val);
          }

          break;
        }
        default:
          ;
      }
      if((signed int)arg_type == ARG_INT)
      {
        if(!(val == ((const char *)NULL)))
        {
          if(!(stop_char == ((char *)NULL)))
            tmp_if_expr_4 = (signed int)*stop_char == 0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_4 = (_Bool)0;
          if(!tmp_if_expr_4)
          {
            fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
            return 1;
          }

        }

      }

      if((signed int)arg_type == ARG_NO)
        goto __CPROVER_DUMP_L27;

      if(!(orig_field == ((char **)NULL)) && !(value == ((char *)NULL)))
      {
        if(!(no_free == 0))
          *orig_field = value;

        else
        {
          if(!(*orig_field == ((char *)NULL)))
            free((void *)*orig_field);

          *orig_field=gengetopt_strdup(value);
        }
      }


    __CPROVER_DUMP_L27:
      ;
      return 0;
    }
  }
}

// update_file
// file file.c line 95
char * update_file(struct anonymous_37 *tf)
{
  signed int rval;
  struct timeval now;
  char *bp;
  gettimeofday(&now, (struct timezone *)(void *)0);
  float return_value_timediff_1;
  return_value_timediff_1=timediff(&now, &tf->last_read);
  if(return_value_timediff_1 > tf->thresh)
  {
    bp = tf->buffer;
    rval=slurpfile(tf->name, &bp, (signed int)tf->buffersize);
    if(rval == -1)
      err_msg("update_file() got an error from slurpfile() reading %s", tf->name);

    else
    {
      tf->last_read = now;
      if(tf->buffer == ((char *)NULL))
      {
        tf->buffer = bp;
        if(!(tf->buffersize >= (unsigned long int)rval))
          tf->buffersize = ((unsigned long int)rval / tf->buffersize + (unsigned long int)1) * tf->buffersize;

      }

    }
  }

  return tf->buffer;
}

// update_pidfile
// file ../lib/update_pidfile.h line 4
void update_pidfile(char *pidfile)
{
  signed long int p;
  signed int pid;
  unsigned int prev_umask;
  struct _IO_FILE *file;
  file=fopen(pidfile, "r");
  signed int return_value_getpgid_1;
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    signed int return_value_fscanf_2;
    return_value_fscanf_2=fscanf(file, "%ld", &p);
    if(return_value_fscanf_2 == 1)
    {
      pid = (signed int)p;
      if(!(pid == 0))
      {
        return_value_getpgid_1=getpgid(pid);
        if(return_value_getpgid_1 >= 0)
        {
          err_msg("daemon already running: %s pid %ld\n", pidfile, p);
          exit(1);
        }

      }

    }

    fclose(file);
  }

  prev_umask=umask((unsigned int)0112);
  unlink(pidfile);
  file=fopen(pidfile, "w");
  if(file == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    err_msg("Error writing pidfile '%s' -- %s\n", pidfile, return_value_strerror_4);
    exit(1);
  }

  signed int return_value_getpid_5;
  return_value_getpid_5=getpid();
  fprintf(file, "%ld\n", (signed long int)return_value_getpid_5);
  fclose(file);
  umask(prev_umask);
}

// write_data_to_carbon
// file export_helpers.h line 25
signed int write_data_to_carbon(const char *source, const char *host, const char *metric, const char *sum, unsigned int process_time)
{
  signed int hostlen;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(host);
  hostlen = (signed int)return_value_strlen_1;
  const signed long int hostlen_array_size0 = (signed long int)(hostlen + 1);
  char hostcp[hostlen_array_size0];
  signed int sourcelen;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(source);
  sourcelen = (signed int)return_value_strlen_2;
  const signed long int sourcelen_array_size0 = (signed long int)(sourcelen + 1);
  char sourcecp[sourcelen_array_size0];
  signed int metriclen;
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(metric);
  metriclen = (signed int)return_value_strlen_3;
  const signed long int metriclen_array_size0 = (signed long int)(metriclen + 1);
  char metriccp[metriclen_array_size0];
  char s_process_time[15l];
  char graphite_msg[4097l];
  signed int i;
  signed long int return_value_time_4;
  if(process_time == 0u)
  {
    return_value_time_4=time(((signed long int *)NULL));
    process_time = (unsigned int)return_value_time_4;
  }

  sprintf(s_process_time, "%u", process_time);
  unsigned long int return_value_strlen_5;
  if(!(gmetad_config.graphite_prefix == ((char *)NULL)))
  {
    return_value_strlen_5=strlen(gmetad_config.graphite_prefix);
    if(return_value_strlen_5 >= 2ul)
      strncpy(graphite_msg, gmetad_config.graphite_prefix, (unsigned long int)4096);

  }

  if(!(source == ((const char *)NULL)))
  {
    i = 0;
    for( ; sourcelen >= i; i = i + 1)
      if((signed int)source[(signed long int)i] == 32)
        sourcecp[(signed long int)i] = (char)95;

      else
        sourcecp[(signed long int)i] = source[(signed long int)i];
    sourcecp[(signed long int)(i + 1)] = (char)0;
  }

  signed int return_value_tolower_7;
  if(!(host == ((const char *)NULL)))
  {
    i = 0;
    for( ; hostlen >= i; i = i + 1)
      if((signed int)host[(signed long int)i] == 46)
        hostcp[(signed long int)i] = (char)95;

      else
        hostcp[(signed long int)i] = host[(signed long int)i];
    hostcp[(signed long int)(i + 1)] = (char)0;
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(graphite_msg);
    i = (signed int)return_value_strlen_6;
    if(gmetad_config.case_sensitive_hostnames == 0)
      for( ; !((signed int)graphite_msg[(signed long int)i] == 0); i = i + 1)
      {
        return_value_tolower_7=tolower((signed int)graphite_msg[(signed long int)i]);
        graphite_msg[(signed long int)i] = (char)return_value_tolower_7;
      }

  }

  _Bool tmp_if_expr_21;
  unsigned long int return_value_strlen_20;
  if(!(gmetad_config.graphite_path == ((char *)NULL)))
  {
    return_value_strlen_20=strlen(gmetad_config.graphite_path);
    tmp_if_expr_21 = return_value_strlen_20 > (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_21 = (_Bool)0;
  _Bool tmp_if_expr_11;
  unsigned long int return_value_strlen_10;
  _Bool tmp_if_expr_15;
  unsigned long int return_value_strlen_14;
  if(tmp_if_expr_21)
  {
    struct anonymous_1 patrn[4l];
    char graphite_path_cp[4097l];
    char *graphite_path_ptr;
    strncpy(graphite_path_cp, gmetad_config.graphite_path, (unsigned long int)4096);
    patrn[(signed long int)0].torepl = "%s";
    patrn[(signed long int)0].replwith = sourcecp;
    patrn[(signed long int)1].torepl = "%h";
    patrn[(signed long int)1].replwith = hostcp;
    patrn[(signed long int)2].torepl = "%m";
    patrn[(signed long int)2].replwith = metriccp;
    patrn[(signed long int)3].torepl = ((char *)NULL);
    graphite_path_ptr=path_macro_replace(graphite_path_cp, patrn);
    strncpy(graphite_path_cp, graphite_path_ptr, (unsigned long int)4096);
    free((void *)graphite_path_ptr);
    if(!(gmetad_config.graphite_prefix == ((char *)NULL)))
    {
      return_value_strlen_10=strlen(gmetad_config.graphite_prefix);
      tmp_if_expr_11 = return_value_strlen_10 > (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_11 = (_Bool)0;
    if(tmp_if_expr_11)
    {
      unsigned long int return_value_strlen_8;
      return_value_strlen_8=strlen(graphite_msg);
      strncat(graphite_msg, ".", (unsigned long int)4096 - return_value_strlen_8);
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(graphite_msg);
      strncat(graphite_msg, graphite_path_cp, (unsigned long int)4096 - return_value_strlen_9);
    }

    else
      strncpy(graphite_msg, sourcecp, (unsigned long int)4096);
  }

  else
  {
    if(!(gmetad_config.graphite_prefix == ((char *)NULL)))
    {
      return_value_strlen_14=strlen(gmetad_config.graphite_prefix);
      tmp_if_expr_15 = return_value_strlen_14 > (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_15 = (_Bool)0;
    if(tmp_if_expr_15)
    {
      unsigned long int return_value_strlen_12;
      return_value_strlen_12=strlen(graphite_msg);
      strncat(graphite_msg, ".", (unsigned long int)4096 - return_value_strlen_12);
      unsigned long int return_value_strlen_13;
      return_value_strlen_13=strlen(graphite_msg);
      strncat(graphite_msg, sourcecp, (unsigned long int)4096 - return_value_strlen_13);
    }

    else
      strncpy(graphite_msg, sourcecp, (unsigned long int)4096);
    unsigned long int return_value_strlen_16;
    return_value_strlen_16=strlen(graphite_msg);
    strncat(graphite_msg, ".", (unsigned long int)4096 - return_value_strlen_16);
    unsigned long int return_value_strlen_17;
    return_value_strlen_17=strlen(graphite_msg);
    strncat(graphite_msg, hostcp, (unsigned long int)4096 - return_value_strlen_17);
    unsigned long int return_value_strlen_18;
    return_value_strlen_18=strlen(graphite_msg);
    strncat(graphite_msg, ".", (unsigned long int)4096 - return_value_strlen_18);
    unsigned long int return_value_strlen_19;
    return_value_strlen_19=strlen(graphite_msg);
    strncat(graphite_msg, metric, (unsigned long int)4096 - return_value_strlen_19);
  }
  unsigned long int return_value_strlen_22;
  return_value_strlen_22=strlen(graphite_msg);
  strncat(graphite_msg, " ", (unsigned long int)4096 - return_value_strlen_22);
  unsigned long int return_value_strlen_23;
  return_value_strlen_23=strlen(graphite_msg);
  strncat(graphite_msg, sum, (unsigned long int)4096 - return_value_strlen_23);
  unsigned long int return_value_strlen_24;
  return_value_strlen_24=strlen(graphite_msg);
  strncat(graphite_msg, " ", (unsigned long int)4096 - return_value_strlen_24);
  unsigned long int return_value_strlen_25;
  return_value_strlen_25=strlen(graphite_msg);
  strncat(graphite_msg, s_process_time, (unsigned long int)4096 - return_value_strlen_25);
  unsigned long int return_value_strlen_26;
  return_value_strlen_26=strlen(graphite_msg);
  strncat(graphite_msg, "\n", (unsigned long int)4096 - return_value_strlen_26);
  unsigned long int return_value_strlen_27;
  return_value_strlen_27=strlen(graphite_msg);
  graphite_msg[(signed long int)(return_value_strlen_27 + (unsigned long int)1)] = (char)0;
  signed int return_value_push_data_to_carbon_28;
  return_value_push_data_to_carbon_28=push_data_to_carbon(graphite_msg);
  return return_value_push_data_to_carbon_28;
}

// write_data_to_rrd
// file rrd_helpers.h line 4
signed int write_data_to_rrd(const char *source, const char *host, const char *metric, const char *sum, const char *num, unsigned int step, unsigned int process_time, enum ganglia_slope slope)
{
  char rrd[4097l];
  char *summary_dir = "__SummaryInfo__";
  signed int i;
  strncpy(rrd, gmetad_config.rrd_rootdir, (unsigned long int)4096);
  if(!(source == ((const char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(rrd);
    strncat(rrd, "/", (unsigned long int)4096 - return_value_strlen_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(rrd);
    strncat(rrd, source, (unsigned long int)4096 - return_value_strlen_2);
    my_mkdir(rrd);
  }

  signed int return_value_tolower_6;
  if(!(host == ((const char *)NULL)))
  {
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(rrd);
    strncat(rrd, "/", (unsigned long int)4096 - return_value_strlen_3);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(rrd);
    i = (signed int)return_value_strlen_4;
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(rrd);
    strncat(rrd, host, (unsigned long int)4096 - return_value_strlen_5);
    if(gmetad_config.case_sensitive_hostnames == 0)
      for( ; !((signed int)rrd[(signed long int)i] == 0); i = i + 1)
      {
        return_value_tolower_6=tolower((signed int)rrd[(signed long int)i]);
        rrd[(signed long int)i] = (char)return_value_tolower_6;
      }

    my_mkdir(rrd);
  }

  else
  {
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(rrd);
    strncat(rrd, "/", (unsigned long int)4096 - return_value_strlen_7);
    unsigned long int return_value_strlen_8;
    return_value_strlen_8=strlen(rrd);
    strncat(rrd, summary_dir, (unsigned long int)4096 - return_value_strlen_8);
    my_mkdir(rrd);
  }
  unsigned long int return_value_strlen_9;
  return_value_strlen_9=strlen(rrd);
  strncat(rrd, "/", (unsigned long int)4096 - return_value_strlen_9);
  unsigned long int return_value_strlen_10;
  return_value_strlen_10=strlen(rrd);
  strncat(rrd, metric, (unsigned long int)4096 - return_value_strlen_10);
  unsigned long int return_value_strlen_11;
  return_value_strlen_11=strlen(rrd);
  strncat(rrd, ".rrd", (unsigned long int)4096 - return_value_strlen_11);
  signed int return_value_push_data_to_rrd_12;
  return_value_push_data_to_rrd_12=push_data_to_rrd(rrd, sum, num, step, process_time, slope);
  return return_value_push_data_to_rrd_12;
}

// write_into_file
// file cmdline.c line 187
static void write_into_file(struct _IO_FILE *outfile, const char *opt, const char *arg, const char **values)
{
  (void)values;
  if(!(arg == ((const char *)NULL)))
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);

  else
    fprintf(outfile, "%s\n", opt);
}

// write_root_summary
// file gmetad.c line 224
static signed int write_root_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  char *write_root_summary__1__name;
  char *type;
  char sum[256l];
  char num[256l];
  struct anonymous_9 *metric;
  signed int rc;
  struct type_tag *tt;
  struct _llist_entry *le;
  write_root_summary__1__name = (char *)key->data;
  metric = (struct anonymous_9 *)val->data;
  type=getfield(metric->strings, metric->type);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(type);
  tt=in_type_list(type, (unsigned int)return_value_strlen_1);
  _Bool tmp_if_expr_2;
  if(tt == ((struct type_tag *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)tt->type == STRING ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return 0;

  else
  {
    signed int return_value_llist_search_3;
    return_value_llist_search_3=llist_search(&gmetad_config.unsummarized_metrics, (void *)key->data, llist_strncmp, &le);
    if(return_value_llist_search_3 == 0)
      return 0;

    else
    {
      sprintf(sum, "%.5f", metric->val.d);
      sprintf(num, "%u", metric->num);
      if(gmetad_config.write_rrds == 0)
        return 0;

      else
      {
        debug_msg("Writing Root Summary data for metric %s", write_root_summary__1__name);
        rc=write_data_to_rrd((const char *)(void *)0, (const char *)(void *)0, write_root_summary__1__name, sum, num, (unsigned int)15, (unsigned int)0, (enum ganglia_slope)metric->slope);
        if(!(rc == 0))
          err_msg("Unable to write meta data for metric %s to RRD", write_root_summary__1__name);

        return 0;
      }
    }
  }
}

// xdr_Ganglia_25metric
// file gm_protocol_xdr.c line 318
extern signed int xdr_Ganglia_25metric(struct XDR *xdrs, struct Ganglia_25metric *objp)
{
  signed int *buf;
  signed int return_value_xdr_int_1;
  return_value_xdr_int_1=xdr_int(xdrs, &objp->key);
  if(return_value_xdr_int_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->name, (unsigned int)16);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_int_3;
      return_value_xdr_int_3=xdr_int(xdrs, &objp->tmax);
      if(return_value_xdr_int_3 == 0)
        return 0;

      else
      {
        signed int return_value_xdr_Ganglia_value_types_4;
        return_value_xdr_Ganglia_value_types_4=xdr_Ganglia_value_types(xdrs, &objp->type);
        if(return_value_xdr_Ganglia_value_types_4 == 0)
          return 0;

        else
        {
          signed int return_value_xdr_string_5;
          return_value_xdr_string_5=xdr_string(xdrs, &objp->units, (unsigned int)32);
          if(return_value_xdr_string_5 == 0)
            return 0;

          else
          {
            signed int return_value_xdr_string_6;
            return_value_xdr_string_6=xdr_string(xdrs, &objp->slope, (unsigned int)32);
            if(return_value_xdr_string_6 == 0)
              return 0;

            else
            {
              signed int return_value_xdr_string_7;
              return_value_xdr_string_7=xdr_string(xdrs, &objp->fmt, (unsigned int)32);
              if(return_value_xdr_string_7 == 0)
                return 0;

              else
              {
                signed int return_value_xdr_int_8;
                return_value_xdr_int_8=xdr_int(xdrs, &objp->msg_size);
                if(return_value_xdr_int_8 == 0)
                  return 0;

                else
                {
                  signed int return_value_xdr_string_9;
                  return_value_xdr_string_9=xdr_string(xdrs, &objp->desc, (unsigned int)128);
                  if(return_value_xdr_string_9 == 0)
                    return 0;

                  else
                  {
                    signed int return_value_xdr_pointer_10;
                    return_value_xdr_pointer_10=xdr_pointer(xdrs, (char **)&objp->metadata, (unsigned int)sizeof(signed int) /*4ul*/ , (signed int (*)(struct XDR *, void *, ...))xdr_int);
                    if(return_value_xdr_pointer_10 == 0)
                      return 0;

                    else
                      return 1;
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

// xdr_Ganglia_extra_data
// file gm_protocol_xdr.c line 22
extern signed int xdr_Ganglia_extra_data(struct XDR *xdrs, struct Ganglia_extra_data *objp)
{
  signed int *buf;
  signed int return_value_xdr_string_1;
  return_value_xdr_string_1=xdr_string(xdrs, &objp->name, (unsigned int)~0);
  if(return_value_xdr_string_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->data, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
      return 1;
  }
}

// xdr_Ganglia_gmetric_double
// file gm_protocol_xdr.c line 230
extern signed int xdr_Ganglia_gmetric_double(struct XDR *xdrs, struct Ganglia_gmetric_double *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->fmt, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_double_3;
      return_value_xdr_double_3=xdr_double(xdrs, &objp->d);
      if(return_value_xdr_double_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_gmetric_float
// file gm_protocol_xdr.c line 216
extern signed int xdr_Ganglia_gmetric_float(struct XDR *xdrs, struct Ganglia_gmetric_float *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->fmt, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_float_3;
      return_value_xdr_float_3=xdr_float(xdrs, &objp->f);
      if(return_value_xdr_float_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_gmetric_int
// file gm_protocol_xdr.c line 174
extern signed int xdr_Ganglia_gmetric_int(struct XDR *xdrs, struct Ganglia_gmetric_int *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->fmt, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_int_3;
      return_value_xdr_int_3=xdr_int(xdrs, &objp->si);
      if(return_value_xdr_int_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_gmetric_short
// file gm_protocol_xdr.c line 160
extern signed int xdr_Ganglia_gmetric_short(struct XDR *xdrs, struct Ganglia_gmetric_short *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->fmt, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_short_3;
      return_value_xdr_short_3=xdr_short(xdrs, &objp->ss);
      if(return_value_xdr_short_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_gmetric_string
// file gm_protocol_xdr.c line 202
extern signed int xdr_Ganglia_gmetric_string(struct XDR *xdrs, struct Ganglia_gmetric_string *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->fmt, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_string_3;
      return_value_xdr_string_3=xdr_string(xdrs, &objp->str, (unsigned int)~0);
      if(return_value_xdr_string_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_gmetric_uint
// file gm_protocol_xdr.c line 188
extern signed int xdr_Ganglia_gmetric_uint(struct XDR *xdrs, struct Ganglia_gmetric_uint *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->fmt, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_u_int_3;
      return_value_xdr_u_int_3=xdr_u_int(xdrs, &objp->ui);
      if(return_value_xdr_u_int_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_gmetric_ushort
// file gm_protocol_xdr.c line 146
extern signed int xdr_Ganglia_gmetric_ushort(struct XDR *xdrs, struct Ganglia_gmetric_ushort *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->fmt, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_u_short_3;
      return_value_xdr_u_short_3=xdr_u_short(xdrs, &objp->us);
      if(return_value_xdr_u_short_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_metadata_message
// file gm_protocol_xdr.c line 34
extern signed int xdr_Ganglia_metadata_message(struct XDR *xdrs, struct Ganglia_metadata_message *objp)
{
  signed int *buf;
  signed int *tmp_post_7;
  signed int *tmp_post_9;
  signed int *tmp_post_11;
  signed int *tmp_post_20;
  signed int *tmp_post_22;
  signed int *tmp_post_24;
  if((signed int)xdrs->x_op == XDR_ENCODE)
  {
    signed int return_value_xdr_string_1;
    return_value_xdr_string_1=xdr_string(xdrs, &objp->type, (unsigned int)~0);
    if(return_value_xdr_string_1 == 0)
      return 0;

    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->name, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    signed int return_value_xdr_string_3;
    return_value_xdr_string_3=xdr_string(xdrs, &objp->units, (unsigned int)~0);
    if(return_value_xdr_string_3 == 0)
      return 0;

    buf=xdrs->x_ops->x_inline(xdrs, (unsigned int)(3 * 4));
    if(buf == ((signed int *)NULL))
    {
      signed int return_value_xdr_u_int_4;
      return_value_xdr_u_int_4=xdr_u_int(xdrs, &objp->slope);
      if(return_value_xdr_u_int_4 == 0)
        return 0;

      signed int return_value_xdr_u_int_5;
      return_value_xdr_u_int_5=xdr_u_int(xdrs, &objp->tmax);
      if(return_value_xdr_u_int_5 == 0)
        return 0;

      signed int return_value_xdr_u_int_6;
      return_value_xdr_u_int_6=xdr_u_int(xdrs, &objp->dmax);
      if(return_value_xdr_u_int_6 == 0)
        return 0;

    }

    else
    {
      tmp_post_7 = buf;
      buf = buf + 1l;
      unsigned int return_value_htonl_8;
      return_value_htonl_8=htonl((unsigned int)(signed long int)objp->slope);
      *tmp_post_7 = (signed int)return_value_htonl_8;
      tmp_post_9 = buf;
      buf = buf + 1l;
      unsigned int return_value_htonl_10;
      return_value_htonl_10=htonl((unsigned int)(signed long int)objp->tmax);
      *tmp_post_9 = (signed int)return_value_htonl_10;
      tmp_post_11 = buf;
      buf = buf + 1l;
      unsigned int return_value_htonl_12;
      return_value_htonl_12=htonl((unsigned int)(signed long int)objp->dmax);
      *tmp_post_11 = (signed int)return_value_htonl_12;
    }
    signed int return_value_xdr_array_13;
    return_value_xdr_array_13=xdr_array(xdrs, (char **)&objp->metadata.metadata_val, (unsigned int *)&objp->metadata.metadata_len, (unsigned int)~0, (unsigned int)sizeof(struct Ganglia_extra_data) /*16ul*/ , (signed int (*)(struct XDR *, void *, ...))xdr_Ganglia_extra_data);
    if(return_value_xdr_array_13 == 0)
      return 0;

    return 1;
  }

  else
    if((signed int)xdrs->x_op == XDR_DECODE)
    {
      signed int return_value_xdr_string_14;
      return_value_xdr_string_14=xdr_string(xdrs, &objp->type, (unsigned int)~0);
      if(return_value_xdr_string_14 == 0)
        return 0;

      signed int return_value_xdr_string_15;
      return_value_xdr_string_15=xdr_string(xdrs, &objp->name, (unsigned int)~0);
      if(return_value_xdr_string_15 == 0)
        return 0;

      signed int return_value_xdr_string_16;
      return_value_xdr_string_16=xdr_string(xdrs, &objp->units, (unsigned int)~0);
      if(return_value_xdr_string_16 == 0)
        return 0;

      buf=xdrs->x_ops->x_inline(xdrs, (unsigned int)(3 * 4));
      if(buf == ((signed int *)NULL))
      {
        signed int return_value_xdr_u_int_17;
        return_value_xdr_u_int_17=xdr_u_int(xdrs, &objp->slope);
        if(return_value_xdr_u_int_17 == 0)
          return 0;

        signed int return_value_xdr_u_int_18;
        return_value_xdr_u_int_18=xdr_u_int(xdrs, &objp->tmax);
        if(return_value_xdr_u_int_18 == 0)
          return 0;

        signed int return_value_xdr_u_int_19;
        return_value_xdr_u_int_19=xdr_u_int(xdrs, &objp->dmax);
        if(return_value_xdr_u_int_19 == 0)
          return 0;

      }

      else
      {
        tmp_post_20 = buf;
        buf = buf + 1l;
        unsigned int return_value_ntohl_21;
        return_value_ntohl_21=ntohl((unsigned int)*tmp_post_20);
        objp->slope = (unsigned int)(unsigned long int)(signed long int)(unsigned int)(signed int)return_value_ntohl_21;
        tmp_post_22 = buf;
        buf = buf + 1l;
        unsigned int return_value_ntohl_23;
        return_value_ntohl_23=ntohl((unsigned int)*tmp_post_22);
        objp->tmax = (unsigned int)(unsigned long int)(signed long int)(unsigned int)(signed int)return_value_ntohl_23;
        tmp_post_24 = buf;
        buf = buf + 1l;
        unsigned int return_value_ntohl_25;
        return_value_ntohl_25=ntohl((unsigned int)*tmp_post_24);
        objp->dmax = (unsigned int)(unsigned long int)(signed long int)(unsigned int)(signed int)return_value_ntohl_25;
      }
      signed int return_value_xdr_array_26;
      return_value_xdr_array_26=xdr_array(xdrs, (char **)&objp->metadata.metadata_val, (unsigned int *)&objp->metadata.metadata_len, (unsigned int)~0, (unsigned int)sizeof(struct Ganglia_extra_data) /*16ul*/ , (signed int (*)(struct XDR *, void *, ...))xdr_Ganglia_extra_data);
      if(return_value_xdr_array_26 == 0)
        return 0;

      return 1;
    }

  signed int return_value_xdr_string_27;
  return_value_xdr_string_27=xdr_string(xdrs, &objp->type, (unsigned int)~0);
  if(return_value_xdr_string_27 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_28;
    return_value_xdr_string_28=xdr_string(xdrs, &objp->name, (unsigned int)~0);
    if(return_value_xdr_string_28 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_string_29;
      return_value_xdr_string_29=xdr_string(xdrs, &objp->units, (unsigned int)~0);
      if(return_value_xdr_string_29 == 0)
        return 0;

      else
      {
        signed int return_value_xdr_u_int_30;
        return_value_xdr_u_int_30=xdr_u_int(xdrs, &objp->slope);
        if(return_value_xdr_u_int_30 == 0)
          return 0;

        else
        {
          signed int return_value_xdr_u_int_31;
          return_value_xdr_u_int_31=xdr_u_int(xdrs, &objp->tmax);
          if(return_value_xdr_u_int_31 == 0)
            return 0;

          else
          {
            signed int return_value_xdr_u_int_32;
            return_value_xdr_u_int_32=xdr_u_int(xdrs, &objp->dmax);
            if(return_value_xdr_u_int_32 == 0)
              return 0;

            else
            {
              signed int return_value_xdr_array_33;
              return_value_xdr_array_33=xdr_array(xdrs, (char **)&objp->metadata.metadata_val, (unsigned int *)&objp->metadata.metadata_len, (unsigned int)~0, (unsigned int)sizeof(struct Ganglia_extra_data) /*16ul*/ , (signed int (*)(struct XDR *, void *, ...))xdr_Ganglia_extra_data);
              if(return_value_xdr_array_33 == 0)
                return 0;

              else
                return 1;
            }
          }
        }
      }
    }
  }
}

// xdr_Ganglia_metadata_msg
// file gm_protocol_xdr.c line 254
extern signed int xdr_Ganglia_metadata_msg(struct XDR *xdrs, struct Ganglia_metadata_msg *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_msg_formats_1;
  return_value_xdr_Ganglia_msg_formats_1=xdr_Ganglia_msg_formats(xdrs, &objp->id);
  signed int return_value_xdr_Ganglia_metadatadef_2;
  signed int return_value_xdr_Ganglia_metadatareq_3;
  if(return_value_xdr_Ganglia_msg_formats_1 == 0)
    return 0;

  else
  {
    switch((signed int)objp->id)
    {
      case gmetadata_full:
      {
        return_value_xdr_Ganglia_metadatadef_2=xdr_Ganglia_metadatadef(xdrs, &objp->Ganglia_metadata_msg_u.gfull);
        if(return_value_xdr_Ganglia_metadatadef_2 == 0)
          return 0;

        break;
      }
      case gmetadata_request:
      {
        return_value_xdr_Ganglia_metadatareq_3=xdr_Ganglia_metadatareq(xdrs, &objp->Ganglia_metadata_msg_u.grequest);
        if(return_value_xdr_Ganglia_metadatareq_3 == 0)
          return 0;

        break;
      }
      default:
        ;
    }
    return 1;
  }
}

// xdr_Ganglia_metadatadef
// file gm_protocol_xdr.c line 124
extern signed int xdr_Ganglia_metadatadef(struct XDR *xdrs, struct Ganglia_metadatadef *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_Ganglia_metadata_message_2;
    return_value_xdr_Ganglia_metadata_message_2=xdr_Ganglia_metadata_message(xdrs, &objp->metric);
    if(return_value_xdr_Ganglia_metadata_message_2 == 0)
      return 0;

    else
      return 1;
  }
}

// xdr_Ganglia_metadatareq
// file gm_protocol_xdr.c line 136
extern signed int xdr_Ganglia_metadatareq(struct XDR *xdrs, struct Ganglia_metadatareq *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_metric_id_1;
  return_value_xdr_Ganglia_metric_id_1=xdr_Ganglia_metric_id(xdrs, &objp->metric_id);
  if(return_value_xdr_Ganglia_metric_id_1 == 0)
    return 0;

  else
    return 1;
}

// xdr_Ganglia_metric_id
// file gm_protocol_xdr.c line 110
extern signed int xdr_Ganglia_metric_id(struct XDR *xdrs, struct Ganglia_metric_id *objp)
{
  signed int *buf;
  signed int return_value_xdr_string_1;
  return_value_xdr_string_1=xdr_string(xdrs, &objp->host, (unsigned int)~0);
  if(return_value_xdr_string_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_string_2;
    return_value_xdr_string_2=xdr_string(xdrs, &objp->name, (unsigned int)~0);
    if(return_value_xdr_string_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_bool_3;
      return_value_xdr_bool_3=xdr_bool(xdrs, &objp->spoof);
      if(return_value_xdr_bool_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// xdr_Ganglia_msg_formats
// file gm_protocol_xdr.c line 244
extern signed int xdr_Ganglia_msg_formats(struct XDR *xdrs, enum Ganglia_msg_formats *objp)
{
  signed int *buf;
  signed int return_value_xdr_enum_1;
  return_value_xdr_enum_1=xdr_enum(xdrs, (signed int *)objp);
  if(return_value_xdr_enum_1 == 0)
    return 0;

  else
    return 1;
}

// xdr_Ganglia_value_msg
// file gm_protocol_xdr.c line 276
extern signed int xdr_Ganglia_value_msg(struct XDR *xdrs, struct Ganglia_value_msg *objp)
{
  signed int *buf;
  signed int return_value_xdr_Ganglia_msg_formats_1;
  return_value_xdr_Ganglia_msg_formats_1=xdr_Ganglia_msg_formats(xdrs, &objp->id);
  signed int return_value_xdr_Ganglia_gmetric_ushort_2;
  signed int return_value_xdr_Ganglia_gmetric_short_3;
  signed int return_value_xdr_Ganglia_gmetric_int_4;
  signed int return_value_xdr_Ganglia_gmetric_uint_5;
  signed int return_value_xdr_Ganglia_gmetric_string_6;
  signed int return_value_xdr_Ganglia_gmetric_float_7;
  signed int return_value_xdr_Ganglia_gmetric_double_8;
  if(return_value_xdr_Ganglia_msg_formats_1 == 0)
    return 0;

  else
  {
    switch((signed int)objp->id)
    {
      case gmetric_ushort:
      {
        return_value_xdr_Ganglia_gmetric_ushort_2=xdr_Ganglia_gmetric_ushort(xdrs, &objp->Ganglia_value_msg_u.gu_short);
        if(return_value_xdr_Ganglia_gmetric_ushort_2 == 0)
          return 0;

        break;
      }
      case gmetric_short:
      {
        return_value_xdr_Ganglia_gmetric_short_3=xdr_Ganglia_gmetric_short(xdrs, &objp->Ganglia_value_msg_u.gs_short);
        if(return_value_xdr_Ganglia_gmetric_short_3 == 0)
          return 0;

        break;
      }
      case gmetric_int:
      {
        return_value_xdr_Ganglia_gmetric_int_4=xdr_Ganglia_gmetric_int(xdrs, &objp->Ganglia_value_msg_u.gs_int);
        if(return_value_xdr_Ganglia_gmetric_int_4 == 0)
          return 0;

        break;
      }
      case gmetric_uint:
      {
        return_value_xdr_Ganglia_gmetric_uint_5=xdr_Ganglia_gmetric_uint(xdrs, &objp->Ganglia_value_msg_u.gu_int);
        if(return_value_xdr_Ganglia_gmetric_uint_5 == 0)
          return 0;

        break;
      }
      case gmetric_string:
      {
        return_value_xdr_Ganglia_gmetric_string_6=xdr_Ganglia_gmetric_string(xdrs, &objp->Ganglia_value_msg_u.gstr);
        if(return_value_xdr_Ganglia_gmetric_string_6 == 0)
          return 0;

        break;
      }
      case gmetric_float:
      {
        return_value_xdr_Ganglia_gmetric_float_7=xdr_Ganglia_gmetric_float(xdrs, &objp->Ganglia_value_msg_u.gf);
        if(return_value_xdr_Ganglia_gmetric_float_7 == 0)
          return 0;

        break;
      }
      case gmetric_double:
      {
        return_value_xdr_Ganglia_gmetric_double_8=xdr_Ganglia_gmetric_double(xdrs, &objp->Ganglia_value_msg_u.gd);
        if(return_value_xdr_Ganglia_gmetric_double_8 == 0)
          return 0;

        break;
      }
      default:
        ;
    }
    return 1;
  }
}

// xdr_Ganglia_value_types
// file gm_protocol_xdr.c line 12
extern signed int xdr_Ganglia_value_types(struct XDR *xdrs, enum Ganglia_value_types *objp)
{
  signed int *buf;
  signed int return_value_xdr_enum_1;
  return_value_xdr_enum_1=xdr_enum(xdrs, (signed int *)objp);
  if(return_value_xdr_enum_1 == 0)
    return 0;

  else
    return 1;
}

// xml_print
// file server.c line 32
static inline signed int xml_print(struct anonymous_16 *client, const char *fmt, ...)
{
  signed int rval;
  signed int len;
  void **ap;
  char buf[4096l];
  ap = (void **)&fmt;
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  if(client->valid == 0u)
  {
    ap = ((void **)NULL);
    return 1;
  }

  else
  {
    vsnprintf(buf, sizeof(char [4096l]) /*4096ul*/ , fmt, ap);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(buf);
    len = (signed int)return_value_strlen_1;
    do
    {
      signed long int return_value_write_4;
      return_value_write_4=write(client->fd, (const void *)buf, (unsigned long int)len);
      rval = (signed int)return_value_write_4;
      if(!(rval >= 0))
      {
        return_value___errno_location_2=__errno_location();
        tmp_if_expr_3 = *return_value___errno_location_2 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
    }
    while(tmp_if_expr_3);
    if(!(rval == len) && !(rval >= 0))
    {
      ap = ((void **)NULL);
      client->valid = (unsigned int)0;
      return 1;
    }

    else
    {
      ap = ((void **)NULL);
      return 0;
    }
  }
}

// zero_out_summary
// file gmetad.c line 121
signed int zero_out_summary(struct anonymous_7 *key, struct anonymous_7 *val, void *arg)
{
  struct anonymous_9 *metric = (struct anonymous_9 *)val->data;
  memset((void *)&metric->val, 0, sizeof(union anonymous_17) /*8ul*/ );
  metric->num = (unsigned int)0;
  return 0;
}

