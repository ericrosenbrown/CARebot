﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t1867984025;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_t2890249332;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t593865784;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.String
struct String_t;
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose[]
struct TrackedPoseU5BU5D_t791479415;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData[]
struct PoseDataU5BU5D_t2795636683;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;

extern const RuntimeMethod* TrackedPoseDriver__ctor_m3153467908_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver__ctor_m3153467908_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_get_deviceType_m2282512132_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_get_deviceType_m2282512132_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_set_deviceType_m1064060695_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_set_deviceType_m1064060695_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_get_poseSource_m3651530029_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_get_poseSource_m3651530029_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_set_poseSource_m4134942016_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_set_poseSource_m4134942016_MetadataUsageId;
extern RuntimeClass* TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TrackedPoseDriver_SetPoseSource_m2091764154_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3628814819_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m640079513_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1636217762_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3341200234_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_SetPoseSource_m2091764154_MetadataUsageId;
extern RuntimeClass* TangoDevice_t2970124841_il2cpp_TypeInfo_var;
extern RuntimeClass* TangoInputTracking_t4005594645_il2cpp_TypeInfo_var;
extern RuntimeClass* Pose_t545244865_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TrackedPoseDriver_TryGetTangoPose_m4021233158_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_TryGetTangoPose_m4021233158_MetadataUsageId;
extern RuntimeClass* InputTracking_t2240286067_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TrackedPoseDriver_GetDataFromSource_m2850879331_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_GetDataFromSource_m2850879331_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_get_trackingType_m4217524394_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_get_trackingType_m4217524394_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_set_trackingType_m4066447935_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_set_trackingType_m4066447935_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_get_updateType_m1411580539_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_get_updateType_m1411580539_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_set_updateType_m3648888555_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_set_updateType_m3648888555_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_get_UseRelativeTransform_m1398869064_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_get_UseRelativeTransform_m1398869064_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_set_UseRelativeTransform_m2128961640_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_set_UseRelativeTransform_m2128961640_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_get_originPose_m118568312_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_get_originPose_m118568312_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_set_originPose_m2024032077_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_set_originPose_m2024032077_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_CacheLocalPosition_m3774969807_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_CacheLocalPosition_m3774969807_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_Awake_m357232108_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_Awake_m357232108_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_OnDestroy_m1833559287_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_OnDestroy_m1833559287_MetadataUsageId;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TrackedPoseDriver_OnEnable_m564992003_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_OnEnable_m564992003_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_OnDisable_m3908821101_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_OnDisable_m3908821101_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_FixedUpdate_m4196881516_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_FixedUpdate_m4196881516_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_Update_m3186735601_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_Update_m3186735601_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_OnBeforeRender_m2516930955_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_OnBeforeRender_m2516930955_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_SetLocalTransform_m3593367804_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_SetLocalTransform_m3593367804_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TrackedPoseDriver_HasStereoCamera_m3266718412_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_HasStereoCamera_m3266718412_MetadataUsageId;
extern const RuntimeMethod* TrackedPoseDriver_PerformUpdate_m349344482_RuntimeMethod_var;
extern const uint32_t TrackedPoseDriver_PerformUpdate_m349344482_MetadataUsageId;
extern RuntimeClass* List_1_t2890249332_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t593865784_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TrackedPoseDriverDataDescription__cctor_m2513534467_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m871525267_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2662576365_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1332165401_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2861735381_RuntimeMethod_var;
extern String_t* _stringLiteral1534079751;
extern String_t* _stringLiteral3242476622;
extern String_t* _stringLiteral2646604272;
extern String_t* _stringLiteral431746829;
extern String_t* _stringLiteral134673545;
extern String_t* _stringLiteral571192390;
extern String_t* _stringLiteral3476230729;
extern String_t* _stringLiteral2478019389;
extern const uint32_t TrackedPoseDriverDataDescription__cctor_m2513534467_MetadataUsageId;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745559_H
#define U3CMODULEU3E_T692745559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745559 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745559_H
#ifndef LIST_1_T593865784_H
#define LIST_1_T593865784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct  List_1_t593865784  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackedPoseU5BU5D_t791479415* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t593865784, ____items_1)); }
	inline TrackedPoseU5BU5D_t791479415* get__items_1() const { return ____items_1; }
	inline TrackedPoseU5BU5D_t791479415** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackedPoseU5BU5D_t791479415* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t593865784, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t593865784, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t593865784, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t593865784_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TrackedPoseU5BU5D_t791479415* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t593865784_StaticFields, ____emptyArray_5)); }
	inline TrackedPoseU5BU5D_t791479415* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TrackedPoseU5BU5D_t791479415** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TrackedPoseU5BU5D_t791479415* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T593865784_H
#ifndef LIST_1_T2890249332_H
#define LIST_1_T2890249332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct  List_1_t2890249332  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoseDataU5BU5D_t2795636683* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2890249332, ____items_1)); }
	inline PoseDataU5BU5D_t2795636683* get__items_1() const { return ____items_1; }
	inline PoseDataU5BU5D_t2795636683** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoseDataU5BU5D_t2795636683* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2890249332, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2890249332, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2890249332, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2890249332_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PoseDataU5BU5D_t2795636683* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2890249332_StaticFields, ____emptyArray_5)); }
	inline PoseDataU5BU5D_t2795636683* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PoseDataU5BU5D_t2795636683** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PoseDataU5BU5D_t2795636683* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2890249332_H
#ifndef TRACKEDPOSEDRIVERDATADESCRIPTION_T1675062289_H
#define TRACKEDPOSEDRIVERDATADESCRIPTION_T1675062289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct  TrackedPoseDriverDataDescription_t1675062289  : public RuntimeObject
{
public:

public:
};

struct TrackedPoseDriverDataDescription_t1675062289_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_t2890249332 * ___DeviceData_0;

public:
	inline static int32_t get_offset_of_DeviceData_0() { return static_cast<int32_t>(offsetof(TrackedPoseDriverDataDescription_t1675062289_StaticFields, ___DeviceData_0)); }
	inline List_1_t2890249332 * get_DeviceData_0() const { return ___DeviceData_0; }
	inline List_1_t2890249332 ** get_address_of_DeviceData_0() { return &___DeviceData_0; }
	inline void set_DeviceData_0(List_1_t2890249332 * value)
	{
		___DeviceData_0 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSEDRIVERDATADESCRIPTION_T1675062289_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t1281789340* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t1281789340* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t1281789340** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t1281789340* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef POSEDATA_T1418174590_H
#define POSEDATA_T1418174590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct  PoseData_t1418174590 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_t3319525431 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t593865784 * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_t1418174590, ___PoseNames_0)); }
	inline List_1_t3319525431 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_t3319525431 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_t3319525431 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___PoseNames_0), value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_t1418174590, ___Poses_1)); }
	inline List_1_t593865784 * get_Poses_1() const { return ___Poses_1; }
	inline List_1_t593865784 ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_t593865784 * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((&___Poses_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t1418174590_marshaled_pinvoke
{
	List_1_t3319525431 * ___PoseNames_0;
	List_1_t593865784 * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t1418174590_marshaled_com
{
	List_1_t3319525431 * ___PoseNames_0;
	List_1_t593865784 * ___Poses_1;
};
#endif // POSEDATA_T1418174590_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef DEVICETYPE_T207466640_H
#define DEVICETYPE_T207466640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType
struct  DeviceType_t207466640 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_t207466640, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETYPE_T207466640_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef UPDATETYPE_T282890708_H
#define UPDATETYPE_T282890708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType
struct  UpdateType_t282890708 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t282890708, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETYPE_T282890708_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TRACKINGTYPE_T3423517968_H
#define TRACKINGTYPE_T3423517968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType
struct  TrackingType_t3423517968 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t3423517968, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGTYPE_T3423517968_H
#ifndef POSE_T545244865_H
#define POSE_T545244865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t545244865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t2301928331  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___rotation_1)); }
	inline Quaternion_t2301928331  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t2301928331  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t545244865_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t545244865  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t545244865_StaticFields, ___k_Identity_2)); }
	inline Pose_t545244865  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t545244865 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t545244865  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T545244865_H
#ifndef COORDINATEFRAME_T4099029566_H
#define COORDINATEFRAME_T4099029566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.CoordinateFrame
struct  CoordinateFrame_t4099029566 
{
public:
	// System.Int32 UnityEngine.XR.Tango.CoordinateFrame::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoordinateFrame_t4099029566, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATEFRAME_T4099029566_H
#ifndef TRACKEDPOSE_T3416758338_H
#define TRACKEDPOSE_T3416758338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose
struct  TrackedPose_t3416758338 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_t3416758338, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSE_T3416758338_H
#ifndef POSESTATUS_T2577078539_H
#define POSESTATUS_T2577078539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseStatus
struct  PoseStatus_t2577078539 
{
public:
	// System.Int32 UnityEngine.XR.Tango.PoseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseStatus_t2577078539, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSESTATUS_T2577078539_H
#ifndef XRNODE_T3929440994_H
#define XRNODE_T3929440994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_t3929440994 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t3929440994, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODE_T3929440994_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COORDINATEFRAMEPAIR_T1560405616_H
#define COORDINATEFRAMEPAIR_T1560405616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.CoordinateFramePair
struct  CoordinateFramePair_t1560405616 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.CoordinateFramePair::baseFrame
					int32_t ___baseFrame_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___baseFrame_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___targetFrame_1_OffsetPadding[4];
					// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.CoordinateFramePair::targetFrame
					int32_t ___targetFrame_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___targetFrame_1_OffsetPadding_forAlignmentOnly[4];
					int32_t ___targetFrame_1_forAlignmentOnly;
				};
			};
		};
		uint8_t CoordinateFramePair_t1560405616__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseFrame_0() { return static_cast<int32_t>(offsetof(CoordinateFramePair_t1560405616, ___baseFrame_0)); }
	inline int32_t get_baseFrame_0() const { return ___baseFrame_0; }
	inline int32_t* get_address_of_baseFrame_0() { return &___baseFrame_0; }
	inline void set_baseFrame_0(int32_t value)
	{
		___baseFrame_0 = value;
	}

	inline static int32_t get_offset_of_targetFrame_1() { return static_cast<int32_t>(offsetof(CoordinateFramePair_t1560405616, ___targetFrame_1)); }
	inline int32_t get_targetFrame_1() const { return ___targetFrame_1; }
	inline int32_t* get_address_of_targetFrame_1() { return &___targetFrame_1; }
	inline void set_targetFrame_1(int32_t value)
	{
		___targetFrame_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATEFRAMEPAIR_T1560405616_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef POSEDATA_T3034736766_H
#define POSEDATA_T3034736766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseData
struct  PoseData_t3034736766 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt32 UnityEngine.XR.Tango.PoseData::version
					uint32_t ___version_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint32_t ___version_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___timestamp_1_OffsetPadding[8];
					// System.Double UnityEngine.XR.Tango.PoseData::timestamp
					double ___timestamp_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___timestamp_1_OffsetPadding_forAlignmentOnly[8];
					double ___timestamp_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_x_2_OffsetPadding[16];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_x
					double ___orientation_x_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_x_2_OffsetPadding_forAlignmentOnly[16];
					double ___orientation_x_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_y_3_OffsetPadding[24];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_y
					double ___orientation_y_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_y_3_OffsetPadding_forAlignmentOnly[24];
					double ___orientation_y_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_z_4_OffsetPadding[32];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_z
					double ___orientation_z_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_z_4_OffsetPadding_forAlignmentOnly[32];
					double ___orientation_z_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_w_5_OffsetPadding[40];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_w
					double ___orientation_w_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_w_5_OffsetPadding_forAlignmentOnly[40];
					double ___orientation_w_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_x_6_OffsetPadding[48];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_x
					double ___translation_x_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_x_6_OffsetPadding_forAlignmentOnly[48];
					double ___translation_x_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_y_7_OffsetPadding[56];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_y
					double ___translation_y_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_y_7_OffsetPadding_forAlignmentOnly[56];
					double ___translation_y_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_z_8_OffsetPadding[64];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_z
					double ___translation_z_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_z_8_OffsetPadding_forAlignmentOnly[64];
					double ___translation_z_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___statusCode_9_OffsetPadding[72];
					// UnityEngine.XR.Tango.PoseStatus UnityEngine.XR.Tango.PoseData::statusCode
					int32_t ___statusCode_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___statusCode_9_OffsetPadding_forAlignmentOnly[72];
					int32_t ___statusCode_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frame_10_OffsetPadding[76];
					// UnityEngine.XR.Tango.CoordinateFramePair UnityEngine.XR.Tango.PoseData::frame
					CoordinateFramePair_t1560405616  ___frame_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frame_10_OffsetPadding_forAlignmentOnly[76];
					CoordinateFramePair_t1560405616  ___frame_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___confidence_11_OffsetPadding[84];
					// System.UInt32 UnityEngine.XR.Tango.PoseData::confidence
					uint32_t ___confidence_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___confidence_11_OffsetPadding_forAlignmentOnly[84];
					uint32_t ___confidence_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___accuracy_12_OffsetPadding[88];
					// System.Single UnityEngine.XR.Tango.PoseData::accuracy
					float ___accuracy_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___accuracy_12_OffsetPadding_forAlignmentOnly[88];
					float ___accuracy_12_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseData_t3034736766__padding[92];
	};

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___timestamp_1)); }
	inline double get_timestamp_1() const { return ___timestamp_1; }
	inline double* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(double value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_orientation_x_2() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_x_2)); }
	inline double get_orientation_x_2() const { return ___orientation_x_2; }
	inline double* get_address_of_orientation_x_2() { return &___orientation_x_2; }
	inline void set_orientation_x_2(double value)
	{
		___orientation_x_2 = value;
	}

	inline static int32_t get_offset_of_orientation_y_3() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_y_3)); }
	inline double get_orientation_y_3() const { return ___orientation_y_3; }
	inline double* get_address_of_orientation_y_3() { return &___orientation_y_3; }
	inline void set_orientation_y_3(double value)
	{
		___orientation_y_3 = value;
	}

	inline static int32_t get_offset_of_orientation_z_4() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_z_4)); }
	inline double get_orientation_z_4() const { return ___orientation_z_4; }
	inline double* get_address_of_orientation_z_4() { return &___orientation_z_4; }
	inline void set_orientation_z_4(double value)
	{
		___orientation_z_4 = value;
	}

	inline static int32_t get_offset_of_orientation_w_5() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_w_5)); }
	inline double get_orientation_w_5() const { return ___orientation_w_5; }
	inline double* get_address_of_orientation_w_5() { return &___orientation_w_5; }
	inline void set_orientation_w_5(double value)
	{
		___orientation_w_5 = value;
	}

	inline static int32_t get_offset_of_translation_x_6() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_x_6)); }
	inline double get_translation_x_6() const { return ___translation_x_6; }
	inline double* get_address_of_translation_x_6() { return &___translation_x_6; }
	inline void set_translation_x_6(double value)
	{
		___translation_x_6 = value;
	}

	inline static int32_t get_offset_of_translation_y_7() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_y_7)); }
	inline double get_translation_y_7() const { return ___translation_y_7; }
	inline double* get_address_of_translation_y_7() { return &___translation_y_7; }
	inline void set_translation_y_7(double value)
	{
		___translation_y_7 = value;
	}

	inline static int32_t get_offset_of_translation_z_8() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_z_8)); }
	inline double get_translation_z_8() const { return ___translation_z_8; }
	inline double* get_address_of_translation_z_8() { return &___translation_z_8; }
	inline void set_translation_z_8(double value)
	{
		___translation_z_8 = value;
	}

	inline static int32_t get_offset_of_statusCode_9() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___statusCode_9)); }
	inline int32_t get_statusCode_9() const { return ___statusCode_9; }
	inline int32_t* get_address_of_statusCode_9() { return &___statusCode_9; }
	inline void set_statusCode_9(int32_t value)
	{
		___statusCode_9 = value;
	}

	inline static int32_t get_offset_of_frame_10() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___frame_10)); }
	inline CoordinateFramePair_t1560405616  get_frame_10() const { return ___frame_10; }
	inline CoordinateFramePair_t1560405616 * get_address_of_frame_10() { return &___frame_10; }
	inline void set_frame_10(CoordinateFramePair_t1560405616  value)
	{
		___frame_10 = value;
	}

	inline static int32_t get_offset_of_confidence_11() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___confidence_11)); }
	inline uint32_t get_confidence_11() const { return ___confidence_11; }
	inline uint32_t* get_address_of_confidence_11() { return &___confidence_11; }
	inline void set_confidence_11(uint32_t value)
	{
		___confidence_11 = value;
	}

	inline static int32_t get_offset_of_accuracy_12() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___accuracy_12)); }
	inline float get_accuracy_12() const { return ___accuracy_12; }
	inline float* get_address_of_accuracy_12() { return &___accuracy_12; }
	inline void set_accuracy_12(float value)
	{
		___accuracy_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_T3034736766_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef TRACKEDPOSEDRIVER_T1867984025_H
#define TRACKEDPOSEDRIVER_T1867984025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t1867984025  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_2;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_3;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_5;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_6;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t545244865  ___m_OriginPose_7;

public:
	inline static int32_t get_offset_of_m_Device_2() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_Device_2)); }
	inline int32_t get_m_Device_2() const { return ___m_Device_2; }
	inline int32_t* get_address_of_m_Device_2() { return &___m_Device_2; }
	inline void set_m_Device_2(int32_t value)
	{
		___m_Device_2 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_3() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_PoseSource_3)); }
	inline int32_t get_m_PoseSource_3() const { return ___m_PoseSource_3; }
	inline int32_t* get_address_of_m_PoseSource_3() { return &___m_PoseSource_3; }
	inline void set_m_PoseSource_3(int32_t value)
	{
		___m_PoseSource_3 = value;
	}

	inline static int32_t get_offset_of_m_TrackingType_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_TrackingType_4)); }
	inline int32_t get_m_TrackingType_4() const { return ___m_TrackingType_4; }
	inline int32_t* get_address_of_m_TrackingType_4() { return &___m_TrackingType_4; }
	inline void set_m_TrackingType_4(int32_t value)
	{
		___m_TrackingType_4 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_UpdateType_5)); }
	inline int32_t get_m_UpdateType_5() const { return ___m_UpdateType_5; }
	inline int32_t* get_address_of_m_UpdateType_5() { return &___m_UpdateType_5; }
	inline void set_m_UpdateType_5(int32_t value)
	{
		___m_UpdateType_5 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_UseRelativeTransform_6)); }
	inline bool get_m_UseRelativeTransform_6() const { return ___m_UseRelativeTransform_6; }
	inline bool* get_address_of_m_UseRelativeTransform_6() { return &___m_UseRelativeTransform_6; }
	inline void set_m_UseRelativeTransform_6(bool value)
	{
		___m_UseRelativeTransform_6 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_OriginPose_7)); }
	inline Pose_t545244865  get_m_OriginPose_7() const { return ___m_OriginPose_7; }
	inline Pose_t545244865 * get_address_of_m_OriginPose_7() { return &___m_OriginPose_7; }
	inline void set_m_OriginPose_7(Pose_t545244865  value)
	{
		___m_OriginPose_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSEDRIVER_T1867984025_H


// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3628814819_gshared (List_1_t2890249332 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PoseData_t1418174590  List_1_get_Item_m640079513_gshared (List_1_t2890249332 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m1636217762_gshared (List_1_t593865784 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3341200234_gshared (List_1_t593865784 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m871525267_gshared (List_1_t2890249332 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2662576365_gshared (List_1_t593865784 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1332165401_gshared (List_1_t593865784 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2861735381_gshared (List_1_t2890249332 * __this, PoseData_t1418174590  p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
#define List_1_get_Count_m3628814819(__this, method) ((  int32_t (*) (List_1_t2890249332 *, const RuntimeMethod*))List_1_get_Count_m3628814819_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
#define List_1_get_Item_m640079513(__this, p0, method) ((  PoseData_t1418174590  (*) (List_1_t2890249332 *, int32_t, const RuntimeMethod*))List_1_get_Item_m640079513_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
#define List_1_get_Item_m1636217762(__this, p0, method) ((  int32_t (*) (List_1_t593865784 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1636217762_gshared)(__this, p0, method)
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_m4134942016 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
#define List_1_get_Count_m3341200234(__this, method) ((  int32_t (*) (List_1_t593865784 *, const RuntimeMethod*))List_1_get_Count_m3341200234_gshared)(__this, method)
// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.TangoDevice::get_baseCoordinateFrame()
extern "C" IL2CPP_METHOD_ATTR int32_t TangoDevice_get_baseCoordinateFrame_m1024580885 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m3134437062 (RuntimeObject * __this /* static, unused */, PoseData_t3034736766 * p0, int32_t p1, int32_t p2, double p3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PoseData_get_position_m1980100049 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  PoseData_get_rotation_m1034883957 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  Pose_get_identity_m1622996508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.InputTracking::GetLocalPosition(UnityEngine.XR.XRNode)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  InputTracking_GetLocalPosition_m613492899 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.InputTracking::GetLocalRotation(UnityEngine.XR.XRNode)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  InputTracking_GetLocalRotation_m2382608674 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::TryGetTangoPose(UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_TryGetTangoPose_m4021233158 (TrackedPoseDriver_t1867984025 * __this, int32_t ___frame0, Pose_t545244865 * ___pose1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m3774969807 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_m3266718412 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m4227149030(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRDevice_DisableAutoXRCameraTracking_m3625162343 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * p0, bool p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_m1654609797 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m1254900209 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  Pose_GetTransformedBy_m3933236594 (Pose_t545244865 * __this, Pose_t545244865  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Camera_get_stereoEnabled_m1370638140 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_GetDataFromSource_m2850879331 (TrackedPoseDriver_t1867984025 * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t545244865 * ___resultPose2, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591 (TrackedPoseDriver_t1867984025 * __this, Pose_t545244865  ___pose0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
#define List_1__ctor_m871525267(__this, method) ((  void (*) (List_1_t2890249332 *, const RuntimeMethod*))List_1__ctor_m871525267_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
#define List_1__ctor_m2662576365(__this, method) ((  void (*) (List_1_t593865784 *, const RuntimeMethod*))List_1__ctor_m2662576365_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
#define List_1_Add_m1332165401(__this, p0, method) ((  void (*) (List_1_t593865784 *, int32_t, const RuntimeMethod*))List_1_Add_m1332165401_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
#define List_1_Add_m2861735381(__this, p0, method) ((  void (*) (List_1_t2890249332 *, PoseData_t1418174590 , const RuntimeMethod*))List_1_Add_m2861735381_gshared)(__this, p0, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver__ctor_m3153467908 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver__ctor_m3153467908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver__ctor_m3153467908_RuntimeMethod_var);
	{
		__this->set_m_UpdateType_5(0);
		__this->set_m_UseRelativeTransform_6((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::get_deviceType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_deviceType_m2282512132 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_get_deviceType_m2282512132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_get_deviceType_m2282512132_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Device_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m1064060695 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_set_deviceType_m1064060695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_set_deviceType_m1064060695_RuntimeMethod_var);
	{
		int32_t L_0 = ___value0;
		__this->set_m_Device_2(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseSource()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_poseSource_m3651530029 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_get_poseSource_m3651530029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_get_poseSource_m3651530029_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_PoseSource_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_m4134942016 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_set_poseSource_m4134942016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_set_poseSource_m4134942016_RuntimeMethod_var);
	{
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::SetPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_SetPoseSource_m2091764154 (TrackedPoseDriver_t1867984025 * __this, int32_t ___deviceType0, int32_t ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_SetPoseSource_m2091764154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_SetPoseSource_m2091764154_RuntimeMethod_var);
	PoseData_t1418174590  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___deviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var);
		List_1_t2890249332 * L_1 = ((TrackedPoseDriverDataDescription_t1675062289_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var))->get_DeviceData_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3628814819(L_1, /*hidden argument*/List_1_get_Count_m3628814819_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var);
		List_1_t2890249332 * L_3 = ((TrackedPoseDriverDataDescription_t1675062289_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var))->get_DeviceData_0();
		int32_t L_4 = ___deviceType0;
		NullCheck(L_3);
		PoseData_t1418174590  L_5 = List_1_get_Item_m640079513(L_3, L_4, /*hidden argument*/List_1_get_Item_m640079513_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = 0;
		goto IL_004d;
	}

IL_0025:
	{
		List_1_t593865784 * L_6 = (&V_0)->get_Poses_1();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = List_1_get_Item_m1636217762(L_6, L_7, /*hidden argument*/List_1_get_Item_m1636217762_RuntimeMethod_var);
		int32_t L_9 = ___pose1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___pose1;
		TrackedPoseDriver_set_poseSource_m4134942016(__this, L_10, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_0067;
	}

IL_0048:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_12 = V_1;
		List_1_t593865784 * L_13 = (&V_0)->get_Poses_1();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3341200234(L_13, /*hidden argument*/List_1_get_Count_m3341200234_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0025;
		}
	}
	{
	}

IL_0060:
	{
		V_2 = (bool)0;
		goto IL_0067;
	}

IL_0067:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::TryGetTangoPose(UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_TryGetTangoPose_m4021233158 (TrackedPoseDriver_t1867984025 * __this, int32_t ___frame0, Pose_t545244865 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_TryGetTangoPose_m4021233158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_TryGetTangoPose_m4021233158_RuntimeMethod_var);
	PoseData_t3034736766  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TangoDevice_t2970124841_il2cpp_TypeInfo_var);
		int32_t L_0 = TangoDevice_get_baseCoordinateFrame_m1024580885(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___frame0;
		IL2CPP_RUNTIME_CLASS_INIT(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var);
		bool L_2 = TangoInputTracking_TryGetPoseAtTime_m3134437062(NULL /*static, unused*/, (PoseData_t3034736766 *)(&V_0), L_0, L_1, (0.0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_3 = (&V_0)->get_statusCode_9();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		Pose_t545244865 * L_4 = ___pose1;
		Vector3_t3722313464  L_5 = PoseData_get_position_m1980100049((PoseData_t3034736766 *)(&V_0), /*hidden argument*/NULL);
		L_4->set_position_0(L_5);
		Pose_t545244865 * L_6 = ___pose1;
		Quaternion_t2301928331  L_7 = PoseData_get_rotation_m1034883957((PoseData_t3034736766 *)(&V_0), /*hidden argument*/NULL);
		L_6->set_rotation_1(L_7);
		V_1 = (bool)1;
		goto IL_005d;
	}

IL_004b:
	{
		Pose_t545244865 * L_8 = ___pose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t545244865_il2cpp_TypeInfo_var);
		Pose_t545244865  L_9 = Pose_get_identity_m1622996508(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Pose_t545244865 *)L_8 = L_9;
		V_1 = (bool)0;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_GetDataFromSource_m2850879331 (TrackedPoseDriver_t1867984025 * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t545244865 * ___resultPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_GetDataFromSource_m2850879331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_GetDataFromSource_m2850879331_RuntimeMethod_var);
	bool V_0 = false;
	{
		int32_t L_0 = ___poseSource1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_0098;
			}
			case 3:
			{
				goto IL_0078;
			}
			case 4:
			{
				goto IL_00b8;
			}
			case 5:
			{
				goto IL_00d8;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_0147;
			}
			case 8:
			{
				goto IL_0156;
			}
			case 9:
			{
				goto IL_0166;
			}
			case 10:
			{
				goto IL_00f8;
			}
		}
	}
	{
		goto IL_0175;
	}

IL_0038:
	{
		Pose_t545244865 * L_1 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		L_1->set_position_0(L_2);
		Pose_t545244865 * L_3 = ___resultPose2;
		Quaternion_t2301928331  L_4 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		L_3->set_rotation_1(L_4);
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_0058:
	{
		Pose_t545244865 * L_5 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		L_5->set_position_0(L_6);
		Pose_t545244865 * L_7 = ___resultPose2;
		Quaternion_t2301928331  L_8 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		L_7->set_rotation_1(L_8);
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_0078:
	{
		Pose_t545244865 * L_9 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		L_9->set_position_0(L_10);
		Pose_t545244865 * L_11 = ___resultPose2;
		Quaternion_t2301928331  L_12 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		L_11->set_rotation_1(L_12);
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_0098:
	{
		Pose_t545244865 * L_13 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		L_13->set_position_0(L_14);
		Pose_t545244865 * L_15 = ___resultPose2;
		Quaternion_t2301928331  L_16 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		L_15->set_rotation_1(L_16);
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_00b8:
	{
		Pose_t545244865 * L_17 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		L_17->set_position_0(L_18);
		Pose_t545244865 * L_19 = ___resultPose2;
		Quaternion_t2301928331  L_20 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		L_19->set_rotation_1(L_20);
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_00d8:
	{
		Pose_t545244865 * L_21 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		L_21->set_position_0(L_22);
		Pose_t545244865 * L_23 = ___resultPose2;
		Quaternion_t2301928331  L_24 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		L_23->set_rotation_1(L_24);
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_00f8:
	{
		Pose_t545244865 * L_25 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		L_25->set_position_0(L_26);
		Pose_t545244865 * L_27 = ___resultPose2;
		Quaternion_t2301928331  L_28 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		L_27->set_rotation_1(L_28);
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_0118:
	{
		Pose_t545244865 * L_29 = ___resultPose2;
		bool L_30 = TrackedPoseDriver_TryGetTangoPose_m4021233158(__this, 7, (Pose_t545244865 *)L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0140;
		}
	}
	{
		Pose_t545244865 * L_31 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_32 = InputTracking_GetLocalPosition_m613492899(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		L_31->set_position_0(L_32);
		Pose_t545244865 * L_33 = ___resultPose2;
		Quaternion_t2301928331  L_34 = InputTracking_GetLocalRotation_m2382608674(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		L_33->set_rotation_1(L_34);
	}

IL_0140:
	{
		V_0 = (bool)1;
		goto IL_0187;
	}

IL_0147:
	{
		Pose_t545244865 * L_35 = ___resultPose2;
		bool L_36 = TrackedPoseDriver_TryGetTangoPose_m4021233158(__this, 8, (Pose_t545244865 *)L_35, /*hidden argument*/NULL);
		V_0 = L_36;
		goto IL_0187;
	}

IL_0156:
	{
		Pose_t545244865 * L_37 = ___resultPose2;
		bool L_38 = TrackedPoseDriver_TryGetTangoPose_m4021233158(__this, ((int32_t)9), (Pose_t545244865 *)L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_0187;
	}

IL_0166:
	{
		Pose_t545244865 * L_39 = ___resultPose2;
		bool L_40 = TrackedPoseDriver_TryGetTangoPose_m4021233158(__this, 4, (Pose_t545244865 *)L_39, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0187;
	}

IL_0175:
	{
		Pose_t545244865 * L_41 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t545244865_il2cpp_TypeInfo_var);
		Pose_t545244865  L_42 = Pose_get_identity_m1622996508(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Pose_t545244865 *)L_41 = L_42;
		V_0 = (bool)0;
		goto IL_0187;
	}

IL_0187:
	{
		bool L_43 = V_0;
		return L_43;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::get_trackingType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_trackingType_m4217524394 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_get_trackingType_m4217524394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_get_trackingType_m4217524394_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_TrackingType_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_trackingType(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_trackingType_m4066447935 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_set_trackingType_m4066447935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_set_trackingType_m4066447935_RuntimeMethod_var);
	{
		int32_t L_0 = ___value0;
		__this->set_m_TrackingType_4(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::get_updateType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_updateType_m1411580539 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_get_updateType_m1411580539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_get_updateType_m1411580539_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_UpdateType_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_updateType(UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_updateType_m3648888555 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_set_updateType_m3648888555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_set_updateType_m3648888555_RuntimeMethod_var);
	{
		int32_t L_0 = ___value0;
		__this->set_m_UpdateType_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_m1398869064 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_get_UseRelativeTransform_m1398869064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_get_UseRelativeTransform_m1398869064_RuntimeMethod_var);
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UseRelativeTransform_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_UseRelativeTransform(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_UseRelativeTransform_m2128961640 (TrackedPoseDriver_t1867984025 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_set_UseRelativeTransform_m2128961640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_set_UseRelativeTransform_m2128961640_RuntimeMethod_var);
	{
		bool L_0 = ___value0;
		__this->set_m_UseRelativeTransform_6(L_0);
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  TrackedPoseDriver_get_originPose_m118568312 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_get_originPose_m118568312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_get_originPose_m118568312_RuntimeMethod_var);
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Pose_t545244865  L_0 = __this->get_m_OriginPose_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Pose_t545244865  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_originPose(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_originPose_m2024032077 (TrackedPoseDriver_t1867984025 * __this, Pose_t545244865  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_set_originPose_m2024032077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_set_originPose_m2024032077_RuntimeMethod_var);
	{
		Pose_t545244865  L_0 = ___value0;
		__this->set_m_OriginPose_7(L_0);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m3774969807 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_CacheLocalPosition_m3774969807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_CacheLocalPosition_m3774969807_RuntimeMethod_var);
	{
		Pose_t545244865 * L_0 = __this->get_address_of_m_OriginPose_7();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localPosition_m4234289348(L_1, /*hidden argument*/NULL);
		L_0->set_position_0(L_2);
		Pose_t545244865 * L_3 = __this->get_address_of_m_OriginPose_7();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = Transform_get_localRotation_m3487911431(L_4, /*hidden argument*/NULL);
		L_3->set_rotation_1(L_5);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078_RuntimeMethod_var);
	{
		Pose_t545244865 * L_0 = __this->get_address_of_m_OriginPose_7();
		Vector3_t3722313464  L_1 = L_0->get_position_0();
		Pose_t545244865 * L_2 = __this->get_address_of_m_OriginPose_7();
		Quaternion_t2301928331  L_3 = L_2->get_rotation_1();
		VirtActionInvoker2< Vector3_t3722313464 , Quaternion_t2301928331  >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_1, L_3);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Awake()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_Awake_m357232108 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_Awake_m357232108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_Awake_m357232108_RuntimeMethod_var);
	{
		TrackedPoseDriver_CacheLocalPosition_m3774969807(__this, /*hidden argument*/NULL);
		bool L_0 = TrackedPoseDriver_HasStereoCamera_m3266718412(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Camera_t4157153871 * L_1 = Component_GetComponent_TisCamera_t4157153871_m4227149030(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var);
		XRDevice_DisableAutoXRCameraTracking_m3625162343(NULL /*static, unused*/, L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDestroy_m1833559287 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnDestroy_m1833559287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_OnDestroy_m1833559287_RuntimeMethod_var);
	{
		bool L_0 = TrackedPoseDriver_HasStereoCamera_m3266718412(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnEnable_m564992003 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnEnable_m564992003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_OnEnable_m564992003_RuntimeMethod_var);
	{
		intptr_t L_0 = (intptr_t)GetVirtualMethodInfo(__this, 10);
		UnityAction_t3245792599 * L_1 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_onBeforeRender_m1654609797(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDisable_m3908821101 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnDisable_m3908821101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_OnDisable_m3908821101_RuntimeMethod_var);
	{
		TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)GetVirtualMethodInfo(__this, 10);
		UnityAction_t3245792599 * L_1 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m1254900209(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_FixedUpdate_m4196881516 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_FixedUpdate_m4196881516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_FixedUpdate_m4196881516_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_m_UpdateType_5();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_5();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Update()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_Update_m3186735601 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_Update_m3186735601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_Update_m3186735601_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_m_UpdateType_5();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_5();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnBeforeRender()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnBeforeRender_m2516930955 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnBeforeRender_m2516930955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_OnBeforeRender_m2516930955_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_m_UpdateType_5();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_5();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_SetLocalTransform_m3593367804 (TrackedPoseDriver_t1867984025 * __this, Vector3_t3722313464  ___newPosition0, Quaternion_t2301928331  ___newRotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_SetLocalTransform_m3593367804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_SetLocalTransform_m3593367804_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_m_TrackingType_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_TrackingType_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}

IL_0018:
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_3 = ___newRotation1;
		NullCheck(L_2);
		Transform_set_localRotation_m19445462(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		int32_t L_4 = __this->get_m_TrackingType_4();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = __this->get_m_TrackingType_4();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}

IL_003d:
	{
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = ___newPosition0;
		NullCheck(L_6);
		Transform_set_localPosition_m4128471975(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591 (TrackedPoseDriver_t1867984025 * __this, Pose_t545244865  ___pose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591_RuntimeMethod_var);
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_UseRelativeTransform_6();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Pose_t545244865  L_1 = __this->get_m_OriginPose_7();
		Pose_t545244865  L_2 = Pose_GetTransformedBy_m3933236594((Pose_t545244865 *)(&___pose0), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0028;
	}

IL_0020:
	{
		Pose_t545244865  L_3 = ___pose0;
		V_0 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		Pose_t545244865  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_m3266718412 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_HasStereoCamera_m3266718412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_HasStereoCamera_m3266718412_RuntimeMethod_var);
	Camera_t4157153871 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m4227149030(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var);
		V_0 = L_0;
		Camera_t4157153871 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Camera_t4157153871 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Camera_get_stereoEnabled_m1370638140(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_PerformUpdate_m349344482 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_PerformUpdate_m349344482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriver_PerformUpdate_m349344482_RuntimeMethod_var);
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Pose_t545244865  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0050;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t545244865 ));
		int32_t L_1 = __this->get_m_Device_2();
		int32_t L_2 = __this->get_m_PoseSource_3();
		bool L_3 = TrackedPoseDriver_GetDataFromSource_m2850879331(__this, L_1, L_2, (Pose_t545244865 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		Pose_t545244865  L_4 = V_0;
		Pose_t545244865  L_5 = TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t3722313464  L_6 = (&V_1)->get_position_0();
		Quaternion_t2301928331  L_7 = (&V_1)->get_rotation_1();
		VirtActionInvoker2< Vector3_t3722313464 , Quaternion_t2301928331  >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_6, L_7);
	}

IL_0050:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriverDataDescription__cctor_m2513534467 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriverDataDescription__cctor_m2513534467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPoseDriverDataDescription__cctor_m2513534467_RuntimeMethod_var);
	List_1_t2890249332 * V_0 = NULL;
	PoseData_t1418174590  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t3319525431 * V_2 = NULL;
	List_1_t593865784 * V_3 = NULL;
	PoseData_t1418174590  V_4;
	memset(&V_4, 0, sizeof(V_4));
	PoseData_t1418174590  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		List_1_t2890249332 * L_0 = (List_1_t2890249332 *)il2cpp_codegen_object_new(List_1_t2890249332_il2cpp_TypeInfo_var);
		List_1__ctor_m871525267(L_0, /*hidden argument*/List_1__ctor_m871525267_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2890249332 * L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(PoseData_t1418174590 ));
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_2 = L_2;
		List_1_t3319525431 * L_3 = V_2;
		NullCheck(L_3);
		List_1_Add_m1685793073(L_3, _stringLiteral1534079751, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_4 = V_2;
		NullCheck(L_4);
		List_1_Add_m1685793073(L_4, _stringLiteral3242476622, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_5 = V_2;
		NullCheck(L_5);
		List_1_Add_m1685793073(L_5, _stringLiteral2646604272, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_6 = V_2;
		NullCheck(L_6);
		List_1_Add_m1685793073(L_6, _stringLiteral431746829, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_7 = V_2;
		NullCheck(L_7);
		List_1_Add_m1685793073(L_7, _stringLiteral134673545, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_8 = V_2;
		(&V_1)->set_PoseNames_0(L_8);
		List_1_t593865784 * L_9 = (List_1_t593865784 *)il2cpp_codegen_object_new(List_1_t593865784_il2cpp_TypeInfo_var);
		List_1__ctor_m2662576365(L_9, /*hidden argument*/List_1__ctor_m2662576365_RuntimeMethod_var);
		V_3 = L_9;
		List_1_t593865784 * L_10 = V_3;
		NullCheck(L_10);
		List_1_Add_m1332165401(L_10, 0, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_11 = V_3;
		NullCheck(L_11);
		List_1_Add_m1332165401(L_11, 1, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_12 = V_3;
		NullCheck(L_12);
		List_1_Add_m1332165401(L_12, 2, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_13 = V_3;
		NullCheck(L_13);
		List_1_Add_m1332165401(L_13, 3, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_14 = V_3;
		NullCheck(L_14);
		List_1_Add_m1332165401(L_14, 6, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_15 = V_3;
		(&V_1)->set_Poses_1(L_15);
		PoseData_t1418174590  L_16 = V_1;
		NullCheck(L_1);
		List_1_Add_m2861735381(L_1, L_16, /*hidden argument*/List_1_Add_m2861735381_RuntimeMethod_var);
		List_1_t2890249332 * L_17 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(PoseData_t1418174590 ));
		List_1_t3319525431 * L_18 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_18, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_2 = L_18;
		List_1_t3319525431 * L_19 = V_2;
		NullCheck(L_19);
		List_1_Add_m1685793073(L_19, _stringLiteral571192390, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_20 = V_2;
		NullCheck(L_20);
		List_1_Add_m1685793073(L_20, _stringLiteral3476230729, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_21 = V_2;
		(&V_4)->set_PoseNames_0(L_21);
		List_1_t593865784 * L_22 = (List_1_t593865784 *)il2cpp_codegen_object_new(List_1_t593865784_il2cpp_TypeInfo_var);
		List_1__ctor_m2662576365(L_22, /*hidden argument*/List_1__ctor_m2662576365_RuntimeMethod_var);
		V_3 = L_22;
		List_1_t593865784 * L_23 = V_3;
		NullCheck(L_23);
		List_1_Add_m1332165401(L_23, 4, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_24 = V_3;
		NullCheck(L_24);
		List_1_Add_m1332165401(L_24, 5, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_25 = V_3;
		(&V_4)->set_Poses_1(L_25);
		PoseData_t1418174590  L_26 = V_4;
		NullCheck(L_17);
		List_1_Add_m2861735381(L_17, L_26, /*hidden argument*/List_1_Add_m2861735381_RuntimeMethod_var);
		List_1_t2890249332 * L_27 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(PoseData_t1418174590 ));
		List_1_t3319525431 * L_28 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_28, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_2 = L_28;
		List_1_t3319525431 * L_29 = V_2;
		NullCheck(L_29);
		List_1_Add_m1685793073(L_29, _stringLiteral2478019389, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_30 = V_2;
		(&V_5)->set_PoseNames_0(L_30);
		List_1_t593865784 * L_31 = (List_1_t593865784 *)il2cpp_codegen_object_new(List_1_t593865784_il2cpp_TypeInfo_var);
		List_1__ctor_m2662576365(L_31, /*hidden argument*/List_1__ctor_m2662576365_RuntimeMethod_var);
		V_3 = L_31;
		List_1_t593865784 * L_32 = V_3;
		NullCheck(L_32);
		List_1_Add_m1332165401(L_32, ((int32_t)10), /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_33 = V_3;
		(&V_5)->set_Poses_1(L_33);
		PoseData_t1418174590  L_34 = V_5;
		NullCheck(L_27);
		List_1_Add_m2861735381(L_27, L_34, /*hidden argument*/List_1_Add_m2861735381_RuntimeMethod_var);
		List_1_t2890249332 * L_35 = V_0;
		((TrackedPoseDriverDataDescription_t1675062289_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var))->set_DeviceData_0(L_35);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_pinvoke(const PoseData_t1418174590& unmarshaled, PoseData_t1418174590_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
extern "C" void PoseData_t1418174590_marshal_pinvoke_back(const PoseData_t1418174590_marshaled_pinvoke& marshaled, PoseData_t1418174590& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_pinvoke_cleanup(PoseData_t1418174590_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_com(const PoseData_t1418174590& unmarshaled, PoseData_t1418174590_marshaled_com& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
extern "C" void PoseData_t1418174590_marshal_com_back(const PoseData_t1418174590_marshaled_com& marshaled, PoseData_t1418174590& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_com_cleanup(PoseData_t1418174590_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
