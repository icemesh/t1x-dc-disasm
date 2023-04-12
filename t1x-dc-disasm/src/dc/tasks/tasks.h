/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once

#include <cinttypes>

struct GameTaskGraph
{

};

struct Map //0x18
{
	int64_t			m_count;			///< <c>0x00</c>: number of elements in the map
	uint64_t*		m_stringIdArray;	///< <c>0x08</c>: contiguos array of StringId64
	GameTaskNode**	m_apGameTaskNodes;	///< <c>0x08</c>: array of pointer to GameTaskNode
};

struct GameTaskNode
{
	const char* m_nodeName;		///< <c>0x00</c>: ptr to the node name. eg: lab
	uint64_t	m_nodeId;		///< <c>0x08</c>: StringId64 of the node name
	const char* m_worldName;	///< <c>0x10</c>: ptr to the world name. eg: world-lab
	uint64_t	m_worldId;		///< <c>0x18</c>: StringId64 of the world name
};

struct LockedActors //0x10
{
	int64_t			m_lockedActorsArrayCount;	///< <c>0x00</c>: number of elements in the array
	LockedActor*	m_lockedActorArray;			///< <c>0x08</c>: contiguos array of LockedActor
};

struct LockedActor
{
	const char* m_name;		///< <c>0x00</c>: actor name
	uint64_t	m_nameId;	///< <c>0x00</c>: StringId64 of the actor name
};