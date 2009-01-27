/* This C header file is generated by NIT to compile modules and programs that requires syntax. */
#ifndef syntax_sep
#define syntax_sep
#include "mmbuilder._sep.h"
#include "control_flow._sep.h"
#include "typing._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_SrcModuleLoader[];
extern const char *LOCATE_syntax;
extern const int SFT_syntax[];
#define ID_SrcModuleLoader SFT_syntax[0]
#define COLOR_SrcModuleLoader SFT_syntax[1]
#define INIT_TABLE_POS_SrcModuleLoader SFT_syntax[2]
#define COLOR_syntax___SrcModuleLoader___init SFT_syntax[3]
#define COLOR_syntax___MMSrcModule___process_supermodules SFT_syntax[4]
#define COLOR_syntax___MMSrcModule___process_syntax SFT_syntax[5]
typedef val_t (* syntax___SrcModuleLoader___file_type_t)(val_t  self);
val_t syntax___SrcModuleLoader___file_type(val_t  self);
#define LOCATE_syntax___SrcModuleLoader___file_type "syntax::SrcModuleLoader::(mmloader::ModuleLoader::file_type)"
typedef val_t (* syntax___SrcModuleLoader___parse_file_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
val_t syntax___SrcModuleLoader___parse_file(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
#define LOCATE_syntax___SrcModuleLoader___parse_file "syntax::SrcModuleLoader::(mmloader::ModuleLoader::parse_file)"
typedef void (* syntax___SrcModuleLoader___process_metamodel_t)(val_t  self, val_t  param0, val_t  param1);
void syntax___SrcModuleLoader___process_metamodel(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_syntax___SrcModuleLoader___process_metamodel "syntax::SrcModuleLoader::(mmloader::ModuleLoader::process_metamodel)"
typedef void (* syntax___SrcModuleLoader___init_t)(val_t  self, int* init_table);
void syntax___SrcModuleLoader___init(val_t  self, int* init_table);
#define LOCATE_syntax___SrcModuleLoader___init "syntax::SrcModuleLoader::init"
val_t NEW_SrcModuleLoader_syntax___SrcModuleLoader___init();
val_t NEW_MMSrcModule_syntax_base___MMSrcModule___init(val_t p0, val_t p1, val_t p2, val_t p3);
typedef void (* syntax___MMSrcModule___process_supermodules_t)(val_t  self, val_t  param0);
void syntax___MMSrcModule___process_supermodules(val_t  self, val_t  param0);
#define LOCATE_syntax___MMSrcModule___process_supermodules "syntax::MMSrcModule::process_supermodules"
typedef void (* syntax___MMSrcModule___process_syntax_t)(val_t  self, val_t  param0);
void syntax___MMSrcModule___process_syntax(val_t  self, val_t  param0);
#define LOCATE_syntax___MMSrcModule___process_syntax "syntax::MMSrcModule::process_syntax"
#endif
