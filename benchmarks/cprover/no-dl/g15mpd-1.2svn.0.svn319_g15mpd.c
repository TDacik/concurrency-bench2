// #anon_enum$MPD_CST_PLAYLIST=1$MPD_CST_SONGPOS=2$MPD_CST_SONGID=4$MPD_CST_DATABASE=8$MPD_CST_UPDATING=16$MPD_CST_VOLUME=32$MPD_CST_TOTAL_TIME=64$MPD_CST_ELAPSED_TIME=128$MPD_CST_CROSSFADE=256$MPD_CST_RANDOM=512$MPD_CST_REPEAT=1024$MPD_CST_AUDIO=2048$MPD_CST_STATE=4096$MPD_CST_PERMISSION=8192$MPD_CST_BITRATE=16384$MPD_CST_AUDIOFORMAT=32768$MPD_CST_STORED_PLAYLIST=131072$MPD_CST_SERVER_ERROR=262144$MPD_CST_OUTPUT=524288$MPD_CST_STICKER=1048576$MPD_CST_NEXTSONG=2097152$MPD_CST_SINGLE_MODE=4194304$MPD_CST_CONSUME_MODE=8388608$MPD_CST_REPLAYGAIN=16777216
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 349
enum anonymous$1 { MPD_CST_PLAYLIST=1, MPD_CST_SONGPOS=2, MPD_CST_SONGID=4, MPD_CST_DATABASE=8, MPD_CST_UPDATING=16, MPD_CST_VOLUME=32, MPD_CST_TOTAL_TIME=64, MPD_CST_ELAPSED_TIME=128, MPD_CST_CROSSFADE=256, MPD_CST_RANDOM=512, MPD_CST_REPEAT=1024, MPD_CST_AUDIO=2048, MPD_CST_STATE=4096, MPD_CST_PERMISSION=8192, MPD_CST_BITRATE=16384, MPD_CST_AUDIOFORMAT=32768, MPD_CST_STORED_PLAYLIST=131072, MPD_CST_SERVER_ERROR=262144, MPD_CST_OUTPUT=524288, MPD_CST_STICKER=1048576, MPD_CST_NEXTSONG=2097152, MPD_CST_SINGLE_MODE=4194304, MPD_CST_CONSUME_MODE=8388608, MPD_CST_REPLAYGAIN=16777216 };

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$0;

// tag-_MpdObj
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 100
struct _MpdObj;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_mpd_Song
// file /usr/include/libmpd-1.0/libmpd/libmpdclient.h line 267
struct _mpd_Song;

// tag-g15canvas
// file /usr/include/libg15render.h line 46
struct g15canvas;

// tag-input_event
// file /usr/include/linux/input.h line 22
struct input_event;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-track_info
// file g15mpd.c line 80
struct track_info;

#ifndef NULL
#define NULL ((void*)0)
#endif

// Lkeys_thread
// file g15mpd.c line 97
void * Lkeys_thread();
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// error_callback
// file g15mpd.c line 93
void error_callback(struct _MpdObj *mi, signed int errorid, char *msg, void *userdata);
// event_key_thread
// file g15mpd.c line 192
void * event_key_thread();
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// g15_send
// file /usr/include/g15daemon_client.h line 67
signed int g15_send(signed int, char *, unsigned int);
// g15_send_cmd
// file /usr/include/g15daemon_client.h line 71
unsigned long int g15_send_cmd(signed int, unsigned char, unsigned char);
// g15daemon_version
// file /usr/include/g15daemon_client.h line 55
const char * g15daemon_version();
// g15display_thread
// file g15mpd.c line 307
void * g15display_thread();
// g15r_drawBar
// file /usr/include/libg15render.h line 112
void g15r_drawBar(struct g15canvas *, signed int, signed int, signed int, signed int, signed int, signed int, signed int, signed int);
// g15r_drawLine
// file /usr/include/libg15render.h line 100
void g15r_drawLine(struct g15canvas *, signed int, signed int, signed int, signed int, const signed int);
// g15r_pixelBox
// file /usr/include/libg15render.h line 103
void g15r_pixelBox(struct g15canvas *, signed int, signed int, signed int, signed int, signed int, signed int, signed int);
// g15r_renderString
// file /usr/include/libg15render.h line 151
void g15r_renderString(struct g15canvas *, unsigned char *, signed int, signed int, unsigned int, unsigned int);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mpd_connect
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 271
signed int mpd_connect(struct _MpdObj *);
// mpd_free
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 309
void mpd_free(struct _MpdObj *);
// mpd_new
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 202
struct _MpdObj * mpd_new(char *, signed int, char *);
// mpd_player_get_random
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 185
signed int mpd_player_get_random(struct _MpdObj *);
// mpd_player_get_repeat
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 148
signed int mpd_player_get_repeat(struct _MpdObj *);
// mpd_player_get_state
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 119
signed int mpd_player_get_state(struct _MpdObj *);
// mpd_player_next
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 89
signed int mpd_player_next(struct _MpdObj *);
// mpd_player_pause
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 109
signed int mpd_player_pause(struct _MpdObj *);
// mpd_player_play
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 57
signed int mpd_player_play(struct _MpdObj *);
// mpd_player_play_id
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 69
signed int mpd_player_play_id(struct _MpdObj *, signed int);
// mpd_player_prev
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 99
signed int mpd_player_prev(struct _MpdObj *);
// mpd_player_set_random
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 194
signed int mpd_player_set_random(struct _MpdObj *, signed int);
// mpd_player_set_repeat
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 176
signed int mpd_player_set_repeat(struct _MpdObj *, signed int);
// mpd_player_stop
// file /usr/include/libmpd-1.0/libmpd/libmpd-player.h line 79
signed int mpd_player_stop(struct _MpdObj *);
// mpd_playlist_get_current_song
// file /usr/include/libmpd-1.0/libmpd/libmpd-playlist.h line 94
struct _mpd_Song * mpd_playlist_get_current_song(struct _MpdObj *);
// mpd_playlist_get_playlist_length
// file /usr/include/libmpd-1.0/libmpd/libmpd-playlist.h line 167
signed int mpd_playlist_get_playlist_length(struct _MpdObj *);
// mpd_playlist_get_song_from_pos
// file /usr/include/libmpd-1.0/libmpd/libmpd-playlist.h line 70
struct _mpd_Song * mpd_playlist_get_song_from_pos(struct _MpdObj *, signed int);
// mpd_send_password
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 322
signed int mpd_send_password(struct _MpdObj *);
// mpd_set_connection_timeout
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 259
signed int mpd_set_connection_timeout(struct _MpdObj *, float);
// mpd_signal_connect_error
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 454
void mpd_signal_connect_error(struct _MpdObj *, signed int (*)(struct _MpdObj *, signed int, char *, void *), void *);
// mpd_signal_connect_status_changed
// file /usr/include/libmpd-1.0/libmpd/libmpd.h line 444
void mpd_signal_connect_status_changed(struct _MpdObj *, void (*)(struct _MpdObj *, enum anonymous$1, void *), void *);
// mpd_status_get_elapsed_song_time
// file /usr/include/libmpd-1.0/libmpd/libmpd-status.h line 157
signed int mpd_status_get_elapsed_song_time(struct _MpdObj *);
// mpd_status_get_total_song_time
// file /usr/include/libmpd-1.0/libmpd/libmpd-status.h line 147
signed int mpd_status_get_total_song_time(struct _MpdObj *);
// mpd_status_get_volume
// file /usr/include/libmpd-1.0/libmpd/libmpd-status.h line 92
signed int mpd_status_get_volume(struct _MpdObj *);
// mpd_status_set_volume
// file /usr/include/libmpd-1.0/libmpd/libmpd-status.h line 81
signed int mpd_status_set_volume(struct _MpdObj *, signed int);
// mpd_status_update
// file /usr/include/libmpd-1.0/libmpd/libmpd-status.h line 59
signed int mpd_status_update(struct _MpdObj *);
// new_g15_screen
// file /usr/include/g15daemon_client.h line 60
signed int new_g15_screen(signed int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 377
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$0 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$0 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// status_changed
// file g15mpd.c line 512
void status_changed(struct _MpdObj *mi, enum anonymous$1 what);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);

union anonymous
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

union anonymous$0
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct _mpd_Song
{
  // file
  char *file;
  // artist
  char *artist;
  // title
  char *title;
  // album
  char *album;
  // track
  char *track;
  // name
  char *name;
  // date
  char *date;
  // genre
  char *genre;
  // composer
  char *composer;
  // performer
  char *performer;
  // disc
  char *disc;
  // comment
  char *comment;
  // albumartist
  char *albumartist;
  // time
  signed int time;
  // pos
  signed int pos;
  // id
  signed int id;
};

struct g15canvas
{
  // buffer
  unsigned char buffer[1048l];
  // mode_xor
  signed int mode_xor;
  // mode_cache
  signed int mode_cache;
  // mode_reverse
  signed int mode_reverse;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct input_event
{
  // time
  struct timeval time;
  // type
  unsigned short int type;
  // code
  unsigned short int code;
  // value
  signed int value;
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

struct track_info
{
  // artist
  char artist[100l];
  // title
  char title[100l];
  // total
  signed int total;
  // elapsed
  signed int elapsed;
  // volume
  signed int volume;
  // repeat
  signed int repeat;
  // random
  signed int random;
  // playstate
  signed int playstate;
  // totalsongs_in_playlist
  signed int totalsongs_in_playlist;
  // currentsong
  signed int currentsong;
};


// canvas
// file g15mpd.c line 50
struct g15canvas *canvas;
// current_fg_check
// file g15mpd.c line 51
signed int current_fg_check = 0;
// daemon_mutex
// file g15mpd.c line 62
union anonymous$0 daemon_mutex;
// g15screen_fd
// file g15mpd.c line 49
signed int g15screen_fd;
// item_selected
// file g15mpd.c line 75
signed int item_selected = 0;
// leaving
// file g15mpd.c line 58
signed int leaving = 0;
// lockit
// file g15mpd.c line 63
union anonymous$0 lockit;
// menulevel
// file g15mpd.c line 67
static signed int menulevel = 0;
// mmedia_fd
// file g15mpd.c line 65
signed int mmedia_fd;
// mute
// file g15mpd.c line 77
signed int mute = 0;
// muted_volume
// file g15mpd.c line 78
signed int muted_volume = 0;
// obj
// file g15mpd.c line 56
struct _MpdObj *obj = (struct _MpdObj *)(void *)0;
// own_keyboard
// file g15mpd.c line 60
static signed int own_keyboard = 0;
// paused
// file g15mpd.c line 53
static signed int paused = 0;
// playing
// file g15mpd.c line 52
static signed int playing;
// playlist_mode
// file g15mpd.c line 73
static signed int playlist_mode = 0;
// playlist_selection
// file g15mpd.c line 74
signed int playlist_selection = 0;
// quickscroll
// file g15mpd.c line 54
static signed int quickscroll = 0;
// retval
// file g15mpd.c line 49
signed int retval;
// track_info
// file g15mpd.c line 91
struct track_info track_info;
// voltimeout
// file g15mpd.c line 59
static signed int voltimeout = 0;
// volume_adjust
// file g15mpd.c line 76
signed int volume_adjust = 0;

// Lkeys_thread
// file g15mpd.c line 97
void * Lkeys_thread()
{
  signed int keystate = 0;
  signed int volume;
  struct pollfd fds;
  char ver[5l];
  const char *return_value_g15daemon_version$1;
  return_value_g15daemon_version$1=g15daemon_version();
  strncpy(ver, return_value_g15daemon_version$1, (unsigned long int)3);
  float g15v;
  sscanf(ver, "%f", &g15v);
  fds.fd = g15screen_fd;
  fds.events = (signed short int)0x001;
  while(leaving == 0)
  {
    signed int foo = 0;
    unsigned long int return_value_g15_send_cmd$2;
    return_value_g15_send_cmd$2=g15_send_cmd(g15screen_fd, (unsigned char)118, (unsigned char)foo);
    current_fg_check = (signed int)return_value_g15_send_cmd$2;
    static signed int last_fg_check = 0;
    if(!(last_fg_check == current_fg_check) && !(playlist_mode == 0))
    {
      if(!(own_keyboard == 0))
      {
        if(current_fg_check == 0)
          own_keyboard = 0;

      }

      else
        if(own_keyboard == 0 && !(current_fg_check == 0))
          own_keyboard = 1;

      last_fg_check = current_fg_check;
    }

    pthread_mutex_lock(&daemon_mutex);
    if(g15v * 10.000000f <= 18.000000f)
    {
      unsigned long int return_value_g15_send_cmd$3;
      return_value_g15_send_cmd$3=g15_send_cmd(g15screen_fd, (unsigned char)107, (unsigned char)foo);
      keystate = (signed int)return_value_g15_send_cmd$3;
    }

    else
    {
      signed int return_value_poll$4;
      return_value_poll$4=poll(&fds, (unsigned long int)1, 5);
      if(return_value_poll$4 >= 1)
        read(g15screen_fd, (void *)&keystate, sizeof(signed int) /*4ul*/ );

    }
    pthread_mutex_unlock(&daemon_mutex);
    if(!(keystate == 0))
    {
      switch(keystate)
      {
        case 4194304:
        {
          exit(1);
          break;
        }
        case 8388608:
        {
          menulevel = menulevel + 1;
          if(menulevel >= 2)
            menulevel = 0;

          break;
        }
        case 16777216:
        {
          if(own_keyboard == 0)
          {
            playlist_mode = 1;
            own_keyboard = playlist_mode;
            struct _mpd_Song *song;
            song=mpd_playlist_get_current_song(obj);
            if(!(song == ((struct _mpd_Song *)NULL)))
            {
              if(!(song->pos == 0))
                track_info.currentsong = song->pos;

            }

          }

          else
          {
            playlist_mode = 0;
            own_keyboard = playlist_mode;
          }
          break;
        }
        case 33554432:
        {
          if(menulevel == 0)
          {
            signed int return_value_mpd_player_get_random$5;
            return_value_mpd_player_get_random$5=mpd_player_get_random(obj);
            mpd_player_set_random(obj, return_value_mpd_player_get_random$5 ^ 1);
          }

          if(menulevel == 1)
          {
            volume=mpd_status_get_volume(obj);
            if(volume >= 1)
              volume = volume - 10;

            mpd_status_set_volume(obj, volume);
          }

          break;
        }
        case 67108864:
        {
          if(menulevel == 0)
          {
            signed int return_value_mpd_player_get_repeat$6;
            return_value_mpd_player_get_repeat$6=mpd_player_get_repeat(obj);
            mpd_player_set_repeat(obj, return_value_mpd_player_get_repeat$6 ^ 1);
          }

          if(menulevel == 1)
          {
            volume=mpd_status_get_volume(obj);
            if(!(volume >= 100))
              volume = volume + 10;

            mpd_status_set_volume(obj, volume);
          }

        }
      }
      keystate = 0;
    }

    usleep((unsigned int)(100 * 1000));
  }
  return (void *)0;
}

// error_callback
// file g15mpd.c line 93
void error_callback(struct _MpdObj *mi, signed int errorid, char *msg, void *userdata)
{
  ;
}

// event_key_thread
// file g15mpd.c line 192
void * event_key_thread()
{
  struct input_event *event;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct input_event) /*24ul*/ );
  event = (struct input_event *)return_value_malloc$1;
  struct pollfd fds;
  signed int event_key_thread$$1$$retval;
  while(leaving == 0)
  {
    event->value = 0;
    event->code = (unsigned short int)0;
    fds.fd = mmedia_fd;
    fds.events = (signed short int)0x001;
    signed int return_value_poll$2;
    return_value_poll$2=poll(&fds, (unsigned long int)1, 500);
    if(return_value_poll$2 >= 1)
    {
      signed long int return_value_read$3;
      return_value_read$3=read(mmedia_fd, (void *)event, sizeof(struct input_event) /*24ul*/ );
      event_key_thread$$1$$retval = (signed int)return_value_read$3;
      if(!(event->value == 0) && !(current_fg_check == 0))
      {
        signed int keycode = (signed int)event->code;
        signed int code_audio_play = 164;
        signed int code_audio_stop = 166;
        signed int code_audio_next = 163;
        signed int code_audio_prev = 165;
        signed int code_audio_raisevol = 115;
        signed int code_audio_lowervol = 114;
        signed int code_audio_mute = 113;
        if(keycode == code_audio_play)
        {
          if(playlist_mode == 0 && !(playing == 0))
          {
            if(paused == 1)
            {
              mpd_player_play(obj);
              paused = 0;
            }

            else
            {
              mpd_player_pause(obj);
              paused = 1;
            }
          }

          else
          {
            mpd_player_play(obj);
            playing = 1;
          }
          if(!(playlist_mode == 0))
            mpd_player_play_id(obj, item_selected);

        }

        if(keycode == code_audio_stop)
        {
          mpd_player_stop(obj);
          playing = 0;
        }

        else
          if(keycode == code_audio_next)
          {
            if(!(playlist_mode == 0))
              playlist_selection = playlist_selection + 1;

            else
              mpd_player_next(obj);
          }

          else
            if(keycode == code_audio_prev)
            {
              if(!(playlist_mode == 0))
                playlist_selection = playlist_selection - 1;

              else
                mpd_player_prev(obj);
            }

            else
              if(keycode == code_audio_raisevol)
              {
                if(!(playlist_mode == 0) && !(quickscroll == 0))
                {
                  playlist_selection = playlist_selection + 1;
                  goto __CPROVER_DUMP_L16;
                }

                pthread_mutex_lock(&daemon_mutex);
                volume_adjust = volume_adjust + 1;
                pthread_mutex_unlock(&daemon_mutex);
              }

              else
              {

              __CPROVER_DUMP_L16:
                ;
                if(keycode == code_audio_lowervol)
                {
                  if(!(playlist_mode == 0) && !(quickscroll == 0))
                  {
                    playlist_selection = playlist_selection - 1;
                    goto __CPROVER_DUMP_L18;
                  }

                  pthread_mutex_lock(&daemon_mutex);
                  volume_adjust = volume_adjust - 1;
                  pthread_mutex_unlock(&daemon_mutex);
                }

                else
                {

                __CPROVER_DUMP_L18:
                  ;
                  if(keycode == code_audio_mute)
                  {
                    pthread_mutex_lock(&daemon_mutex);
                    mute = 1;
                    pthread_mutex_unlock(&daemon_mutex);
                  }

                  else
                    if(!(own_keyboard == 0))
                      menulevel = 0;

                }
              }
      }

    }

  }
  free((void *)event);
  return (void *)0;
}

// g15display_thread
// file g15mpd.c line 307
void * g15display_thread()
{
  signed long int chksum = (signed long int)0;
  signed int i;
  unsigned char time_elapsed[41l];
  unsigned char time_total[41l];
  signed int changed = 0;
  signed int return_value_g15_send$6;
  while(leaving == 0)
  {
    if(!(playlist_mode == 0))
    {
      signed int y = 0;
      signed int offset = 2;
      changed = 0;
      static signed int current = 0;
      if(track_info.currentsong >= 0)
      {
        current = track_info.currentsong;
        track_info.currentsong = -1;
        changed = 1;
      }

      if(playlist_selection >= 1)
      {
        signed int return_value_mpd_playlist_get_playlist_length$1;
        return_value_mpd_playlist_get_playlist_length$1=mpd_playlist_get_playlist_length(obj);
        if(!(1 + current >= return_value_mpd_playlist_get_playlist_length$1))
        {
          current = current + playlist_selection;
          changed = 1;
        }

        playlist_selection = 0;
      }

      if(!(playlist_selection >= 0))
      {
        if(!(current == 0))
        {
          current = current - 1;
          changed = 1;
        }

        playlist_selection = 0;
      }

      if(!(current + -offset >= 0))
        offset = offset - current;

      if(!(changed == 0))
      {
        g15r_pixelBox(canvas, 0, 0, 159, 42, 0, 1, 1);
        i = current - offset;
        for( ; !(i >= 6 + current); i = i + 1)
        {
          char title[100l];
          struct _mpd_Song *song;
          song=mpd_playlist_get_song_from_pos(obj, i);
          if(!(song == ((struct _mpd_Song *)NULL)))
          {
            if(!(song->title == ((char *)NULL)))
              strncpy(title, song->title, (unsigned long int)99);

            else
              strncpy(title, "", (unsigned long int)99);
            if(!(song->artist == ((char *)NULL)))
            {
              strncat(title, " - ", (unsigned long int)99);
              strncat(title, song->artist, (unsigned long int)99);
            }

          }

          signed int return_value_mpd_playlist_get_playlist_length$2;
          return_value_mpd_playlist_get_playlist_length$2=mpd_playlist_get_playlist_length(obj);
          if(i == return_value_mpd_playlist_get_playlist_length$2)
            strncpy(title, "End of PlayList", (unsigned long int)99);

          signed int return_value_mpd_playlist_get_playlist_length$3;
          return_value_mpd_playlist_get_playlist_length$3=mpd_playlist_get_playlist_length(obj);
          if(!(return_value_mpd_playlist_get_playlist_length$3 >= i))
            break;

          if(!(i >= 0))
            strncpy(title, "", (unsigned long int)99);

          if(y == offset)
          {
            g15r_pixelBox(canvas, 0, 7 * offset, 159, 7 * (offset + 1), 1, 1, 1);
            canvas->mode_xor = 1;
            if(!(song == ((struct _mpd_Song *)NULL)))
            {
              if(!(song->id == 0))
                item_selected = song->id;

            }

          }

          g15r_renderString(canvas, (unsigned char *)title, y, 1, (unsigned int)1, (unsigned int)1);
          canvas->mode_xor = 0;
          y = y + 1;
        }
      }

    }

    else
    {
      g15r_pixelBox(canvas, 0, 0, 159, 42, 0, 1, 1);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(track_info.artist);
      g15r_renderString(canvas, (unsigned char *)track_info.artist, 0, 2, (unsigned int)((unsigned long int)80 - (return_value_strlen$4 * (unsigned long int)8) / (unsigned long int)2), (unsigned int)2);
      unsigned long int return_value_strlen$5;
      return_value_strlen$5=strlen(track_info.title);
      g15r_renderString(canvas, (unsigned char *)track_info.title, 0, 1, (unsigned int)((unsigned long int)80 - (return_value_strlen$5 * (unsigned long int)5) / (unsigned long int)2), (unsigned int)12);
      memset((void *)time_elapsed, 0, (unsigned long int)41);
      memset((void *)time_total, 0, (unsigned long int)41);
      if(!(track_info.total == 0))
      {
        snprintf((char *)time_elapsed, (unsigned long int)40, "%02i:%02i", track_info.elapsed / 60, track_info.elapsed % 60);
        snprintf((char *)time_total, (unsigned long int)40, "%02i:%02i", track_info.total / 60, track_info.total % 60);
      }

      if(track_info.elapsed >= 1 && track_info.total >= 1)
        g15r_drawBar(canvas, 10, 22, 149, 30, 1, track_info.elapsed, track_info.total, 1);

      canvas->mode_xor = 1;
      g15r_renderString(canvas, (unsigned char *)time_elapsed, 0, 1, (unsigned int)12, (unsigned int)23);
      g15r_renderString(canvas, (unsigned char *)time_total, 0, 1, (unsigned int)124, (unsigned int)23);
      canvas->mode_xor = 0;
      switch(track_info.playstate)
      {
        case 2:
        {
          playing = 1;
          paused = 0;
          break;
        }
        case 3:
        {
          g15r_pixelBox(canvas, 10, 22, 149, 30, 0, 1, 1);
          g15r_renderString(canvas, (unsigned char *)"Playback Paused", 0, 2, (unsigned int)22, (unsigned int)23);
          paused = 1;
          break;
        }
        case 1:
        {
          g15r_pixelBox(canvas, 10, 22, 149, 30, 0, 1, 1);
          g15r_renderString(canvas, (unsigned char *)"Playback Stopped", 0, 2, (unsigned int)18, (unsigned int)23);
          playing = 0;
          paused = 0;
        }
      }
      g15r_pixelBox(canvas, 1, 34, 158, 41, 0, 1, 1);
      g15r_pixelBox(canvas, 10, 34, 27, 42, 1, 1, 1);
      canvas->mode_xor = 1;
      g15r_renderString(canvas, (unsigned char *)"mode", 0, 0, (unsigned int)11, (unsigned int)36);
      canvas->mode_xor = 0;
      if(menulevel == 0)
      {
        if(!(track_info.random == 0))
        {
          g15r_drawLine(canvas, 43, 42, 158, 42, 0);
          canvas->mode_xor = 1;
          g15r_pixelBox(canvas, 104, 34, 125, 42, 1, 1, 1);
        }

        else
          g15r_pixelBox(canvas, 104, 34, 125, 42, 1, 1, 0);
        g15r_renderString(canvas, (unsigned char *)"Rndm", 0, 0, (unsigned int)108, (unsigned int)36);
        canvas->mode_xor = 0;
        if(!(track_info.repeat == 0))
        {
          canvas->mode_xor = 1;
          g15r_pixelBox(canvas, 130, 34, 149, 42, 1, 1, 1);
        }

        else
          g15r_pixelBox(canvas, 130, 34, 149, 42, 1, 1, 0);
        g15r_renderString(canvas, (unsigned char *)"Rpt", 0, 0, (unsigned int)136, (unsigned int)36);
        canvas->mode_xor = 0;
        if(playlist_mode == 0)
        {
          g15r_pixelBox(canvas, 34, 34, 70, 42, 1, 1, 0);
          g15r_renderString(canvas, (unsigned char *)"Playlist", 0, 0, (unsigned int)36, (unsigned int)36);
        }

        else
        {
          canvas->mode_xor = 1;
          g15r_pixelBox(canvas, 34, 34, 70, 42, 1, 1, 1);
          g15r_renderString(canvas, (unsigned char *)"Playlist", 0, 0, (unsigned int)36, (unsigned int)36);
          canvas->mode_xor = 0;
        }
      }

      if(menulevel == 1)
      {
        g15r_pixelBox(canvas, 104, 34, 125, 42, 1, 1, 0);
        g15r_renderString(canvas, (unsigned char *)"Vol-", 0, 0, (unsigned int)108, (unsigned int)36);
        g15r_pixelBox(canvas, 130, 34, 149, 42, 1, 1, 0);
        g15r_renderString(canvas, (unsigned char *)"Vol+", 0, 0, (unsigned int)132, (unsigned int)36);
      }

      if(!(muted_volume == 0))
        g15r_renderString(canvas, (unsigned char *)"MUTE", 0, 2, (unsigned int)11, (unsigned int)2);

      else
        if(!(voltimeout == 0))
        {
          g15r_drawBar(canvas, 10, 22, 149, 30, 1, track_info.volume, 100, 1);
          canvas->mode_xor = 1;
          g15r_renderString(canvas, (unsigned char *)"Volume", 0, 2, (unsigned int)59, (unsigned int)23);
          canvas->mode_xor = 0;
        }

    }
    chksum = (signed long int)0;
    i = 0;
    for( ; !(i >= 1048); i = i + 1)
      chksum = chksum + (signed long int)((signed int)canvas->buffer[(signed long int)i] * i);
    pthread_mutex_lock(&daemon_mutex);
    static signed long int last_chksum;
    if(!(last_chksum == chksum))
      do
      {
        return_value_g15_send$6=g15_send(g15screen_fd, (char *)canvas->buffer, (unsigned int)1048);
        if(return_value_g15_send$6 >= 0)
          break;

        if(!(leaving == 0))
          break;

        perror("lost connection, tryng again\n");
        usleep((unsigned int)10000);
        g15screen_fd=new_g15_screen(3);
      }
      while((_Bool)1);

    pthread_mutex_unlock(&daemon_mutex);
    last_chksum = chksum;
    usleep((unsigned int)(75 * 1000));
    if(!(playlist_mode == 0))
      usleep((unsigned int)(75 * 1000));

  }
  return (void *)0;
}

// main
// file g15mpd.c line 564
signed int main(signed int argc, char **argv)
{
  signed int fdstdin = 0;
  unsigned long int Lkeys;
  unsigned long int g15display;
  unsigned long int EKeys;
  signed int volume;
  signed int volume_new;
  char devname[256l] = { 'U', 'n', 'k', 'n', 'o', 'w', 'n', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int iport = 6600;
  char *hostname;
  hostname=getenv("MPD_HOST");
  char *port;
  port=getenv("MPD_PORT");
  char *password;
  password=getenv("MPD_PASSWORD");
  signed int eventdev;
  char evdev_name[128l];
  pthread_mutex_init(&lockit, (const union anonymous *)(void *)0);
  pthread_mutex_init(&daemon_mutex, (const union anonymous *)(void *)0);
  signed int i = 0;
  _Bool tmp_if_expr$3;
  signed int return_value_strncmp$2;
  _Bool tmp_if_expr$6;
  signed int return_value_strncmp$5;
  _Bool tmp_if_expr$9;
  signed int return_value_strncmp$8;
  for( ; !(i >= argc); i = i + 1)
  {
    char argument[20l];
    memset((void *)argument, 0, (unsigned long int)20);
    strncpy(argument, argv[(signed long int)i], (unsigned long int)19);
    signed int return_value_strncmp$1;
    return_value_strncmp$1=strncmp(argument, "-q", (unsigned long int)2);
    if(return_value_strncmp$1 == 0)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_strncmp$2=strncmp(argument, "--quickscroll", (unsigned long int)13);
      tmp_if_expr$3 = !(return_value_strncmp$2 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
      quickscroll = 1;

    signed int return_value_strncmp$4;
    return_value_strncmp$4=strncmp(argument, "-h", (unsigned long int)2);
    if(return_value_strncmp$4 == 0)
      tmp_if_expr$6 = (_Bool)1;

    else
    {
      return_value_strncmp$5=strncmp(argument, "--help", (unsigned long int)6);
      tmp_if_expr$6 = !(return_value_strncmp$5 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$6)
    {
      printf("  %s version %s\n  (c)2006-2007 Mike Lampard\n\n", argv[(signed long int)0], (const void *)"1.2.0");
      printf("%s -q or --quickscroll\tUse volume control to scroll through the playlist\n", argv[(signed long int)0]);
      printf("%s -v or --version\tShow program version\n", argv[(signed long int)0]);
      printf("%s -h or --help\t\tThis help text\n\n", argv[(signed long int)0]);
      exit(0);
    }

    signed int return_value_strncmp$7;
    return_value_strncmp$7=strncmp(argument, "-v", (unsigned long int)2);
    if(return_value_strncmp$7 == 0)
      tmp_if_expr$9 = (_Bool)1;

    else
    {
      return_value_strncmp$8=strncmp(argument, "--version", (unsigned long int)9);
      tmp_if_expr$9 = !(return_value_strncmp$8 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$9)
    {
      printf("%s version %s\n", argv[(signed long int)0], (const void *)"1.2.0");
      exit(0);
    }

  }
  eventdev = 0;
  for( ; !(eventdev >= 127); eventdev = eventdev + 1)
  {
    snprintf(evdev_name, (unsigned long int)127, "/dev/input/event%i", eventdev);
    mmedia_fd=open(evdev_name, 04000 | 00);
    if(!(mmedia_fd >= 0))
      printf("error opening interface %i", eventdev);

    ioctl(mmedia_fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(69 << 0 + 8) | (unsigned int)(0x06 << 0)) | sizeof(char [256l]) /*256ul*/  << 0 + 8 + 8, (const void *)devname);
    signed int return_value_strncmp$10;
    return_value_strncmp$10=strncmp(devname, "Logitech Logitech Gaming Keyboard", (unsigned long int)256);
    if(return_value_strncmp$10 == 0)
    {
      printf("Found device: \"%s\" on %s ", (const void *)devname, (const void *)evdev_name);
      break;
    }

    else
      close(mmedia_fd);
  }
  if(!(mmedia_fd == 0))
  {
    close(mmedia_fd);
    eventdev = eventdev + 1;
    snprintf(evdev_name, (unsigned long int)127, "/dev/input/event%i", eventdev);
    printf("and %s\n", (const void *)evdev_name);
    mmedia_fd=open(evdev_name, 04000 | 00);
    if(!(mmedia_fd >= 0))
      printf("error opening interface %i", eventdev);

  }

  else
    printf("Unable to find Keyboard via EVENT interface... is /dev/input/event[0-9] readable??\n");
  if(hostname == ((char *)NULL))
    hostname = "localhost";

  if(!(port == ((char *)NULL)))
    iport=atoi(port);

  g15screen_fd=new_g15_screen(3);
  signed int return_value_usleep$12;
  if(!(g15screen_fd >= 0))
  {
    printf("Sorry, cant connect to the G15daemon\n");
    return 1;
  }

  else
  {
    void *return_value_malloc$11;
    return_value_malloc$11=malloc(sizeof(struct g15canvas) /*1060ul*/ );
    canvas = (struct g15canvas *)return_value_malloc$11;
    if(!(canvas == ((struct g15canvas *)NULL)))
    {
      memset((void *)canvas->buffer, 0, (unsigned long int)1048);
      canvas->mode_cache = 0;
      canvas->mode_reverse = 0;
      canvas->mode_xor = 0;
    }

    obj=mpd_new(hostname, iport, password);
    mpd_signal_connect_error(obj, (signed int (*)(struct _MpdObj *, signed int, char *, void *))error_callback, (void *)0);
    mpd_signal_connect_status_changed(obj, (void (*)(struct _MpdObj *, enum anonymous$1, void *))status_changed, (void *)0);
    mpd_set_connection_timeout(obj, (float)10);
    signed int return_value_mpd_connect$14;
    return_value_mpd_connect$14=mpd_connect(obj);
    if(return_value_mpd_connect$14 == 0)
    {
      char buffer[20l];
      union pthread_attr_t attr;
      mpd_send_password(obj);
      memset((void *)buffer, 0, (unsigned long int)20);
      pthread_attr_init(&attr);
      pthread_attr_setstacksize(&attr, (unsigned long int)(32 * 1024));
      pthread_create(&Lkeys, &attr, (void * (*)(void *))Lkeys_thread, (void *)0);
      pthread_create(&EKeys, &attr, (void * (*)(void *))event_key_thread, (void *)0);
      pthread_create(&g15display, &attr, (void * (*)(void *))g15display_thread, (void *)0);
      do
      {
        pthread_mutex_lock(&daemon_mutex);
        if(!(mute == 0))
        {
          volume_adjust = 0;
          mute = 0;
          if(muted_volume == 0)
          {
            muted_volume=mpd_status_get_volume(obj);
            mpd_status_set_volume(obj, 0);
          }

          else
          {
            signed int return_value_mpd_status_get_volume$13;
            return_value_mpd_status_get_volume$13=mpd_status_get_volume(obj);
            if(return_value_mpd_status_get_volume$13 == 0)
              mpd_status_set_volume(obj, muted_volume);

            muted_volume = 0;
          }
        }

        if(!(volume_adjust == 0))
        {
          if(!(muted_volume == 0))
            volume = muted_volume;

          else
            volume=mpd_status_get_volume(obj);
          volume_new = volume + volume_adjust;
          volume_adjust = 0;
          if(!(volume_new >= 0))
            volume_new = 0;

          if(volume_new >= 101)
            volume_new = 100;

          if(!(volume == volume_new) || !(muted_volume == 0))
            mpd_status_set_volume(obj, volume_new);

          voltimeout = 500;
          muted_volume = 0;
        }

        mpd_status_update(obj);
        pthread_mutex_unlock(&daemon_mutex);
        return_value_usleep$12=usleep((unsigned int)5000);
      }
      while(leaving == 0 && return_value_usleep$12 == 0);
    }

    mpd_free(obj);
    close(fdstdin);
    if(!(canvas == ((struct g15canvas *)NULL)))
      free((void *)canvas);

    close(g15screen_fd);
    close(mmedia_fd);
    leaving = 1;
    pthread_join(Lkeys, (void **)(void *)0);
    pthread_join(g15display, (void **)(void *)0);
    pthread_mutex_destroy(&lockit);
    return 1;
  }
}

// status_changed
// file g15mpd.c line 512
void status_changed(struct _MpdObj *mi, enum anonymous$1 what)
{
  pthread_mutex_lock(&lockit);
  struct _mpd_Song *song;
  song=mpd_playlist_get_current_song(mi);
  if(!(song == ((struct _mpd_Song *)NULL)))
  {
    if(!(song->artist == ((char *)NULL)))
      strncpy(track_info.artist, song->artist, (unsigned long int)99);

    else
      track_info.artist[(signed long int)0] = (char)0;
    if(!(song->title == ((char *)NULL)))
      strncpy(track_info.title, song->title, (unsigned long int)99);

    else
      track_info.title[(signed long int)0] = (char)0;
  }

  if(!((MPD_CST_PLAYLIST & (signed int)what) == 0))
    track_info.totalsongs_in_playlist=mpd_playlist_get_playlist_length(mi);

  if(voltimeout == 0 && !((MPD_CST_ELAPSED_TIME & (signed int)what) == 0))
  {
    track_info.elapsed=mpd_status_get_elapsed_song_time(mi);
    track_info.total=mpd_status_get_total_song_time(mi);
  }

  if(!((MPD_CST_VOLUME & (signed int)what) == 0))
  {
    voltimeout = 500;
    track_info.volume=mpd_status_get_volume(mi);
  }

  if(!((MPD_CST_STATE & (signed int)what) == 0))
    track_info.playstate=mpd_player_get_state(mi);

  track_info.repeat=mpd_player_get_repeat(obj);
  track_info.random=mpd_player_get_random(obj);
  pthread_mutex_unlock(&lockit);
  usleep((unsigned int)(10 * 1000));
}

