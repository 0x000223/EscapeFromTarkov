/*****************************************************************//**
 * \file   offset.hpp
 * \brief  Updated for 0.12.12.15.16778
 * 
 * \author Max
 * \date   February 2022
 *********************************************************************/

#ifndef OFFSET_H
#define OFFSET_H

typedef unsigned long long offset_t;

/**
 * Global
 */
#define O_GOM 0x17F8D28

/**
 * Game Object Iteration
 */
#define O_GOM_NODE_PREVIOUS 0x0
#define O_GOM_NODE_NEXT 0x8
#define O_GOM_NODE_DATA 0x10
#define O_GOM_TAGGED_NODES 0x8
#define O_GOM_ACTIVE_NODES 0x28

/**
 * Game Object
 */
#define O_GAMEOBJECT_COMPONENT_ARRAY 0x30
#define O_GAMEOBJECT_COMPONENT_SIZE 0x40
#define O_GAMEOBJECT_COMPONENT_NEXT 0x8
#define O_GAMEOBJECT_LAYER 0x50
#define O_GAMEOBJECT_TAG 0x54
#define O_GAMEOBJECT_ISACTIVE 0x56
#define O_GAMEOBJECT_ISACTIVE_CACHED 0x57
#define O_GAMEOBJECT_NAME 0x60

/**
 * Component
 */
#define O_COMPONENT_SCRIPTING_OBJECT 0x28
#define O_COMPONENT_GAMEOBJECT 0x30

/**
 * Object
 */
#define O_OBJECT_INSTANCEID 0x8
#define O_OBJECT_SCRIPTING_HANDLE 0x18		// 'ScriptingGCHandle'
#define O_OBJECT_SCRIPTING_WEAKNESS 0x20	// 'ScriptingGCHandleWeakness'
#define O_OBJECT_SCRIPTING_OBJECT 0x28		// 'ScriptingObjectPtr'

/**
 * Mono Class
 */
#define O_MONO_CLASS_INSTANCE_SIZE 0x1C
#define O_MONO_CLASS_PARENT 0x30
#define O_MONO_CLASS_NAME 0x48
#define O_MONO_CLASS_NAMESPACE 0x50

/**
 * System.String
 */
#define O_STRING_LENGTH 0x10
#define O_STRING_FIRSTCHAR 0x14

/**
 * System.Collections.ArrayList
 */
#define O_ARRAY_ITEMS 0x10
#define O_ARRAY_SIZE 0x20

/**
 * System.Collections.Generic.List
 */
#define O_LIST_ITEMS 0x10
#define O_LIST_SIZE 0x18

/**
 * EFT.Player
 */
#define O_PLAYER_PLAYERBODY 0xA8
#define O_PLAYER_PROFILE 0x4b8

/**
 * EFT.Profile
 */
#define O_PROFILE_ID 0x10
#define O_PROFILE_ACCOUNTID 0x18
#define O_PROFILE_INFO 0x28
#define O_PROFILE_INFO_NICKNAME 0x10
#define O_PROFILE_INFO_GROUPID 0x18
#define O_PROFILE_INFO_SIDE 0x58
#define O_PROFILE_INFO_REGISTRATION_DATE 0x5C
#define O_PROFILE_INFO_SAVAGE_LOCKTIME 0x60
#define O_PROFILE_INFO_MEMBER_CATEGORY 0x70
#define O_PROFILE_INVENTORY 0x48
#define O_PROFILE_SKILLS 0x60
#define O_PROFILE_STATS 0xE8

#endif
