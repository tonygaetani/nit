/* This C header file is generated by NIT to compile modules and programs that requires control_flow. */
#ifndef control_flow_sep
#define control_flow_sep
#include "syntax_base._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_ControlFlowVisitor[];

extern const classtable_elt_t VFT_ControlFlowContext[];

extern const classtable_elt_t VFT_ABlockControler[];

extern const classtable_elt_t VFT_AControlableBlock[];
extern const char *LOCATE_control_flow;
extern const int SFT_control_flow[];
#define COLOR_control_flow___MMSrcModule___do_control_flow SFT_control_flow[0]
#define COLOR_control_flow___Variable___must_be_set SFT_control_flow[1]
#define ID_ControlFlowVisitor SFT_control_flow[2]
#define COLOR_ControlFlowVisitor SFT_control_flow[3]
#define COLOR_control_flow___ControlFlowVisitor____once_count SFT_control_flow[4]
#define COLOR_control_flow___ControlFlowVisitor____control_flow_ctx SFT_control_flow[5]
#define INIT_TABLE_POS_ControlFlowVisitor SFT_control_flow[6]
#define COLOR_control_flow___ControlFlowVisitor___once_count SFT_control_flow[7]
#define COLOR_control_flow___ControlFlowVisitor___once_count__eq SFT_control_flow[8]
#define COLOR_control_flow___ControlFlowVisitor___control_flow_ctx SFT_control_flow[9]
#define COLOR_control_flow___ControlFlowVisitor___control_flow_ctx__eq SFT_control_flow[10]
#define COLOR_control_flow___ControlFlowVisitor___check_is_set SFT_control_flow[11]
#define COLOR_control_flow___ControlFlowVisitor___mark_is_set SFT_control_flow[12]
#define COLOR_control_flow___ControlFlowVisitor___init SFT_control_flow[13]
#define ID_ControlFlowContext SFT_control_flow[14]
#define COLOR_ControlFlowContext SFT_control_flow[15]
#define COLOR_control_flow___ControlFlowContext____prev SFT_control_flow[16]
#define COLOR_control_flow___ControlFlowContext____unreash SFT_control_flow[17]
#define COLOR_control_flow___ControlFlowContext____already_unreash SFT_control_flow[18]
#define COLOR_control_flow___ControlFlowContext____base_block SFT_control_flow[19]
#define COLOR_control_flow___ControlFlowContext____set_variables SFT_control_flow[20]
#define INIT_TABLE_POS_ControlFlowContext SFT_control_flow[21]
#define COLOR_control_flow___ControlFlowContext___prev SFT_control_flow[22]
#define COLOR_control_flow___ControlFlowContext___unreash SFT_control_flow[23]
#define COLOR_control_flow___ControlFlowContext___unreash__eq SFT_control_flow[24]
#define COLOR_control_flow___ControlFlowContext___already_unreash SFT_control_flow[25]
#define COLOR_control_flow___ControlFlowContext___already_unreash__eq SFT_control_flow[26]
#define COLOR_control_flow___ControlFlowContext___base_block SFT_control_flow[27]
#define COLOR_control_flow___ControlFlowContext___base_block__eq SFT_control_flow[28]
#define COLOR_control_flow___ControlFlowContext___set_variables SFT_control_flow[29]
#define COLOR_control_flow___ControlFlowContext___is_set SFT_control_flow[30]
#define COLOR_control_flow___ControlFlowContext___sub SFT_control_flow[31]
#define COLOR_control_flow___ControlFlowContext___init SFT_control_flow[32]
#define COLOR_control_flow___ControlFlowContext___with_prev SFT_control_flow[33]
#define COLOR_control_flow___PNode___accept_control_flow SFT_control_flow[34]
#define COLOR_SUPER_control_flow___AMethPropdef___accept_control_flow SFT_control_flow[35]
#define COLOR_SUPER_control_flow___AConcreteMethPropdef___accept_control_flow SFT_control_flow[36]
#define COLOR_SUPER_control_flow___AVardeclExpr___accept_control_flow SFT_control_flow[37]
#define COLOR_SUPER_control_flow___AReturnExpr___accept_control_flow SFT_control_flow[38]
#define ID_ABlockControler SFT_control_flow[39]
#define COLOR_ABlockControler SFT_control_flow[40]
#define COLOR_control_flow___ABlockControler____block SFT_control_flow[41]
#define INIT_TABLE_POS_ABlockControler SFT_control_flow[42]
#define COLOR_control_flow___ABlockControler___block SFT_control_flow[43]
#define COLOR_SUPER_control_flow___ABreakExpr___accept_control_flow SFT_control_flow[44]
#define COLOR_SUPER_control_flow___AContinueExpr___accept_control_flow SFT_control_flow[45]
#define COLOR_SUPER_control_flow___AAbortExpr___accept_control_flow SFT_control_flow[46]
#define COLOR_SUPER_control_flow___AClosureCallExpr___accept_control_flow SFT_control_flow[47]
#define ID_AControlableBlock SFT_control_flow[48]
#define COLOR_AControlableBlock SFT_control_flow[49]
#define INIT_TABLE_POS_AControlableBlock SFT_control_flow[50]
#define COLOR_SUPER_control_flow___AControlableBlock___accept_control_flow SFT_control_flow[51]
#define COLOR_control_flow___AControlableBlock___check_control_flow SFT_control_flow[52]
#define COLOR_SUPER_control_flow___AVarExpr___accept_control_flow SFT_control_flow[53]
#define COLOR_SUPER_control_flow___AVarAssignExpr___accept_control_flow SFT_control_flow[54]
#define COLOR_SUPER_control_flow___AVarReassignExpr___accept_control_flow SFT_control_flow[55]
#define COLOR_SUPER_control_flow___AClosureDef___accept_control_flow SFT_control_flow[56]
#define COLOR_SUPER_control_flow___AOnceExpr___accept_control_flow SFT_control_flow[57]
val_t NEW_MMSrcModule_syntax_base___MMSrcModule___init(val_t p0, val_t p1, val_t p2, val_t p3);
typedef void (* control_flow___MMSrcModule___do_control_flow_t)(val_t  self, val_t  param0);
void control_flow___MMSrcModule___do_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___MMSrcModule___do_control_flow "control_flow::MMSrcModule::do_control_flow"
val_t NEW_Variable_syntax_base___Variable___init(val_t p0, val_t p1);
typedef val_t (* control_flow___Variable___must_be_set_t)(val_t  self);
val_t control_flow___Variable___must_be_set(val_t  self);
#define LOCATE_control_flow___Variable___must_be_set "control_flow::Variable::must_be_set"
val_t NEW_VarVariable_syntax_base___VarVariable___init(val_t p0, val_t p1);
typedef val_t (* control_flow___VarVariable___must_be_set_t)(val_t  self);
val_t control_flow___VarVariable___must_be_set(val_t  self);
#define LOCATE_control_flow___VarVariable___must_be_set "control_flow::VarVariable::(control_flow::Variable::must_be_set)"
typedef void (* control_flow___ControlFlowVisitor___visit_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowVisitor___visit(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowVisitor___visit "control_flow::ControlFlowVisitor::(parser_prod::Visitor::visit)"
#define ATTR_control_flow___ControlFlowVisitor____once_count(recv) ATTR(recv, COLOR_control_flow___ControlFlowVisitor____once_count)
typedef val_t (* control_flow___ControlFlowVisitor___once_count_t)(val_t  self);
val_t control_flow___ControlFlowVisitor___once_count(val_t  self);
#define LOCATE_control_flow___ControlFlowVisitor___once_count "control_flow::ControlFlowVisitor::once_count"
typedef void (* control_flow___ControlFlowVisitor___once_count__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowVisitor___once_count__eq(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowVisitor___once_count__eq "control_flow::ControlFlowVisitor::once_count="
#define ATTR_control_flow___ControlFlowVisitor____control_flow_ctx(recv) ATTR(recv, COLOR_control_flow___ControlFlowVisitor____control_flow_ctx)
typedef val_t (* control_flow___ControlFlowVisitor___control_flow_ctx_t)(val_t  self);
val_t control_flow___ControlFlowVisitor___control_flow_ctx(val_t  self);
#define LOCATE_control_flow___ControlFlowVisitor___control_flow_ctx "control_flow::ControlFlowVisitor::control_flow_ctx"
typedef void (* control_flow___ControlFlowVisitor___control_flow_ctx__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowVisitor___control_flow_ctx__eq(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowVisitor___control_flow_ctx__eq "control_flow::ControlFlowVisitor::control_flow_ctx="
typedef void (* control_flow___ControlFlowVisitor___check_is_set_t)(val_t  self, val_t  param0, val_t  param1);
void control_flow___ControlFlowVisitor___check_is_set(val_t  self, val_t  param0, val_t  param1);
#define LOCATE_control_flow___ControlFlowVisitor___check_is_set "control_flow::ControlFlowVisitor::check_is_set"
typedef void (* control_flow___ControlFlowVisitor___mark_is_set_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowVisitor___mark_is_set(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowVisitor___mark_is_set "control_flow::ControlFlowVisitor::mark_is_set"
typedef void (* control_flow___ControlFlowVisitor___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void control_flow___ControlFlowVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
#define LOCATE_control_flow___ControlFlowVisitor___init "control_flow::ControlFlowVisitor::init"
val_t NEW_ControlFlowVisitor_control_flow___ControlFlowVisitor___init(val_t p0, val_t p1);
#define ATTR_control_flow___ControlFlowContext____prev(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____prev)
typedef val_t (* control_flow___ControlFlowContext___prev_t)(val_t  self);
val_t control_flow___ControlFlowContext___prev(val_t  self);
#define LOCATE_control_flow___ControlFlowContext___prev "control_flow::ControlFlowContext::prev"
#define ATTR_control_flow___ControlFlowContext____unreash(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____unreash)
typedef val_t (* control_flow___ControlFlowContext___unreash_t)(val_t  self);
val_t control_flow___ControlFlowContext___unreash(val_t  self);
#define LOCATE_control_flow___ControlFlowContext___unreash "control_flow::ControlFlowContext::unreash"
typedef void (* control_flow___ControlFlowContext___unreash__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowContext___unreash__eq(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowContext___unreash__eq "control_flow::ControlFlowContext::unreash="
#define ATTR_control_flow___ControlFlowContext____already_unreash(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____already_unreash)
typedef val_t (* control_flow___ControlFlowContext___already_unreash_t)(val_t  self);
val_t control_flow___ControlFlowContext___already_unreash(val_t  self);
#define LOCATE_control_flow___ControlFlowContext___already_unreash "control_flow::ControlFlowContext::already_unreash"
typedef void (* control_flow___ControlFlowContext___already_unreash__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowContext___already_unreash__eq(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowContext___already_unreash__eq "control_flow::ControlFlowContext::already_unreash="
#define ATTR_control_flow___ControlFlowContext____base_block(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____base_block)
typedef val_t (* control_flow___ControlFlowContext___base_block_t)(val_t  self);
val_t control_flow___ControlFlowContext___base_block(val_t  self);
#define LOCATE_control_flow___ControlFlowContext___base_block "control_flow::ControlFlowContext::base_block"
typedef void (* control_flow___ControlFlowContext___base_block__eq_t)(val_t  self, val_t  param0);
void control_flow___ControlFlowContext___base_block__eq(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowContext___base_block__eq "control_flow::ControlFlowContext::base_block="
#define ATTR_control_flow___ControlFlowContext____set_variables(recv) ATTR(recv, COLOR_control_flow___ControlFlowContext____set_variables)
typedef val_t (* control_flow___ControlFlowContext___set_variables_t)(val_t  self);
val_t control_flow___ControlFlowContext___set_variables(val_t  self);
#define LOCATE_control_flow___ControlFlowContext___set_variables "control_flow::ControlFlowContext::set_variables"
typedef val_t (* control_flow___ControlFlowContext___is_set_t)(val_t  self, val_t  param0);
val_t control_flow___ControlFlowContext___is_set(val_t  self, val_t  param0);
#define LOCATE_control_flow___ControlFlowContext___is_set "control_flow::ControlFlowContext::is_set"
typedef val_t (* control_flow___ControlFlowContext___sub_t)(val_t  self);
val_t control_flow___ControlFlowContext___sub(val_t  self);
#define LOCATE_control_flow___ControlFlowContext___sub "control_flow::ControlFlowContext::sub"
typedef void (* control_flow___ControlFlowContext___init_t)(val_t  self, int* init_table);
void control_flow___ControlFlowContext___init(val_t  self, int* init_table);
#define LOCATE_control_flow___ControlFlowContext___init "control_flow::ControlFlowContext::init"
val_t NEW_ControlFlowContext_control_flow___ControlFlowContext___init();
typedef void (* control_flow___ControlFlowContext___with_prev_t)(val_t  self, val_t  param0, int* init_table);
void control_flow___ControlFlowContext___with_prev(val_t  self, val_t  param0, int* init_table);
#define LOCATE_control_flow___ControlFlowContext___with_prev "control_flow::ControlFlowContext::with_prev"
val_t NEW_ControlFlowContext_control_flow___ControlFlowContext___with_prev(val_t p0);
val_t NEW_PNode_parser_nodes___PNode___init();
typedef void (* control_flow___PNode___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___PNode___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___PNode___accept_control_flow "control_flow::PNode::accept_control_flow"
val_t NEW_AMethPropdef_parser_nodes___PNode___init();
val_t NEW_AMethPropdef_parser_prod___AMethPropdef___empty_init();
val_t NEW_AMethPropdef_parser_prod___AMethPropdef___init_amethpropdef(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
typedef void (* control_flow___AMethPropdef___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AMethPropdef___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AMethPropdef___accept_control_flow "control_flow::AMethPropdef::(control_flow::PNode::accept_control_flow)"
val_t NEW_AConcreteMethPropdef_parser_nodes___PNode___init();
val_t NEW_AConcreteMethPropdef_parser_prod___AMethPropdef___empty_init();
val_t NEW_AConcreteMethPropdef_parser_prod___AMethPropdef___init_amethpropdef(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
val_t NEW_AConcreteMethPropdef_parser_prod___AConcreteMethPropdef___empty_init();
val_t NEW_AConcreteMethPropdef_parser_prod___AConcreteMethPropdef___init_aconcretemethpropdef(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4, val_t p5, val_t p6);
typedef void (* control_flow___AConcreteMethPropdef___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AConcreteMethPropdef___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AConcreteMethPropdef___accept_control_flow "control_flow::AConcreteMethPropdef::(control_flow::PNode::accept_control_flow)"
val_t NEW_AVardeclExpr_parser_nodes___PNode___init();
val_t NEW_AVardeclExpr_parser_prod___AVardeclExpr___empty_init();
val_t NEW_AVardeclExpr_parser_prod___AVardeclExpr___init_avardeclexpr(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
typedef void (* control_flow___AVardeclExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AVardeclExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AVardeclExpr___accept_control_flow "control_flow::AVardeclExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_ABlockExpr_parser_nodes___PNode___init();
val_t NEW_ABlockExpr_parser_prod___ABlockExpr___empty_init();
val_t NEW_ABlockExpr_parser_prod___ABlockExpr___init_ablockexpr(val_t p0);
typedef void (* control_flow___ABlockExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___ABlockExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___ABlockExpr___accept_control_flow "control_flow::ABlockExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AReturnExpr_parser_nodes___PNode___init();
val_t NEW_AReturnExpr_parser_prod___AReturnExpr___empty_init();
val_t NEW_AReturnExpr_parser_prod___AReturnExpr___init_areturnexpr(val_t p0, val_t p1);
typedef void (* control_flow___AReturnExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AReturnExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AReturnExpr___accept_control_flow "control_flow::AReturnExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_ABlockControler_parser_nodes___PNode___init();
#define ATTR_control_flow___ABlockControler____block(recv) ATTR(recv, COLOR_control_flow___ABlockControler____block)
typedef val_t (* control_flow___ABlockControler___block_t)(val_t  self);
val_t control_flow___ABlockControler___block(val_t  self);
#define LOCATE_control_flow___ABlockControler___block "control_flow::ABlockControler::block"
val_t NEW_ABreakExpr_parser_nodes___PNode___init();
val_t NEW_ABreakExpr_parser_prod___ABreakExpr___empty_init();
val_t NEW_ABreakExpr_parser_prod___ABreakExpr___init_abreakexpr(val_t p0, val_t p1);
typedef void (* control_flow___ABreakExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___ABreakExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___ABreakExpr___accept_control_flow "control_flow::ABreakExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AContinueExpr_parser_nodes___PNode___init();
val_t NEW_AContinueExpr_parser_prod___AContinueExpr___empty_init();
val_t NEW_AContinueExpr_parser_prod___AContinueExpr___init_acontinueexpr(val_t p0, val_t p1);
typedef void (* control_flow___AContinueExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AContinueExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AContinueExpr___accept_control_flow "control_flow::AContinueExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AAbortExpr_parser_nodes___PNode___init();
val_t NEW_AAbortExpr_parser_prod___AAbortExpr___empty_init();
val_t NEW_AAbortExpr_parser_prod___AAbortExpr___init_aabortexpr(val_t p0);
typedef void (* control_flow___AAbortExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AAbortExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AAbortExpr___accept_control_flow "control_flow::AAbortExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AClosureCallExpr_parser_nodes___AClosureCallExpr___init(val_t p0, val_t p1, val_t p2);
typedef void (* control_flow___AClosureCallExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AClosureCallExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AClosureCallExpr___accept_control_flow "control_flow::AClosureCallExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AIfExpr_parser_nodes___PNode___init();
val_t NEW_AIfExpr_parser_prod___AIfExpr___empty_init();
val_t NEW_AIfExpr_parser_prod___AIfExpr___init_aifexpr(val_t p0, val_t p1, val_t p2, val_t p3);
typedef void (* control_flow___AIfExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AIfExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AIfExpr___accept_control_flow "control_flow::AIfExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AControlableBlock_parser_nodes___PNode___init();
typedef void (* control_flow___AControlableBlock___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AControlableBlock___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AControlableBlock___accept_control_flow "control_flow::AControlableBlock::(control_flow::PNode::accept_control_flow)"
typedef void (* control_flow___AControlableBlock___check_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AControlableBlock___check_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AControlableBlock___check_control_flow "control_flow::AControlableBlock::check_control_flow"
val_t NEW_AWhileExpr_parser_nodes___PNode___init();
val_t NEW_AWhileExpr_parser_prod___AWhileExpr___empty_init();
val_t NEW_AWhileExpr_parser_prod___AWhileExpr___init_awhileexpr(val_t p0, val_t p1, val_t p2, val_t p3);
val_t NEW_AForExpr_parser_nodes___PNode___init();
val_t NEW_AForExpr_parser_prod___AForExpr___empty_init();
val_t NEW_AForExpr_parser_prod___AForExpr___init_aforexpr(val_t p0, val_t p1, val_t p2);
val_t NEW_AVarExpr_parser_nodes___PNode___init();
val_t NEW_AVarExpr_parser_prod___AVarExpr___empty_init();
val_t NEW_AVarExpr_parser_prod___AVarExpr___init_avarexpr(val_t p0);
typedef void (* control_flow___AVarExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AVarExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AVarExpr___accept_control_flow "control_flow::AVarExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AVarAssignExpr_parser_nodes___PNode___init();
val_t NEW_AVarAssignExpr_parser_prod___AVarAssignExpr___empty_init();
val_t NEW_AVarAssignExpr_parser_prod___AVarAssignExpr___init_avarassignexpr(val_t p0, val_t p1, val_t p2);
typedef void (* control_flow___AVarAssignExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AVarAssignExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AVarAssignExpr___accept_control_flow "control_flow::AVarAssignExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AVarReassignExpr_parser_nodes___PNode___init();
val_t NEW_AVarReassignExpr_parser_prod___AVarReassignExpr___empty_init();
val_t NEW_AVarReassignExpr_parser_prod___AVarReassignExpr___init_avarreassignexpr(val_t p0, val_t p1, val_t p2);
typedef void (* control_flow___AVarReassignExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AVarReassignExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AVarReassignExpr___accept_control_flow "control_flow::AVarReassignExpr::(control_flow::PNode::accept_control_flow)"
val_t NEW_AClosureDef_parser_nodes___PNode___init();
val_t NEW_AClosureDef_parser_prod___AClosureDef___empty_init();
val_t NEW_AClosureDef_parser_prod___AClosureDef___init_aclosuredef(val_t p0, val_t p1, val_t p2, val_t p3);
typedef void (* control_flow___AClosureDef___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AClosureDef___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AClosureDef___accept_control_flow "control_flow::AClosureDef::(control_flow::PNode::accept_control_flow)"
typedef void (* control_flow___AClosureDef___check_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AClosureDef___check_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AClosureDef___check_control_flow "control_flow::AClosureDef::(control_flow::AControlableBlock::check_control_flow)"
val_t NEW_AOnceExpr_parser_nodes___PNode___init();
val_t NEW_AOnceExpr_parser_prod___AOnceExpr___empty_init();
val_t NEW_AOnceExpr_parser_prod___AOnceExpr___init_aonceexpr(val_t p0, val_t p1);
typedef void (* control_flow___AOnceExpr___accept_control_flow_t)(val_t  self, val_t  param0);
void control_flow___AOnceExpr___accept_control_flow(val_t  self, val_t  param0);
#define LOCATE_control_flow___AOnceExpr___accept_control_flow "control_flow::AOnceExpr::(control_flow::PNode::accept_control_flow)"
#endif
