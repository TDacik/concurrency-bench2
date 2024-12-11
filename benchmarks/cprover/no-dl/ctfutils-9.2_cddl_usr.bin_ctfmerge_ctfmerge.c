// #anon_enum$CTF_PREC_BASE=0$CTF_PREC_POINTER=1$CTF_PREC_ARRAY=2$CTF_PREC_FUNCTION=3$CTF_PREC_MAX=4
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 111
enum anonymous$16 { CTF_PREC_BASE=0, CTF_PREC_POINTER=1, CTF_PREC_ARRAY=2, CTF_PREC_FUNCTION=3, CTF_PREC_MAX=4 };

// #anon_enum$ELF_C_NULL=0$ELF_C_CLR=1$ELF_C_FDDONE=2$ELF_C_FDREAD=3$ELF_C_RDWR=4$ELF_C_READ=5$ELF_C_SET=6$ELF_C_WRITE=7$ELF_C_NUM=8
// file /usr/include/libelf.h line 86
enum anonymous$2 { ELF_C_NULL=0, ELF_C_CLR=1, ELF_C_FDDONE=2, ELF_C_FDREAD=3, ELF_C_RDWR=4, ELF_C_READ=5, ELF_C_SET=6, ELF_C_WRITE=7, ELF_C_NUM=8 };

// #anon_enum$ELF_K_NONE=0$ELF_K_AR=1$ELF_K_COFF=2$ELF_K_ELF=3$ELF_K_NUM=4
// file /usr/include/libelf.h line 42
enum anonymous$1 { ELF_K_NONE=0, ELF_K_AR=1, ELF_K_COFF=2, ELF_K_ELF=3, ELF_K_NUM=4 };

// #anon_enum$ELF_T_ADDR=0$ELF_T_BYTE=1$ELF_T_CAP=2$ELF_T_DYN=3$ELF_T_EHDR=4$ELF_T_HALF=5$ELF_T_LWORD=6$ELF_T_MOVE=7$ELF_T_MOVEP=8$ELF_T_NOTE=9$ELF_T_OFF=10$ELF_T_PHDR=11$ELF_T_REL=12$ELF_T_RELA=13$ELF_T_SHDR=14$ELF_T_SWORD=15$ELF_T_SXWORD=16$ELF_T_SYMINFO=17$ELF_T_SYM=18$ELF_T_VDEF=19$ELF_T_VNEED=20$ELF_T_WORD=21$ELF_T_XWORD=22$ELF_T_GNUHASH=23$ELF_T_NUM=24
// file /usr/include/libelf.h line 54
enum anonymous { ELF_T_ADDR=0, ELF_T_BYTE=1, ELF_T_CAP=2, ELF_T_DYN=3, ELF_T_EHDR=4, ELF_T_HALF=5, ELF_T_LWORD=6, ELF_T_MOVE=7, ELF_T_MOVEP=8, ELF_T_NOTE=9, ELF_T_OFF=10, ELF_T_PHDR=11, ELF_T_REL=12, ELF_T_RELA=13, ELF_T_SHDR=14, ELF_T_SWORD=15, ELF_T_SXWORD=16, ELF_T_SYMINFO=17, ELF_T_SYM=18, ELF_T_VDEF=19, ELF_T_VNEED=20, ELF_T_WORD=21, ELF_T_XWORD=22, ELF_T_GNUHASH=23, ELF_T_NUM=24 };

// #anon_enum$INTR_INT=0$INTR_REAL=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 176
enum anonymous$13 { INTR_INT=0, INTR_REAL=1 };

// tag-#anon#ST[*{S32(*{U8}$U8$|*{U64}$U64$|*{cU8}$cU8$|U64)->S32}$S32(*{U8}$U8$|*{U64}$U64$|*{cU8}$cU8$|U64)->S32$'z_uncompress'||*{*{cS8}$cS8$(S32)->*{cS8}$cS8$}$*{cS8}$cS8$(S32)->*{cS8}$cS8$$'z_error'||*{V}$V$'z_dlp'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 52
struct anonymous$17;

// tag-#anon#ST[*{SYM#tag-_Elf_Data#}$SYM#tag-_Elf_Data#$'stqe_next'|]
// file /usr/include/libelf.h line 121
struct anonymous$0;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$20;

// tag-#anon#ST[ARR16{U8}$U8$'e_ident'||U16'e_type'||U16'e_machine'||U32'e_version'||U32'e_entry'||U32'e_phoff'||U32'e_shoff'||U32'e_flags'||U16'e_ehsize'||U16'e_phentsize'||U16'e_phnum'||U16'e_shentsize'||U16'e_shnum'||U16'e_shstrndx'|]
// file /usr/include/elf.h line 67
struct anonymous$18;

// tag-#anon#ST[ARR16{U8}$U8$'e_ident'||U16'e_type'||U16'e_machine'||U32'e_version'||U64'e_entry'||U64'e_phoff'||U64'e_shoff'||U32'e_flags'||U16'e_ehsize'||U16'e_phentsize'||U16'e_phnum'||U16'e_shentsize'||U16'e_shnum'||U16'e_shstrndx'|]
// file /usr/include/elf.h line 85
struct anonymous$8;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$22;

// tag-#anon#ST[S64'ar_date'||*{S8}$S8$'ar_name'||U32'ar_gid'||U32'ar_mode'||*{S8}$S8$'ar_rawname'||U64'ar_size'||U32'ar_uid'||U32'$pad0'|]
// file /usr/include/libelf.h line 128
struct anonymous$3;

// tag-#anon#ST[U32'p_type'||U32'p_flags'||U64'p_offset'||U64'p_vaddr'||U64'p_paddr'||U64'p_filesz'||U64'p_memsz'||U64'p_align'|]
// file /usr/include/elf.h line 554
struct anonymous$7;

// tag-#anon#ST[U32'sh_name'||U32'sh_type'||U32'sh_flags'||U32'sh_addr'||U32'sh_offset'||U32'sh_size'||U32'sh_link'||U32'sh_info'||U32'sh_addralign'||U32'sh_entsize'|]
// file /usr/include/elf.h line 273
struct anonymous$19;

// tag-#anon#ST[U32'sh_name'||U32'sh_type'||U64'sh_flags'||U64'sh_addr'||U64'sh_offset'||U64'sh_size'||U32'sh_link'||U32'sh_info'||U64'sh_addralign'||U64'sh_entsize'|]
// file /usr/include/elf.h line 287
struct anonymous$4;

// tag-#anon#ST[U32'st_name'||U32'st_value'||U32'st_size'||U8'st_info'||U8'st_other'||U16'st_shndx'|]
// file /usr/include/elf.h line 382
struct anonymous$24;

// tag-#anon#ST[U32'st_name'||U8'st_info'||U8'st_other'||U16'st_shndx'||U64'st_value'||U64'st_size'|]
// file /usr/include/elf.h line 392
struct anonymous$5;

// tag-#anon#UN[*{SYM#tag-intr#}$SYM#tag-intr#$'intr'||*{SYM#tag-tdesc#}$SYM#tag-tdesc#$'tdesc'||*{SYM#tag-ardef#}$SYM#tag-ardef#$'ardef'||*{SYM#tag-mlist#}$SYM#tag-mlist#$'members'||*{SYM#tag-elist#}$SYM#tag-elist#$'emem'||*{SYM#tag-fndef#}$SYM#tag-fndef#$'fndef'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 230
union anonymous$6;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$11;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$10;

// tag-#anon#UN[S8'_iformat'||S32'_fformat'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 184
union anonymous$14;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$23;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$9;

// tag-#anon#UN[SYM#tag-ctf_list#'dtu_members'||SYM#tag-ctf_arinfo#'dtu_arr'||SYM#tag-ctf_encoding#'dtu_enc'||*{S64}$S64$'dtu_argv'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 152
union anonymous$15;

// tag-#anon#UN[U16'_size'||U16'_type'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 165
union anonymous$12;

// tag-_Elf
// file /usr/include/libelf.h line 38
struct _Elf;

// tag-_Elf_Data
// file /usr/include/libelf.h line 105
struct _Elf_Data;

// tag-_Elf_Scn
// file /usr/include/libelf.h line 39
struct _Elf_Scn;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-alist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.h line 41
struct alist;

// tag-alist_el
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 49
struct alist_el;

// tag-alist_iter_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 141
struct alist_iter_data;

// tag-ardef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 153
struct ardef;

// tag-barrier
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/barrier.h line 47
struct barrier;

// tag-ctf_arinfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 97
struct ctf_arinfo;

// tag-ctf_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 316
struct ctf_array;

// tag-ctf_buf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 341
struct ctf_buf;

// tag-ctf_bundle
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 160
struct ctf_bundle;

// tag-ctf_decl
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 126
struct ctf_decl;

// tag-ctf_decl_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 119
struct ctf_decl_node;

// tag-ctf_dmdef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 138
struct ctf_dmdef;

// tag-ctf_dmodel
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 84
struct ctf_dmodel;

// tag-ctf_dtdef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 146
struct ctf_dtdef;

// tag-ctf_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 86
struct ctf_encoding;

// tag-ctf_enum
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 351
struct ctf_enum;

// tag-ctf_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 59
struct ctf_file;

// tag-ctf_fileops
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 100
struct ctf_fileops;

// tag-ctf_funcinfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 103
struct ctf_funcinfo;

// tag-ctf_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 71
struct ctf_hash;

// tag-ctf_header
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 119
struct ctf_header;

// tag-ctf_header_v1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 137
struct ctf_header_v1;

// tag-ctf_helem
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 65
struct ctf_helem;

// tag-ctf_lblent
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 157
struct ctf_lblent;

// tag-ctf_lblinfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 109
struct ctf_lblinfo;

// tag-ctf_list
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 106
struct ctf_list;

// tag-ctf_lmember
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 338
struct ctf_lmember;

// tag-ctf_lookup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 94
struct ctf_lookup;

// tag-ctf_member
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 332
struct ctf_member;

// tag-ctf_membinfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 92
struct ctf_membinfo;

// tag-ctf_preamble
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 113
struct ctf_preamble;

// tag-ctf_sect
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 67
struct ctf_sect;

// tag-ctf_strs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 79
struct ctf_strs;

// tag-ctf_stype
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 162
struct ctf_stype;

// tag-ctf_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf.h line 179
struct ctf_type;

// tag-elist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 169
struct elist;

// tag-equiv_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 126
struct equiv_data;

// tag-fifo
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 40
struct fifo;

// tag-fifonode
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.c line 38
struct fifonode;

// tag-fndef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 203
struct fndef;

// tag-hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 40
struct hash;

// tag-hash_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 51
struct hash_data;

// tag-iiburst
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 325
struct iiburst;

// tag-iidesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 271
struct iidesc;

// tag-iidesc_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 41
struct iidesc_find;

// tag-iidesc_match
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 49
struct iidesc_match;

// tag-iifind_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 593
struct iifind_data;

// tag-iitype
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 260
enum iitype { II_NOT=0, II_GFUN=1, II_SFUN=2, II_GVAR=3, II_SVAR=4, II_PSYM=5, II_SOU=6, II_TYPE=7 };

// tag-internal_state
// file /usr/include/zlib.h line 83
struct internal_state;

// tag-intr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 181
struct intr;

// tag-labelent
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 291
struct labelent;

// tag-linfo_cb_arg
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 109
struct linfo_cb_arg;

// tag-list
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.h line 40
struct list;

// tag-merge_cb_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 127
struct merge_cb_data;

// tag-mlist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 160
struct mlist;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 309
union pthread_attr_t;

// tag-redir_mstr_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 904
struct redir_mstr_data;

// tag-resbuf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 453
struct resbuf;

// tag-source_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 367
enum source_types { SOURCE_NONE=0, SOURCE_UNKNOWN=1, SOURCE_C=2, SOURCE_S=4 };

// tag-stabtype
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 132
enum stabtype { STABTYPE_FIRST=0, INTRINSIC=1, POINTER=2, ARRAY=3, FUNCTION=4, STRUCT=5, UNION=6, ENUM=7, FORWARD=8, TYPEDEF=9, TYPEDEF_UNRES=10, VOLATILE=11, CONST=12, RESTRICT=13, STABTYPE_LAST=14 };

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-stat64
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 119
struct stat64;

// tag-strhash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 38
struct strhash;

// tag-strtab
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 46
struct strtab;

// tag-symit_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 343
struct symit_data;

// tag-tdata
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 300
struct tdata;

// tag-tdesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 150
struct tdesc;

// tag-tdesc_ops
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 134
struct tdesc_ops;

// tag-tdtrav_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 338
struct tdtrav_data;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-wip
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.h line 45
struct wip;

// tag-workqueue
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.h line 53
struct workqueue;

// tag-z_stream_s
// file /usr/include/zlib.h line 85
struct z_stream_s;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/compat/opensolaris/include/assert.h line 51
static inline void __assert(const char *expr, const char *file, signed int line);
// __assert$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/compat/opensolaris/include/assert.h line 51
static inline void __assert$link1(const char *expr$link1, const char *file$link1, signed int line$link1);
// __assert$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/compat/opensolaris/include/assert.h line 51
static inline void __assert$link2(const char *expr$link2, const char *file$link2, signed int line$link2);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __xpg_basename
// file /usr/include/libgen.h line 34
extern char * __xpg_basename(char *);
// _libctf_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 67
void _libctf_init(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// aborterr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 438
void aborterr(const char *format, ...);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// add_iitba_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 951
static signed int add_iitba_cb(void *data, void *private);
// add_mapping
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 180
static void add_mapping(struct alist *ta, signed int srcid, signed int tgtid);
// add_tdesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 983
static signed int add_tdesc(struct tdesc *oldtdp, signed int newid, struct merge_cb_data *mcd);
// add_tdtba_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1010
static signed int add_tdtba_cb(void *data, void *arg);
// add_tdtbr_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1027
static signed int add_tdtbr_cb(void *data, void *arg);
// alist_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 113
void alist_add(struct alist *alist, void *name, void *value);
// alist_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 64
static signed int alist_cmp(void *arg1, void *arg2);
// alist_def_print_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 180
static signed int alist_def_print_cb(void *key, void *value);
// alist_dump
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 209
signed int alist_dump(struct alist *alist, signed int (*printer)(void *, void *));
// alist_dump::printer$object
//
signed int printer$object(void *, void *);
// alist_dump_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 198
static signed int alist_dump_cb(void *node, void *private);
// alist_dump_cb::1::printer$object
//
signed int printer$object(void *, void *);
// alist_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 124
signed int alist_find(struct alist *alist, void *name, void **value);
// alist_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 106
void alist_free(struct alist *alist);
// alist_free_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 94
static void alist_free_cb(void *arg1, void *arg2);
// alist_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 55
static signed int alist_hash(signed int nbuckets, void *arg);
// alist_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 155
signed int alist_iter(struct alist *alist, signed int (*func)(void *, void *, void *), void *private);
// alist_iter::func$object
//
signed int func$object(void *, void *, void *);
// alist_iter_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 147
static signed int alist_iter_cb(void *arg1, void *arg2);
// alist_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 87
struct alist * alist_new(void (*namefree)(void *), void (*valfree)(void *));
// alist_new::namefree$object
//
void namefree$object(void *);
// alist_new::valfree$object
//
void valfree$object(void *);
// alist_stats
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 170
void alist_stats(struct alist *alist, signed int verbose);
// alist_xnew
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 72
struct alist * alist_xnew(signed int nbuckets, void (*namefree)(void *), void (*valfree)(void *), signed int (*hashfn)(signed int, void *), signed int (*cmpfn)(void *, void *));
// alist_xnew::cmpfn$object
//
signed int cmpfn$object(void *, void *);
// alist_xnew::hashfn$object
//
signed int hashfn$object(signed int, void *);
// alist_xnew::namefree$object
//
void namefree$object(void *);
// alist_xnew::valfree$object
//
void valfree$object(void *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// barrier_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/barrier.c line 49
extern void barrier_init(struct barrier *bar, signed int nthreads);
// barrier_wait
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/barrier.c line 63
extern signed int barrier_wait(struct barrier *bar);
// bcmp
// file /usr/include/strings.h line 43
extern signed int bcmp(const void *, const void *, unsigned long int);
// bcopy
// file /usr/include/strings.h line 47
extern void bcopy(const void *, void *, unsigned long int);
// bcopy_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 555
static signed long int bcopy_data(void *buf, unsigned long int n, void *data);
// bsd_getopt
// file /usr/include/freebsd/unistd.h line 18
signed int bsd_getopt(signed int, char * const *, const char *);
// build_hashes
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 418
static signed int build_hashes(struct tdesc *ctdp, struct tdesc **ctdpp, void *private);
// built_source_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 50
enum source_types built_source_types(struct _Elf *elf, const char *file);
// burst_iitypes
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 58
static signed int burst_iitypes(void *data, void *arg);
// bzero
// file /usr/include/strings.h line 50
extern void bzero(void *, unsigned long int);
// check_for_weak
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 241
static signed int check_for_weak(struct anonymous$5 *weak, const char *weakfile, struct _Elf_Data *data, signed int nent, struct _Elf_Data *strdata, struct anonymous$5 *retsym, char **curfilep);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// clp2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 572
static unsigned long int clp2(unsigned long int x);
// compress_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 486
static signed long int compress_buffer(void *buf, unsigned long int n, void *data);
// compress_end
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 528
static void compress_end(struct resbuf *rb);
// compress_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 509
static void compress_flush(struct resbuf *rb, signed int type);
// compress_start
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 473
static void compress_start(struct resbuf *rb);
// conjure_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 781
static struct tdesc * conjure_array(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 850
static struct tdesc * conjure_assert(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_enum
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 821
static struct tdesc * conjure_enum(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_forward
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 839
static struct tdesc * conjure_forward(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 755
static struct tdesc * conjure_function(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_iidesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 857
static struct iidesc * conjure_iidesc(struct iidesc *old, struct merge_cb_data *mcd);
// conjure_intrinsic
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 734
static struct tdesc * conjure_intrinsic(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_plain
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 745
static struct tdesc * conjure_plain(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_su
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 800
static struct tdesc * conjure_su(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd);
// conjure_template
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 719
static struct tdesc * conjure_template(struct tdesc *old, signed int newselfid);
// copy_ctf_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 615
static void copy_ctf_data(char *srcfile, char *destfile, signed int keep_stabs);
// copy_from_strong
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 311
static struct iidesc * copy_from_strong(struct tdata *td, struct anonymous$5 *sym, struct iidesc *strongdesc, const char *weakname, const char *weakfile);
// count_archive
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 251
static signed int count_archive(signed int fd, struct _Elf *elf, char *file);
// count_files
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 375
signed int count_files(char **files, signed int n);
// count_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 679
static signed int count_types(struct ctf_header *h, char *data);
// ctf_add_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 644
extern signed long int ctf_add_array(struct ctf_file *fp, unsigned int flag, const struct ctf_arinfo *arp);
// ctf_add_const
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 848
extern signed long int ctf_add_const(struct ctf_file *fp, unsigned int flag, signed long int ref);
// ctf_add_encoded
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 586
static signed long int ctf_add_encoded(struct ctf_file *fp, unsigned int flag, const char *name, const struct ctf_encoding *ep, unsigned int kind);
// ctf_add_enum
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 763
extern signed long int ctf_add_enum(struct ctf_file *fp, unsigned int flag, const char *name);
// ctf_add_enumerator
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 860
extern signed int ctf_add_enumerator(struct ctf_file *fp, signed long int enid, const char *name, signed int value);
// ctf_add_float
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 631
extern signed long int ctf_add_float(struct ctf_file *fp, unsigned int flag, const char *name, const struct ctf_encoding *ep);
// ctf_add_forward
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 785
extern signed long int ctf_add_forward(struct ctf_file *fp, unsigned int flag, const char *name, unsigned int kind);
// ctf_add_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 680
extern signed long int ctf_add_function(struct ctf_file *fp, unsigned int flag, const struct ctf_funcinfo *ctc, const signed long int *argv);
// ctf_add_generic
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 526
static signed long int ctf_add_generic(struct ctf_file *fp, unsigned int flag, const char *name, struct ctf_dtdef **rp);
// ctf_add_integer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 624
extern signed long int ctf_add_integer(struct ctf_file *fp, unsigned int flag, const char *name, const struct ctf_encoding *ep);
// ctf_add_member
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 916
extern signed int ctf_add_member(struct ctf_file *fp, signed long int souid, const char *name, signed long int type);
// ctf_add_pointer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 638
extern signed long int ctf_add_pointer(struct ctf_file *fp, unsigned int flag, signed long int ref);
// ctf_add_reftype
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 606
static signed long int ctf_add_reftype(struct ctf_file *fp, unsigned int flag, signed long int ref, unsigned int kind);
// ctf_add_restrict
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 854
extern signed long int ctf_add_restrict(struct ctf_file *fp, unsigned int flag, signed long int ref);
// ctf_add_struct
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 719
extern signed long int ctf_add_struct(struct ctf_file *fp, unsigned int flag, const char *name);
// ctf_add_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1086
extern signed long int ctf_add_type(struct ctf_file *dst_fp, struct ctf_file *src_fp, signed long int src_type);
// ctf_add_typedef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 824
extern signed long int ctf_add_typedef(struct ctf_file *fp, unsigned int flag, const char *name, signed long int ref);
// ctf_add_union
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 741
extern signed long int ctf_add_union(struct ctf_file *fp, unsigned int flag, const char *name);
// ctf_add_volatile
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 842
extern signed long int ctf_add_volatile(struct ctf_file *fp, unsigned int flag, signed long int ref);
// ctf_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 317
extern void * ctf_alloc(unsigned long int size);
// ctf_array_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 194
extern signed int ctf_array_info(struct ctf_file *fp, signed long int type, struct ctf_arinfo *arp);
// ctf_buf_cur
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 110
static unsigned int ctf_buf_cur(struct ctf_buf *b);
// ctf_buf_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 102
static void ctf_buf_free(struct ctf_buf *b);
// ctf_buf_grow
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 80
static void ctf_buf_grow(struct ctf_buf *b);
// ctf_buf_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 91
static struct ctf_buf * ctf_buf_new(void);
// ctf_buf_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 116
static void ctf_buf_write(struct ctf_buf *b, const void *p, unsigned long int n);
// ctf_bufopen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 152
extern struct ctf_file * ctf_bufopen(const struct ctf_sect *ctfsect, const struct ctf_sect *symsect, const struct ctf_sect *strsect, signed int *errp);
// ctf_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 157
extern void ctf_close(struct ctf_file *fp);
// ctf_copy_emembers
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 136
static unsigned char * ctf_copy_emembers(struct ctf_dtdef *dtd, unsigned int soff, unsigned char *t);
// ctf_copy_lmembers
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 111
static unsigned char * ctf_copy_lmembers(struct ctf_dtdef *dtd, unsigned int soff, unsigned char *t);
// ctf_copy_membnames
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 153
static unsigned char * ctf_copy_membnames(struct ctf_dtdef *dtd, unsigned char *s);
// ctf_copy_smembers
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 88
static unsigned char * ctf_copy_smembers(struct ctf_dtdef *dtd, unsigned int soff, unsigned char *t);
// ctf_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 51
extern struct ctf_file * ctf_create(signed int *errp);
// ctf_data_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 313
extern void * ctf_data_alloc(unsigned long int size);
// ctf_data_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 314
extern void ctf_data_free(void *buf, unsigned long int size);
// ctf_data_protect
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 315
extern void ctf_data_protect(void *buf, unsigned long int size);
// ctf_decl_fini
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 72
extern void ctf_decl_fini(struct ctf_decl *cd);
// ctf_decl_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 54
extern void ctf_decl_init(struct ctf_decl *cd, char *buf, unsigned long int len);
// ctf_decl_push
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 87
extern void ctf_decl_push(struct ctf_decl *cd, struct ctf_file *fp, signed long int type);
// ctf_decl_sprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 172
extern void ctf_decl_sprintf(struct ctf_decl *cd, const char *format, ...);
// ctf_discard
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 501
extern signed int ctf_discard(struct ctf_file *fp);
// ctf_dprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 322
extern void ctf_dprintf(const char *format, ...);
// ctf_dtd_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 429
extern void ctf_dtd_delete(struct ctf_file *fp, struct ctf_dtdef *dtd);
// ctf_dtd_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 419
extern void ctf_dtd_insert(struct ctf_file *fp, struct ctf_dtdef *dtd);
// ctf_dtd_lookup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 478
extern struct ctf_dtdef * ctf_dtd_lookup(struct ctf_file *fp, signed long int type);
// ctf_enum_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 203
extern signed int ctf_enum_iter(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed int, void *), void *arg);
// ctf_enum_iter::func$object
//
signed int func$object(const char *, signed int, void *);
// ctf_enum_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 705
extern const char * ctf_enum_name(struct ctf_file *fp, signed long int type, signed int value);
// ctf_enum_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 197
extern signed int ctf_enum_value(struct ctf_file *fp, signed long int type, const char *name, signed int *valp);
// ctf_errmsg
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_error.c line 81
extern const char * ctf_errmsg(signed int error);
// ctf_errno
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 169
extern signed int ctf_errno(struct ctf_file *fp);
// ctf_fdopen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 215
extern struct ctf_file * ctf_fdopen(signed int fd, signed int *errp);
// ctf_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 318
extern void ctf_free(void *buf, unsigned long int size);
// ctf_func_args
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 295
extern signed int ctf_func_args(struct ctf_file *fp, unsigned long int symidx, unsigned int argc, signed long int *argv);
// ctf_func_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 241
extern signed int ctf_func_info(struct ctf_file *fp, unsigned long int symidx, struct ctf_funcinfo *fip);
// ctf_gen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 608
char * ctf_gen(struct iiburst *iiburst, unsigned long int *resszp, signed int do_compress);
// ctf_get_ctt_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 275
extern signed long int ctf_get_ctt_size(const struct ctf_file *fp, const struct ctf_type *tp, signed long int *sizep, signed long int *incrementp);
// ctf_getmodel
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 164
extern signed int ctf_getmodel(struct ctf_file *fp);
// ctf_getspecific
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 951
extern void * ctf_getspecific(struct ctf_file *fp);
// ctf_hash_compute
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_hash.c line 76
static unsigned long int ctf_hash_compute(const char *key, unsigned long int len);
// ctf_hash_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 280
extern signed int ctf_hash_create(struct ctf_hash *hp, unsigned long int nelems);
// ctf_hash_define
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 282
extern signed int ctf_hash_define(struct ctf_hash *hp, struct ctf_file *fp, unsigned short int type, unsigned int name);
// ctf_hash_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 286
extern void ctf_hash_destroy(struct ctf_hash *hp);
// ctf_hash_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 281
extern signed int ctf_hash_insert(struct ctf_hash *hp, struct ctf_file *fp, unsigned short int type, unsigned int name);
// ctf_hash_lookup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 283
extern struct ctf_helem * ctf_hash_lookup(struct ctf_hash *hp, struct ctf_file *fp, const char *key, unsigned long int len);
// ctf_hash_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 285
extern unsigned int ctf_hash_size(const struct ctf_hash *hp);
// ctf_import
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 162
extern signed int ctf_import(struct ctf_file *fp, struct ctf_file *pfp);
// ctf_label_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 138
extern signed int ctf_label_info(struct ctf_file *fp, const char *lname, struct ctf_lblinfo *linfo);
// ctf_label_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 80
extern signed int ctf_label_iter(struct ctf_file *fp, signed int (*func)(const char *, const struct ctf_lblinfo *, void *), void *arg);
// ctf_label_iter::func$object
//
signed int func$object(const char *, const struct ctf_lblinfo *, void *);
// ctf_label_topmost
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 55
extern const char * ctf_label_topmost(struct ctf_file *fp);
// ctf_list_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 291
extern void ctf_list_append(struct ctf_list *lp, void *new);
// ctf_list_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 293
extern void ctf_list_delete(struct ctf_list *lp, void *existing);
// ctf_list_prepend
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 292
extern void ctf_list_prepend(struct ctf_list *lp, void *new);
// ctf_load
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 1239
struct tdata * ctf_load(char *file, char *buf, unsigned long int bufsz, struct symit_data *si, char *label);
// ctf_lookup_by_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 278
extern const struct ctf_type * ctf_lookup_by_id(struct ctf_file **fpp, signed long int type);
// ctf_lookup_by_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 79
extern signed long int ctf_lookup_by_name(struct ctf_file *fp, const char *name);
// ctf_lookup_by_symbol
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 179
extern signed long int ctf_lookup_by_symbol(struct ctf_file *fp, unsigned long int symidx);
// ctf_member_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 192
extern signed int ctf_member_info(struct ctf_file *fp, signed long int type, const char *name, struct ctf_membinfo *mip);
// ctf_member_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 202
extern signed int ctf_member_iter(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed long int, unsigned long int, void *), void *arg);
// ctf_member_iter::func$object
//
signed int func$object(const char *, signed long int, unsigned long int, void *);
// ctf_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 441
extern struct ctf_file * ctf_open(const char *filename, signed int *errp);
// ctf_parent_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 876
extern struct ctf_file * ctf_parent_file(struct ctf_file *fp);
// ctf_parent_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 886
extern const char * ctf_parent_name(struct ctf_file *fp);
// ctf_parse
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 1172
static struct tdata * ctf_parse(struct ctf_header *h, char *buf, struct symit_data *si, char *label);
// ctf_sect_mmap
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 183
extern const void * ctf_sect_mmap(struct ctf_sect *sp, signed int fd);
// ctf_sect_munmap
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 201
extern void ctf_sect_munmap(const struct ctf_sect *sp);
// ctf_set_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 663
extern signed int ctf_set_array(struct ctf_file *fp, signed long int type, const struct ctf_arinfo *arp);
// ctf_set_errno
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 308
extern signed long int ctf_set_errno(struct ctf_file *fp, signed int err);
// ctf_set_open_errno
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 307
extern struct ctf_file * ctf_set_open_errno(signed int *errp, signed int error);
// ctf_setmodel
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 163
extern signed int ctf_setmodel(struct ctf_file *fp, signed int model);
// ctf_setspecific
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 945
extern void ctf_setspecific(struct ctf_file *fp, void *data);
// ctf_strdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 320
extern char * ctf_strdup(const char *s1);
// ctf_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 321
extern const char * ctf_strerror(signed int err);
// ctf_strptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 305
extern const char * ctf_strptr(struct ctf_file *fp, unsigned int name);
// ctf_strraw
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 304
extern const char * ctf_strraw(struct ctf_file *fp, unsigned int name);
// ctf_type_align
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 183
extern signed long int ctf_type_align(struct ctf_file *fp, signed long int type);
// ctf_type_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 536
extern signed int ctf_type_cmp(struct ctf_file *lfp, signed long int ltype, struct ctf_file *rfp, signed long int rtype);
// ctf_type_compat
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 572
extern signed int ctf_type_compat(struct ctf_file *lfp, signed long int ltype, struct ctf_file *rfp, signed long int rtype);
// ctf_type_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 187
extern signed int ctf_type_encoding(struct ctf_file *fp, signed long int type, struct ctf_encoding *ep);
// ctf_type_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 147
extern signed int ctf_type_iter(struct ctf_file *fp, signed int (*func)(signed long int, void *), void *arg);
// ctf_type_iter::func$object
//
signed int func$object(signed long int, void *);
// ctf_type_kind
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 184
extern signed int ctf_type_kind(struct ctf_file *fp, signed long int type);
// ctf_type_lname
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 203
extern signed long int ctf_type_lname(struct ctf_file *fp, signed long int type, char *buf, unsigned long int len);
// ctf_type_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 309
extern char * ctf_type_name(struct ctf_file *fp, signed long int type, char *buf, unsigned long int len);
// ctf_type_pointer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 476
extern signed long int ctf_type_pointer(struct ctf_file *fp, signed long int type);
// ctf_type_reference
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 185
extern signed long int ctf_type_reference(struct ctf_file *fp, signed long int type);
// ctf_type_resolve
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 179
extern signed long int ctf_type_resolve(struct ctf_file *fp, signed long int type);
// ctf_type_rvisit
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 785
static signed int ctf_type_rvisit(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed long int, unsigned long int, signed int, void *), void *arg, const char *name, unsigned long int offset, signed int depth);
// ctf_type_rvisit::func$object
//
signed int func$object(const char *, signed long int, unsigned long int, signed int, void *);
// ctf_type_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 182
extern signed long int ctf_type_size(struct ctf_file *fp, signed long int type);
// ctf_type_visit
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 842
extern signed int ctf_type_visit(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed long int, unsigned long int, signed int, void *), void *arg);
// ctf_type_visit::func$object
//
signed int func$object(const char *, signed long int, unsigned long int, signed int, void *);
// ctf_update
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 185
extern signed int ctf_update(struct ctf_file *fp);
// ctf_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 483
extern signed int ctf_version(signed int version);
// ctf_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 462
extern signed int ctf_write(struct ctf_file *fp, signed int fd);
// ctf_zopen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 88
extern void * ctf_zopen(signed int *errp);
// debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 443
void debug(signed int level, const char *format, ...);
// decompress_ctf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 1204
static unsigned long int decompress_ctf(char *cbuf, unsigned long int cbufsz, char *dbuf, unsigned long int dbufsz);
// deflate
// file /usr/include/zlib.h line 246
extern signed int deflate(struct z_stream_s *, signed int);
// deflateEnd
// file /usr/include/zlib.h line 353
extern signed int deflateEnd(struct z_stream_s *);
// deflateInit_
// file /usr/include/zlib.h line 1633
extern signed int deflateInit_(struct z_stream_s *, signed int, const char *, signed int);
// ehdr_to_gelf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 141
static void ehdr_to_gelf(const struct anonymous$18 *src, struct anonymous$8 *dst);
// elf_begin
// file /usr/include/libelf.h line 179
struct _Elf * elf_begin(signed int, enum anonymous$2, struct _Elf *);
// elf_end
// file /usr/include/libelf.h line 181
signed int elf_end(struct _Elf *);
// elf_errmsg
// file /usr/include/libelf.h line 182
const char * elf_errmsg(signed int);
// elf_flagelf
// file /usr/include/libelf.h line 187
unsigned int elf_flagelf(struct _Elf *, enum anonymous$2, unsigned int);
// elf_getarhdr
// file /usr/include/libelf.h line 191
struct anonymous$3 * elf_getarhdr(struct _Elf *);
// elf_getdata
// file /usr/include/libelf.h line 194
struct _Elf_Data * elf_getdata(struct _Elf_Scn *, struct _Elf_Data *);
// elf_getscn
// file /usr/include/libelf.h line 198
struct _Elf_Scn * elf_getscn(struct _Elf *, unsigned long int);
// elf_kind
// file /usr/include/libelf.h line 204
enum anonymous$1 elf_kind(struct _Elf *);
// elf_ndxscn
// file /usr/include/libelf.h line 206
unsigned long int elf_ndxscn(struct _Elf_Scn *);
// elf_newdata
// file /usr/include/libelf.h line 207
struct _Elf_Data * elf_newdata(struct _Elf_Scn *);
// elf_newscn
// file /usr/include/libelf.h line 208
struct _Elf_Scn * elf_newscn(struct _Elf *);
// elf_next
// file /usr/include/libelf.h line 210
enum anonymous$2 elf_next(struct _Elf *);
// elf_nextscn
// file /usr/include/libelf.h line 209
struct _Elf_Scn * elf_nextscn(struct _Elf *, struct _Elf_Scn *);
// elf_ptrsz
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 97
unsigned long int elf_ptrsz(struct _Elf *elf);
// elf_strptr
// file /usr/include/libelf.h line 215
char * elf_strptr(struct _Elf *, unsigned long int, unsigned long int);
// elf_update
// file /usr/include/libelf.h line 216
signed long int elf_update(struct _Elf *, enum anonymous$2);
// elf_version
// file /usr/include/libelf.h line 217
unsigned int elf_version(unsigned int);
// elfterminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 440
void elfterminate(const char *file, const char *fmt, ...);
// enumadd
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1026
static signed int enumadd(const char *name, signed int value, void *arg);
// enumcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1016
static signed int enumcmp(const char *name, signed int value, void *arg);
// equiv_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 268
static signed int equiv_array(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed);
// equiv_assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 338
static signed int equiv_assert(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed);
// equiv_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 411
static signed int equiv_cb(void *bucket, void *arg);
// equiv_enum
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 316
static signed int equiv_enum(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed);
// equiv_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 247
static signed int equiv_function(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed);
// equiv_intrinsic
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 219
static signed int equiv_intrinsic(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed);
// equiv_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 355
static signed int equiv_node(struct tdesc *ctdp, struct tdesc *mtdp, struct equiv_data *ed);
// equiv_node::1::equiv$object
//
signed int equiv$object(struct tdesc *, struct tdesc *, struct equiv_data *);
// equiv_plain
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 241
static signed int equiv_plain(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed);
// equiv_su
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 283
static signed int equiv_su(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// extract_label_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 32
static signed int extract_label_info(struct ctf_file *fp, const struct ctf_lblent **ctl, unsigned int *num_labels);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fifo_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 43
extern void fifo_add(struct fifo *f, void *data);
// fifo_empty
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 47
extern signed int fifo_empty(struct fifo *f);
// fifo_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 45
extern void fifo_free(struct fifo *f, void (*freefn)(void *));
// fifo_free::freefn$object
//
void freefn$object(void *);
// fifo_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.c line 140
extern signed int fifo_iter(struct fifo *f, signed int (*iter)(void *, void *), void *arg);
// fifo_iter::iter$object
//
signed int iter$object(void *, void *);
// fifo_len
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 46
extern signed int fifo_len(struct fifo *f);
// fifo_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 42
extern struct fifo * fifo_new(void);
// fifo_nullfree
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.c line 96
static void fifo_nullfree(void *arg);
// fifo_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 44
extern void * fifo_remove(struct fifo *f);
// finalize_phase_one
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 286
static void finalize_phase_one(struct workqueue *wq);
// find_iidesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 197
static struct iidesc * find_iidesc(struct tdata *td, struct iidesc_match *match);
// findelfsecidx
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 434
signed int findelfsecidx(struct _Elf *elf, const char *file, const char *tofind);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_ardef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 196
static void free_ardef(struct tdesc *tdp);
// free_elist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 218
static void free_elist(struct tdesc *tdp);
// free_intr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 190
static void free_intr(struct tdesc *tdp);
// free_mlist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 202
static void free_mlist(struct tdesc *tdp);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 219
extern signed int fstat(signed int, struct stat *);
// fstat64
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 229
extern signed int fstat64(signed int, struct stat64 *);
// fwd_equiv
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 347
static signed int fwd_equiv(struct tdesc *ctdp, struct tdesc *mtdp);
// fwd_redir
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 872
static signed int fwd_redir(struct tdesc *fwd, struct tdesc **fwdp, void *private);
// gelf_fsize
// file /usr/include/gelf.h line 77
unsigned long int gelf_fsize(struct _Elf *, enum anonymous, unsigned long int, unsigned int);
// gelf_getclass
// file /usr/include/gelf.h line 79
signed int gelf_getclass(struct _Elf *);
// gelf_getehdr
// file /usr/include/gelf.h line 81
struct anonymous$8 * gelf_getehdr(struct _Elf *, struct anonymous$8 *);
// gelf_getphdr
// file /usr/include/gelf.h line 82
struct anonymous$7 * gelf_getphdr(struct _Elf *, signed int, struct anonymous$7 *);
// gelf_getshdr
// file /usr/include/gelf.h line 85
struct anonymous$4 * gelf_getshdr(struct _Elf_Scn *, struct anonymous$4 *);
// gelf_getsym
// file /usr/include/gelf.h line 86
struct anonymous$5 * gelf_getsym(struct _Elf_Data *, signed int, struct anonymous$5 *);
// gelf_newehdr
// file /usr/include/gelf.h line 89
void * gelf_newehdr(struct _Elf *, signed int);
// gelf_newphdr
// file /usr/include/gelf.h line 90
void * gelf_newphdr(struct _Elf *, unsigned long int);
// gelf_update_ehdr
// file /usr/include/gelf.h line 92
signed int gelf_update_ehdr(struct _Elf *, struct anonymous$8 *);
// gelf_update_phdr
// file /usr/include/gelf.h line 93
signed int gelf_update_phdr(struct _Elf *, signed int, struct anonymous$7 *);
// gelf_update_shdr
// file /usr/include/gelf.h line 96
signed int gelf_update_shdr(struct _Elf_Scn *, struct anonymous$4 *);
// gelf_update_sym
// file /usr/include/gelf.h line 97
signed int gelf_update_sym(struct _Elf_Data *, signed int, struct anonymous$5 *);
// get_ctt_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 667
static void get_ctt_size(struct ctf_type *ctt, unsigned long int *sizep, unsigned long int *incrementp);
// get_kind_v1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 47
static unsigned short int get_kind_v1(unsigned short int info);
// get_kind_v2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 53
static unsigned short int get_kind_v2(unsigned short int info);
// get_mapping
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 191
static signed int get_mapping(struct alist *ta, signed int srcid);
// get_root_v1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 59
static unsigned short int get_root_v1(unsigned short int info);
// get_root_v2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 65
static unsigned short int get_root_v2(unsigned short int info);
// get_vlen_v1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 71
static unsigned short int get_vlen_v1(unsigned short int info);
// get_vlen_v2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 77
static unsigned short int get_vlen_v2(unsigned short int info);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getpagesize
// file /usr/include/unistd.h line 978
extern signed int getpagesize(void);
// handle_sig
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 590
static void handle_sig(signed int sig);
// hash_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 43
void hash_add(struct hash *hash, void *key);
// hash_add_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 115
static signed int hash_add_cb(void *node, void *private);
// hash_count
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 234
signed int hash_count(struct hash *hash);
// hash_def_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 68
static signed int hash_def_cmp(void *d1, void *d2);
// hash_def_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 61
static signed int hash_def_hash(signed int nbuckets, void *arg);
// hash_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 46
signed int hash_find(struct hash *hash, void *key, void **value);
// hash_find_first_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 186
static signed int hash_find_first_cb(void *node, void *arg);
// hash_find_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 169
signed int hash_find_iter(struct hash *hash, void *key, signed int (*fun)(void *, void *), void *private);
// hash_find_iter::fun$object
//
signed int fun$object(void *, void *);
// hash_find_list_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 153
static signed int hash_find_list_cb(void *node, void *arg);
// hash_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 53
void hash_free(struct hash *hash, void (*datafree)(void *, void *), void *private);
// hash_free::datafree$object
//
void datafree$object(void *, void *);
// hash_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 48
signed int hash_iter(struct hash *hash, signed int (*fun)(void *, void *), void *private);
// hash_iter::fun$object
//
signed int fun$object(void *, void *);
// hash_match
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 144
signed int hash_match(struct hash *hash, void *key, signed int (*fun)(void *, void *), void *private);
// hash_match::fun$object
//
signed int fun$object(void *, void *);
// hash_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 122
void hash_merge(struct hash *to, struct hash *from);
// hash_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 75
signed int hash_name(signed int nbuckets, const char *name);
// hash_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 42
struct hash * hash_new(signed int nbuckets, signed int (*hashfn)(signed int, void *), signed int (*cmp)(void *, void *));
// hash_new::cmp$object
//
signed int cmp$object(void *, void *);
// hash_new::hashfn$object
//
signed int hashfn$object(signed int, void *);
// hash_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 135
void hash_remove(struct hash *hash, void *key);
// hash_remove_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 128
static signed int hash_remove_cb(void *key1, void *key2, void *arg);
// hash_stats
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 52
void hash_stats(struct hash *hash, signed int verbose);
// ignore_symbol
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/symbol.h line 38
signed int ignore_symbol(struct anonymous$5 *sym, const char *name);
// iiburst_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 143
static void iiburst_free(struct iiburst *iiburst);
// iiburst_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 118
static struct iiburst * iiburst_new(struct tdata *td, signed int max);
// iiburst_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 130
static void iiburst_types(struct iiburst *iiburst);
// iidesc_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 87
void iidesc_add(struct hash *hash, struct iidesc *new);
// iidesc_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 71
static signed int iidesc_cmp(void *arg1, void *arg2);
// iidesc_count_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 179
signed int iidesc_count_type(void *data, void *private);
// iidesc_dump
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 170
signed int iidesc_dump(struct iidesc *ii);
// iidesc_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 123
struct iidesc * iidesc_dup(struct iidesc *src);
// iidesc_dup_rename
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 143
struct iidesc * iidesc_dup_rename(struct iidesc *src, const char *name, const char *owner);
// iidesc_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 157
void iidesc_free(void *arg, void *private);
// iidesc_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 59
signed int iidesc_hash(signed int nbuckets, void *arg);
// iidesc_match
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 606
static signed int iidesc_match(void *data, void *arg);
// iidesc_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 354
struct iidesc * iidesc_new(char *name);
// iidesc_stats
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 363
void iidesc_stats(struct hash *ii);
// iitraverse
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 59
signed int iitraverse(struct iidesc *ii, signed int *vgenp, signed int (**firstops)(struct tdesc *, struct tdesc **, void *), signed int (**preops)(struct tdesc *, struct tdesc **, void *), signed int (**postops)(struct tdesc *, struct tdesc **, void *), void *private);
// iitraverse::firstops$object$object
//
signed int firstops$object$object(struct tdesc *, struct tdesc **, void *);
// iitraverse::postops$object$object
//
signed int postops$object$object(struct tdesc *, struct tdesc **, void *);
// iitraverse::preops$object$object
//
signed int preops$object$object(struct tdesc *, struct tdesc **, void *);
// iitraverse_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 61
signed int iitraverse_hash(struct hash *iihash, signed int *vgenp, signed int (**firstops)(struct tdesc *, struct tdesc **, void *), signed int (**preops)(struct tdesc *, struct tdesc **, void *), signed int (**postops)(struct tdesc *, struct tdesc **, void *), void *private);
// iitraverse_hash::firstops$object$object
//
signed int firstops$object$object(struct tdesc *, struct tdesc **, void *);
// iitraverse_hash::postops$object$object
//
signed int postops$object$object(struct tdesc *, struct tdesc **, void *);
// iitraverse_hash::preops$object$object
//
signed int preops$object$object(struct tdesc *, struct tdesc **, void *);
// iitraverse_td
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 63
signed int iitraverse_td(void *arg1, void *arg2);
// inflate
// file /usr/include/zlib.h line 392
extern signed int inflate(struct z_stream_s *, signed int);
// inflateEnd
// file /usr/include/zlib.h line 508
extern signed int inflateEnd(struct z_stream_s *);
// inflateInit_
// file /usr/include/zlib.h line 1635
extern signed int inflateInit_(struct z_stream_s *, const char *, signed int);
// init_phase_two
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 334
static void init_phase_two(struct workqueue *wq);
// init_symtab
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 110
static signed int init_symtab(struct ctf_file *fp, const struct ctf_header *hp, const struct ctf_sect *sp, const struct ctf_sect *strp);
// init_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 199
static signed int init_types(struct ctf_file *fp, const struct ctf_header *cth);
// isqualifier
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 48
static signed int isqualifier(const char *s, unsigned long int len);
// iter_iidescs_by_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 112
void iter_iidescs_by_name(struct tdata *td, const char *name, signed int (*func)(void *, void *), void *data);
// iter_iidescs_by_name::func$object
//
signed int func$object(void *, void *);
// join_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 723
static void join_threads(struct workqueue *wq);
// label_info_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 115
static signed int label_info_cb(const char *lname, const struct ctf_lblinfo *linfo, void *arg);
// list_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 42
void list_add(struct list **list, void *data);
// list_concat
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 173
void list_concat(struct list **list1, struct list *list2);
// list_count
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 49
signed int list_count(struct list *list);
// list_count_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 138
static signed int list_count_cb(void *data, void *private);
// list_defcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 73
static signed int list_defcmp(void *d1, void *d2, void *private);
// list_empty
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 150
signed int list_empty(struct list *list);
// list_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 156
void * list_find(struct list *list, void *tmpl, signed int (*cmp)(void *, void *));
// list_find::cmp$object
//
signed int cmp$object(void *, void *);
// list_first
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 167
void * list_first(struct list *list);
// list_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 45
void list_free(struct list *list, void (*datafree)(void *, void *), void *private);
// list_free::datafree$object
//
void datafree$object(void *, void *);
// list_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 48
signed int list_iter(struct list *list, signed int (*func)(void *, void *), void *private);
// list_iter::func$object
//
signed int func$object(void *, void *);
// list_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 44
void * list_remove(struct list **list, void *data, signed int (*cmp)(void *, void *, void *), void *private);
// list_remove::cmp$object
//
signed int cmp$object(void *, void *, void *);
// make_ctf_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 715
static char * make_ctf_data(struct tdata *td, struct _Elf *elf, const char *file, unsigned long int *lenp, signed int flags);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// map_td_tree_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 445
static signed int map_td_tree_post(struct tdesc *ctdp, struct tdesc **ctdpp, void *private);
// map_td_tree_pre
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 433
static signed int map_td_tree_pre(struct tdesc *ctdp, struct tdesc **ctdpp, void *private);
// map_td_tree_self_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 497
static signed int map_td_tree_self_post(struct tdesc *ctdp, struct tdesc **ctdpp, void *private);
// matching_iidesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 162
static signed int matching_iidesc(void *arg1, void *arg2);
// membadd
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1046
static signed int membadd(const char *name, signed long int type, unsigned long int offset, void *arg);
// membcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1036
static signed int membcmp(const char *name, signed long int type, unsigned long int offset, void *arg);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memory_bailout
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/memory.c line 41
static void memory_bailout(void);
// merge_ctf_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 550
static signed int merge_ctf_cb(struct tdata *td, char *name, void *arg);
// merge_into_master
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 387
void merge_into_master(struct tdata *cur, struct tdata *mstr, struct tdata *tgt, signed int selfuniquify);
// merge_type_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 655
static signed int merge_type_cb(void *data, void *arg);
// merge_type_cb::$tmp::tmp_if_expr$1$object$object
//
signed int tmp_if_expr$1$object$object(struct tdesc *, struct tdesc **, void *);
// merge_type_cb::1::post$object$object
//
signed int post$object$object(struct tdesc *, struct tdesc **, void *);
// merge_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1042
static void merge_types(struct hash *src, struct merge_cb_data *mcd);
// mktmpname
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 436
char * mktmpname(const char *origname, const char *suffix);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 61
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// mprotect
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 81
extern signed int mprotect(void *, unsigned long int, signed int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// open
// file /usr/include/fcntl.h line 149
extern signed int open(const char *, signed int, ...);
// pad_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 542
static void pad_buffer(struct ctf_buf *buf, signed int align);
// parseterminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 67
static void parseterminate(const char *fmt, ...);
// pread
// file /usr/include/unistd.h line 388
extern signed long int pread(signed int, void *, unsigned long int, signed long int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous$23 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$23 *, const union anonymous$10 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$23 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$23 *, union anonymous$9 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$9 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$9 *, const union anonymous$10 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$9 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$9 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$20 *, struct anonymous$20 *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// rbzs_grow
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 461
static void rbzs_grow(struct resbuf *rb);
// read_archive
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 130
static signed int read_archive(signed int fd, struct _Elf *elf, char *file, char *label, signed int (*func)(struct tdata *, char *, void *), void *arg, signed int require_ctf);
// read_archive::func$object
//
signed int func$object(struct tdata *, char *, void *);
// read_ctf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 376
signed int read_ctf(char **files, signed int n, char *label, signed int (*func)(struct tdata *, char *, void *), void *private, signed int require_ctf);
// read_ctf::func$object
//
signed int func$object(struct tdata *, char *, void *);
// read_ctf_common
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 185
static signed int read_ctf_common(char *file, char *label, signed int (*func)(struct tdata *, char *, void *), void *arg, signed int require_ctf);
// read_ctf_common::func$object
//
signed int func$object(struct tdata *, char *, void *);
// read_ctf_save_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 378
signed int read_ctf_save_cb(struct tdata *td, char *name, void *retp);
// read_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 87
static signed int read_file(struct _Elf *elf, char *file, char *label, signed int (*func)(struct tdata *, char *, void *), void *arg, signed int require_ctf);
// read_file::func$object
//
signed int func$object(struct tdata *, char *, void *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// redir_mstr_fwd_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 910
static signed int redir_mstr_fwd_cb(void *name, void *value, void *arg);
// redir_mstr_fwds
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 934
static void redir_mstr_fwds(struct merge_cb_data *mcd);
// remap_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 688
static signed int remap_node(struct tdesc **tgtp, struct tdesc *oldtgt, signed int selftid, struct tdesc *newself, struct merge_cb_data *mcd);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// resurrect_functions
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 838
static void resurrect_functions(struct ctf_header *h, struct tdata *td, struct tdesc **tdarr, signed int tdsize, char *ctfdata, struct symit_data *si);
// resurrect_labels
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 750
static signed int resurrect_labels(struct ctf_header *h, struct tdata *td, char *ctfdata, char *matchlbl);
// resurrect_objects
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 795
static void resurrect_objects(struct ctf_header *h, struct tdata *td, struct tdesc **tdarr, signed int tdsize, char *ctfdata, struct symit_data *si);
// resurrect_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 907
static void resurrect_types(struct ctf_header *h, struct tdata *td, struct tdesc **tdarr, signed int tdsize, char *ctfdata, signed int maxid);
// save_type_by_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 82
static signed int save_type_by_id(struct tdesc *tdp, struct tdesc **tdpp, void *private);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous$11 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$11 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$11 *);
// set_terminate_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 439
void set_terminate_cleanup(void (*cleanup)(void));
// set_terminate_cleanup::cleanup$object
//
void cleanup$object(void);
// shdr_to_gelf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 163
static void shdr_to_gelf(const struct anonymous$19 *src, struct anonymous$4 *dst);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$20 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$20 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// slist_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 59
void slist_add(struct list **list, void *data, signed int (*cmp)(void *, void *));
// slist_add::cmp$object
//
signed int cmp$object(void *, void *);
// slist_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 190
void slist_merge(struct list **list1p, struct list *list2, signed int (*cmp)(void *, void *));
// slist_merge::cmp$object
//
signed int cmp$object(void *, void *);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sort_iidescs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 337
static struct iiburst * sort_iidescs(struct _Elf *elf, const char *file, struct tdata *td, signed int fuzzymatch, signed int dynsym);
// start_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 694
static void start_threads(struct workqueue *wq);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcompare
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 733
static signed int strcompare(const void *p1, const void *p2);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// streq
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 433
signed int streq(const char *s1, const char *s2);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strpbrk
// file /usr/include/string.h line 314
extern char * strpbrk(const char *, const char *);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtab_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 107
static signed int strtab_compare(struct strtab *sp, struct strhash *hp, const char *str, unsigned long int len);
// strtab_copyin
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 133
static void strtab_copyin(struct strtab *sp, const char *str, unsigned long int len);
// strtab_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 57
extern void strtab_create(struct strtab *sp);
// strtab_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 58
extern void strtab_destroy(struct strtab *sp);
// strtab_grow
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 42
static void strtab_grow(struct strtab *sp);
// strtab_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 87
static unsigned long int strtab_hash(const char *key, unsigned long int *len);
// strtab_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 59
extern unsigned long int strtab_insert(struct strtab *sp, const char *str);
// strtab_print
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 231
extern void strtab_print(const struct strtab *sp);
// strtab_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 60
extern unsigned long int strtab_size(const struct strtab *sp);
// strtab_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 61
extern signed long int strtab_write(const struct strtab *sp, signed long int (*func)(void *, unsigned long int, void *), void *priv);
// strtab_write::func$object
//
signed long int func$object(void *, unsigned long int, void *);
// sym_to_gelf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 92
static struct anonymous$5 * sym_to_gelf(const struct anonymous$24 *src, struct anonymous$5 *dst);
// symit_curfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 381
char * symit_curfile(struct symit_data *si);
// symit_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 369
void symit_free(struct symit_data *si);
// symit_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 383
char * symit_name(struct symit_data *si);
// symit_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 343
struct symit_data * symit_new(struct _Elf *elf, const char *file);
// symit_next
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 382
struct anonymous$5 * symit_next(struct symit_data *si, signed int type);
// symit_reset
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 380
void symit_reset(struct symit_data *si);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// tdata_build_hashes
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 416
void tdata_build_hashes(struct tdata *td);
// tdata_build_hashes_common
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 446
static void tdata_build_hashes_common(struct tdata *td, struct hash *hash);
// tdata_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 415
void tdata_free(struct tdata *td);
// tdata_label_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 425
void tdata_label_add(struct tdata *td, const char *label, signed int idx);
// tdata_label_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 271
static signed int tdata_label_cmp(void *arg1, void *arg2);
// tdata_label_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 319
signed int tdata_label_find(struct tdata *td, char *label);
// tdata_label_find_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 311
static signed int tdata_label_find_cb(void *arg1, void *arg2);
// tdata_label_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 428
void tdata_label_free(struct tdata *td);
// tdata_label_free_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 360
static void tdata_label_free_cb(void *arg, void *private);
// tdata_label_newmax
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 430
void tdata_label_newmax(struct tdata *td, signed int newmax);
// tdata_label_newmax_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 339
static signed int tdata_label_newmax_cb(void *data, void *arg);
// tdata_label_top
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 426
struct labelent * tdata_label_top(struct tdata *td);
// tdata_label_top_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 290
static signed int tdata_label_top_cb(void *data, void *arg);
// tdata_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 429
void tdata_merge(struct tdata *td1, struct tdata *td2);
// tdata_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 414
struct tdata * tdata_new(void);
// tdesc_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 265
void tdesc_free(struct tdesc *tdp);
// tdesc_free_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 252
static void tdesc_free_cb(void *arg, void *private);
// tdesc_idcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 419
signed int tdesc_idcmp(void *arg1, void *arg2);
// tdesc_idhash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 129
signed int tdesc_idhash(signed int nbuckets, void *data);
// tdesc_layoutcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 423
signed int tdesc_layoutcmp(void *arg1, void *arg2);
// tdesc_layouthash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 422
signed int tdesc_layouthash(signed int nbuckets, void *node);
// tdesc_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 417
const char * tdesc_name(struct tdesc *tdp);
// tdesc_namecmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 169
signed int tdesc_namecmp(void *arg1, void *arg2);
// tdesc_namehash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 148
signed int tdesc_namehash(signed int nbuckets, void *data);
// tdtrav_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 79
static signed int tdtrav_array(struct tdesc *this, struct tdtrav_data *tdtd);
// tdtrav_assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 65
signed int tdtrav_assert(struct tdesc *node, struct tdesc **nodep, void *private);
// tdtrav_func
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 61
static signed int tdtrav_func(struct tdesc *this, struct tdtrav_data *tdtd);
// tdtrav_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 55
void tdtrav_init(struct tdtrav_data *tdtd, signed int *vgenp, signed int (**firstops)(struct tdesc *, struct tdesc **, void *), signed int (**preops)(struct tdesc *, struct tdesc **, void *), signed int (**postops)(struct tdesc *, struct tdesc **, void *), void *private);
// tdtrav_init::$tmp::tmp_if_expr$1$object$object
//
signed int tmp_if_expr$1$object$object(struct tdesc *, struct tdesc **, void *);
// tdtrav_init::$tmp::tmp_if_expr$2$object$object
//
signed int tmp_if_expr$2$object$object(struct tdesc *, struct tdesc **, void *);
// tdtrav_init::$tmp::tmp_if_expr$3$object$object
//
signed int tmp_if_expr$3$object$object(struct tdesc *, struct tdesc **, void *);
// tdtrav_init::firstops$object$object
//
signed int firstops$object$object(struct tdesc *, struct tdesc **, void *);
// tdtrav_init::postops$object$object
//
signed int postops$object$object(struct tdesc *, struct tdesc **, void *);
// tdtrav_init::preops$object$object
//
signed int preops$object$object(struct tdesc *, struct tdesc **, void *);
// tdtrav_plain
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 55
static signed int tdtrav_plain(struct tdesc *this, struct tdtrav_data *tdtd);
// tdtrav_su
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 92
static signed int tdtrav_su(struct tdesc *this, struct tdtrav_data *tdtd);
// tdtraverse
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 149
signed int tdtraverse(struct tdesc *this, struct tdesc **thisp, struct tdtrav_data *tdtd);
// tdtraverse::1::descender$object
//
signed int descender$object(struct tdesc *, struct tdtrav_data *);
// tdtraverse::1::travcb$object
//
signed int travcb$object(struct tdesc *, struct tdesc **, void *);
// terminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 437
void terminate(const char *format, ...);
// terminate_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 596
static void terminate_cleanup(void);
// terminate_cleanup$link1$object
//
void terminate_cleanup$link1$object(void);
// uncompress
// file /usr/include/zlib.h line 1197
extern signed int uncompress(unsigned char *, unsigned long int *, const unsigned char *, unsigned long int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usage
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 219
void usage(void);
// vadebug
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 197
void vadebug(signed int level, const char *format, void **ap);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// warning
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 441
void warning(const char *format, ...);
// watch_dump
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 263
void watch_dump(signed int v);
// watch_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 256
void watch_set(void *addr, signed int len);
// whine
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 119
static void whine(const char *type, const char *format, void **ap);
// wip_add_work
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 383
static void wip_add_work(struct wip *slot, struct tdata *pow);
// wip_save_work
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 362
static void wip_save_work(struct workqueue *wq, struct wip *slot, signed int slotnum);
// worker_runphase1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 400
static void worker_runphase1(struct workqueue *wq);
// worker_runphase2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 447
static void worker_runphase2(struct workqueue *wq);
// worker_thread
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 518
static void worker_thread(struct workqueue *wq);
// wq_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 633
static void wq_init(struct workqueue *wq, signed int nfiles);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 564
static char * write_buffer(struct ctf_header *h, struct ctf_buf *buf, unsigned long int *resszp);
// write_compressed_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 588
static char * write_compressed_buffer(struct ctf_header *h, struct ctf_buf *buf, unsigned long int *resszp);
// write_ctf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 395
void write_ctf(struct tdata *td, const char *curname, const char *newname, signed int flags);
// write_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 457
static void write_file(struct _Elf *src, const char *srcname, struct _Elf *dst, const char *dstname, char *ctfdata, unsigned long int ctfsize, signed int flags);
// write_functions
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 159
static void write_functions(struct iidesc *idp, struct ctf_buf *b);
// write_label
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 134
static signed int write_label(void *arg1, void *arg2);
// write_objects
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 149
static void write_objects(struct iidesc *idp, struct ctf_buf *b);
// write_sized_type_rec
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 205
static void write_sized_type_rec(struct ctf_buf *b, struct ctf_type *ctt, unsigned long int size);
// write_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 229
static signed int write_type(void *arg1, void *arg2);
// write_unsized_type_rec
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 221
static void write_unsized_type_rec(struct ctf_buf *b, struct ctf_type *ctt);
// xcalloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 43
void * xcalloc(unsigned long int size);
// xmalloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 42
void * xmalloc(unsigned long int size);
// xrealloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 46
void * xrealloc(void *ptr, unsigned long int size);
// xstrdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 44
char * xstrdup(const char *str);
// xstrndup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/memory.c line 81
char * xstrndup(char *str, unsigned long int len);
// zError
// file /usr/include/zlib.h line 1746
extern const char * zError(signed int);
// z_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 132
extern const char * z_strerror(signed int err);
// z_uncompress
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 126
extern signed int z_uncompress(void *dst, unsigned long int *dstlen, const void *src, unsigned long int srclen);

struct anonymous$17
{
  // z_uncompress
  signed int (*z_uncompress)(unsigned char *, unsigned long int *, const unsigned char *, unsigned long int);
  // z_error
  const char * (*z_error)(signed int);
  // z_dlp
  void *z_dlp;
};

struct anonymous$0
{
  // stqe_next
  struct _Elf_Data *stqe_next;
};

struct anonymous$20
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$18
{
  // e_ident
  unsigned char e_ident[16l];
  // e_type
  unsigned short int e_type;
  // e_machine
  unsigned short int e_machine;
  // e_version
  unsigned int e_version;
  // e_entry
  unsigned int e_entry;
  // e_phoff
  unsigned int e_phoff;
  // e_shoff
  unsigned int e_shoff;
  // e_flags
  unsigned int e_flags;
  // e_ehsize
  unsigned short int e_ehsize;
  // e_phentsize
  unsigned short int e_phentsize;
  // e_phnum
  unsigned short int e_phnum;
  // e_shentsize
  unsigned short int e_shentsize;
  // e_shnum
  unsigned short int e_shnum;
  // e_shstrndx
  unsigned short int e_shstrndx;
};

struct anonymous$8
{
  // e_ident
  unsigned char e_ident[16l];
  // e_type
  unsigned short int e_type;
  // e_machine
  unsigned short int e_machine;
  // e_version
  unsigned int e_version;
  // e_entry
  unsigned long int e_entry;
  // e_phoff
  unsigned long int e_phoff;
  // e_shoff
  unsigned long int e_shoff;
  // e_flags
  unsigned int e_flags;
  // e_ehsize
  unsigned short int e_ehsize;
  // e_phentsize
  unsigned short int e_phentsize;
  // e_phnum
  unsigned short int e_phnum;
  // e_shentsize
  unsigned short int e_shentsize;
  // e_shnum
  unsigned short int e_shnum;
  // e_shstrndx
  unsigned short int e_shstrndx;
};

struct anonymous$22
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

struct anonymous$3
{
  // ar_date
  signed long int ar_date;
  // ar_name
  char *ar_name;
  // ar_gid
  unsigned int ar_gid;
  // ar_mode
  unsigned int ar_mode;
  // ar_rawname
  char *ar_rawname;
  // ar_size
  unsigned long int ar_size;
  // ar_uid
  unsigned int ar_uid;
};

struct anonymous$7
{
  // p_type
  unsigned int p_type;
  // p_flags
  unsigned int p_flags;
  // p_offset
  unsigned long int p_offset;
  // p_vaddr
  unsigned long int p_vaddr;
  // p_paddr
  unsigned long int p_paddr;
  // p_filesz
  unsigned long int p_filesz;
  // p_memsz
  unsigned long int p_memsz;
  // p_align
  unsigned long int p_align;
};

struct anonymous$19
{
  // sh_name
  unsigned int sh_name;
  // sh_type
  unsigned int sh_type;
  // sh_flags
  unsigned int sh_flags;
  // sh_addr
  unsigned int sh_addr;
  // sh_offset
  unsigned int sh_offset;
  // sh_size
  unsigned int sh_size;
  // sh_link
  unsigned int sh_link;
  // sh_info
  unsigned int sh_info;
  // sh_addralign
  unsigned int sh_addralign;
  // sh_entsize
  unsigned int sh_entsize;
};

struct anonymous$4
{
  // sh_name
  unsigned int sh_name;
  // sh_type
  unsigned int sh_type;
  // sh_flags
  unsigned long int sh_flags;
  // sh_addr
  unsigned long int sh_addr;
  // sh_offset
  unsigned long int sh_offset;
  // sh_size
  unsigned long int sh_size;
  // sh_link
  unsigned int sh_link;
  // sh_info
  unsigned int sh_info;
  // sh_addralign
  unsigned long int sh_addralign;
  // sh_entsize
  unsigned long int sh_entsize;
};

struct anonymous$24
{
  // st_name
  unsigned int st_name;
  // st_value
  unsigned int st_value;
  // st_size
  unsigned int st_size;
  // st_info
  unsigned char st_info;
  // st_other
  unsigned char st_other;
  // st_shndx
  unsigned short int st_shndx;
};

struct anonymous$5
{
  // st_name
  unsigned int st_name;
  // st_info
  unsigned char st_info;
  // st_other
  unsigned char st_other;
  // st_shndx
  unsigned short int st_shndx;
  // st_value
  unsigned long int st_value;
  // st_size
  unsigned long int st_size;
};

union anonymous$6
{
  // intr
  struct intr *intr;
  // tdesc
  struct tdesc *tdesc;
  // ardef
  struct ardef *ardef;
  // members
  struct mlist *members;
  // emem
  struct elist *emem;
  // fndef
  struct fndef *fndef;
};

union anonymous$11
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous$10
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$14
{
  // _iformat
  char _iformat;
  // _fformat
  signed int _fformat;
};

union anonymous$23
{
  // __data
  struct anonymous$22 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
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

union anonymous$9
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct ctf_list
{
  // l_prev
  struct ctf_list *l_prev;
  // l_next
  struct ctf_list *l_next;
};

struct ctf_arinfo
{
  // ctr_contents
  signed long int ctr_contents;
  // ctr_index
  signed long int ctr_index;
  // ctr_nelems
  unsigned int ctr_nelems;
};

struct ctf_encoding
{
  // cte_format
  unsigned int cte_format;
  // cte_offset
  unsigned int cte_offset;
  // cte_bits
  unsigned int cte_bits;
};

union anonymous$15
{
  // dtu_members
  struct ctf_list dtu_members;
  // dtu_arr
  struct ctf_arinfo dtu_arr;
  // dtu_enc
  struct ctf_encoding dtu_enc;
  // dtu_argv
  signed long int *dtu_argv;
};

union anonymous$12
{
  // _size
  unsigned short int _size;
  // _type
  unsigned short int _type;
};

struct _Elf_Data
{
  // d_align
  unsigned long int d_align;
  // d_buf
  void *d_buf;
  // d_off
  unsigned long int d_off;
  // d_size
  unsigned long int d_size;
  // d_type
  enum anonymous d_type;
  // d_version
  unsigned int d_version;
  // d_scn
  struct _Elf_Scn *d_scn;
  // d_flags
  unsigned int d_flags;
  // d_next
  struct anonymous$0 d_next;
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

struct alist
{
  // al_elements
  struct hash *al_elements;
  // al_namefree
  void (*al_namefree)(void *);
  // al_valfree
  void (*al_valfree)(void *);
};

struct alist_el
{
  // ale_name
  void *ale_name;
  // ale_value
  void *ale_value;
};

struct alist_iter_data
{
  // aid_func
  signed int (*aid_func)(void *, void *, void *);
  // aid_priv
  void *aid_priv;
};

struct ardef
{
  // ad_contents
  struct tdesc *ad_contents;
  // ad_idxtype
  struct tdesc *ad_idxtype;
  // ad_nelems
  unsigned int ad_nelems;
};

struct barrier
{
  // bar_lock
  union anonymous$9 bar_lock;
  // bar_numin
  signed int bar_numin;
  // bar_sem
  union anonymous$11 bar_sem;
  // bar_nthr
  signed int bar_nthr;
};

struct ctf_array
{
  // cta_contents
  unsigned short int cta_contents;
  // cta_index
  unsigned short int cta_index;
  // cta_nelems
  unsigned int cta_nelems;
};

struct strtab
{
  // str_hash
  struct strhash **str_hash;
  // str_hashsz
  unsigned long int str_hashsz;
  // str_bufs
  char **str_bufs;
  // str_ptr
  char *str_ptr;
  // str_nbufs
  unsigned long int str_nbufs;
  // str_bufsz
  unsigned long int str_bufsz;
  // str_nstrs
  unsigned long int str_nstrs;
  // str_size
  unsigned long int str_size;
};

struct ctf_buf
{
  // ctb_strtab
  struct strtab ctb_strtab;
  // ctb_base
  char *ctb_base;
  // ctb_end
  char *ctb_end;
  // ctb_ptr
  char *ctb_ptr;
  // ctb_size
  unsigned long int ctb_size;
  // nptent
  signed int nptent;
  // ntholes
  signed int ntholes;
};

struct ctf_bundle
{
  // ctb_file
  struct ctf_file *ctb_file;
  // ctb_type
  signed long int ctb_type;
  // ctb_dtd
  struct ctf_dtdef *ctb_dtd;
};

struct ctf_decl
{
  // cd_nodes
  struct ctf_list cd_nodes[4l];
  // cd_order
  signed int cd_order[4l];
  // cd_qualp
  enum anonymous$16 cd_qualp;
  // cd_ordp
  enum anonymous$16 cd_ordp;
  // cd_buf
  char *cd_buf;
  // cd_ptr
  char *cd_ptr;
  // cd_end
  char *cd_end;
  // cd_len
  unsigned long int cd_len;
  // cd_err
  signed int cd_err;
};

struct ctf_decl_node
{
  // cd_list
  struct ctf_list cd_list;
  // cd_type
  signed long int cd_type;
  // cd_kind
  unsigned int cd_kind;
  // cd_n
  unsigned int cd_n;
};

struct ctf_dmdef
{
  // dmd_list
  struct ctf_list dmd_list;
  // dmd_name
  char *dmd_name;
  // dmd_type
  signed long int dmd_type;
  // dmd_offset
  unsigned long int dmd_offset;
  // dmd_value
  signed int dmd_value;
};

struct ctf_dmodel
{
  // ctd_name
  const char *ctd_name;
  // ctd_code
  signed int ctd_code;
  // ctd_pointer
  unsigned long int ctd_pointer;
  // ctd_char
  unsigned long int ctd_char;
  // ctd_short
  unsigned long int ctd_short;
  // ctd_int
  unsigned long int ctd_int;
  // ctd_long
  unsigned long int ctd_long;
};

struct ctf_type
{
  // ctt_name
  unsigned int ctt_name;
  // ctt_info
  unsigned short int ctt_info;
  // _u
  union anonymous$12 _u;
  // ctt_lsizehi
  unsigned int ctt_lsizehi;
  // ctt_lsizelo
  unsigned int ctt_lsizelo;
};

struct ctf_dtdef
{
  // dtd_list
  struct ctf_list dtd_list;
  // dtd_hash
  struct ctf_dtdef *dtd_hash;
  // dtd_name
  char *dtd_name;
  // dtd_type
  signed long int dtd_type;
  // dtd_data
  struct ctf_type dtd_data;
  // dtd_u
  union anonymous$15 dtd_u;
};

struct ctf_enum
{
  // cte_name
  unsigned int cte_name;
  // cte_value
  signed int cte_value;
};

struct ctf_sect
{
  // cts_name
  const char *cts_name;
  // cts_type
  unsigned long int cts_type;
  // cts_flags
  unsigned long int cts_flags;
  // cts_data
  void *cts_data;
  // cts_size
  unsigned long int cts_size;
  // cts_entsize
  unsigned long int cts_entsize;
  // cts_offset
  signed long int cts_offset;
};

struct ctf_hash
{
  // h_buckets
  unsigned short int *h_buckets;
  // h_chains
  struct ctf_helem *h_chains;
  // h_nbuckets
  unsigned short int h_nbuckets;
  // h_nelems
  unsigned short int h_nelems;
  // h_free
  unsigned int h_free;
};

struct ctf_lookup
{
  // ctl_prefix
  const char *ctl_prefix;
  // ctl_len
  unsigned long int ctl_len;
  // ctl_hash
  struct ctf_hash *ctl_hash;
};

struct ctf_strs
{
  // cts_strs
  const char *cts_strs;
  // cts_len
  unsigned long int cts_len;
};

struct ctf_file
{
  // ctf_fileops
  const struct ctf_fileops *ctf_fileops;
  // ctf_data
  struct ctf_sect ctf_data;
  // ctf_symtab
  struct ctf_sect ctf_symtab;
  // ctf_strtab
  struct ctf_sect ctf_strtab;
  // ctf_structs
  struct ctf_hash ctf_structs;
  // ctf_unions
  struct ctf_hash ctf_unions;
  // ctf_enums
  struct ctf_hash ctf_enums;
  // ctf_names
  struct ctf_hash ctf_names;
  // ctf_lookups
  struct ctf_lookup ctf_lookups[5l];
  // ctf_str
  struct ctf_strs ctf_str[2l];
  // ctf_base
  const unsigned char *ctf_base;
  // ctf_buf
  const unsigned char *ctf_buf;
  // ctf_size
  unsigned long int ctf_size;
  // ctf_sxlate
  unsigned int *ctf_sxlate;
  // ctf_nsyms
  unsigned long int ctf_nsyms;
  // ctf_txlate
  unsigned int *ctf_txlate;
  // ctf_ptrtab
  unsigned short int *ctf_ptrtab;
  // ctf_typemax
  unsigned long int ctf_typemax;
  // ctf_dmodel
  const struct ctf_dmodel *ctf_dmodel;
  // ctf_parent
  struct ctf_file *ctf_parent;
  // ctf_parlabel
  const char *ctf_parlabel;
  // ctf_parname
  const char *ctf_parname;
  // ctf_refcnt
  unsigned int ctf_refcnt;
  // ctf_flags
  unsigned int ctf_flags;
  // ctf_errno
  signed int ctf_errno;
  // ctf_version
  signed int ctf_version;
  // ctf_dthash
  struct ctf_dtdef **ctf_dthash;
  // ctf_dthashlen
  unsigned long int ctf_dthashlen;
  // ctf_dtdefs
  struct ctf_list ctf_dtdefs;
  // ctf_dtstrlen
  unsigned long int ctf_dtstrlen;
  // ctf_dtnextid
  unsigned long int ctf_dtnextid;
  // ctf_dtoldid
  unsigned long int ctf_dtoldid;
  // ctf_specific
  void *ctf_specific;
};

struct ctf_fileops
{
  // ctfo_get_kind
  unsigned short int (*ctfo_get_kind)(unsigned short int);
  // ctfo_get_root
  unsigned short int (*ctfo_get_root)(unsigned short int);
  // ctfo_get_vlen
  unsigned short int (*ctfo_get_vlen)(unsigned short int);
};

struct ctf_funcinfo
{
  // ctc_return
  signed long int ctc_return;
  // ctc_argc
  unsigned int ctc_argc;
  // ctc_flags
  unsigned int ctc_flags;
};

struct ctf_preamble
{
  // ctp_magic
  unsigned short int ctp_magic;
  // ctp_version
  unsigned char ctp_version;
  // ctp_flags
  unsigned char ctp_flags;
};

struct ctf_header
{
  // cth_preamble
  struct ctf_preamble cth_preamble;
  // cth_parlabel
  unsigned int cth_parlabel;
  // cth_parname
  unsigned int cth_parname;
  // cth_lbloff
  unsigned int cth_lbloff;
  // cth_objtoff
  unsigned int cth_objtoff;
  // cth_funcoff
  unsigned int cth_funcoff;
  // cth_typeoff
  unsigned int cth_typeoff;
  // cth_stroff
  unsigned int cth_stroff;
  // cth_strlen
  unsigned int cth_strlen;
};

struct ctf_header_v1
{
  // cth_preamble
  struct ctf_preamble cth_preamble;
  // cth_objtoff
  unsigned int cth_objtoff;
  // cth_funcoff
  unsigned int cth_funcoff;
  // cth_typeoff
  unsigned int cth_typeoff;
  // cth_stroff
  unsigned int cth_stroff;
  // cth_strlen
  unsigned int cth_strlen;
};

struct ctf_helem
{
  // h_name
  unsigned int h_name;
  // h_type
  unsigned short int h_type;
  // h_next
  unsigned short int h_next;
};

struct ctf_lblent
{
  // ctl_label
  unsigned int ctl_label;
  // ctl_typeidx
  unsigned int ctl_typeidx;
};

struct ctf_lblinfo
{
  // ctb_typeidx
  signed long int ctb_typeidx;
};

struct ctf_lmember
{
  // ctlm_name
  unsigned int ctlm_name;
  // ctlm_type
  unsigned short int ctlm_type;
  // ctlm_pad
  unsigned short int ctlm_pad;
  // ctlm_offsethi
  unsigned int ctlm_offsethi;
  // ctlm_offsetlo
  unsigned int ctlm_offsetlo;
};

struct ctf_member
{
  // ctm_name
  unsigned int ctm_name;
  // ctm_type
  unsigned short int ctm_type;
  // ctm_offset
  unsigned short int ctm_offset;
};

struct ctf_membinfo
{
  // ctm_type
  signed long int ctm_type;
  // ctm_offset
  unsigned long int ctm_offset;
};

struct ctf_stype
{
  // ctt_name
  unsigned int ctt_name;
  // ctt_info
  unsigned short int ctt_info;
  // _u
  union anonymous$12 _u;
};

struct elist
{
  // el_name
  char *el_name;
  // el_number
  signed int el_number;
  // el_next
  struct elist *el_next;
};

struct equiv_data
{
  // ed_ta
  struct alist *ed_ta;
  // ed_node
  struct tdesc *ed_node;
  // ed_tgt
  struct tdesc *ed_tgt;
  // ed_clear_mark
  signed int ed_clear_mark;
  // ed_cur_mark
  signed int ed_cur_mark;
  // ed_selfuniquify
  signed int ed_selfuniquify;
};

struct fifo
{
  // f_head
  struct fifonode *f_head;
  // f_tail
  struct fifonode *f_tail;
};

struct fifonode
{
  // fn_data
  void *fn_data;
  // fn_next
  struct fifonode *fn_next;
};

struct fndef
{
  // fn_ret
  struct tdesc *fn_ret;
  // fn_nargs
  unsigned int fn_nargs;
  // fn_args
  struct tdesc **fn_args;
  // fn_vargs
  unsigned int fn_vargs;
};

struct hash
{
  // h_nbuckets
  signed int h_nbuckets;
  // h_buckets
  struct list **h_buckets;
  // h_hashfn
  signed int (*h_hashfn)(signed int, void *);
  // h_cmp
  signed int (*h_cmp)(void *, void *);
};

struct hash_data
{
  // hd_hash
  struct hash *hd_hash;
  // hd_fun
  signed int (*hd_fun)(void *, void *);
  // hd_key
  void *hd_key;
  // hd_private
  void *hd_private;
  // hd_ret
  void *hd_ret;
};

struct iiburst
{
  // iib_nfuncs
  signed int iib_nfuncs;
  // iib_curfunc
  signed int iib_curfunc;
  // iib_funcs
  struct iidesc **iib_funcs;
  // iib_nobjts
  signed int iib_nobjts;
  // iib_curobjt
  signed int iib_curobjt;
  // iib_objts
  struct iidesc **iib_objts;
  // iib_types
  struct list *iib_types;
  // iib_maxtypeid
  signed int iib_maxtypeid;
  // iib_td
  struct tdata *iib_td;
  // iib_tdtd
  struct tdtrav_data *iib_tdtd;
};

struct iidesc
{
  // ii_type
  enum iitype ii_type;
  // ii_name
  char *ii_name;
  // ii_dtype
  struct tdesc *ii_dtype;
  // ii_owner
  char *ii_owner;
  // ii_flags
  signed int ii_flags;
  // ii_nargs
  signed int ii_nargs;
  // ii_args
  struct tdesc **ii_args;
  // ii_vargs
  signed int ii_vargs;
};

struct iidesc_find
{
  // iif_tgt
  struct iidesc *iif_tgt;
  // iif_ret
  struct iidesc *iif_ret;
};

struct iidesc_match
{
  // iim_fuzzy
  signed int iim_fuzzy;
  // iim_ret
  struct iidesc *iim_ret;
  // iim_name
  char *iim_name;
  // iim_file
  char *iim_file;
  // iim_bind
  unsigned char iim_bind;
};

struct iifind_data
{
  // iif_template
  struct iidesc *iif_template;
  // iif_ta
  struct alist *iif_ta;
  // iif_newidx
  signed int iif_newidx;
  // iif_refmerge
  signed int iif_refmerge;
};

struct internal_state
{
  // dummy
  signed int dummy;
};

struct intr
{
  // intr_type
  enum anonymous$13 intr_type;
  // intr_signed
  signed int intr_signed;
  // _u
  union anonymous$14 _u;
  // intr_offset
  signed int intr_offset;
  // intr_nbits
  signed int intr_nbits;
};

struct labelent
{
  // le_name
  char *le_name;
  // le_idx
  signed int le_idx;
};

struct linfo_cb_arg
{
  // lca_name
  const char *lca_name;
  // lca_info
  struct ctf_lblinfo *lca_info;
};

struct list
{
  // l_data
  void *l_data;
  // l_next
  struct list *l_next;
};

struct merge_cb_data
{
  // md_parent
  struct tdata *md_parent;
  // md_tgt
  struct tdata *md_tgt;
  // md_ta
  struct alist *md_ta;
  // md_fdida
  struct alist *md_fdida;
  // md_iitba
  struct list **md_iitba;
  // md_tdtba
  struct hash *md_tdtba;
  // md_tdtbr
  struct list **md_tdtbr;
  // md_flags
  signed int md_flags;
};

struct mlist
{
  // ml_offset
  signed int ml_offset;
  // ml_size
  signed int ml_size;
  // ml_name
  char *ml_name;
  // ml_type
  struct tdesc *ml_type;
  // ml_next
  struct mlist *ml_next;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct redir_mstr_data
{
  // rmd_tgt
  struct tdata *rmd_tgt;
  // rmd_map
  struct alist *rmd_map;
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

struct resbuf
{
  // rb_base
  char *rb_base;
  // rb_ptr
  char *rb_ptr;
  // rb_size
  unsigned long int rb_size;
  // rb_zstr
  struct z_stream_s rb_zstr;
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

struct stat64
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

struct strhash
{
  // str_data
  const char *str_data;
  // str_buf
  unsigned long int str_buf;
  // str_off
  unsigned long int str_off;
  // str_len
  unsigned long int str_len;
  // str_next
  struct strhash *str_next;
};

struct symit_data
{
  // si_shdr
  struct anonymous$4 si_shdr;
  // si_symd
  struct _Elf_Data *si_symd;
  // si_strd
  struct _Elf_Data *si_strd;
  // si_cursym
  struct anonymous$5 si_cursym;
  // si_curname
  char *si_curname;
  // si_curfile
  char *si_curfile;
  // si_nument
  signed int si_nument;
  // si_next
  signed int si_next;
};

struct tdata
{
  // td_curemark
  signed int td_curemark;
  // td_curvgen
  signed int td_curvgen;
  // td_nextid
  signed int td_nextid;
  // td_iihash
  struct hash *td_iihash;
  // td_layouthash
  struct hash *td_layouthash;
  // td_idhash
  struct hash *td_idhash;
  // td_fwdlist
  struct list *td_fwdlist;
  // td_parlabel
  char *td_parlabel;
  // td_parname
  char *td_parname;
  // td_labels
  struct list *td_labels;
  // td_mergelock
  union anonymous$9 td_mergelock;
  // td_ref
  signed int td_ref;
};

struct tdesc
{
  // t_name
  char *t_name;
  // t_next
  struct tdesc *t_next;
  // t_id
  signed int t_id;
  // t_hash
  struct tdesc *t_hash;
  // t_type
  enum stabtype t_type;
  // t_size
  signed int t_size;
  // t_data
  union anonymous$6 t_data;
  // t_flags
  signed int t_flags;
  // t_vgen
  signed int t_vgen;
  // t_emark
  signed int t_emark;
};

struct tdesc_ops
{
  // name
  const char *name;
  // equiv
  signed int (*equiv)(struct tdesc *, struct tdesc *, struct equiv_data *);
  // conjure
  struct tdesc * (*conjure)(struct tdesc *, signed int, struct merge_cb_data *);
};

struct tdtrav_data
{
  // vgen
  signed int vgen;
  // firstops
  signed int (**firstops)(struct tdesc *, struct tdesc **, void *);
  // preops
  signed int (**preops)(struct tdesc *, struct tdesc **, void *);
  // postops
  signed int (**postops)(struct tdesc *, struct tdesc **, void *);
  // private
  void *private;
};

struct wip
{
  // wip_lock
  union anonymous$9 wip_lock;
  // wip_cv
  union anonymous$23 wip_cv;
  // wip_td
  struct tdata *wip_td;
  // wip_nmerged
  signed int wip_nmerged;
  // wip_batchid
  signed int wip_batchid;
};

struct workqueue
{
  // wq_next_batchid
  signed int wq_next_batchid;
  // wq_maxbatchsz
  signed int wq_maxbatchsz;
  // wq_wip
  struct wip *wq_wip;
  // wq_nwipslots
  signed int wq_nwipslots;
  // wq_nthreads
  signed int wq_nthreads;
  // wq_ithrottle
  signed int wq_ithrottle;
  // wq_queue_lock
  union anonymous$9 wq_queue_lock;
  // wq_queue
  struct fifo *wq_queue;
  // wq_work_avail
  union anonymous$23 wq_work_avail;
  // wq_work_removed
  union anonymous$23 wq_work_removed;
  // wq_ninqueue
  signed int wq_ninqueue;
  // wq_nextpownum
  signed int wq_nextpownum;
  // wq_donequeue_lock
  union anonymous$9 wq_donequeue_lock;
  // wq_donequeue
  struct fifo *wq_donequeue;
  // wq_lastdonebatch
  signed int wq_lastdonebatch;
  // wq_done_cv
  union anonymous$23 wq_done_cv;
  // wq_alldone_cv
  union anonymous$23 wq_alldone_cv;
  // wq_alldone
  signed int wq_alldone;
  // wq_nomorefiles
  signed int wq_nomorefiles;
  // wq_thread
  unsigned long int *wq_thread;
  // wq_bar1
  struct barrier wq_bar1;
  // wq_bar2
  struct barrier wq_bar2;
};


// _CTF_EMPTY
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_hash.c line 32
static const unsigned short int _CTF_EMPTY[1l] = { (const unsigned short int)0 };
// _CTF_NULLSTR
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 41
const char _CTF_NULLSTR[1l] = { 0 };
// _CTF_SECTION
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 40
const char _CTF_SECTION[10l] = { '.', 'S', 'U', 'N', 'W', '_', 'c', 't', 'f', 0 };
// _CTF_STRTAB_TEMPLATE
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 41
static const char _CTF_STRTAB_TEMPLATE[8l] = { 0, 'P', 'A', 'R', 'E', 'N', 'T', 0 };
// _PAGEMASK
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 59
static unsigned long int _PAGEMASK;
// _PAGESIZE
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 58
static unsigned long int _PAGESIZE;
// _ctf_errlist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_error.c line 31
static const char * const _ctf_errlist[44l] = { "File is not in CTF or ELF format", "File uses more recent ELF version than libctf",
    "File uses more recent CTF version than libctf",
    "File is a different endian-ness than libctf",
    "Symbol table uses invalid entry size", "Symbol table data buffer is not valid",
    "String table data buffer is not valid",
    "File data structure corruption detected",
    "File does not contain CTF data", "Buffer does not contain CTF data", "Symbol table information is not available",
    "Type information is in parent and unavailable",
    "Cannot import types with different data model",
    "Failed to mmap a needed data section", "Decompression package SUNWzlib not installed",
    "Failed to initialize decompression library",
    "Failed to allocate decompression buffer",
    "Failed to decompress CTF data", "External string table is not available",
    "String name offset is corrupt", "Invalid type identifier", "Type is not a struct or union", "Type is not an enum", "Type is not a struct, union, or enum", "Type is not an integer or float", "Type is not an array", "Type does not reference another type", "Input buffer is too small for type name",
    "No type information available for that name",
    "Syntax error in type name", "Symbol table entry is not a function", "No function information available for symbol",
    "Symbol table entry is not a data object",
    "No type information available for symbol",
    "No label information available for that name",
    "File does not contain any labels", "Feature not supported", "Invalid enum element name", "Invalid member name", "CTF container is read-only", "Limit on number of dynamic type members reached",
    "Limit on number of dynamic types reached",
    "Duplicate member name definition", "Conflicting type is already defined" };
// _ctf_nerr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_error.c line 78
static const signed int _ctf_nerr = (const signed int)(sizeof(const char * const [44l]) /*352ul*/  / sizeof(const char *) /*8ul*/ );
// _libctf_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 44
signed int _libctf_debug = 0;
// _libctf_models
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 34
static const struct ctf_dmodel _libctf_models[3l] = { { .ctd_name="ILP32", .ctd_code=1, .ctd_pointer=(unsigned long int)4, .ctd_char=(unsigned long int)1,
    .ctd_short=(unsigned long int)2, .ctd_int=(unsigned long int)4,
    .ctd_long=(unsigned long int)4 },
    { .ctd_name="LP64", .ctd_code=2, .ctd_pointer=(unsigned long int)8, .ctd_char=(unsigned long int)1,
    .ctd_short=(unsigned long int)2, .ctd_int=(unsigned long int)4,
    .ctd_long=(unsigned long int)8 },
    { .ctd_name=(const char *)(void *)0, .ctd_code=0, .ctd_pointer=(unsigned long int)0,
    .ctd_char=(unsigned long int)0, .ctd_short=(unsigned long int)0,
    .ctd_int=(unsigned long int)0, .ctd_long=(unsigned long int)0 } };
// _libctf_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 43
signed int _libctf_version = 2;
// alist_def_print_cb_key_int
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 176
static signed int alist_def_print_cb_key_int = 1;
// alist_def_print_cb_value_int
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 177
static signed int alist_def_print_cb_value_int = 1;
// build_hashes_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 428
static signed int (*build_hashes_cbs[14l])(struct tdesc *, struct tdesc **, void *);
// build_hashes_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 428
static signed int (*build_hashes_cbs[14l])(struct tdesc *, struct tdesc **, void *) = { (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    build_hashes, build_hashes, build_hashes, build_hashes, build_hashes, build_hashes, build_hashes, build_hashes, build_hashes, tdtrav_assert, build_hashes, build_hashes, build_hashes };
// burst_types_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 99
static signed int (*burst_types_cbs[14l])(struct tdesc *, struct tdesc **, void *);
// burst_types_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 99
static signed int (*burst_types_cbs[14l])(struct tdesc *, struct tdesc **, void *) = { (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    save_type_by_id, save_type_by_id, save_type_by_id, save_type_by_id, save_type_by_id, save_type_by_id, save_type_by_id, save_type_by_id, save_type_by_id, tdtrav_assert, save_type_by_id, save_type_by_id, save_type_by_id };
// ctf_fileops
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 82
static const struct ctf_fileops ctf_fileops[3l];
// ctf_fileops
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 82
static const struct ctf_fileops ctf_fileops[3l] = { { .ctfo_get_kind=(unsigned short int (*)(unsigned short int))(void *)0, .ctfo_get_root=(unsigned short int (*)(unsigned short int))(void *)0,
    .ctfo_get_vlen=((unsigned short int (*)(unsigned short int))NULL) },
    { .ctfo_get_kind=get_kind_v1, .ctfo_get_root=get_root_v1, .ctfo_get_vlen=get_vlen_v1 },
    { .ctfo_get_kind=get_kind_v2, .ctfo_get_root=get_root_v2, .ctfo_get_vlen=get_vlen_v2 } };
// curfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 50
char *curfile;
// debug_level
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 214
signed int debug_level = 0;
// dynsym
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 213
static signed int dynsym;
// free_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 233
static void (*free_cbs[14l])(struct tdesc *);
// free_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 233
static void (*free_cbs[14l])(struct tdesc *) = { (void (*)(struct tdesc *))(void *)0, free_intr, (void (*)(struct tdesc *))(void *)0, free_ardef, (void (*)(struct tdesc *))(void *)0, free_mlist, free_mlist, free_elist, (void (*)(struct tdesc *))(void *)0, (void (*)(struct tdesc *))(void *)0, (void (*)(struct tdesc *))(void *)0, (void (*)(struct tdesc *))(void *)0, (void (*)(struct tdesc *))(void *)0, (void (*)(struct tdesc *))(void *)0 };
// fwd_redir_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 887
static signed int (*fwd_redir_cbs[14l])(struct tdesc *, struct tdesc **, void *);
// fwd_redir_cbs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 887
static signed int (*fwd_redir_cbs[14l])(struct tdesc *, struct tdesc **, void *) = { (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    fwd_redir, (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    tdtrav_assert, (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0 };
// map_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 555
static signed int (*map_post[14l])(struct tdesc *, struct tdesc **, void *);
// map_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 555
static signed int (*map_post[14l])(struct tdesc *, struct tdesc **, void *) = { (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    map_td_tree_post, map_td_tree_post, map_td_tree_post, map_td_tree_post, map_td_tree_post, map_td_tree_post, map_td_tree_post, map_td_tree_post, map_td_tree_post, tdtrav_assert, map_td_tree_post, map_td_tree_post, map_td_tree_post };
// map_pre
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 538
static signed int (*map_pre[14l])(struct tdesc *, struct tdesc **, void *);
// map_pre
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 538
static signed int (*map_pre[14l])(struct tdesc *, struct tdesc **, void *) = { (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    map_td_tree_pre, map_td_tree_pre, map_td_tree_pre, map_td_tree_pre, map_td_tree_pre, map_td_tree_pre, map_td_tree_pre, map_td_tree_pre, map_td_tree_pre, tdtrav_assert, map_td_tree_pre, map_td_tree_pre, map_td_tree_pre };
// map_self_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 572
static signed int (*map_self_post[14l])(struct tdesc *, struct tdesc **, void *);
// map_self_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 572
static signed int (*map_self_post[14l])(struct tdesc *, struct tdesc **, void *) = { (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post, tdtrav_assert, map_td_tree_self_post, map_td_tree_self_post, map_td_tree_self_post };
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// outfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 211
static char *outfile = (char *)(void *)0;
// progname
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 210
const char *progname;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// tddescenders
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 40
signed int (*tddescenders[14l])(struct tdesc *, struct tdtrav_data *);
// tddescenders
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 40
signed int (*tddescenders[14l])(struct tdesc *, struct tdtrav_data *) = { (signed int (*)(struct tdesc *, struct tdtrav_data *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdtrav_data *))(void *)0,
    tdtrav_plain, tdtrav_array, tdtrav_func, tdtrav_su, tdtrav_su, (signed int (*)(struct tdesc *, struct tdtrav_data *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdtrav_data *))(void *)0,
    tdtrav_plain, (signed int (*)(struct tdesc *, struct tdtrav_data *))(void *)0,
    tdtrav_plain, tdtrav_plain, tdtrav_plain };
// tdesc_ops
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1128
struct tdesc_ops tdesc_ops[14l];
// tdesc_ops
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1128
struct tdesc_ops tdesc_ops[14l] = { { .name="ERROR! BAD tdesc TYPE", .equiv=(signed int (*)(struct tdesc *, struct tdesc *, struct equiv_data *))(void *)0, .conjure=(struct tdesc * (*)(struct tdesc *, signed int, struct merge_cb_data *))(void *)0 },
    { .name="intrinsic", .equiv=equiv_intrinsic, .conjure=conjure_intrinsic },
    { .name="pointer", .equiv=equiv_plain, .conjure=conjure_plain },
    { .name="array", .equiv=equiv_array, .conjure=conjure_array },
    { .name="function", .equiv=equiv_function, .conjure=conjure_function },
    { .name="struct", .equiv=equiv_su, .conjure=conjure_su },
    { .name="union", .equiv=equiv_su, .conjure=conjure_su },
    { .name="enum", .equiv=equiv_enum, .conjure=conjure_enum },
    { .name="forward", .equiv=(signed int (*)(struct tdesc *, struct tdesc *, struct equiv_data *))(void *)0, .conjure=conjure_forward },
    { .name="typedef", .equiv=equiv_plain, .conjure=conjure_plain },
    { .name="typedef_unres", .equiv=equiv_assert, .conjure=conjure_assert },
    { .name="volatile", .equiv=equiv_plain, .conjure=conjure_plain },
    { .name="const", .equiv=equiv_plain, .conjure=conjure_plain },
    { .name="restrict", .equiv=equiv_plain, .conjure=conjure_plain } };
// tdnops
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 41
signed int (*tdnops[14l])(struct tdesc *, struct tdesc **, void *) = { (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0,
    (signed int (*)(struct tdesc *, struct tdesc **, void *))(void *)0 };
// terminate_cleanup$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 46
static void (*terminate_cleanup$link1)(void) = (void (*)(void))(void *)0;
// tmpname
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 212
static char *tmpname = (char *)(void *)0;
// watch_address
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 252
char *watch_address = (char *)(void *)0;
// watch_length
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 253
signed int watch_length = 0;
// wq
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 748
static struct workqueue wq;
// zlib
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 56
static struct anonymous$17 zlib;

// __assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/compat/opensolaris/include/assert.h line 51
static inline void __assert(const char *expr, const char *file, signed int line)
{
  fprintf(stderr, "Assertion failed: (%s), file %s, line %d.\n", expr, file, line);
  abort();
}

// __assert$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/compat/opensolaris/include/assert.h line 51
static inline void __assert$link1(const char *expr$link1, const char *file$link1, signed int line$link1)
{
  fprintf(stderr, "Assertion failed: (%s), file %s, line %d.\n", expr$link1, file$link1, line$link1);
  abort();
}

// __assert$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/compat/opensolaris/include/assert.h line 51
static inline void __assert$link2(const char *expr$link2, const char *file$link2, signed int line$link2)
{
  fprintf(stderr, "Assertion failed: (%s), file %s, line %d.\n", expr$link2, file$link2, line$link2);
  abort();
}

// _libctf_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 67
void _libctf_init(void)
{
  char *return_value_getenv$1;
  return_value_getenv$1=getenv("LIBCTF_DEBUG");
  _libctf_debug = (signed int)(return_value_getenv$1 != (char *)(void *)0);
  signed int return_value_getpagesize$2;
  return_value_getpagesize$2=getpagesize();
  _PAGESIZE = (unsigned long int)return_value_getpagesize$2;
  _PAGEMASK = ~(_PAGESIZE - (unsigned long int)1);
}

// aborterr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 438
void aborterr(const char *format, ...)
{
  void **ap = (void **)&format;
  whine("ERROR", format, ap);
  ap = ((void **)NULL);
  exit(0);
}

// add_iitba_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 951
static signed int add_iitba_cb(void *data, void *private)
{
  struct merge_cb_data *mcd = (struct merge_cb_data *)private;
  struct iidesc *tba = (struct iidesc *)data;
  struct iidesc *new;
  struct iifind_data iif;
  signed int newidx;
  newidx=get_mapping(mcd->md_ta, tba->ii_dtype->t_id);
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(newidx != -1);
  list_remove(mcd->md_iitba, data, (signed int (*)(void *, void *, void *))(void *)0, (void *)0);
  iif.iif_template = tba;
  iif.iif_ta = mcd->md_ta;
  iif.iif_newidx = newidx;
  iif.iif_refmerge = mcd->md_flags & 0x2;
  signed int return_value_hash_match$2;
  return_value_hash_match$2=hash_match(mcd->md_parent->td_iihash, (void *)tba, iidesc_match, (void *)&iif);
  char *tmp_if_expr$1;
  if(return_value_hash_match$2 == 1)
  {
    if(!(tba->ii_name == ((char *)NULL)))
      tmp_if_expr$1 = tba->ii_name;

    else
      tmp_if_expr$1 = "(anon)";
    debug(3, "iidesc_t %s already exists\n", tmp_if_expr$1);
    return 1;
  }

  else
  {
    new=conjure_iidesc(tba, mcd);
    hash_add(mcd->md_tgt->td_iihash, (void *)new);
    return 1;
  }
}

// add_mapping
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 180
static void add_mapping(struct alist *ta, signed int srcid, signed int tgtid)
{
  debug(3, "Adding mapping %u <%x> => %u <%x>\n", srcid, srcid, tgtid, tgtid);
  signed int return_value_alist_find$1;
  return_value_alist_find$1=alist_find(ta, (void *)(unsigned long int)srcid, (void **)(void *)0);
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(!(return_value_alist_find$1 != 0));
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(srcid != 0 && tgtid != 0);
  alist_add(ta, (void *)(unsigned long int)srcid, (void *)(unsigned long int)tgtid);
}

// add_tdesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 983
static signed int add_tdesc(struct tdesc *oldtdp, signed int newid, struct merge_cb_data *mcd)
{
  struct tdesc *newtdp;
  struct tdesc template;
  template.t_id = newid;
  signed int return_value_hash_find$1;
  return_value_hash_find$1=hash_find(mcd->md_parent->td_idhash, (void *)&template, (void **)(void *)0);
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(return_value_hash_find$1 == 0);
  const char *return_value_tdesc_name$2;
  return_value_tdesc_name$2=tdesc_name(oldtdp);
  debug(3, "trying to conjure %d %s (%d, <%x>) as %d, <%x>\n", oldtdp->t_type, return_value_tdesc_name$2, oldtdp->t_id, oldtdp->t_id, newid, newid);
  newtdp=tdesc_ops[(signed long int)oldtdp->t_type].conjure(oldtdp, newid, mcd);
  if(newtdp == ((struct tdesc *)NULL))
    return 0;

  else
  {
    debug(3, "succeeded\n");
    hash_add(mcd->md_tgt->td_idhash, (void *)newtdp);
    hash_add(mcd->md_tgt->td_layouthash, (void *)newtdp);
    return 1;
  }
}

// add_tdtba_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1010
static signed int add_tdtba_cb(void *data, void *arg)
{
  struct tdesc *tdp = (struct tdesc *)data;
  struct merge_cb_data *mcd = (struct merge_cb_data *)arg;
  signed int newid;
  signed int rc;
  newid=get_mapping(mcd->md_ta, tdp->t_id);
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(newid != -1);
  rc=add_tdesc(tdp, newid, mcd);
  if(!(rc == 0))
    hash_remove(mcd->md_tdtba, (void *)tdp);

  return rc;
}

// add_tdtbr_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1027
static signed int add_tdtbr_cb(void *data, void *arg)
{
  struct tdesc **tdpp = (struct tdesc **)data;
  struct merge_cb_data *mcd = (struct merge_cb_data *)arg;
  const char *return_value_tdesc_name$1;
  return_value_tdesc_name$1=tdesc_name(*tdpp);
  debug(3, "Remapping %s (%d)\n", return_value_tdesc_name$1, (*tdpp)->t_id);
  signed int return_value_remap_node$2;
  return_value_remap_node$2=remap_node(tdpp, *tdpp, -1, (struct tdesc *)(void *)0, mcd);
  if(return_value_remap_node$2 == 0)
    return 0;

  else
  {
    list_remove(mcd->md_tdtbr, (void *)tdpp, (signed int (*)(void *, void *, void *))(void *)0, (void *)0);
    return 1;
  }
}

// alist_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 113
void alist_add(struct alist *alist, void *name, void *value)
{
  struct alist_el *el;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct alist_el) /*16ul*/ );
  el = (struct alist_el *)return_value_xmalloc$1;
  el->ale_name = name;
  el->ale_value = value;
  hash_add(alist->al_elements, (void *)el);
}

// alist_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 64
static signed int alist_cmp(void *arg1, void *arg2)
{
  struct alist_el *el1 = (struct alist_el *)arg1;
  struct alist_el *el2 = (struct alist_el *)arg2;
  return (signed int)((unsigned long int)el1->ale_name != (unsigned long int)el2->ale_name);
}

// alist_def_print_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 180
static signed int alist_def_print_cb(void *key, void *value)
{
  printf("Key: ");
  if(alist_def_print_cb_key_int == 1)
    printf("%5lu ", (unsigned long int)key);

  else
    printf("%s\n", (char *)key);
  printf("Value: ");
  if(alist_def_print_cb_value_int == 1)
    printf("%5lu\n", (unsigned long int)value);

  else
    printf("%s\n", (char *)key);
  return 1;
}

// alist_dump
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 209
signed int alist_dump(struct alist *alist, signed int (*printer)(void *, void *))
{
  if(printer == ((signed int (*)(void *, void *))NULL))
    printer = alist_def_print_cb;

  signed int return_value_hash_iter$1;
  return_value_hash_iter$1=hash_iter(alist->al_elements, alist_dump_cb, (void *)printer);
  return return_value_hash_iter$1;
}

// alist_dump_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 198
static signed int alist_dump_cb(void *node, void *private)
{
  signed int (*printer)(void *, void *) = (signed int (*)(void *, void *))private;
  struct alist_el *el = (struct alist_el *)node;
  printer(el->ale_name, el->ale_value);
  return 1;
}

// alist_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 124
signed int alist_find(struct alist *alist, void *name, void **value)
{
  struct alist_el template;
  struct alist_el *retx;
  void *ret;
  template.ale_name = name;
  signed int return_value_hash_find$1;
  return_value_hash_find$1=hash_find(alist->al_elements, (void *)&template, &ret);
  if(return_value_hash_find$1 == 0)
    return 0;

  else
  {
    if(!(value == ((void **)NULL)))
    {
      retx = (struct alist_el *)ret;
      *value = retx->ale_value;
    }

    return 1;
  }
}

// alist_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 106
void alist_free(struct alist *alist)
{
  hash_free(alist->al_elements, alist_free_cb, (void *)alist);
  free((void *)alist);
}

// alist_free_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 94
static void alist_free_cb(void *arg1, void *arg2)
{
  struct alist_el *el = (struct alist_el *)arg1;
  struct alist *alist = (struct alist *)arg2;
  if(!(alist->al_namefree == ((void (*)(void *))NULL)))
    alist->al_namefree(el->ale_name);

  if(!(alist->al_valfree == ((void (*)(void *))NULL)))
    alist->al_valfree(el->ale_name);

  free((void *)el);
}

// alist_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 55
static signed int alist_hash(signed int nbuckets, void *arg)
{
  struct alist_el *el = (struct alist_el *)arg;
  unsigned long int num = (unsigned long int)el->ale_name;
  return (signed int)(num % (unsigned long int)nbuckets);
}

// alist_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 155
signed int alist_iter(struct alist *alist, signed int (*func)(void *, void *, void *), void *private)
{
  struct alist_iter_data aid;
  aid.aid_func = func;
  aid.aid_priv = private;
  signed int return_value_hash_iter$1;
  return_value_hash_iter$1=hash_iter(alist->al_elements, alist_iter_cb, (void *)&aid);
  return return_value_hash_iter$1;
}

// alist_iter_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 147
static signed int alist_iter_cb(void *arg1, void *arg2)
{
  struct alist_el *el = (struct alist_el *)arg1;
  struct alist_iter_data *aid = (struct alist_iter_data *)arg2;
  signed int return_value;
  return_value=aid->aid_func(el->ale_name, el->ale_value, aid->aid_priv);
  return return_value;
}

// alist_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 87
struct alist * alist_new(void (*namefree)(void *), void (*valfree)(void *))
{
  struct alist *return_value_alist_xnew$1;
  return_value_alist_xnew$1=alist_xnew(997, namefree, valfree, alist_hash, alist_cmp);
  return return_value_alist_xnew$1;
}

// alist_stats
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 170
void alist_stats(struct alist *alist, signed int verbose)
{
  printf("Alist statistics\n");
  hash_stats(alist->al_elements, verbose);
}

// alist_xnew
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/alist.c line 72
struct alist * alist_xnew(signed int nbuckets, void (*namefree)(void *), void (*valfree)(void *), signed int (*hashfn)(signed int, void *), signed int (*cmpfn)(void *, void *))
{
  struct alist *alist;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct alist) /*24ul*/ );
  alist = (struct alist *)return_value_xcalloc$1;
  alist->al_elements=hash_new(nbuckets, hashfn, cmpfn);
  alist->al_namefree = namefree;
  alist->al_valfree = valfree;
  return alist;
}

// barrier_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/barrier.c line 49
extern void barrier_init(struct barrier *bar, signed int nthreads)
{
  pthread_mutex_init(&bar->bar_lock, (const union anonymous$10 *)(void *)0);
  sem_init(&bar->bar_sem, 0, (unsigned int)0);
  bar->bar_numin = 0;
  bar->bar_nthr = nthreads;
}

// barrier_wait
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/barrier.c line 63
extern signed int barrier_wait(struct barrier *bar)
{
  pthread_mutex_lock(&bar->bar_lock);
  bar->bar_numin = bar->bar_numin + 1;
  if(!(bar->bar_numin >= bar->bar_nthr))
  {
    pthread_mutex_unlock(&bar->bar_lock);
    sem_wait(&bar->bar_sem);
    return 0;
  }

  else
  {
    signed int i;
    bar->bar_numin = 0;
    i = 1;
    for( ; !(i >= bar->bar_nthr); i = i + 1)
      sem_post(&bar->bar_sem);
    pthread_mutex_unlock(&bar->bar_lock);
    return 1;
  }
}

// bcopy_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 555
static signed long int bcopy_data(void *buf, unsigned long int n, void *data)
{
  char **posp = (char **)data;
  bcopy(buf, (void *)*posp, n);
  *posp = *posp + (signed long int)n;
  return (signed long int)n;
}

// build_hashes
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 418
static signed int build_hashes(struct tdesc *ctdp, struct tdesc **ctdpp, void *private)
{
  struct tdata *td = (struct tdata *)private;
  hash_add(td->td_idhash, (void *)ctdp);
  hash_add(td->td_layouthash, (void *)ctdp);
  return 1;
}

// built_source_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 50
enum source_types built_source_types(struct _Elf *elf, const char *file)
{
  enum source_types types = (enum source_types)SOURCE_NONE;
  struct symit_data *si;
  si=symit_new(elf, file);
  struct anonymous$5 *return_value_symit_next$1;
  _Bool tmp_if_expr$2;
  if(si == ((struct symit_data *)NULL))
    return (enum source_types)SOURCE_NONE;

  else
  {
    do
    {
      return_value_symit_next$1=symit_next(si, 4);
      if(return_value_symit_next$1 == ((struct anonymous$5 *)NULL))
        break;

      char *name;
      name=symit_name(si);
      unsigned long int len;
      len=strlen(name);
      if(!(len >= 2ul))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = (signed int)name[(signed long int)(len - (unsigned long int)2)] != 46 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
        types = types | (enum source_types)SOURCE_UNKNOWN;

      else
        switch((signed int)name[(signed long int)(len - (unsigned long int)1)])
        {
          case 99:
          {
            types = types | (enum source_types)SOURCE_C;
            break;
          }
          case 104:
            break;
          case 115:

          case 83:
          {
            types = types | (enum source_types)SOURCE_S;
            break;
          }
          default:
            types = types | (enum source_types)SOURCE_UNKNOWN;
        }
    }
    while((_Bool)1);
    symit_free(si);
    return types;
  }
}

// burst_iitypes
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 58
static signed int burst_iitypes(void *data, void *arg)
{
  struct iidesc *ii = (struct iidesc *)data;
  struct iiburst *iiburst = (struct iiburst *)arg;
  if((signed int)ii->ii_type == II_GFUN || (signed int)ii->ii_type == II_SFUN || (signed int)ii->ii_type == II_GVAR || (signed int)ii->ii_type == II_SVAR)
  {
    if((0x1 & ii->ii_flags) == 0)
      return 0;

  }

  ii->ii_dtype->t_flags = ii->ii_dtype->t_flags | 0x1;
  iitraverse_td((void *)ii, (void *)iiburst->iib_tdtd);
  return 1;
}

// check_for_weak
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 241
static signed int check_for_weak(struct anonymous$5 *weak, const char *weakfile, struct _Elf_Data *data, signed int nent, struct _Elf_Data *strdata, struct anonymous$5 *retsym, char **curfilep)
{
  char *check_for_weak$$1$$curfile = (char *)(void *)0;
  char *tmpfile1 = (char *)(void *)0;
  struct anonymous$5 tmpsym;
  signed int candidate = 0;
  signed int i;
  tmpsym.st_info = (unsigned char)0;
  tmpsym.st_name = (unsigned int)0;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  signed int return_value_strcmp$3;
  if(!((signed int)weak->st_info >> 4 == 2))
    return 0;

  else
  {
    i = 0;
    for( ; !(i >= nent); i = i + 1)
    {
      struct anonymous$5 sym;
      unsigned char type;
      struct anonymous$5 *return_value_gelf_getsym$1;
      return_value_gelf_getsym$1=gelf_getsym(data, i, &sym);
      if(!(return_value_gelf_getsym$1 == ((struct anonymous$5 *)NULL)))
      {
        type = (unsigned char)((signed int)sym.st_info & 0xf);
        if((signed int)type == 4)
          check_for_weak$$1$$curfile = (char *)strdata->d_buf + (signed long int)sym.st_name;

        if(!((0xf & (signed int)weak->st_info) == (signed int)type))
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = weak->st_value != sym.st_value ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$2)
        {
          if(weak->st_size == sym.st_size)
          {
            if(!((signed int)sym.st_info >> 4 == 2))
            {
              if(sym.st_shndx == weak->st_shndx)
              {
                if((signed int)sym.st_info >> 4 == 0)
                {
                  if(check_for_weak$$1$$curfile == ((char *)NULL) || weakfile == ((const char *)NULL))
                    tmp_if_expr$4 = (_Bool)1;

                  else
                  {
                    return_value_strcmp$3=strcmp(check_for_weak$$1$$curfile, weakfile);
                    tmp_if_expr$4 = return_value_strcmp$3 != 0 ? (_Bool)1 : (_Bool)0;
                  }
                  if(!tmp_if_expr$4)
                    goto __CPROVER_DUMP_L13;

                  candidate = 1;
                  tmpfile1 = check_for_weak$$1$$curfile;
                  tmpsym = sym;
                }

                else
                {

                __CPROVER_DUMP_L13:
                  ;
                  *curfilep = check_for_weak$$1$$curfile;
                  *retsym = sym;
                  return 1;
                }
              }

            }

          }

        }

      }

    }
    if(!(candidate == 0))
    {
      *curfilep = tmpfile1;
      *retsym = tmpsym;
      return 1;
    }

    else
      return 0;
  }
}

// clp2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 572
static unsigned long int clp2(unsigned long int x)
{
  x = x - 1ul;
  x = x | x >> 1;
  x = x | x >> 2;
  x = x | x >> 4;
  x = x | x >> 8;
  x = x | x >> 16;
  return x + (unsigned long int)1;
}

// compress_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 486
static signed long int compress_buffer(void *buf, unsigned long int n, void *data)
{
  struct resbuf *rb = (struct resbuf *)data;
  signed int rc;
  rb->rb_zstr.next_out = (unsigned char *)rb->rb_ptr;
  rb->rb_zstr.avail_out = (unsigned int)(rb->rb_size - (unsigned long int)(rb->rb_ptr - rb->rb_base));
  rb->rb_zstr.next_in = (unsigned char *)buf;
  rb->rb_zstr.avail_in = (unsigned int)n;
  const char *return_value_zError$1;
  while(!(rb->rb_zstr.avail_in == 0u))
  {
    if(rb->rb_zstr.avail_out == 0u)
      rbzs_grow(rb);

    rc=deflate(&rb->rb_zstr, 0);
    if(!(rc == 0))
    {
      return_value_zError$1=zError(rc);
      parseterminate("zlib deflate failed: %s", return_value_zError$1);
    }

  }
  rb->rb_ptr = (char *)rb->rb_zstr.next_out;
  return (signed long int)n;
}

// compress_end
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 528
static void compress_end(struct resbuf *rb)
{
  signed int rc;
  compress_flush(rb, 4);
  rc=deflateEnd(&rb->rb_zstr);
  const char *return_value_zError$1;
  if(!(rc == 0))
  {
    return_value_zError$1=zError(rc);
    parseterminate("zlib end failed: %s", return_value_zError$1);
  }

}

// compress_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 509
static void compress_flush(struct resbuf *rb, signed int type)
{
  signed int rc;
  const char *return_value_zError$1;
  while((_Bool)1)
  {
    if(rb->rb_zstr.avail_out == 0u)
      rbzs_grow(rb);

    rc=deflate(&rb->rb_zstr, type);
    if(rc == 1 && type == 4 || rc == -5 && type == 3)
      break;

    else
      if(!(rc == 0))
      {
        return_value_zError$1=zError(rc);
        parseterminate("zlib finish failed: %s", return_value_zError$1);
      }

  }
  rb->rb_ptr = (char *)rb->rb_zstr.next_out;
}

// compress_start
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 473
static void compress_start(struct resbuf *rb)
{
  signed int rc;
  rb->rb_zstr.zalloc = (void * (*)(void *, unsigned int, unsigned int))0;
  rb->rb_zstr.zfree = (void (*)(void *, void *))0;
  rb->rb_zstr.opaque = (void *)0;
  rc=deflateInit_(&rb->rb_zstr, 9, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
  const char *return_value_zError$1;
  if(!(rc == 0))
  {
    return_value_zError$1=zError(rc);
    parseterminate("zlib start failed: %s", return_value_zError$1);
  }

}

// conjure_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 781
static struct tdesc * conjure_array(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  struct tdesc *new;
  new=conjure_template(old, newselfid);
  struct ardef *nar;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct ardef) /*24ul*/ );
  nar = (struct ardef *)return_value_xmalloc$1;
  struct ardef *oar = old->t_data.ardef;
  remap_node(&nar->ad_contents, oar->ad_contents, old->t_id, new, mcd);
  remap_node(&nar->ad_idxtype, oar->ad_idxtype, old->t_id, new, mcd);
  nar->ad_nelems = oar->ad_nelems;
  new->t_data.ardef = nar;
  return new;
}

// conjure_assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 850
static struct tdesc * conjure_assert(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(1 == 0);
  return (struct tdesc *)(void *)0;
}

// conjure_enum
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 821
static struct tdesc * conjure_enum(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  struct tdesc *new;
  new=conjure_template(old, newselfid);
  struct elist *oel;
  struct elist **nelp;
  oel = old->t_data.emem;
  nelp = &new->t_data.emem;
  for( ; !(oel == ((struct elist *)NULL)); nelp = &(*nelp)->el_next)
  {
    void *return_value_xmalloc$1;
    return_value_xmalloc$1=xmalloc(sizeof(struct elist) /*24ul*/ );
    *nelp = (struct elist *)return_value_xmalloc$1;
    (*nelp)->el_name=xstrdup(oel->el_name);
    (*nelp)->el_number = oel->el_number;
    oel = oel->el_next;
  }
  *nelp = (struct elist *)(void *)0;
  return new;
}

// conjure_forward
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 839
static struct tdesc * conjure_forward(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  struct tdesc *new;
  new=conjure_template(old, newselfid);
  list_add(&mcd->md_tgt->td_fwdlist, (void *)new);
  return new;
}

// conjure_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 755
static struct tdesc * conjure_function(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  struct tdesc *new;
  new=conjure_template(old, newselfid);
  struct fndef *nfn;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct fndef) /*32ul*/ );
  nfn = (struct fndef *)return_value_xmalloc$1;
  struct fndef *ofn = old->t_data.fndef;
  signed int i;
  remap_node(&nfn->fn_ret, ofn->fn_ret, old->t_id, new, mcd);
  nfn->fn_nargs = ofn->fn_nargs;
  nfn->fn_vargs = ofn->fn_vargs;
  void *return_value_xcalloc$2;
  if(nfn->fn_nargs >= 1u)
  {
    return_value_xcalloc$2=xcalloc(sizeof(struct tdesc *) /*8ul*/  * (unsigned long int)ofn->fn_nargs);
    nfn->fn_args = (struct tdesc **)return_value_xcalloc$2;
  }

  i = 0;
  for( ; !(i >= (signed int)ofn->fn_nargs); i = i + 1)
    remap_node(&nfn->fn_args[(signed long int)i], ofn->fn_args[(signed long int)i], old->t_id, new, mcd);
  new->t_data.fndef = nfn;
  return new;
}

// conjure_iidesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 857
static struct iidesc * conjure_iidesc(struct iidesc *old, struct merge_cb_data *mcd)
{
  struct iidesc *new;
  new=iidesc_dup(old);
  signed int i;
  remap_node(&new->ii_dtype, old->ii_dtype, -1, (struct tdesc *)(void *)0, mcd);
  i = 0;
  for( ; !(i >= new->ii_nargs); i = i + 1)
    remap_node(&new->ii_args[(signed long int)i], old->ii_args[(signed long int)i], -1, (struct tdesc *)(void *)0, mcd);
  return new;
}

// conjure_intrinsic
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 734
static struct tdesc * conjure_intrinsic(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  struct tdesc *new;
  new=conjure_template(old, newselfid);
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct intr) /*20ul*/ );
  new->t_data.intr = (struct intr *)return_value_xmalloc$1;
  bcopy((const void *)old->t_data.intr, (void *)new->t_data.intr, sizeof(struct intr) /*20ul*/ );
  return new;
}

// conjure_plain
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 745
static struct tdesc * conjure_plain(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  struct tdesc *new;
  new=conjure_template(old, newselfid);
  remap_node(&new->t_data.tdesc, old->t_data.tdesc, old->t_id, new, mcd);
  return new;
}

// conjure_su
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 800
static struct tdesc * conjure_su(struct tdesc *old, signed int newselfid, struct merge_cb_data *mcd)
{
  struct tdesc *new;
  new=conjure_template(old, newselfid);
  struct mlist *omem;
  struct mlist **nmemp;
  omem = old->t_data.members;
  nmemp = &new->t_data.members;
  char *tmp_if_expr$2;
  for( ; !(omem == ((struct mlist *)NULL)); nmemp = &(*nmemp)->ml_next)
  {
    void *return_value_xmalloc$1;
    return_value_xmalloc$1=xmalloc(sizeof(struct mlist) /*32ul*/ );
    *nmemp = (struct mlist *)return_value_xmalloc$1;
    (*nmemp)->ml_offset = omem->ml_offset;
    (*nmemp)->ml_size = omem->ml_size;
    if(!(omem->ml_name == ((char *)NULL)))
      tmp_if_expr$2 = omem->ml_name;

    else
      tmp_if_expr$2 = "empty omem->ml_name";
    (*nmemp)->ml_name=xstrdup(tmp_if_expr$2);
    remap_node(&(*nmemp)->ml_type, omem->ml_type, old->t_id, new, mcd);
    omem = omem->ml_next;
  }
  *nmemp = (struct mlist *)(void *)0;
  return new;
}

// conjure_template
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 719
static struct tdesc * conjure_template(struct tdesc *old, signed int newselfid)
{
  struct tdesc *new;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct tdesc) /*64ul*/ );
  new = (struct tdesc *)return_value_xcalloc$1;
  char *tmp_if_expr$3;
  char *return_value_xstrdup$2;
  if(!(old->t_name == ((char *)NULL)))
  {
    return_value_xstrdup$2=xstrdup(old->t_name);
    tmp_if_expr$3 = return_value_xstrdup$2;
  }

  else
    tmp_if_expr$3 = (char *)(void *)0;
  new->t_name = tmp_if_expr$3;
  new->t_type = old->t_type;
  new->t_size = old->t_size;
  new->t_id = newselfid;
  new->t_flags = old->t_flags;
  return new;
}

// copy_ctf_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 615
static void copy_ctf_data(char *srcfile, char *destfile, signed int keep_stabs)
{
  struct tdata *srctd;
  signed int return_value_read_ctf$1;
  return_value_read_ctf$1=read_ctf(&srcfile, 1, (char *)(void *)0, read_ctf_save_cb, (void *)&srctd, 1);
  if(return_value_read_ctf$1 == 0)
    terminate("No CTF data found in source file %s\n", srcfile);

  tmpname=mktmpname(destfile, ".ctf");
  write_ctf(srctd, destfile, tmpname, 0x4 | keep_stabs);
  signed int return_value_rename$2;
  return_value_rename$2=rename(tmpname, destfile);
  if(!(return_value_rename$2 == 0))
    terminate("Couldn't rename temp file %s to %s", tmpname, destfile);

  free((void *)tmpname);
  tdata_free(srctd);
}

// copy_from_strong
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 311
static struct iidesc * copy_from_strong(struct tdata *td, struct anonymous$5 *sym, struct iidesc *strongdesc, const char *weakname, const char *weakfile)
{
  struct iidesc *new;
  new=iidesc_dup_rename(strongdesc, weakname, weakfile);
  unsigned char type = (unsigned char)((signed int)sym->st_info & 0xf);
  switch((signed int)type)
  {
    case 1:
    {
      new->ii_type = (enum iitype)II_GVAR;
      break;
    }
    case 2:
      new->ii_type = (enum iitype)II_GFUN;
  }
  hash_add(td->td_iihash, (void *)new);
  return new;
}

// count_archive
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 251
static signed int count_archive(signed int fd, struct _Elf *elf, char *file)
{
  struct _Elf *melf;
  enum anonymous$2 cmd = (enum anonymous$2)ELF_C_READ;
  struct anonymous$3 *arh;
  signed int nfiles = 0;
  signed int err = 0;
  do
  {
    melf=elf_begin(fd, cmd, elf);
    if(melf == ((struct _Elf *)NULL))
      break;

    arh=elf_getarhdr(melf);
    if(arh == ((struct anonymous$3 *)NULL))
    {
      warning("Can't process input archive %s\n", file);
      err = err + 1;
    }

    if(!((signed int)*arh->ar_name == 47))
      nfiles = nfiles + 1;

    cmd=elf_next(melf);
    elf_end(melf);
  }
  while((_Bool)1);
  if(err >= 1)
    return -1;

  else
    return nfiles;
}

// count_files
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 375
signed int count_files(char **files, signed int n)
{
  signed int nfiles = 0;
  signed int err = 0;
  struct _Elf *elf;
  signed int fd;
  signed int rc;
  signed int i;
  elf_version((unsigned int)1);
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    char *file = files[(signed long int)i];
    fd=open(file, 00);
    if(!(fd >= 0))
    {
      warning("Can't read input file %s", file);
      err = err + 1;
    }

    else
    {
      elf=elf_begin(fd, (enum anonymous$2)ELF_C_READ, (struct _Elf *)(void *)0);
      if(elf == ((struct _Elf *)NULL))
      {
        const char *return_value_elf_errmsg$1;
        return_value_elf_errmsg$1=elf_errmsg(-1);
        warning("Can't open input file %s: %s\n", file, return_value_elf_errmsg$1);
        err = err + 1;
        close(fd);
        goto __CPROVER_DUMP_L10;
      }

      enum anonymous$1 return_value_elf_kind$2;
      return_value_elf_kind$2=elf_kind(elf);
      switch((signed int)return_value_elf_kind$2)
      {
        case ELF_K_AR:
        {
          rc=count_archive(fd, elf, file);
          if(!(rc >= 0))
            err = err + 1;

          else
            nfiles = nfiles + rc;
          break;
        }
        case ELF_K_ELF:
        {
          nfiles = nfiles + 1;
          break;
        }
        default:
        {
          warning("Input file %s is corrupt\n", file);
          err = err + 1;
        }
      }
      elf_end(elf);
      close(fd);
    }

  __CPROVER_DUMP_L10:
    ;
  }
  if(err >= 1)
    return -1;

  else
  {
    debug(2, "Found %d files in %d input files\n", nfiles, n);
    return nfiles;
  }
}

// count_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 679
static signed int count_types(struct ctf_header *h, char *data)
{
  char *dptr = data + (signed long int)h->cth_typeoff;
  signed int count = 0;
  dptr = data + (signed long int)h->cth_typeoff;
  while(!(dptr >= data + (signed long int)h->cth_stroff))
  {
    void *v = (void *)dptr;
    struct ctf_type *ctt = (struct ctf_type *)v;
    unsigned long int vlen = (unsigned long int)((signed int)ctt->ctt_info & 0x3ff);
    unsigned long int size;
    unsigned long int increment;
    get_ctt_size(ctt, &size, &increment);
    switch(((signed int)ctt->ctt_info & 0xf800) >> 11)
    {
      case 1:

      case 2:
      {
        dptr = dptr + (signed long int)4;
        break;
      }
      case 3:

      case 9:

      case 10:

      case 11:

      case 12:

      case 13:

      case 5:
      {
        dptr = dptr + (signed long int)(sizeof(unsigned short int) /*2ul*/  * (vlen + (vlen & (unsigned long int)1)));
        break;
      }
      case 4:
      {
        dptr = dptr + (signed long int)sizeof(struct ctf_array) /*8ul*/ ;
        break;
      }
      case 6:

      case 7:
      {
        if(!(size >= 8192ul))
          dptr = dptr + (signed long int)(sizeof(struct ctf_member) /*8ul*/  * vlen);

        else
          dptr = dptr + (signed long int)(sizeof(struct ctf_lmember) /*16ul*/  * vlen);
        break;
      }
      case 8:
      {
        dptr = dptr + (signed long int)(sizeof(struct ctf_enum) /*8ul*/  * vlen);
        break;
      }
      case 0:
        break;
      default:
        parseterminate("Unknown CTF type %d (#%d) at %#x", ((signed int)ctt->ctt_info & 0xf800) >> 11, count, dptr - data);
    }
    dptr = dptr + (signed long int)increment;
    count = count + 1;
  }
  debug(3, "CTF read %d types\n", count);
  return count;
}

// ctf_add_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 644
extern signed long int ctf_add_array(struct ctf_file *fp, unsigned int flag, const struct ctf_arinfo *arp)
{
  struct ctf_dtdef *dtd;
  signed long int type;
  signed long int return_value_ctf_set_errno$1;
  if(arp == ((const struct ctf_arinfo *)NULL))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return return_value_ctf_set_errno$1;
  }

  else
  {
    type=ctf_add_generic(fp, flag, (const char *)(void *)0, &dtd);
    if(type == -1l)
      return -1L;

    else
    {
      dtd->dtd_data.ctt_info = (unsigned short int)(4 << 11 | (flag != 0u ? 1 : 0) << 10 | 0 & 0x3ff);
      dtd->dtd_data._u._size = (unsigned short int)0;
      dtd->dtd_u.dtu_arr = *arp;
      return type;
    }
  }
}

// ctf_add_const
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 848
extern signed long int ctf_add_const(struct ctf_file *fp, unsigned int flag, signed long int ref)
{
  signed long int return_value_ctf_add_reftype$1;
  return_value_ctf_add_reftype$1=ctf_add_reftype(fp, flag, ref, (unsigned int)12);
  return return_value_ctf_add_reftype$1;
}

// ctf_add_encoded
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 586
static signed long int ctf_add_encoded(struct ctf_file *fp, unsigned int flag, const char *name, const struct ctf_encoding *ep, unsigned int kind)
{
  struct ctf_dtdef *dtd;
  signed long int type;
  signed long int return_value_ctf_set_errno$1;
  if(ep == ((const struct ctf_encoding *)NULL))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return return_value_ctf_set_errno$1;
  }

  else
  {
    type=ctf_add_generic(fp, flag, name, &dtd);
    if(type == -1l)
      return -1L;

    else
    {
      dtd->dtd_data.ctt_info = (unsigned short int)(kind << 11 | (unsigned int)((flag != 0u ? 1 : 0) << 10) | (unsigned int)(0 & 0x3ff));
      unsigned long int return_value_clp2$2;
      return_value_clp2$2=clp2((unsigned long int)(-(-ep->cte_bits & (unsigned int)-8) / (unsigned int)8));
      dtd->dtd_data._u._size = (unsigned short int)return_value_clp2$2;
      dtd->dtd_u.dtu_enc = *ep;
      return type;
    }
  }
}

// ctf_add_enum
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 763
extern signed long int ctf_add_enum(struct ctf_file *fp, unsigned int flag, const char *name)
{
  struct ctf_hash *hp = &fp->ctf_enums;
  struct ctf_helem *hep = (struct ctf_helem *)(void *)0;
  struct ctf_dtdef *dtd;
  signed long int type;
  unsigned long int return_value_strlen$1;
  if(!(name == ((const char *)NULL)))
  {
    return_value_strlen$1=strlen(name);
    hep=ctf_hash_lookup(hp, fp, name, return_value_strlen$1);
  }

  _Bool tmp_if_expr$3;
  signed int return_value_ctf_type_kind$2;
  if(!(hep == ((struct ctf_helem *)NULL)))
  {
    return_value_ctf_type_kind$2=ctf_type_kind(fp, (signed long int)hep->h_type);
    tmp_if_expr$3 = return_value_ctf_type_kind$2 == 9 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    type = (signed long int)hep->h_type;
    dtd=ctf_dtd_lookup(fp, type);
  }

  else
  {
    type=ctf_add_generic(fp, flag, name, &dtd);
    if(type == -1l)
      return -1L;

  }
  dtd->dtd_data.ctt_info = (unsigned short int)(8 << 11 | (flag != 0u ? 1 : 0) << 10 | 0 & 0x3ff);
  dtd->dtd_data._u._size = (unsigned short int)fp->ctf_dmodel->ctd_int;
  return type;
}

// ctf_add_enumerator
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 860
extern signed int ctf_add_enumerator(struct ctf_file *fp, signed long int enid, const char *name, signed int value)
{
  struct ctf_dtdef *dtd;
  dtd=ctf_dtd_lookup(fp, enid);
  struct ctf_dmdef *dmd;
  unsigned int kind;
  unsigned int vlen;
  unsigned int root;
  char *s;
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$2;
  signed long int return_value_ctf_set_errno$3;
  signed long int return_value_ctf_set_errno$4;
  signed long int return_value_ctf_set_errno$5;
  signed long int return_value_ctf_set_errno$6;
  signed long int return_value_ctf_set_errno$8;
  if(name == ((const char *)NULL))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
    if((4u & fp->ctf_flags) == 0u)
    {
      return_value_ctf_set_errno$2=ctf_set_errno(fp, 1039);
      return (signed int)return_value_ctf_set_errno$2;
    }

    else
      if(dtd == ((struct ctf_dtdef *)NULL))
      {
        return_value_ctf_set_errno$3=ctf_set_errno(fp, 1020);
        return (signed int)return_value_ctf_set_errno$3;
      }

      else
      {
        kind = (unsigned int)(((signed int)dtd->dtd_data.ctt_info & 0xf800) >> 11);
        root = (unsigned int)(((signed int)dtd->dtd_data.ctt_info & 0x0400) >> 10);
        vlen = (unsigned int)((signed int)dtd->dtd_data.ctt_info & 0x3ff);
        if(!(kind == 8u))
        {
          return_value_ctf_set_errno$4=ctf_set_errno(fp, 1022);
          return (signed int)return_value_ctf_set_errno$4;
        }

        else
          if(vlen == 1023u)
          {
            return_value_ctf_set_errno$5=ctf_set_errno(fp, 1040);
            return (signed int)return_value_ctf_set_errno$5;
          }

          else
          {
            dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
            for( ; !(dmd == ((struct ctf_dmdef *)NULL)); dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next)
            {
              signed int return_value_strcmp$7;
              return_value_strcmp$7=strcmp(dmd->dmd_name, name);
              if(return_value_strcmp$7 == 0)
              {
                return_value_ctf_set_errno$6=ctf_set_errno(fp, 1042);
                return (signed int)return_value_ctf_set_errno$6;
              }

            }
            void *return_value_ctf_alloc$9;
            return_value_ctf_alloc$9=ctf_alloc(sizeof(struct ctf_dmdef) /*48ul*/ );
            dmd = (struct ctf_dmdef *)return_value_ctf_alloc$9;
            if(dmd == ((struct ctf_dmdef *)NULL))
            {
              return_value_ctf_set_errno$8=ctf_set_errno(fp, 11);
              return (signed int)return_value_ctf_set_errno$8;
            }

            else
            {
              s=ctf_strdup(name);
              if(s == ((char *)NULL))
              {
                ctf_free((void *)dmd, sizeof(struct ctf_dmdef) /*48ul*/ );
                signed long int return_value_ctf_set_errno$10;
                return_value_ctf_set_errno$10=ctf_set_errno(fp, 11);
                return (signed int)return_value_ctf_set_errno$10;
              }

              dmd->dmd_name = s;
              dmd->dmd_type = -1L;
              dmd->dmd_offset = (unsigned long int)0;
              dmd->dmd_value = value;
              dtd->dtd_data.ctt_info = (unsigned short int)(kind << 11 | (unsigned int)((root != 0u ? 1 : 0) << 10) | vlen + (unsigned int)1 & (unsigned int)0x3ff);
              ctf_list_append(&dtd->dtd_u.dtu_members, (void *)dmd);
              unsigned long int return_value_strlen$11;
              return_value_strlen$11=strlen(s);
              fp->ctf_dtstrlen = fp->ctf_dtstrlen + return_value_strlen$11 + (unsigned long int)1;
              fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0008;
              return 0;
            }
          }
      }
}

// ctf_add_float
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 631
extern signed long int ctf_add_float(struct ctf_file *fp, unsigned int flag, const char *name, const struct ctf_encoding *ep)
{
  signed long int return_value_ctf_add_encoded$1;
  return_value_ctf_add_encoded$1=ctf_add_encoded(fp, flag, name, ep, (unsigned int)2);
  return return_value_ctf_add_encoded$1;
}

// ctf_add_forward
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 785
extern signed long int ctf_add_forward(struct ctf_file *fp, unsigned int flag, const char *name, unsigned int kind)
{
  struct ctf_hash *hp;
  struct ctf_helem *hep;
  struct ctf_dtdef *dtd;
  signed long int type;
  signed long int return_value_ctf_set_errno$1;
  switch(kind)
  {
    case (unsigned int)6:
    {
      hp = &fp->ctf_structs;
      break;
    }
    case (unsigned int)7:
    {
      hp = &fp->ctf_unions;
      break;
    }
    case (unsigned int)8:
    {
      hp = &fp->ctf_enums;
      break;
    }
    default:
    {
      return_value_ctf_set_errno$1=ctf_set_errno(fp, 1023);
      return return_value_ctf_set_errno$1;
    }
  }
  unsigned long int return_value_strlen$2;
  if(!(name == ((const char *)NULL)))
  {
    return_value_strlen$2=strlen(name);
    hep=ctf_hash_lookup(hp, fp, name, return_value_strlen$2);
    if(hep == ((struct ctf_helem *)NULL))
      goto __CPROVER_DUMP_L6;

    return (signed long int)hep->h_type;
  }

  else
  {

  __CPROVER_DUMP_L6:
    ;
    type=ctf_add_generic(fp, flag, name, &dtd);
    if(type == -1l)
      return -1L;

    else
    {
      dtd->dtd_data.ctt_info = (unsigned short int)(9 << 11 | (flag != 0u ? 1 : 0) << 10 | 0 & 0x3ff);
      dtd->dtd_data._u._type = (unsigned short int)kind;
      return type;
    }
  }
}

// ctf_add_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 680
extern signed long int ctf_add_function(struct ctf_file *fp, unsigned int flag, const struct ctf_funcinfo *ctc, const signed long int *argv)
{
  struct ctf_dtdef *dtd;
  signed long int type;
  unsigned int vlen;
  signed long int *vdat = (signed long int *)(void *)0;
  _Bool tmp_if_expr$2;
  if(ctc == ((const struct ctf_funcinfo *)NULL))
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = (ctc->ctc_flags & (unsigned int)~0x1) != (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$3;
  if(tmp_if_expr$2)
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = (ctc->ctc_argc != (unsigned int)0 ? (argv == (const signed long int *)(void *)0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$4;
  void *return_value_ctf_alloc$6;
  signed long int return_value_ctf_set_errno$5;
  if(tmp_if_expr$3)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return return_value_ctf_set_errno$1;
  }

  else
  {
    vlen = ctc->ctc_argc;
    if(!((1u & ctc->ctc_flags) == 0u))
      vlen = vlen + 1u;

    if(vlen >= 1024u)
    {
      return_value_ctf_set_errno$4=ctf_set_errno(fp, 75);
      return return_value_ctf_set_errno$4;
    }

    else
      if(!(vlen == 0u))
      {
        return_value_ctf_alloc$6=ctf_alloc(sizeof(signed long int) /*8ul*/  * (unsigned long int)vlen);
        vdat = (signed long int *)return_value_ctf_alloc$6;
        if(!(vdat == ((signed long int *)NULL)))
          goto __CPROVER_DUMP_L8;

        return_value_ctf_set_errno$5=ctf_set_errno(fp, 11);
        return return_value_ctf_set_errno$5;
      }

      else
      {

      __CPROVER_DUMP_L8:
        ;
        type=ctf_add_generic(fp, flag, (const char *)(void *)0, &dtd);
        if(type == -1l)
        {
          ctf_free((void *)vdat, sizeof(signed long int) /*8ul*/  * (unsigned long int)vlen);
          return -1L;
        }

        else
        {
          dtd->dtd_data.ctt_info = (unsigned short int)((unsigned int)(5 << 11 | (flag != 0u ? 1 : 0) << 10) | vlen & (unsigned int)0x3ff);
          dtd->dtd_data._u._type = (unsigned short int)ctc->ctc_return;
          bcopy((const void *)argv, (void *)vdat, sizeof(signed long int) /*8ul*/  * (unsigned long int)ctc->ctc_argc);
          if(!((1u & ctc->ctc_flags) == 0u))
            vdat[(signed long int)(vlen - (unsigned int)1)] = (signed long int)0;

          dtd->dtd_u.dtu_argv = vdat;
          return type;
        }
      }
  }
}

// ctf_add_generic
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 526
static signed long int ctf_add_generic(struct ctf_file *fp, unsigned int flag, const char *name, struct ctf_dtdef **rp)
{
  struct ctf_dtdef *dtd;
  signed long int type;
  char *s = (char *)(void *)0;
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$2;
  signed long int return_value_ctf_set_errno$3;
  signed long int return_value_ctf_set_errno$4;
  unsigned long int tmp_post$7;
  unsigned long int return_value_strlen$8;
  if(!(flag == 0u) && !(flag == 1u))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return return_value_ctf_set_errno$1;
  }

  else
    if((4u & fp->ctf_flags) == 0u)
    {
      return_value_ctf_set_errno$2=ctf_set_errno(fp, 1039);
      return return_value_ctf_set_errno$2;
    }

    else
      if((32768ul | fp->ctf_dtnextid) >= 65536ul)
      {
        return_value_ctf_set_errno$3=ctf_set_errno(fp, 1041);
        return return_value_ctf_set_errno$3;
      }

      else
      {
        void *return_value_ctf_alloc$5;
        return_value_ctf_alloc$5=ctf_alloc(sizeof(struct ctf_dtdef) /*80ul*/ );
        dtd = (struct ctf_dtdef *)return_value_ctf_alloc$5;
        if(dtd == ((struct ctf_dtdef *)NULL))
        {
          return_value_ctf_set_errno$4=ctf_set_errno(fp, 11);
          return return_value_ctf_set_errno$4;
        }

        else
        {
          if(!(name == ((const char *)NULL)))
          {
            s=ctf_strdup(name);
            if(s == ((char *)NULL))
            {
              ctf_free((void *)dtd, sizeof(struct ctf_dtdef) /*80ul*/ );
              signed long int return_value_ctf_set_errno$6;
              return_value_ctf_set_errno$6=ctf_set_errno(fp, 11);
              return return_value_ctf_set_errno$6;
            }

          }

          tmp_post$7 = fp->ctf_dtnextid;
          fp->ctf_dtnextid = fp->ctf_dtnextid + 1ul;
          type = (signed long int)tmp_post$7;
          type = (fp->ctf_flags & (unsigned int)0x0002) != 0u ? type | (signed long int)0x8000 : type;
          bzero((void *)dtd, sizeof(struct ctf_dtdef) /*80ul*/ );
          dtd->dtd_name = s;
          dtd->dtd_type = type;
          if(!(s == ((char *)NULL)))
          {
            return_value_strlen$8=strlen(s);
            fp->ctf_dtstrlen = fp->ctf_dtstrlen + return_value_strlen$8 + (unsigned long int)1;
          }

          ctf_dtd_insert(fp, dtd);
          fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0008;
          *rp = dtd;
          return type;
        }
      }
}

// ctf_add_integer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 624
extern signed long int ctf_add_integer(struct ctf_file *fp, unsigned int flag, const char *name, const struct ctf_encoding *ep)
{
  signed long int return_value_ctf_add_encoded$1;
  return_value_ctf_add_encoded$1=ctf_add_encoded(fp, flag, name, ep, (unsigned int)1);
  return return_value_ctf_add_encoded$1;
}

// ctf_add_member
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 916
extern signed int ctf_add_member(struct ctf_file *fp, signed long int souid, const char *name, signed long int type)
{
  struct ctf_dtdef *dtd;
  dtd=ctf_dtd_lookup(fp, souid);
  struct ctf_dmdef *dmd;
  signed long int msize;
  signed long int malign;
  signed long int ssize;
  unsigned int kind;
  unsigned int vlen;
  unsigned int root;
  char *s = (char *)(void *)0;
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$2;
  signed long int return_value_ctf_set_errno$3;
  signed long int return_value_ctf_set_errno$4;
  signed int return_value_strcmp$6;
  signed long int return_value_ctf_set_errno$5;
  _Bool tmp_if_expr$7;
  signed long int return_value_ctf_set_errno$8;
  unsigned long int return_value_strlen$12;
  if((4u & fp->ctf_flags) == 0u)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 1039);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
    if(dtd == ((struct ctf_dtdef *)NULL))
    {
      return_value_ctf_set_errno$2=ctf_set_errno(fp, 1020);
      return (signed int)return_value_ctf_set_errno$2;
    }

    else
    {
      kind = (unsigned int)(((signed int)dtd->dtd_data.ctt_info & 0xf800) >> 11);
      root = (unsigned int)(((signed int)dtd->dtd_data.ctt_info & 0x0400) >> 10);
      vlen = (unsigned int)((signed int)dtd->dtd_data.ctt_info & 0x3ff);
      if(!(kind == 6u) && !(kind == 7u))
      {
        return_value_ctf_set_errno$3=ctf_set_errno(fp, 1021);
        return (signed int)return_value_ctf_set_errno$3;
      }

      else
        if(vlen == 1023u)
        {
          return_value_ctf_set_errno$4=ctf_set_errno(fp, 1040);
          return (signed int)return_value_ctf_set_errno$4;
        }

        else
        {
          if(!(name == ((const char *)NULL)))
          {
            dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
            for( ; !(dmd == ((struct ctf_dmdef *)NULL)); dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next)
              if(!(dmd->dmd_name == ((char *)NULL)))
              {
                return_value_strcmp$6=strcmp(dmd->dmd_name, name);
                if(return_value_strcmp$6 == 0)
                {
                  return_value_ctf_set_errno$5=ctf_set_errno(fp, 1042);
                  return (signed int)return_value_ctf_set_errno$5;
                }

              }

          }

          msize=ctf_type_size(fp, type);
          if(msize == -1l)
            tmp_if_expr$7 = (_Bool)1;

          else
          {
            malign=ctf_type_align(fp, type);
            tmp_if_expr$7 = malign == -1L ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$7)
            return (signed int)-1L;

          else
          {
            void *return_value_ctf_alloc$9;
            return_value_ctf_alloc$9=ctf_alloc(sizeof(struct ctf_dmdef) /*48ul*/ );
            dmd = (struct ctf_dmdef *)return_value_ctf_alloc$9;
            if(dmd == ((struct ctf_dmdef *)NULL))
            {
              return_value_ctf_set_errno$8=ctf_set_errno(fp, 11);
              return (signed int)return_value_ctf_set_errno$8;
            }

            else
            {
              if(!(name == ((const char *)NULL)))
              {
                s=ctf_strdup(name);
                if(s == ((char *)NULL))
                {
                  ctf_free((void *)dmd, sizeof(struct ctf_dmdef) /*48ul*/ );
                  signed long int return_value_ctf_set_errno$10;
                  return_value_ctf_set_errno$10=ctf_set_errno(fp, 11);
                  return (signed int)return_value_ctf_set_errno$10;
                }

              }

              dmd->dmd_name = s;
              dmd->dmd_type = type;
              dmd->dmd_value = -1;
              if(kind == 6u && !(vlen == 0u))
              {
                struct ctf_dmdef *lmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_prev;
                signed long int ltype;
                ltype=ctf_type_resolve(fp, lmd->dmd_type);
                unsigned long int off = lmd->dmd_offset;
                struct ctf_encoding linfo;
                signed long int lsize;
                signed int return_value_ctf_type_encoding$11;
                return_value_ctf_type_encoding$11=ctf_type_encoding(fp, ltype, &linfo);
                if(!((signed long int)return_value_ctf_type_encoding$11 == -1l))
                  off = off + (unsigned long int)linfo.cte_bits;

                else
                {
                  lsize=ctf_type_size(fp, ltype);
                  if(!(lsize == -1l))
                    off = off + (unsigned long int)(lsize * (signed long int)8);

                }
                off = (((off + (unsigned long int)(8 - 1)) / (unsigned long int)8) * (unsigned long int)8) / (unsigned long int)8;
                off = ((off + (unsigned long int)((malign > (signed long int)1 ? malign : (signed long int)1) - (signed long int)1)) / (unsigned long int)(malign > (signed long int)1 ? malign : (signed long int)1)) * (unsigned long int)(malign > (signed long int)1 ? malign : (signed long int)1);
                dmd->dmd_offset = off * (unsigned long int)8;
                ssize = (signed long int)(off + (unsigned long int)msize);
              }

              else
              {
                dmd->dmd_offset = (unsigned long int)0;
                ssize=ctf_get_ctt_size(fp, &dtd->dtd_data, (signed long int *)(void *)0, (signed long int *)(void *)0);
                ssize = ssize > msize ? ssize : msize;
              }
              if(ssize >= 65535l)
              {
                dtd->dtd_data._u._size = (unsigned short int)0xffff;
                dtd->dtd_data.ctt_lsizehi = (unsigned int)((unsigned long int)ssize >> 32);
                dtd->dtd_data.ctt_lsizelo = (unsigned int)ssize;
              }

              else
                dtd->dtd_data._u._size = (unsigned short int)ssize;
              dtd->dtd_data.ctt_info = (unsigned short int)(kind << 11 | (unsigned int)((root != 0u ? 1 : 0) << 10) | vlen + (unsigned int)1 & (unsigned int)0x3ff);
              ctf_list_append(&dtd->dtd_u.dtu_members, (void *)dmd);
              if(!(s == ((char *)NULL)))
              {
                return_value_strlen$12=strlen(s);
                fp->ctf_dtstrlen = fp->ctf_dtstrlen + return_value_strlen$12 + (unsigned long int)1;
              }

              fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0008;
              return 0;
            }
          }
        }
    }
}

// ctf_add_pointer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 638
extern signed long int ctf_add_pointer(struct ctf_file *fp, unsigned int flag, signed long int ref)
{
  signed long int return_value_ctf_add_reftype$1;
  return_value_ctf_add_reftype$1=ctf_add_reftype(fp, flag, ref, (unsigned int)3);
  return return_value_ctf_add_reftype$1;
}

// ctf_add_reftype
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 606
static signed long int ctf_add_reftype(struct ctf_file *fp, unsigned int flag, signed long int ref, unsigned int kind)
{
  struct ctf_dtdef *dtd;
  signed long int type;
  signed long int return_value_ctf_set_errno$1;
  if(ref == -1l || ref >= 65536l || !(ref >= 0l))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return return_value_ctf_set_errno$1;
  }

  else
  {
    type=ctf_add_generic(fp, flag, (const char *)(void *)0, &dtd);
    if(type == -1l)
      return -1L;

    else
    {
      dtd->dtd_data.ctt_info = (unsigned short int)(kind << 11 | (unsigned int)((flag != 0u ? 1 : 0) << 10) | (unsigned int)(0 & 0x3ff));
      dtd->dtd_data._u._type = (unsigned short int)ref;
      return type;
    }
  }
}

// ctf_add_restrict
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 854
extern signed long int ctf_add_restrict(struct ctf_file *fp, unsigned int flag, signed long int ref)
{
  signed long int return_value_ctf_add_reftype$1;
  return_value_ctf_add_reftype$1=ctf_add_reftype(fp, flag, ref, (unsigned int)13);
  return return_value_ctf_add_reftype$1;
}

// ctf_add_struct
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 719
extern signed long int ctf_add_struct(struct ctf_file *fp, unsigned int flag, const char *name)
{
  struct ctf_hash *hp = &fp->ctf_structs;
  struct ctf_helem *hep = (struct ctf_helem *)(void *)0;
  struct ctf_dtdef *dtd;
  signed long int type;
  unsigned long int return_value_strlen$1;
  if(!(name == ((const char *)NULL)))
  {
    return_value_strlen$1=strlen(name);
    hep=ctf_hash_lookup(hp, fp, name, return_value_strlen$1);
  }

  _Bool tmp_if_expr$3;
  signed int return_value_ctf_type_kind$2;
  if(!(hep == ((struct ctf_helem *)NULL)))
  {
    return_value_ctf_type_kind$2=ctf_type_kind(fp, (signed long int)hep->h_type);
    tmp_if_expr$3 = return_value_ctf_type_kind$2 == 9 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    type = (signed long int)hep->h_type;
    dtd=ctf_dtd_lookup(fp, type);
  }

  else
  {
    type=ctf_add_generic(fp, flag, name, &dtd);
    if(type == -1l)
      return -1L;

  }
  dtd->dtd_data.ctt_info = (unsigned short int)(6 << 11 | (flag != 0u ? 1 : 0) << 10 | 0 & 0x3ff);
  dtd->dtd_data._u._size = (unsigned short int)0;
  return type;
}

// ctf_add_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1086
extern signed long int ctf_add_type(struct ctf_file *dst_fp, struct ctf_file *src_fp, signed long int src_type)
{
  signed long int dst_type = -1L;
  unsigned int dst_kind = (unsigned int)0;
  const struct ctf_type *tp;
  const char *name;
  unsigned int kind;
  unsigned int flag;
  unsigned int vlen;
  struct ctf_bundle src;
  struct ctf_bundle dst;
  struct ctf_encoding src_en;
  struct ctf_encoding dst_en;
  struct ctf_arinfo src_ar;
  struct ctf_arinfo dst_ar;
  struct ctf_dtdef *dtd;
  struct ctf_funcinfo ctc;
  signed long int size;
  struct ctf_hash *hp;
  struct ctf_helem *hep;
  signed long int return_value_ctf_set_errno$1;
  signed int return_value_ctf_errno$2;
  signed long int return_value_ctf_set_errno$3;
  unsigned long int return_value_strlen$5;
  signed long int return_value_ctf_set_errno$6;
  _Bool tmp_if_expr$7;
  signed int return_value_strcmp$8;
  signed int return_value_ctf_type_encoding$11;
  signed int return_value_ctf_errno$9;
  signed long int return_value_ctf_set_errno$10;
  signed long int return_value_ctf_set_errno$13;
  signed int return_value_ctf_array_info$17;
  signed int return_value_ctf_errno$15;
  signed long int return_value_ctf_set_errno$16;
  signed long int return_value_ctf_set_errno$19;
  signed long int return_value_ctf_set_errno$21;
  signed long int return_value_ctf_set_errno$24;
  _Bool tmp_if_expr$30;
  signed int return_value_ctf_enum_iter$29;
  signed long int return_value_ctf_set_errno$27;
  _Bool tmp_if_expr$32;
  signed int return_value_ctf_enum_iter$31;
  if((4u & dst_fp->ctf_flags) == 0u)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(dst_fp, 1039);
    return return_value_ctf_set_errno$1;
  }

  else
  {
    tp=ctf_lookup_by_id(&src_fp, src_type);
    if(tp == ((const struct ctf_type *)NULL))
    {
      return_value_ctf_errno$2=ctf_errno(src_fp);
      return_value_ctf_set_errno$3=ctf_set_errno(dst_fp, return_value_ctf_errno$2);
      return return_value_ctf_set_errno$3;
    }

    else
    {
      name=ctf_strptr(src_fp, tp->ctt_name);
      unsigned short int return_value;
      return_value=src_fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      kind = (unsigned int)return_value;
      unsigned short int return_value_1;
      return_value_1=src_fp->ctf_fileops->ctfo_get_root(tp->ctt_info);
      flag = (unsigned int)return_value_1;
      unsigned short int return_value_2;
      return_value_2=src_fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
      vlen = (unsigned int)return_value_2;
      if(kind == 6u)
      {
        hp = &dst_fp->ctf_structs;
        hp = &dst_fp->ctf_unions;
        hp = &dst_fp->ctf_enums;
      }

      hp = &dst_fp->ctf_names;
      if(!((1u & flag) == 0u))
      {
        if(!((signed int)*name == 0))
        {
          return_value_strlen$5=strlen(name);
          hep=ctf_hash_lookup(hp, dst_fp, name, return_value_strlen$5);
          if(!(hep == ((struct ctf_helem *)NULL)))
          {
            dst_type = (signed long int)hep->h_type;
            signed int return_value_ctf_type_kind$4;
            return_value_ctf_type_kind$4=ctf_type_kind(dst_fp, dst_type);
            dst_kind = (unsigned int)return_value_ctf_type_kind$4;
          }

        }

      }

      if(!(dst_type == -1l) && !(dst_kind == kind) && (!(kind == 6u) && !(kind == 7u) && !(kind == 8u) || !(dst_kind == 9u)))
      {
        return_value_ctf_set_errno$6=ctf_set_errno(dst_fp, 1043);
        return return_value_ctf_set_errno$6;
      }

      else
      {
        if(dst_type == -1l)
        {
          if(!((signed int)*name == 0))
          {
            dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)&dst_fp->ctf_dtdefs)->l_prev;
            if(!(dtd == ((struct ctf_dtdef *)NULL)))
              tmp_if_expr$7 = (unsigned long int)dtd->dtd_type > dst_fp->ctf_dtoldid ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$7 = (_Bool)0;
            if(tmp_if_expr$7)
            {
              if((unsigned int)((0xf800 & (signed int)dtd->dtd_data.ctt_info) >> 11) == kind)
              {
                if(!(dtd->dtd_name == ((char *)NULL)))
                {
                  return_value_strcmp$8=strcmp(dtd->dtd_name, name);
                  if(return_value_strcmp$8 == 0)
                    return dtd->dtd_type;

                }

              }

              dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)dtd)->l_prev;
            }

          }

        }

        src.ctb_file = src_fp;
        src.ctb_type = src_type;
        src.ctb_dtd = (struct ctf_dtdef *)(void *)0;
        dst.ctb_file = dst_fp;
        dst.ctb_type = dst_type;
        dst.ctb_dtd = (struct ctf_dtdef *)(void *)0;
        if(kind == 1u || kind == 2u)
        {
          return_value_ctf_type_encoding$11=ctf_type_encoding(src_fp, src_type, &src_en);
          if(!(return_value_ctf_type_encoding$11 == 0))
          {
            return_value_ctf_errno$9=ctf_errno(src_fp);
            return_value_ctf_set_errno$10=ctf_set_errno(dst_fp, return_value_ctf_errno$9);
            return return_value_ctf_set_errno$10;
          }

          if(!(dst_type == -1l))
          {
            signed int return_value_ctf_type_encoding$12;
            return_value_ctf_type_encoding$12=ctf_type_encoding(dst_fp, dst_type, &dst_en);
            if(!(return_value_ctf_type_encoding$12 == 0))
              return -1L;

            signed int return_value_bcmp$14;
            return_value_bcmp$14=bcmp((const void *)&src_en, (const void *)&dst_en, sizeof(struct ctf_encoding) /*12ul*/ );
            if(!(return_value_bcmp$14 == 0))
            {
              return_value_ctf_set_errno$13=ctf_set_errno(dst_fp, 1043);
              return return_value_ctf_set_errno$13;
            }

          }

          else
            if(kind == 1u)
              dst_type=ctf_add_integer(dst_fp, flag, name, &src_en);

            else
              dst_type=ctf_add_float(dst_fp, flag, name, &src_en);
          src_type=ctf_type_reference(src_fp, src_type);
          src_type=ctf_add_type(dst_fp, src_fp, src_type);
          if(src_type == -1l)
            return -1L;

          dst_type=ctf_add_reftype(dst_fp, flag, src_type, kind);
          return_value_ctf_array_info$17=ctf_array_info(src_fp, src_type, &src_ar);
          if((signed long int)return_value_ctf_array_info$17 == -1l)
          {
            return_value_ctf_errno$15=ctf_errno(src_fp);
            return_value_ctf_set_errno$16=ctf_set_errno(dst_fp, return_value_ctf_errno$15);
            return return_value_ctf_set_errno$16;
          }

          src_ar.ctr_contents=ctf_add_type(dst_fp, src_fp, src_ar.ctr_contents);
          src_ar.ctr_index=ctf_add_type(dst_fp, src_fp, src_ar.ctr_index);
          src_ar.ctr_nelems = src_ar.ctr_nelems;
          if(src_ar.ctr_contents == -1l || src_ar.ctr_index == -1l)
            return -1L;

          if(!(dst_type == -1l))
          {
            signed int return_value_ctf_array_info$18;
            return_value_ctf_array_info$18=ctf_array_info(dst_fp, dst_type, &dst_ar);
            if(!(return_value_ctf_array_info$18 == 0))
              return -1L;

            signed int return_value_bcmp$20;
            return_value_bcmp$20=bcmp((const void *)&src_ar, (const void *)&dst_ar, sizeof(struct ctf_arinfo) /*24ul*/ );
            if(!(return_value_bcmp$20 == 0))
            {
              return_value_ctf_set_errno$19=ctf_set_errno(dst_fp, 1043);
              return return_value_ctf_set_errno$19;
            }

          }

          else
            dst_type=ctf_add_array(dst_fp, flag, &src_ar);
          ctc.ctc_return=ctf_add_type(dst_fp, src_fp, (signed long int)tp->_u._type);
          ctc.ctc_argc = (unsigned int)0;
          ctc.ctc_flags = (unsigned int)0;
          if(ctc.ctc_return == -1l)
            return -1L;

          dst_type=ctf_add_function(dst_fp, flag, &ctc, (const signed long int *)(void *)0);
          struct ctf_dmdef *dmd;
          signed int errs = 0;
          if(!(dst_type == -1l) && !(dst_kind == 9u))
          {
            signed long int return_value_ctf_type_size$22;
            return_value_ctf_type_size$22=ctf_type_size(src_fp, src_type);
            signed long int return_value_ctf_type_size$23;
            return_value_ctf_type_size$23=ctf_type_size(dst_fp, dst_type);
            if(!(return_value_ctf_type_size$22 == return_value_ctf_type_size$23))
            {
              return_value_ctf_set_errno$21=ctf_set_errno(dst_fp, 1043);
              return return_value_ctf_set_errno$21;
            }

            signed int return_value_ctf_member_iter$25;
            return_value_ctf_member_iter$25=ctf_member_iter(src_fp, src_type, membcmp, (void *)&dst);
            if(!(return_value_ctf_member_iter$25 == 0))
            {
              return_value_ctf_set_errno$24=ctf_set_errno(dst_fp, 1043);
              return return_value_ctf_set_errno$24;
            }

          }

          dst_type=ctf_add_generic(dst_fp, flag, name, &dtd);
          if(dst_type == -1l)
            return -1L;

          dst.ctb_type = dst_type;
          dst.ctb_dtd = dtd;
          signed int return_value_ctf_member_iter$26;
          return_value_ctf_member_iter$26=ctf_member_iter(src_fp, src_type, membadd, (void *)&dst);
          if(!(return_value_ctf_member_iter$26 == 0))
            errs = errs + 1;

          size=ctf_type_size(src_fp, src_type);
          if(size >= 65535l)
          {
            dtd->dtd_data._u._size = (unsigned short int)0xffff;
            dtd->dtd_data.ctt_lsizehi = (unsigned int)((unsigned long int)size >> 32);
            dtd->dtd_data.ctt_lsizelo = (unsigned int)size;
          }

          else
            dtd->dtd_data._u._size = (unsigned short int)size;
          dtd->dtd_data.ctt_info = (unsigned short int)(kind << 11 | (unsigned int)((flag != 0u ? 1 : 0) << 10) | vlen & (unsigned int)0x3ff);
          dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
          if(!(dmd == ((struct ctf_dmdef *)NULL)))
          {
            dmd->dmd_type=ctf_add_type(dst_fp, src_fp, dmd->dmd_type);
            if(dmd->dmd_type == -1l)
              errs = errs + 1;

            dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next;
          }

          if(!(errs == 0))
            return -1L;

          if(!(dst_type == -1l) && !(dst_kind == 9u))
          {
            signed int return_value_ctf_enum_iter$28;
            return_value_ctf_enum_iter$28=ctf_enum_iter(src_fp, src_type, enumcmp, (void *)&dst);
            if(!(return_value_ctf_enum_iter$28 == 0))
              tmp_if_expr$30 = (_Bool)1;

            else
            {
              return_value_ctf_enum_iter$29=ctf_enum_iter(dst_fp, dst_type, enumcmp, (void *)&src);
              tmp_if_expr$30 = return_value_ctf_enum_iter$29 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$30)
            {
              return_value_ctf_set_errno$27=ctf_set_errno(dst_fp, 1043);
              return return_value_ctf_set_errno$27;
            }

          }

          else
          {
            dst_type=ctf_add_enum(dst_fp, flag, name);
            dst.ctb_type = dst_type;
            if(dst.ctb_type == -1l)
              tmp_if_expr$32 = (_Bool)1;

            else
            {
              return_value_ctf_enum_iter$31=ctf_enum_iter(src_fp, src_type, enumadd, (void *)&dst);
              tmp_if_expr$32 = return_value_ctf_enum_iter$31 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$32)
              return -1L;

          }
          if(dst_type == -1l)
            dst_type=ctf_add_forward(dst_fp, flag, name, (unsigned int)6);

          src_type=ctf_type_reference(src_fp, src_type);
          src_type=ctf_add_type(dst_fp, src_fp, src_type);
          if(src_type == -1l)
            return -1L;

          if(dst_type == -1l)
            dst_type=ctf_add_typedef(dst_fp, flag, name, src_type);

        }

        signed long int return_value_ctf_set_errno$33;
        return_value_ctf_set_errno$33=ctf_set_errno(dst_fp, 1007);
        return return_value_ctf_set_errno$33;
        return dst_type;
      }
    }
  }
}

// ctf_add_typedef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 824
extern signed long int ctf_add_typedef(struct ctf_file *fp, unsigned int flag, const char *name, signed long int ref)
{
  struct ctf_dtdef *dtd;
  signed long int type;
  signed long int return_value_ctf_set_errno$1;
  if(ref == -1l || ref >= 65536l || !(ref >= 0l))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return return_value_ctf_set_errno$1;
  }

  else
  {
    type=ctf_add_generic(fp, flag, name, &dtd);
    if(type == -1l)
      return -1L;

    else
    {
      dtd->dtd_data.ctt_info = (unsigned short int)(10 << 11 | (flag != 0u ? 1 : 0) << 10 | 0 & 0x3ff);
      dtd->dtd_data._u._type = (unsigned short int)ref;
      return type;
    }
  }
}

// ctf_add_union
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 741
extern signed long int ctf_add_union(struct ctf_file *fp, unsigned int flag, const char *name)
{
  struct ctf_hash *hp = &fp->ctf_unions;
  struct ctf_helem *hep = (struct ctf_helem *)(void *)0;
  struct ctf_dtdef *dtd;
  signed long int type;
  unsigned long int return_value_strlen$1;
  if(!(name == ((const char *)NULL)))
  {
    return_value_strlen$1=strlen(name);
    hep=ctf_hash_lookup(hp, fp, name, return_value_strlen$1);
  }

  _Bool tmp_if_expr$3;
  signed int return_value_ctf_type_kind$2;
  if(!(hep == ((struct ctf_helem *)NULL)))
  {
    return_value_ctf_type_kind$2=ctf_type_kind(fp, (signed long int)hep->h_type);
    tmp_if_expr$3 = return_value_ctf_type_kind$2 == 9 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    type = (signed long int)hep->h_type;
    dtd=ctf_dtd_lookup(fp, type);
  }

  else
  {
    type=ctf_add_generic(fp, flag, name, &dtd);
    if(type == -1l)
      return -1L;

  }
  dtd->dtd_data.ctt_info = (unsigned short int)(7 << 11 | (flag != 0u ? 1 : 0) << 10 | 0 & 0x3ff);
  dtd->dtd_data._u._size = (unsigned short int)0;
  return type;
}

// ctf_add_volatile
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 842
extern signed long int ctf_add_volatile(struct ctf_file *fp, unsigned int flag, signed long int ref)
{
  signed long int return_value_ctf_add_reftype$1;
  return_value_ctf_add_reftype$1=ctf_add_reftype(fp, flag, ref, (unsigned int)11);
  return return_value_ctf_add_reftype$1;
}

// ctf_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 317
extern void * ctf_alloc(unsigned long int size)
{
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(size);
  return return_value_malloc$1;
}

// ctf_array_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 194
extern signed int ctf_array_info(struct ctf_file *fp, signed long int type, struct ctf_arinfo *arp)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  const struct ctf_array *ap;
  signed long int increment;
  tp=ctf_lookup_by_id(&fp, type);
  signed long int return_value_ctf_set_errno$1;
  if(tp == ((const struct ctf_type *)NULL))
    return (signed int)-1L;

  else
  {
    unsigned short int return_value;
    return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
    if(!((signed int)return_value == 4))
    {
      return_value_ctf_set_errno$1=ctf_set_errno(ofp, 1025);
      return (signed int)return_value_ctf_set_errno$1;
    }

    else
    {
      ctf_get_ctt_size(fp, tp, (signed long int *)(void *)0, &increment);
      ap = (const struct ctf_array *)((unsigned long int)tp + (unsigned long int)increment);
      arp->ctr_contents = (signed long int)ap->cta_contents;
      arp->ctr_index = (signed long int)ap->cta_index;
      arp->ctr_nelems = ap->cta_nelems;
      return 0;
    }
  }
}

// ctf_buf_cur
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 110
static unsigned int ctf_buf_cur(struct ctf_buf *b)
{
  return (unsigned int)(b->ctb_ptr - b->ctb_base);
}

// ctf_buf_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 102
static void ctf_buf_free(struct ctf_buf *b)
{
  strtab_destroy(&b->ctb_strtab);
  free((void *)b->ctb_base);
  free((void *)b);
}

// ctf_buf_grow
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 80
static void ctf_buf_grow(struct ctf_buf *b)
{
  signed long int ptroff = b->ctb_ptr - b->ctb_base;
  b->ctb_size = b->ctb_size + (unsigned long int)(64 * 1024);
  void *return_value_xrealloc$1;
  return_value_xrealloc$1=xrealloc((void *)b->ctb_base, b->ctb_size);
  b->ctb_base = (char *)return_value_xrealloc$1;
  b->ctb_end = b->ctb_base + (signed long int)b->ctb_size;
  b->ctb_ptr = b->ctb_base + ptroff;
}

// ctf_buf_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 91
static struct ctf_buf * ctf_buf_new(void)
{
  struct ctf_buf *b;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct ctf_buf) /*104ul*/ );
  b = (struct ctf_buf *)return_value_xcalloc$1;
  strtab_create(&b->ctb_strtab);
  ctf_buf_grow(b);
  return b;
}

// ctf_buf_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 116
static void ctf_buf_write(struct ctf_buf *b, const void *p, unsigned long int n)
{
  unsigned long int len;
  unsigned long int tmp_if_expr$1;
  for( ; !(n == 0ul); n = n - len)
  {
    if(b->ctb_ptr == b->ctb_end)
      ctf_buf_grow(b);

    if(!((unsigned long int)(b->ctb_end - b->ctb_ptr) >= n))
      tmp_if_expr$1 = (unsigned long int)(b->ctb_end - b->ctb_ptr);

    else
      tmp_if_expr$1 = n;
    len = tmp_if_expr$1;
    bcopy(p, (void *)b->ctb_ptr, len);
    b->ctb_ptr = b->ctb_ptr + (signed long int)len;
    p = (const void *)((const char *)p + (signed long int)len);
  }
}

// ctf_bufopen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 152
extern struct ctf_file * ctf_bufopen(const struct ctf_sect *ctfsect, const struct ctf_sect *symsect, const struct ctf_sect *strsect, signed int *errp)
{
  const struct ctf_preamble *pp;
  struct ctf_header hp;
  struct ctf_file *fp;
  void *buf;
  void *base;
  unsigned long int size;
  unsigned long int hdrsz;
  signed int err;
  struct ctf_file *return_value_ctf_set_open_errno$1;
  struct ctf_file *return_value_ctf_set_open_errno$2;
  struct ctf_file *return_value_ctf_set_open_errno$3;
  struct ctf_file *return_value_ctf_set_open_errno$4;
  struct ctf_file *return_value_ctf_set_open_errno$5;
  struct ctf_file *return_value_ctf_set_open_errno$6;
  struct ctf_file *return_value_ctf_set_open_errno$7;
  struct ctf_file *return_value_ctf_set_open_errno$8;
  struct ctf_file *return_value_ctf_set_open_errno$9;
  struct ctf_file *return_value_ctf_set_open_errno$10;
  struct ctf_file *return_value_ctf_set_open_errno$11;
  struct ctf_file *return_value_ctf_set_open_errno$12;
  struct ctf_file *return_value_ctf_set_open_errno$14;
  struct ctf_file *return_value_ctf_set_open_errno$18;
  const char *tmp_if_expr$20;
  const char *tmp_if_expr$21;
  if(ctfsect == ((const struct ctf_sect *)NULL) || !((symsect == ((const struct ctf_sect *)NULL)) == (strsect == ((const struct ctf_sect *)NULL))))
  {
    return_value_ctf_set_open_errno$1=ctf_set_open_errno(errp, 22);
    return return_value_ctf_set_open_errno$1;
  }

  else
    if(!(symsect == ((const struct ctf_sect *)NULL)))
    {
      if(symsect->cts_entsize == sizeof(struct anonymous$24) /*16ul*/ )
        goto __CPROVER_DUMP_L2;

      if(symsect->cts_entsize == sizeof(struct anonymous$5) /*24ul*/ )
        goto __CPROVER_DUMP_L2;

      return_value_ctf_set_open_errno$2=ctf_set_open_errno(errp, 1004);
      return return_value_ctf_set_open_errno$2;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(!(symsect == ((const struct ctf_sect *)NULL)))
      {
        if(!(symsect->cts_data == NULL))
          goto __CPROVER_DUMP_L3;

        return_value_ctf_set_open_errno$3=ctf_set_open_errno(errp, 1005);
        return return_value_ctf_set_open_errno$3;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        if(!(strsect == ((const struct ctf_sect *)NULL)))
        {
          if(!(strsect->cts_data == NULL))
            goto __CPROVER_DUMP_L4;

          return_value_ctf_set_open_errno$4=ctf_set_open_errno(errp, 1006);
          return return_value_ctf_set_open_errno$4;
        }

        else
        {

        __CPROVER_DUMP_L4:
          ;
          if(!(ctfsect->cts_size >= sizeof(struct ctf_preamble) /*4ul*/ ))
          {
            return_value_ctf_set_open_errno$5=ctf_set_open_errno(errp, 1009);
            return return_value_ctf_set_open_errno$5;
          }

          else
          {
            pp = (const struct ctf_preamble *)ctfsect->cts_data;
            ctf_dprintf("ctf_bufopen: magic=0x%x version=%u\n", pp->ctp_magic, pp->ctp_version);
            if(!((signed int)pp->ctp_magic == 0xcff1))
            {
              return_value_ctf_set_open_errno$6=ctf_set_open_errno(errp, 1009);
              return return_value_ctf_set_open_errno$6;
            }

            else
            {
              if((signed int)pp->ctp_version == 2)
              {
                if(!(ctfsect->cts_size >= sizeof(struct ctf_header) /*36ul*/ ))
                {
                  return_value_ctf_set_open_errno$7=ctf_set_open_errno(errp, 1009);
                  return return_value_ctf_set_open_errno$7;
                }

                bcopy(ctfsect->cts_data, (void *)&hp, sizeof(struct ctf_header) /*36ul*/ );
                hdrsz = sizeof(struct ctf_header) /*36ul*/ ;
              }

              else
                if((signed int)pp->ctp_version == 1)
                {
                  const struct ctf_header_v1 *h1p = (const struct ctf_header_v1 *)ctfsect->cts_data;
                  if(!(ctfsect->cts_size >= sizeof(struct ctf_header_v1) /*24ul*/ ))
                  {
                    return_value_ctf_set_open_errno$8=ctf_set_open_errno(errp, 1009);
                    return return_value_ctf_set_open_errno$8;
                  }

                  bzero((void *)&hp, sizeof(struct ctf_header) /*36ul*/ );
                  hp.cth_preamble = h1p->cth_preamble;
                  hp.cth_objtoff = h1p->cth_objtoff;
                  hp.cth_funcoff = h1p->cth_funcoff;
                  hp.cth_typeoff = h1p->cth_typeoff;
                  hp.cth_stroff = h1p->cth_stroff;
                  hp.cth_strlen = h1p->cth_strlen;
                  hdrsz = sizeof(struct ctf_header_v1) /*24ul*/ ;
                }

                else
                {
                  return_value_ctf_set_open_errno$9=ctf_set_open_errno(errp, 1002);
                  return return_value_ctf_set_open_errno$9;
                }
              size = (unsigned long int)(hp.cth_stroff + hp.cth_strlen);
              ctf_dprintf("ctf_bufopen: uncompressed size=%lu\n", (unsigned long int)size);
              if(!(size >= (unsigned long int)hp.cth_funcoff) || !(size >= (unsigned long int)hp.cth_lbloff) || !(size >= (unsigned long int)hp.cth_objtoff) || !(size >= (unsigned long int)hp.cth_stroff) || !(size >= (unsigned long int)hp.cth_typeoff))
              {
                return_value_ctf_set_open_errno$10=ctf_set_open_errno(errp, 1007);
                return return_value_ctf_set_open_errno$10;
              }

              else
                if(!(hp.cth_funcoff >= hp.cth_objtoff) || !(hp.cth_objtoff >= hp.cth_lbloff) || !(hp.cth_stroff >= hp.cth_typeoff) || !(hp.cth_typeoff >= hp.cth_funcoff))
                {
                  return_value_ctf_set_open_errno$11=ctf_set_open_errno(errp, 1007);
                  return return_value_ctf_set_open_errno$11;
                }

                else
                  if(!((1u & hp.cth_funcoff) == 0u) || !((1u & hp.cth_objtoff) == 0u) || !((3u & hp.cth_lbloff) == 0u) || !((3u & hp.cth_typeoff) == 0u))
                  {
                    return_value_ctf_set_open_errno$12=ctf_set_open_errno(errp, 1007);
                    return return_value_ctf_set_open_errno$12;
                  }

                  else
                  {
                    if(!((0x1 & (signed int)hp.cth_preamble.ctp_flags) == 0))
                    {
                      unsigned long int srclen;
                      unsigned long int dstlen;
                      const void *src;
                      signed int rc = 0;
                      void *return_value_ctf_zopen$13;
                      return_value_ctf_zopen$13=ctf_zopen(errp);
                      if(return_value_ctf_zopen$13 == NULL)
                        return (struct ctf_file *)(void *)0;

                      base=ctf_data_alloc(size + hdrsz);
                      if(base == (void *)-1)
                      {
                        return_value_ctf_set_open_errno$14=ctf_set_open_errno(errp, 1016);
                        return return_value_ctf_set_open_errno$14;
                      }

                      bcopy(ctfsect->cts_data, base, hdrsz);
                      ((struct ctf_preamble *)base)->ctp_flags = ((struct ctf_preamble *)base)->ctp_flags & (unsigned char)~0x1;
                      buf = (void *)((unsigned char *)base + (signed long int)hdrsz);
                      src = (const void *)((unsigned char *)ctfsect->cts_data + (signed long int)hdrsz);
                      srclen = ctfsect->cts_size - hdrsz;
                      dstlen = size;
                      rc=z_uncompress(buf, &dstlen, src, srclen);
                      if(!(rc == 0))
                      {
                        const char *return_value_z_strerror$15;
                        return_value_z_strerror$15=z_strerror(rc);
                        ctf_dprintf("zlib inflate err: %s\n", return_value_z_strerror$15);
                        ctf_data_free(base, size + hdrsz);
                        struct ctf_file *return_value_ctf_set_open_errno$16;
                        return_value_ctf_set_open_errno$16=ctf_set_open_errno(errp, 1017);
                        return return_value_ctf_set_open_errno$16;
                      }

                      if(!(dstlen == size))
                      {
                        ctf_dprintf("zlib inflate short -- got %lu of %lu bytes\n", (unsigned long int)dstlen, (unsigned long int)size);
                        ctf_data_free(base, size + hdrsz);
                        struct ctf_file *return_value_ctf_set_open_errno$17;
                        return_value_ctf_set_open_errno$17=ctf_set_open_errno(errp, 1007);
                        return return_value_ctf_set_open_errno$17;
                      }

                      ctf_data_protect(base, size + hdrsz);
                    }

                    else
                    {
                      base = (void *)ctfsect->cts_data;
                      buf = (void *)((unsigned char *)base + (signed long int)hdrsz);
                    }
                    void *return_value_ctf_alloc$19;
                    return_value_ctf_alloc$19=ctf_alloc(sizeof(struct ctf_file) /*600ul*/ );
                    fp = (struct ctf_file *)return_value_ctf_alloc$19;
                    if(fp == ((struct ctf_file *)NULL))
                    {
                      return_value_ctf_set_open_errno$18=ctf_set_open_errno(errp, 11);
                      return return_value_ctf_set_open_errno$18;
                    }

                    else
                    {
                      bzero((void *)fp, sizeof(struct ctf_file) /*600ul*/ );
                      fp->ctf_version = (signed int)hp.cth_preamble.ctp_version;
                      fp->ctf_fileops = &ctf_fileops[(signed long int)hp.cth_preamble.ctp_version];
                      bcopy((const void *)ctfsect, (void *)&fp->ctf_data, sizeof(struct ctf_sect) /*56ul*/ );
                      if(!(symsect == ((const struct ctf_sect *)NULL)))
                      {
                        bcopy((const void *)symsect, (void *)&fp->ctf_symtab, sizeof(struct ctf_sect) /*56ul*/ );
                        bcopy((const void *)strsect, (void *)&fp->ctf_strtab, sizeof(struct ctf_sect) /*56ul*/ );
                      }

                      if(!(fp->ctf_data.cts_name == ((const char *)NULL)))
                        fp->ctf_data.cts_name=ctf_strdup(fp->ctf_data.cts_name);

                      if(!(fp->ctf_symtab.cts_name == ((const char *)NULL)))
                        fp->ctf_symtab.cts_name=ctf_strdup(fp->ctf_symtab.cts_name);

                      if(!(fp->ctf_strtab.cts_name == ((const char *)NULL)))
                        fp->ctf_strtab.cts_name=ctf_strdup(fp->ctf_strtab.cts_name);

                      if(fp->ctf_data.cts_name == ((const char *)NULL))
                        fp->ctf_data.cts_name = _CTF_NULLSTR;

                      if(fp->ctf_symtab.cts_name == ((const char *)NULL))
                        fp->ctf_symtab.cts_name = _CTF_NULLSTR;

                      if(fp->ctf_strtab.cts_name == ((const char *)NULL))
                        fp->ctf_strtab.cts_name = _CTF_NULLSTR;

                      fp->ctf_str[(signed long int)0].cts_strs = (const char *)buf + (signed long int)hp.cth_stroff;
                      fp->ctf_str[(signed long int)0].cts_len = (unsigned long int)hp.cth_strlen;
                      if(!(strsect == ((const struct ctf_sect *)NULL)))
                      {
                        fp->ctf_str[(signed long int)1].cts_strs = (const char *)strsect->cts_data;
                        fp->ctf_str[(signed long int)1].cts_len = strsect->cts_size;
                      }

                      fp->ctf_base = (const unsigned char *)base;
                      fp->ctf_buf = (const unsigned char *)buf;
                      fp->ctf_size = size + hdrsz;
                      if(!(hp.cth_parlabel == 0u))
                        fp->ctf_parlabel=ctf_strptr(fp, hp.cth_parlabel);

                      if(!(hp.cth_parname == 0u))
                        fp->ctf_parname=ctf_strptr(fp, hp.cth_parname);

                      if(!(fp->ctf_parname == ((const char *)NULL)))
                        tmp_if_expr$20 = fp->ctf_parname;

                      else
                        tmp_if_expr$20 = "<NULL>";
                      if(!(fp->ctf_parlabel == ((const char *)NULL)))
                        tmp_if_expr$21 = fp->ctf_parlabel;

                      else
                        tmp_if_expr$21 = "<NULL>";
                      ctf_dprintf("ctf_bufopen: parent name %s (label %s)\n", tmp_if_expr$20, tmp_if_expr$21);
                      if(!(symsect == ((const struct ctf_sect *)NULL)))
                      {
                        fp->ctf_nsyms = symsect->cts_size / symsect->cts_entsize;
                        void *return_value_ctf_alloc$22;
                        return_value_ctf_alloc$22=ctf_alloc(fp->ctf_nsyms * sizeof(unsigned int) /*4ul*/ );
                        fp->ctf_sxlate = (unsigned int *)return_value_ctf_alloc$22;
                        if(fp->ctf_sxlate == ((unsigned int *)NULL))
                        {
                          ctf_set_open_errno(errp, 11);
                          goto bad;
                        }

                        err=init_symtab(fp, &hp, symsect, strsect);
                        if(!(err == 0))
                        {
                          ctf_set_open_errno(errp, err);
                          goto bad;
                        }

                      }

                      err=init_types(fp, &hp);
                      if(!(err == 0))
                        ctf_set_open_errno(errp, err);

                      else
                      {
                        fp->ctf_lookups[(signed long int)0].ctl_prefix = "struct";
                        fp->ctf_lookups[(signed long int)0].ctl_len=strlen(fp->ctf_lookups[(signed long int)0].ctl_prefix);
                        fp->ctf_lookups[(signed long int)0].ctl_hash = &fp->ctf_structs;
                        fp->ctf_lookups[(signed long int)1].ctl_prefix = "union";
                        fp->ctf_lookups[(signed long int)1].ctl_len=strlen(fp->ctf_lookups[(signed long int)1].ctl_prefix);
                        fp->ctf_lookups[(signed long int)1].ctl_hash = &fp->ctf_unions;
                        fp->ctf_lookups[(signed long int)2].ctl_prefix = "enum";
                        fp->ctf_lookups[(signed long int)2].ctl_len=strlen(fp->ctf_lookups[(signed long int)2].ctl_prefix);
                        fp->ctf_lookups[(signed long int)2].ctl_hash = &fp->ctf_enums;
                        fp->ctf_lookups[(signed long int)3].ctl_prefix = _CTF_NULLSTR;
                        fp->ctf_lookups[(signed long int)3].ctl_len=strlen(fp->ctf_lookups[(signed long int)3].ctl_prefix);
                        fp->ctf_lookups[(signed long int)3].ctl_hash = &fp->ctf_names;
                        fp->ctf_lookups[(signed long int)4].ctl_prefix = (const char *)(void *)0;
                        fp->ctf_lookups[(signed long int)4].ctl_len = (unsigned long int)0;
                        fp->ctf_lookups[(signed long int)4].ctl_hash = (struct ctf_hash *)(void *)0;
                        if(!(symsect == ((const struct ctf_sect *)NULL)))
                        {
                          if(symsect->cts_entsize == sizeof(struct anonymous$5) /*24ul*/ )
                            ctf_setmodel(fp, 2);

                          else
                            ctf_setmodel(fp, 1);
                        }

                        else
                          ctf_setmodel(fp, 2);
                        fp->ctf_refcnt = (unsigned int)1;
                        return fp;
                      }

                    bad:
                      ;
                      ctf_close(fp);
                      return (struct ctf_file *)(void *)0;
                    }
                  }
            }
          }
        }
      }
    }
}

// ctf_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 157
extern void ctf_close(struct ctf_file *fp)
{
  struct ctf_dtdef *dtd;
  struct ctf_dtdef *ntd;
  if(!(fp == ((struct ctf_file *)NULL)))
  {
    ctf_dprintf("ctf_close(%p) refcnt=%u\n", (void *)fp, fp->ctf_refcnt);
    if(fp->ctf_refcnt >= 2u)
      fp->ctf_refcnt = fp->ctf_refcnt - 1u;

    else
    {
      if(!(fp->ctf_parent == ((struct ctf_file *)NULL)))
        ctf_close(fp->ctf_parent);

      dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)&fp->ctf_dtdefs)->l_next;
      for( ; !(dtd == ((struct ctf_dtdef *)NULL)); dtd = ntd)
      {
        ntd = (struct ctf_dtdef *)(void *)((struct ctf_list *)dtd)->l_next;
        ctf_dtd_delete(fp, dtd);
      }
      ctf_free((void *)fp->ctf_dthash, fp->ctf_dthashlen * sizeof(struct ctf_dtdef *) /*8ul*/ );
      if(!((1u & fp->ctf_flags) == 0u))
      {
        if(!(fp->ctf_data.cts_data == NULL))
          ctf_sect_munmap(&fp->ctf_data);

        if(!(fp->ctf_symtab.cts_data == NULL))
          ctf_sect_munmap(&fp->ctf_symtab);

        if(!(fp->ctf_strtab.cts_data == NULL))
          ctf_sect_munmap(&fp->ctf_strtab);

      }

      if(!(fp->ctf_data.cts_name == _CTF_NULLSTR))
      {
        if(!(fp->ctf_data.cts_name == ((const char *)NULL)))
        {
          unsigned long int return_value_strlen$1;
          return_value_strlen$1=strlen(fp->ctf_data.cts_name);
          ctf_free((void *)(char *)fp->ctf_data.cts_name, return_value_strlen$1 + (unsigned long int)1);
        }

      }

      if(!(fp->ctf_symtab.cts_name == _CTF_NULLSTR))
      {
        if(!(fp->ctf_symtab.cts_name == ((const char *)NULL)))
        {
          unsigned long int return_value_strlen$2;
          return_value_strlen$2=strlen(fp->ctf_symtab.cts_name);
          ctf_free((void *)(char *)fp->ctf_symtab.cts_name, return_value_strlen$2 + (unsigned long int)1);
        }

      }

      if(!(fp->ctf_strtab.cts_name == _CTF_NULLSTR))
      {
        if(!(fp->ctf_strtab.cts_name == ((const char *)NULL)))
        {
          unsigned long int return_value_strlen$3;
          return_value_strlen$3=strlen(fp->ctf_strtab.cts_name);
          ctf_free((void *)(char *)fp->ctf_strtab.cts_name, return_value_strlen$3 + (unsigned long int)1);
        }

      }

      if(!(fp->ctf_base == (const unsigned char *)fp->ctf_data.cts_data))
      {
        if(!(fp->ctf_base == ((const unsigned char *)NULL)))
          ctf_data_free((void *)fp->ctf_base, fp->ctf_size);

      }

      if(!(fp->ctf_sxlate == ((unsigned int *)NULL)))
        ctf_free((void *)fp->ctf_sxlate, sizeof(unsigned int) /*4ul*/  * fp->ctf_nsyms);

      if(!(fp->ctf_txlate == ((unsigned int *)NULL)))
        ctf_free((void *)fp->ctf_txlate, sizeof(unsigned int) /*4ul*/  * (fp->ctf_typemax + (unsigned long int)1));

      if(!(fp->ctf_ptrtab == ((unsigned short int *)NULL)))
        ctf_free((void *)fp->ctf_ptrtab, sizeof(unsigned short int) /*2ul*/  * (fp->ctf_typemax + (unsigned long int)1));

      ctf_hash_destroy(&fp->ctf_structs);
      ctf_hash_destroy(&fp->ctf_unions);
      ctf_hash_destroy(&fp->ctf_enums);
      ctf_hash_destroy(&fp->ctf_names);
      ctf_free((void *)fp, sizeof(struct ctf_file) /*600ul*/ );
    }
  }

}

// ctf_copy_emembers
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 136
static unsigned char * ctf_copy_emembers(struct ctf_dtdef *dtd, unsigned int soff, unsigned char *t)
{
  struct ctf_dmdef *dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
  struct ctf_enum cte;
  for( ; !(dmd == ((struct ctf_dmdef *)NULL)); dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next)
  {
    cte.cte_name = soff;
    cte.cte_value = dmd->dmd_value;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(dmd->dmd_name);
    soff = soff + (unsigned int)(return_value_strlen$1 + (unsigned long int)1);
    bcopy((const void *)&cte, (void *)t, sizeof(struct ctf_enum) /*8ul*/ );
    t = t + (signed long int)sizeof(struct ctf_enum) /*8ul*/ ;
  }
  return t;
}

// ctf_copy_lmembers
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 111
static unsigned char * ctf_copy_lmembers(struct ctf_dtdef *dtd, unsigned int soff, unsigned char *t)
{
  struct ctf_dmdef *dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
  struct ctf_lmember ctlm;
  for( ; !(dmd == ((struct ctf_dmdef *)NULL)); dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next)
  {
    if(!(dmd->dmd_name == ((char *)NULL)))
    {
      ctlm.ctlm_name = soff;
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(dmd->dmd_name);
      soff = soff + (unsigned int)(return_value_strlen$1 + (unsigned long int)1);
    }

    else
      ctlm.ctlm_name = (unsigned int)0;
    ctlm.ctlm_type = (unsigned short int)dmd->dmd_type;
    ctlm.ctlm_pad = (unsigned short int)0;
    ctlm.ctlm_offsethi = (unsigned int)((unsigned long int)dmd->dmd_offset >> 32);
    ctlm.ctlm_offsetlo = (unsigned int)dmd->dmd_offset;
    bcopy((const void *)&ctlm, (void *)t, sizeof(struct ctf_lmember) /*16ul*/ );
    t = t + (signed long int)sizeof(struct ctf_lmember) /*16ul*/ ;
  }
  return t;
}

// ctf_copy_membnames
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 153
static unsigned char * ctf_copy_membnames(struct ctf_dtdef *dtd, unsigned char *s)
{
  struct ctf_dmdef *dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
  unsigned long int len;
  for( ; !(dmd == ((struct ctf_dmdef *)NULL)); dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next)
    if(!(dmd->dmd_name == ((char *)NULL)))
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(dmd->dmd_name);
      len = return_value_strlen$1 + (unsigned long int)1;
      bcopy((const void *)dmd->dmd_name, (void *)s, len);
      s = s + (signed long int)len;
    }

  return s;
}

// ctf_copy_smembers
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 88
static unsigned char * ctf_copy_smembers(struct ctf_dtdef *dtd, unsigned int soff, unsigned char *t)
{
  struct ctf_dmdef *dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
  struct ctf_member ctm;
  for( ; !(dmd == ((struct ctf_dmdef *)NULL)); dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next)
  {
    if(!(dmd->dmd_name == ((char *)NULL)))
    {
      ctm.ctm_name = soff;
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(dmd->dmd_name);
      soff = soff + (unsigned int)(return_value_strlen$1 + (unsigned long int)1);
    }

    else
      ctm.ctm_name = (unsigned int)0;
    ctm.ctm_type = (unsigned short int)dmd->dmd_type;
    ctm.ctm_offset = (unsigned short int)dmd->dmd_offset;
    bcopy((const void *)&ctm, (void *)t, sizeof(struct ctf_member) /*8ul*/ );
    t = t + (signed long int)sizeof(struct ctf_member) /*8ul*/ ;
  }
  return t;
}

// ctf_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 51
extern struct ctf_file * ctf_create(signed int *errp)
{
  const unsigned long int hashlen = (const unsigned long int)128;
  struct ctf_dtdef **hash;
  void *return_value_ctf_alloc$1;
  return_value_ctf_alloc$1=ctf_alloc(hashlen * sizeof(struct ctf_dtdef *) /*8ul*/ );
  hash = (struct ctf_dtdef **)return_value_ctf_alloc$1;
  struct ctf_sect cts;
  struct ctf_file *fp;
  struct ctf_file *return_value_ctf_set_open_errno$2;
  if(hash == ((struct ctf_dtdef **)NULL))
  {
    return_value_ctf_set_open_errno$2=ctf_set_open_errno(errp, 11);
    return return_value_ctf_set_open_errno$2;
  }

  else
  {
    cts.cts_name = _CTF_SECTION;
    cts.cts_type = (unsigned long int)1;
    cts.cts_flags = (unsigned long int)0;
    static const struct ctf_header hdr = { .cth_preamble={ .ctp_magic=(unsigned short int)0xcff1, .ctp_version=(unsigned char)2,
    .ctp_flags=(unsigned char)0 }, .cth_parlabel=0u,
    .cth_parname=0u, .cth_lbloff=0u, .cth_objtoff=0u,
    .cth_funcoff=0u, .cth_typeoff=0u, .cth_stroff=0u,
    .cth_strlen=0u };
    cts.cts_data = (void *)&hdr;
    cts.cts_size = sizeof(const struct ctf_header) /*36ul*/ ;
    cts.cts_entsize = (unsigned long int)1;
    cts.cts_offset = (signed long int)0;
    fp=ctf_bufopen(&cts, (const struct ctf_sect *)(void *)0, (const struct ctf_sect *)(void *)0, errp);
    if(fp == ((struct ctf_file *)NULL))
    {
      ctf_free((void *)hash, hashlen * sizeof(struct ctf_dtdef *) /*8ul*/ );
      return (struct ctf_file *)(void *)0;
    }

    else
    {
      fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0004;
      fp->ctf_dthashlen = hashlen;
      bzero((void *)hash, hashlen * sizeof(struct ctf_dtdef *) /*8ul*/ );
      fp->ctf_dthash = hash;
      fp->ctf_dtstrlen = sizeof(const char [8l]) /*8ul*/ ;
      fp->ctf_dtnextid = (unsigned long int)1;
      fp->ctf_dtoldid = (unsigned long int)0;
      return fp;
    }
  }
}

// ctf_data_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 313
extern void * ctf_data_alloc(unsigned long int size)
{
  void *return_value_mmap$1;
  return_value_mmap$1=mmap((void *)0, size, 0x1 | 0x2, 0x02 | 0x20, -1, (signed long int)0);
  return return_value_mmap$1;
}

// ctf_data_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 314
extern void ctf_data_free(void *buf, unsigned long int size)
{
  munmap(buf, size);
}

// ctf_data_protect
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 315
extern void ctf_data_protect(void *buf, unsigned long int size)
{
  mprotect(buf, size, 0x1);
}

// ctf_decl_fini
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 72
extern void ctf_decl_fini(struct ctf_decl *cd)
{
  struct ctf_decl_node *cdp;
  struct ctf_decl_node *ndp;
  signed int i = CTF_PREC_BASE;
  for( ; !(i >= CTF_PREC_MAX); i = i + 1)
  {
    cdp = (struct ctf_decl_node *)(void *)((struct ctf_list *)&cd->cd_nodes[(signed long int)i])->l_next;
    for( ; !(cdp == ((struct ctf_decl_node *)NULL)); cdp = ndp)
    {
      ndp = (struct ctf_decl_node *)(void *)((struct ctf_list *)cdp)->l_next;
      ctf_free((void *)cdp, sizeof(struct ctf_decl_node) /*32ul*/ );
    }
  }
}

// ctf_decl_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 54
extern void ctf_decl_init(struct ctf_decl *cd, char *buf, unsigned long int len)
{
  signed int i;
  bzero((void *)cd, sizeof(struct ctf_decl) /*128ul*/ );
  i = CTF_PREC_BASE;
  for( ; !(i >= CTF_PREC_MAX); i = i + 1)
    cd->cd_order[(signed long int)i] = CTF_PREC_BASE - 1;
  cd->cd_qualp = (enum anonymous$16)CTF_PREC_BASE;
  cd->cd_ordp = (enum anonymous$16)CTF_PREC_BASE;
  cd->cd_buf = buf;
  cd->cd_ptr = buf;
  cd->cd_end = buf + (signed long int)len;
}

// ctf_decl_push
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 87
extern void ctf_decl_push(struct ctf_decl *cd, struct ctf_file *fp, signed long int type)
{
  struct ctf_decl_node *cdp;
  enum anonymous$16 prec;
  unsigned int kind;
  unsigned int n = (unsigned int)1;
  signed int is_qual = 0;
  const struct ctf_type *tp;
  struct ctf_arinfo ar;
  tp=ctf_lookup_by_id(&fp, type);
  const char *return_value_ctf_strptr$1;
  enum anonymous$16 tmp_post$3;
  if(tp == ((const struct ctf_type *)NULL))
    cd->cd_err = fp->ctf_errno;

  else
  {
    unsigned short int return_value;
    return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
    kind = (unsigned int)return_value;
    if(kind == 4u)
    {
      ctf_array_info(fp, type, &ar);
      ctf_decl_push(cd, fp, ar.ctr_contents);
      n = ar.ctr_nelems;
      prec = (enum anonymous$16)CTF_PREC_ARRAY;
      return_value_ctf_strptr$1=ctf_strptr(fp, tp->ctt_name);
      if((signed int)*return_value_ctf_strptr$1 == 0)
        ctf_decl_push(cd, fp, (signed long int)tp->_u._type);

      prec = (enum anonymous$16)CTF_PREC_BASE;
      ctf_decl_push(cd, fp, (signed long int)tp->_u._type);
      prec = (enum anonymous$16)CTF_PREC_FUNCTION;
      ctf_decl_push(cd, fp, (signed long int)tp->_u._type);
      prec = (enum anonymous$16)CTF_PREC_POINTER;
      ctf_decl_push(cd, fp, (signed long int)tp->_u._type);
      prec = cd->cd_qualp;
      is_qual = is_qual + 1;
    }

    prec = (enum anonymous$16)CTF_PREC_BASE;
    void *return_value_ctf_alloc$2;
    return_value_ctf_alloc$2=ctf_alloc(sizeof(struct ctf_decl_node) /*32ul*/ );
    cdp = (struct ctf_decl_node *)return_value_ctf_alloc$2;
    if(cdp == ((struct ctf_decl_node *)NULL))
      cd->cd_err = 11;

    else
    {
      cdp->cd_type = type;
      cdp->cd_kind = kind;
      cdp->cd_n = n;
      if(cd->cd_nodes[(signed long int)prec].l_next == ((struct ctf_list *)NULL))
      {
        tmp_post$3 = cd->cd_ordp;
        cd->cd_ordp = (enum anonymous$16)((signed int)cd->cd_ordp + 1);
        cd->cd_order[(signed long int)prec] = (signed int)tmp_post$3;
      }

      if(!((signed int)cd->cd_qualp >= (signed int)prec))
      {
        if(!((signed int)prec >= CTF_PREC_ARRAY))
          cd->cd_qualp = prec;

      }

      if(kind == 4u || (signed int)prec == CTF_PREC_BASE && !(is_qual == 0))
        ctf_list_prepend(&cd->cd_nodes[(signed long int)prec], (void *)cdp);

      else
        ctf_list_append(&cd->cd_nodes[(signed long int)prec], (void *)cdp);
    }
  }
}

// ctf_decl_sprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_decl.c line 172
extern void ctf_decl_sprintf(struct ctf_decl *cd, const char *format, ...)
{
  unsigned long int len = (unsigned long int)(cd->cd_end - cd->cd_ptr);
  void **ap;
  unsigned long int n;
  ap = (void **)&format;
  signed int return_value_vsnprintf$1;
  return_value_vsnprintf$1=vsnprintf(cd->cd_ptr, len, format, ap);
  n = (unsigned long int)return_value_vsnprintf$1;
  ap = ((void **)NULL);
  cd->cd_ptr = cd->cd_ptr + (signed long int)(n < len ? n : len);
  cd->cd_len = cd->cd_len + n;
}

// ctf_discard
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 501
extern signed int ctf_discard(struct ctf_file *fp)
{
  struct ctf_dtdef *dtd;
  struct ctf_dtdef *ntd;
  signed long int return_value_ctf_set_errno$1;
  if((4u & fp->ctf_flags) == 0u)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 1039);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
    if((8u & fp->ctf_flags) == 0u)
      return 0;

    else
    {
      dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)&fp->ctf_dtdefs)->l_next;
      for( ; !(dtd == ((struct ctf_dtdef *)NULL)); dtd = ntd)
        if(!(fp->ctf_dtoldid >= (unsigned long int)dtd->dtd_type))
        {
          ntd = (struct ctf_dtdef *)(void *)((struct ctf_list *)dtd)->l_next;
          ctf_dtd_delete(fp, dtd);
        }

      fp->ctf_dtnextid = fp->ctf_dtoldid + (unsigned long int)1;
      fp->ctf_flags = fp->ctf_flags & (unsigned int)~0x0008;
      return 0;
    }
}

// ctf_dprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 322
extern void ctf_dprintf(const char *format, ...)
{
  if(!(_libctf_debug == 0))
  {
    void **alist = (void **)&format;
    fputs("libctf DEBUG: ", stderr);
    vfprintf(stderr, format, alist);
    alist = ((void **)NULL);
  }

}

// ctf_dtd_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 429
extern void ctf_dtd_delete(struct ctf_file *fp, struct ctf_dtdef *dtd)
{
  unsigned long int h = (unsigned long int)dtd->dtd_type & fp->ctf_dthashlen - (unsigned long int)1;
  struct ctf_dtdef *p;
  struct ctf_dtdef **q = &fp->ctf_dthash[(signed long int)h];
  struct ctf_dmdef *dmd;
  struct ctf_dmdef *nmd;
  unsigned long int len;
  p = *q;
  for( ; !(p == ((struct ctf_dtdef *)NULL)); p = p->dtd_hash)
    if(!(p == dtd))
      q = &p->dtd_hash;

    else
      break;
  if(!(p == ((struct ctf_dtdef *)NULL)))
    *q = p->dtd_hash;

  switch(((signed int)dtd->dtd_data.ctt_info & 0xf800) >> 11)
  {
    case 6:

    case 7:

    case 8:
    {
      dmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)&dtd->dtd_u.dtu_members)->l_next;
      for( ; !(dmd == ((struct ctf_dmdef *)NULL)); dmd = nmd)
      {
        if(!(dmd->dmd_name == ((char *)NULL)))
        {
          unsigned long int return_value_strlen$1;
          return_value_strlen$1=strlen(dmd->dmd_name);
          len = return_value_strlen$1 + (unsigned long int)1;
          ctf_free((void *)dmd->dmd_name, len);
          fp->ctf_dtstrlen = fp->ctf_dtstrlen - len;
        }

        nmd = (struct ctf_dmdef *)(void *)((struct ctf_list *)dmd)->l_next;
        ctf_free((void *)dmd, sizeof(struct ctf_dmdef) /*48ul*/ );
      }
      break;
    }
    case 5:
      ctf_free((void *)dtd->dtd_u.dtu_argv, sizeof(signed long int) /*8ul*/  * (unsigned long int)((signed int)dtd->dtd_data.ctt_info & 0x3ff));
  }
  if(!(dtd->dtd_name == ((char *)NULL)))
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(dtd->dtd_name);
    len = return_value_strlen$2 + (unsigned long int)1;
    ctf_free((void *)dtd->dtd_name, len);
    fp->ctf_dtstrlen = fp->ctf_dtstrlen - len;
  }

  ctf_list_delete(&fp->ctf_dtdefs, (void *)dtd);
  ctf_free((void *)dtd, sizeof(struct ctf_dtdef) /*80ul*/ );
}

// ctf_dtd_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 419
extern void ctf_dtd_insert(struct ctf_file *fp, struct ctf_dtdef *dtd)
{
  unsigned long int h = (unsigned long int)dtd->dtd_type & fp->ctf_dthashlen - (unsigned long int)1;
  dtd->dtd_hash = fp->ctf_dthash[(signed long int)h];
  fp->ctf_dthash[(signed long int)h] = dtd;
  ctf_list_append(&fp->ctf_dtdefs, (void *)dtd);
}

// ctf_dtd_lookup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 478
extern struct ctf_dtdef * ctf_dtd_lookup(struct ctf_file *fp, signed long int type)
{
  unsigned long int h = (unsigned long int)type & fp->ctf_dthashlen - (unsigned long int)1;
  struct ctf_dtdef *dtd;
  if(fp->ctf_dthash == ((struct ctf_dtdef **)NULL))
    return (struct ctf_dtdef *)(void *)0;

  else
  {
    dtd = fp->ctf_dthash[(signed long int)h];
    for( ; !(dtd == ((struct ctf_dtdef *)NULL)); dtd = dtd->dtd_hash)
      if(dtd->dtd_type == type)
        break;

    return dtd;
  }
}

// ctf_enum_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 203
extern signed int ctf_enum_iter(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed int, void *), void *arg)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  const struct ctf_enum *ep;
  signed long int increment;
  unsigned int n;
  signed int rc;
  type=ctf_type_resolve(fp, type);
  signed long int return_value_ctf_set_errno$1;
  if(type == -1l)
    return (signed int)-1L;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (signed int)-1L;

    else
    {
      unsigned short int return_value;
      return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      if(!((signed int)return_value == 8))
      {
        return_value_ctf_set_errno$1=ctf_set_errno(ofp, 1022);
        return (signed int)return_value_ctf_set_errno$1;
      }

      else
      {
        ctf_get_ctt_size(fp, tp, (signed long int *)(void *)0, &increment);
        ep = (const struct ctf_enum *)((unsigned long int)tp + (unsigned long int)increment);
        unsigned short int return_value_1;
        return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
        n = (unsigned int)return_value_1;
        if(!(n == 0u))
        {
          const char *name;
          name=ctf_strptr(fp, ep->cte_name);
          rc=func(name, ep->cte_value, arg);
          if(!(rc == 0))
            return rc;

          n = n - 1u;
          ep = ep + 1l;
        }

        return 0;
      }
    }
  }
}

// ctf_enum_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 705
extern const char * ctf_enum_name(struct ctf_file *fp, signed long int type, signed int value)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  const struct ctf_enum *ep;
  signed long int increment;
  unsigned int n;
  type=ctf_type_resolve(fp, type);
  const char *return_value_ctf_strptr$1;
  if(type == -1l)
    return (const char *)(void *)0;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (const char *)(void *)0;

    else
    {
      unsigned short int return_value;
      return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      if(!((signed int)return_value == 8))
      {
        ctf_set_errno(ofp, 1022);
        return (const char *)(void *)0;
      }

      else
      {
        ctf_get_ctt_size(fp, tp, (signed long int *)(void *)0, &increment);
        ep = (const struct ctf_enum *)((unsigned long int)tp + (unsigned long int)increment);
        unsigned short int return_value_1;
        return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
        n = (unsigned int)return_value_1;
        if(!(n == 0u))
        {
          if(ep->cte_value == value)
          {
            return_value_ctf_strptr$1=ctf_strptr(fp, ep->cte_name);
            return return_value_ctf_strptr$1;
          }

          n = n - 1u;
          ep = ep + 1l;
        }

        ctf_set_errno(ofp, 1037);
        return (const char *)(void *)0;
      }
    }
  }
}

// ctf_enum_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 197
extern signed int ctf_enum_value(struct ctf_file *fp, signed long int type, const char *name, signed int *valp)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  const struct ctf_enum *ep;
  signed long int size;
  signed long int increment;
  unsigned int n;
  type=ctf_type_resolve(fp, type);
  if(type == -1l)
    return (signed int)-1L;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (signed int)-1L;

    else
    {
      unsigned short int return_value;
      return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      if(!((signed int)return_value == 8))
      {
        ctf_set_errno(ofp, 1022);
        return (signed int)-1L;
      }

      else
      {
        ctf_get_ctt_size(fp, tp, &size, &increment);
        ep = (const struct ctf_enum *)((unsigned long int)tp + (unsigned long int)increment);
        unsigned short int return_value_1;
        return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
        n = (unsigned int)return_value_1;
        if(!(n == 0u))
        {
          const char *return_value_ctf_strptr$1;
          return_value_ctf_strptr$1=ctf_strptr(fp, ep->cte_name);
          signed int return_value_strcmp$2;
          return_value_strcmp$2=strcmp(return_value_ctf_strptr$1, name);
          if(return_value_strcmp$2 == 0)
          {
            if(!(valp == ((signed int *)NULL)))
              *valp = ep->cte_value;

            return 0;
          }

          n = n - 1u;
          ep = ep + 1l;
        }

        ctf_set_errno(ofp, 1037);
        return (signed int)-1L;
      }
    }
  }
}

// ctf_errmsg
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_error.c line 81
extern const char * ctf_errmsg(signed int error)
{
  const char *str;
  if(error >= 1000 && !(error + -1000 >= _ctf_nerr))
    str = _ctf_errlist[(signed long int)(error - 1000)];

  else
    str=ctf_strerror(error);
  return str != ((const char *)NULL) ? str : "Unknown error";
}

// ctf_errno
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 169
extern signed int ctf_errno(struct ctf_file *fp)
{
  return fp->ctf_errno;
}

// ctf_fdopen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 215
extern struct ctf_file * ctf_fdopen(signed int fd, signed int *errp)
{
  struct ctf_sect ctfsect;
  struct ctf_sect symsect;
  struct ctf_sect strsect;
  struct ctf_file *fp = (struct ctf_file *)(void *)0;
  struct stat64 st;
  signed long int nbytes;
  /* tag-#anon#lUN[SYM#tag-ctf_preamble#'ctf'||SYM#tag-#anon#ST[ARR16{U8}$U8$'e_ident'||U16'e_type'||U16'e_machine'||U32'e_version'||U32'e_entry'||U32'e_phoff'||U32'e_shoff'||U32'e_flags'||U16'e_ehsize'||U16'e_phentsize'||U16'e_phnum'||U16'e_shentsize'||U16'e_shnum'||U16'e_shstrndx'|]#'e32'||SYM#tag-#anon#ST[ARR16{U8}$U8$'e_ident'||U16'e_type'||U16'e_machine'||U32'e_version'||U64'e_entry'||U64'e_phoff'||U64'e_shoff'||U32'e_flags'||U16'e_ehsize'||U16'e_phentsize'||U16'e_phnum'||U16'e_shentsize'||U16'e_shnum'||U16'e_shstrndx'|]#'e64'|] */
union anonymous$21
{
  // ctf
  struct ctf_preamble ctf;
  // e32
  struct anonymous$18 e32;
  // e64
  struct anonymous$8 e64;
};

/* */
  ;
  union anonymous$21 hdr;
  bzero((void *)&ctfsect, sizeof(struct ctf_sect) /*56ul*/ );
  bzero((void *)&symsect, sizeof(struct ctf_sect) /*56ul*/ );
  bzero((void *)&strsect, sizeof(struct ctf_sect) /*56ul*/ );
  bzero((void *)&hdr.ctf, sizeof(union anonymous$21) /*64ul*/ );
  signed int return_value_fstat64$3;
  return_value_fstat64$3=fstat64(fd, &st);
  signed int *return_value___errno_location$1;
  struct ctf_file *return_value_ctf_set_open_errno$2;
  signed int tmp_if_expr$5;
  signed int *return_value___errno_location$4;
  struct ctf_file *return_value_ctf_set_open_errno$6;
  struct ctf_file *return_value_ctf_set_open_errno$7;
  signed int *return_value___errno_location$8;
  struct ctf_file *return_value_ctf_set_open_errno$9;
  signed int return_value_bcmp$35;
  struct ctf_file *return_value_ctf_set_open_errno$10;
  struct ctf_file *return_value_ctf_set_open_errno$11;
  struct ctf_file *return_value_ctf_set_open_errno$12;
  struct ctf_file *return_value_ctf_set_open_errno$13;
  signed int *return_value___errno_location$14;
  struct ctf_file *return_value_ctf_set_open_errno$15;
  _Bool tmp_if_expr$21;
  signed long int return_value_pread$20;
  signed long int return_value_pread$24;
  _Bool tmp_if_expr$26;
  _Bool tmp_if_expr$28;
  signed int return_value_strcmp$27;
  _Bool tmp_if_expr$34;
  const void *return_value_ctf_sect_mmap$33;
  if(return_value_fstat64$3 == -1)
  {
    return_value___errno_location$1=__errno_location();
    return_value_ctf_set_open_errno$2=ctf_set_open_errno(errp, *return_value___errno_location$1);
    return return_value_ctf_set_open_errno$2;
  }

  else
  {
    nbytes=pread(fd, (void *)&hdr.ctf, sizeof(union anonymous$21) /*64ul*/ , (signed long int)0);
    if(!(nbytes >= 1l))
    {
      if(!(nbytes >= 0l))
      {
        return_value___errno_location$4=__errno_location();
        tmp_if_expr$5 = *return_value___errno_location$4;
      }

      else
        tmp_if_expr$5 = 1000;
      return_value_ctf_set_open_errno$6=ctf_set_open_errno(errp, tmp_if_expr$5);
      return return_value_ctf_set_open_errno$6;
    }

    else
    {
      if((signed int)hdr.ctf.ctp_magic == 0xcff1 && nbytes >= (signed long int)sizeof(struct ctf_preamble) /*4l*/ )
      {
        if((signed int)hdr.ctf.ctp_version >= 3)
        {
          return_value_ctf_set_open_errno$7=ctf_set_open_errno(errp, 1002);
          return return_value_ctf_set_open_errno$7;
        }

        ctfsect.cts_data=mmap((void *)0, (unsigned long int)st.st_size, 0x1, 0x02, fd, (signed long int)0);
        if(ctfsect.cts_data == (void *)-1)
        {
          return_value___errno_location$8=__errno_location();
          return_value_ctf_set_open_errno$9=ctf_set_open_errno(errp, *return_value___errno_location$8);
          return return_value_ctf_set_open_errno$9;
        }

        ctfsect.cts_name = _CTF_SECTION;
        ctfsect.cts_type = (unsigned long int)1;
        ctfsect.cts_flags = (unsigned long int)(1 << 1);
        ctfsect.cts_size = (unsigned long int)st.st_size;
        ctfsect.cts_entsize = (unsigned long int)1;
        ctfsect.cts_offset = (signed long int)0;
        fp=ctf_bufopen(&ctfsect, (const struct ctf_sect *)(void *)0, (const struct ctf_sect *)(void *)0, errp);
        if(fp == ((struct ctf_file *)NULL))
          ctf_sect_munmap(&ctfsect);

        return fp;
      }

      if(nbytes >= (signed long int)sizeof(struct anonymous$18) /*52l*/ )
      {
        return_value_bcmp$35=bcmp((const void *)&hdr.e32.e_ident[(signed long int)0], (const void *)"\177ELF", (unsigned long int)4);
        if(return_value_bcmp$35 == 0)
        {
          unsigned char order = (unsigned char)2;
          unsigned short int i;
          unsigned short int n;
          struct anonymous$4 *sp;
          void *strs_map;
          unsigned long int strs_mapsz;
          char *strs;
          if(!(hdr.e32.e_ident[5l] == order))
          {
            return_value_ctf_set_open_errno$10=ctf_set_open_errno(errp, 1003);
            return return_value_ctf_set_open_errno$10;
          }

          if(!(hdr.e32.e_version == 1u))
          {
            return_value_ctf_set_open_errno$11=ctf_set_open_errno(errp, 1001);
            return return_value_ctf_set_open_errno$11;
          }

          if((signed int)hdr.e32.e_ident[4l] == 2)
          {
            if(!(nbytes >= (signed long int)sizeof(struct anonymous$8) /*64l*/ ))
            {
              return_value_ctf_set_open_errno$12=ctf_set_open_errno(errp, 1000);
              return return_value_ctf_set_open_errno$12;
            }

          }

          else
          {
            struct anonymous$18 e32 = hdr.e32;
            ehdr_to_gelf(&e32, &hdr.e64);
          }
          if((signed int)hdr.e64.e_shstrndx >= (signed int)hdr.e64.e_shnum)
          {
            return_value_ctf_set_open_errno$13=ctf_set_open_errno(errp, 1007);
            return return_value_ctf_set_open_errno$13;
          }

          n = hdr.e64.e_shnum;
          nbytes = (signed long int)(sizeof(struct anonymous$4) /*64ul*/  * (unsigned long int)n);
          void *return_value_malloc$16;
          return_value_malloc$16=malloc((unsigned long int)nbytes);
          sp = (struct anonymous$4 *)return_value_malloc$16;
          if(sp == ((struct anonymous$4 *)NULL))
          {
            return_value___errno_location$14=__errno_location();
            return_value_ctf_set_open_errno$15=ctf_set_open_errno(errp, *return_value___errno_location$14);
            return return_value_ctf_set_open_errno$15;
          }

          if((signed int)hdr.e32.e_ident[4l] == 1)
          {
            struct anonymous$19 *sp32;
            nbytes = (signed long int)(sizeof(struct anonymous$19) /*40ul*/  * (unsigned long int)n);
            void *return_value_malloc$19;
            return_value_malloc$19=malloc((unsigned long int)nbytes);
            sp32 = (struct anonymous$19 *)return_value_malloc$19;
            if(sp32 == ((struct anonymous$19 *)NULL))
              tmp_if_expr$21 = (_Bool)1;

            else
            {
              return_value_pread$20=pread(fd, (void *)sp32, (unsigned long int)nbytes, (signed long int)hdr.e64.e_shoff);
              tmp_if_expr$21 = return_value_pread$20 != nbytes ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$21)
            {
              free((void *)sp);
              signed int *return_value___errno_location$17;
              return_value___errno_location$17=__errno_location();
              struct ctf_file *return_value_ctf_set_open_errno$18;
              return_value_ctf_set_open_errno$18=ctf_set_open_errno(errp, *return_value___errno_location$17);
              return return_value_ctf_set_open_errno$18;
            }

            i = (unsigned short int)0;
            for( ; !((signed int)i >= (signed int)n); i = i + 1)
              shdr_to_gelf(&sp32[(signed long int)i], &sp[(signed long int)i]);
            free((void *)sp32);
          }

          else
          {
            return_value_pread$24=pread(fd, (void *)sp, (unsigned long int)nbytes, (signed long int)hdr.e64.e_shoff);
            if(!(return_value_pread$24 == nbytes))
            {
              free((void *)sp);
              signed int *return_value___errno_location$22;
              return_value___errno_location$22=__errno_location();
              struct ctf_file *return_value_ctf_set_open_errno$23;
              return_value_ctf_set_open_errno$23=ctf_set_open_errno(errp, *return_value___errno_location$22);
              return return_value_ctf_set_open_errno$23;
            }

          }
          strs_mapsz = (sp + (signed long int)hdr.e64.e_shstrndx)->sh_size + ((sp + (signed long int)hdr.e64.e_shstrndx)->sh_offset & ~_PAGEMASK);
          strs_map=mmap((void *)0, strs_mapsz, 0x1, 0x02, fd, (signed long int)((sp + (signed long int)hdr.e64.e_shstrndx)->sh_offset & _PAGEMASK));
          strs = (char *)strs_map + (signed long int)((sp + (signed long int)hdr.e64.e_shstrndx)->sh_offset & ~_PAGEMASK);
          if(strs_map == (void *)-1)
          {
            free((void *)sp);
            struct ctf_file *return_value_ctf_set_open_errno$25;
            return_value_ctf_set_open_errno$25=ctf_set_open_errno(errp, 1013);
            return return_value_ctf_set_open_errno$25;
          }

          i = (unsigned short int)0;
          for( ; !((signed int)i >= (signed int)n); i = i + 1)
          {
            const struct anonymous$4 *shp = &sp[(signed long int)i];
            const struct anonymous$4 *lhp = &sp[(signed long int)shp->sh_link];
            if(!(shp->sh_link >= (unsigned int)hdr.e64.e_shnum))
            {
              if((unsigned long int)shp->sh_name >= (sp + (signed long int)hdr.e64.e_shstrndx)->sh_size)
                tmp_if_expr$26 = (_Bool)1;

              else
                tmp_if_expr$26 = (unsigned long int)lhp->sh_name >= (sp + (signed long int)hdr.e64.e_shstrndx)->sh_size ? (_Bool)1 : (_Bool)0;
              if(!tmp_if_expr$26)
              {
                if(shp->sh_type == 1u)
                {
                  return_value_strcmp$27=strcmp(strs + (signed long int)shp->sh_name, _CTF_SECTION);
                  tmp_if_expr$28 = return_value_strcmp$27 == 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$28 = (_Bool)0;
                if(tmp_if_expr$28)
                {
                  ctfsect.cts_name = strs + (signed long int)shp->sh_name;
                  ctfsect.cts_type = (unsigned long int)shp->sh_type;
                  ctfsect.cts_flags = shp->sh_flags;
                  ctfsect.cts_size = shp->sh_size;
                  ctfsect.cts_entsize = shp->sh_entsize;
                  ctfsect.cts_offset = (signed long int)shp->sh_offset;
                }

                else
                  if(shp->sh_type == 2u)
                  {
                    symsect.cts_name = strs + (signed long int)shp->sh_name;
                    symsect.cts_type = (unsigned long int)shp->sh_type;
                    symsect.cts_flags = shp->sh_flags;
                    symsect.cts_size = shp->sh_size;
                    symsect.cts_entsize = shp->sh_entsize;
                    symsect.cts_offset = (signed long int)shp->sh_offset;
                    strsect.cts_name = strs + (signed long int)lhp->sh_name;
                    strsect.cts_type = (unsigned long int)lhp->sh_type;
                    strsect.cts_flags = lhp->sh_flags;
                    strsect.cts_size = lhp->sh_size;
                    strsect.cts_entsize = lhp->sh_entsize;
                    strsect.cts_offset = (signed long int)lhp->sh_offset;
                  }

              }

            }

          }
          free((void *)sp);
          if(ctfsect.cts_type == 0ul)
          {
            munmap(strs_map, strs_mapsz);
            struct ctf_file *return_value_ctf_set_open_errno$29;
            return_value_ctf_set_open_errno$29=ctf_set_open_errno(errp, 1008);
            return return_value_ctf_set_open_errno$29;
          }

          const void *return_value_ctf_sect_mmap$31;
          return_value_ctf_sect_mmap$31=ctf_sect_mmap(&ctfsect, fd);
          if(return_value_ctf_sect_mmap$31 == (void *)-1)
          {
            munmap(strs_map, strs_mapsz);
            struct ctf_file *return_value_ctf_set_open_errno$30;
            return_value_ctf_set_open_errno$30=ctf_set_open_errno(errp, 1013);
            return return_value_ctf_set_open_errno$30;
          }

          if(!(strsect.cts_type == 0ul) && !(symsect.cts_type == 0ul))
          {
            const void *return_value_ctf_sect_mmap$32;
            return_value_ctf_sect_mmap$32=ctf_sect_mmap(&symsect, fd);
            if(return_value_ctf_sect_mmap$32 == (void *)-1)
              tmp_if_expr$34 = (_Bool)1;

            else
            {
              return_value_ctf_sect_mmap$33=ctf_sect_mmap(&strsect, fd);
              tmp_if_expr$34 = return_value_ctf_sect_mmap$33 == (void *)-1 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$34)
            {
              ctf_set_open_errno(errp, 1013);
              goto bad;
            }

            fp=ctf_bufopen(&ctfsect, &symsect, &strsect, errp);
          }

          else
            fp=ctf_bufopen(&ctfsect, (const struct ctf_sect *)(void *)0, (const struct ctf_sect *)(void *)0, errp);

        bad:
          ;
          if(fp == ((struct ctf_file *)NULL))
          {
            ctf_sect_munmap(&ctfsect);
            ctf_sect_munmap(&symsect);
            ctf_sect_munmap(&strsect);
          }

          else
            fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0001;
          munmap(strs_map, strs_mapsz);
          return fp;
        }

      }

      struct ctf_file *return_value_ctf_set_open_errno$36;
      return_value_ctf_set_open_errno$36=ctf_set_open_errno(errp, 1000);
      return return_value_ctf_set_open_errno$36;
    }
  }
}

// ctf_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 318
extern void ctf_free(void *buf, unsigned long int size)
{
  free(buf);
}

// ctf_func_args
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 295
extern signed int ctf_func_args(struct ctf_file *fp, unsigned long int symidx, unsigned int argc, signed long int *argv)
{
  const unsigned short int *dp;
  struct ctf_funcinfo f;
  signed int return_value_ctf_func_info$1;
  return_value_ctf_func_info$1=ctf_func_info(fp, symidx, &f);
  signed long int *tmp_post$2;
  const unsigned short int *tmp_post$3;
  if((signed long int)return_value_ctf_func_info$1 == -1l)
    return (signed int)-1L;

  else
  {
    dp = (unsigned short int *)((unsigned long int)fp->ctf_buf + (unsigned long int)fp->ctf_sxlate[(signed long int)symidx]) + (signed long int)2;
    argc = argc < f.ctc_argc ? argc : f.ctc_argc;
    for( ; !(argc == 0u); argc = argc - 1u)
    {
      tmp_post$2 = argv;
      argv = argv + 1l;
      tmp_post$3 = dp;
      dp = dp + 1l;
      *tmp_post$2 = (signed long int)*tmp_post$3;
    }
    return 0;
  }
}

// ctf_func_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 241
extern signed int ctf_func_info(struct ctf_file *fp, unsigned long int symidx, struct ctf_funcinfo *fip)
{
  const struct ctf_sect *sp = &fp->ctf_symtab;
  const unsigned short int *dp;
  unsigned short int info;
  unsigned short int kind;
  unsigned short int n;
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$2;
  signed long int return_value_ctf_set_errno$3;
  signed long int return_value_ctf_set_errno$4;
  signed long int return_value_ctf_set_errno$5;
  const unsigned short int *tmp_post$6;
  signed long int return_value_ctf_set_errno$7;
  signed long int return_value_ctf_set_errno$8;
  const unsigned short int *tmp_post$9;
  if(sp->cts_data == NULL)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 1010);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
    if(symidx >= fp->ctf_nsyms)
    {
      return_value_ctf_set_errno$2=ctf_set_errno(fp, 22);
      return (signed int)return_value_ctf_set_errno$2;
    }

    else
    {
      if(sp->cts_entsize == sizeof(struct anonymous$24) /*16ul*/ )
      {
        const struct anonymous$24 *symp = (struct anonymous$24 *)sp->cts_data + (signed long int)symidx;
        if(!((0xf & (signed int)symp->st_info) == 2))
        {
          return_value_ctf_set_errno$3=ctf_set_errno(fp, 1030);
          return (signed int)return_value_ctf_set_errno$3;
        }

      }

      else
      {
        const struct anonymous$5 *ctf_func_info$$1$$2$$symp = (struct anonymous$5 *)sp->cts_data + (signed long int)symidx;
        if(!((0xf & (signed int)ctf_func_info$$1$$2$$symp->st_info) == 2))
        {
          return_value_ctf_set_errno$4=ctf_set_errno(fp, 1030);
          return (signed int)return_value_ctf_set_errno$4;
        }

      }
      if(fp->ctf_sxlate[(signed long int)symidx] == 4294967295u)
      {
        return_value_ctf_set_errno$5=ctf_set_errno(fp, 1031);
        return (signed int)return_value_ctf_set_errno$5;
      }

      else
      {
        dp = (unsigned short int *)((unsigned long int)fp->ctf_buf + (unsigned long int)fp->ctf_sxlate[(signed long int)symidx]);
        tmp_post$6 = dp;
        dp = dp + 1l;
        info = *tmp_post$6;
        kind=fp->ctf_fileops->ctfo_get_kind(info);
        n=fp->ctf_fileops->ctfo_get_vlen(info);
        if((signed int)kind == 0 && (signed int)n == 0)
        {
          return_value_ctf_set_errno$7=ctf_set_errno(fp, 1031);
          return (signed int)return_value_ctf_set_errno$7;
        }

        else
          if(!((signed int)kind == 5))
          {
            return_value_ctf_set_errno$8=ctf_set_errno(fp, 1007);
            return (signed int)return_value_ctf_set_errno$8;
          }

          else
          {
            tmp_post$9 = dp;
            dp = dp + 1l;
            fip->ctc_return = (signed long int)*tmp_post$9;
            fip->ctc_argc = (unsigned int)n;
            fip->ctc_flags = (unsigned int)0;
            if(!((signed int)n == 0))
            {
              if((signed int)dp[(signed long int)((signed int)n + -1)] == 0)
              {
                fip->ctc_flags = fip->ctc_flags | (unsigned int)0x1;
                fip->ctc_argc = fip->ctc_argc - 1u;
              }

            }

            return 0;
          }
      }
    }
}

// ctf_gen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 608
char * ctf_gen(struct iiburst *iiburst, unsigned long int *resszp, signed int do_compress)
{
  struct ctf_buf *buf;
  buf=ctf_buf_new();
  struct ctf_header h;
  char *outbuf;
  signed int i;
  h.cth_preamble.ctp_magic = (unsigned short int)0xcff1;
  h.cth_preamble.ctp_version = (unsigned char)2;
  h.cth_preamble.ctp_flags = (unsigned char)(do_compress != 0 ? 0x1 : 0);
  unsigned long int return_value_strtab_insert$1;
  return_value_strtab_insert$1=strtab_insert(&buf->ctb_strtab, iiburst->iib_td->td_parlabel);
  h.cth_parlabel = (unsigned int)return_value_strtab_insert$1;
  unsigned long int return_value_strtab_insert$2;
  return_value_strtab_insert$2=strtab_insert(&buf->ctb_strtab, iiburst->iib_td->td_parname);
  h.cth_parname = (unsigned int)return_value_strtab_insert$2;
  h.cth_lbloff = (unsigned int)0;
  list_iter(iiburst->iib_td->td_labels, write_label, (void *)buf);
  pad_buffer(buf, 2);
  h.cth_objtoff=ctf_buf_cur(buf);
  i = 0;
  for( ; !(i >= iiburst->iib_nobjts); i = i + 1)
    write_objects(iiburst->iib_objts[(signed long int)i], buf);
  pad_buffer(buf, 2);
  h.cth_funcoff=ctf_buf_cur(buf);
  i = 0;
  for( ; !(i >= iiburst->iib_nfuncs); i = i + 1)
    write_functions(iiburst->iib_funcs[(signed long int)i], buf);
  pad_buffer(buf, 4);
  h.cth_typeoff=ctf_buf_cur(buf);
  list_iter(iiburst->iib_types, write_type, (void *)buf);
  signed int return_value_list_count$3;
  return_value_list_count$3=list_count(iiburst->iib_types);
  debug(2, "CTF wrote %d types\n", return_value_list_count$3);
  h.cth_stroff=ctf_buf_cur(buf);
  unsigned long int return_value_strtab_size$4;
  return_value_strtab_size$4=strtab_size(&buf->ctb_strtab);
  h.cth_strlen = (unsigned int)return_value_strtab_size$4;
  if(!(do_compress == 0))
    outbuf=write_compressed_buffer(&h, buf, resszp);

  else
    outbuf=write_buffer(&h, buf, resszp);
  ctf_buf_free(buf);
  return outbuf;
}

// ctf_get_ctt_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 275
extern signed long int ctf_get_ctt_size(const struct ctf_file *fp, const struct ctf_type *tp, signed long int *sizep, signed long int *incrementp)
{
  signed long int size;
  signed long int increment;
  _Bool tmp_if_expr$1;
  if(fp->ctf_version >= 2)
    tmp_if_expr$1 = (signed int)tp->_u._size == 0xffff ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    size = (signed long int)((unsigned long int)tp->ctt_lsizehi << 32 | (unsigned long int)tp->ctt_lsizelo);
    increment = (signed long int)sizeof(struct ctf_type) /*16ul*/ ;
  }

  else
  {
    size = (signed long int)tp->_u._size;
    increment = (signed long int)sizeof(struct ctf_stype) /*8ul*/ ;
  }
  if(!(sizep == ((signed long int *)NULL)))
    *sizep = size;

  if(!(incrementp == ((signed long int *)NULL)))
    *incrementp = increment;

  return size;
}

// ctf_getmodel
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 164
extern signed int ctf_getmodel(struct ctf_file *fp)
{
  return fp->ctf_dmodel->ctd_code;
}

// ctf_getspecific
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 951
extern void * ctf_getspecific(struct ctf_file *fp)
{
  return fp->ctf_specific;
}

// ctf_hash_compute
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_hash.c line 76
static unsigned long int ctf_hash_compute(const char *key, unsigned long int len)
{
  unsigned long int g;
  unsigned long int h = (unsigned long int)0;
  const char *p;
  const char *q = key + (signed long int)len;
  unsigned long int n = (unsigned long int)0;
  p = key;
  for( ; !(p >= q); n = n + 1ul)
  {
    h = (h << 4) + (unsigned long int)*p;
    g = h & (unsigned long int)0xf0000000;
    if(!(g == 0ul))
    {
      h = h ^ g >> 24;
      h = h ^ g;
    }

    p = p + 1l;
  }
  return h;
}

// ctf_hash_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 280
extern signed int ctf_hash_create(struct ctf_hash *hp, unsigned long int nelems)
{
  _Bool tmp_if_expr$3;
  if(nelems >= 65536ul)
    return 75;

  else
    if(nelems == 0ul)
    {
      bzero((void *)hp, sizeof(struct ctf_hash) /*24ul*/ );
      hp->h_buckets = (unsigned short int *)_CTF_EMPTY;
      hp->h_nbuckets = (unsigned short int)1;
      return 0;
    }

    else
    {
      hp->h_nbuckets = (unsigned short int)211;
      hp->h_nelems = (unsigned short int)(nelems + (unsigned long int)1);
      hp->h_free = (unsigned int)1;
      void *return_value_ctf_alloc$1;
      return_value_ctf_alloc$1=ctf_alloc(sizeof(unsigned short int) /*2ul*/  * (unsigned long int)hp->h_nbuckets);
      hp->h_buckets = (unsigned short int *)return_value_ctf_alloc$1;
      void *return_value_ctf_alloc$2;
      return_value_ctf_alloc$2=ctf_alloc(sizeof(struct ctf_helem) /*8ul*/  * (unsigned long int)hp->h_nelems);
      hp->h_chains = (struct ctf_helem *)return_value_ctf_alloc$2;
      if(hp->h_buckets == ((unsigned short int *)NULL))
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = hp->h_chains == (struct ctf_helem *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
      {
        ctf_hash_destroy(hp);
        return 11;
      }

      else
      {
        bzero((void *)hp->h_buckets, sizeof(unsigned short int) /*2ul*/  * (unsigned long int)hp->h_nbuckets);
        bzero((void *)hp->h_chains, sizeof(struct ctf_helem) /*8ul*/  * (unsigned long int)hp->h_nelems);
        return 0;
      }
    }
}

// ctf_hash_define
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 282
extern signed int ctf_hash_define(struct ctf_hash *hp, struct ctf_file *fp, unsigned short int type, unsigned int name)
{
  const char *str;
  str=ctf_strptr(fp, name);
  struct ctf_helem *hep;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  hep=ctf_hash_lookup(hp, fp, str, return_value_strlen$1);
  signed int return_value_ctf_hash_insert$2;
  if(hep == ((struct ctf_helem *)NULL))
  {
    return_value_ctf_hash_insert$2=ctf_hash_insert(hp, fp, type, name);
    return return_value_ctf_hash_insert$2;
  }

  else
  {
    hep->h_type = type;
    return 0;
  }
}

// ctf_hash_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 286
extern void ctf_hash_destroy(struct ctf_hash *hp)
{
  if(!(hp->h_buckets == ((unsigned short int *)NULL)))
  {
    if(!((signed int)hp->h_nbuckets == 1))
    {
      ctf_free((void *)hp->h_buckets, sizeof(unsigned short int) /*2ul*/  * (unsigned long int)hp->h_nbuckets);
      hp->h_buckets = (unsigned short int *)(void *)0;
    }

  }

  if(!(hp->h_chains == ((struct ctf_helem *)NULL)))
  {
    ctf_free((void *)hp->h_chains, sizeof(struct ctf_helem) /*8ul*/  * (unsigned long int)hp->h_nelems);
    hp->h_chains = (struct ctf_helem *)(void *)0;
  }

}

// ctf_hash_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 281
extern signed int ctf_hash_insert(struct ctf_hash *hp, struct ctf_file *fp, unsigned short int type, unsigned int name)
{
  struct ctf_strs *ctsp = &fp->ctf_str[(signed long int)(name >> 31)];
  const char *str = ctsp->cts_strs + (signed long int)(name & (unsigned int)0x7fffffff);
  struct ctf_helem *hep = &hp->h_chains[(signed long int)hp->h_free];
  unsigned long int h;
  unsigned int tmp_post$3;
  if((signed int)type == 0)
    return 22;

  else
    if(hp->h_free >= (unsigned int)hp->h_nelems)
      return 75;

    else
      if(ctsp->cts_strs == ((const char *)NULL))
        return 1018;

      else
        if((unsigned long int)(2147483647u & name) >= ctsp->cts_len)
          return 1019;

        else
          if((signed int)*str == 0)
            return 0;

          else
          {
            hep->h_name = name;
            hep->h_type = type;
            unsigned long int return_value_strlen$1;
            return_value_strlen$1=strlen(str);
            unsigned long int return_value_ctf_hash_compute$2;
            return_value_ctf_hash_compute$2=ctf_hash_compute(str, return_value_strlen$1);
            h = return_value_ctf_hash_compute$2 % (unsigned long int)hp->h_nbuckets;
            hep->h_next = hp->h_buckets[(signed long int)h];
            tmp_post$3 = hp->h_free;
            hp->h_free = hp->h_free + 1u;
            hp->h_buckets[(signed long int)h] = (unsigned short int)tmp_post$3;
            return 0;
          }
}

// ctf_hash_lookup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 283
extern struct ctf_helem * ctf_hash_lookup(struct ctf_hash *hp, struct ctf_file *fp, const char *key, unsigned long int len)
{
  struct ctf_helem *hep;
  struct ctf_strs *ctsp;
  const char *str;
  unsigned short int i;
  unsigned long int h;
  unsigned long int return_value_ctf_hash_compute$1;
  return_value_ctf_hash_compute$1=ctf_hash_compute(key, len);
  h = return_value_ctf_hash_compute$1 % (unsigned long int)hp->h_nbuckets;
  i = hp->h_buckets[(signed long int)h];
  for( ; !((signed int)i == 0); i = hep->h_next)
  {
    hep = &hp->h_chains[(signed long int)i];
    ctsp = &fp->ctf_str[(signed long int)(hep->h_name >> 31)];
    str = ctsp->cts_strs + (signed long int)(hep->h_name & (unsigned int)0x7fffffff);
    signed int return_value_strncmp$2;
    return_value_strncmp$2=strncmp(key, str, len);
    if(return_value_strncmp$2 == 0)
    {
      if((signed int)str[(signed long int)len] == 0)
        return hep;

    }

  }
  return (struct ctf_helem *)(void *)0;
}

// ctf_hash_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 285
extern unsigned int ctf_hash_size(const struct ctf_hash *hp)
{
  signed int tmp_if_expr$1;
  if(!(hp->h_nelems == 0))
    tmp_if_expr$1 = (signed int)hp->h_nelems - 1;

  else
    tmp_if_expr$1 = 0;
  return (unsigned int)tmp_if_expr$1;
}

// ctf_import
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 162
extern signed int ctf_import(struct ctf_file *fp, struct ctf_file *pfp)
{
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  if(fp == ((struct ctf_file *)NULL) || fp == pfp)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    if(!(pfp == ((struct ctf_file *)NULL)))
      tmp_if_expr$2 = pfp->ctf_refcnt == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
  }
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$4;
  if(tmp_if_expr$3)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
    if(!(pfp == ((struct ctf_file *)NULL)))
    {
      if(pfp->ctf_dmodel == fp->ctf_dmodel)
        goto __CPROVER_DUMP_L6;

      return_value_ctf_set_errno$4=ctf_set_errno(fp, 1012);
      return (signed int)return_value_ctf_set_errno$4;
    }

    else
    {

    __CPROVER_DUMP_L6:
      ;
      if(!(fp->ctf_parent == ((struct ctf_file *)NULL)))
        ctf_close(fp->ctf_parent);

      if(!(pfp == ((struct ctf_file *)NULL)))
      {
        fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0002;
        pfp->ctf_refcnt = pfp->ctf_refcnt + 1u;
      }

      fp->ctf_parent = pfp;
      return 0;
    }
}

// ctf_label_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 138
extern signed int ctf_label_info(struct ctf_file *fp, const char *lname, struct ctf_lblinfo *linfo)
{
  struct linfo_cb_arg cb_arg;
  signed int rc;
  cb_arg.lca_name = lname;
  cb_arg.lca_info = linfo;
  rc=ctf_label_iter(fp, label_info_cb, (void *)&cb_arg);
  signed long int return_value_ctf_set_errno$1;
  if((signed long int)rc == -1l)
    return rc;

  else
    if(!(rc == 1))
    {
      return_value_ctf_set_errno$1=ctf_set_errno(fp, 1034);
      return (signed int)return_value_ctf_set_errno$1;
    }

    else
      return 0;
}

// ctf_label_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 80
extern signed int ctf_label_iter(struct ctf_file *fp, signed int (*func)(const char *, const struct ctf_lblinfo *, void *), void *arg)
{
  const struct ctf_lblent *ctlp;
  unsigned int i;
  unsigned int num_labels;
  struct ctf_lblinfo linfo;
  const char *lname;
  signed int rc;
  signed int return_value_extract_label_info$1;
  return_value_extract_label_info$1=extract_label_info(fp, &ctlp, &num_labels);
  signed long int return_value_ctf_set_errno$2;
  if((signed long int)return_value_extract_label_info$1 == -1l)
    return (signed int)-1L;

  else
    if(num_labels == 0u)
    {
      return_value_ctf_set_errno$2=ctf_set_errno(fp, 1035);
      return (signed int)return_value_ctf_set_errno$2;
    }

    else
    {
      i = (unsigned int)0;
      if(!(i >= num_labels))
      {
        lname=ctf_strraw(fp, ctlp->ctl_label);
        if(lname == ((const char *)NULL))
        {
          ctf_dprintf("failed to decode label %u with typeidx %u\n", ctlp->ctl_label, ctlp->ctl_typeidx);
          signed long int return_value_ctf_set_errno$3;
          return_value_ctf_set_errno$3=ctf_set_errno(fp, 1007);
          return (signed int)return_value_ctf_set_errno$3;
        }

        linfo.ctb_typeidx = (signed long int)ctlp->ctl_typeidx;
        rc=func(lname, &linfo, arg);
        if(!(rc == 0))
          return rc;

        i = i + 1u;
        ctlp = ctlp + 1l;
      }

      return 0;
    }
}

// ctf_label_topmost
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 55
extern const char * ctf_label_topmost(struct ctf_file *fp)
{
  const struct ctf_lblent *ctlp;
  const char *s;
  unsigned int num_labels;
  signed int return_value_extract_label_info$1;
  return_value_extract_label_info$1=extract_label_info(fp, &ctlp, &num_labels);
  if((signed long int)return_value_extract_label_info$1 == -1l)
    return (const char *)(void *)0;

  else
    if(num_labels == 0u)
    {
      ctf_set_errno(fp, 1035);
      return (const char *)(void *)0;
    }

    else
    {
      s=ctf_strraw(fp, ((ctlp + (signed long int)num_labels) - (signed long int)1)->ctl_label);
      if(s == ((const char *)NULL))
        ctf_set_errno(fp, 1007);

      return s;
    }
}

// ctf_list_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 291
extern void ctf_list_append(struct ctf_list *lp, void *new)
{
  struct ctf_list *p = lp->l_prev;
  struct ctf_list *q = (struct ctf_list *)new;
  lp->l_prev = q;
  q->l_prev = p;
  q->l_next = (struct ctf_list *)(void *)0;
  if(!(p == ((struct ctf_list *)NULL)))
    p->l_next = q;

  else
    lp->l_next = q;
}

// ctf_list_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 293
extern void ctf_list_delete(struct ctf_list *lp, void *existing)
{
  struct ctf_list *p = (struct ctf_list *)existing;
  if(!(p->l_prev == ((struct ctf_list *)NULL)))
    p->l_prev->l_next = p->l_next;

  else
    lp->l_next = p->l_next;
  if(!(p->l_next == ((struct ctf_list *)NULL)))
    p->l_next->l_prev = p->l_prev;

  else
    lp->l_prev = p->l_prev;
}

// ctf_list_prepend
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 292
extern void ctf_list_prepend(struct ctf_list *lp, void *new)
{
  struct ctf_list *p = (struct ctf_list *)new;
  struct ctf_list *q = lp->l_next;
  lp->l_next = p;
  p->l_prev = (struct ctf_list *)(void *)0;
  p->l_next = q;
  if(!(q == ((struct ctf_list *)NULL)))
    q->l_prev = p;

  else
    lp->l_prev = p;
}

// ctf_load
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 1239
struct tdata * ctf_load(char *file, char *buf, unsigned long int bufsz, struct symit_data *si, char *label)
{
  struct ctf_header *h;
  char *ctfdata;
  unsigned long int ctfdatasz;
  struct tdata *td;
  curfile = file;
  if(!(bufsz >= sizeof(struct ctf_header) /*36ul*/ ))
    parseterminate("Corrupt CTF - short header");

  void *v = (void *)buf;
  h = (struct ctf_header *)v;
  buf = buf + (signed long int)sizeof(struct ctf_header) /*36ul*/ ;
  bufsz = bufsz - sizeof(struct ctf_header) /*36ul*/ ;
  if(!((signed int)h->cth_preamble.ctp_magic == 0xcff1))
    parseterminate("Corrupt CTF - bad magic 0x%x", h->cth_preamble.ctp_magic);

  if(!((signed int)h->cth_preamble.ctp_version == 2))
    parseterminate("Unknown CTF version %d", h->cth_preamble.ctp_version);

  ctfdatasz = (unsigned long int)(h->cth_stroff + h->cth_strlen);
  if(!((0x1 & (signed int)h->cth_preamble.ctp_flags) == 0))
  {
    unsigned long int actual;
    void *return_value_xmalloc$1;
    return_value_xmalloc$1=xmalloc(ctfdatasz);
    ctfdata = (char *)return_value_xmalloc$1;
    actual=decompress_ctf(buf, bufsz, ctfdata, ctfdatasz);
    if(!(actual == ctfdatasz))
      parseterminate("Corrupt CTF - short decompression (was %d, expecting %d)", actual, ctfdatasz);

  }

  else
  {
    ctfdata = buf;
    ctfdatasz = bufsz;
  }
  td=ctf_parse(h, ctfdata, si, label);
  if(!((0x1 & (signed int)h->cth_preamble.ctp_flags) == 0))
    free((void *)ctfdata);

  curfile = (char *)(void *)0;
  return td;
}

// ctf_lookup_by_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 278
extern const struct ctf_type * ctf_lookup_by_id(struct ctf_file **fpp, signed long int type)
{
  struct ctf_file *fp = *fpp;
  if(!((2u & fp->ctf_flags) == 0u))
  {
    if(type >= 32768l)
      goto __CPROVER_DUMP_L1;

    fp = fp->ctf_parent;
    if(!(fp == ((struct ctf_file *)NULL)))
      goto __CPROVER_DUMP_L1;

    ctf_set_errno(*fpp, 1011);
    return (const struct ctf_type *)(void *)0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    type = type & (signed long int)0x7fff;
    if(type >= 1l)
    {
      if(!(fp->ctf_typemax >= (unsigned long int)type))
        goto __CPROVER_DUMP_L2;

      *fpp = fp;
      return (struct ctf_type *)((unsigned long int)fp->ctf_buf + (unsigned long int)fp->ctf_txlate[type]);
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      ctf_set_errno(fp, 1020);
      return (const struct ctf_type *)(void *)0;
    }
  }
}

// ctf_lookup_by_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 79
extern signed long int ctf_lookup_by_name(struct ctf_file *fp, const char *name)
{
  const struct ctf_lookup *lp;
  const struct ctf_helem *hp;
  const char *p;
  const char *q;
  const char *end;
  signed long int type = (signed long int)0;
  signed long int ntype;
  signed long int ptype;
  signed long int return_value_ctf_set_errno$1;
  const unsigned short int **return_value___ctype_b_loc$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$9;
  signed int return_value_strncmp$8;
  const unsigned short int **return_value___ctype_b_loc$6;
  const unsigned short int **return_value___ctype_b_loc$7;
  signed long int return_value_ctf_set_errno$10;
  if(name == ((const char *)NULL))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
    return return_value_ctf_set_errno$1;
  }

  else
  {
    p = name;
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(name);
    end = name + (signed long int)return_value_strlen$2;
    for( ; !((signed int)*p == 0); p = q)
    {
      do
      {
        return_value___ctype_b_loc$3=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)*p]) == 0)
          break;

        p = p + 1l;
      }
      while((_Bool)1);
      if(p == end)
        break;

      static const char delimiters[8l] = { ' ', '\t', '\n', '\r', 11, 12, '*', 0 };
      q=strpbrk(p + (signed long int)1, delimiters);
      if(q == ((const char *)NULL))
        q = end;

      if((signed int)*p == 42)
      {
        ntype = (signed long int)fp->ctf_ptrtab[type & (signed long int)0x7fff];
        if(ntype == 0l)
        {
          ntype=ctf_type_resolve(fp, type);
          if(ntype == -1l)
            tmp_if_expr$4 = (_Bool)1;

          else
          {
            ntype = (signed long int)fp->ctf_ptrtab[ntype & (signed long int)0x7fff];
            tmp_if_expr$4 = ntype == (signed long int)0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$4)
          {
            ctf_set_errno(fp, 1028);
            goto err;
          }

        }

        type = (fp->ctf_flags & (unsigned int)0x0002) != 0u ? ntype | (signed long int)0x8000 : ntype;
        q = p + (signed long int)1;
      }

      else
      {
        signed int return_value_isqualifier$5;
        return_value_isqualifier$5=isqualifier(p, (unsigned long int)(q - p));
        if(return_value_isqualifier$5 == 0)
        {
          lp = fp->ctf_lookups;
          for( ; !(lp->ctl_prefix == ((const char *)NULL)); lp = lp + 1l)
          {
            if((signed int)*lp->ctl_prefix == 0)
              tmp_if_expr$9 = (_Bool)1;

            else
            {
              return_value_strncmp$8=strncmp(p, lp->ctl_prefix, (unsigned long int)(q - p));
              tmp_if_expr$9 = return_value_strncmp$8 == 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$9)
            {
              p = p + (signed long int)lp->ctl_len;
              do
              {
                return_value___ctype_b_loc$6=__ctype_b_loc();
                if((8192 & (signed int)(*return_value___ctype_b_loc$6)[(signed long int)(signed int)*p]) == 0)
                  break;

                p = p + 1l;
              }
              while((_Bool)1);
              q=strchr(p, 42);
              if(q == ((const char *)NULL))
                q = end;

              do
              {
                return_value___ctype_b_loc$7=__ctype_b_loc();
                if((8192 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)q[-1l]]) == 0)
                  break;

                q = q - 1l;
              }
              while((_Bool)1);
              hp=ctf_hash_lookup(lp->ctl_hash, fp, p, (unsigned long int)(q - p));
              if(hp == ((const struct ctf_helem *)NULL))
              {
                ctf_set_errno(fp, 1028);
                goto err;
              }

              type = (signed long int)hp->h_type;
              break;
            }

          }
          if(lp->ctl_prefix == ((const char *)NULL))
          {
            ctf_set_errno(fp, 1028);
            goto err;
          }

        }

      }
    }
    if(type == 0l || !((signed int)*p == 0))
    {
      return_value_ctf_set_errno$10=ctf_set_errno(fp, 1029);
      return return_value_ctf_set_errno$10;
    }

    else
    {
      return type;

    err:
      ;
      if(!(fp->ctf_parent == ((struct ctf_file *)NULL)))
      {
        ptype=ctf_lookup_by_name(fp->ctf_parent, name);
        if(ptype == -1l)
          goto __CPROVER_DUMP_L25;

        return ptype;
      }

      else
      {

      __CPROVER_DUMP_L25:
        ;
        return -1L;
      }
    }
  }
}

// ctf_lookup_by_symbol
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 179
extern signed long int ctf_lookup_by_symbol(struct ctf_file *fp, unsigned long int symidx)
{
  const struct ctf_sect *sp = &fp->ctf_symtab;
  signed long int type;
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$2;
  signed long int return_value_ctf_set_errno$3;
  signed long int return_value_ctf_set_errno$4;
  signed long int return_value_ctf_set_errno$5;
  signed long int return_value_ctf_set_errno$6;
  if(sp->cts_data == NULL)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 1010);
    return return_value_ctf_set_errno$1;
  }

  else
    if(symidx >= fp->ctf_nsyms)
    {
      return_value_ctf_set_errno$2=ctf_set_errno(fp, 22);
      return return_value_ctf_set_errno$2;
    }

    else
    {
      if(sp->cts_entsize == sizeof(struct anonymous$24) /*16ul*/ )
      {
        const struct anonymous$24 *ctf_lookup_by_symbol$$1$$1$$symp = (struct anonymous$24 *)sp->cts_data + (signed long int)symidx;
        if(!((0xf & (signed int)ctf_lookup_by_symbol$$1$$1$$symp->st_info) == 1))
        {
          return_value_ctf_set_errno$3=ctf_set_errno(fp, 1032);
          return return_value_ctf_set_errno$3;
        }

      }

      else
      {
        const struct anonymous$5 *symp = (struct anonymous$5 *)sp->cts_data + (signed long int)symidx;
        if(!((0xf & (signed int)symp->st_info) == 1))
        {
          return_value_ctf_set_errno$4=ctf_set_errno(fp, 1032);
          return return_value_ctf_set_errno$4;
        }

      }
      if(fp->ctf_sxlate[(signed long int)symidx] == 4294967295u)
      {
        return_value_ctf_set_errno$5=ctf_set_errno(fp, 1033);
        return return_value_ctf_set_errno$5;
      }

      else
      {
        type = (signed long int)*((unsigned short int *)((unsigned long int)fp->ctf_buf + (unsigned long int)fp->ctf_sxlate[(signed long int)symidx]));
        if(type == 0l)
        {
          return_value_ctf_set_errno$6=ctf_set_errno(fp, 1033);
          return return_value_ctf_set_errno$6;
        }

        else
          return type;
      }
    }
}

// ctf_member_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 192
extern signed int ctf_member_info(struct ctf_file *fp, signed long int type, const char *name, struct ctf_membinfo *mip)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  signed long int size;
  signed long int increment;
  unsigned int kind;
  unsigned int n;
  type=ctf_type_resolve(fp, type);
  signed long int return_value_ctf_set_errno$1;
  if(type == -1l)
    return (signed int)-1L;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (signed int)-1L;

    else
    {
      ctf_get_ctt_size(fp, tp, &size, &increment);
      unsigned short int return_value;
      return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      kind = (unsigned int)return_value;
      if(!(kind == 6u) && !(kind == 7u))
      {
        return_value_ctf_set_errno$1=ctf_set_errno(ofp, 1021);
        return (signed int)return_value_ctf_set_errno$1;
      }

      else
      {
        if(fp->ctf_version == 1 || !(size >= 8192l))
        {
          const struct ctf_member *mp = (const struct ctf_member *)((unsigned long int)tp + (unsigned long int)increment);
          unsigned short int return_value_1;
          return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
          n = (unsigned int)return_value_1;
          if(!(n == 0u))
          {
            const char *return_value_ctf_strptr$2;
            return_value_ctf_strptr$2=ctf_strptr(fp, mp->ctm_name);
            signed int return_value_strcmp$3;
            return_value_strcmp$3=strcmp(return_value_ctf_strptr$2, name);
            if(return_value_strcmp$3 == 0)
            {
              mip->ctm_type = (signed long int)mp->ctm_type;
              mip->ctm_offset = (unsigned long int)mp->ctm_offset;
              return 0;
            }

            n = n - 1u;
            mp = mp + 1l;
          }

        }

        else
        {
          const struct ctf_lmember *lmp = (const struct ctf_lmember *)((unsigned long int)tp + (unsigned long int)increment);
          unsigned short int return_value_2;
          return_value_2=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
          n = (unsigned int)return_value_2;
          if(!(n == 0u))
          {
            const char *return_value_ctf_strptr$4;
            return_value_ctf_strptr$4=ctf_strptr(fp, lmp->ctlm_name);
            signed int return_value_strcmp$5;
            return_value_strcmp$5=strcmp(return_value_ctf_strptr$4, name);
            if(return_value_strcmp$5 == 0)
            {
              mip->ctm_type = (signed long int)lmp->ctlm_type;
              mip->ctm_offset = (unsigned long int)((unsigned long int)lmp->ctlm_offsethi << 32 | (unsigned long int)lmp->ctlm_offsetlo);
              return 0;
            }

            n = n - 1u;
            lmp = lmp + 1l;
          }

        }
        signed long int return_value_ctf_set_errno$6;
        return_value_ctf_set_errno$6=ctf_set_errno(ofp, 1038);
        return (signed int)return_value_ctf_set_errno$6;
      }
    }
  }
}

// ctf_member_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 202
extern signed int ctf_member_iter(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed long int, unsigned long int, void *), void *arg)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  signed long int size;
  signed long int increment;
  unsigned int kind;
  unsigned int n;
  signed int rc;
  type=ctf_type_resolve(fp, type);
  signed long int return_value_ctf_set_errno$1;
  if(type == -1l)
    return (signed int)-1L;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (signed int)-1L;

    else
    {
      ctf_get_ctt_size(fp, tp, &size, &increment);
      unsigned short int return_value;
      return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      kind = (unsigned int)return_value;
      if(!(kind == 6u) && !(kind == 7u))
      {
        return_value_ctf_set_errno$1=ctf_set_errno(ofp, 1021);
        return (signed int)return_value_ctf_set_errno$1;
      }

      else
      {
        if(fp->ctf_version == 1 || !(size >= 8192l))
        {
          const struct ctf_member *mp = (const struct ctf_member *)((unsigned long int)tp + (unsigned long int)increment);
          unsigned short int return_value_1;
          return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
          n = (unsigned int)return_value_1;
          if(!(n == 0u))
          {
            const char *ctf_member_iter$$1$$1$$1$$1$$name;
            ctf_member_iter$$1$$1$$1$$1$$name=ctf_strptr(fp, mp->ctm_name);
            rc=func(ctf_member_iter$$1$$1$$1$$1$$name, (signed long int)mp->ctm_type, (unsigned long int)mp->ctm_offset, arg);
            if(!(rc == 0))
              return rc;

            n = n - 1u;
            mp = mp + 1l;
          }

        }

        else
        {
          const struct ctf_lmember *lmp = (const struct ctf_lmember *)((unsigned long int)tp + (unsigned long int)increment);
          unsigned short int return_value_2;
          return_value_2=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
          n = (unsigned int)return_value_2;
          if(!(n == 0u))
          {
            const char *name;
            name=ctf_strptr(fp, lmp->ctlm_name);
            rc=func(name, (signed long int)lmp->ctlm_type, (unsigned long int)((unsigned long int)lmp->ctlm_offsethi << 32 | (unsigned long int)lmp->ctlm_offsetlo), arg);
            if(!(rc == 0))
              return rc;

            n = n - 1u;
            lmp = lmp + 1l;
          }

        }
        return 0;
      }
    }
  }
}

// ctf_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 441
extern struct ctf_file * ctf_open(const char *filename, signed int *errp)
{
  struct ctf_file *fp;
  signed int fd;
  fd=open(filename, 00);
  signed int *return_value___errno_location$1;
  if(fd == -1)
  {
    if(!(errp == ((signed int *)NULL)))
    {
      return_value___errno_location$1=__errno_location();
      *errp = *return_value___errno_location$1;
    }

    return (struct ctf_file *)(void *)0;
  }

  fp=ctf_fdopen(fd, errp);
  close(fd);
  return fp;
}

// ctf_parent_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 876
extern struct ctf_file * ctf_parent_file(struct ctf_file *fp)
{
  return fp->ctf_parent;
}

// ctf_parent_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 886
extern const char * ctf_parent_name(struct ctf_file *fp)
{
  return fp->ctf_parname;
}

// ctf_parse
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 1172
static struct tdata * ctf_parse(struct ctf_header *h, char *buf, struct symit_data *si, char *label)
{
  struct tdata *td;
  td=tdata_new();
  struct tdesc **tdarr;
  signed int ntypes;
  ntypes=count_types(h, buf);
  signed int idx;
  signed int i;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct tdesc *) /*8ul*/  * (unsigned long int)(ntypes + 1));
  tdarr = (struct tdesc **)return_value_xcalloc$1;
  tdarr[(signed long int)0] = (struct tdesc *)(void *)0;
  i = 1;
  for( ; ntypes >= i; i = i + 1)
  {
    void *return_value_xcalloc$2;
    return_value_xcalloc$2=xcalloc(sizeof(struct tdesc) /*64ul*/ );
    tdarr[(signed long int)i] = (struct tdesc *)return_value_xcalloc$2;
    tdarr[(signed long int)i]->t_id = i;
  }
  td->td_parlabel=xstrdup(buf + (signed long int)h->cth_stroff + (signed long int)h->cth_parlabel);
  idx=resurrect_labels(h, td, buf, label);
  resurrect_objects(h, td, tdarr, ntypes + 1, buf, si);
  resurrect_functions(h, td, tdarr, ntypes + 1, buf, si);
  resurrect_types(h, td, tdarr, ntypes + 1, buf, idx);
  free((void *)tdarr);
  td->td_nextid = ntypes + 1;
  return td;
}

// ctf_sect_mmap
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 183
extern const void * ctf_sect_mmap(struct ctf_sect *sp, signed int fd)
{
  unsigned long int pageoff = (unsigned long int)sp->cts_offset & ~_PAGEMASK;
  char *base;
  void *return_value_mmap$1;
  return_value_mmap$1=mmap((void *)0, sp->cts_size + pageoff, 0x1, 0x02, fd, (signed long int)((unsigned long int)sp->cts_offset & _PAGEMASK));
  base = (char *)return_value_mmap$1;
  if(!(base == (char *)-1))
    sp->cts_data = (void *)(base + (signed long int)pageoff);

  return (const void *)base;
}

// ctf_sect_munmap
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 201
extern void ctf_sect_munmap(const struct ctf_sect *sp)
{
  unsigned long int addr = (unsigned long int)sp->cts_data;
  unsigned long int pageoff = addr & ~_PAGEMASK;
  munmap((void *)(addr - pageoff), sp->cts_size + pageoff);
}

// ctf_set_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 663
extern signed int ctf_set_array(struct ctf_file *fp, signed long int type, const struct ctf_arinfo *arp)
{
  struct ctf_dtdef *dtd;
  dtd=ctf_dtd_lookup(fp, type);
  signed long int return_value_ctf_set_errno$1;
  _Bool tmp_if_expr$3;
  signed long int return_value_ctf_set_errno$2;
  if((4u & fp->ctf_flags) == 0u)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 1039);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
  {
    if(dtd == ((struct ctf_dtdef *)NULL))
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = ((signed int)dtd->dtd_data.ctt_info & 0xf800) >> 11 != 4 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
    {
      return_value_ctf_set_errno$2=ctf_set_errno(fp, 1020);
      return (signed int)return_value_ctf_set_errno$2;
    }

    else
    {
      fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0008;
      dtd->dtd_u.dtu_arr = *arp;
      return 0;
    }
  }
}

// ctf_set_errno
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 308
extern signed long int ctf_set_errno(struct ctf_file *fp, signed int err)
{
  fp->ctf_errno = err;
  return -1L;
}

// ctf_set_open_errno
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 307
extern struct ctf_file * ctf_set_open_errno(signed int *errp, signed int error)
{
  if(!(errp == ((signed int *)NULL)))
    *errp = error;

  return (struct ctf_file *)(void *)0;
}

// ctf_setmodel
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 163
extern signed int ctf_setmodel(struct ctf_file *fp, signed int model)
{
  const struct ctf_dmodel *dp = _libctf_models;
  for( ; !(dp->ctd_name == ((const char *)NULL)); dp = dp + 1l)
    if(dp->ctd_code == model)
    {
      fp->ctf_dmodel = dp;
      return 0;
    }

  signed long int return_value_ctf_set_errno$1;
  return_value_ctf_set_errno$1=ctf_set_errno(fp, 22);
  return (signed int)return_value_ctf_set_errno$1;
}

// ctf_setspecific
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 945
extern void ctf_setspecific(struct ctf_file *fp, void *data)
{
  fp->ctf_specific = data;
}

// ctf_strdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 320
extern char * ctf_strdup(const char *s1)
{
  char *s2;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(s1);
  void *return_value_ctf_alloc$2;
  return_value_ctf_alloc$2=ctf_alloc(return_value_strlen$1 + (unsigned long int)1);
  s2 = (char *)return_value_ctf_alloc$2;
  if(!(s2 == ((char *)NULL)))
    strcpy(s2, s1);

  return s2;
}

// ctf_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 321
extern const char * ctf_strerror(signed int err)
{
  char *return_value_strerror$1;
  return_value_strerror$1=strerror(err);
  return (const char *)return_value_strerror$1;
}

// ctf_strptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 305
extern const char * ctf_strptr(struct ctf_file *fp, unsigned int name)
{
  const char *s;
  s=ctf_strraw(fp, name);
  return s != (const char *)(void *)0 ? s : "(?)";
}

// ctf_strraw
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/common/ctf/ctf_impl.h line 304
extern const char * ctf_strraw(struct ctf_file *fp, unsigned int name)
{
  struct ctf_strs *ctsp = &fp->ctf_str[(signed long int)(name >> 31)];
  if(!(ctsp->cts_strs == ((const char *)NULL)))
  {
    if((unsigned long int)(2147483647u & name) >= ctsp->cts_len)
      goto __CPROVER_DUMP_L1;

    return ctsp->cts_strs + (signed long int)(name & (unsigned int)0x7fffffff);
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return (const char *)(void *)0;
  }
}

// ctf_type_align
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 183
extern signed long int ctf_type_align(struct ctf_file *fp, signed long int type)
{
  const struct ctf_type *tp;
  struct ctf_arinfo r;
  type=ctf_type_resolve(fp, type);
  signed int return_value_ctf_array_info$1;
  signed long int return_value_ctf_type_align$2;
  if(type == -1l)
    return (signed long int)-1;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (signed long int)-1;

    else
    {
      unsigned short int return_value;
      return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      if((signed int)return_value == 3 || (signed int)return_value == 5)
      {
        return (signed long int)fp->ctf_dmodel->ctd_pointer;
        return_value_ctf_array_info$1=ctf_array_info(fp, type, &r);
        if((signed long int)return_value_ctf_array_info$1 == -1l)
          return (signed long int)-1;

        return_value_ctf_type_align$2=ctf_type_align(fp, r.ctr_contents);
        return return_value_ctf_type_align$2;
        unsigned int n;
        unsigned short int return_value_1;
        return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
        n = (unsigned int)return_value_1;
        signed long int size;
        signed long int increment;
        unsigned long int align = (unsigned long int)0;
        const void *vmp;
        ctf_get_ctt_size(fp, tp, &size, &increment);
        vmp = (const void *)((unsigned char *)tp + increment);
        unsigned short int return_value_2;
        return_value_2=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
        if((signed int)return_value_2 == 6)
          n = n < (unsigned int)1 ? n : (unsigned int)1;

        if(fp->ctf_version == 1 || !(size >= 8192l))
        {
          const struct ctf_member *mp = (const struct ctf_member *)vmp;
          if(!(n == 0u))
          {
            signed long int am;
            am=ctf_type_align(fp, (signed long int)mp->ctm_type);
            align = align > (unsigned long int)am ? align : (unsigned long int)am;
            n = n - 1u;
            mp = mp + 1l;
          }

        }

        else
        {
          const struct ctf_lmember *lmp = (const struct ctf_lmember *)vmp;
          if(!(n == 0u))
          {
            signed long int ctf_type_align$$1$$1$$1$$2$$1$$1$$am;
            ctf_type_align$$1$$1$$1$$2$$1$$1$$am=ctf_type_align(fp, (signed long int)lmp->ctlm_type);
            align = align > (unsigned long int)ctf_type_align$$1$$1$$1$$2$$1$$1$$am ? align : (unsigned long int)ctf_type_align$$1$$1$$1$$2$$1$$1$$am;
            n = n - 1u;
            lmp = lmp + 1l;
          }

        }
        return (signed long int)align;
        return (signed long int)fp->ctf_dmodel->ctd_int;
      }

      signed long int return_value_ctf_get_ctt_size$3;
      return_value_ctf_get_ctt_size$3=ctf_get_ctt_size(fp, tp, (signed long int *)(void *)0, (signed long int *)(void *)0);
      return return_value_ctf_get_ctt_size$3;
    }
  }
}

// ctf_type_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 536
extern signed int ctf_type_cmp(struct ctf_file *lfp, signed long int ltype, struct ctf_file *rfp, signed long int rtype)
{
  signed int rval;
  if(!(ltype >= rtype))
    rval = -1;

  else
    if(!(rtype >= ltype))
      rval = 1;

    else
      rval = 0;
  if(lfp == rfp)
    return rval;

  else
  {
    if(!(ltype >= 32768l))
    {
      if(!(lfp->ctf_parent == ((struct ctf_file *)NULL)))
        lfp = lfp->ctf_parent;

    }

    if(!(rtype >= 32768l))
    {
      if(!(rfp->ctf_parent == ((struct ctf_file *)NULL)))
        rfp = rfp->ctf_parent;

    }

    if(!(lfp >= rfp))
      return -1;

    else
      if(!(rfp >= lfp))
        return 1;

      else
        return rval;
  }
}

// ctf_type_compat
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 572
extern signed int ctf_type_compat(struct ctf_file *lfp, signed long int ltype, struct ctf_file *rfp, signed long int rtype)
{
  const struct ctf_type *ltp;
  const struct ctf_type *rtp;
  struct ctf_encoding le;
  struct ctf_encoding re;
  struct ctf_arinfo la;
  struct ctf_arinfo ra;
  unsigned int lkind;
  unsigned int rkind;
  signed int return_value_ctf_type_cmp$1;
  return_value_ctf_type_cmp$1=ctf_type_cmp(lfp, ltype, rfp, rtype);
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$9;
  const char *return_value_ctf_strptr$6;
  const char *return_value_ctf_strptr$7;
  signed int return_value_strcmp$8;
  signed int return_value_ctf_type_encoding$10;
  _Bool tmp_if_expr$12;
  signed int return_value_ctf_type_encoding$11;
  _Bool tmp_if_expr$14;
  signed int return_value_bcmp$13;
  signed long int return_value_ctf_type_reference$15;
  signed long int return_value_ctf_type_reference$16;
  signed int return_value_ctf_type_compat$17;
  signed int return_value_ctf_array_info$18;
  _Bool tmp_if_expr$20;
  signed int return_value_ctf_array_info$19;
  _Bool tmp_if_expr$22;
  signed int return_value_ctf_type_compat$21;
  _Bool tmp_if_expr$24;
  signed int return_value_ctf_type_compat$23;
  signed long int return_value_ctf_type_size$25;
  signed long int return_value_ctf_type_size$26;
  if(return_value_ctf_type_cmp$1 == 0)
    return 1;

  else
  {
    ltype=ctf_type_resolve(lfp, ltype);
    signed int return_value_ctf_type_kind$2;
    return_value_ctf_type_kind$2=ctf_type_kind(lfp, ltype);
    lkind = (unsigned int)return_value_ctf_type_kind$2;
    rtype=ctf_type_resolve(rfp, rtype);
    signed int return_value_ctf_type_kind$3;
    return_value_ctf_type_kind$3=ctf_type_kind(rfp, rtype);
    rkind = (unsigned int)return_value_ctf_type_kind$3;
    if(!(lkind == rkind))
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      ltp=ctf_lookup_by_id(&lfp, ltype);
      tmp_if_expr$4 = ltp == (const struct ctf_type *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      rtp=ctf_lookup_by_id(&rfp, rtype);
      tmp_if_expr$5 = rtp == (const struct ctf_type *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
      tmp_if_expr$9 = (_Bool)1;

    else
    {
      return_value_ctf_strptr$6=ctf_strptr(lfp, ltp->ctt_name);
      return_value_ctf_strptr$7=ctf_strptr(rfp, rtp->ctt_name);
      return_value_strcmp$8=strcmp(return_value_ctf_strptr$6, return_value_ctf_strptr$7);
      tmp_if_expr$9 = return_value_strcmp$8 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$9)
      return 0;

    else
      switch(lkind)
      {
        case (unsigned int)1:

        case (unsigned int)2:
        {
          return_value_ctf_type_encoding$10=ctf_type_encoding(lfp, ltype, &le);
          if(return_value_ctf_type_encoding$10 == 0)
          {
            return_value_ctf_type_encoding$11=ctf_type_encoding(rfp, rtype, &re);
            tmp_if_expr$12 = return_value_ctf_type_encoding$11 == 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$12 = (_Bool)0;
          if(tmp_if_expr$12)
          {
            return_value_bcmp$13=bcmp((const void *)&le, (const void *)&re, sizeof(struct ctf_encoding) /*12ul*/ );
            tmp_if_expr$14 = return_value_bcmp$13 == 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$14 = (_Bool)0;
          return (signed int)tmp_if_expr$14;
        }
        case (unsigned int)3:
        {
          return_value_ctf_type_reference$15=ctf_type_reference(lfp, ltype);
          return_value_ctf_type_reference$16=ctf_type_reference(rfp, rtype);
          return_value_ctf_type_compat$17=ctf_type_compat(lfp, return_value_ctf_type_reference$15, rfp, return_value_ctf_type_reference$16);
          return return_value_ctf_type_compat$17;
        }
        case (unsigned int)4:
        {
          return_value_ctf_array_info$18=ctf_array_info(lfp, ltype, &la);
          if(return_value_ctf_array_info$18 == 0)
          {
            return_value_ctf_array_info$19=ctf_array_info(rfp, rtype, &ra);
            tmp_if_expr$20 = return_value_ctf_array_info$19 == 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$20 = (_Bool)0;
          if(la.ctr_nelems == ra.ctr_nelems && tmp_if_expr$20)
          {
            return_value_ctf_type_compat$21=ctf_type_compat(lfp, la.ctr_contents, rfp, ra.ctr_contents);
            tmp_if_expr$22 = return_value_ctf_type_compat$21 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$22 = (_Bool)0;
          if(tmp_if_expr$22)
          {
            return_value_ctf_type_compat$23=ctf_type_compat(lfp, la.ctr_index, rfp, ra.ctr_index);
            tmp_if_expr$24 = return_value_ctf_type_compat$23 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$24 = (_Bool)0;
          return (signed int)tmp_if_expr$24;
        }
        case (unsigned int)6:

        case (unsigned int)7:
        {
          return_value_ctf_type_size$25=ctf_type_size(lfp, ltype);
          return_value_ctf_type_size$26=ctf_type_size(rfp, rtype);
          return (signed int)(return_value_ctf_type_size$25 == return_value_ctf_type_size$26);
        }
        case (unsigned int)8:

        case (unsigned int)9:
          return 1;
        default:
          return 0;
      }
  }
}

// ctf_type_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 187
extern signed int ctf_type_encoding(struct ctf_file *fp, signed long int type, struct ctf_encoding *ep)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  signed long int increment;
  unsigned int data;
  tp=ctf_lookup_by_id(&fp, type);
  if(tp == ((const struct ctf_type *)NULL))
    return (signed int)-1L;

  else
  {
    ctf_get_ctt_size(fp, tp, (signed long int *)(void *)0, &increment);
    unsigned short int return_value;
    return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
    if((signed int)return_value == 1)
    {
      data = *((const unsigned int *)((unsigned long int)tp + (unsigned long int)increment));
      ep->cte_format = (data & 0xff000000) >> 24;
      ep->cte_offset = (data & (unsigned int)0x00ff0000) >> 16;
      ep->cte_bits = data & (unsigned int)0x0000ffff;
      data = *((const unsigned int *)((unsigned long int)tp + (unsigned long int)increment));
      ep->cte_format = (data & 0xff000000) >> 24;
      ep->cte_offset = (data & (unsigned int)0x00ff0000) >> 16;
      ep->cte_bits = data & (unsigned int)0x0000ffff;
    }

    signed long int return_value_ctf_set_errno$1;
    return_value_ctf_set_errno$1=ctf_set_errno(ofp, 1024);
    return (signed int)return_value_ctf_set_errno$1;
    return 0;
  }
}

// ctf_type_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 147
extern signed int ctf_type_iter(struct ctf_file *fp, signed int (*func)(signed long int, void *), void *arg)
{
  signed long int id;
  signed long int max = (signed long int)fp->ctf_typemax;
  signed int rc;
  signed int child = (signed int)(fp->ctf_flags & (unsigned int)0x0002);
  id = (signed long int)1;
  for( ; max >= id; id = id + 1l)
  {
    const struct ctf_type *tp = (struct ctf_type *)((unsigned long int)fp->ctf_buf + (unsigned long int)fp->ctf_txlate[id]);
    if(!((0x0400 & (signed int)tp->ctt_info) >> 10 == 0))
    {
      rc=func(child != 0 ? id | (signed long int)0x8000 : id, arg);
      if(!(rc == 0))
        return rc;

    }

  }
  return 0;
}

// ctf_type_kind
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 184
extern signed int ctf_type_kind(struct ctf_file *fp, signed long int type)
{
  const struct ctf_type *tp;
  tp=ctf_lookup_by_id(&fp, type);
  if(tp == ((const struct ctf_type *)NULL))
    return (signed int)-1L;

  else
  {
    unsigned short int return_value;
    return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
    return (signed int)return_value;
  }
}

// ctf_type_lname
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 203
extern signed long int ctf_type_lname(struct ctf_file *fp, signed long int type, char *buf, unsigned long int len)
{
  struct ctf_decl cd;
  struct ctf_decl_node *cdp;
  enum anonymous$16 prec;
  enum anonymous$16 lp;
  enum anonymous$16 rp;
  signed int ptr;
  signed int arr;
  unsigned int k;
  if(fp == ((struct ctf_file *)NULL) && type == -1l)
    return (signed long int)-1;

  else
  {
    ctf_decl_init(&cd, buf, len);
    ctf_decl_push(&cd, fp, type);
    if(!(cd.cd_err == 0))
    {
      ctf_decl_fini(&cd);
      signed long int return_value_ctf_set_errno$1;
      return_value_ctf_set_errno$1=ctf_set_errno(fp, cd.cd_err);
      return return_value_ctf_set_errno$1;
    }

    ptr = (signed int)(cd.cd_order[(signed long int)CTF_PREC_POINTER] > CTF_PREC_POINTER);
    arr = (signed int)(cd.cd_order[(signed long int)CTF_PREC_ARRAY] > CTF_PREC_ARRAY);
    rp = (enum anonymous$16)(arr != 0 ? CTF_PREC_ARRAY : (ptr != 0 ? CTF_PREC_POINTER : -1));
    lp = (enum anonymous$16)(ptr != 0 ? CTF_PREC_POINTER : (arr != 0 ? CTF_PREC_ARRAY : -1));
    k = (unsigned int)3;
    prec = (enum anonymous$16)CTF_PREC_BASE;
    for( ; !((signed int)prec >= CTF_PREC_MAX); prec = (enum anonymous$16)((signed int)prec + 1))
    {
      cdp = (struct ctf_decl_node *)(void *)((struct ctf_list *)&cd.cd_nodes[(signed long int)prec])->l_next;
      for( ; !(cdp == ((struct ctf_decl_node *)NULL)); cdp = (struct ctf_decl_node *)(void *)((struct ctf_list *)cdp)->l_next)
      {
        struct ctf_file *rfp = fp;
        const struct ctf_type *tp;
        tp=ctf_lookup_by_id(&rfp, cdp->cd_type);
        const char *name;
        name=ctf_strptr(rfp, tp->ctt_name);
        if(!(k == 3u) && !(k == 4u))
          ctf_decl_sprintf(&cd, " ");

        if(lp == prec)
        {
          ctf_decl_sprintf(&cd, "(");
          lp = (enum anonymous$16)-1;
        }

        switch(cdp->cd_kind)
        {
          case (unsigned int)1:

          case (unsigned int)2:

          case (unsigned int)10:
          {
            ctf_decl_sprintf(&cd, "%s", name);
            break;
          }
          case (unsigned int)3:
          {
            ctf_decl_sprintf(&cd, "*");
            break;
          }
          case (unsigned int)4:
          {
            ctf_decl_sprintf(&cd, "[%u]", cdp->cd_n);
            break;
          }
          case (unsigned int)5:
          {
            ctf_decl_sprintf(&cd, "()");
            break;
          }
          case (unsigned int)6:

          case (unsigned int)9:
          {
            ctf_decl_sprintf(&cd, "struct %s", name);
            break;
          }
          case (unsigned int)7:
          {
            ctf_decl_sprintf(&cd, "union %s", name);
            break;
          }
          case (unsigned int)8:
          {
            ctf_decl_sprintf(&cd, "enum %s", name);
            break;
          }
          case (unsigned int)11:
          {
            ctf_decl_sprintf(&cd, "volatile");
            break;
          }
          case (unsigned int)12:
          {
            ctf_decl_sprintf(&cd, "const");
            break;
          }
          case (unsigned int)13:
            ctf_decl_sprintf(&cd, "restrict");
        }
        k = cdp->cd_kind;
      }
      if(rp == prec)
        ctf_decl_sprintf(&cd, ")");

    }
    if(cd.cd_len >= len)
      ctf_set_errno(fp, 1027);

    ctf_decl_fini(&cd);
    return (signed long int)cd.cd_len;
  }
}

// ctf_type_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 309
extern char * ctf_type_name(struct ctf_file *fp, signed long int type, char *buf, unsigned long int len)
{
  signed long int rv;
  rv=ctf_type_lname(fp, type, buf, len);
  return rv >= (signed long int)0 && (unsigned long int)rv < len ? buf : (char *)(void *)0;
}

// ctf_type_pointer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 476
extern signed long int ctf_type_pointer(struct ctf_file *fp, signed long int type)
{
  struct ctf_file *ofp = fp;
  signed long int ntype;
  const struct ctf_type *return_value_ctf_lookup_by_id$1;
  return_value_ctf_lookup_by_id$1=ctf_lookup_by_id(&fp, type);
  signed long int return_value_ctf_set_errno$2;
  signed long int return_value_ctf_set_errno$3;
  if(return_value_ctf_lookup_by_id$1 == ((const struct ctf_type *)NULL))
    return -1L;

  else
  {
    ntype = (signed long int)fp->ctf_ptrtab[type & (signed long int)0x7fff];
    if(!(ntype == 0l))
      return (fp->ctf_flags & (unsigned int)0x0002) != 0u ? ntype | (signed long int)0x8000 : ntype;

    else
    {
      type=ctf_type_resolve(fp, type);
      if(type == -1l)
      {
        return_value_ctf_set_errno$2=ctf_set_errno(ofp, 1028);
        return return_value_ctf_set_errno$2;
      }

      else
      {
        const struct ctf_type *return_value_ctf_lookup_by_id$4;
        return_value_ctf_lookup_by_id$4=ctf_lookup_by_id(&fp, type);
        if(return_value_ctf_lookup_by_id$4 == ((const struct ctf_type *)NULL))
        {
          return_value_ctf_set_errno$3=ctf_set_errno(ofp, 1028);
          return return_value_ctf_set_errno$3;
        }

        else
        {
          ntype = (signed long int)fp->ctf_ptrtab[type & (signed long int)0x7fff];
          if(!(ntype == 0l))
            return (fp->ctf_flags & (unsigned int)0x0002) != 0u ? ntype | (signed long int)0x8000 : ntype;

          else
          {
            signed long int return_value_ctf_set_errno$5;
            return_value_ctf_set_errno$5=ctf_set_errno(ofp, 1028);
            return return_value_ctf_set_errno$5;
          }
        }
      }
    }
  }
}

// ctf_type_reference
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 185
extern signed long int ctf_type_reference(struct ctf_file *fp, signed long int type)
{
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  tp=ctf_lookup_by_id(&fp, type);
  if(tp == ((const struct ctf_type *)NULL))
    return -1L;

  else
  {
    unsigned short int return_value;
    return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
    if((signed int)return_value == 3 || (signed int)return_value == 10 || (signed int)return_value == 11 || (signed int)return_value == 12 || (signed int)return_value == 13)
      return (signed long int)tp->_u._type;

    signed long int return_value_ctf_set_errno$1;
    return_value_ctf_set_errno$1=ctf_set_errno(ofp, 1026);
    return return_value_ctf_set_errno$1;
  }
}

// ctf_type_resolve
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 179
extern signed long int ctf_type_resolve(struct ctf_file *fp, signed long int type)
{
  signed long int prev = type;
  signed long int otype = type;
  struct ctf_file *ofp = fp;
  const struct ctf_type *tp;
  tp=ctf_lookup_by_id(&fp, type);
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(!(tp == ((const struct ctf_type *)NULL)))
  {
    unsigned short int return_value;
    return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
    if((signed int)return_value == 10 || (signed int)return_value == 11 || (signed int)return_value == 12 || (signed int)return_value == 13)
    {
      if((signed long int)tp->_u._type == type)
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = (signed long int)tp->_u._type == otype ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = (signed long int)tp->_u._type == prev ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
      {
        ctf_dprintf("type %ld cycle detected\n", otype);
        signed long int return_value_ctf_set_errno$1;
        return_value_ctf_set_errno$1=ctf_set_errno(ofp, 1007);
        return return_value_ctf_set_errno$1;
      }

      prev = type;
      type = (signed long int)tp->_u._type;
    }

    return type;
  }

  return -1L;
}

// ctf_type_rvisit
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 785
static signed int ctf_type_rvisit(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed long int, unsigned long int, signed int, void *), void *arg, const char *name, unsigned long int offset, signed int depth)
{
  signed long int otype = type;
  const struct ctf_type *tp;
  signed long int size;
  signed long int increment;
  unsigned int kind;
  unsigned int n;
  signed int rc;
  type=ctf_type_resolve(fp, type);
  if(type == -1l)
    return (signed int)-1L;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (signed int)-1L;

    else
    {
      rc=func(name, otype, offset, depth, arg);
      if(!(rc == 0))
        return rc;

      else
      {
        unsigned short int return_value;
        return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
        kind = (unsigned int)return_value;
        if(!(kind == 6u) && !(kind == 7u))
          return 0;

        else
        {
          ctf_get_ctt_size(fp, tp, &size, &increment);
          if(fp->ctf_version == 1 || !(size >= 8192l))
          {
            const struct ctf_member *mp = (const struct ctf_member *)((unsigned long int)tp + (unsigned long int)increment);
            unsigned short int return_value_1;
            return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
            n = (unsigned int)return_value_1;
            if(!(n == 0u))
            {
              const char *return_value_ctf_strptr$1;
              return_value_ctf_strptr$1=ctf_strptr(fp, mp->ctm_name);
              rc=ctf_type_rvisit(fp, (signed long int)mp->ctm_type, func, arg, return_value_ctf_strptr$1, offset + (unsigned long int)mp->ctm_offset, depth + 1);
              if(!(rc == 0))
                return rc;

              n = n - 1u;
              mp = mp + 1l;
            }

          }

          else
          {
            const struct ctf_lmember *lmp = (const struct ctf_lmember *)((unsigned long int)tp + (unsigned long int)increment);
            unsigned short int return_value_2;
            return_value_2=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
            n = (unsigned int)return_value_2;
            if(!(n == 0u))
            {
              const char *return_value_ctf_strptr$2;
              return_value_ctf_strptr$2=ctf_strptr(fp, lmp->ctlm_name);
              rc=ctf_type_rvisit(fp, (signed long int)lmp->ctlm_type, func, arg, return_value_ctf_strptr$2, offset + (unsigned long int)((unsigned long int)lmp->ctlm_offsethi << 32 | (unsigned long int)lmp->ctlm_offsetlo), depth + 1);
              if(!(rc == 0))
                return rc;

              n = n - 1u;
              lmp = lmp + 1l;
            }

          }
          return 0;
        }
      }
    }
  }
}

// ctf_type_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/sys/cddl/contrib/opensolaris/uts/common/sys/ctf_api.h line 182
extern signed long int ctf_type_size(struct ctf_file *fp, signed long int type)
{
  const struct ctf_type *tp;
  signed long int size;
  struct ctf_arinfo ar;
  type=ctf_type_resolve(fp, type);
  signed int return_value_ctf_array_info$1;
  _Bool tmp_if_expr$2;
  if(type == -1l)
    return (signed long int)-1;

  else
  {
    tp=ctf_lookup_by_id(&fp, type);
    if(tp == ((const struct ctf_type *)NULL))
      return (signed long int)-1;

    else
    {
      unsigned short int return_value;
      return_value=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
      if((signed int)return_value == 3)
      {
        return (signed long int)fp->ctf_dmodel->ctd_pointer;
        return (signed long int)0;
        return (signed long int)fp->ctf_dmodel->ctd_int;
        size=ctf_get_ctt_size(fp, tp, (signed long int *)(void *)0, (signed long int *)(void *)0);
        if(size >= 1l)
          return size;

        return_value_ctf_array_info$1=ctf_array_info(fp, type, &ar);
        if((signed long int)return_value_ctf_array_info$1 == -1l)
          tmp_if_expr$2 = (_Bool)1;

        else
        {
          size=ctf_type_size(fp, ar.ctr_contents);
          tmp_if_expr$2 = size == -1L ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$2)
          return (signed long int)-1;

        return size * (signed long int)ar.ctr_nelems;
      }

      signed long int return_value_ctf_get_ctt_size$3;
      return_value_ctf_get_ctt_size$3=ctf_get_ctt_size(fp, tp, (signed long int *)(void *)0, (signed long int *)(void *)0);
      return return_value_ctf_get_ctt_size$3;
    }
  }
}

// ctf_type_visit
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_types.c line 842
extern signed int ctf_type_visit(struct ctf_file *fp, signed long int type, signed int (*func)(const char *, signed long int, unsigned long int, signed int, void *), void *arg)
{
  signed int return_value_ctf_type_rvisit$1;
  return_value_ctf_type_rvisit$1=ctf_type_rvisit(fp, type, func, arg, "", (unsigned long int)0, 0);
  return return_value_ctf_type_rvisit$1;
}

// ctf_update
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 185
extern signed int ctf_update(struct ctf_file *fp)
{
  struct ctf_file ofp;
  struct ctf_file *nfp;
  struct ctf_header hdr;
  struct ctf_dtdef *dtd;
  struct ctf_sect cts;
  unsigned char *s;
  unsigned char *s0;
  unsigned char *t;
  unsigned long int size;
  void *buf;
  signed int err;
  signed long int return_value_ctf_set_errno$1;
  signed long int return_value_ctf_set_errno$2;
  unsigned short int *argv;
  unsigned int argc;
  unsigned short int *tmp_post$4;
  unsigned short int *tmp_post$5;
  if((4u & fp->ctf_flags) == 0u)
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 1039);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
    if((8u & fp->ctf_flags) == 0u)
      return 0;

    else
    {
      bzero((void *)&hdr, sizeof(struct ctf_header) /*36ul*/ );
      hdr.cth_preamble.ctp_magic = (unsigned short int)0xcff1;
      hdr.cth_preamble.ctp_version = (unsigned char)2;
      if(!((2u & fp->ctf_flags) == 0u))
        hdr.cth_parname = (unsigned int)1;

      size = (unsigned long int)0;
      dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)&fp->ctf_dtdefs)->l_next;
      for( ; !(dtd == ((struct ctf_dtdef *)NULL)); dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)dtd)->l_next)
      {
        unsigned int kind = (unsigned int)(((signed int)dtd->dtd_data.ctt_info & 0xf800) >> 11);
        unsigned int ctf_update$$1$$1$$1$$vlen = (unsigned int)((signed int)dtd->dtd_data.ctt_info & 0x3ff);
        if(!((signed int)dtd->dtd_data._u._size == 0xffff))
          size = size + sizeof(struct ctf_stype) /*8ul*/ ;

        else
          size = size + sizeof(struct ctf_type) /*16ul*/ ;
        switch(kind)
        {
          case (unsigned int)1:

          case (unsigned int)2:
          {
            size = size + sizeof(unsigned int) /*4ul*/ ;
            break;
          }
          case (unsigned int)4:
          {
            size = size + sizeof(struct ctf_array) /*8ul*/ ;
            break;
          }
          case (unsigned int)5:
          {
            size = size + sizeof(unsigned short int) /*2ul*/  * (unsigned long int)(ctf_update$$1$$1$$1$$vlen + (ctf_update$$1$$1$$1$$vlen & (unsigned int)1));
            break;
          }
          case (unsigned int)6:

          case (unsigned int)7:
          {
            if(!((signed int)dtd->dtd_data._u._size >= 8192))
              size = size + sizeof(struct ctf_member) /*8ul*/  * (unsigned long int)ctf_update$$1$$1$$1$$vlen;

            else
              size = size + sizeof(struct ctf_lmember) /*16ul*/  * (unsigned long int)ctf_update$$1$$1$$1$$vlen;
            break;
          }
          case (unsigned int)8:
            size = size + sizeof(struct ctf_enum) /*8ul*/  * (unsigned long int)ctf_update$$1$$1$$1$$vlen;
        }
      }
      hdr.cth_stroff = (unsigned int)((unsigned long int)hdr.cth_typeoff + size);
      hdr.cth_strlen = (unsigned int)fp->ctf_dtstrlen;
      size = sizeof(struct ctf_header) /*36ul*/  + (unsigned long int)hdr.cth_stroff + (unsigned long int)hdr.cth_strlen;
      buf=ctf_data_alloc(size);
      if(buf == (void *)-1)
      {
        return_value_ctf_set_errno$2=ctf_set_errno(fp, 11);
        return (signed int)return_value_ctf_set_errno$2;
      }

      else
      {
        bcopy((const void *)&hdr, buf, sizeof(struct ctf_header) /*36ul*/ );
        t = (unsigned char *)buf + (signed long int)sizeof(struct ctf_header) /*36ul*/ ;
        s0 = (unsigned char *)buf + (signed long int)sizeof(struct ctf_header) /*36ul*/  + (signed long int)hdr.cth_stroff;
        s = s0;
        bcopy((const void *)_CTF_STRTAB_TEMPLATE, (void *)s, sizeof(const char [8l]) /*8ul*/ );
        s = s + (signed long int)sizeof(const char [8l]) /*8ul*/ ;
        dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)&fp->ctf_dtdefs)->l_next;
        for( ; !(dtd == ((struct ctf_dtdef *)NULL)); dtd = (struct ctf_dtdef *)(void *)((struct ctf_list *)dtd)->l_next)
        {
          unsigned int ctf_update$$1$$2$$1$$kind = (unsigned int)(((signed int)dtd->dtd_data.ctt_info & 0xf800) >> 11);
          unsigned int vlen = (unsigned int)((signed int)dtd->dtd_data.ctt_info & 0x3ff);
          struct ctf_array cta;
          unsigned int encoding;
          unsigned long int len;
          if(!(dtd->dtd_name == ((char *)NULL)))
          {
            dtd->dtd_data.ctt_name = (unsigned int)(s - s0);
            unsigned long int return_value_strlen$3;
            return_value_strlen$3=strlen(dtd->dtd_name);
            len = return_value_strlen$3 + (unsigned long int)1;
            bcopy((const void *)dtd->dtd_name, (void *)s, len);
            s = s + (signed long int)len;
          }

          else
            dtd->dtd_data.ctt_name = (unsigned int)0;
          if(!((signed int)dtd->dtd_data._u._size == 0xffff))
            len = sizeof(struct ctf_stype) /*8ul*/ ;

          else
            len = sizeof(struct ctf_type) /*16ul*/ ;
          bcopy((const void *)&dtd->dtd_data, (void *)t, len);
          t = t + (signed long int)len;
          switch(ctf_update$$1$$2$$1$$kind)
          {
            case (unsigned int)1:

            case (unsigned int)2:
            {
              if(ctf_update$$1$$2$$1$$kind == 1u)
                encoding = dtd->dtd_u.dtu_enc.cte_format << 24 | dtd->dtd_u.dtu_enc.cte_offset << 16 | dtd->dtd_u.dtu_enc.cte_bits;

              else
                encoding = dtd->dtd_u.dtu_enc.cte_format << 24 | dtd->dtd_u.dtu_enc.cte_offset << 16 | dtd->dtd_u.dtu_enc.cte_bits;
              bcopy((const void *)&encoding, (void *)t, sizeof(unsigned int) /*4ul*/ );
              t = t + (signed long int)sizeof(unsigned int) /*4ul*/ ;
              break;
            }
            case (unsigned int)4:
            {
              cta.cta_contents = (unsigned short int)dtd->dtd_u.dtu_arr.ctr_contents;
              cta.cta_index = (unsigned short int)dtd->dtd_u.dtu_arr.ctr_index;
              cta.cta_nelems = dtd->dtd_u.dtu_arr.ctr_nelems;
              bcopy((const void *)&cta, (void *)t, sizeof(struct ctf_array) /*8ul*/ );
              t = t + (signed long int)sizeof(struct ctf_array) /*8ul*/ ;
              break;
            }
            case (unsigned int)5:
            {
              argv = (unsigned short int *)(unsigned long int)t;
              argc = (unsigned int)0;
              for( ; !(argc >= vlen); argc = argc + 1u)
              {
                tmp_post$4 = argv;
                argv = argv + 1l;
                *tmp_post$4 = (unsigned short int)dtd->dtd_u.dtu_argv[(signed long int)argc];
              }
              if(!((1u & vlen) == 0u))
              {
                tmp_post$5 = argv;
                argv = argv + 1l;
                *tmp_post$5 = (unsigned short int)0;
              }

              t = (unsigned char *)argv;
              break;
            }
            case (unsigned int)6:

            case (unsigned int)7:
            {
              if(!((signed int)dtd->dtd_data._u._size >= 8192))
                t=ctf_copy_smembers(dtd, (unsigned int)(s - s0), t);

              else
                t=ctf_copy_lmembers(dtd, (unsigned int)(s - s0), t);
              s=ctf_copy_membnames(dtd, s);
              break;
            }
            case (unsigned int)8:
            {
              t=ctf_copy_emembers(dtd, (unsigned int)(s - s0), t);
              s=ctf_copy_membnames(dtd, s);
            }
          }
        }
        ctf_data_protect(buf, size);
        cts.cts_name = _CTF_SECTION;
        cts.cts_type = (unsigned long int)1;
        cts.cts_flags = (unsigned long int)0;
        cts.cts_data = buf;
        cts.cts_size = size;
        cts.cts_entsize = (unsigned long int)1;
        cts.cts_offset = (signed long int)0;
        nfp=ctf_bufopen(&cts, (const struct ctf_sect *)(void *)0, (const struct ctf_sect *)(void *)0, &err);
        if(nfp == ((struct ctf_file *)NULL))
        {
          ctf_data_free(buf, size);
          signed long int return_value_ctf_set_errno$6;
          return_value_ctf_set_errno$6=ctf_set_errno(fp, err);
          return (signed int)return_value_ctf_set_errno$6;
        }

        signed int return_value_ctf_getmodel$7;
        return_value_ctf_getmodel$7=ctf_getmodel(fp);
        ctf_setmodel(nfp, return_value_ctf_getmodel$7);
        ctf_import(nfp, fp->ctf_parent);
        nfp->ctf_refcnt = fp->ctf_refcnt;
        nfp->ctf_flags = nfp->ctf_flags | fp->ctf_flags & (unsigned int)~0x0008;
        nfp->ctf_data.cts_data = (void *)0;
        nfp->ctf_dthash = fp->ctf_dthash;
        nfp->ctf_dthashlen = fp->ctf_dthashlen;
        nfp->ctf_dtdefs = fp->ctf_dtdefs;
        nfp->ctf_dtstrlen = fp->ctf_dtstrlen;
        nfp->ctf_dtnextid = fp->ctf_dtnextid;
        nfp->ctf_dtoldid = fp->ctf_dtnextid - (unsigned long int)1;
        nfp->ctf_specific = fp->ctf_specific;
        fp->ctf_dthash = (struct ctf_dtdef **)(void *)0;
        fp->ctf_dthashlen = (unsigned long int)0;
        bzero((void *)&fp->ctf_dtdefs, sizeof(struct ctf_list) /*16ul*/ );
        bcopy((const void *)fp, (void *)&ofp, sizeof(struct ctf_file) /*600ul*/ );
        bcopy((const void *)nfp, (void *)fp, sizeof(struct ctf_file) /*600ul*/ );
        bcopy((const void *)&ofp, (void *)nfp, sizeof(struct ctf_file) /*600ul*/ );
        fp->ctf_lookups[(signed long int)0].ctl_hash = &fp->ctf_structs;
        fp->ctf_lookups[(signed long int)1].ctl_hash = &fp->ctf_unions;
        fp->ctf_lookups[(signed long int)2].ctl_hash = &fp->ctf_enums;
        fp->ctf_lookups[(signed long int)3].ctl_hash = &fp->ctf_names;
        nfp->ctf_refcnt = (unsigned int)1;
        ctf_close(nfp);
        return 0;
      }
    }
}

// ctf_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 483
extern signed int ctf_version(signed int version)
{
  if(!(version >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  if(version >= 1)
  {
    if(version >= 3)
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      *return_value___errno_location$2 = 95;
      return -1;
    }

    ctf_dprintf("ctf_version: client using version %d\n", version);
    _libctf_version = version;
  }

  return _libctf_version;
}

// ctf_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 462
extern signed int ctf_write(struct ctf_file *fp, signed int fd)
{
  const unsigned char *buf = fp->ctf_base;
  signed long int resid = (signed long int)fp->ctf_size;
  signed long int len;
  signed int *return_value___errno_location$1;
  signed long int return_value_ctf_set_errno$2;
  while(!(resid == 0l))
  {
    len=write(fd, (const void *)buf, (unsigned long int)resid);
    if(!(len >= 1l))
    {
      return_value___errno_location$1=__errno_location();
      return_value_ctf_set_errno$2=ctf_set_errno(fp, *return_value___errno_location$1);
      return (signed int)return_value_ctf_set_errno$2;
    }

    resid = resid - len;
    buf = buf + len;
  }
  return 0;
}

// ctf_zopen
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 88
extern void * ctf_zopen(signed int *errp)
{
  zlib.z_uncompress = uncompress;
  zlib.z_error = zError;
  zlib.z_dlp = (void *)(unsigned long int)1;
  return zlib.z_dlp;
}

// debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 443
void debug(signed int level, const char *format, ...)
{
  void **ap;
  if(debug_level >= level)
  {
    ap = (void **)&format;
    vadebug(level, format, ap);
    ap = ((void **)NULL);
  }

}

// decompress_ctf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 1204
static unsigned long int decompress_ctf(char *cbuf, unsigned long int cbufsz, char *dbuf, unsigned long int dbufsz)
{
  struct z_stream_s zstr;
  signed int rc;
  zstr.zalloc = (void * (*)(void *, unsigned int, unsigned int))0;
  zstr.zfree = (void (*)(void *, void *))0;
  zstr.opaque = (void *)0;
  zstr.next_in = (unsigned char *)cbuf;
  zstr.avail_in = (unsigned int)cbufsz;
  zstr.next_out = (unsigned char *)dbuf;
  zstr.avail_out = (unsigned int)dbufsz;
  rc=inflateInit_(&zstr, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
  _Bool tmp_if_expr$2;
  if(!(rc == 0))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    rc=inflate(&zstr, 0);
    tmp_if_expr$2 = rc != 1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$3;
  if(tmp_if_expr$2)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    rc=inflateEnd(&zstr);
    tmp_if_expr$3 = rc != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$3)
  {
    const char *return_value_zError$1;
    return_value_zError$1=zError(rc);
    warning("CTF decompress zlib error %s\n", return_value_zError$1);
    return (unsigned long int)0;
  }

  debug(3, "reflated %lu bytes to %lu, pointer at %d\n", zstr.total_in, zstr.total_out, (char *)zstr.next_in - cbuf);
  return zstr.total_out;
}

// ehdr_to_gelf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 141
static void ehdr_to_gelf(const struct anonymous$18 *src, struct anonymous$8 *dst)
{
  bcopy((const void *)src->e_ident, (void *)dst->e_ident, (unsigned long int)16);
  dst->e_type = src->e_type;
  dst->e_machine = src->e_machine;
  dst->e_version = src->e_version;
  dst->e_entry = (unsigned long int)src->e_entry;
  dst->e_phoff = (unsigned long int)src->e_phoff;
  dst->e_shoff = (unsigned long int)src->e_shoff;
  dst->e_flags = src->e_flags;
  dst->e_ehsize = src->e_ehsize;
  dst->e_phentsize = src->e_phentsize;
  dst->e_phnum = src->e_phnum;
  dst->e_shentsize = src->e_shentsize;
  dst->e_shnum = src->e_shnum;
  dst->e_shstrndx = src->e_shstrndx;
}

// elf_ptrsz
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 97
unsigned long int elf_ptrsz(struct _Elf *elf)
{
  struct anonymous$8 ehdr;
  struct anonymous$8 *return_value_gelf_getehdr$2;
  return_value_gelf_getehdr$2=gelf_getehdr(elf, &ehdr);
  if(return_value_gelf_getehdr$2 == ((struct anonymous$8 *)NULL))
  {
    const char *return_value_elf_errmsg$1;
    return_value_elf_errmsg$1=elf_errmsg(-1);
    terminate("failed to read ELF header: %s\n", return_value_elf_errmsg$1);
  }

  if((signed int)ehdr.e_ident[4l] == 1)
    return (unsigned long int)4;

  else
    if((signed int)ehdr.e_ident[4l] == 2)
      return (unsigned long int)8;

    else
      terminate("unknown ELF class %d\n", ehdr.e_ident[(signed long int)4]);
  return (unsigned long int)0;
}

// elfterminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 440
void elfterminate(const char *file, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  static char msgbuf[8192l];
  vsnprintf(msgbuf, sizeof(char [8192l]) /*8192ul*/ , fmt, ap);
  ap = ((void **)NULL);
  const char *return_value_elf_errmsg$1;
  return_value_elf_errmsg$1=elf_errmsg(-1);
  terminate("%s: %s: %s\n", file, (const void *)msgbuf, return_value_elf_errmsg$1);
}

// enumadd
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1026
static signed int enumadd(const char *name, signed int value, void *arg)
{
  struct ctf_bundle *ctb = (struct ctf_bundle *)arg;
  signed int return_value_ctf_add_enumerator$1;
  return_value_ctf_add_enumerator$1=ctf_add_enumerator(ctb->ctb_file, ctb->ctb_type, name, value);
  return (signed int)((signed long int)return_value_ctf_add_enumerator$1 == -1L);
}

// enumcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1016
static signed int enumcmp(const char *name, signed int value, void *arg)
{
  struct ctf_bundle *ctb = (struct ctf_bundle *)arg;
  signed int bvalue;
  signed int return_value_ctf_enum_value$1;
  return_value_ctf_enum_value$1=ctf_enum_value(ctb->ctb_file, ctb->ctb_type, name, &bvalue);
  return (signed int)((signed long int)return_value_ctf_enum_value$1 == -1L ? (_Bool)1 : (value != bvalue ? (_Bool)1 : (_Bool)0));
}

// equiv_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 268
static signed int equiv_array(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed)
{
  struct ardef *ar1 = stdp->t_data.ardef;
  struct ardef *ar2 = ttdp->t_data.ardef;
  signed int return_value_equiv_node$1;
  return_value_equiv_node$1=equiv_node(ar1->ad_contents, ar2->ad_contents, ed);
  _Bool tmp_if_expr$3;
  signed int return_value_equiv_node$2;
  if(return_value_equiv_node$1 == 0)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    return_value_equiv_node$2=equiv_node(ar1->ad_idxtype, ar2->ad_idxtype, ed);
    tmp_if_expr$3 = !(return_value_equiv_node$2 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$3)
    return 0;

  else
    if(!(ar1->ad_nelems == ar2->ad_nelems))
      return 0;

    else
      return 1;
}

// equiv_assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 338
static signed int equiv_assert(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed)
{
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(1 == 0);
  return 0;
}

// equiv_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 411
static signed int equiv_cb(void *bucket, void *arg)
{
  struct equiv_data *ed = (struct equiv_data *)arg;
  struct tdesc *mtdp = (struct tdesc *)bucket;
  struct tdesc *ctdp = ed->ed_node;
  ed->ed_clear_mark = ed->ed_cur_mark + 1;
  ed->ed_cur_mark = ed->ed_clear_mark + 1;
  signed int return_value_equiv_node$1;
  return_value_equiv_node$1=equiv_node(ctdp, mtdp, ed);
  if(!(return_value_equiv_node$1 == 0))
  {
    debug(3, "equiv_node matched %d <%x> %d <%x>\n", ctdp->t_id, ctdp->t_id, mtdp->t_id, mtdp->t_id);
    ed->ed_tgt = mtdp;
    return -1;
  }

  else
    return 0;
}

// equiv_enum
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 316
static signed int equiv_enum(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed)
{
  struct elist *el1 = stdp->t_data.emem;
  struct elist *el2 = ttdp->t_data.emem;
  _Bool tmp_if_expr$2;
  signed int return_value_strcmp$1;
  while(!(el1 == ((struct elist *)NULL)) && !(el2 == ((struct elist *)NULL)))
  {
    if(!(el1->el_number == el2->el_number))
      tmp_if_expr$2 = (_Bool)1;

    else
    {
      return_value_strcmp$1=strcmp(el1->el_name, el2->el_name);
      tmp_if_expr$2 = return_value_strcmp$1 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$2)
      return 0;

    el1 = el1->el_next;
    el2 = el2->el_next;
  }
  if(!(el1 == ((struct elist *)NULL)) || !(el2 == ((struct elist *)NULL)))
    return 0;

  else
    return 1;
}

// equiv_function
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 247
static signed int equiv_function(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed)
{
  struct fndef *fn1 = stdp->t_data.fndef;
  struct fndef *fn2 = ttdp->t_data.fndef;
  signed int i;
  _Bool tmp_if_expr$1;
  if(!(fn1->fn_nargs == fn2->fn_nargs))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = fn1->fn_vargs != fn2->fn_vargs ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return 0;

  else
  {
    signed int return_value_equiv_node$2;
    return_value_equiv_node$2=equiv_node(fn1->fn_ret, fn2->fn_ret, ed);
    if(return_value_equiv_node$2 == 0)
      return 0;

    else
    {
      i = 0;
      for( ; !(i >= (signed int)fn1->fn_nargs); i = i + 1)
      {
        signed int return_value_equiv_node$3;
        return_value_equiv_node$3=equiv_node(fn1->fn_args[(signed long int)i], fn2->fn_args[(signed long int)i], ed);
        if(return_value_equiv_node$3 == 0)
          return 0;

      }
      return 1;
    }
  }
}

// equiv_intrinsic
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 219
static signed int equiv_intrinsic(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed)
{
  struct intr *si = stdp->t_data.intr;
  struct intr *ti = ttdp->t_data.intr;
  _Bool tmp_if_expr$1;
  if(!(si->intr_type == ti->intr_type))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = si->intr_signed != ti->intr_signed ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = si->intr_offset != ti->intr_offset ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$3;
  if(tmp_if_expr$2)
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = si->intr_nbits != ti->intr_nbits ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$4;
  if(tmp_if_expr$3)
    return 0;

  else
  {
    if((signed int)si->intr_type == INTR_INT)
      tmp_if_expr$4 = si->_u._iformat != ti->_u._iformat ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
      return 0;

    else
      if((signed int)si->intr_type == INTR_REAL)
      {
        if(!(si->_u._fformat == ti->_u._fformat))
          return 0;

      }

    return 1;
  }
}

// equiv_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 355
static signed int equiv_node(struct tdesc *ctdp, struct tdesc *mtdp, struct equiv_data *ed)
{
  signed int (*equiv)(struct tdesc *, struct tdesc *, struct equiv_data *);
  signed int mapping;
  _Bool tmp_if_expr$1;
  if(!(ed->ed_clear_mark >= ctdp->t_emark))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = mtdp->t_emark > ed->ed_clear_mark ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$4;
  signed int return_value_fwd_equiv$3;
  signed int return_value;
  if(tmp_if_expr$1)
    return (signed int)(ctdp->t_emark == mtdp->t_emark);

  else
  {
    mapping=get_mapping(ed->ed_ta, ctdp->t_id);
    if(mapping >= 1)
    {
      if(!(mapping == mtdp->t_id))
        goto __CPROVER_DUMP_L4;

      if(!(ed->ed_selfuniquify == 0))
        goto __CPROVER_DUMP_L4;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      signed int return_value_streq$2;
      return_value_streq$2=streq(ctdp->t_name, mtdp->t_name);
      if(return_value_streq$2 == 0)
        return 0;

      else
      {
        if(!(ctdp->t_type == mtdp->t_type))
        {
          if((signed int)ctdp->t_type == FORWARD)
            tmp_if_expr$4 = (_Bool)1;

          else
            tmp_if_expr$4 = (signed int)mtdp->t_type == FORWARD ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$4)
          {
            return_value_fwd_equiv$3=fwd_equiv(ctdp, mtdp);
            return return_value_fwd_equiv$3;
          }

          else
            return 0;
        }

        ctdp->t_emark = ed->ed_cur_mark;
        mtdp->t_emark = ed->ed_cur_mark;
        ed->ed_cur_mark = ed->ed_cur_mark + 1;
        equiv = tdesc_ops[(signed long int)ctdp->t_type].equiv;
        if(!(equiv == ((signed int (*)(struct tdesc *, struct tdesc *, struct equiv_data *))NULL)))
        {
          return_value=equiv(ctdp, mtdp, ed);
          return return_value;
        }

        else
          return 1;
      }
    }
  }
}

// equiv_plain
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 241
static signed int equiv_plain(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed)
{
  signed int return_value_equiv_node$1;
  return_value_equiv_node$1=equiv_node(stdp->t_data.tdesc, ttdp->t_data.tdesc, ed);
  return return_value_equiv_node$1;
}

// equiv_su
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 283
static signed int equiv_su(struct tdesc *stdp, struct tdesc *ttdp, struct equiv_data *ed)
{
  struct mlist *ml1 = stdp->t_data.members;
  struct mlist *ml2 = ttdp->t_data.members;
  struct mlist *olm1 = (struct mlist *)(void *)0;
  _Bool tmp_if_expr$2;
  signed int return_value_strcmp$1;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$4;
  signed int return_value_equiv_node$3;
  while(!(ml1 == ((struct mlist *)NULL)) && !(ml2 == ((struct mlist *)NULL)))
  {
    if(!(ml1->ml_offset == ml2->ml_offset))
      tmp_if_expr$2 = (_Bool)1;

    else
    {
      return_value_strcmp$1=strcmp(ml1->ml_name, ml2->ml_name);
      tmp_if_expr$2 = return_value_strcmp$1 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$2)
      return 0;

    if(olm1 == ((struct mlist *)NULL))
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = olm1->ml_type->t_id != ml1->ml_type->t_id ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
    {
      if(!(ml1->ml_size == ml2->ml_size))
        tmp_if_expr$4 = (_Bool)1;

      else
      {
        return_value_equiv_node$3=equiv_node(ml1->ml_type, ml2->ml_type, ed);
        tmp_if_expr$4 = !(return_value_equiv_node$3 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$4)
        return 0;

    }

    olm1 = ml1;
    ml1 = ml1->ml_next;
    ml2 = ml2->ml_next;
  }
  if(!(ml1 == ((struct mlist *)NULL)) || !(ml2 == ((struct mlist *)NULL)))
    return 0;

  else
    return 1;
}

// extract_label_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 32
static signed int extract_label_info(struct ctf_file *fp, const struct ctf_lblent **ctl, unsigned int *num_labels)
{
  const struct ctf_header *h;
  signed long int return_value_ctf_set_errno$1;
  if(!(fp->ctf_version >= 2))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(fp, 1036);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
  {
    h = (const struct ctf_header *)fp->ctf_data.cts_data;
    *ctl = (const struct ctf_lblent *)(fp->ctf_buf + (signed long int)h->cth_lbloff);
    *num_labels = (unsigned int)((unsigned long int)(h->cth_objtoff - h->cth_lbloff) / sizeof(struct ctf_lblent) /*8ul*/ );
    return 0;
  }
}

// fifo_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 43
extern void fifo_add(struct fifo *f, void *data)
{
  struct fifonode *fn;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct fifonode) /*16ul*/ );
  fn = (struct fifonode *)return_value_xmalloc$1;
  fn->fn_data = data;
  fn->fn_next = (struct fifonode *)(void *)0;
  if(f->f_tail == ((struct fifonode *)NULL))
  {
    f->f_tail = fn;
    f->f_head = f->f_tail;
  }

  else
  {
    f->f_tail->fn_next = fn;
    f->f_tail = fn;
  }
}

// fifo_empty
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 47
extern signed int fifo_empty(struct fifo *f)
{
  return (signed int)(f->f_head == (struct fifonode *)(void *)0);
}

// fifo_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 45
extern void fifo_free(struct fifo *f, void (*freefn)(void *))
{
  struct fifonode *fn = f->f_head;
  struct fifonode *tmp;
  if(freefn == ((void (*)(void *))NULL))
    freefn = fifo_nullfree;

  if(!(fn == ((struct fifonode *)NULL)))
  {
    freefn(fn->fn_data);
    tmp = fn;
    fn = fn->fn_next;
    free((void *)tmp);
  }

  free((void *)f);
}

// fifo_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.c line 140
extern signed int fifo_iter(struct fifo *f, signed int (*iter)(void *, void *), void *arg)
{
  struct fifonode *fn;
  signed int rc;
  signed int ret = 0;
  fn = f->f_head;
  if(!(fn == ((struct fifonode *)NULL)))
  {
    rc=iter(fn->fn_data, arg);
    if(!(rc >= 0))
      return -1;

    ret = ret + rc;
    fn = fn->fn_next;
  }

  return ret;
}

// fifo_len
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 46
extern signed int fifo_len(struct fifo *f)
{
  struct fifonode *fn;
  signed int i = 0;
  fn = f->f_head;
  for( ; !(fn == ((struct fifonode *)NULL)); i = i + 1)
    fn = fn->fn_next;
  return i;
}

// fifo_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 42
extern struct fifo * fifo_new(void)
{
  struct fifo *f;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct fifo) /*16ul*/ );
  f = (struct fifo *)return_value_xcalloc$1;
  return f;
}

// fifo_nullfree
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.c line 96
static void fifo_nullfree(void *arg)
{
  ;
}

// fifo_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/fifo.h line 44
extern void * fifo_remove(struct fifo *f)
{
  struct fifonode *fn;
  void *data;
  fn = f->f_head;
  if(fn == ((struct fifonode *)NULL))
    return (void *)0;

  else
  {
    data = fn->fn_data;
    f->f_head = fn->fn_next;
    if(f->f_head == ((struct fifonode *)NULL))
      f->f_tail = (struct fifonode *)(void *)0;

    free((void *)fn);
    return data;
  }
}

// finalize_phase_one
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 286
static void finalize_phase_one(struct workqueue *wq)
{
  signed int startslot;
  signed int i;
  startslot = -1;
  i = 0;
  for( ; !(i >= wq->wq_nwipslots); i = i + 1)
    if((wq->wq_wip + (signed long int)i)->wip_batchid == 1 + wq->wq_lastdonebatch)
    {
      startslot = i;
      break;
    }

  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c */
  assert(startslot != -1);
  i = startslot;
  for( ; !(i >= wq->wq_nwipslots + startslot); i = i + 1)
  {
    signed int slotnum = i % wq->wq_nwipslots;
    struct wip *wipslot = &wq->wq_wip[(signed long int)slotnum];
    if(!(wipslot->wip_td == ((struct tdata *)NULL)))
      debug(2, "clearing slot %d (%d) (saving %d)\n", slotnum, i, wipslot->wip_nmerged);

    else
      debug(2, "clearing slot %d (%d)\n", slotnum, i);
    if(!(wipslot->wip_td == ((struct tdata *)NULL)))
    {
      fifo_add(wq->wq_donequeue, (void *)wipslot->wip_td);
      (wq->wq_wip + (signed long int)slotnum)->wip_td = (struct tdata *)(void *)0;
    }

  }
  signed int tmp_post$1 = wq->wq_next_batchid;
  wq->wq_next_batchid = wq->wq_next_batchid + 1;
  wq->wq_lastdonebatch = tmp_post$1;
  signed int return_value_fifo_len$2;
  return_value_fifo_len$2=fifo_len(wq->wq_donequeue);
  debug(2, "phase one done: donequeue has %d items\n", return_value_fifo_len$2);
}

// find_iidesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 197
static struct iidesc * find_iidesc(struct tdata *td, struct iidesc_match *match)
{
  match->iim_ret = (struct iidesc *)(void *)0;
  iter_iidescs_by_name(td, match->iim_name, matching_iidesc, (void *)match);
  return match->iim_ret;
}

// findelfsecidx
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 434
signed int findelfsecidx(struct _Elf *elf, const char *file, const char *tofind)
{
  struct _Elf_Scn *scn = (struct _Elf_Scn *)(void *)0;
  struct anonymous$8 ehdr;
  struct anonymous$4 shdr;
  struct anonymous$8 *return_value_gelf_getehdr$1;
  return_value_gelf_getehdr$1=gelf_getehdr(elf, &ehdr);
  if(return_value_gelf_getehdr$1 == ((struct anonymous$8 *)NULL))
    elfterminate(file, "Couldn't read ehdr");

  unsigned long int return_value_elf_ndxscn$5;
  do
  {
    scn=elf_nextscn(elf, scn);
    if(scn == ((struct _Elf_Scn *)NULL))
      break;

    char *name;
    struct anonymous$4 *return_value_gelf_getshdr$3;
    return_value_gelf_getshdr$3=gelf_getshdr(scn, &shdr);
    if(return_value_gelf_getshdr$3 == ((struct anonymous$4 *)NULL))
    {
      unsigned long int return_value_elf_ndxscn$2;
      return_value_elf_ndxscn$2=elf_ndxscn(scn);
      elfterminate(file, "Couldn't read header for section %d", return_value_elf_ndxscn$2);
    }

    name=elf_strptr(elf, (unsigned long int)ehdr.e_shstrndx, (unsigned long int)shdr.sh_name);
    if(name == ((char *)NULL))
    {
      unsigned long int return_value_elf_ndxscn$4;
      return_value_elf_ndxscn$4=elf_ndxscn(scn);
      elfterminate(file, "Couldn't get name for section %d", return_value_elf_ndxscn$4);
    }

    signed int return_value_strcmp$6;
    return_value_strcmp$6=strcmp(name, tofind);
    if(return_value_strcmp$6 == 0)
    {
      return_value_elf_ndxscn$5=elf_ndxscn(scn);
      return (signed int)return_value_elf_ndxscn$5;
    }

  }
  while((_Bool)1);
  return -1;
}

// free_ardef
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 196
static void free_ardef(struct tdesc *tdp)
{
  free((void *)tdp->t_data.ardef);
}

// free_elist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 218
static void free_elist(struct tdesc *tdp)
{
  struct elist *el = tdp->t_data.emem;
  struct elist *oel;
  while(!(el == ((struct elist *)NULL)))
  {
    oel = el;
    el = el->el_next;
    if(!(oel->el_name == ((char *)NULL)))
      free((void *)oel->el_name);

    free((void *)oel);
  }
}

// free_intr
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 190
static void free_intr(struct tdesc *tdp)
{
  free((void *)tdp->t_data.intr);
}

// free_mlist
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 202
static void free_mlist(struct tdesc *tdp)
{
  struct mlist *ml = tdp->t_data.members;
  struct mlist *oml;
  while(!(ml == ((struct mlist *)NULL)))
  {
    oml = ml;
    ml = ml->ml_next;
    if(!(oml->ml_name == ((char *)NULL)))
      free((void *)oml->ml_name);

    free((void *)oml);
  }
}

// fwd_equiv
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 347
static signed int fwd_equiv(struct tdesc *ctdp, struct tdesc *mtdp)
{
  struct tdesc *defn = (signed int)ctdp->t_type == FORWARD ? mtdp : ctdp;
  _Bool tmp_if_expr$1;
  if((signed int)defn->t_type == STRUCT)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)defn->t_type == UNION ? (_Bool)1 : (_Bool)0;
  return (signed int)tmp_if_expr$1;
}

// fwd_redir
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 872
static signed int fwd_redir(struct tdesc *fwd, struct tdesc **fwdp, void *private)
{
  struct alist *map = (struct alist *)private;
  void *defn;
  signed int return_value_alist_find$1;
  return_value_alist_find$1=alist_find(map, (void *)fwd, (void **)&defn);
  if(return_value_alist_find$1 == 0)
    return 0;

  else
  {
    const char *return_value_tdesc_name$2;
    return_value_tdesc_name$2=tdesc_name((struct tdesc *)defn);
    debug(3, "Redirecting an edge to %s\n", return_value_tdesc_name$2);
    *fwdp = (struct tdesc *)defn;
    return 1;
  }
}

// get_ctt_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 667
static void get_ctt_size(struct ctf_type *ctt, unsigned long int *sizep, unsigned long int *incrementp)
{
  if((signed int)ctt->_u._size == 0xffff)
  {
    *sizep = (unsigned long int)((unsigned long int)ctt->ctt_lsizehi << 32 | (unsigned long int)ctt->ctt_lsizelo);
    *incrementp = sizeof(struct ctf_type) /*16ul*/ ;
  }

  else
  {
    *sizep = (unsigned long int)ctt->_u._size;
    *incrementp = sizeof(struct ctf_stype) /*8ul*/ ;
  }
}

// get_kind_v1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 47
static unsigned short int get_kind_v1(unsigned short int info)
{
  return (unsigned short int)(((signed int)info & 0xf000) >> 12);
}

// get_kind_v2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 53
static unsigned short int get_kind_v2(unsigned short int info)
{
  return (unsigned short int)(((signed int)info & 0xf800) >> 11);
}

// get_mapping
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 191
static signed int get_mapping(struct alist *ta, signed int srcid)
{
  void *ltgtid;
  signed int return_value_alist_find$1;
  return_value_alist_find$1=alist_find(ta, (void *)(unsigned long int)srcid, (void **)&ltgtid);
  if(!(return_value_alist_find$1 == 0))
    return (signed int)(unsigned long int)ltgtid;

  else
    return 0;
}

// get_root_v1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 59
static unsigned short int get_root_v1(unsigned short int info)
{
  return (unsigned short int)(((signed int)info & 0x0800) >> 11);
}

// get_root_v2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 65
static unsigned short int get_root_v2(unsigned short int info)
{
  return (unsigned short int)(((signed int)info & 0x0400) >> 10);
}

// get_vlen_v1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 71
static unsigned short int get_vlen_v1(unsigned short int info)
{
  return (unsigned short int)((signed int)info & 0x07ff);
}

// get_vlen_v2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 77
static unsigned short int get_vlen_v2(unsigned short int info)
{
  return (unsigned short int)((signed int)info & 0x3ff);
}

// handle_sig
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 590
static void handle_sig(signed int sig)
{
  terminate("Caught signal %d - exiting\n", sig);
}

// hash_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 43
void hash_add(struct hash *hash, void *key)
{
  signed int bucket;
  bucket=hash->h_hashfn(hash->h_nbuckets, key);
  list_add(&hash->h_buckets[(signed long int)bucket], key);
}

// hash_add_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 115
static signed int hash_add_cb(void *node, void *private)
{
  hash_add((struct hash *)private, node);
  return 0;
}

// hash_count
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 234
signed int hash_count(struct hash *hash)
{
  signed int num;
  signed int i;
  num = 0;
  i = 0;
  signed int return_value_list_count$1;
  for( ; !(i >= hash->h_nbuckets); i = i + 1)
  {
    return_value_list_count$1=list_count(hash->h_buckets[(signed long int)i]);
    num = num + return_value_list_count$1;
  }
  return num;
}

// hash_def_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 68
static signed int hash_def_cmp(void *d1, void *d2)
{
  return (signed int)(d1 != d2);
}

// hash_def_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 61
static signed int hash_def_hash(signed int nbuckets, void *arg)
{
  unsigned long int data = (unsigned long int)arg;
  return (signed int)(data % (unsigned long int)nbuckets);
}

// hash_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 46
signed int hash_find(struct hash *hash, void *key, void **value)
{
  signed int ret;
  struct hash_data hd;
  hd.hd_hash = hash;
  hd.hd_fun = hash_find_first_cb;
  hd.hd_key = key;
  ret=hash_match(hash, key, hash_find_first_cb, (void *)&hd);
  if(!(value == ((void **)NULL)) && !(ret == 0))
    *value = hd.hd_ret;

  return ret;
}

// hash_find_first_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 186
static signed int hash_find_first_cb(void *node, void *arg)
{
  struct hash_data *hd = (struct hash_data *)arg;
  signed int return_value;
  return_value=hd->hd_hash->h_cmp(hd->hd_key, node);
  if(return_value == 0)
  {
    hd->hd_ret = node;
    return -1;
  }

  else
    return 0;
}

// hash_find_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 169
signed int hash_find_iter(struct hash *hash, void *key, signed int (*fun)(void *, void *), void *private)
{
  signed int bucket;
  bucket=hash->h_hashfn(hash->h_nbuckets, key);
  struct hash_data hd;
  hd.hd_hash = hash;
  hd.hd_fun = fun;
  hd.hd_key = key;
  hd.hd_private = private;
  signed int return_value_list_iter$1;
  return_value_list_iter$1=list_iter(hash->h_buckets[(signed long int)bucket], hash_find_list_cb, (void *)&hd);
  return return_value_list_iter$1;
}

// hash_find_list_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 153
static signed int hash_find_list_cb(void *node, void *arg)
{
  struct hash_data *hd = (struct hash_data *)arg;
  signed int cbrc;
  signed int rc = 0;
  signed int return_value;
  return_value=hd->hd_hash->h_cmp(hd->hd_key, node);
  if(return_value == 0)
  {
    cbrc=hd->hd_fun(node, hd->hd_private);
    if(!(cbrc >= 0))
      return cbrc;

    rc = rc + cbrc;
  }

  return rc;
}

// hash_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 53
void hash_free(struct hash *hash, void (*datafree)(void *, void *), void *private)
{
  signed int i;
  if(!(hash == ((struct hash *)NULL)))
  {
    i = 0;
    for( ; !(i >= hash->h_nbuckets); i = i + 1)
      list_free(hash->h_buckets[(signed long int)i], datafree, private);
    free((void *)hash->h_buckets);
    free((void *)hash);
  }

}

// hash_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 48
signed int hash_iter(struct hash *hash, signed int (*fun)(void *, void *), void *private)
{
  signed int cumrc = 0;
  signed int cbrc;
  signed int i = 0;
  for( ; !(i >= hash->h_nbuckets); i = i + 1)
    if(!(hash->h_buckets[(signed long int)i] == ((struct list *)NULL)))
    {
      cbrc=list_iter(hash->h_buckets[(signed long int)i], fun, private);
      if(!(cbrc >= 0))
        return cbrc;

      cumrc = cumrc + cbrc;
    }

  return cumrc;
}

// hash_match
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 144
signed int hash_match(struct hash *hash, void *key, signed int (*fun)(void *, void *), void *private)
{
  signed int bucket;
  bucket=hash->h_hashfn(hash->h_nbuckets, key);
  signed int return_value_list_iter$1;
  return_value_list_iter$1=list_iter(hash->h_buckets[(signed long int)bucket], fun, private);
  return (signed int)(return_value_list_iter$1 < 0);
}

// hash_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 122
void hash_merge(struct hash *to, struct hash *from)
{
  hash_iter(from, hash_add_cb, (void *)to);
}

// hash_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 75
signed int hash_name(signed int nbuckets, const char *name)
{
  const char *c;
  unsigned long int g;
  signed int h = 0;
  c = name;
  for( ; !(*c == 0); c = c + 1l)
  {
    h = (h << 4) + (signed int)*c;
    g = (unsigned long int)((unsigned int)h & 0xf0000000);
    if(!(g == 0ul))
    {
      h = h ^ (signed int)(g >> 24);
      h = h ^ (signed int)g;
    }

  }
  return h % nbuckets;
}

// hash_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 42
struct hash * hash_new(signed int nbuckets, signed int (*hashfn)(signed int, void *), signed int (*cmp)(void *, void *))
{
  struct hash *hash;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct hash) /*32ul*/ );
  hash = (struct hash *)return_value_xmalloc$1;
  void *return_value_xcalloc$2;
  return_value_xcalloc$2=xcalloc(sizeof(struct list *) /*8ul*/  * (unsigned long int)nbuckets);
  hash->h_buckets = (struct list **)return_value_xcalloc$2;
  hash->h_nbuckets = nbuckets;
  hash->h_hashfn = hashfn != ((signed int (*)(signed int, void *))NULL) ? hashfn : hash_def_hash;
  hash->h_cmp = cmp != ((signed int (*)(void *, void *))NULL) ? cmp : hash_def_cmp;
  return hash;
}

// hash_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 135
void hash_remove(struct hash *hash, void *key)
{
  signed int bucket;
  bucket=hash->h_hashfn(hash->h_nbuckets, key);
  list_remove(&hash->h_buckets[(signed long int)bucket], key, hash_remove_cb, (void *)hash);
}

// hash_remove_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.c line 128
static signed int hash_remove_cb(void *key1, void *key2, void *arg)
{
  struct hash *hash = (struct hash *)arg;
  signed int return_value;
  return_value=hash->h_cmp(key1, key2);
  return return_value;
}

// hash_stats
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/hash.h line 52
void hash_stats(struct hash *hash, signed int verbose)
{
  signed int min;
  min=list_count(hash->h_buckets[(signed long int)0]);
  signed int minidx = 0;
  signed int max = min;
  signed int maxidx = 0;
  signed int tot = min;
  signed int count;
  signed int i;
  if(!(min == 0) && !(verbose == 0))
    printf("%3d: %d\n", 0, min);

  i = 1;
  for( ; !(i >= hash->h_nbuckets); i = i + 1)
  {
    count=list_count(hash->h_buckets[(signed long int)i]);
    if(!(count >= min))
    {
      min = count;
      minidx = i;
    }

    if(!(max >= count))
    {
      max = count;
      maxidx = i;
    }

    if(!(count == 0) && !(verbose == 0))
      printf("%3d: %d\n", i, count);

    tot = tot + count;
  }
  printf("Hash statistics:\n");
  printf(" Buckets: %d\n", hash->h_nbuckets);
  printf(" Items  : %d\n", tot);
  printf(" Min/Max: %d in #%d, %d in #%d\n", min, minidx, max, maxidx);
  printf(" Average: %5.2f\n", (float)tot / (float)hash->h_nbuckets);
}

// ignore_symbol
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/symbol.h line 38
signed int ignore_symbol(struct anonymous$5 *sym, const char *name)
{
  unsigned char type = (unsigned char)((signed int)sym->st_info & 0xf);
  _Bool tmp_if_expr$1;
  if((signed int)sym->st_shndx == 0)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = sym->st_name == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$4;
  signed int return_value_strcmp$3;
  if(tmp_if_expr$1)
    return 1;

  else
  {
    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(name, "_START_");
    if(return_value_strcmp$2 == 0)
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      return_value_strcmp$3=strcmp(name, "_END_");
      tmp_if_expr$4 = return_value_strcmp$3 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
      return 1;

    else
      if((signed int)type == 1)
      {
        if(!((signed int)sym->st_shndx == 0xfff1))
          goto __CPROVER_DUMP_L7;

        if(!(sym->st_value == 0ul))
          goto __CPROVER_DUMP_L7;

        return 1;
      }

      else
      {

      __CPROVER_DUMP_L7:
        ;
        return 0;
      }
  }
}

// iiburst_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 143
static void iiburst_free(struct iiburst *iiburst)
{
  free((void *)iiburst->iib_funcs);
  free((void *)iiburst->iib_objts);
  list_free(iiburst->iib_types, (void (*)(void *, void *))(void *)0, (void *)0);
  free((void *)iiburst);
}

// iiburst_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 118
static struct iiburst * iiburst_new(struct tdata *td, signed int max)
{
  struct iiburst *iiburst;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct iiburst) /*64ul*/ );
  iiburst = (struct iiburst *)return_value_xcalloc$1;
  iiburst->iib_td = td;
  void *return_value_xcalloc$2;
  return_value_xcalloc$2=xcalloc(sizeof(struct iidesc *) /*8ul*/  * (unsigned long int)max);
  iiburst->iib_funcs = (struct iidesc **)return_value_xcalloc$2;
  iiburst->iib_nfuncs = 0;
  void *return_value_xcalloc$3;
  return_value_xcalloc$3=xcalloc(sizeof(struct iidesc *) /*8ul*/  * (unsigned long int)max);
  iiburst->iib_objts = (struct iidesc **)return_value_xcalloc$3;
  iiburst->iib_nobjts = 0;
  return iiburst;
}

// iiburst_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 130
static void iiburst_types(struct iiburst *iiburst)
{
  struct tdtrav_data tdtd;
  tdtrav_init(&tdtd, &iiburst->iib_td->td_curvgen, (signed int (**)(struct tdesc *, struct tdesc **, void *))(void *)0, burst_types_cbs, (signed int (**)(struct tdesc *, struct tdesc **, void *))(void *)0, (void *)iiburst);
  iiburst->iib_tdtd = &tdtd;
  hash_iter(iiburst->iib_td->td_iihash, burst_iitypes, (void *)iiburst);
}

// iidesc_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 87
void iidesc_add(struct hash *hash, struct iidesc *new)
{
  struct iidesc_find find;
  find.iif_tgt = new;
  find.iif_ret = (struct iidesc *)(void *)0;
  hash_match(hash, (void *)new, iidesc_cmp, (void *)&find);
  if(!(find.iif_ret == ((struct iidesc *)NULL)))
  {
    struct iidesc *old = find.iif_ret;
    struct iidesc tmp;
    bcopy((const void *)old, (void *)&tmp, sizeof(struct iidesc) /*56ul*/ );
    bcopy((const void *)new, (void *)old, sizeof(struct iidesc) /*56ul*/ );
    bcopy((const void *)&tmp, (void *)new, sizeof(struct iidesc) /*56ul*/ );
    iidesc_free((void *)new, (void *)0);
    goto __CPROVER_DUMP_L2;
  }

  hash_add(hash, (void *)new);

__CPROVER_DUMP_L2:
  ;
}

// iidesc_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 71
static signed int iidesc_cmp(void *arg1, void *arg2)
{
  struct iidesc *src = (struct iidesc *)arg1;
  struct iidesc_find *find = (struct iidesc_find *)arg2;
  struct iidesc *tgt = find->iif_tgt;
  _Bool tmp_if_expr$2;
  signed int return_value_streq$1;
  if(!(src->ii_type == tgt->ii_type))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_streq$1=streq(src->ii_name, tgt->ii_name);
    tmp_if_expr$2 = !(return_value_streq$1 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$2)
    return 0;

  else
  {
    find->iif_ret = src;
    return -1;
  }
}

// iidesc_count_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 179
signed int iidesc_count_type(void *data, void *private)
{
  struct iidesc *ii = (struct iidesc *)data;
  enum iitype match = (enum iitype)private;
  return (signed int)(ii->ii_type == match);
}

// iidesc_dump
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 170
signed int iidesc_dump(struct iidesc *ii)
{
  char *tmp_if_expr$1;
  if(!(ii->ii_name == ((char *)NULL)))
    tmp_if_expr$1 = ii->ii_name;

  else
    tmp_if_expr$1 = "(anon)";
  printf("type: %d  name %s\n", ii->ii_type, tmp_if_expr$1);
  return 0;
}

// iidesc_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 123
struct iidesc * iidesc_dup(struct iidesc *src)
{
  struct iidesc *tgt;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct iidesc) /*56ul*/ );
  tgt = (struct iidesc *)return_value_xmalloc$1;
  bcopy((const void *)src, (void *)tgt, sizeof(struct iidesc) /*56ul*/ );
  char *tmp_if_expr$3;
  char *return_value_xstrdup$2;
  if(!(src->ii_name == ((char *)NULL)))
  {
    return_value_xstrdup$2=xstrdup(src->ii_name);
    tmp_if_expr$3 = return_value_xstrdup$2;
  }

  else
    tmp_if_expr$3 = (char *)(void *)0;
  tgt->ii_name = tmp_if_expr$3;
  char *tmp_if_expr$5;
  char *return_value_xstrdup$4;
  if(!(src->ii_owner == ((char *)NULL)))
  {
    return_value_xstrdup$4=xstrdup(src->ii_owner);
    tmp_if_expr$5 = return_value_xstrdup$4;
  }

  else
    tmp_if_expr$5 = (char *)(void *)0;
  tgt->ii_owner = tmp_if_expr$5;
  if(!(tgt->ii_nargs == 0))
  {
    void *return_value_xmalloc$6;
    return_value_xmalloc$6=xmalloc(sizeof(struct tdesc *) /*8ul*/  * (unsigned long int)tgt->ii_nargs);
    tgt->ii_args = (struct tdesc **)return_value_xmalloc$6;
    bcopy((const void *)src->ii_args, (void *)tgt->ii_args, sizeof(struct tdesc *) /*8ul*/  * (unsigned long int)tgt->ii_nargs);
  }

  return tgt;
}

// iidesc_dup_rename
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 143
struct iidesc * iidesc_dup_rename(struct iidesc *src, const char *name, const char *owner)
{
  struct iidesc *tgt;
  tgt=iidesc_dup(src);
  free((void *)tgt->ii_name);
  free((void *)tgt->ii_owner);
  char *tmp_if_expr$2;
  char *return_value_xstrdup$1;
  if(!(name == ((const char *)NULL)))
  {
    return_value_xstrdup$1=xstrdup(name);
    tmp_if_expr$2 = return_value_xstrdup$1;
  }

  else
    tmp_if_expr$2 = (char *)(void *)0;
  tgt->ii_name = tmp_if_expr$2;
  char *tmp_if_expr$4;
  char *return_value_xstrdup$3;
  if(!(owner == ((const char *)NULL)))
  {
    return_value_xstrdup$3=xstrdup(owner);
    tmp_if_expr$4 = return_value_xstrdup$3;
  }

  else
    tmp_if_expr$4 = (char *)(void *)0;
  tgt->ii_owner = tmp_if_expr$4;
  return tgt;
}

// iidesc_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 157
void iidesc_free(void *arg, void *private)
{
  struct iidesc *idp = (struct iidesc *)arg;
  if(!(idp->ii_name == ((char *)NULL)))
    free((void *)idp->ii_name);

  if(!(idp->ii_nargs == 0))
    free((void *)idp->ii_args);

  if(!(idp->ii_owner == ((char *)NULL)))
    free((void *)idp->ii_owner);

  free((void *)idp);
}

// iidesc_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 59
signed int iidesc_hash(signed int nbuckets, void *arg)
{
  struct iidesc *ii = (struct iidesc *)arg;
  signed int h = 0;
  signed int return_value_hash_name$1;
  if(!(ii->ii_name == ((char *)NULL)))
  {
    return_value_hash_name$1=hash_name(nbuckets, ii->ii_name);
    return return_value_hash_name$1;
  }

  else
    return h;
}

// iidesc_match
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 606
static signed int iidesc_match(void *data, void *arg)
{
  struct iidesc *node = (struct iidesc *)data;
  struct iifind_data *iif = (struct iifind_data *)arg;
  signed int i;
  _Bool tmp_if_expr$2;
  signed int return_value_streq$1;
  if(!(node->ii_type == iif->iif_template->ii_type))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_streq$1=streq(node->ii_name, iif->iif_template->ii_name);
    tmp_if_expr$2 = !(return_value_streq$1 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$3;
  if(tmp_if_expr$2)
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = node->ii_dtype->t_id != iif->iif_newidx ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$5;
  signed int return_value_streq$4;
  char *tmp_if_expr$7;
  if(tmp_if_expr$3)
    return 0;

  else
  {
    if((signed int)node->ii_type == II_SVAR)
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = (signed int)node->ii_type == II_SFUN ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
    {
      return_value_streq$4=streq(node->ii_owner, iif->iif_template->ii_owner);
      if(!(return_value_streq$4 == 0))
        goto __CPROVER_DUMP_L8;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L8:
      ;
      if(!(node->ii_nargs == iif->iif_template->ii_nargs))
        return 0;

      else
      {
        i = 0;
        for( ; !(i >= node->ii_nargs); i = i + 1)
        {
          signed int return_value_get_mapping$6;
          return_value_get_mapping$6=get_mapping(iif->iif_ta, iif->iif_template->ii_args[(signed long int)i]->t_id);
          if(!(return_value_get_mapping$6 == node->ii_args[(signed long int)i]->t_id))
            return 0;

        }
        if(!(iif->iif_refmerge == 0))
        {
          if(!((signed int)iif->iif_template->ii_type == II_GFUN) && !((signed int)iif->iif_template->ii_type == II_SFUN) && !((signed int)iif->iif_template->ii_type == II_GVAR) && !((signed int)iif->iif_template->ii_type == II_SVAR))
          {
            if((signed int)iif->iif_template->ii_type == II_NOT || (signed int)iif->iif_template->ii_type == II_PSYM || (signed int)iif->iif_template->ii_type == II_SOU || (signed int)iif->iif_template->ii_type == II_TYPE)
              goto __CPROVER_DUMP_L16;

            goto __CPROVER_DUMP_L16;
          }

          if(!(iif->iif_template->ii_owner == ((char *)NULL)))
            tmp_if_expr$7 = iif->iif_template->ii_owner;

          else
            tmp_if_expr$7 = "NULL";
          debug(3, "suppressing duping of %d %s from %s\n", iif->iif_template->ii_type, iif->iif_template->ii_name, tmp_if_expr$7);
          return 0;
        }

        else
        {

        __CPROVER_DUMP_L16:
          ;
          return -1;
        }
      }
    }
  }
}

// iidesc_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 354
struct iidesc * iidesc_new(char *name)
{
  struct iidesc *ii;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct iidesc) /*56ul*/ );
  ii = (struct iidesc *)return_value_xcalloc$1;
  if(!(name == ((char *)NULL)))
    ii->ii_name=xstrdup(name);

  return ii;
}

// iidesc_stats
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 363
void iidesc_stats(struct hash *ii)
{
  signed int return_value_hash_iter$1;
  return_value_hash_iter$1=hash_iter(ii, iidesc_count_type, (void *)II_GFUN);
  signed int return_value_hash_iter$2;
  return_value_hash_iter$2=hash_iter(ii, iidesc_count_type, (void *)II_SFUN);
  signed int return_value_hash_iter$3;
  return_value_hash_iter$3=hash_iter(ii, iidesc_count_type, (void *)II_GVAR);
  signed int return_value_hash_iter$4;
  return_value_hash_iter$4=hash_iter(ii, iidesc_count_type, (void *)II_SVAR);
  signed int return_value_hash_iter$5;
  return_value_hash_iter$5=hash_iter(ii, iidesc_count_type, (void *)II_TYPE);
  signed int return_value_hash_iter$6;
  return_value_hash_iter$6=hash_iter(ii, iidesc_count_type, (void *)II_SOU);
  printf("GFun: %5d SFun: %5d GVar: %5d SVar: %5d T %5d SOU: %5d\n", return_value_hash_iter$1, return_value_hash_iter$2, return_value_hash_iter$3, return_value_hash_iter$4, return_value_hash_iter$5, return_value_hash_iter$6);
}

// iitraverse
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 59
signed int iitraverse(struct iidesc *ii, signed int *vgenp, signed int (**firstops)(struct tdesc *, struct tdesc **, void *), signed int (**preops)(struct tdesc *, struct tdesc **, void *), signed int (**postops)(struct tdesc *, struct tdesc **, void *), void *private)
{
  struct tdtrav_data tdtd;
  tdtrav_init(&tdtd, vgenp, firstops, preops, postops, private);
  signed int return_value_iitraverse_td$1;
  return_value_iitraverse_td$1=iitraverse_td((void *)ii, (void *)&tdtd);
  return return_value_iitraverse_td$1;
}

// iitraverse_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 61
signed int iitraverse_hash(struct hash *iihash, signed int *vgenp, signed int (**firstops)(struct tdesc *, struct tdesc **, void *), signed int (**preops)(struct tdesc *, struct tdesc **, void *), signed int (**postops)(struct tdesc *, struct tdesc **, void *), void *private)
{
  struct tdtrav_data tdtd;
  tdtrav_init(&tdtd, vgenp, firstops, preops, postops, private);
  signed int return_value_hash_iter$1;
  return_value_hash_iter$1=hash_iter(iihash, iitraverse_td, (void *)&tdtd);
  return return_value_hash_iter$1;
}

// iitraverse_td
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 63
signed int iitraverse_td(void *arg1, void *arg2)
{
  struct iidesc *ii = (struct iidesc *)arg1;
  struct tdtrav_data *tdtd = (struct tdtrav_data *)arg2;
  signed int i;
  signed int rc;
  rc=tdtraverse(ii->ii_dtype, &ii->ii_dtype, tdtd);
  if(!(rc >= 0))
    return rc;

  else
  {
    i = 0;
    for( ; !(i >= ii->ii_nargs); i = i + 1)
    {
      rc=tdtraverse(ii->ii_args[(signed long int)i], &ii->ii_args[(signed long int)i], tdtd);
      if(!(rc >= 0))
        return rc;

    }
    return 1;
  }
}

// init_phase_two
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 334
static void init_phase_two(struct workqueue *wq)
{
  signed int num;
  num=fifo_len(wq->wq_donequeue);
  wq->wq_ninqueue = num;
  for( ; !(num == 1); num = num / 2 + num % 2)
    wq->wq_ninqueue = wq->wq_ninqueue + num / 2;
  signed int return_value_fifo_len$1;
  return_value_fifo_len$1=fifo_len(wq->wq_queue);
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c */
  assert(return_value_fifo_len$1 == 0);
  fifo_free(wq->wq_queue, (void (*)(void *))(void *)0);
  wq->wq_queue = wq->wq_donequeue;
}

// init_symtab
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 110
static signed int init_symtab(struct ctf_file *fp, const struct ctf_header *hp, const struct ctf_sect *sp, const struct ctf_sect *strp)
{
  const unsigned char *symp = (const unsigned char *)sp->cts_data;
  unsigned int *xp = fp->ctf_sxlate;
  unsigned int *xend = xp + (signed long int)fp->ctf_nsyms;
  unsigned int objtoff = hp->cth_objtoff;
  unsigned int funcoff = hp->cth_funcoff;
  unsigned short int info;
  unsigned short int vlen;
  struct anonymous$5 sym;
  struct anonymous$5 *gsp;
  const char *name;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$3;
  signed int return_value_strcmp$2;
  _Bool tmp_if_expr$5;
  signed int return_value_strcmp$4;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$6;
  for( ; !(xp >= xend); symp = symp + (signed long int)sp->cts_entsize)
  {
    if(sp->cts_entsize == sizeof(struct anonymous$24) /*16ul*/ )
      gsp=sym_to_gelf((struct anonymous$24 *)(unsigned long int)symp, &sym);

    else
      gsp = (struct anonymous$5 *)(unsigned long int)symp;
    if(!((unsigned long int)gsp->st_name >= strp->cts_size))
      name = (const char *)strp->cts_data + (signed long int)gsp->st_name;

    else
      name = _CTF_NULLSTR;
    if(gsp->st_name == 0u)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)gsp->st_shndx == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_strcmp$2=strcmp(name, "_START_");
      tmp_if_expr$3 = return_value_strcmp$2 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      return_value_strcmp$4=strcmp(name, "_END_");
      tmp_if_expr$5 = return_value_strcmp$4 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
      *xp = -1u;

    else
      switch((signed int)gsp->st_info & 0xf)
      {
        case 1:
        {
          if(objtoff >= hp->cth_funcoff)
            tmp_if_expr$7 = (_Bool)1;

          else
          {
            if((signed int)gsp->st_shndx == 0xfff1)
              tmp_if_expr$6 = gsp->st_value == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$6 = (_Bool)0;
            tmp_if_expr$7 = tmp_if_expr$6 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$7)
          {
            *xp = -1u;
            break;
          }

          *xp = objtoff;
          objtoff = objtoff + (unsigned int)sizeof(unsigned short int) /*2ul*/ ;
          break;
        }
        case 2:
        {
          if(funcoff >= hp->cth_typeoff)
          {
            *xp = -1u;
            break;
          }

          *xp = funcoff;
          info = *((unsigned short int *)((unsigned long int)fp->ctf_buf + (unsigned long int)funcoff));
          vlen=fp->ctf_fileops->ctfo_get_vlen(info);
        }
        default:
          *xp = -1u;
      }
    xp = xp + 1l;
  }
  ctf_dprintf("loaded %lu symtab entries\n", fp->ctf_nsyms);
  return 0;
}

// init_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 199
static signed int init_types(struct ctf_file *fp, const struct ctf_header *cth)
{
  const struct ctf_type *tbuf = (struct ctf_type *)(fp->ctf_buf + (signed long int)cth->cth_typeoff);
  const struct ctf_type *tend = (struct ctf_type *)(fp->ctf_buf + (signed long int)cth->cth_stroff);
  unsigned long int pop[32l] = { (unsigned long int)0, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul };
  const struct ctf_type *tp;
  struct ctf_hash *hp;
  unsigned short int id;
  unsigned short int dst;
  unsigned int *xp;
  signed int child = (signed int)(cth->cth_parname != (unsigned int)0);
  signed int nlstructs = 0;
  signed int nlunions = 0;
  signed int err;
  tp = tbuf;
  _Bool tmp_if_expr$1;
  if(!(tp >= tend))
  {
    unsigned short int kind;
    kind=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
    unsigned long int vlen;
    unsigned short int return_value;
    return_value=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
    vlen = (unsigned long int)return_value;
    signed long int size;
    signed long int increment;
    unsigned long int vbytes;
    unsigned int n;
    ctf_get_ctt_size(fp, tp, &size, &increment);
    if((signed int)kind == 1 || (signed int)kind == 2)
    {
      vbytes = sizeof(unsigned int) /*4ul*/ ;
      vbytes = sizeof(struct ctf_array) /*8ul*/ ;
      vbytes = sizeof(unsigned short int) /*2ul*/  * (vlen + (vlen & (unsigned long int)1));
      if(fp->ctf_version == 1 || !(size >= 8192l))
      {
        struct ctf_member *mp = (struct ctf_member *)((unsigned long int)tp + (unsigned long int)increment);
        vbytes = sizeof(struct ctf_member) /*8ul*/  * vlen;
        n = (unsigned int)vlen;
        if(!(n == 0u))
        {
          child = child | (signed int)((signed int)mp->ctm_type > 0x7fff);
          n = n - 1u;
          mp = mp + 1l;
        }

      }

      else
      {
        struct ctf_lmember *lmp = (struct ctf_lmember *)((unsigned long int)tp + (unsigned long int)increment);
        vbytes = sizeof(struct ctf_lmember) /*16ul*/  * vlen;
        n = (unsigned int)vlen;
        if(!(n == 0u))
        {
          child = child | (signed int)((signed int)lmp->ctlm_type > 0x7fff);
          n = n - 1u;
          lmp = lmp + 1l;
        }

      }
      vbytes = sizeof(struct ctf_enum) /*8ul*/  * vlen;
      if((signed int)tp->_u._type == 0)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)tp->_u._type >= 31 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        pop[(signed long int)6] = pop[(signed long int)6] + 1ul;

      else
        pop[(signed long int)tp->_u._type] = pop[(signed long int)tp->_u._type] + 1ul;
      vbytes = (unsigned long int)0;
      child = child | (signed int)((signed int)tp->_u._type > 0x7fff);
      vbytes = (unsigned long int)0;
    }

    ctf_dprintf("detected invalid CTF kind -- %u\n", kind);
    return 1007;
    tp = (struct ctf_type *)((unsigned long int)tp + (unsigned long int)increment + vbytes);
    pop[(signed long int)kind] = pop[(signed long int)kind] + 1ul;
    fp->ctf_typemax = fp->ctf_typemax + 1ul;
  }

  if(!(child == 0))
  {
    ctf_dprintf("CTF container %p is a child\n", (void *)fp);
    fp->ctf_flags = fp->ctf_flags | (unsigned int)0x0002;
  }

  else
    ctf_dprintf("CTF container %p is a parent\n", (void *)fp);
  err=ctf_hash_create(&fp->ctf_structs, pop[(signed long int)6]);
  _Bool tmp_if_expr$4;
  unsigned int *tmp_post$5;
  unsigned long int return_value_strlen$7;
  signed int return_value_ctf_type_encoding$6;
  unsigned long int return_value_strlen$8;
  struct ctf_helem *return_value_ctf_hash_lookup$9;
  const char *return_value_ctf_strptr$14;
  signed int return_value_strcmp$15;
  if(!(err == 0))
    return err;

  else
  {
    err=ctf_hash_create(&fp->ctf_unions, pop[(signed long int)7]);
    if(!(err == 0))
      return err;

    else
    {
      err=ctf_hash_create(&fp->ctf_enums, pop[(signed long int)8]);
      if(!(err == 0))
        return err;

      else
      {
        err=ctf_hash_create(&fp->ctf_names, pop[(signed long int)1] + pop[(signed long int)2] + pop[(signed long int)5] + pop[(signed long int)10] + pop[(signed long int)3] + pop[(signed long int)11] + pop[(signed long int)12] + pop[(signed long int)13]);
        if(!(err == 0))
          return err;

        else
        {
          void *return_value_ctf_alloc$2;
          return_value_ctf_alloc$2=ctf_alloc(sizeof(unsigned int) /*4ul*/  * (fp->ctf_typemax + (unsigned long int)1));
          fp->ctf_txlate = (unsigned int *)return_value_ctf_alloc$2;
          void *return_value_ctf_alloc$3;
          return_value_ctf_alloc$3=ctf_alloc(sizeof(unsigned short int) /*2ul*/  * (fp->ctf_typemax + (unsigned long int)1));
          fp->ctf_ptrtab = (unsigned short int *)return_value_ctf_alloc$3;
          if(fp->ctf_txlate == ((unsigned int *)NULL))
            tmp_if_expr$4 = (_Bool)1;

          else
            tmp_if_expr$4 = fp->ctf_ptrtab == (unsigned short int *)(void *)0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$4)
            return 11;

          else
          {
            xp = fp->ctf_txlate;
            tmp_post$5 = xp;
            xp = xp + 1l;
            *tmp_post$5 = (unsigned int)0;
            bzero((void *)fp->ctf_txlate, sizeof(unsigned int) /*4ul*/  * (fp->ctf_typemax + (unsigned long int)1));
            bzero((void *)fp->ctf_ptrtab, sizeof(unsigned short int) /*2ul*/  * (fp->ctf_typemax + (unsigned long int)1));
            id = (unsigned short int)1;
            tp = tbuf;
            if(!(tp >= tend))
            {
              unsigned short int init_types$$1$$3$$1$$kind;
              init_types$$1$$3$$1$$kind=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
              unsigned long int init_types$$1$$3$$1$$vlen;
              unsigned short int return_value_1;
              return_value_1=fp->ctf_fileops->ctfo_get_vlen(tp->ctt_info);
              init_types$$1$$3$$1$$vlen = (unsigned long int)return_value_1;
              signed long int init_types$$1$$3$$1$$size;
              signed long int init_types$$1$$3$$1$$increment;
              const char *name;
              unsigned long int init_types$$1$$3$$1$$vbytes;
              struct ctf_helem *hep;
              struct ctf_encoding cte;
              ctf_get_ctt_size(fp, tp, &init_types$$1$$3$$1$$size, &init_types$$1$$3$$1$$increment);
              name=ctf_strptr(fp, tp->ctt_name);
              if((signed int)init_types$$1$$3$$1$$kind == 1 || (signed int)init_types$$1$$3$$1$$kind == 2)
              {
                return_value_strlen$7=strlen(name);
                hep=ctf_hash_lookup(&fp->ctf_names, fp, name, return_value_strlen$7);
                if(hep == ((struct ctf_helem *)NULL))
                {
                  err=ctf_hash_insert(&fp->ctf_names, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                  if(!(err == 0) && !(err == 1018))
                    return err;

                }

                else
                {
                  return_value_ctf_type_encoding$6=ctf_type_encoding(fp, (signed long int)hep->h_type, &cte);
                  if(return_value_ctf_type_encoding$6 == 0)
                  {
                    if(cte.cte_bits == 0u)
                      hep->h_type = (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id);

                  }

                }
                init_types$$1$$3$$1$$vbytes = sizeof(unsigned int) /*4ul*/ ;
                init_types$$1$$3$$1$$vbytes = sizeof(struct ctf_array) /*8ul*/ ;
                err=ctf_hash_insert(&fp->ctf_names, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                if(!(err == 0) && !(err == 1018))
                  return err;

                init_types$$1$$3$$1$$vbytes = sizeof(unsigned short int) /*2ul*/  * (init_types$$1$$3$$1$$vlen + (init_types$$1$$3$$1$$vlen & (unsigned long int)1));
                err=ctf_hash_define(&fp->ctf_structs, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                if(!(err == 0) && !(err == 1018))
                  return err;

                if(fp->ctf_version == 1 || !(init_types$$1$$3$$1$$size >= 8192l))
                  init_types$$1$$3$$1$$vbytes = sizeof(struct ctf_member) /*8ul*/  * init_types$$1$$3$$1$$vlen;

                else
                {
                  init_types$$1$$3$$1$$vbytes = sizeof(struct ctf_lmember) /*16ul*/  * init_types$$1$$3$$1$$vlen;
                  nlstructs = nlstructs + 1;
                }
                err=ctf_hash_define(&fp->ctf_unions, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                if(!(err == 0) && !(err == 1018))
                  return err;

                if(fp->ctf_version == 1 || !(init_types$$1$$3$$1$$size >= 8192l))
                  init_types$$1$$3$$1$$vbytes = sizeof(struct ctf_member) /*8ul*/  * init_types$$1$$3$$1$$vlen;

                else
                {
                  init_types$$1$$3$$1$$vbytes = sizeof(struct ctf_lmember) /*16ul*/  * init_types$$1$$3$$1$$vlen;
                  nlunions = nlunions + 1;
                }
                err=ctf_hash_define(&fp->ctf_enums, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                if(!(err == 0) && !(err == 1018))
                  return err;

                init_types$$1$$3$$1$$vbytes = sizeof(struct ctf_enum) /*8ul*/  * init_types$$1$$3$$1$$vlen;
                err=ctf_hash_insert(&fp->ctf_names, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                if(!(err == 0) && !(err == 1018))
                  return err;

                init_types$$1$$3$$1$$vbytes = (unsigned long int)0;
                if((signed int)tp->_u._type == 6)
                {
                  hp = &fp->ctf_structs;
                  hp = &fp->ctf_unions;
                  hp = &fp->ctf_enums;
                }

                hp = &fp->ctf_structs;
                return_value_strlen$8=strlen(name);
                return_value_ctf_hash_lookup$9=ctf_hash_lookup(hp, fp, name, return_value_strlen$8);
                if(return_value_ctf_hash_lookup$9 == ((struct ctf_helem *)NULL))
                {
                  err=ctf_hash_insert(hp, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                  if(!(err == 0) && !(err == 1018))
                    return err;

                }

                init_types$$1$$3$$1$$vbytes = (unsigned long int)0;
                if((signed int)((signed int)tp->_u._type >= 32768) == child)
                {
                  if(fp->ctf_typemax >= (unsigned long int)(0x7fff & (signed int)tp->_u._type))
                    fp->ctf_ptrtab[(signed long int)((signed int)tp->_u._type & 0x7fff)] = id;

                }

                err=ctf_hash_insert(&fp->ctf_names, fp, (unsigned short int)(child != 0 ? (signed int)id | 0x8000 : (signed int)id), tp->ctt_name);
                if(!(err == 0) && !(err == 1018))
                  return err;

              }

              init_types$$1$$3$$1$$vbytes = (unsigned long int)0;
              *xp = (unsigned int)((unsigned long int)tp - (unsigned long int)fp->ctf_buf);
              tp = (struct ctf_type *)((unsigned long int)tp + (unsigned long int)init_types$$1$$3$$1$$increment + init_types$$1$$3$$1$$vbytes);
              xp = xp + 1l;
              id = id + 1;
            }

            ctf_dprintf("%lu total types processed\n", fp->ctf_typemax);
            unsigned int return_value_ctf_hash_size$10;
            return_value_ctf_hash_size$10=ctf_hash_size(&fp->ctf_enums);
            ctf_dprintf("%u enum names hashed\n", return_value_ctf_hash_size$10);
            unsigned int return_value_ctf_hash_size$11;
            return_value_ctf_hash_size$11=ctf_hash_size(&fp->ctf_structs);
            ctf_dprintf("%u struct names hashed (%d long)\n", return_value_ctf_hash_size$11, nlstructs);
            unsigned int return_value_ctf_hash_size$12;
            return_value_ctf_hash_size$12=ctf_hash_size(&fp->ctf_unions);
            ctf_dprintf("%u union names hashed (%d long)\n", return_value_ctf_hash_size$12, nlunions);
            unsigned int return_value_ctf_hash_size$13;
            return_value_ctf_hash_size$13=ctf_hash_size(&fp->ctf_names);
            ctf_dprintf("%u base type names hashed\n", return_value_ctf_hash_size$13);
            id = (unsigned short int)1;
            for( ; fp->ctf_typemax >= (unsigned long int)id; id = id + 1)
            {
              dst = fp->ctf_ptrtab[(signed long int)id];
              if(!((signed int)dst == 0))
              {
                tp = (struct ctf_type *)((unsigned long int)fp->ctf_buf + (unsigned long int)fp->ctf_txlate[(signed long int)id]);
                unsigned short int return_value_2;
                return_value_2=fp->ctf_fileops->ctfo_get_kind(tp->ctt_info);
                if((signed int)return_value_2 == 10)
                {
                  return_value_ctf_strptr$14=ctf_strptr(fp, tp->ctt_name);
                  return_value_strcmp$15=strcmp(return_value_ctf_strptr$14, "");
                  if(return_value_strcmp$15 == 0)
                  {
                    if((signed int)((signed int)tp->_u._type >= 32768) == child)
                    {
                      if(fp->ctf_typemax >= (unsigned long int)(0x7fff & (signed int)tp->_u._type))
                        fp->ctf_ptrtab[(signed long int)((signed int)tp->_u._type & 0x7fff)] = dst;

                    }

                  }

                }

              }

            }
            return 0;
          }
        }
      }
    }
  }
}

// isqualifier
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_lookup.c line 48
static signed int isqualifier(const char *s, unsigned long int len)
{
  signed int h = ((signed int)s[(signed long int)(len - (unsigned long int)1)] + (signed int)len) - 105;
  /* isqualifier::1::tag-qual */
struct qual
{
  // q_name
  const char *q_name;
  // q_len
  unsigned long int q_len;
};

/* */
  ;
  static struct qual qhash[21l] = { { .q_name="static", .q_len=(unsigned long int)6 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="volatile", .q_len=(unsigned long int)8 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="auto", .q_len=(unsigned long int)4 },
    { .q_name="extern", .q_len=(unsigned long int)6 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="const", .q_len=(unsigned long int)5 },
    { .q_name="register", .q_len=(unsigned long int)8 },
    { .q_name="", .q_len=(unsigned long int)0 },
    { .q_name="restrict", .q_len=(unsigned long int)8 },
    { .q_name="_Restrict", .q_len=(unsigned long int)9 } };
  struct qual *qp = &qhash[(signed long int)h];
  _Bool tmp_if_expr$1;
  if(h >= 0 && !((unsigned long int)h >= 21ul))
    tmp_if_expr$1 = len == qp->q_len ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  _Bool tmp_if_expr$3;
  signed int return_value_strncmp$2;
  if(tmp_if_expr$1)
  {
    return_value_strncmp$2=strncmp(qp->q_name, s, qp->q_len);
    tmp_if_expr$3 = return_value_strncmp$2 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  return (signed int)tmp_if_expr$3;
}

// iter_iidescs_by_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/iidesc.c line 112
void iter_iidescs_by_name(struct tdata *td, const char *name, signed int (*func)(void *, void *), void *data)
{
  struct iidesc tmpdesc;
  bzero((void *)&tmpdesc, sizeof(struct iidesc) /*56ul*/ );
  tmpdesc.ii_name=xstrdup(name);
  hash_match(td->td_iihash, (void *)&tmpdesc, func, data);
  free((void *)tmpdesc.ii_name);
}

// join_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 723
static void join_threads(struct workqueue *wq)
{
  signed int i = 0;
  for( ; !(i >= wq->wq_nthreads); i = i + 1)
    pthread_join(wq->wq_thread[(signed long int)i], (void **)(void *)0);
}

// label_info_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_labels.c line 115
static signed int label_info_cb(const char *lname, const struct ctf_lblinfo *linfo, void *arg)
{
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(lname, ((struct linfo_cb_arg *)arg)->lca_name);
  if(return_value_strcmp$1 == 0)
  {
    if(!(((struct linfo_cb_arg *)arg)->lca_info == ((struct ctf_lblinfo *)NULL)))
      bcopy((const void *)linfo, (void *)((struct linfo_cb_arg *)arg)->lca_info, sizeof(struct ctf_lblinfo) /*8ul*/ );

    return 1;
  }

  else
    return 0;
}

// list_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 42
void list_add(struct list **list, void *data)
{
  struct list *le;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct list) /*16ul*/ );
  le = (struct list *)return_value_xmalloc$1;
  le->l_data = data;
  le->l_next = *list;
  *list = le;
}

// list_concat
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 173
void list_concat(struct list **list1, struct list *list2)
{
  struct list *l;
  struct list *last;
  l = *list1;
  last = (struct list *)(void *)0;
  for( ; !(l == ((struct list *)NULL)); l = l->l_next)
    last = l;
  if(last == ((struct list *)NULL))
    *list1 = list2;

  else
    last->l_next = list2;
}

// list_count
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 49
signed int list_count(struct list *list)
{
  signed int return_value_list_iter$1;
  return_value_list_iter$1=list_iter(list, list_count_cb, (void *)0);
  return return_value_list_iter$1;
}

// list_count_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 138
static signed int list_count_cb(void *data, void *private)
{
  return 1;
}

// list_defcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 73
static signed int list_defcmp(void *d1, void *d2, void *private)
{
  return (signed int)(d1 != d2);
}

// list_empty
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 150
signed int list_empty(struct list *list)
{
  return (signed int)(list == (struct list *)(void *)0);
}

// list_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 156
void * list_find(struct list *list, void *tmpl, signed int (*cmp)(void *, void *))
{
  if(!(list == ((struct list *)NULL)))
  {
    signed int return_value;
    return_value=cmp(list->l_data, tmpl);
    if(return_value == 0)
      return list->l_data;

    list = list->l_next;
  }

  return (void *)0;
}

// list_first
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 167
void * list_first(struct list *list)
{
  void *tmp_if_expr$1;
  if(!(list == ((struct list *)NULL)))
    tmp_if_expr$1 = list->l_data;

  else
    tmp_if_expr$1 = (void *)0;
  return tmp_if_expr$1;
}

// list_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 45
void list_free(struct list *list, void (*datafree)(void *, void *), void *private)
{
  struct list *le;
  while(!(list == ((struct list *)NULL)))
  {
    le = list;
    list = list->l_next;
    if(!(le->l_data == NULL))
    {
      if(!(datafree == ((void (*)(void *, void *))NULL)))
        datafree(le->l_data, private);

    }

    free((void *)le);
  }
}

// list_iter
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 48
signed int list_iter(struct list *list, signed int (*func)(void *, void *), void *private)
{
  struct list *lnext;
  signed int cumrc = 0;
  signed int cbrc;
  if(!(list == ((struct list *)NULL)))
  {
    lnext = list->l_next;
    cbrc=func(list->l_data, private);
    if(!(cbrc >= 0))
      return cbrc;

    cumrc = cumrc + cbrc;
    list = lnext;
  }

  return cumrc;
}

// list_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/list.h line 44
void * list_remove(struct list **list, void *data, signed int (*cmp)(void *, void *, void *), void *private)
{
  struct list *le;
  struct list **le2;
  void *led;
  if(cmp == ((signed int (*)(void *, void *, void *))NULL))
    cmp = list_defcmp;

  le = *list;
  le2 = list;
  if(!(le == ((struct list *)NULL)))
  {
    signed int return_value;
    return_value=cmp(le->l_data, data, private);
    if(return_value == 0)
    {
      *le2 = le->l_next;
      led = le->l_data;
      free((void *)le);
      return led;
    }

    le2 = &le->l_next;
    le = le->l_next;
  }

  return (void *)0;
}

// main
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 751
signed int main(signed int argc, char **argv)
{
  struct tdata *mstrtd;
  struct tdata *savetd;
  char *uniqfile = (char *)(void *)0;
  char *uniqlabel = (char *)(void *)0;
  char *withfile = (char *)(void *)0;
  char *label = (char *)(void *)0;
  char **ifiles;
  char **tifiles;
  signed int verbose = 0;
  signed int docopy = 0;
  signed int write_fuzzy_match = 0;
  signed int keep_stabs = 0;
  signed int require_ctf = 0;
  signed int nifiles;
  signed int nielems;
  signed int c;
  signed int i;
  signed int idx;
  signed int tidx;
  signed int err;
  progname=__xpg_basename(argv[(signed long int)0]);
  char *return_value_getenv$2;
  return_value_getenv$2=getenv("CTFMERGE_DEBUG_LEVEL");
  char *return_value_getenv$1;
  if(!(return_value_getenv$2 == ((char *)NULL)))
  {
    return_value_getenv$1=getenv("CTFMERGE_DEBUG_LEVEL");
    debug_level=atoi(return_value_getenv$1);
  }

  err = 0;
  do
  {
    c=bsd_getopt(argc, argv, ":cd:D:fgl:L:o:tvw:s");
    if(c == -1)
      break;

    switch(c)
    {
      case 99:
      {
        docopy = 1;
        break;
      }
      case 100:
      {
        uniqfile = optarg;
        break;
      }
      case 68:
      {
        uniqlabel = optarg;
        break;
      }
      case 102:
      {
        write_fuzzy_match = 0x1;
        break;
      }
      case 103:
      {
        keep_stabs = 0x8;
        break;
      }
      case 108:
      {
        label = optarg;
        break;
      }
      case 76:
      {
        label=getenv(optarg);
        if(label == ((char *)NULL))
          label = "*** No Label Provided ***";

        break;
      }
      case 111:
      {
        outfile = optarg;
        break;
      }
      case 116:
      {
        require_ctf = 1;
        break;
      }
      case 118:
      {
        verbose = 1;
        break;
      }
      case 119:
      {
        withfile = optarg;
        break;
      }
      case 115:
      {
        dynsym = 0x2;
        break;
      }
      default:
      {
        usage();
        exit(2);
      }
    }
  }
  while((_Bool)1);
  if(!(docopy == 0))
  {
    if(!(label == ((char *)NULL)) || !(uniqfile == ((char *)NULL)) || !(uniqlabel == ((char *)NULL)) || !(withfile == ((char *)NULL)) || !(outfile == ((char *)NULL)) || !(dynsym == 0))
      err = err + 1;

    if(!(argc + -optind == 2))
      err = err + 1;

  }

  else
  {
    if(!(uniqfile == ((char *)NULL)) && !(withfile == ((char *)NULL)))
      err = err + 1;

    if(uniqfile == ((char *)NULL) && !(uniqlabel == ((char *)NULL)))
      err = err + 1;

    if(label == ((char *)NULL) || outfile == ((char *)NULL))
      err = err + 1;

    if(argc == optind)
      err = err + 1;

  }
  if(!(err == 0))
  {
    usage();
    exit(2);
  }

  char *return_value_getenv$3;
  return_value_getenv$3=getenv("STRIPSTABS_KEEP_STABS");
  if(!(return_value_getenv$3 == ((char *)NULL)))
    keep_stabs = 0x8;

  signed int return_value_access$4;
  if(!(uniqfile == ((char *)NULL)))
  {
    return_value_access$4=access(uniqfile, 4);
    if(!(return_value_access$4 == 0))
    {
      warning("Uniquification file %s couldn't be opened and will be ignored.\n", uniqfile);
      uniqfile = (char *)(void *)0;
    }

  }

  signed int return_value_access$5;
  if(!(withfile == ((char *)NULL)))
  {
    return_value_access$5=access(withfile, 4);
    if(!(return_value_access$5 == 0))
    {
      warning("With file %s couldn't be opened and will be ignored.\n", withfile);
      withfile = (char *)(void *)0;
    }

  }

  signed int return_value_access$6;
  if(!(outfile == ((char *)NULL)))
  {
    return_value_access$6=access(outfile, 4 | 2);
    if(!(return_value_access$6 == 0))
      terminate("Cannot open output file %s for r/w", outfile);

  }

  if(!(docopy == 0))
  {
    copy_ctf_data(argv[(signed long int)optind], argv[(signed long int)(optind + 1)], keep_stabs);
    exit(0);
  }

  set_terminate_cleanup(terminate_cleanup);
  nifiles = argc - optind;
  void *return_value_xmalloc$7;
  return_value_xmalloc$7=xmalloc(sizeof(char *) /*8ul*/  * (unsigned long int)nifiles);
  ifiles = (char **)return_value_xmalloc$7;
  void *return_value_xmalloc$8;
  return_value_xmalloc$8=xmalloc(sizeof(char *) /*8ul*/  * (unsigned long int)nifiles);
  tifiles = (char **)return_value_xmalloc$8;
  i = 0;
  for( ; !(i >= nifiles); i = i + 1)
    tifiles[(signed long int)i] = argv[(signed long int)(optind + i)];
  qsort((void *)tifiles, (unsigned long int)nifiles, sizeof(char *) /*8ul*/ , (signed int (*)(const void *, const void *))(signed int (*)())strcompare);
  ifiles[(signed long int)0] = tifiles[(signed long int)0];
  idx = 0;
  tidx = 1;
  for( ; !(tidx >= nifiles); tidx = tidx + 1)
  {
    signed int return_value_strcmp$9;
    return_value_strcmp$9=strcmp(ifiles[(signed long int)idx], tifiles[(signed long int)tidx]);
    if(!(return_value_strcmp$9 == 0))
    {
      idx = idx + 1;
      ifiles[(signed long int)idx] = tifiles[(signed long int)tidx];
    }

  }
  nifiles = idx + 1;
  nielems=count_files(ifiles, nifiles);
  if(!(nielems >= 0))
    terminate("Some input files were inaccessible\n");

  wq_init(&wq, nielems);
  start_threads(&wq);
  signed int return_value_read_ctf$10;
  return_value_read_ctf$10=read_ctf(ifiles, nifiles, (char *)(void *)0, merge_ctf_cb, (void *)&wq, require_ctf);
  if(return_value_read_ctf$10 == 0)
  {
    if(!(require_ctf == 0))
      exit(0);

    terminate("No ctf sections found to merge\n");
  }

  pthread_mutex_lock(&wq.wq_queue_lock);
  wq.wq_nomorefiles = 1;
  pthread_cond_broadcast(&wq.wq_work_avail);
  pthread_mutex_unlock(&wq.wq_queue_lock);
  pthread_mutex_lock(&wq.wq_queue_lock);
  while(wq.wq_alldone == 0)
    pthread_cond_wait(&wq.wq_alldone_cv, &wq.wq_queue_lock);
  pthread_mutex_unlock(&wq.wq_queue_lock);
  join_threads(&wq);
  signed int return_value_fifo_len$11;
  return_value_fifo_len$11=fifo_len(wq.wq_queue);
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c */
  assert(return_value_fifo_len$11 == 1);
  void *return_value_fifo_remove$12;
  return_value_fifo_remove$12=fifo_remove(wq.wq_queue);
  mstrtd = (struct tdata *)return_value_fifo_remove$12;
  if(!(debug_level == 0) || !(verbose == 0))
  {
    debug(2, "Statistics for td %p\n", (void *)mstrtd);
    iidesc_stats(mstrtd->td_iihash);
  }

  signed int tmp_if_expr$14;
  if(!(uniqfile == ((char *)NULL)) || !(withfile == ((char *)NULL)))
  {
    char *reffile;
    char *reflabel = (char *)(void *)0;
    struct tdata *reftd;
    if(!(uniqfile == ((char *)NULL)))
    {
      reffile = uniqfile;
      reflabel = uniqlabel;
    }

    else
      reffile = withfile;
    signed int return_value_read_ctf$13;
    return_value_read_ctf$13=read_ctf(&reffile, 1, reflabel, read_ctf_save_cb, (void *)&reftd, require_ctf);
    if(return_value_read_ctf$13 == 0)
      terminate("No CTF data found in reference file %s\n", reffile);

    savetd=tdata_new();
    if(reftd->td_nextid >= 32768)
      terminate("No room for additional types in master\n");

    if(!(withfile == ((char *)NULL)))
      tmp_if_expr$14 = reftd->td_nextid;

    else
      tmp_if_expr$14 = 1 != 0 ? 1 | 0x8000 : 1;
    savetd->td_nextid = tmp_if_expr$14;
    merge_into_master(mstrtd, reftd, savetd, 0);
    tdata_label_add(savetd, label, -1);
    if(!(withfile == ((char *)NULL)))
    {
      struct tdata *withtd = reftd;
      tdata_merge(withtd, savetd);
      savetd = withtd;
    }

    else
    {
      char uniqname[4096l];
      struct labelent *parle;
      parle=tdata_label_top(reftd);
      savetd->td_parlabel=xstrdup(parle->le_name);
      strncpy(uniqname, reffile, sizeof(char [4096l]) /*4096ul*/ );
      uniqname[(signed long int)(4096 - 1)] = (char)0;
      char *return_value___xpg_basename$15;
      return_value___xpg_basename$15=__xpg_basename(uniqname);
      savetd->td_parname=xstrdup(return_value___xpg_basename$15);
    }
  }

  else
  {
    tdata_label_free(mstrtd);
    tdata_label_add(mstrtd, label, -1);
    savetd = mstrtd;
  }
  tmpname=mktmpname(outfile, ".ctf");
  write_ctf(savetd, outfile, tmpname, 0x4 | write_fuzzy_match | dynsym | keep_stabs);
  signed int return_value_rename$16;
  return_value_rename$16=rename(tmpname, outfile);
  if(!(return_value_rename$16 == 0))
    terminate("Couldn't rename output temp file %s", tmpname);

  free((void *)tmpname);
  return 0;
}

// make_ctf_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 715
static char * make_ctf_data(struct tdata *td, struct _Elf *elf, const char *file, unsigned long int *lenp, signed int flags)
{
  struct iiburst *iiburst;
  char *data;
  iiburst=sort_iidescs(elf, file, td, flags & 0x1, flags & 0x2);
  data=ctf_gen(iiburst, lenp, flags & 0x4);
  iiburst_free(iiburst);
  return data;
}

// map_td_tree_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 445
static signed int map_td_tree_post(struct tdesc *ctdp, struct tdesc **ctdpp, void *private)
{
  struct merge_cb_data *mcd = (struct merge_cb_data *)private;
  struct equiv_data ed;
  ed.ed_ta = mcd->md_ta;
  ed.ed_clear_mark = mcd->md_parent->td_curemark;
  ed.ed_cur_mark = mcd->md_parent->td_curemark + 1;
  ed.ed_node = ctdp;
  ed.ed_selfuniquify = 0;
  const char *return_value_tdesc_name$1;
  return_value_tdesc_name$1=tdesc_name(ctdp);
  debug(3, "map_td_tree_post on %d <%x> %s\n", ctdp->t_id, ctdp->t_id, return_value_tdesc_name$1);
  signed int return_value_hash_find_iter$8;
  return_value_hash_find_iter$8=hash_find_iter(mcd->md_parent->td_layouthash, (void *)ctdp, equiv_cb, (void *)&ed);
  _Bool tmp_if_expr$3;
  signed int tmp_post$2;
  _Bool tmp_if_expr$7;
  signed int return_value_hash_iter$6;
  signed int tmp_post$5;
  if(!(return_value_hash_find_iter$8 >= 0))
  {
    if((signed int)ed.ed_tgt->t_type == FORWARD)
      tmp_if_expr$3 = (signed int)ctdp->t_type != FORWARD ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$3 = (_Bool)0;
    if(tmp_if_expr$3)
    {
      signed int id;
      tmp_post$2 = mcd->md_tgt->td_nextid;
      mcd->md_tgt->td_nextid = mcd->md_tgt->td_nextid + 1;
      id = tmp_post$2;
      debug(3, "Creating new defn type %d <%x>\n", id, id);
      add_mapping(mcd->md_ta, ctdp->t_id, id);
      alist_add(mcd->md_fdida, (void *)(unsigned long int)ed.ed_tgt, (void *)(unsigned long int)id);
      hash_add(mcd->md_tdtba, (void *)ctdp);
    }

    else
      add_mapping(mcd->md_ta, ctdp->t_id, ed.ed_tgt->t_id);
  }

  else
  {
    if(debug_level >= 2)
    {
      return_value_hash_iter$6=hash_iter(mcd->md_parent->td_idhash, equiv_cb, (void *)&ed);
      tmp_if_expr$7 = return_value_hash_iter$6 < 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$7 = (_Bool)0;
    if(tmp_if_expr$7)
    {
      const char *return_value_tdesc_name$4;
      return_value_tdesc_name$4=tdesc_name(ctdp);
      aborterr("Second pass for %d (%s) == %d\n", ctdp->t_id, return_value_tdesc_name$4, ed.ed_tgt->t_id);
    }

    else
    {
      signed int map_td_tree_post$$1$$3$$id;
      tmp_post$5 = mcd->md_tgt->td_nextid;
      mcd->md_tgt->td_nextid = mcd->md_tgt->td_nextid + 1;
      map_td_tree_post$$1$$3$$id = tmp_post$5;
      debug(3, "Creating new type %d <%x>\n", map_td_tree_post$$1$$3$$id, map_td_tree_post$$1$$3$$id);
      add_mapping(mcd->md_ta, ctdp->t_id, map_td_tree_post$$1$$3$$id);
      hash_add(mcd->md_tdtba, (void *)ctdp);
    }
  }
  mcd->md_parent->td_curemark = ed.ed_cur_mark + 1;
  return 1;
}

// map_td_tree_pre
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 433
static signed int map_td_tree_pre(struct tdesc *ctdp, struct tdesc **ctdpp, void *private)
{
  struct merge_cb_data *mcd = (struct merge_cb_data *)private;
  signed int return_value_get_mapping$1;
  return_value_get_mapping$1=get_mapping(mcd->md_ta, ctdp->t_id);
  if(return_value_get_mapping$1 >= 1)
    return 0;

  else
    return 1;
}

// map_td_tree_self_post
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 497
static signed int map_td_tree_self_post(struct tdesc *ctdp, struct tdesc **ctdpp, void *private)
{
  struct merge_cb_data *mcd = (struct merge_cb_data *)private;
  struct equiv_data ed;
  ed.ed_ta = mcd->md_ta;
  ed.ed_clear_mark = mcd->md_parent->td_curemark;
  ed.ed_cur_mark = mcd->md_parent->td_curemark + 1;
  ed.ed_node = ctdp;
  ed.ed_selfuniquify = 1;
  ed.ed_tgt = (struct tdesc *)(void *)0;
  signed int return_value_hash_find_iter$6;
  return_value_hash_find_iter$6=hash_find_iter(mcd->md_tdtba, (void *)ctdp, equiv_cb, (void *)&ed);
  _Bool tmp_if_expr$5;
  signed int return_value_hash_iter$4;
  signed int tmp_post$3;
  if(!(return_value_hash_find_iter$6 >= 0))
  {
    debug(3, "Self check found %d <%x> in %d <%x>\n", ctdp->t_id, ctdp->t_id, ed.ed_tgt->t_id, ed.ed_tgt->t_id);
    signed int return_value_get_mapping$1;
    return_value_get_mapping$1=get_mapping(mcd->md_ta, ed.ed_tgt->t_id);
    add_mapping(mcd->md_ta, ctdp->t_id, return_value_get_mapping$1);
  }

  else
  {
    if(debug_level >= 2)
    {
      return_value_hash_iter$4=hash_iter(mcd->md_tdtba, equiv_cb, (void *)&ed);
      tmp_if_expr$5 = return_value_hash_iter$4 < 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
    {
      const char *return_value_tdesc_name$2;
      return_value_tdesc_name$2=tdesc_name(ctdp);
      aborterr("Self-unique second pass for %d <%x> (%s) == %d <%x>\n", ctdp->t_id, ctdp->t_id, return_value_tdesc_name$2, ed.ed_tgt->t_id, ed.ed_tgt->t_id);
    }

    else
    {
      signed int id;
      tmp_post$3 = mcd->md_tgt->td_nextid;
      mcd->md_tgt->td_nextid = mcd->md_tgt->td_nextid + 1;
      id = tmp_post$3;
      debug(3, "Creating new type %d <%x>\n", id, id);
      add_mapping(mcd->md_ta, ctdp->t_id, id);
      hash_add(mcd->md_tdtba, (void *)ctdp);
    }
  }
  mcd->md_parent->td_curemark = ed.ed_cur_mark + 1;
  return 1;
}

// matching_iidesc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 162
static signed int matching_iidesc(void *arg1, void *arg2)
{
  struct iidesc *iidesc = (struct iidesc *)arg1;
  struct iidesc_match *match = (struct iidesc_match *)arg2;
  signed int return_value_streq$1;
  return_value_streq$1=streq(iidesc->ii_name, match->iim_name);
  signed int return_value_streq$2;
  if(return_value_streq$1 == 0)
    return 0;

  else
  {
    switch((signed int)iidesc->ii_type)
    {
      case II_GFUN:

      case II_GVAR:
      {
        if((signed int)match->iim_bind == 1)
        {
          match->iim_ret = iidesc;
          return -1;
        }

        else
          if(!(match->iim_fuzzy == 0))
          {
            if(match->iim_ret == ((struct iidesc *)NULL))
            {
              match->iim_ret = iidesc;
              return 0;
            }

          }

        break;
      }
      case II_SFUN:

      case II_SVAR:
      {
        if((signed int)match->iim_bind == 0)
        {
          if(!(match->iim_file == ((char *)NULL)))
          {
            return_value_streq$2=streq(iidesc->ii_owner, match->iim_file);
            if(!(return_value_streq$2 == 0))
            {
              match->iim_ret = iidesc;
              return -1;
            }

          }

        }

        break;
      }
      default:
        ;
    }
    return 0;
  }
}

// membadd
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1046
static signed int membadd(const char *name, signed long int type, unsigned long int offset, void *arg)
{
  struct ctf_bundle *ctb = (struct ctf_bundle *)arg;
  struct ctf_dmdef *dmd;
  char *s = (char *)(void *)0;
  void *return_value_ctf_alloc$2;
  return_value_ctf_alloc$2=ctf_alloc(sizeof(struct ctf_dmdef) /*48ul*/ );
  dmd = (struct ctf_dmdef *)return_value_ctf_alloc$2;
  signed long int return_value_ctf_set_errno$1;
  unsigned long int return_value_strlen$4;
  if(dmd == ((struct ctf_dmdef *)NULL))
  {
    return_value_ctf_set_errno$1=ctf_set_errno(ctb->ctb_file, 11);
    return (signed int)return_value_ctf_set_errno$1;
  }

  else
  {
    if(!(name == ((const char *)NULL)))
    {
      s=ctf_strdup(name);
      if(s == ((char *)NULL))
      {
        ctf_free((void *)dmd, sizeof(struct ctf_dmdef) /*48ul*/ );
        signed long int return_value_ctf_set_errno$3;
        return_value_ctf_set_errno$3=ctf_set_errno(ctb->ctb_file, 11);
        return (signed int)return_value_ctf_set_errno$3;
      }

    }

    dmd->dmd_name = s;
    dmd->dmd_type = type;
    dmd->dmd_offset = offset;
    dmd->dmd_value = -1;
    ctf_list_append(&ctb->ctb_dtd->dtd_u.dtu_members, (void *)dmd);
    if(!(s == ((char *)NULL)))
    {
      return_value_strlen$4=strlen(s);
      ctb->ctb_file->ctf_dtstrlen = ctb->ctb_file->ctf_dtstrlen + return_value_strlen$4 + (unsigned long int)1;
    }

    ctb->ctb_file->ctf_flags = ctb->ctb_file->ctf_flags | (unsigned int)0x0008;
    return 0;
  }
}

// membcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_create.c line 1036
static signed int membcmp(const char *name, signed long int type, unsigned long int offset, void *arg)
{
  struct ctf_bundle *ctb = (struct ctf_bundle *)arg;
  struct ctf_membinfo ctm;
  signed int return_value_ctf_member_info$1;
  return_value_ctf_member_info$1=ctf_member_info(ctb->ctb_file, ctb->ctb_type, name, &ctm);
  return (signed int)((signed long int)return_value_ctf_member_info$1 == -1L ? (_Bool)1 : (ctm.ctm_offset != offset ? (_Bool)1 : (_Bool)0));
}

// memory_bailout
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/memory.c line 41
static void memory_bailout(void)
{
  fprintf(stderr, "Out of memory\n");
  exit(1);
}

// merge_ctf_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 550
static signed int merge_ctf_cb(struct tdata *td, char *name, void *arg)
{
  struct workqueue *merge_ctf_cb$$1$$wq = (struct workqueue *)arg;
  debug(3, "Adding tdata %p for processing\n", (void *)td);
  pthread_mutex_lock(&merge_ctf_cb$$1$$wq->wq_queue_lock);
  signed int return_value_fifo_len$1;
  do
  {
    return_value_fifo_len$1=fifo_len(merge_ctf_cb$$1$$wq->wq_queue);
    if(merge_ctf_cb$$1$$wq->wq_ithrottle >= return_value_fifo_len$1)
      break;

    signed int return_value_fifo_len$2;
    return_value_fifo_len$2=fifo_len(merge_ctf_cb$$1$$wq->wq_queue);
    debug(2, "Throttling input (len = %d, throttle = %d)\n", return_value_fifo_len$2, merge_ctf_cb$$1$$wq->wq_ithrottle);
    pthread_cond_wait(&merge_ctf_cb$$1$$wq->wq_work_removed, &merge_ctf_cb$$1$$wq->wq_queue_lock);
  }
  while((_Bool)1);
  fifo_add(merge_ctf_cb$$1$$wq->wq_queue, (void *)td);
  unsigned long int return_value_pthread_self$3;
  return_value_pthread_self$3=pthread_self();
  debug(1, "Thread %d announcing %s\n", return_value_pthread_self$3, name);
  pthread_cond_broadcast(&merge_ctf_cb$$1$$wq->wq_work_avail);
  pthread_mutex_unlock(&merge_ctf_cb$$1$$wq->wq_queue_lock);
  return 1;
}

// merge_into_master
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 387
void merge_into_master(struct tdata *cur, struct tdata *mstr, struct tdata *tgt, signed int selfuniquify)
{
  struct merge_cb_data mcd;
  cur->td_ref = cur->td_ref + 1;
  mstr->td_ref = mstr->td_ref + 1;
  if(!(tgt == ((struct tdata *)NULL)))
    tgt->td_ref = tgt->td_ref + 1;

  _Bool tmp_if_expr$1;
  if(cur->td_ref == 1)
    tmp_if_expr$1 = mstr->td_ref == 1 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
  {
    if(tgt == ((struct tdata *)NULL))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = tgt->td_ref == 1 ? (_Bool)1 : (_Bool)0;
    tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(tmp_if_expr$3);
  mcd.md_parent = mstr;
  mcd.md_tgt = tgt != ((struct tdata *)NULL) ? tgt : mstr;
  mcd.md_ta=alist_new((void (*)(void *))(void *)0, (void (*)(void *))(void *)0);
  mcd.md_fdida=alist_new((void (*)(void *))(void *)0, (void (*)(void *))(void *)0);
  mcd.md_flags = 0;
  if(!(selfuniquify == 0))
    mcd.md_flags = mcd.md_flags | 0x1;

  if(!(tgt == ((struct tdata *)NULL)))
    mcd.md_flags = mcd.md_flags | 0x2;

  signed int tmp_if_expr$4;
  if(!(cur->td_curvgen >= mstr->td_curvgen))
    tmp_if_expr$4 = mstr->td_curvgen;

  else
    tmp_if_expr$4 = cur->td_curvgen;
  mstr->td_curvgen = tmp_if_expr$4;
  signed int tmp_if_expr$5;
  if(!(cur->td_curemark >= mstr->td_curemark))
    tmp_if_expr$5 = mstr->td_curemark;

  else
    tmp_if_expr$5 = cur->td_curemark;
  mstr->td_curemark = tmp_if_expr$5;
  merge_types(cur->td_iihash, &mcd);
  if(debug_level >= 3)
  {
    debug(3, "Type association stats\n");
    alist_stats(mcd.md_ta, 0);
    debug(3, "Layout hash stats\n");
    hash_stats(mcd.md_tgt->td_layouthash, 1);
  }

  alist_free(mcd.md_fdida);
  alist_free(mcd.md_ta);
  cur->td_ref = cur->td_ref - 1;
  mstr->td_ref = mstr->td_ref - 1;
  if(!(tgt == ((struct tdata *)NULL)))
    tgt->td_ref = tgt->td_ref - 1;

}

// merge_type_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 655
static signed int merge_type_cb(void *data, void *arg)
{
  struct iidesc *sii = (struct iidesc *)data;
  struct merge_cb_data *mcd = (struct merge_cb_data *)arg;
  struct iifind_data iif;
  signed int (**post)(struct tdesc *, struct tdesc **, void *);
  signed int (**tmp_if_expr$1)(struct tdesc *, struct tdesc **, void *);
  if(!((0x1 & mcd->md_flags) == 0))
    tmp_if_expr$1 = map_self_post;

  else
    tmp_if_expr$1 = map_post;
  post = tmp_if_expr$1;
  iitraverse(sii, &mcd->md_parent->td_curvgen, (signed int (**)(struct tdesc *, struct tdesc **, void *))(void *)0, map_pre, post, (void *)mcd);
  iif.iif_template = sii;
  iif.iif_ta = mcd->md_ta;
  iif.iif_newidx=get_mapping(mcd->md_ta, sii->ii_dtype->t_id);
  iif.iif_refmerge = mcd->md_flags & 0x2;
  signed int return_value_hash_match$2;
  return_value_hash_match$2=hash_match(mcd->md_parent->td_iihash, (void *)sii, iidesc_match, (void *)&iif);
  char *tmp_if_expr$3;
  if(return_value_hash_match$2 == 1)
    return 1;

  else
  {
    if(!(sii->ii_name == ((char *)NULL)))
      tmp_if_expr$3 = sii->ii_name;

    else
      tmp_if_expr$3 = "(anon)";
    debug(3, "tba %s (%d)\n", tmp_if_expr$3, sii->ii_type);
    list_add(mcd->md_iitba, (void *)sii);
    return 0;
  }
}

// merge_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 1042
static void merge_types(struct hash *src, struct merge_cb_data *mcd)
{
  struct list *iitba = (struct list *)(void *)0;
  struct list *tdtbr = (struct list *)(void *)0;
  signed int iirc;
  signed int tdrc;
  mcd->md_iitba = &iitba;
  mcd->md_tdtba=hash_new(8191, tdesc_layouthash, tdesc_layoutcmp);
  mcd->md_tdtbr = &tdtbr;
  hash_iter(src, merge_type_cb, (void *)mcd);
  tdrc=hash_iter(mcd->md_tdtba, add_tdtba_cb, (void *)mcd);
  debug(3, "add_tdtba_cb added %d items\n", tdrc);
  iirc=list_iter(*mcd->md_iitba, add_iitba_cb, (void *)mcd);
  debug(3, "add_iitba_cb added %d items\n", iirc);
  signed int return_value_list_count$1;
  return_value_list_count$1=list_count(*mcd->md_iitba);
  _Bool tmp_if_expr$3;
  signed int return_value_hash_count$2;
  if(return_value_list_count$1 == 0)
  {
    return_value_hash_count$2=hash_count(mcd->md_tdtba);
    tmp_if_expr$3 = return_value_hash_count$2 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c */
  assert(tmp_if_expr$3);
  tdrc=list_iter(*mcd->md_tdtbr, add_tdtbr_cb, (void *)mcd);
  debug(3, "add_tdtbr_cb added %d items\n", tdrc);
  signed int return_value_list_count$4;
  return_value_list_count$4=list_count(*mcd->md_tdtbr);
  if(!(return_value_list_count$4 == 0))
    aborterr("Couldn't remap all nodes\n");

  if(mcd->md_parent == mcd->md_tgt)
    redir_mstr_fwds(mcd);

}

// mktmpname
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 436
char * mktmpname(const char *origname, const char *suffix)
{
  char *newname;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(origname);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(suffix);
  void *return_value_xmalloc$3;
  return_value_xmalloc$3=xmalloc(return_value_strlen$1 + return_value_strlen$2 + (unsigned long int)1);
  newname = (char *)return_value_xmalloc$3;
  strcpy(newname, origname);
  strcat(newname, suffix);
  return newname;
}

// pad_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 542
static void pad_buffer(struct ctf_buf *buf, signed int align)
{
  unsigned int cur;
  cur=ctf_buf_cur(buf);
  signed long int topad = (signed long int)(((unsigned int)align - cur % (unsigned int)align) % (unsigned int)align);
  static const char pad[8l] = { (const char)0, 0, 0, 0, 0, 0, 0, 0 };
  for( ; topad >= 1l; topad = topad - (signed long int)8)
    ctf_buf_write(buf, (const void *)pad, (unsigned long int)(topad > (signed long int)8 ? (signed long int)8 : topad));
}

// parseterminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 67
static void parseterminate(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  static char msgbuf[1024l];
  vsnprintf(msgbuf, sizeof(char [1024l]) /*1024ul*/ , fmt, ap);
  ap = ((void **)NULL);
  terminate("%s: %s\n", curfile, (const void *)msgbuf);
}

// rbzs_grow
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 461
static void rbzs_grow(struct resbuf *rb)
{
  signed long int ptroff = (char *)rb->rb_zstr.next_out - rb->rb_base;
  rb->rb_size = rb->rb_size + (unsigned long int)(64 * 1024);
  void *return_value_xrealloc$1;
  return_value_xrealloc$1=xrealloc((void *)rb->rb_base, rb->rb_size);
  rb->rb_base = (char *)return_value_xrealloc$1;
  rb->rb_ptr = rb->rb_base + ptroff;
  rb->rb_zstr.next_out = (unsigned char *)rb->rb_ptr;
  rb->rb_zstr.avail_out = rb->rb_zstr.avail_out + (unsigned int)(64 * 1024);
}

// read_archive
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 130
static signed int read_archive(signed int fd, struct _Elf *elf, char *file, char *label, signed int (*func)(struct tdata *, char *, void *), void *arg, signed int require_ctf)
{
  struct _Elf *melf;
  enum anonymous$2 cmd = (enum anonymous$2)ELF_C_READ;
  struct anonymous$3 *arh;
  signed int secnum = 1;
  signed int found = 0;
  do
  {
    melf=elf_begin(fd, cmd, elf);
    if(melf == ((struct _Elf *)NULL))
      break;

    signed int rc = 0;
    arh=elf_getarhdr(melf);
    if(arh == ((struct anonymous$3 *)NULL))
      elfterminate(file, "Can't get archive header for member %d", secnum);

    if(!((signed int)*arh->ar_name == 47))
    {
      unsigned long int memlen;
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(file);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(arh->ar_name);
      memlen = return_value_strlen$1 + (unsigned long int)1 + return_value_strlen$2 + (unsigned long int)1 + (unsigned long int)1;
      char *memname;
      void *return_value_xmalloc$3;
      return_value_xmalloc$3=xmalloc(memlen);
      memname = (char *)return_value_xmalloc$3;
      snprintf(memname, memlen, "%s(%s)", file, arh->ar_name);
      enum anonymous$1 return_value_elf_kind$4;
      return_value_elf_kind$4=elf_kind(melf);
      switch((signed int)return_value_elf_kind$4)
      {
        case ELF_K_AR:
        {
          rc=read_archive(fd, melf, memname, label, func, arg, require_ctf);
          break;
        }
        case ELF_K_ELF:
        {
          rc=read_file(melf, memname, label, func, arg, require_ctf);
          break;
        }
        default:
        {
          enum anonymous$1 return_value_elf_kind$5;
          return_value_elf_kind$5=elf_kind(melf);
          terminate("%s: Unknown elf kind %d\n", memname, return_value_elf_kind$5);
        }
      }
      free((void *)memname);
    }

    cmd=elf_next(melf);
    elf_end(melf);
    secnum = secnum + 1;
    if(!(rc >= 0))
      return rc;

    else
      found = found + rc;
  }
  while((_Bool)1);
  return found;
}

// read_ctf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 376
signed int read_ctf(char **files, signed int n, char *label, signed int (*func)(struct tdata *, char *, void *), void *private, signed int require_ctf)
{
  signed int found;
  signed int i;
  signed int rc;
  i = 0;
  found = 0;
  for( ; !(i >= n); i = i + 1)
  {
    rc=read_ctf_common(files[(signed long int)i], label, func, private, require_ctf);
    if(!(rc >= 0))
      return rc;

    found = found + rc;
  }
  return found;
}

// read_ctf_common
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 185
static signed int read_ctf_common(char *file, char *label, signed int (*func)(struct tdata *, char *, void *), void *arg, signed int require_ctf)
{
  struct _Elf *elf;
  signed int found = 0;
  signed int fd;
  debug(3, "Reading %s (label %s)\n", file, label != ((char *)NULL) ? label : "NONE");
  elf_version((unsigned int)1);
  fd=open(file, 00);
  if(!(fd >= 0))
    terminate("%s: Cannot open for reading", file);

  elf=elf_begin(fd, (enum anonymous$2)ELF_C_READ, (struct _Elf *)(void *)0);
  if(elf == ((struct _Elf *)NULL))
    elfterminate(file, "Cannot read");

  enum anonymous$1 return_value_elf_kind$1;
  return_value_elf_kind$1=elf_kind(elf);
  switch((signed int)return_value_elf_kind$1)
  {
    case ELF_K_AR:
    {
      found=read_archive(fd, elf, file, label, func, arg, require_ctf);
      break;
    }
    case ELF_K_ELF:
    {
      found=read_file(elf, file, label, func, arg, require_ctf);
      break;
    }
    default:
    {
      enum anonymous$1 return_value_elf_kind$2;
      return_value_elf_kind$2=elf_kind(elf);
      terminate("%s: Unknown elf kind %d\n", file, return_value_elf_kind$2);
    }
  }
  elf_end(elf);
  close(fd);
  return found;
}

// read_ctf_save_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 378
signed int read_ctf_save_cb(struct tdata *td, char *name, void *retp)
{
  struct tdata **tdp = (struct tdata **)retp;
  *tdp = td;
  return 1;
}

// read_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 87
static signed int read_file(struct _Elf *elf, char *file, char *label, signed int (*func)(struct tdata *, char *, void *), void *arg, signed int require_ctf)
{
  struct _Elf_Scn *ctfscn;
  struct _Elf_Data *ctfdata = (struct _Elf_Data *)(void *)0;
  struct symit_data *si = (struct symit_data *)(void *)0;
  signed int ctfscnidx;
  struct tdata *td;
  ctfscnidx=findelfsecidx(elf, file, ".SUNW_ctf");
  enum source_types return_value_built_source_types$1;
  if(!(ctfscnidx >= 0))
  {
    if(!(require_ctf == 0))
    {
      return_value_built_source_types$1=built_source_types(elf, file);
      if(!((SOURCE_C & (signed int)return_value_built_source_types$1) == 0))
        terminate("Input file %s was partially built from C sources, but no CTF data was present\n", file);

    }

    return 0;
  }

  ctfscn=elf_getscn(elf, (unsigned long int)ctfscnidx);
  _Bool tmp_if_expr$2;
  if(ctfscn == ((struct _Elf_Scn *)NULL))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    ctfdata=elf_getdata(ctfscn, (struct _Elf_Data *)(void *)0);
    tmp_if_expr$2 = ctfdata == (struct _Elf_Data *)(void *)0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$2)
    elfterminate(file, "Cannot read CTF section");

  si=symit_new(elf, file);
  if(si == ((struct symit_data *)NULL))
  {
    warning("%s has no symbol table - skipping", file);
    return 0;
  }

  else
  {
    td=ctf_load(file, (char *)ctfdata->d_buf, ctfdata->d_size, si, label);
    tdata_build_hashes(td);
    symit_free(si);
    if(!(td == ((struct tdata *)NULL)))
    {
      signed int return_value;
      return_value=func(td, file, arg);
      if(!(return_value >= 0))
        return -1;

      else
        return 1;
    }

    return 0;
  }
}

// redir_mstr_fwd_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 910
static signed int redir_mstr_fwd_cb(void *name, void *value, void *arg)
{
  struct tdesc *fwd = (struct tdesc *)name;
  signed int defnid = (signed int)(unsigned long int)value;
  struct redir_mstr_data *rmd = (struct redir_mstr_data *)arg;
  struct tdesc template;
  struct tdesc *defn;
  template.t_id = defnid;
  signed int return_value_hash_find$2;
  return_value_hash_find$2=hash_find(rmd->rmd_tgt->td_idhash, (void *)&template, (void **)(void *)&defn);
  if(return_value_hash_find$2 == 0)
  {
    const char *return_value_tdesc_name$1;
    return_value_tdesc_name$1=tdesc_name(defn);
    aborterr("Couldn't unforward %d (%s)\n", defnid, return_value_tdesc_name$1);
  }

  const char *return_value_tdesc_name$3;
  return_value_tdesc_name$3=tdesc_name(defn);
  debug(3, "Forward map: resolved %d to %s\n", defnid, return_value_tdesc_name$3);
  alist_add(rmd->rmd_map, (void *)fwd, (void *)defn);
  return 1;
}

// redir_mstr_fwds
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 934
static void redir_mstr_fwds(struct merge_cb_data *mcd)
{
  struct redir_mstr_data rmd;
  struct alist *map;
  map=alist_new((void (*)(void *))(void *)0, (void (*)(void *))(void *)0);
  rmd.rmd_tgt = mcd->md_tgt;
  rmd.rmd_map = map;
  signed int return_value_alist_iter$1;
  return_value_alist_iter$1=alist_iter(mcd->md_fdida, redir_mstr_fwd_cb, (void *)&rmd);
  if(!(return_value_alist_iter$1 == 0))
    iitraverse_hash(mcd->md_tgt->td_iihash, &mcd->md_tgt->td_curvgen, fwd_redir_cbs, (signed int (**)(struct tdesc *, struct tdesc **, void *))(void *)0, (signed int (**)(struct tdesc *, struct tdesc **, void *))(void *)0, (void *)map);

  alist_free(map);
}

// remap_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/merge.c line 688
static signed int remap_node(struct tdesc **tgtp, struct tdesc *oldtgt, signed int selftid, struct tdesc *newself, struct merge_cb_data *mcd)
{
  struct tdesc *tgt = (struct tdesc *)(void *)0;
  struct tdesc template;
  signed int oldid = oldtgt->t_id;
  _Bool tmp_if_expr$2;
  signed int return_value_hash_find$1;
  if(oldid == selftid)
  {
    *tgtp = newself;
    return 1;
  }

  else
  {
    template.t_id=get_mapping(mcd->md_ta, oldid);
    if(template.t_id == 0)
      aborterr("failed to get mapping for tid %d <%x>\n", oldid, oldid);

    signed int return_value_hash_find$3;
    return_value_hash_find$3=hash_find(mcd->md_parent->td_idhash, (void *)&template, (void **)(void *)&tgt);
    if(return_value_hash_find$3 == 0)
    {
      if((0x2 & mcd->md_flags) == 0)
        tmp_if_expr$2 = (_Bool)1;

      else
      {
        return_value_hash_find$1=hash_find(mcd->md_tgt->td_idhash, (void *)&template, (void **)(void *)&tgt);
        tmp_if_expr$2 = !(return_value_hash_find$1 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr$2)
        goto __CPROVER_DUMP_L5;

      debug(3, "Remap couldn't find %d <%x> (from %d <%x>)\n", template.t_id, template.t_id, oldid, oldid);
      *tgtp = oldtgt;
      list_add(mcd->md_tdtbr, (void *)tgtp);
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      *tgtp = tgt;
      return 1;
    }
  }
}

// resurrect_functions
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 838
static void resurrect_functions(struct ctf_header *h, struct tdata *td, struct tdesc **tdarr, signed int tdsize, char *ctfdata, struct symit_data *si)
{
  char *buf = ctfdata + (signed long int)h->cth_funcoff;
  unsigned long int bufsz = (unsigned long int)(h->cth_typeoff - h->cth_funcoff);
  char *dptr = buf;
  struct iidesc *ii;
  unsigned short int info;
  unsigned short int retid;
  struct anonymous$5 *sym;
  signed int i;
  symit_reset(si);
  void *return_value_xmalloc$4;
  while(!(dptr >= buf + (signed long int)bufsz))
  {
    void *v = (void *)dptr;
    info = *((unsigned short int *)v);
    dptr = dptr + (signed long int)2;
    sym=symit_next(si, 2);
    if(sym == ((struct anonymous$5 *)NULL))
    {
      if(!((signed int)info == 0))
        parseterminate("Unexpected end of function symbols");

    }

    if((signed int)info == 0)
    {
      char *return_value_symit_name$1;
      return_value_symit_name$1=symit_name(si);
      debug(3, "Skipping null function (%s)\n", return_value_symit_name$1);
      continue;
    }

    v = (void *)dptr;
    retid = *((unsigned short int *)v);
    dptr = dptr + (signed long int)2;
    if((signed int)retid >= tdsize)
      parseterminate("Reference to invalid type %d", retid);

    char *return_value_symit_name$2;
    return_value_symit_name$2=symit_name(si);
    ii=iidesc_new(return_value_symit_name$2);
    ii->ii_dtype = tdarr[(signed long int)retid];
    if((signed int)sym->st_info >> 4 == 0)
    {
      ii->ii_type = (enum iitype)II_SFUN;
      char *return_value_symit_curfile$3;
      return_value_symit_curfile$3=symit_curfile(si);
      ii->ii_owner=xstrdup(return_value_symit_curfile$3);
    }

    else
      ii->ii_type = (enum iitype)II_GFUN;
    ii->ii_nargs = (signed int)info & 0x3ff;
    if(!(ii->ii_nargs == 0))
    {
      return_value_xmalloc$4=xmalloc(sizeof(struct tdesc *) /*8ul*/  * (unsigned long int)ii->ii_nargs);
      ii->ii_args = (struct tdesc **)return_value_xmalloc$4;
    }

    i = 0;
    for( ; !(i >= ii->ii_nargs); dptr = dptr + (signed long int)2)
    {
      v = (void *)dptr;
      unsigned short int id = *((unsigned short int *)v);
      if((signed int)id >= tdsize)
        parseterminate("Reference to invalid type %d", id);

      ii->ii_args[(signed long int)i] = tdarr[(signed long int)id];
      i = i + 1;
    }
    if(!(ii->ii_nargs == 0))
    {
      if(ii->ii_args[(signed long int)(ii->ii_nargs + -1)] == ((struct tdesc *)NULL))
      {
        ii->ii_nargs = ii->ii_nargs - 1;
        ii->ii_vargs = 1;
      }

    }

    hash_add(td->td_iihash, (void *)ii);
    debug(3, "Resurrected %s function %s (%d, %d args)\n", (signed int)ii->ii_type == II_GFUN ? "global" : "static", ii->ii_name, retid, ii->ii_nargs);
  }
}

// resurrect_labels
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 750
static signed int resurrect_labels(struct ctf_header *h, struct tdata *td, char *ctfdata, char *matchlbl)
{
  char *buf = ctfdata + (signed long int)h->cth_lbloff;
  char *sbuf = ctfdata + (signed long int)h->cth_stroff;
  unsigned long int bufsz = (unsigned long int)(h->cth_objtoff - h->cth_lbloff);
  signed int lastidx = 0;
  signed int baseidx = -1;
  char *baselabel = (char *)(void *)0;
  struct ctf_lblent *ctl;
  void *v = (void *)buf;
  ctl = (struct ctf_lblent *)v;
  signed int return_value_streq$1;
  signed int return_value_streq$2;
  for( ; !((char *)ctl >= buf + (signed long int)bufsz); ctl = ctl + 1l)
  {
    char *label = sbuf + (signed long int)ctl->ctl_label;
    lastidx = (signed int)ctl->ctl_typeidx;
    debug(3, "Resurrected label %s type idx %d\n", label, lastidx);
    tdata_label_add(td, label, lastidx);
    if(baseidx == -1)
    {
      baseidx = lastidx;
      baselabel = label;
      if(!(matchlbl == ((char *)NULL)))
      {
        return_value_streq$1=streq(matchlbl, "BASE");
        if(!(return_value_streq$1 == 0))
          return lastidx;

      }

    }

    if(!(matchlbl == ((char *)NULL)))
    {
      return_value_streq$2=streq(label, matchlbl);
      if(!(return_value_streq$2 == 0))
        return lastidx;

    }

  }
  if(!(matchlbl == ((char *)NULL)))
  {
    warning("%s: Cannot find label `%s' - using base (%s)\n", curfile, matchlbl, baselabel != ((char *)NULL) ? baselabel : "NONE");
    tdata_label_free(td);
    tdata_label_add(td, baselabel, baseidx);
    return baseidx;
  }

  else
    return lastidx;
}

// resurrect_objects
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 795
static void resurrect_objects(struct ctf_header *h, struct tdata *td, struct tdesc **tdarr, signed int tdsize, char *ctfdata, struct symit_data *si)
{
  char *buf = ctfdata + (signed long int)h->cth_objtoff;
  unsigned long int bufsz = (unsigned long int)(h->cth_funcoff - h->cth_objtoff);
  char *dptr;
  symit_reset(si);
  dptr = buf;
  char *tmp_if_expr$3;
  for( ; !(dptr >= buf + (signed long int)bufsz); dptr = dptr + (signed long int)2)
  {
    void *v = (void *)dptr;
    unsigned short int id = *((unsigned short int *)v);
    struct iidesc *ii;
    struct anonymous$5 *sym;
    sym=symit_next(si, 1);
    if(sym == ((struct anonymous$5 *)NULL))
    {
      if(!((signed int)id == 0))
        parseterminate("Unexpected end of object symbols at %x of %x", dptr - buf, bufsz);

    }

    if((signed int)id == 0)
    {
      debug(3, "Skipping null object\n");
      goto __CPROVER_DUMP_L9;
    }

    else
      if((signed int)id >= tdsize)
        parseterminate("Reference to invalid type %d", id);

    char *return_value_symit_name$1;
    return_value_symit_name$1=symit_name(si);
    ii=iidesc_new(return_value_symit_name$1);
    ii->ii_dtype = tdarr[(signed long int)id];
    if((signed int)sym->st_info >> 4 == 0)
    {
      ii->ii_type = (enum iitype)II_SVAR;
      char *return_value_symit_curfile$2;
      return_value_symit_curfile$2=symit_curfile(si);
      ii->ii_owner=xstrdup(return_value_symit_curfile$2);
    }

    else
      ii->ii_type = (enum iitype)II_GVAR;
    hash_add(td->td_iihash, (void *)ii);
    if(!(ii->ii_owner == ((char *)NULL)))
      tmp_if_expr$3 = ii->ii_owner;

    else
      tmp_if_expr$3 = "(none)";
    debug(3, "Resurrected %s object %s (%d) from %s\n", (signed int)ii->ii_type == II_GVAR ? "global" : "static", ii->ii_name, id, tmp_if_expr$3);

  __CPROVER_DUMP_L9:
    ;
  }
}

// resurrect_types
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 907
static void resurrect_types(struct ctf_header *h, struct tdata *td, struct tdesc **tdarr, signed int tdsize, char *ctfdata, signed int maxid)
{
  char *buf = ctfdata + (signed long int)h->cth_typeoff;
  unsigned long int bufsz = (unsigned long int)(h->cth_stroff - h->cth_typeoff);
  char *sbuf = ctfdata + (signed long int)h->cth_stroff;
  char *dptr = buf;
  struct tdesc *tdp;
  unsigned int data;
  unsigned int encoding;
  unsigned long int size;
  unsigned long int increment;
  signed int tcnt;
  signed int iicnt = 0;
  signed int tid;
  signed int argid;
  signed int kind;
  signed int vlen;
  signed int i;
  struct elist **epp;
  struct mlist **mpp;
  struct intr *ip;
  struct ctf_type *ctt;
  struct ctf_array *cta;
  struct ctf_enum *cte;
  if(maxid == 0)
    maxid = 0xffff;

  dptr = buf;
  tcnt = 0;
  tid = 1;
  void *return_value_xmalloc$1;
  void *return_value_xcalloc$2;
  void *return_value_xmalloc$3;
  void *return_value_xcalloc$7;
  void *return_value_xcalloc$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  for( ; !(dptr >= buf + (signed long int)bufsz); tid = tid + 1)
  {
    if(!(maxid >= tid))
      break;

    if(tid >= tdsize)
      parseterminate("Reference to invalid type %d", tid);

    void *v = (void *)dptr;
    ctt = (struct ctf_type *)v;
    get_ctt_size(ctt, &size, &increment);
    dptr = dptr + (signed long int)increment;
    tdp = tdarr[(signed long int)tid];
    if(!(ctt->ctt_name >> 31 == 0u))
      parseterminate("Unable to cope with non-zero strtab id");

    if(!((2147483647u & ctt->ctt_name) == 0u))
      tdp->t_name=xstrdup(sbuf + (signed long int)(ctt->ctt_name & (unsigned int)0x7fffffff));

    else
      tdp->t_name = (char *)(void *)0;
    kind = ((signed int)ctt->ctt_info & 0xf800) >> 11;
    vlen = (signed int)ctt->ctt_info & 0x3ff;
    switch(kind)
    {
      case 1:
      {
        tdp->t_type = (enum stabtype)INTRINSIC;
        tdp->t_size = (signed int)size;
        v = (void *)dptr;
        data = *((unsigned int *)v);
        dptr = dptr + (signed long int)sizeof(unsigned int) /*4ul*/ ;
        encoding = (data & 0xff000000) >> 24;
        return_value_xmalloc$1=xmalloc(sizeof(struct intr) /*20ul*/ );
        ip = (struct intr *)return_value_xmalloc$1;
        ip->intr_type = (enum anonymous$13)INTR_INT;
        ip->intr_signed = (encoding & (unsigned int)0x01) != 0u ? 1 : 0;
        if(!((2u & encoding) == 0u))
          ip->_u._iformat = (char)99;

        else
          if(!((4u & encoding) == 0u))
            ip->_u._iformat = (char)98;

          else
            if(!((8u & encoding) == 0u))
              ip->_u._iformat = (char)118;

            else
              ip->_u._iformat = (char)0;
        ip->intr_offset = (signed int)((data & (unsigned int)0x00ff0000) >> 16);
        ip->intr_nbits = (signed int)(data & (unsigned int)0x0000ffff);
        tdp->t_data.intr = ip;
        break;
      }
      case 2:
      {
        tdp->t_type = (enum stabtype)INTRINSIC;
        tdp->t_size = (signed int)size;
        v = (void *)dptr;
        data = *((unsigned int *)v);
        dptr = dptr + (signed long int)sizeof(unsigned int) /*4ul*/ ;
        return_value_xcalloc$2=xcalloc(sizeof(struct intr) /*20ul*/ );
        ip = (struct intr *)return_value_xcalloc$2;
        ip->intr_type = (enum anonymous$13)INTR_REAL;
        ip->_u._fformat = (signed int)((data & 0xff000000) >> 24);
        ip->intr_offset = (signed int)((data & (unsigned int)0x00ff0000) >> 16);
        ip->intr_nbits = (signed int)(data & (unsigned int)0x0000ffff);
        tdp->t_data.intr = ip;
        break;
      }
      case 3:
      {
        tdp->t_type = (enum stabtype)POINTER;
        tdp->t_data.tdesc = tdarr[(signed long int)ctt->_u._type];
        break;
      }
      case 4:
      {
        tdp->t_type = (enum stabtype)ARRAY;
        tdp->t_size = (signed int)size;
        v = (void *)dptr;
        cta = (struct ctf_array *)v;
        dptr = dptr + (signed long int)sizeof(struct ctf_array) /*8ul*/ ;
        return_value_xmalloc$3=xmalloc(sizeof(struct ardef) /*24ul*/ );
        tdp->t_data.ardef = (struct ardef *)return_value_xmalloc$3;
        tdp->t_data.ardef->ad_contents = tdarr[(signed long int)cta->cta_contents];
        tdp->t_data.ardef->ad_idxtype = tdarr[(signed long int)cta->cta_index];
        tdp->t_data.ardef->ad_nelems = cta->cta_nelems;
        break;
      }
      case 6:

      case 7:
      {
        tdp->t_type = (enum stabtype)(kind == 6 ? STRUCT : UNION);
        tdp->t_size = (signed int)size;
        if(!(size >= 8192ul))
        {
          i = 0;
          mpp = &tdp->t_data.members;
          for( ; !(i >= vlen); mpp = &(*mpp)->ml_next)
          {
            v = (void *)dptr;
            struct ctf_member *ctm = (struct ctf_member *)v;
            dptr = dptr + (signed long int)sizeof(struct ctf_member) /*8ul*/ ;
            void *return_value_xmalloc$4;
            return_value_xmalloc$4=xmalloc(sizeof(struct mlist) /*32ul*/ );
            *mpp = (struct mlist *)return_value_xmalloc$4;
            (*mpp)->ml_name=xstrdup(sbuf + (signed long int)ctm->ctm_name);
            (*mpp)->ml_type = tdarr[(signed long int)ctm->ctm_type];
            (*mpp)->ml_offset = (signed int)ctm->ctm_offset;
            (*mpp)->ml_size = 0;
            i = i + 1;
          }
        }

        else
        {
          i = 0;
          mpp = &tdp->t_data.members;
          for( ; !(i >= vlen); mpp = &(*mpp)->ml_next)
          {
            v = (void *)dptr;
            struct ctf_lmember *ctlm = (struct ctf_lmember *)v;
            dptr = dptr + (signed long int)sizeof(struct ctf_lmember) /*16ul*/ ;
            void *return_value_xmalloc$5;
            return_value_xmalloc$5=xmalloc(sizeof(struct mlist) /*32ul*/ );
            *mpp = (struct mlist *)return_value_xmalloc$5;
            (*mpp)->ml_name=xstrdup(sbuf + (signed long int)ctlm->ctlm_name);
            (*mpp)->ml_type = tdarr[(signed long int)ctlm->ctlm_type];
            (*mpp)->ml_offset = (signed int)((unsigned long int)ctlm->ctlm_offsethi << 32 | (unsigned long int)ctlm->ctlm_offsetlo);
            (*mpp)->ml_size = 0;
            i = i + 1;
          }
        }
        *mpp = (struct mlist *)(void *)0;
        break;
      }
      case 8:
      {
        tdp->t_type = (enum stabtype)ENUM;
        tdp->t_size = (signed int)size;
        i = 0;
        epp = &tdp->t_data.emem;
        for( ; !(i >= vlen); epp = &(*epp)->el_next)
        {
          v = (void *)dptr;
          cte = (struct ctf_enum *)v;
          dptr = dptr + (signed long int)sizeof(struct ctf_enum) /*8ul*/ ;
          void *return_value_xmalloc$6;
          return_value_xmalloc$6=xmalloc(sizeof(struct elist) /*24ul*/ );
          *epp = (struct elist *)return_value_xmalloc$6;
          (*epp)->el_name=xstrdup(sbuf + (signed long int)cte->cte_name);
          (*epp)->el_number = cte->cte_value;
          i = i + 1;
        }
        *epp = (struct elist *)(void *)0;
        break;
      }
      case 9:
      {
        tdp->t_type = (enum stabtype)FORWARD;
        list_add(&td->td_fwdlist, (void *)tdp);
        break;
      }
      case 10:
      {
        tdp->t_type = (enum stabtype)TYPEDEF;
        tdp->t_data.tdesc = tdarr[(signed long int)ctt->_u._type];
        break;
      }
      case 11:
      {
        tdp->t_type = (enum stabtype)VOLATILE;
        tdp->t_data.tdesc = tdarr[(signed long int)ctt->_u._type];
        break;
      }
      case 12:
      {
        tdp->t_type = (enum stabtype)CONST;
        tdp->t_data.tdesc = tdarr[(signed long int)ctt->_u._type];
        break;
      }
      case 5:
      {
        tdp->t_type = (enum stabtype)FUNCTION;
        return_value_xcalloc$7=xcalloc(sizeof(struct fndef) /*32ul*/ );
        tdp->t_data.fndef = (struct fndef *)return_value_xcalloc$7;
        tdp->t_data.fndef->fn_ret = tdarr[(signed long int)ctt->_u._type];
        v = (void *)(dptr + (signed long int)(sizeof(unsigned short int) /*2ul*/  * (unsigned long int)(vlen - 1)));
        if(vlen >= 1)
        {
          if((signed int)*((unsigned short int *)v) == 0)
            tdp->t_data.fndef->fn_vargs = (unsigned int)1;

        }

        tdp->t_data.fndef->fn_nargs = (unsigned int)vlen - tdp->t_data.fndef->fn_vargs;
        return_value_xcalloc$8=xcalloc(sizeof(struct tdesc) /*64ul*/  * (unsigned long int)vlen - (unsigned long int)tdp->t_data.fndef->fn_vargs);
        tdp->t_data.fndef->fn_args = (struct tdesc **)return_value_xcalloc$8;
        i = 0;
        for( ; !(i >= vlen); i = i + 1)
        {
          v = (void *)dptr;
          argid = (signed int)*((unsigned short int *)v);
          dptr = dptr + (signed long int)sizeof(unsigned short int) /*2ul*/ ;
          if(!(argid == 0))
            tdp->t_data.fndef->fn_args[(signed long int)i] = tdarr[(signed long int)argid];

        }
        if(!((1 & vlen) == 0))
          dptr = dptr + (signed long int)sizeof(unsigned short int) /*2ul*/ ;

        break;
      }
      case 13:
      {
        tdp->t_type = (enum stabtype)RESTRICT;
        tdp->t_data.tdesc = tdarr[(signed long int)ctt->_u._type];
        break;
      }
      case 0:
        break;
      default:
        warning("Can't parse unknown CTF type %d\n", kind);
    }
    if(!((0x0400 & (signed int)ctt->ctt_info) >> 10 == 0))
    {
      struct iidesc *ii;
      ii=iidesc_new(tdp->t_name);
      if((signed int)tdp->t_type == STRUCT)
        tmp_if_expr$9 = (_Bool)1;

      else
        tmp_if_expr$9 = (signed int)tdp->t_type == UNION ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$9)
        tmp_if_expr$10 = (_Bool)1;

      else
        tmp_if_expr$10 = (signed int)tdp->t_type == ENUM ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$10)
        ii->ii_type = (enum iitype)II_SOU;

      else
        ii->ii_type = (enum iitype)II_TYPE;
      ii->ii_dtype = tdp;
      hash_add(td->td_iihash, (void *)ii);
      iicnt = iicnt + 1;
    }

    const char *return_value_tdesc_name$11;
    return_value_tdesc_name$11=tdesc_name(tdp);
    debug(3, "Resurrected %d %stype %s (%d)\n", tdp->t_type, ((signed int)ctt->ctt_info & 0x0400) >> 10 != 0 ? "root " : "", return_value_tdesc_name$11, tdp->t_id);
    tcnt = tcnt + 1;
  }
  debug(3, "Resurrected %d types (%d were roots)\n", tcnt, iicnt);
}

// save_type_by_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 82
static signed int save_type_by_id(struct tdesc *tdp, struct tdesc **tdpp, void *private)
{
  struct iiburst *iiburst = (struct iiburst *)private;
  if(!(iiburst->iib_maxtypeid >= tdp->t_id))
    iiburst->iib_maxtypeid = tdp->t_id;

  slist_add(&iiburst->iib_types, (void *)tdp, tdesc_idcmp);
  return 1;
}

// set_terminate_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 439
void set_terminate_cleanup(void (*cleanup)(void))
{
  terminate_cleanup$link1 = cleanup;
}

// shdr_to_gelf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 163
static void shdr_to_gelf(const struct anonymous$19 *src, struct anonymous$4 *dst)
{
  dst->sh_name = src->sh_name;
  dst->sh_type = src->sh_type;
  dst->sh_flags = (unsigned long int)src->sh_flags;
  dst->sh_addr = (unsigned long int)src->sh_addr;
  dst->sh_offset = (unsigned long int)src->sh_offset;
  dst->sh_size = (unsigned long int)src->sh_size;
  dst->sh_link = src->sh_link;
  dst->sh_info = src->sh_info;
  dst->sh_addralign = (unsigned long int)src->sh_addralign;
  dst->sh_entsize = (unsigned long int)src->sh_entsize;
}

// slist_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 59
void slist_add(struct list **list, void *data, signed int (*cmp)(void *, void *))
{
  struct list **nextp = list;
  if(!(*nextp == ((struct list *)NULL)))
  {
    signed int return_value;
    return_value=cmp((*nextp)->l_data, data);
    if(!(return_value >= 1))
      nextp = &(*nextp)->l_next;

  }

  list_add(nextp, data);
}

// slist_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/list.c line 190
void slist_merge(struct list **list1p, struct list *list2, signed int (*cmp)(void *, void *))
{
  struct list *list1;
  struct list *next2;
  struct list *last1 = (struct list *)(void *)0;
  if(*list1p == ((struct list *)NULL))
    *list1p = list2;

  else
  {
    list1 = *list1p;
    if(!(list2 == ((struct list *)NULL)))
    {
      signed int return_value;
      return_value=cmp(list1->l_data, list2->l_data);
      if(return_value >= 1)
      {
        next2 = list2->l_next;
        if(last1 == ((struct list *)NULL))
        {
          last1 = list2;
          *list1p = last1;
          list2->l_next = list1;
        }

        else
        {
          list2->l_next = list1;
          last1->l_next = list2;
          last1 = list2;
        }
        list2 = next2;
      }

      else
      {
        last1 = list1;
        list1 = list1->l_next;
        if(list1 == ((struct list *)NULL))
        {
          last1->l_next = list2;
          list2 = (struct list *)(void *)0;
        }

      }
    }

  }
}

// sort_iidescs
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 337
static struct iiburst * sort_iidescs(struct _Elf *elf, const char *file, struct tdata *td, signed int fuzzymatch, signed int dynsym)
{
  struct iiburst *iiburst;
  struct _Elf_Scn *scn;
  struct anonymous$4 shdr;
  struct _Elf_Data *data;
  struct _Elf_Data *strdata;
  signed int i;
  signed int stidx;
  signed int nent;
  struct iidesc_match match;
  match.iim_fuzzy = fuzzymatch;
  match.iim_file = (char *)(void *)0;
  stidx=findelfsecidx(elf, file, dynsym != 0 ? ".dynsym" : ".symtab");
  if(!(stidx >= 0))
    terminate("%s: Can't open symbol table\n", file);

  scn=elf_getscn(elf, (unsigned long int)stidx);
  data=elf_getdata(scn, (struct _Elf_Data *)(void *)0);
  gelf_getshdr(scn, &shdr);
  nent = (signed int)(shdr.sh_size / shdr.sh_entsize);
  scn=elf_getscn(elf, (unsigned long int)shdr.sh_link);
  strdata=elf_getdata(scn, (struct _Elf_Data *)(void *)0);
  iiburst=iiburst_new(td, nent);
  i = 0;
  for( ; !(i >= nent); i = i + 1)
  {
    struct anonymous$5 sym;
    char *bname;
    struct iidesc **tolist;
    struct anonymous$5 ssym;
    struct iidesc_match smatch;
    signed int *curr;
    struct iidesc *iidesc;
    struct anonymous$5 *return_value_gelf_getsym$1;
    return_value_gelf_getsym$1=gelf_getsym(data, i, &sym);
    if(return_value_gelf_getsym$1 == ((struct anonymous$5 *)NULL))
      elfterminate(file, "Couldn't read symbol %d", i);

    match.iim_name = (char *)strdata->d_buf + (signed long int)sym.st_name;
    match.iim_bind = (unsigned char)((signed int)(unsigned char)sym.st_info >> 4);
    switch((signed int)sym.st_info & 0xf)
    {
      case 4:
      {
        bname=strrchr(match.iim_name, 47);
        match.iim_file = bname == (char *)(void *)0 ? match.iim_name : bname + (signed long int)1;
        goto __CPROVER_DUMP_L13;
      }
      case 1:
      {
        tolist = iiburst->iib_objts;
        curr = &iiburst->iib_nobjts;
        break;
      }
      case 2:
      {
        tolist = iiburst->iib_funcs;
        curr = &iiburst->iib_nfuncs;
        break;
      }
      default:
        goto __CPROVER_DUMP_L13;
    }
    signed int return_value_ignore_symbol$2;
    return_value_ignore_symbol$2=ignore_symbol(&sym, match.iim_name);
    if(return_value_ignore_symbol$2 == 0)
    {
      iidesc=find_iidesc(td, &match);
      if(!(iidesc == ((struct iidesc *)NULL)))
      {
        tolist[(signed long int)*curr] = iidesc;
        iidesc->ii_flags = iidesc->ii_flags | 0x1;
        *curr = *curr + 1;
      }

      else
      {
        signed int return_value_check_for_weak$3;
        return_value_check_for_weak$3=check_for_weak(&sym, match.iim_file, data, nent, strdata, &ssym, &smatch.iim_file);
        if(return_value_check_for_weak$3 == 0)
          *curr = *curr + 1;

        else
        {
          smatch.iim_fuzzy = fuzzymatch;
          smatch.iim_name = (char *)strdata->d_buf + (signed long int)ssym.st_name;
          smatch.iim_bind = (unsigned char)((signed int)(unsigned char)ssym.st_info >> 4);
          debug(3, "Weak symbol %s resolved to %s\n", match.iim_name, smatch.iim_name);
          iidesc=find_iidesc(td, &smatch);
          if(!(iidesc == ((struct iidesc *)NULL)))
          {
            tolist[(signed long int)*curr]=copy_from_strong(td, &sym, iidesc, match.iim_name, match.iim_file);
            tolist[(signed long int)*curr]->ii_flags = tolist[(signed long int)*curr]->ii_flags | 0x1;
          }

          *curr = *curr + 1;
        }
      }
    }


  __CPROVER_DUMP_L13:
    ;
  }
  iiburst_types(iiburst);
  tdata_label_newmax(td, iiburst->iib_maxtypeid);
  return iiburst;
}

// start_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 694
static void start_threads(struct workqueue *wq)
{
  struct anonymous$20 sets;
  signed int i;
  sigemptyset(&sets);
  sigaddset(&sets, 2);
  sigaddset(&sets, 3);
  sigaddset(&sets, 15);
  pthread_sigmask(0, &sets, (struct anonymous$20 *)(void *)0);
  i = 0;
  for( ; !(i >= wq->wq_nthreads); i = i + 1)
    pthread_create(&wq->wq_thread[(signed long int)i], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))worker_thread, (void *)wq);
  signal(2, handle_sig);
  signal(3, handle_sig);
  signal(15, handle_sig);
  pthread_sigmask(1, &sets, (struct anonymous$20 *)(void *)0);
}

// strcompare
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 733
static signed int strcompare(const void *p1, const void *p2)
{
  char *s1 = *((char **)p1);
  char *s2 = *((char **)p2);
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(s1, s2);
  return return_value_strcmp$1;
}

// streq
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 433
signed int streq(const char *s1, const char *s2)
{
  signed int return_value_strcmp$1;
  if(s1 == ((const char *)NULL))
  {
    if(!(s2 == ((const char *)NULL)))
      return 0;

  }

  else
    if(s2 == ((const char *)NULL))
      return 0;

    else
    {
      return_value_strcmp$1=strcmp(s1, s2);
      if(!(return_value_strcmp$1 == 0))
        return 0;

    }
  return 1;
}

// strtab_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 107
static signed int strtab_compare(struct strtab *sp, struct strhash *hp, const char *str, unsigned long int len)
{
  unsigned long int b = hp->str_buf;
  const char *buf = hp->str_data;
  unsigned long int resid;
  unsigned long int n;
  signed int rv;
  for( ; !(len == 0ul); len = len - n)
  {
    if(buf == sp->str_bufs[(signed long int)b] + (signed long int)sp->str_bufsz)
    {
      b = b + 1ul;
      buf = sp->str_bufs[(signed long int)b];
    }

    resid = (unsigned long int)((sp->str_bufs[(signed long int)b] + (signed long int)sp->str_bufsz) - buf);
    n = resid < len ? resid : len;
    rv=strncmp(buf, str, n);
    if(!(rv == 0))
      return rv;

    buf = buf + (signed long int)n;
    str = str + (signed long int)n;
  }
  return 0;
}

// strtab_copyin
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 133
static void strtab_copyin(struct strtab *sp, const char *str, unsigned long int len)
{
  unsigned long int b = sp->str_nbufs - (unsigned long int)1;
  unsigned long int resid;
  unsigned long int n;
  for( ; !(len == 0ul); len = len - n)
  {
    if(sp->str_ptr == sp->str_bufs[(signed long int)b] + (signed long int)sp->str_bufsz)
    {
      strtab_grow(sp);
      b = b + 1ul;
    }

    resid = (unsigned long int)((sp->str_bufs[(signed long int)b] + (signed long int)sp->str_bufsz) - sp->str_ptr);
    n = resid < len ? resid : len;
    bcopy((const void *)str, (void *)sp->str_ptr, n);
    sp->str_ptr = sp->str_ptr + (signed long int)n;
    str = str + (signed long int)n;
  }
}

// strtab_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 57
extern void strtab_create(struct strtab *sp)
{
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)211 * sizeof(struct strhash *) /*8ul*/ );
  sp->str_hash = (struct strhash **)return_value_xcalloc$1;
  sp->str_hashsz = (unsigned long int)211;
  sp->str_bufs = (char **)(void *)0;
  sp->str_ptr = (char *)(void *)0;
  sp->str_nbufs = (unsigned long int)0;
  sp->str_bufsz = (unsigned long int)(64 * 1024);
  sp->str_nstrs = (unsigned long int)1;
  sp->str_size = (unsigned long int)1;
  strtab_grow(sp);
  char *tmp_post$2 = sp->str_ptr;
  sp->str_ptr = sp->str_ptr + 1l;
  *tmp_post$2 = (char)0;
}

// strtab_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 58
extern void strtab_destroy(struct strtab *sp)
{
  struct strhash *hp;
  struct strhash *hq;
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= sp->str_hashsz); i = i + 1ul)
  {
    hp = sp->str_hash[(signed long int)i];
    for( ; !(hp == ((struct strhash *)NULL)); hp = hq)
    {
      hq = hp->str_next;
      free((void *)hp);
    }
  }
  i = (unsigned long int)0;
  for( ; !(i >= sp->str_nbufs); i = i + 1ul)
    free((void *)sp->str_bufs[(signed long int)i]);
  free((void *)sp->str_hash);
  free((void *)sp->str_bufs);
}

// strtab_grow
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 42
static void strtab_grow(struct strtab *sp)
{
  sp->str_nbufs = sp->str_nbufs + 1ul;
  void *return_value_xrealloc$1;
  return_value_xrealloc$1=xrealloc((void *)sp->str_bufs, sp->str_nbufs * sizeof(char *) /*8ul*/ );
  sp->str_bufs = (char **)return_value_xrealloc$1;
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc(sp->str_bufsz);
  sp->str_ptr = (char *)return_value_xmalloc$2;
  sp->str_bufs[(signed long int)(sp->str_nbufs - (unsigned long int)1)] = sp->str_ptr;
}

// strtab_hash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 87
static unsigned long int strtab_hash(const char *key, unsigned long int *len)
{
  unsigned long int g;
  unsigned long int h = (unsigned long int)0;
  const char *p;
  unsigned long int n = (unsigned long int)0;
  p = key;
  for( ; !((signed int)*p == 0); n = n + 1ul)
  {
    h = (h << 4) + (unsigned long int)*p;
    g = h & (unsigned long int)0xf0000000;
    if(!(g == 0ul))
    {
      h = h ^ g >> 24;
      h = h ^ g;
    }

    p = p + 1l;
  }
  *len = n;
  return h;
}

// strtab_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 59
extern unsigned long int strtab_insert(struct strtab *sp, const char *str)
{
  struct strhash *hp;
  unsigned long int len;
  unsigned long int h;
  _Bool tmp_if_expr$1;
  if(str == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)str[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (unsigned long int)0;

  else
  {
    unsigned long int return_value_strtab_hash$2;
    return_value_strtab_hash$2=strtab_hash(str, &len);
    h = return_value_strtab_hash$2 % sp->str_hashsz;
    hp = sp->str_hash[(signed long int)h];
    for( ; !(hp == ((struct strhash *)NULL)); hp = hp->str_next)
    {
      signed int return_value_strtab_compare$3;
      return_value_strtab_compare$3=strtab_compare(sp, hp, str, len + (unsigned long int)1);
      if(return_value_strtab_compare$3 == 0)
        return hp->str_off;

    }
    void *return_value_xmalloc$4;
    return_value_xmalloc$4=xmalloc(sizeof(struct strhash) /*40ul*/ );
    hp = (struct strhash *)return_value_xmalloc$4;
    hp->str_data = sp->str_ptr;
    hp->str_buf = sp->str_nbufs - (unsigned long int)1;
    hp->str_off = sp->str_size;
    hp->str_len = len;
    hp->str_next = sp->str_hash[(signed long int)h];
    sp->str_hash[(signed long int)h] = hp;
    strtab_copyin(sp, str, len + (unsigned long int)1);
    sp->str_nstrs = sp->str_nstrs + 1ul;
    sp->str_size = sp->str_size + len + (unsigned long int)1;
    return hp->str_off;
  }
}

// strtab_print
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.c line 231
extern void strtab_print(const struct strtab *sp)
{
  const struct strhash *hp;
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= sp->str_hashsz); i = i + 1ul)
  {
    hp = sp->str_hash[(signed long int)i];
    for( ; !(hp == ((const struct strhash *)NULL)); hp = hp->str_next)
    {
      const char *buf = hp->str_data;
      unsigned long int b = hp->str_buf;
      unsigned long int resid;
      unsigned long int len;
      unsigned long int n;
      printf("[%lu] %lu \"", (unsigned long int)hp->str_off, b);
      len = hp->str_len;
      for( ; !(len == 0ul); len = len - n)
      {
        if(buf == sp->str_bufs[(signed long int)b] + (signed long int)sp->str_bufsz)
        {
          b = b + 1ul;
          buf = sp->str_bufs[(signed long int)b];
        }

        resid = (unsigned long int)((sp->str_bufs[(signed long int)b] + (signed long int)sp->str_bufsz) - buf);
        n = resid < len ? resid : len;
        printf("%.*s", (signed int)n, buf);
        buf = buf + (signed long int)n;
      }
      printf("\"\n");
    }
  }
}

// strtab_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 60
extern unsigned long int strtab_size(const struct strtab *sp)
{
  return sp->str_size;
}

// strtab_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/strtab.h line 61
extern signed long int strtab_write(const struct strtab *sp, signed long int (*func)(void *, unsigned long int, void *), void *priv)
{
  signed long int res;
  signed long int total = (signed long int)0;
  unsigned long int i;
  unsigned long int n;
  i = (unsigned long int)0;
  if(!(i >= sp->str_nbufs))
  {
    if(i == sp->str_nbufs + 18446744073709551615ul)
      n = (unsigned long int)(sp->str_ptr - sp->str_bufs[(signed long int)i]);

    else
      n = sp->str_bufsz;
    res=func((void *)sp->str_bufs[(signed long int)i], n, priv);
    if(res >= 1l)
    {
      i = i + 1ul;
      total = total + res;
    }

  }

  if(total == 0l)
  {
    if(sp->str_size == 0ul)
      goto __CPROVER_DUMP_L5;

    return (signed long int)-1;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    return total;
  }
}

// sym_to_gelf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/common/ctf/ctf_open.c line 92
static struct anonymous$5 * sym_to_gelf(const struct anonymous$24 *src, struct anonymous$5 *dst)
{
  dst->st_name = src->st_name;
  dst->st_value = (unsigned long int)src->st_value;
  dst->st_size = (unsigned long int)src->st_size;
  dst->st_info = src->st_info;
  dst->st_other = src->st_other;
  dst->st_shndx = src->st_shndx;
  return dst;
}

// symit_curfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 381
char * symit_curfile(struct symit_data *si)
{
  return si->si_curfile;
}

// symit_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 369
void symit_free(struct symit_data *si)
{
  free((void *)si);
}

// symit_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 383
char * symit_name(struct symit_data *si)
{
  return si->si_curname;
}

// symit_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/input.c line 343
struct symit_data * symit_new(struct _Elf *elf, const char *file)
{
  struct symit_data *si;
  struct _Elf_Scn *scn;
  signed int symtabidx;
  symtabidx=findelfsecidx(elf, file, ".symtab");
  _Bool tmp_if_expr$3;
  struct anonymous$4 *return_value_gelf_getshdr$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  if(!(symtabidx >= 0))
    return (struct symit_data *)(void *)0;

  else
  {
    void *return_value_xcalloc$1;
    return_value_xcalloc$1=xcalloc(sizeof(struct symit_data) /*128ul*/ );
    si = (struct symit_data *)return_value_xcalloc$1;
    scn=elf_getscn(elf, (unsigned long int)symtabidx);
    if(scn == ((struct _Elf_Scn *)NULL))
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_gelf_getshdr$2=gelf_getshdr(scn, &si->si_shdr);
      tmp_if_expr$3 = return_value_gelf_getshdr$2 == (struct anonymous$4 *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      si->si_symd=elf_getdata(scn, (struct _Elf_Data *)(void *)0);
      tmp_if_expr$4 = si->si_symd == (struct _Elf_Data *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
      elfterminate(file, "Cannot read .symtab");

    scn=elf_getscn(elf, (unsigned long int)si->si_shdr.sh_link);
    if(scn == ((struct _Elf_Scn *)NULL))
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      si->si_strd=elf_getdata(scn, (struct _Elf_Data *)(void *)0);
      tmp_if_expr$5 = si->si_strd == (struct _Elf_Data *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
      elfterminate(file, "Cannot read strings for .symtab");

    si->si_nument = (signed int)(si->si_shdr.sh_size / si->si_shdr.sh_entsize);
    return si;
  }
}

// symit_next
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 382
struct anonymous$5 * symit_next(struct symit_data *si, signed int type)
{
  struct anonymous$5 sym;
  char *bname;
  signed int check_sym = (signed int)(type == 1 || type == 2);
  char *tmp_if_expr$1;
  signed int return_value_ignore_symbol$2;
  for( ; !(si->si_next >= si->si_nument); si->si_next = si->si_next + 1)
  {
    gelf_getsym(si->si_symd, si->si_next, &si->si_cursym);
    gelf_getsym(si->si_symd, si->si_next, &sym);
    si->si_curname = (char *)si->si_strd->d_buf + (signed long int)sym.st_name;
    if((0xf & (signed int)sym.st_info) == 4)
    {
      bname=strrchr(si->si_curname, 47);
      if(bname == ((char *)NULL))
        tmp_if_expr$1 = si->si_curname;

      else
        tmp_if_expr$1 = bname + (signed long int)1;
      si->si_curfile = tmp_if_expr$1;
    }

    if(!((signed int)sym.st_shndx == 0) && (0xf & (signed int)sym.st_info) == type)
    {
      if(!(check_sym == 0))
      {
        return_value_ignore_symbol$2=ignore_symbol(&sym, si->si_curname);
        if(!(return_value_ignore_symbol$2 == 0))
          goto __CPROVER_DUMP_L6;

      }

      si->si_next = si->si_next + 1;
      return &si->si_cursym;
    }


  __CPROVER_DUMP_L6:
    ;
  }
  return (struct anonymous$5 *)(void *)0;
}

// symit_reset
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 380
void symit_reset(struct symit_data *si)
{
  si->si_next = 0;
}

// tdata_build_hashes
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 416
void tdata_build_hashes(struct tdata *td)
{
  tdata_build_hashes_common(td, td->td_iihash);
}

// tdata_build_hashes_common
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 446
static void tdata_build_hashes_common(struct tdata *td, struct hash *hash)
{
  iitraverse_hash(hash, &td->td_curvgen, (signed int (**)(struct tdesc *, struct tdesc **, void *))(void *)0, (signed int (**)(struct tdesc *, struct tdesc **, void *))(void *)0, build_hashes_cbs, (void *)td);
}

// tdata_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 415
void tdata_free(struct tdata *td)
{
  hash_free(td->td_iihash, iidesc_free, (void *)0);
  hash_free(td->td_layouthash, tdesc_free_cb, (void *)0);
  hash_free(td->td_idhash, (void (*)(void *, void *))(void *)0, (void *)0);
  list_free(td->td_fwdlist, (void (*)(void *, void *))(void *)0, (void *)0);
  tdata_label_free(td);
  free((void *)td->td_parlabel);
  free((void *)td->td_parname);
  pthread_mutex_destroy(&td->td_mergelock);
  free((void *)td);
}

// tdata_label_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 425
void tdata_label_add(struct tdata *td, const char *label, signed int idx)
{
  struct labelent *le;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct labelent) /*16ul*/ );
  le = (struct labelent *)return_value_xmalloc$1;
  le->le_name=xstrdup(label);
  signed int tmp_if_expr$2;
  if(idx == -1)
    tmp_if_expr$2 = td->td_nextid - 1;

  else
    tmp_if_expr$2 = idx;
  le->le_idx = tmp_if_expr$2;
  slist_add(&td->td_labels, (void *)le, tdata_label_cmp);
}

// tdata_label_cmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 271
static signed int tdata_label_cmp(void *arg1, void *arg2)
{
  struct labelent *le1 = (struct labelent *)arg1;
  struct labelent *le2 = (struct labelent *)arg2;
  return le1->le_idx - le2->le_idx;
}

// tdata_label_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 319
signed int tdata_label_find(struct tdata *td, char *label)
{
  struct labelent let;
  struct labelent *ret;
  signed int return_value_streq$3;
  return_value_streq$3=streq(label, "BASE");
  signed int tmp_if_expr$2;
  if(!(return_value_streq$3 == 0))
  {
    void *return_value_list_first$1;
    return_value_list_first$1=list_first(td->td_labels);
    ret = (struct labelent *)return_value_list_first$1;
    if(!(ret == ((struct labelent *)NULL)))
      tmp_if_expr$2 = ret->le_idx;

    else
      tmp_if_expr$2 = -1;
    return tmp_if_expr$2;
  }

  let.le_name = label;
  void *return_value_list_find$4;
  return_value_list_find$4=list_find(td->td_labels, (void *)&let, tdata_label_find_cb);
  ret = (struct labelent *)return_value_list_find$4;
  if(ret == ((struct labelent *)NULL))
    return -1;

  else
    return ret->le_idx;
}

// tdata_label_find_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 311
static signed int tdata_label_find_cb(void *arg1, void *arg2)
{
  struct labelent *le = (struct labelent *)arg1;
  struct labelent *tmpl = (struct labelent *)arg2;
  signed int return_value_streq$1;
  return_value_streq$1=streq(le->le_name, tmpl->le_name);
  return return_value_streq$1;
}

// tdata_label_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 428
void tdata_label_free(struct tdata *td)
{
  list_free(td->td_labels, tdata_label_free_cb, (void *)0);
  td->td_labels = (struct list *)(void *)0;
}

// tdata_label_free_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 360
static void tdata_label_free_cb(void *arg, void *private)
{
  struct labelent *le = (struct labelent *)arg;
  if(!(le->le_name == ((char *)NULL)))
    free((void *)le->le_name);

  free((void *)le);
}

// tdata_label_newmax
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 430
void tdata_label_newmax(struct tdata *td, signed int newmax)
{
  list_iter(td->td_labels, tdata_label_newmax_cb, (void *)&newmax);
}

// tdata_label_newmax_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 339
static signed int tdata_label_newmax_cb(void *data, void *arg)
{
  struct labelent *le = (struct labelent *)data;
  signed int *newmaxp = (signed int *)arg;
  if(!(*newmaxp >= le->le_idx))
  {
    le->le_idx = *newmaxp;
    return 1;
  }

  else
    return 0;
}

// tdata_label_top
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 426
struct labelent * tdata_label_top(struct tdata *td)
{
  struct labelent *top = (struct labelent *)(void *)0;
  list_iter(td->td_labels, tdata_label_top_cb, (void *)&top);
  return top;
}

// tdata_label_top_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 290
static signed int tdata_label_top_cb(void *data, void *arg)
{
  struct labelent *le = (struct labelent *)data;
  struct labelent **topp = (struct labelent **)arg;
  *topp = le;
  return 1;
}

// tdata_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 429
void tdata_merge(struct tdata *td1, struct tdata *td2)
{
  signed int tmp_if_expr$1;
  if(!(td2->td_curemark >= td1->td_curemark))
    tmp_if_expr$1 = td1->td_curemark;

  else
    tmp_if_expr$1 = td2->td_curemark;
  td1->td_curemark = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(td2->td_curvgen >= td1->td_curvgen))
    tmp_if_expr$2 = td1->td_curvgen;

  else
    tmp_if_expr$2 = td2->td_curvgen;
  td1->td_curvgen = tmp_if_expr$2;
  signed int tmp_if_expr$3;
  if(!(td2->td_nextid >= td1->td_nextid))
    tmp_if_expr$3 = td1->td_nextid;

  else
    tmp_if_expr$3 = td2->td_nextid;
  td1->td_nextid = tmp_if_expr$3;
  hash_merge(td1->td_iihash, td2->td_iihash);
  tdata_build_hashes_common(td1, td2->td_iihash);
  list_concat(&td1->td_fwdlist, td2->td_fwdlist);
  td2->td_fwdlist = (struct list *)(void *)0;
  slist_merge(&td1->td_labels, td2->td_labels, tdata_label_cmp);
  td2->td_labels = (struct list *)(void *)0;
  hash_free(td2->td_layouthash, (void (*)(void *, void *))(void *)0, (void *)0);
  td2->td_layouthash = (struct hash *)(void *)0;
  hash_free(td2->td_iihash, (void (*)(void *, void *))(void *)0, (void *)0);
  td2->td_iihash = (struct hash *)(void *)0;
  tdata_free(td2);
}

// tdata_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 414
struct tdata * tdata_new(void)
{
  struct tdata *new;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct tdata) /*120ul*/ );
  new = (struct tdata *)return_value_xcalloc$1;
  new->td_layouthash=hash_new(8191, tdesc_layouthash, tdesc_layoutcmp);
  new->td_idhash=hash_new(997, tdesc_idhash, tdesc_idcmp);
  new->td_iihash=hash_new(8191, iidesc_hash, (signed int (*)(void *, void *))(void *)0);
  new->td_nextid = 1;
  new->td_curvgen = 1;
  pthread_mutex_init(&new->td_mergelock, (const union anonymous$10 *)(void *)0);
  return new;
}

// tdesc_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 265
void tdesc_free(struct tdesc *tdp)
{
  tdesc_free_cb((void *)tdp, (void *)0);
}

// tdesc_free_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 252
static void tdesc_free_cb(void *arg, void *private)
{
  struct tdesc *tdp = (struct tdesc *)arg;
  if(!(tdp->t_name == ((char *)NULL)))
    free((void *)tdp->t_name);

  if(!(free_cbs[(signed long int)tdp->t_type] == ((void (*)(struct tdesc *))NULL)))
    free_cbs[(signed long int)tdp->t_type](tdp);

  free((void *)tdp);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// tdesc_idcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 419
signed int tdesc_idcmp(void *arg1, void *arg2)
{
  struct tdesc *tdp1 = (struct tdesc *)arg1;
  struct tdesc *tdp2 = (struct tdesc *)arg2;
  if(tdp1->t_id == tdp2->t_id)
    return 0;

  else
    return tdp1->t_id > tdp2->t_id ? 1 : -1;
}

// tdesc_idhash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 129
signed int tdesc_idhash(signed int nbuckets, void *data)
{
  struct tdesc *tdp = (struct tdesc *)data;
  return tdp->t_id % nbuckets;
}

// tdesc_layoutcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 423
signed int tdesc_layoutcmp(void *arg1, void *arg2)
{
  struct tdesc *tdp1 = (struct tdesc *)arg1;
  struct tdesc *tdp2 = (struct tdesc *)arg2;
  signed int return_value_strcmp$1;
  if(tdp1->t_name == ((char *)NULL))
  {
    if(tdp2->t_name == ((char *)NULL))
      return 0;

    else
      return -1;
  }

  else
    if(tdp2->t_name == ((char *)NULL))
      return 1;

    else
    {
      return_value_strcmp$1=strcmp(tdp1->t_name, tdp2->t_name);
      return return_value_strcmp$1;
    }
}

// tdesc_layouthash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 422
signed int tdesc_layouthash(signed int nbuckets, void *node)
{
  struct tdesc *tdp = (struct tdesc *)node;
  char *name = (char *)(void *)0;
  unsigned long int h = (unsigned long int)0;
  if(!(tdp->t_name == ((char *)NULL)))
    name = tdp->t_name;

  else
    switch((signed int)tdp->t_type)
    {
      case POINTER:

      case TYPEDEF:

      case VOLATILE:

      case CONST:

      case RESTRICT:
      {
        name = tdp->t_data.tdesc->t_name;
        break;
      }
      case FUNCTION:
      {
        h = (unsigned long int)(tdp->t_data.fndef->fn_nargs + tdp->t_data.fndef->fn_vargs);
        name = tdp->t_data.fndef->fn_ret->t_name;
        break;
      }
      case ARRAY:
      {
        h = (unsigned long int)tdp->t_data.ardef->ad_nelems;
        name = tdp->t_data.ardef->ad_contents->t_name;
        break;
      }
      case STRUCT:

      case UNION:
      {
        if(!(tdp->t_data.members == ((struct mlist *)NULL)))
          name = tdp->t_data.members->ml_name;

        break;
      }
      case ENUM:
      {
        name = tdp->t_data.emem->el_name;
        break;
      }
      default:
        warning("Unexpected unnamed %d tdesc (ID %d)\n", tdp->t_type, tdp->t_id);
    }
  signed int return_value_hash_name$1;
  if(!(name == ((char *)NULL)))
  {
    return_value_hash_name$1=hash_name(nbuckets, name);
    return return_value_hash_name$1;
  }

  else
    return (signed int)(h % (unsigned long int)nbuckets);
}

// tdesc_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 417
const char * tdesc_name(struct tdesc *tdp)
{
  char *tmp_if_expr$1;
  if(tdp->t_name == ((char *)NULL))
    tmp_if_expr$1 = "(anon)";

  else
    tmp_if_expr$1 = tdp->t_name;
  return tmp_if_expr$1;
}

// tdesc_namecmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 169
signed int tdesc_namecmp(void *arg1, void *arg2)
{
  struct tdesc *tdp1 = (struct tdesc *)arg1;
  struct tdesc *tdp2 = (struct tdesc *)arg2;
  signed int return_value_streq$1;
  return_value_streq$1=streq(tdp1->t_name, tdp2->t_name);
  return (signed int)!(return_value_streq$1 != 0);
}

// tdesc_namehash
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/tdata.c line 148
signed int tdesc_namehash(signed int nbuckets, void *data)
{
  struct tdesc *tdp = (struct tdesc *)data;
  unsigned long int h;
  unsigned long int g;
  char *c;
  if(tdp->t_name == ((char *)NULL))
    return 0;

  else
  {
    h = (unsigned long int)0;
    c = tdp->t_name;
    for( ; !(*c == 0); c = c + 1l)
    {
      h = (h << 4) + (unsigned long int)*c;
      g = h & (unsigned long int)0xf0000000;
      if(!(g == 0ul))
      {
        h = h ^ g >> 24;
        h = h ^ g;
      }

    }
    return (signed int)(h % (unsigned long int)nbuckets);
  }
}

// tdtrav_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 79
static signed int tdtrav_array(struct tdesc *this, struct tdtrav_data *tdtd)
{
  struct ardef *ardef = this->t_data.ardef;
  signed int rc;
  rc=tdtraverse(ardef->ad_contents, &ardef->ad_contents, tdtd);
  if(!(rc >= 0))
    return rc;

  else
  {
    signed int return_value_tdtraverse$1;
    return_value_tdtraverse$1=tdtraverse(ardef->ad_idxtype, &ardef->ad_idxtype, tdtd);
    return return_value_tdtraverse$1;
  }
}

// tdtrav_assert
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 65
signed int tdtrav_assert(struct tdesc *node, struct tdesc **nodep, void *private)
{
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c */
  assert(1 == 0);
  return -1;
}

// tdtrav_func
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 61
static signed int tdtrav_func(struct tdesc *this, struct tdtrav_data *tdtd)
{
  struct fndef *fn = this->t_data.fndef;
  signed int i;
  signed int rc;
  rc=tdtraverse(fn->fn_ret, &fn->fn_ret, tdtd);
  if(!(rc >= 0))
    return rc;

  else
  {
    i = 0;
    for( ; !(i >= (signed int)fn->fn_nargs); i = i + 1)
    {
      rc=tdtraverse(fn->fn_args[(signed long int)i], &fn->fn_args[(signed long int)i], tdtd);
      if(!(rc >= 0))
        return rc;

    }
    return 0;
  }
}

// tdtrav_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.h line 55
void tdtrav_init(struct tdtrav_data *tdtd, signed int *vgenp, signed int (**firstops)(struct tdesc *, struct tdesc **, void *), signed int (**preops)(struct tdesc *, struct tdesc **, void *), signed int (**postops)(struct tdesc *, struct tdesc **, void *), void *private)
{
  *vgenp = *vgenp + 1;
  tdtd->vgen = *vgenp;
  signed int (**tmp_if_expr$1)(struct tdesc *, struct tdesc **, void *);
  if(!(firstops == ((signed int (**)(struct tdesc *, struct tdesc **, void *))NULL)))
    tmp_if_expr$1 = firstops;

  else
    tmp_if_expr$1 = tdnops;
  tdtd->firstops = tmp_if_expr$1;
  signed int (**tmp_if_expr$2)(struct tdesc *, struct tdesc **, void *);
  if(!(preops == ((signed int (**)(struct tdesc *, struct tdesc **, void *))NULL)))
    tmp_if_expr$2 = preops;

  else
    tmp_if_expr$2 = tdnops;
  tdtd->preops = tmp_if_expr$2;
  signed int (**tmp_if_expr$3)(struct tdesc *, struct tdesc **, void *);
  if(!(postops == ((signed int (**)(struct tdesc *, struct tdesc **, void *))NULL)))
    tmp_if_expr$3 = postops;

  else
    tmp_if_expr$3 = tdnops;
  tdtd->postops = tmp_if_expr$3;
  tdtd->private = private;
}

// tdtrav_plain
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 55
static signed int tdtrav_plain(struct tdesc *this, struct tdtrav_data *tdtd)
{
  signed int return_value_tdtraverse$1;
  return_value_tdtraverse$1=tdtraverse(this->t_data.tdesc, &this->t_data.tdesc, tdtd);
  return return_value_tdtraverse$1;
}

// tdtrav_su
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 92
static signed int tdtrav_su(struct tdesc *this, struct tdtrav_data *tdtd)
{
  struct mlist *ml;
  signed int rc = 0;
  ml = this->t_data.members;
  for( ; !(ml == ((struct mlist *)NULL)); ml = ml->ml_next)
  {
    rc=tdtraverse(ml->ml_type, &ml->ml_type, tdtd);
    if(!(rc >= 0))
      return rc;

  }
  return rc;
}

// tdtraverse
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/traverse.c line 149
signed int tdtraverse(struct tdesc *this, struct tdesc **thisp, struct tdtrav_data *tdtd)
{
  signed int (*travcb)(struct tdesc *, struct tdesc **, void *);
  signed int (*descender)(struct tdesc *, struct tdtrav_data *);
  signed int descend = 1;
  signed int rc;
  travcb = tdtd->firstops[(signed long int)this->t_type];
  if(!(travcb == ((signed int (*)(struct tdesc *, struct tdesc **, void *))NULL)))
  {
    rc=travcb(this, thisp, tdtd->private);
    if(!(rc >= 0))
      return rc;

    else
      if(rc == 0)
        descend = 0;

  }

  if(this->t_vgen == tdtd->vgen)
    return 1;

  else
  {
    this->t_vgen = tdtd->vgen;
    if(!(descend == 0))
    {
      travcb = tdtd->preops[(signed long int)this->t_type];
      if(!(travcb == ((signed int (*)(struct tdesc *, struct tdesc **, void *))NULL)))
      {
        rc=travcb(this, thisp, tdtd->private);
        if(!(rc >= 0))
          return rc;

        else
          if(rc == 0)
            descend = 0;

      }

    }

    if(!(descend == 0))
    {
      descender = tddescenders[(signed long int)this->t_type];
      if(!(descender == ((signed int (*)(struct tdesc *, struct tdtrav_data *))NULL)))
      {
        rc=descender(this, tdtd);
        if(!(rc >= 0))
          return rc;

      }

      travcb = tdtd->postops[(signed long int)this->t_type];
      if(travcb == ((signed int (*)(struct tdesc *, struct tdesc **, void *))NULL))
        goto __CPROVER_DUMP_L7;

      rc=travcb(this, thisp, tdtd->private);
      return rc;
    }

    else
    {

    __CPROVER_DUMP_L7:
      ;
      return 1;
    }
  }
}

// terminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 437
void terminate(const char *format, ...)
{
  void **ap = (void **)&format;
  whine("ERROR", format, ap);
  ap = ((void **)NULL);
  if(!(terminate_cleanup$link1 == ((void (*)(void))NULL)))
    terminate_cleanup$link1();

  char *return_value_getenv$1;
  return_value_getenv$1=getenv("CTF_ABORT_ON_TERMINATE");
  if(!(return_value_getenv$1 == ((char *)NULL)))
    abort();

  exit(1);
}

// terminate_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 596
static void terminate_cleanup(void)
{
  signed int dounlink;
  char *return_value_getenv$1;
  return_value_getenv$1=getenv("CTFMERGE_TERMINATE_NO_UNLINK");
  dounlink = return_value_getenv$1 != ((char *)NULL) ? 0 : 1;
  if(!(tmpname == ((char *)NULL)) && !(dounlink == 0))
    unlink(tmpname);

  if(!(outfile == ((char *)NULL)))
  {
    if(!(dounlink == 0))
    {
      fprintf(stderr, "Removing %s\n", outfile);
      unlink(outfile);
    }

  }

}

// usage
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 219
void usage(void)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(progname);
  fprintf(stderr, "Usage: %s [-fgstv] -l label | -L labelenv -o outfile file ...\n       %s [-fgstv] -l label | -L labelenv -o outfile -d uniqfile\n       %*s [-g] [-D uniqlabel] file ...\n       %s [-fgstv] -l label | -L labelenv -o outfile -w withfile file ...\n       %s [-g] -c srcfile destfile\n\n  Note: if -L labelenv is specified and labelenv is not set in\n  the environment, a default value is used.\n", progname, progname, (signed int)return_value_strlen$1, (const void *)" ", progname, progname);
}

// vadebug
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 197
void vadebug(signed int level, const char *format, void **ap)
{
  if(debug_level >= level)
  {
    fprintf(stderr, "DEBUG: ");
    vfprintf(stderr, format, ap);
    fflush(stderr);
  }

}

// warning
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 441
void warning(const char *format, ...)
{
  void **ap = (void **)&format;
  whine("WARNING", format, ap);
  ap = ((void **)NULL);
  if(debug_level >= 3)
    terminate("Termination due to warning\n");

}

// watch_dump
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 263
void watch_dump(signed int v)
{
  char *p = watch_address;
  signed int i;
  _Bool tmp_if_expr$3;
  char *tmp_post$1;
  char *tmp_post$2;
  if(!(watch_address == ((char *)NULL)) && !(watch_length == 0))
  {
    printf("%d: watch %p len %d\n", v, watch_address, watch_length);
    i = 0;
    for( ; !(i >= watch_length); i = i + 1)
    {
      if((signed int)*p >= 0x20)
        tmp_if_expr$3 = (signed int)*p < 0x7f ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      if(tmp_if_expr$3)
      {
        tmp_post$1 = p;
        p = p + 1l;
        printf(" %c", (signed int)*tmp_post$1 & 0xff);
      }

      else
      {
        tmp_post$2 = p;
        p = p + 1l;
        printf(" %02x", (signed int)*tmp_post$2 & 0xff);
      }
    }
    printf("\n");
  }

}

// watch_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 256
void watch_set(void *addr, signed int len)
{
  watch_address = (char *)addr;
  watch_length = len;
}

// whine
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/util.c line 119
static void whine(const char *type, const char *format, void **ap)
{
  signed int error;
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  error = *return_value___errno_location$1;
  fprintf(stderr, "%s: %s: ", type, progname);
  vfprintf(stderr, format, ap);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(format);
  char *return_value_strerror$2;
  if(!((signed int)format[-1l + (signed long int)return_value_strlen$3] == 10))
  {
    return_value_strerror$2=strerror(error);
    fprintf(stderr, ": %s\n", return_value_strerror$2);
  }

}

// wip_add_work
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 383
static void wip_add_work(struct wip *slot, struct tdata *pow)
{
  if(slot->wip_td == ((struct tdata *)NULL))
  {
    slot->wip_td = pow;
    slot->wip_nmerged = 1;
  }

  else
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    debug(2, "%d: merging %p into %p\n", return_value_pthread_self$1, (void *)pow, (void *)slot->wip_td);
    merge_into_master(pow, slot->wip_td, (struct tdata *)(void *)0, 0);
    tdata_free(pow);
    slot->wip_nmerged = slot->wip_nmerged + 1;
  }
}

// wip_save_work
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 362
static void wip_save_work(struct workqueue *wq, struct wip *slot, signed int slotnum)
{
  pthread_mutex_lock(&wq->wq_donequeue_lock);
  while(!(1 + wq->wq_lastdonebatch >= slot->wip_batchid))
    pthread_cond_wait(&slot->wip_cv, &wq->wq_donequeue_lock);
  /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c */
  assert(wq->wq_lastdonebatch + 1 == slot->wip_batchid);
  fifo_add(wq->wq_donequeue, (void *)slot->wip_td);
  wq->wq_lastdonebatch = wq->wq_lastdonebatch + 1;
  pthread_cond_signal(&(wq->wq_wip + (signed long int)((slotnum + 1) % wq->wq_nwipslots))->wip_cv);
  slot->wip_td = (struct tdata *)(void *)0;
  signed int tmp_post$1 = wq->wq_next_batchid;
  wq->wq_next_batchid = wq->wq_next_batchid + 1;
  slot->wip_batchid = tmp_post$1;
  pthread_mutex_unlock(&wq->wq_donequeue_lock);
}

// worker_runphase1
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 400
static void worker_runphase1(struct workqueue *wq)
{
  struct wip *wipslot;
  struct tdata *pow;
  signed int wipslotnum;
  signed int pownum;
  signed int return_value_fifo_empty$1;
  signed int tmp_post$3;
  do
  {
    pthread_mutex_lock(&wq->wq_queue_lock);
    do
    {
      return_value_fifo_empty$1=fifo_empty(wq->wq_queue);
      if(return_value_fifo_empty$1 == 0)
        break;

      if(wq->wq_nomorefiles == 1)
      {
        pthread_cond_broadcast(&wq->wq_work_avail);
        pthread_mutex_unlock(&wq->wq_queue_lock);
        goto __CPROVER_DUMP_L6;
      }

      pthread_cond_wait(&wq->wq_work_avail, &wq->wq_queue_lock);
    }
    while((_Bool)1);
    void *return_value_fifo_remove$2;
    return_value_fifo_remove$2=fifo_remove(wq->wq_queue);
    pow = (struct tdata *)return_value_fifo_remove$2;
    tmp_post$3 = wq->wq_nextpownum;
    wq->wq_nextpownum = wq->wq_nextpownum + 1;
    pownum = tmp_post$3;
    pthread_cond_broadcast(&wq->wq_work_removed);
    /* assertion /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c */
    assert(pow != (struct tdata *)(void *)0);
    wipslotnum = pownum % wq->wq_nwipslots;
    wipslot = &wq->wq_wip[(signed long int)wipslotnum];
    pthread_mutex_lock(&wipslot->wip_lock);
    pthread_mutex_unlock(&wq->wq_queue_lock);
    wip_add_work(wipslot, pow);
    if(wipslot->wip_nmerged == wq->wq_maxbatchsz)
      wip_save_work(wq, wipslot, wipslotnum);

    pthread_mutex_unlock(&wipslot->wip_lock);
  }
  while((_Bool)1);

__CPROVER_DUMP_L6:
  ;
}

// worker_runphase2
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 447
static void worker_runphase2(struct workqueue *wq)
{
  struct tdata *pow1;
  struct tdata *pow2;
  signed int batchid;
  signed int tmp_post$6;
  do
  {
    pthread_mutex_lock(&wq->wq_queue_lock);
    if(wq->wq_ninqueue == 1)
    {
      pthread_cond_broadcast(&wq->wq_work_avail);
      pthread_mutex_unlock(&wq->wq_queue_lock);
      unsigned long int return_value_pthread_self$1;
      return_value_pthread_self$1=pthread_self();
      debug(2, "%d: entering p2 completion barrier\n", return_value_pthread_self$1);
      signed int return_value_barrier_wait$2;
      return_value_barrier_wait$2=barrier_wait(&wq->wq_bar1);
      if(!(return_value_barrier_wait$2 == 0))
      {
        pthread_mutex_lock(&wq->wq_queue_lock);
        wq->wq_alldone = 1;
        pthread_cond_signal(&wq->wq_alldone_cv);
        pthread_mutex_unlock(&wq->wq_queue_lock);
      }

      break;
    }

    signed int return_value_fifo_len$3;
    return_value_fifo_len$3=fifo_len(wq->wq_queue);
    if(!(return_value_fifo_len$3 >= 2))
    {
      pthread_cond_wait(&wq->wq_work_avail, &wq->wq_queue_lock);
      pthread_mutex_unlock(&wq->wq_queue_lock);
    }

    else
    {
      void *return_value_fifo_remove$4;
      return_value_fifo_remove$4=fifo_remove(wq->wq_queue);
      pow1 = (struct tdata *)return_value_fifo_remove$4;
      void *return_value_fifo_remove$5;
      return_value_fifo_remove$5=fifo_remove(wq->wq_queue);
      pow2 = (struct tdata *)return_value_fifo_remove$5;
      wq->wq_ninqueue = wq->wq_ninqueue - 2;
      tmp_post$6 = wq->wq_next_batchid;
      wq->wq_next_batchid = wq->wq_next_batchid + 1;
      batchid = tmp_post$6;
      pthread_mutex_unlock(&wq->wq_queue_lock);
      unsigned long int return_value_pthread_self$7;
      return_value_pthread_self$7=pthread_self();
      debug(2, "%d: merging %p into %p\n", return_value_pthread_self$7, (void *)pow1, (void *)pow2);
      merge_into_master(pow1, pow2, (struct tdata *)(void *)0, 0);
      tdata_free(pow1);
      pthread_mutex_lock(&wq->wq_queue_lock);
      while(!(1 + wq->wq_lastdonebatch == batchid))
        pthread_cond_wait(&wq->wq_done_cv, &wq->wq_queue_lock);
      wq->wq_lastdonebatch = batchid;
      fifo_add(wq->wq_queue, (void *)pow2);
      unsigned long int return_value_pthread_self$8;
      return_value_pthread_self$8=pthread_self();
      signed int return_value_fifo_len$9;
      return_value_fifo_len$9=fifo_len(wq->wq_queue);
      debug(2, "%d: added %p to queue, len now %d, ninqueue %d\n", return_value_pthread_self$8, (void *)pow2, return_value_fifo_len$9, wq->wq_ninqueue);
      pthread_cond_broadcast(&wq->wq_done_cv);
      pthread_cond_signal(&wq->wq_work_avail);
      pthread_mutex_unlock(&wq->wq_queue_lock);
    }
  }
  while((_Bool)1);
}

// worker_thread
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 518
static void worker_thread(struct workqueue *wq)
{
  worker_runphase1(wq);
  unsigned long int return_value_pthread_self$1;
  return_value_pthread_self$1=pthread_self();
  debug(2, "%d: entering first barrier\n", return_value_pthread_self$1);
  signed int return_value_barrier_wait$5;
  return_value_barrier_wait$5=barrier_wait(&wq->wq_bar1);
  if(!(return_value_barrier_wait$5 == 0))
  {
    unsigned long int return_value_pthread_self$2;
    return_value_pthread_self$2=pthread_self();
    debug(2, "%d: doing work in first barrier\n", return_value_pthread_self$2);
    finalize_phase_one(wq);
    init_phase_two(wq);
    unsigned long int return_value_pthread_self$3;
    return_value_pthread_self$3=pthread_self();
    signed int return_value_fifo_len$4;
    return_value_fifo_len$4=fifo_len(wq->wq_queue);
    debug(2, "%d: ninqueue is %d, %d on queue\n", return_value_pthread_self$3, wq->wq_ninqueue, return_value_fifo_len$4);
  }

  unsigned long int return_value_pthread_self$6;
  return_value_pthread_self$6=pthread_self();
  debug(2, "%d: entering second barrier\n", return_value_pthread_self$6);
  barrier_wait(&wq->wq_bar2);
  unsigned long int return_value_pthread_self$7;
  return_value_pthread_self$7=pthread_self();
  debug(2, "%d: phase 1 complete\n", return_value_pthread_self$7);
  worker_runphase2(wq);
}

// wq_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctfmerge.c line 633
static void wq_init(struct workqueue *wq, signed int nfiles)
{
  signed int throttle;
  signed int nslots;
  signed int i;
  char *return_value_getenv$2;
  return_value_getenv$2=getenv("CTFMERGE_MAX_SLOTS");
  char *return_value_getenv$1;
  if(!(return_value_getenv$2 == ((char *)NULL)))
  {
    return_value_getenv$1=getenv("CTFMERGE_MAX_SLOTS");
    nslots=atoi(return_value_getenv$1);
  }

  else
    nslots = 5;
  char *return_value_getenv$4;
  return_value_getenv$4=getenv("CTFMERGE_PHASE1_BATCH_SIZE");
  char *return_value_getenv$3;
  if(!(return_value_getenv$4 == ((char *)NULL)))
  {
    return_value_getenv$3=getenv("CTFMERGE_PHASE1_BATCH_SIZE");
    wq->wq_maxbatchsz=atoi(return_value_getenv$3);
  }

  else
    wq->wq_maxbatchsz = 8;
  signed int tmp_if_expr$5;
  if(!(nslots >= (wq->wq_maxbatchsz + nfiles + -1) / wq->wq_maxbatchsz))
    tmp_if_expr$5 = nslots;

  else
    tmp_if_expr$5 = ((nfiles + wq->wq_maxbatchsz) - 1) / wq->wq_maxbatchsz;
  nslots = tmp_if_expr$5;
  void *return_value_xcalloc$6;
  return_value_xcalloc$6=xcalloc(sizeof(struct wip) /*104ul*/  * (unsigned long int)nslots);
  wq->wq_wip = (struct wip *)return_value_xcalloc$6;
  wq->wq_nwipslots = nslots;
  signed long int return_value_sysconf$7;
  return_value_sysconf$7=sysconf(84);
  signed long int tmp_if_expr$9;
  signed long int return_value_sysconf$8;
  if(!((3l * return_value_sysconf$7) / 2l >= (signed long int)nslots))
  {
    return_value_sysconf$8=sysconf(84);
    tmp_if_expr$9 = (return_value_sysconf$8 * (signed long int)3) / (signed long int)2;
  }

  else
    tmp_if_expr$9 = (signed long int)nslots;
  wq->wq_nthreads = (signed int)tmp_if_expr$9;
  void *return_value_xmalloc$10;
  return_value_xmalloc$10=xmalloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)wq->wq_nthreads);
  wq->wq_thread = (unsigned long int *)return_value_xmalloc$10;
  char *return_value_getenv$12;
  return_value_getenv$12=getenv("CTFMERGE_INPUT_THROTTLE");
  char *return_value_getenv$11;
  if(!(return_value_getenv$12 == ((char *)NULL)))
  {
    return_value_getenv$11=getenv("CTFMERGE_INPUT_THROTTLE");
    throttle=atoi(return_value_getenv$11);
  }

  else
    throttle = 10;
  wq->wq_ithrottle = throttle * wq->wq_nthreads;
  debug(1, "Using %d slots, %d threads\n", wq->wq_nwipslots, wq->wq_nthreads);
  wq->wq_next_batchid = 0;
  i = 0;
  signed int tmp_post$13;
  for( ; !(i >= nslots); i = i + 1)
  {
    pthread_mutex_init(&(wq->wq_wip + (signed long int)i)->wip_lock, (const union anonymous$10 *)(void *)0);
    tmp_post$13 = wq->wq_next_batchid;
    wq->wq_next_batchid = wq->wq_next_batchid + 1;
    (wq->wq_wip + (signed long int)i)->wip_batchid = tmp_post$13;
  }
  pthread_mutex_init(&wq->wq_queue_lock, (const union anonymous$10 *)(void *)0);
  wq->wq_queue=fifo_new();
  pthread_cond_init(&wq->wq_work_avail, (const union anonymous$10 *)(void *)0);
  pthread_cond_init(&wq->wq_work_removed, (const union anonymous$10 *)(void *)0);
  wq->wq_ninqueue = nfiles;
  wq->wq_nextpownum = 0;
  pthread_mutex_init(&wq->wq_donequeue_lock, (const union anonymous$10 *)(void *)0);
  wq->wq_donequeue=fifo_new();
  wq->wq_lastdonebatch = -1;
  pthread_cond_init(&wq->wq_done_cv, (const union anonymous$10 *)(void *)0);
  pthread_cond_init(&wq->wq_alldone_cv, (const union anonymous$10 *)(void *)0);
  wq->wq_alldone = 0;
  barrier_init(&wq->wq_bar1, wq->wq_nthreads);
  barrier_init(&wq->wq_bar2, wq->wq_nthreads);
  wq->wq_nomorefiles = 0;
}

// write_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 564
static char * write_buffer(struct ctf_header *h, struct ctf_buf *buf, unsigned long int *resszp)
{
  char *outbuf;
  char *bufpos;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct ctf_header) /*36ul*/  + (unsigned long int)(buf->ctb_ptr - buf->ctb_base) + buf->ctb_strtab.str_size);
  outbuf = (char *)return_value_xmalloc$1;
  bufpos = outbuf;
  bcopy_data((void *)h, sizeof(struct ctf_header) /*36ul*/ , (void *)&bufpos);
  bcopy_data((void *)buf->ctb_base, (unsigned long int)(buf->ctb_ptr - buf->ctb_base), (void *)&bufpos);
  strtab_write(&buf->ctb_strtab, bcopy_data, (void *)&bufpos);
  *resszp = (unsigned long int)(bufpos - outbuf);
  return outbuf;
}

// write_compressed_buffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 588
static char * write_compressed_buffer(struct ctf_header *h, struct ctf_buf *buf, unsigned long int *resszp)
{
  struct resbuf resbuf;
  resbuf.rb_size = (unsigned long int)(64 * 1024);
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(resbuf.rb_size);
  resbuf.rb_base = (char *)return_value_xmalloc$1;
  bcopy((const void *)h, (void *)resbuf.rb_base, sizeof(struct ctf_header) /*36ul*/ );
  resbuf.rb_ptr = resbuf.rb_base + (signed long int)sizeof(struct ctf_header) /*36ul*/ ;
  compress_start(&resbuf);
  compress_buffer((void *)buf->ctb_base, (unsigned long int)(buf->ctb_ptr - buf->ctb_base), (void *)&resbuf);
  compress_flush(&resbuf, 3);
  strtab_write(&buf->ctb_strtab, compress_buffer, (void *)&resbuf);
  compress_end(&resbuf);
  *resszp = (unsigned long int)(resbuf.rb_ptr - resbuf.rb_base);
  return resbuf.rb_base;
}

// write_ctf
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctftools.h line 395
void write_ctf(struct tdata *td, const char *curname, const char *newname, signed int flags)
{
  struct stat st;
  struct _Elf *elf = (struct _Elf *)(void *)0;
  struct _Elf *telf = (struct _Elf *)(void *)0;
  char *data;
  unsigned long int len;
  signed int fd = -1;
  signed int tfd = -1;
  elf_version((unsigned int)1);
  fd=open(curname, 00);
  _Bool tmp_if_expr$2;
  signed int return_value_fstat$1;
  if(!(fd >= 0))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_fstat$1=fstat(fd, &st);
    tmp_if_expr$2 = return_value_fstat$1 < 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$2)
    terminate("%s: Cannot open for re-reading", curname);

  elf=elf_begin(fd, (enum anonymous$2)ELF_C_READ, (struct _Elf *)(void *)0);
  if(elf == ((struct _Elf *)NULL))
    elfterminate(curname, "Cannot re-read");

  tfd=open(newname, 02 | 0100 | 01000, st.st_mode);
  if(!(tfd >= 0))
    terminate("Cannot open temp file %s for writing", newname);

  telf=elf_begin(tfd, (enum anonymous$2)ELF_C_WRITE, (struct _Elf *)(void *)0);
  if(telf == ((struct _Elf *)NULL))
    elfterminate(curname, "Cannot write");

  data=make_ctf_data(td, elf, curname, &len, flags);
  write_file(elf, curname, telf, newname, data, len, flags);
  free((void *)data);
  elf_end(telf);
  elf_end(elf);
  close(fd);
  close(tfd);
}

// write_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/output.c line 457
static void write_file(struct _Elf *src, const char *srcname, struct _Elf *dst, const char *dstname, char *ctfdata, unsigned long int ctfsize, signed int flags)
{
  struct anonymous$8 sehdr;
  struct anonymous$8 dehdr;
  struct _Elf_Scn *sscn;
  struct _Elf_Scn *dscn;
  struct _Elf_Data *sdata;
  struct _Elf_Data *ddata;
  struct anonymous$4 shdr;
  unsigned int symtab_type;
  signed int symtab_idx = -1;
  signed long int new_offset = (signed long int)0;
  signed long int ctfnameoff = (signed long int)0;
  signed int write_file$$1$$dynsym = flags & 0x2;
  signed int keep_stabs = flags & 0x8;
  signed int *secxlate;
  signed int srcidx;
  signed int dstidx;
  signed int curnmoff = 0;
  signed int changing = 0;
  signed int pad;
  signed int i;
  signed int return_value_gelf_getclass$1;
  return_value_gelf_getclass$1=gelf_getclass(src);
  void *return_value_gelf_newehdr$2;
  return_value_gelf_newehdr$2=gelf_newehdr(dst, return_value_gelf_getclass$1);
  if(return_value_gelf_newehdr$2 == NULL)
    elfterminate(dstname, "Cannot copy ehdr to temp file");

  gelf_getehdr(src, &sehdr);
  memcpy((void *)&dehdr, (const void *)&sehdr, sizeof(struct anonymous$8) /*64ul*/ );
  gelf_update_ehdr(dst, &dehdr);
  symtab_type = (unsigned int)(write_file$$1$$dynsym != 0 ? 11 : 2);
  if(!((signed int)sehdr.e_phnum == 0))
  {
    elf_flagelf(dst, (enum anonymous$2)ELF_C_SET, 0x001U);
    void *return_value_gelf_newphdr$3;
    return_value_gelf_newphdr$3=gelf_newphdr(dst, (unsigned long int)sehdr.e_phnum);
    if(return_value_gelf_newphdr$3 == NULL)
      elfterminate(dstname, "Cannot make phdrs in temp file");

    i = 0;
    for( ; !(i >= (signed int)sehdr.e_phnum); i = i + 1)
    {
      struct anonymous$7 phdr;
      gelf_getphdr(src, i, &phdr);
      gelf_update_phdr(dst, i, &phdr);
    }
  }

  void *return_value_xmalloc$4;
  return_value_xmalloc$4=xmalloc(sizeof(signed int) /*4ul*/  * (unsigned long int)sehdr.e_shnum);
  secxlate = (signed int *)return_value_xmalloc$4;
  dstidx = 0;
  srcidx = dstidx;
  _Bool tmp_if_expr$14;
  signed int return_value_strncmp$7;
  _Bool tmp_if_expr$9;
  signed int return_value_strncmp$8;
  _Bool tmp_if_expr$11;
  signed int return_value_strncmp$10;
  _Bool tmp_if_expr$13;
  signed int return_value_strncmp$12;
  signed int tmp_post$5;
  for( ; !(srcidx >= (signed int)sehdr.e_shnum); srcidx = srcidx + 1)
  {
    struct _Elf_Scn *scn;
    scn=elf_getscn(src, (unsigned long int)srcidx);
    struct anonymous$4 shdr1;
    char *sname;
    gelf_getshdr(scn, &shdr1);
    sname=elf_strptr(src, (unsigned long int)sehdr.e_shstrndx, (unsigned long int)shdr1.sh_name);
    if(sname == ((char *)NULL))
      elfterminate(srcname, "Can't find string at %u", shdr1.sh_name);

    signed int return_value_strcmp$15;
    return_value_strcmp$15=strcmp(sname, ".SUNW_ctf");
    if(return_value_strcmp$15 == 0)
      secxlate[(signed long int)srcidx] = -1;

    else
    {
      if(keep_stabs == 0)
      {
        return_value_strncmp$7=strncmp(sname, ".stab", (unsigned long int)5);
        if(return_value_strncmp$7 == 0)
          tmp_if_expr$9 = (_Bool)1;

        else
        {
          return_value_strncmp$8=strncmp(sname, ".debug", (unsigned long int)6);
          tmp_if_expr$9 = return_value_strncmp$8 == 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$9)
          tmp_if_expr$11 = (_Bool)1;

        else
        {
          return_value_strncmp$10=strncmp(sname, ".rel.debug", (unsigned long int)10);
          tmp_if_expr$11 = return_value_strncmp$10 == 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$11)
          tmp_if_expr$13 = (_Bool)1;

        else
        {
          return_value_strncmp$12=strncmp(sname, ".rela.debug", (unsigned long int)11);
          tmp_if_expr$13 = return_value_strncmp$12 == 0 ? (_Bool)1 : (_Bool)0;
        }
        tmp_if_expr$14 = tmp_if_expr$13 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$14 = (_Bool)0;
      if(tmp_if_expr$14)
        secxlate[(signed long int)srcidx] = -1;

      else
        if(shdr1.sh_type == 2u && !(write_file$$1$$dynsym == 0))
          secxlate[(signed long int)srcidx] = -1;

        else
        {
          tmp_post$5 = dstidx;
          dstidx = dstidx + 1;
          secxlate[(signed long int)srcidx] = tmp_post$5;
          unsigned long int return_value_strlen$6;
          return_value_strlen$6=strlen(sname);
          curnmoff = curnmoff + (signed int)(return_value_strlen$6 + (unsigned long int)1);
        }
    }
    new_offset = (signed long int)dehdr.e_phoff;
  }
  srcidx = 1;
  for( ; !(srcidx >= (signed int)sehdr.e_shnum); srcidx = srcidx + 1)
  {
    char *write_file$$1$$3$$1$$sname;
    sscn=elf_getscn(src, (unsigned long int)srcidx);
    gelf_getshdr(sscn, &shdr);
    if(secxlate[(signed long int)srcidx] == -1)
      changing = 1;

    else
    {
      dscn=elf_newscn(dst);
      if(!(changing == 0) && !((signed int)sehdr.e_phnum == 0))
      {
        pad = (signed int)((unsigned long int)new_offset % shdr.sh_addralign);
        if(!(pad == 0))
          new_offset = new_offset + (signed long int)(shdr.sh_addralign - (unsigned long int)pad);

        shdr.sh_offset = (unsigned long int)new_offset;
      }

      shdr.sh_link = (unsigned int)secxlate[(signed long int)shdr.sh_link];
      if(shdr.sh_type == 4u || shdr.sh_type == 9u)
        shdr.sh_info = (unsigned int)secxlate[(signed long int)shdr.sh_info];

      write_file$$1$$3$$1$$sname=elf_strptr(src, (unsigned long int)sehdr.e_shstrndx, (unsigned long int)shdr.sh_name);
      if(write_file$$1$$3$$1$$sname == ((char *)NULL))
        elfterminate(srcname, "Can't find string at %u", shdr.sh_name);

      signed int return_value_gelf_update_shdr$16;
      return_value_gelf_update_shdr$16=gelf_update_shdr(dscn, &shdr);
      if(return_value_gelf_update_shdr$16 == 0)
        elfterminate(dstname, "Cannot update sect %s", write_file$$1$$3$$1$$sname);

      sdata=elf_getdata(sscn, (struct _Elf_Data *)(void *)0);
      if(sdata == ((struct _Elf_Data *)NULL))
        elfterminate(srcname, "Cannot get sect %s data", write_file$$1$$3$$1$$sname);

      ddata=elf_newdata(dscn);
      if(ddata == ((struct _Elf_Data *)NULL))
        elfterminate(dstname, "Can't make sect %s data", write_file$$1$$3$$1$$sname);

      ddata->d_align = sdata->d_align;
      ddata->d_off = sdata->d_off;
      ddata->d_size = sdata->d_size;
      ddata->d_type = sdata->d_type;
      ddata->d_version = sdata->d_version;
      if(srcidx == (signed int)sehdr.e_shstrndx)
      {
        char seclen;
        unsigned long int return_value_strlen$17;
        return_value_strlen$17=strlen(".SUNW_ctf");
        seclen = (char)return_value_strlen$17;
        ddata->d_buf=xmalloc(ddata->d_size + shdr.sh_size + (unsigned long int)seclen + (unsigned long int)1);
        bcopy(sdata->d_buf, ddata->d_buf, shdr.sh_size);
        strcpy((char *)ddata->d_buf + (signed long int)shdr.sh_size, ".SUNW_ctf");
        ctfnameoff = (signed long int)shdr.sh_size;
        shdr.sh_size = shdr.sh_size + (unsigned long int)((signed int)seclen + 1);
        ddata->d_size = ddata->d_size + (unsigned long int)((signed int)seclen + 1);
        if(!((signed int)sehdr.e_phnum == 0))
          changing = 1;

      }

      if(shdr.sh_type == symtab_type && !(shdr.sh_entsize == 0ul))
      {
        signed int nsym = (signed int)(shdr.sh_size / shdr.sh_entsize);
        symtab_idx = secxlate[(signed long int)srcidx];
        ddata->d_buf=xmalloc(shdr.sh_size);
        bcopy(sdata->d_buf, ddata->d_buf, shdr.sh_size);
        i = 0;
        for( ; !(i >= nsym); i = i + 1)
        {
          struct anonymous$5 sym;
          signed short int newscn;
          struct anonymous$5 *return_value_gelf_getsym$18;
          return_value_gelf_getsym$18=gelf_getsym(ddata, i, &sym);
          if(return_value_gelf_getsym$18 == ((struct anonymous$5 *)NULL))
            printf("Could not get symbol %d\n", i);

          if(!((signed int)sym.st_shndx >= 0xff00))
          {
            newscn = (signed short int)secxlate[(signed long int)sym.st_shndx];
            if(!((signed int)newscn == (signed int)sym.st_shndx))
            {
              sym.st_shndx = (unsigned short int)((signed int)newscn == -1 ? 1 : (signed int)newscn);
              gelf_update_sym(ddata, i, &sym);
            }

          }

        }
      }

      if(ddata->d_buf == NULL)
      {
        if(!(sdata->d_buf == NULL))
        {
          ddata->d_buf=xmalloc(shdr.sh_size);
          bcopy(sdata->d_buf, ddata->d_buf, shdr.sh_size);
        }

      }

      signed int return_value_gelf_update_shdr$19;
      return_value_gelf_update_shdr$19=gelf_update_shdr(dscn, &shdr);
      if(return_value_gelf_update_shdr$19 == 0)
        elfterminate(dstname, "Cannot update sect %s", write_file$$1$$3$$1$$sname);

      new_offset = (signed long int)shdr.sh_offset;
      if(!(shdr.sh_type == 8u))
        new_offset = new_offset + (signed long int)shdr.sh_size;

    }
  }
  if(symtab_idx == -1)
    terminate("%s: Cannot find %s section\n", srcname, write_file$$1$$dynsym != 0 ? "SHT_DYNSYM" : "SHT_SYMTAB");

  dscn=elf_newscn(dst);
  gelf_getshdr(dscn, &shdr);
  shdr.sh_name = (unsigned int)ctfnameoff;
  shdr.sh_type = (unsigned int)1;
  shdr.sh_size = ctfsize;
  shdr.sh_link = (unsigned int)symtab_idx;
  shdr.sh_addralign = (unsigned long int)4;
  if(!(changing == 0) && !((signed int)sehdr.e_phnum == 0))
  {
    pad = (signed int)((unsigned long int)new_offset % shdr.sh_addralign);
    if(!(pad == 0))
      new_offset = new_offset + (signed long int)(shdr.sh_addralign - (unsigned long int)pad);

    shdr.sh_offset = (unsigned long int)new_offset;
    new_offset = new_offset + (signed long int)shdr.sh_size;
  }

  ddata=elf_newdata(dscn);
  ddata->d_buf = (void *)ctfdata;
  ddata->d_size = ctfsize;
  ddata->d_align = shdr.sh_addralign;
  ddata->d_off = (unsigned long int)0;
  gelf_update_shdr(dscn, &shdr);
  if(!((signed int)sehdr.e_phnum == 0))
  {
    unsigned long int align;
    align=gelf_fsize(dst, (enum anonymous)ELF_T_ADDR, (unsigned long int)1, (unsigned int)1);
    unsigned long int r = (unsigned long int)new_offset % align;
    if(!(r == 0ul))
      new_offset = new_offset + (signed long int)(align - r);

    dehdr.e_shoff = (unsigned long int)new_offset;
  }

  dehdr.e_shstrndx = (unsigned short int)secxlate[(signed long int)sehdr.e_shstrndx];
  gelf_update_ehdr(dst, &dehdr);
  signed long int return_value_elf_update$20;
  return_value_elf_update$20=elf_update(dst, (enum anonymous$2)ELF_C_WRITE);
  if(!(return_value_elf_update$20 >= 0l))
    elfterminate(dstname, "Cannot finalize temp file");

  free((void *)secxlate);
}

// write_functions
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 159
static void write_functions(struct iidesc *idp, struct ctf_buf *b)
{
  unsigned short int fdata[2l];
  unsigned short int id;
  signed int nargs;
  signed int i;
  if(idp == ((struct iidesc *)NULL))
  {
    fdata[(signed long int)0] = (unsigned short int)0;
    ctf_buf_write(b, (const void *)&fdata[(signed long int)0], sizeof(unsigned short int) /*2ul*/ );
    debug(3, "Wrote function (null)\n");
  }

  else
  {
    nargs = idp->ii_nargs + (signed int)(idp->ii_vargs != 0);
    if(nargs >= 1024)
      terminate("function %s has too many args: %d > %d\n", idp->ii_name, nargs, 0x3ff);

    fdata[(signed long int)0] = (unsigned short int)(5 << 11 | (1 != 0 ? 1 : 0) << 10 | nargs & 0x3ff);
    fdata[(signed long int)1] = (unsigned short int)idp->ii_dtype->t_id;
    ctf_buf_write(b, (const void *)fdata, sizeof(unsigned short int [2l]) /*4ul*/ );
    i = 0;
    for( ; !(i >= idp->ii_nargs); i = i + 1)
    {
      id = (unsigned short int)idp->ii_args[(signed long int)i]->t_id;
      ctf_buf_write(b, (const void *)&id, sizeof(unsigned short int) /*2ul*/ );
    }
    if(!(idp->ii_vargs == 0))
    {
      id = (unsigned short int)0;
      ctf_buf_write(b, (const void *)&id, sizeof(unsigned short int) /*2ul*/ );
    }

    debug(3, "Wrote function %s (%d args)\n", idp->ii_name, nargs);
  }
}

// write_label
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 134
static signed int write_label(void *arg1, void *arg2)
{
  struct labelent *le = (struct labelent *)arg1;
  struct ctf_buf *b = (struct ctf_buf *)arg2;
  struct ctf_lblent ctl;
  unsigned long int return_value_strtab_insert$1;
  return_value_strtab_insert$1=strtab_insert(&b->ctb_strtab, le->le_name);
  ctl.ctl_label = (unsigned int)return_value_strtab_insert$1;
  ctl.ctl_typeidx = (unsigned int)le->le_idx;
  ctf_buf_write(b, (const void *)&ctl, sizeof(struct ctf_lblent) /*8ul*/ );
  return 1;
}

// write_objects
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 149
static void write_objects(struct iidesc *idp, struct ctf_buf *b)
{
  unsigned short int id;
  signed int tmp_if_expr$1;
  if(!(idp == ((struct iidesc *)NULL)))
    tmp_if_expr$1 = idp->ii_dtype->t_id;

  else
    tmp_if_expr$1 = 0;
  id = (unsigned short int)tmp_if_expr$1;
  ctf_buf_write(b, (const void *)&id, sizeof(unsigned short int) /*2ul*/ );
  char *tmp_if_expr$2;
  if(!(idp == ((struct iidesc *)NULL)))
    tmp_if_expr$2 = idp->ii_name;

  else
    tmp_if_expr$2 = "(null)";
  debug(3, "Wrote object %s (%d)\n", tmp_if_expr$2, id);
}

// write_sized_type_rec
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 205
static void write_sized_type_rec(struct ctf_buf *b, struct ctf_type *ctt, unsigned long int size)
{
  if(size >= 65535ul)
  {
    ctt->_u._size = (unsigned short int)0xffff;
    ctt->ctt_lsizehi = (unsigned int)((unsigned long int)size >> 32);
    ctt->ctt_lsizelo = (unsigned int)size;
    ctf_buf_write(b, (const void *)ctt, sizeof(struct ctf_type) /*16ul*/ );
  }

  else
  {
    struct ctf_stype *cts = (struct ctf_stype *)ctt;
    cts->_u._size = (unsigned short int)size;
    ctf_buf_write(b, (const void *)cts, sizeof(struct ctf_stype) /*8ul*/ );
  }
}

// write_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 229
static signed int write_type(void *arg1, void *arg2)
{
  struct tdesc *tp = (struct tdesc *)arg1;
  struct ctf_buf *b = (struct ctf_buf *)arg2;
  struct elist *ep;
  struct mlist *mp;
  struct intr *ip;
  unsigned long int offset;
  unsigned int encoding;
  unsigned int data;
  signed int isroot = tp->t_flags & 0x1;
  signed int i;
  struct ctf_type ctt;
  struct ctf_array cta;
  struct ctf_member ctm;
  struct ctf_lmember ctlm;
  struct ctf_enum cte;
  unsigned short int id;
  ctlm.ctlm_pad = (unsigned short int)0;
  b->nptent = b->nptent + 1;
  if(!(b->nptent >= (0x7fff & tp->t_id)))
  {
    debug(2, "genctf: type hole from %d < x < %d\n", b->nptent - 1, tp->t_id & 0x7fff);
    ctt.ctt_name = (unsigned int)(0 << 31 | 0 & 0x7fffffff);
    ctt.ctt_info = (unsigned short int)(0 << 11 | (0 != 0 ? 1 : 0) << 10 | 0 & 0x3ff);
    for( ; !(b->nptent >= (0x7fff & tp->t_id)); b->nptent = b->nptent + 1)
      write_sized_type_rec(b, &ctt, (unsigned long int)0);
  }

  offset=strtab_insert(&b->ctb_strtab, tp->t_name);
  ctt.ctt_name = (unsigned int)((unsigned long int)(0 << 31) | offset & (unsigned long int)0x7fffffff);
  switch((signed int)tp->t_type)
  {
    case INTRINSIC:
    {
      ip = tp->t_data.intr;
      if((signed int)ip->intr_type == INTR_INT)
        ctt.ctt_info = (unsigned short int)(1 << 11 | (isroot != 0 ? 1 : 0) << 10 | 1 & 0x3ff);

      else
        ctt.ctt_info = (unsigned short int)(2 << 11 | (isroot != 0 ? 1 : 0) << 10 | 1 & 0x3ff);
      write_sized_type_rec(b, &ctt, (unsigned long int)tp->t_size);
      encoding = (unsigned int)0;
      if((signed int)ip->intr_type == INTR_INT)
      {
        if(!(ip->intr_signed == 0))
          encoding = encoding | (unsigned int)0x01;

        if((signed int)ip->_u._iformat == 99)
          encoding = encoding | (unsigned int)0x02;

        else
          if((signed int)ip->_u._iformat == 98)
            encoding = encoding | (unsigned int)0x04;

          else
            if((signed int)ip->_u._iformat == 118)
              encoding = encoding | (unsigned int)0x08;

      }

      else
        encoding = (unsigned int)ip->_u._fformat;
      data = encoding << 24 | (unsigned int)(ip->intr_offset << 16) | (unsigned int)ip->intr_nbits;
      ctf_buf_write(b, (const void *)&data, sizeof(unsigned int) /*4ul*/ );
      break;
    }
    case POINTER:
    {
      ctt.ctt_info = (unsigned short int)(3 << 11 | (isroot != 0 ? 1 : 0) << 10 | 0 & 0x3ff);
      ctt._u._type = (unsigned short int)tp->t_data.tdesc->t_id;
      write_unsized_type_rec(b, &ctt);
      break;
    }
    case ARRAY:
    {
      ctt.ctt_info = (unsigned short int)(4 << 11 | (isroot != 0 ? 1 : 0) << 10 | 1 & 0x3ff);
      write_sized_type_rec(b, &ctt, (unsigned long int)tp->t_size);
      cta.cta_contents = (unsigned short int)tp->t_data.ardef->ad_contents->t_id;
      cta.cta_index = (unsigned short int)tp->t_data.ardef->ad_idxtype->t_id;
      cta.cta_nelems = tp->t_data.ardef->ad_nelems;
      ctf_buf_write(b, (const void *)&cta, sizeof(struct ctf_array) /*8ul*/ );
      break;
    }
    case STRUCT:

    case UNION:
    {
      i = 0;
      mp = tp->t_data.members;
      for( ; !(mp == ((struct mlist *)NULL)); mp = mp->ml_next)
        i = i + 1;
      if(i >= 1024)
      {
        const char *return_value_tdesc_name$1;
        return_value_tdesc_name$1=tdesc_name(tp);
        terminate("sou %s has too many members: %d > %d\n", return_value_tdesc_name$1, i, 0x3ff);
      }

      if((signed int)tp->t_type == STRUCT)
        ctt.ctt_info = (unsigned short int)(6 << 11 | (isroot != 0 ? 1 : 0) << 10 | i & 0x3ff);

      else
        ctt.ctt_info = (unsigned short int)(7 << 11 | (isroot != 0 ? 1 : 0) << 10 | i & 0x3ff);
      write_sized_type_rec(b, &ctt, (unsigned long int)tp->t_size);
      if(!(tp->t_size >= 8192))
      {
        mp = tp->t_data.members;
        for( ; !(mp == ((struct mlist *)NULL)); mp = mp->ml_next)
        {
          offset=strtab_insert(&b->ctb_strtab, mp->ml_name);
          ctm.ctm_name = (unsigned int)((unsigned long int)(0 << 31) | offset & (unsigned long int)0x7fffffff);
          ctm.ctm_type = (unsigned short int)mp->ml_type->t_id;
          ctm.ctm_offset = (unsigned short int)mp->ml_offset;
          ctf_buf_write(b, (const void *)&ctm, sizeof(struct ctf_member) /*8ul*/ );
        }
      }

      else
      {
        mp = tp->t_data.members;
        for( ; !(mp == ((struct mlist *)NULL)); mp = mp->ml_next)
        {
          offset=strtab_insert(&b->ctb_strtab, mp->ml_name);
          ctlm.ctlm_name = (unsigned int)((unsigned long int)(0 << 31) | offset & (unsigned long int)0x7fffffff);
          ctlm.ctlm_type = (unsigned short int)mp->ml_type->t_id;
          ctlm.ctlm_offsethi = (unsigned int)((unsigned long int)mp->ml_offset >> 32);
          ctlm.ctlm_offsetlo = (unsigned int)mp->ml_offset;
          ctf_buf_write(b, (const void *)&ctlm, sizeof(struct ctf_lmember) /*16ul*/ );
        }
      }
      break;
    }
    case ENUM:
    {
      i = 0;
      ep = tp->t_data.emem;
      for( ; !(ep == ((struct elist *)NULL)); ep = ep->el_next)
        i = i + 1;
      if(i >= 1024)
      {
        const char *return_value_tdesc_name$2;
        return_value_tdesc_name$2=tdesc_name(tp);
        warning("enum %s has too many values: %d > %d\n", return_value_tdesc_name$2, i, 0x3ff);
        i = 0x3ff;
      }

      ctt.ctt_info = (unsigned short int)(8 << 11 | (isroot != 0 ? 1 : 0) << 10 | i & 0x3ff);
      write_sized_type_rec(b, &ctt, (unsigned long int)tp->t_size);
      ep = tp->t_data.emem;
      for( ; i >= 1 && !(ep == ((struct elist *)NULL)); ep = ep->el_next)
      {
        offset=strtab_insert(&b->ctb_strtab, ep->el_name);
        cte.cte_name = (unsigned int)((unsigned long int)(0 << 31) | offset & (unsigned long int)0x7fffffff);
        cte.cte_value = ep->el_number;
        ctf_buf_write(b, (const void *)&cte, sizeof(struct ctf_enum) /*8ul*/ );
        i = i - 1;
      }
      break;
    }
    case FORWARD:
    {
      ctt.ctt_info = (unsigned short int)(9 << 11 | (isroot != 0 ? 1 : 0) << 10 | 0 & 0x3ff);
      ctt._u._type = (unsigned short int)0;
      write_unsized_type_rec(b, &ctt);
      break;
    }
    case TYPEDEF:
    {
      ctt.ctt_info = (unsigned short int)(10 << 11 | (isroot != 0 ? 1 : 0) << 10 | 0 & 0x3ff);
      ctt._u._type = (unsigned short int)tp->t_data.tdesc->t_id;
      write_unsized_type_rec(b, &ctt);
      break;
    }
    case VOLATILE:
    {
      ctt.ctt_info = (unsigned short int)(11 << 11 | (isroot != 0 ? 1 : 0) << 10 | 0 & 0x3ff);
      ctt._u._type = (unsigned short int)tp->t_data.tdesc->t_id;
      write_unsized_type_rec(b, &ctt);
      break;
    }
    case CONST:
    {
      ctt.ctt_info = (unsigned short int)(12 << 11 | (isroot != 0 ? 1 : 0) << 10 | 0 & 0x3ff);
      ctt._u._type = (unsigned short int)tp->t_data.tdesc->t_id;
      write_unsized_type_rec(b, &ctt);
      break;
    }
    case FUNCTION:
    {
      i = (signed int)(tp->t_data.fndef->fn_nargs + tp->t_data.fndef->fn_vargs);
      if(i >= 1024)
        terminate("function %s has too many args: %d > %d\n", i, 0x3ff);

      ctt.ctt_info = (unsigned short int)(5 << 11 | (isroot != 0 ? 1 : 0) << 10 | i & 0x3ff);
      ctt._u._type = (unsigned short int)tp->t_data.fndef->fn_ret->t_id;
      write_unsized_type_rec(b, &ctt);
      i = 0;
      for( ; !(i >= (signed int)tp->t_data.fndef->fn_nargs); i = i + 1)
      {
        id = (unsigned short int)tp->t_data.fndef->fn_args[(signed long int)i]->t_id;
        ctf_buf_write(b, (const void *)&id, sizeof(unsigned short int) /*2ul*/ );
      }
      if(!(tp->t_data.fndef->fn_vargs == 0u))
      {
        id = (unsigned short int)0;
        ctf_buf_write(b, (const void *)&id, sizeof(unsigned short int) /*2ul*/ );
        i = i + 1;
      }

      if(!((1 & i) == 0))
      {
        id = (unsigned short int)0;
        ctf_buf_write(b, (const void *)&id, sizeof(unsigned short int) /*2ul*/ );
      }

      break;
    }
    case RESTRICT:
    {
      ctt.ctt_info = (unsigned short int)(13 << 11 | (isroot != 0 ? 1 : 0) << 10 | 0 & 0x3ff);
      ctt._u._type = (unsigned short int)tp->t_data.tdesc->t_id;
      write_unsized_type_rec(b, &ctt);
      break;
    }
    default:
      warning("Can't write unknown type %d\n", tp->t_type);
  }
  const char *return_value_tdesc_name$3;
  return_value_tdesc_name$3=tdesc_name(tp);
  debug(3, "Wrote type %d %s\n", tp->t_id, return_value_tdesc_name$3);
  return 1;
}

// write_unsized_type_rec
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/cvt/ctf.c line 221
static void write_unsized_type_rec(struct ctf_buf *b, struct ctf_type *ctt)
{
  struct ctf_stype *cts = (struct ctf_stype *)ctt;
  ctf_buf_write(b, (const void *)cts, sizeof(struct ctf_stype) /*8ul*/ );
}

// xcalloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 43
void * xcalloc(unsigned long int size)
{
  void *mem;
  mem=xmalloc(size);
  bzero(mem, size);
  return mem;
}

// xmalloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 42
void * xmalloc(unsigned long int size)
{
  void *mem;
  mem=malloc(size);
  if(mem == NULL)
    memory_bailout();

  return mem;
}

// xrealloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 46
void * xrealloc(void *ptr, unsigned long int size)
{
  void *mem;
  mem=realloc(ptr, size);
  if(mem == NULL)
    memory_bailout();

  return mem;
}

// xstrdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/contrib/opensolaris/tools/ctf/common/memory.h line 44
char * xstrdup(const char *str)
{
  char *newstr;
  newstr=strdup(str);
  if(newstr == ((char *)NULL))
    memory_bailout();

  return newstr;
}

// xstrndup
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/usr.bin/ctfmerge/../../../cddl/contrib/opensolaris/tools/ctf/common/memory.c line 81
char * xstrndup(char *str, unsigned long int len)
{
  char *newstr;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  newstr = (char *)return_value_malloc$1;
  if(newstr == ((char *)NULL))
    memory_bailout();

  strncpy(newstr, str, len);
  newstr[(signed long int)len] = (char)0;
  return newstr;
}

// z_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 132
extern const char * z_strerror(signed int err)
{
  const char *return_value;
  return_value=zlib.z_error(err);
  return return_value;
}

// z_uncompress
// file /srv/jenkins-slave/workspace/sid-goto-cc-ctfutils/ctfutils-9.2/cddl/lib/libctf/../../../cddl/contrib/opensolaris/lib/libctf/common/ctf_lib.c line 126
extern signed int z_uncompress(void *dst, unsigned long int *dstlen, const void *src, unsigned long int srclen)
{
  signed int return_value;
  return_value=zlib.z_uncompress((unsigned char *)dst, (unsigned long int *)dstlen, (const unsigned char *)src, srclen);
  return return_value;
}

