/* This C header file is generated by NIT to compile modules and programs that requires ./../lib/standard/stream. */
#ifndef standard___stream_sep
#define standard___stream_sep
#include "standard___string._sep.h"
#include <nit_common.h>
#include "stream._nitni.h"

extern const classtable_elt_t VFT_standard___stream___IOS[];

extern const classtable_elt_t VFT_standard___stream___IStream[];

extern const classtable_elt_t VFT_standard___stream___OStream[];

extern const classtable_elt_t VFT_standard___stream___BufferedIStream[];

extern const classtable_elt_t VFT_standard___stream___IOStream[];

extern const classtable_elt_t VFT_standard___stream___FDStream[];

extern const classtable_elt_t VFT_standard___stream___FDIStream[];

extern const classtable_elt_t VFT_standard___stream___FDOStream[];

extern const classtable_elt_t VFT_standard___stream___FDIOStream[];
extern const char *LOCATE_standard___stream;
extern const int SFT_standard___stream[];
#define ID_standard___stream___IOS (SFT_standard___stream[0])
#define COLOR_standard___stream___IOS (SFT_standard___stream[1])
#define INIT_TABLE_POS_standard___stream___IOS (SFT_standard___stream[2] + 0)
#define CALL_standard___stream___IOS___close(recv) ((standard___stream___IOS___close_t)CALL((recv), (SFT_standard___stream[2] + 1)))
#define CALL_standard___stream___IOS___init(recv) ((standard___stream___IOS___init_t)CALL((recv), (SFT_standard___stream[2] + 2)))
#define ID_standard___stream___IStream (SFT_standard___stream[3])
#define COLOR_standard___stream___IStream (SFT_standard___stream[4])
#define INIT_TABLE_POS_standard___stream___IStream (SFT_standard___stream[5] + 0)
#define CALL_standard___stream___IStream___read_char(recv) ((standard___stream___IStream___read_char_t)CALL((recv), (SFT_standard___stream[5] + 1)))
#define CALL_standard___stream___IStream___read(recv) ((standard___stream___IStream___read_t)CALL((recv), (SFT_standard___stream[5] + 2)))
#define CALL_standard___stream___IStream___read_line(recv) ((standard___stream___IStream___read_line_t)CALL((recv), (SFT_standard___stream[5] + 3)))
#define CALL_standard___stream___IStream___read_all(recv) ((standard___stream___IStream___read_all_t)CALL((recv), (SFT_standard___stream[5] + 4)))
#define CALL_standard___stream___IStream___append_line_to(recv) ((standard___stream___IStream___append_line_to_t)CALL((recv), (SFT_standard___stream[5] + 5)))
#define CALL_standard___stream___IStream___eof(recv) ((standard___stream___IStream___eof_t)CALL((recv), (SFT_standard___stream[5] + 6)))
#define ID_standard___stream___OStream (SFT_standard___stream[6])
#define COLOR_standard___stream___OStream (SFT_standard___stream[7])
#define INIT_TABLE_POS_standard___stream___OStream (SFT_standard___stream[8] + 0)
#define CALL_standard___stream___OStream___write(recv) ((standard___stream___OStream___write_t)CALL((recv), (SFT_standard___stream[8] + 1)))
#define CALL_standard___stream___OStream___is_writable(recv) ((standard___stream___OStream___is_writable_t)CALL((recv), (SFT_standard___stream[8] + 2)))
#define ID_standard___stream___BufferedIStream (SFT_standard___stream[9])
#define COLOR_standard___stream___BufferedIStream (SFT_standard___stream[10])
#define ATTR_standard___stream___BufferedIStream____buffer(recv) ATTR(recv, (SFT_standard___stream[11] + 0))
#define ATTR_standard___stream___BufferedIStream____buffer_pos(recv) ATTR(recv, (SFT_standard___stream[11] + 1))
#define INIT_TABLE_POS_standard___stream___BufferedIStream (SFT_standard___stream[12] + 0)
#define CALL_standard___stream___BufferedIStream___fill_buffer(recv) ((standard___stream___BufferedIStream___fill_buffer_t)CALL((recv), (SFT_standard___stream[12] + 1)))
#define CALL_standard___stream___BufferedIStream___end_reached(recv) ((standard___stream___BufferedIStream___end_reached_t)CALL((recv), (SFT_standard___stream[12] + 2)))
#define CALL_standard___stream___BufferedIStream___prepare_buffer(recv) ((standard___stream___BufferedIStream___prepare_buffer_t)CALL((recv), (SFT_standard___stream[12] + 3)))
#define ID_standard___stream___IOStream (SFT_standard___stream[13])
#define COLOR_standard___stream___IOStream (SFT_standard___stream[14])
#define INIT_TABLE_POS_standard___stream___IOStream (SFT_standard___stream[15] + 0)
#define ID_standard___stream___FDStream (SFT_standard___stream[16])
#define COLOR_standard___stream___FDStream (SFT_standard___stream[17])
#define ATTR_standard___stream___FDStream____fd(recv) ATTR(recv, (SFT_standard___stream[18] + 0))
#define INIT_TABLE_POS_standard___stream___FDStream (SFT_standard___stream[19] + 0)
#define CALL_standard___stream___FDStream___native_close(recv) ((standard___stream___FDStream___native_close_t)CALL((recv), (SFT_standard___stream[19] + 1)))
#define CALL_standard___stream___FDStream___native_read_char(recv) ((standard___stream___FDStream___native_read_char_t)CALL((recv), (SFT_standard___stream[19] + 2)))
#define CALL_standard___stream___FDStream___native_read(recv) ((standard___stream___FDStream___native_read_t)CALL((recv), (SFT_standard___stream[19] + 3)))
#define CALL_standard___stream___FDStream___native_write(recv) ((standard___stream___FDStream___native_write_t)CALL((recv), (SFT_standard___stream[19] + 4)))
#define CALL_standard___stream___FDStream___init(recv) ((standard___stream___FDStream___init_t)CALL((recv), (SFT_standard___stream[19] + 5)))
#define ID_standard___stream___FDIStream (SFT_standard___stream[20])
#define COLOR_standard___stream___FDIStream (SFT_standard___stream[21])
#define ATTR_standard___stream___FDIStream____eof(recv) ATTR(recv, (SFT_standard___stream[22] + 0))
#define INIT_TABLE_POS_standard___stream___FDIStream (SFT_standard___stream[23] + 0)
#define CALL_standard___stream___FDIStream___init(recv) ((standard___stream___FDIStream___init_t)CALL((recv), (SFT_standard___stream[23] + 1)))
#define ID_standard___stream___FDOStream (SFT_standard___stream[24])
#define COLOR_standard___stream___FDOStream (SFT_standard___stream[25])
#define ATTR_standard___stream___FDOStream____is_writable(recv) ATTR(recv, (SFT_standard___stream[26] + 0))
#define INIT_TABLE_POS_standard___stream___FDOStream (SFT_standard___stream[27] + 0)
#define CALL_standard___stream___FDOStream___init(recv) ((standard___stream___FDOStream___init_t)CALL((recv), (SFT_standard___stream[27] + 1)))
#define ID_standard___stream___FDIOStream (SFT_standard___stream[28])
#define COLOR_standard___stream___FDIOStream (SFT_standard___stream[29])
#define INIT_TABLE_POS_standard___stream___FDIOStream (SFT_standard___stream[30] + 0)
#define CALL_standard___stream___FDIOStream___init(recv) ((standard___stream___FDIOStream___init_t)CALL((recv), (SFT_standard___stream[30] + 1)))
static const char * const LOCATE_standard___stream___IOS___close = "stream::IOS::close";
void standard___stream___IOS___close(val_t p0);
typedef void (*standard___stream___IOS___close_t)(val_t p0);
static const char * const LOCATE_standard___stream___IOS___init = "stream::IOS::init";
void standard___stream___IOS___init(val_t p0, int* init_table);
typedef void (*standard___stream___IOS___init_t)(val_t p0, int* init_table);
val_t NEW_IOS_standard___stream___IOS___init();
static const char * const LOCATE_standard___stream___IStream___read_char = "stream::IStream::read_char";
val_t standard___stream___IStream___read_char(val_t p0);
typedef val_t (*standard___stream___IStream___read_char_t)(val_t p0);
static const char * const LOCATE_standard___stream___IStream___read = "stream::IStream::read";
val_t standard___stream___IStream___read(val_t p0, val_t p1);
typedef val_t (*standard___stream___IStream___read_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___IStream___read_line = "stream::IStream::read_line";
val_t standard___stream___IStream___read_line(val_t p0);
typedef val_t (*standard___stream___IStream___read_line_t)(val_t p0);
static const char * const LOCATE_standard___stream___IStream___read_all = "stream::IStream::read_all";
val_t standard___stream___IStream___read_all(val_t p0);
typedef val_t (*standard___stream___IStream___read_all_t)(val_t p0);
static const char * const LOCATE_standard___stream___IStream___append_line_to = "stream::IStream::append_line_to";
void standard___stream___IStream___append_line_to(val_t p0, val_t p1);
typedef void (*standard___stream___IStream___append_line_to_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___IStream___eof = "stream::IStream::eof";
val_t standard___stream___IStream___eof(val_t p0);
typedef val_t (*standard___stream___IStream___eof_t)(val_t p0);
val_t NEW_IStream_standard___stream___IOS___init();
static const char * const LOCATE_standard___stream___OStream___write = "stream::OStream::write";
void standard___stream___OStream___write(val_t p0, val_t p1);
typedef void (*standard___stream___OStream___write_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___OStream___is_writable = "stream::OStream::is_writable";
val_t standard___stream___OStream___is_writable(val_t p0);
typedef val_t (*standard___stream___OStream___is_writable_t)(val_t p0);
val_t NEW_OStream_standard___stream___IOS___init();
static const char * const LOCATE_standard___stream___BufferedIStream___read_char = "stream::BufferedIStream::(stream::IStream::read_char)";
val_t standard___stream___BufferedIStream___read_char(val_t p0);
typedef val_t (*standard___stream___BufferedIStream___read_char_t)(val_t p0);
static const char * const LOCATE_standard___stream___BufferedIStream___read = "stream::BufferedIStream::(stream::IStream::read)";
val_t standard___stream___BufferedIStream___read(val_t p0, val_t p1);
typedef val_t (*standard___stream___BufferedIStream___read_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___BufferedIStream___read_all = "stream::BufferedIStream::(stream::IStream::read_all)";
val_t standard___stream___BufferedIStream___read_all(val_t p0);
typedef val_t (*standard___stream___BufferedIStream___read_all_t)(val_t p0);
static const char * const LOCATE_standard___stream___BufferedIStream___append_line_to = "stream::BufferedIStream::(stream::IStream::append_line_to)";
void standard___stream___BufferedIStream___append_line_to(val_t p0, val_t p1);
typedef void (*standard___stream___BufferedIStream___append_line_to_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___BufferedIStream___eof = "stream::BufferedIStream::(stream::IStream::eof)";
val_t standard___stream___BufferedIStream___eof(val_t p0);
typedef val_t (*standard___stream___BufferedIStream___eof_t)(val_t p0);
static const char * const LOCATE_standard___stream___BufferedIStream___fill_buffer = "stream::BufferedIStream::fill_buffer";
void standard___stream___BufferedIStream___fill_buffer(val_t p0);
typedef void (*standard___stream___BufferedIStream___fill_buffer_t)(val_t p0);
static const char * const LOCATE_standard___stream___BufferedIStream___end_reached = "stream::BufferedIStream::end_reached";
val_t standard___stream___BufferedIStream___end_reached(val_t p0);
typedef val_t (*standard___stream___BufferedIStream___end_reached_t)(val_t p0);
static const char * const LOCATE_standard___stream___BufferedIStream___prepare_buffer = "stream::BufferedIStream::prepare_buffer";
void standard___stream___BufferedIStream___prepare_buffer(val_t p0, val_t p1);
typedef void (*standard___stream___BufferedIStream___prepare_buffer_t)(val_t p0, val_t p1);
val_t NEW_BufferedIStream_standard___stream___IOS___init();
val_t NEW_IOStream_standard___stream___IOS___init();
static const char * const LOCATE_standard___stream___FDStream___close = "stream::FDStream::(stream::IOS::close)";
void standard___stream___FDStream___close(val_t p0);
typedef void (*standard___stream___FDStream___close_t)(val_t p0);
static const char * const LOCATE_standard___stream___FDStream___native_close = "stream::FDStream::native_close";
val_t standard___stream___FDStream___native_close(val_t p0, val_t p1);
typedef val_t (*standard___stream___FDStream___native_close_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___FDStream___native_read_char = "stream::FDStream::native_read_char";
val_t standard___stream___FDStream___native_read_char(val_t p0, val_t p1);
typedef val_t (*standard___stream___FDStream___native_read_char_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___FDStream___native_read = "stream::FDStream::native_read";
val_t standard___stream___FDStream___native_read(val_t p0, val_t p1, val_t p2, val_t p3);
typedef val_t (*standard___stream___FDStream___native_read_t)(val_t p0, val_t p1, val_t p2, val_t p3);
static const char * const LOCATE_standard___stream___FDStream___native_write = "stream::FDStream::native_write";
val_t standard___stream___FDStream___native_write(val_t p0, val_t p1, val_t p2, val_t p3);
typedef val_t (*standard___stream___FDStream___native_write_t)(val_t p0, val_t p1, val_t p2, val_t p3);
static const char * const LOCATE_standard___stream___FDStream___init = "stream::FDStream::init";
void standard___stream___FDStream___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___stream___FDStream___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_FDStream_standard___stream___FDStream___init(val_t p0);
static const char * const LOCATE_standard___stream___FDIStream___eof = "stream::FDIStream::(stream::IStream::eof)";
val_t standard___stream___FDIStream___eof(val_t p0);
typedef val_t (*standard___stream___FDIStream___eof_t)(val_t p0);
static const char * const LOCATE_standard___stream___FDIStream___read_char = "stream::FDIStream::(stream::IStream::read_char)";
val_t standard___stream___FDIStream___read_char(val_t p0);
typedef val_t (*standard___stream___FDIStream___read_char_t)(val_t p0);
static const char * const LOCATE_standard___stream___FDIStream___init = "stream::FDIStream::init";
void standard___stream___FDIStream___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___stream___FDIStream___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_FDIStream_standard___stream___FDIStream___init(val_t p0);
static const char * const LOCATE_standard___stream___FDOStream___is_writable = "stream::FDOStream::(stream::OStream::is_writable)";
val_t standard___stream___FDOStream___is_writable(val_t p0);
typedef val_t (*standard___stream___FDOStream___is_writable_t)(val_t p0);
static const char * const LOCATE_standard___stream___FDOStream___write = "stream::FDOStream::(stream::OStream::write)";
void standard___stream___FDOStream___write(val_t p0, val_t p1);
typedef void (*standard___stream___FDOStream___write_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___stream___FDOStream___init = "stream::FDOStream::init";
void standard___stream___FDOStream___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___stream___FDOStream___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_FDOStream_standard___stream___FDOStream___init(val_t p0);
static const char * const LOCATE_standard___stream___FDIOStream___init = "stream::FDIOStream::init";
void standard___stream___FDIOStream___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___stream___FDIOStream___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_FDIOStream_standard___stream___FDIOStream___init(val_t p0);
#endif