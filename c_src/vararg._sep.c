/* This C file is generated by NIT to compile module vararg. */
#include "vararg._sep.h"
val_t vararg___MMSignature___adaptation_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, NULL, 33, LOCATE_vararg___MMSignature___adaptation_to};
  val_t variable[5];
  void **closurevariable = NULL;
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_vararg;
  variable[0] =  self;
  variable[1] =  param0;
  variable[4] = ((vararg___MMSignature___adaptation_to_t)CALL(variable[0],COLOR_SUPER_vararg___MMSignature___adaptation_to))(variable[0],  variable[1] /*r*/) /*super MMSignature::adaptation_to*/;
  variable[3] = variable[4];
  variable[4] = variable[0];
  variable[4] = ATTR_vararg___MMSignature____vararg_rank(variable[4]) /*MMSignature::_vararg_rank*/;
  ((vararg___MMSignature___vararg_rank__eq_t)CALL( variable[3] /*s*/,COLOR_vararg___MMSignature___vararg_rank__eq))( variable[3] /*s*/, variable[4]) /*MMSignature::vararg_rank=*/;
  variable[2] =  variable[3] /*s*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable[2];
}
val_t vararg___MMSignature___not_for_self(val_t  self) {
  struct trace_t trace = {NULL, NULL, 40, LOCATE_vararg___MMSignature___not_for_self};
  val_t variable[4];
  void **closurevariable = NULL;
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_vararg;
  variable[0] =  self;
  variable[3] = ((vararg___MMSignature___not_for_self_t)CALL(variable[0],COLOR_SUPER_vararg___MMSignature___not_for_self))(variable[0]) /*super MMSignature::not_for_self*/;
  variable[2] = variable[3];
  variable[3] = variable[0];
  variable[3] = ATTR_vararg___MMSignature____vararg_rank(variable[3]) /*MMSignature::_vararg_rank*/;
  ((vararg___MMSignature___vararg_rank__eq_t)CALL( variable[2] /*s*/,COLOR_vararg___MMSignature___vararg_rank__eq))( variable[2] /*s*/, variable[3]) /*MMSignature::vararg_rank=*/;
  variable[1] =  variable[2] /*s*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable[1];
}
void vararg___MMSignature___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, NULL, 47, LOCATE_vararg___MMSignature___init};
  val_t variable[7];
  void **closurevariable = NULL;
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_vararg;
  variable[0] =  self;
  variable[1] =  param0;
  variable[2] =  param1;
  variable[3] =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSignature].i]) return;
  ((vararg___MMSignature___init_t)CALL(variable[0],COLOR_SUPER_vararg___MMSignature___init))(variable[0], variable[1], variable[2], variable[3], init_table) /*super MMSignature::init*/;
  variable[5] = variable[0];
  variable[6] = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  ATTR_vararg___MMSignature____vararg_rank(variable[5]) /*MMSignature::_vararg_rank*/ = variable[6];
  return_label2: while(false);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSignature].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t vararg___MMSignature___vararg_rank(val_t  self) {
  struct trace_t trace = {NULL, NULL, 24, LOCATE_vararg___MMSignature___vararg_rank};
  val_t *variable = NULL;
  void **closurevariable = NULL;
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_vararg;
  tracehead = trace.prev;
  return ATTR_vararg___MMSignature____vararg_rank( self) /*MMSignature::_vararg_rank*/;
}
void vararg___MMSignature___vararg_rank__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, NULL, 24, LOCATE_vararg___MMSignature___vararg_rank__eq};
  val_t *variable = NULL;
  void **closurevariable = NULL;
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_vararg;
  ATTR_vararg___MMSignature____vararg_rank( self) /*MMSignature::_vararg_rank*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t vararg___MMSignature___has_vararg(val_t  self) {
  struct trace_t trace = {NULL, NULL, 27, LOCATE_vararg___MMSignature___has_vararg};
  val_t variable[3];
  void **closurevariable = NULL;
  trace.prev = tracehead; tracehead = &trace;
  trace.file = LOCATE_vararg;
  variable[0] =  self;
  variable[2] = variable[0];
  variable[2] = ATTR_vararg___MMSignature____vararg_rank(variable[2]) /*MMSignature::_vararg_rank*/;
  variable[2] = TAG_Bool(UNTAG_Int(variable[2])>=UNTAG_Int( TAG_Int(0)));
  variable[1] = variable[2];
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable[1];
}
