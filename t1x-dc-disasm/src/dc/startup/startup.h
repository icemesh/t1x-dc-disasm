/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once

#include "../../stringid/stringid.h"

struct ModuleEntry;

struct ArrayPtr //0x18
{
	uint64_t m_unk;					///< <c>0x00</c>: 
	uint32_t m_numElements;			///< <c>0x08</c>: num element ?
	uint32_t m_unused;				///< <c>0x0C</c>: always -1 ?
	ModuleEntry* m_pModuleEntry;	///< <c>0x10</c>: 
};

struct ModuleEntry //0x20
{
	StringId64 m_moduleId;	///< <c>0x00</c>: StringId64 of the module name
};

struct ModuleInfoArray
{

};