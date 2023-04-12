/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once

#include "../../stringid/stringid.h"

struct RenderSettingsMap //0x18
{
	int64_t m_count;												///< <c>0x00</c>: count of elements in both arrays
	StringId64* m_arrayStringIds;									///< <c>0x00</c>: contiguos array of StringIds
	RenderSettingsSubsetEntry* m_arrayRenderSettingsSubsetEntry;	///< <c>0x00</c>: contiguos array of RenderSettingsSubsetEntry
};

struct RenderSettingsSubsetEntry //0x18 ?
{
	StringId64	m_nameId;///< <c>0x00</c>: 
	float		m_value;///< <c>0x08</c>: 
	uint32_t	m_unkVal;///< <c>0x0C</c>: always -1 ?
	StringId64  m_unkSid;///< <c>0x10</c>: SID("none")
};

struct RenderSettingsMenuEntries //0x98
{

};

struct RenderSettings
{
	uint64_t m_unk;///< <c>0x00</c>:
	void* m_pData;///< <c>0x08</c>:
};