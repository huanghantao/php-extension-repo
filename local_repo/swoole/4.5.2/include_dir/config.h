/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Whether to build swoole as dynamic module */
#define COMPILE_DL_SWOOLE 1

/* have accept4 */
/* #undef HAVE_ACCEPT4 */

/* Whether you have AI_ALL */
#define HAVE_AI_ALL 1

/* Whether you have AI_IDN */
/* #undef HAVE_AI_IDN */

/* Whether you have AI_V4MAPPED */
#define HAVE_AI_V4MAPPED 1

/* have clock_gettime */
#define HAVE_CLOCK_GETTIME 1

/* Whether you have struct cmsghdr */
#define HAVE_CMSGHDR 1

/* cpu affinity? */
/* #undef HAVE_CPU_AFFINITY */

/* have daemon */
#define HAVE_DAEMON 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* have epoll */
/* #undef HAVE_EPOLL */

/* have eventfd */
/* #undef HAVE_EVENTFD */

/* have execinfo */
#define HAVE_EXECINFO 1

/* have FUTEX? */
/* #undef HAVE_FUTEX */

/* have gethostbyname2_r */
/* #undef HAVE_GETHOSTBYNAME2_R */

/* Define to 1 if you have the `hstrerror' function. */
#define HAVE_HSTRERROR 1

/* Define to 1 if you have the `if_indextoname' function. */
#define HAVE_IF_INDEXTONAME 1

/* Define to 1 if you have the `if_nametoindex' function. */
#define HAVE_IF_NAMETOINDEX 1

/* have inotify */
/* #undef HAVE_INOTIFY */

/* have inotify_init1 */
/* #undef HAVE_INOTIFY_INIT1 */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* have kqueue */
#define HAVE_KQUEUE 1

/* have malloc_trim */
/* #undef HAVE_MALLOC_TRIM */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* have mkostemp */
#define HAVE_MKOSTEMP 1

/* have pthread_mutex_timedlock */
/* #undef HAVE_MUTEX_TIMEDLOCK */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* have openssl */
#define HAVE_OPENSSL 1

/* have pcre */
#define HAVE_PCRE 1

/* have poll */
#define HAVE_POLL 1

/* have pthread_barrier_init */
/* #undef HAVE_PTHREAD_BARRIER */

/* have ptrace */
#define HAVE_PTRACE 1

/* have SO_REUSEPORT? */
#define HAVE_REUSEPORT 1

/* have pthread_rwlock_init */
#define HAVE_RWLOCK 1

/* Whether you have sockaddr_storage.ss_family */
#define HAVE_SA_SS_FAMILY 1

/* have sendfile */
#define HAVE_SENDFILE 1

/* have signalfd */
/* #undef HAVE_SIGNALFD */

/* Define to 1 if you have the `socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* */
#define HAVE_SOCKETS 1

/* have pthread_spin_lock */
/* #undef HAVE_SPINLOCK */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
#define HAVE_SYS_SOCKIO_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* have ucontext? */
/* #undef HAVE_UCONTEXT */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* have valgrind? */
/* #undef HAVE_VALGRIND */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* do we enable swoole debug */
/* #undef SW_DEBUG */

/* have brotli encoder */
#define SW_HAVE_BROTLI 1

/* have compression */
#define SW_HAVE_COMPRESSION 1

/* have zlib */
#define SW_HAVE_ZLIB 1

/* enable trace log */
/* #undef SW_LOG_TRACE_OPEN */

/* enable sockets support */
#define SW_SOCKETS 1

/* use boost asm context */
#define SW_USE_ASM_CONTEXT 1

/* enable HTTP2 support */
#define SW_USE_HTTP2 1

/* use jemalloc */
/* #undef SW_USE_JEMALLOC */

/* use mysqlnd */
#define SW_USE_MYSQLND 1

/* enable openssl support */
#define SW_USE_OPENSSL 1

/* enable thread support */
/* #undef SW_USE_THREAD */
