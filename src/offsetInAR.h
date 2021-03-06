#ifndef __OFFSET_IN_AR_H___
#define __OFFSET_IN_AR_H___

#include "symbolTable.h"

extern int g_offserForPara;
extern int g_offsetInARAux;
extern int g_deepestBlockVariableOffset;

void resetOffsetCalculation();
void setOffsetAndUpdateGlobalOffset(SymbolAttribute* attribute);
void setOffsetAndUpdateGlobalOffset_para(SymbolAttribute * attribute);
#endif
