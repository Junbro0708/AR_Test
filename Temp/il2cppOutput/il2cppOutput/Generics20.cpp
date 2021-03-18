#include "il2cpp-config.h"

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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.String
struct String_t;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct TrackingSubsystem_2_t3CF23872873C38C0BB67F7761931C72EC3595A4A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_t997A5E9CC5FBE9CBC39863972E14CCF39DF888EB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_tE0D61F1BF5FB76A26581A1B27EF091FF598C3192;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct TrackingSubsystem_2_tBFD98F54134D7CB7C59C1BB0E5FD90092B4F54DC;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct TrackingSubsystem_2_tED07EAE67EF6C35C4B2BD12EC0B22192EDA517F0;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t06C6E348315FEE29AF48FDD79F5DB54971CEE4C4;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>
struct TrackingSubsystem_2_t866E5C13BD83A3BF526D39844305872985195330;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Subsystem
struct  Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct  XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD  : public Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Destroyed
	bool ___m_Destroyed_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Destroyed_2() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD, ___m_Destroyed_2)); }
	inline bool get_m_Destroyed_2() const { return ___m_Destroyed_2; }
	inline bool* get_address_of_m_Destroyed_2() { return &___m_Destroyed_2; }
	inline void set_m_Destroyed_2(bool value)
	{
		___m_Destroyed_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct  TrackingSubsystem_2_t3CF23872873C38C0BB67F7761931C72EC3595A4A  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct  TrackingSubsystem_2_t997A5E9CC5FBE9CBC39863972E14CCF39DF888EB  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct  TrackingSubsystem_2_tE0D61F1BF5FB76A26581A1B27EF091FF598C3192  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct  TrackingSubsystem_2_tBFD98F54134D7CB7C59C1BB0E5FD90092B4F54DC  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct  TrackingSubsystem_2_tED07EAE67EF6C35C4B2BD12EC0B22192EDA517F0  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct  TrackingSubsystem_2_t06C6E348315FEE29AF48FDD79F5DB54971CEE4C4  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>
struct  TrackingSubsystem_2_t866E5C13BD83A3BF526D39844305872985195330  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m9814F0C90CD347A8B044F613EA3BEA89C0EDD0E6_gshared (TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m65C3CAD8EE099E2B3C0810F5C431A181CF765DE0_gshared (TrackingSubsystem_2_t3CF23872873C38C0BB67F7761931C72EC3595A4A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m5935653F3C84C1F836AFB07A6B418EF778456DB9_gshared (TrackingSubsystem_2_t997A5E9CC5FBE9CBC39863972E14CCF39DF888EB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mC1034FB5C0414A774582B61F74AFB2AB356B1E61_gshared (TrackingSubsystem_2_tE0D61F1BF5FB76A26581A1B27EF091FF598C3192 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m59B3B5BB5F13E39CABBED3564E6185813999F35C_gshared (TrackingSubsystem_2_tBFD98F54134D7CB7C59C1BB0E5FD90092B4F54DC * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m9657E700209AD59449C7457BA3FFF13E2CB77ABA_gshared (TrackingSubsystem_2_tED07EAE67EF6C35C4B2BD12EC0B22192EDA517F0 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mC50C77CDABF6E044EC3D1220128F4F8CC4DAFA34_gshared (TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7AB136126F271CC1CF77B79DD04F23CE085B0FC4_gshared (TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m43327E37F6A301CC47FFB62C5790FD44A93C1DF1_gshared (TrackingSubsystem_2_t06C6E348315FEE29AF48FDD79F5DB54971CEE4C4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mDE90C6D6A00E5F1BDACBA5D7C6B271982AC860CE_gshared (TrackingSubsystem_2_t866E5C13BD83A3BF526D39844305872985195330 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_m2218567853F336CE6652D569B3FC4BC9A502B0B2_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// public sealed override bool running => m_Running;
		bool L_0 = (bool)__this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_mE98AE6600FDB7D7B0FBBBAAB63637A2DF42CDC79_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// if (m_Destroyed)
		bool L_0 = (bool)__this->get_m_Destroyed_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Destroyed = true;
		__this->set_m_Destroyed_2((bool)1);
		// Stop();
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		// OnDestroyed();
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroyed() */, (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_m733AE25F56E5F5CB86BD93528C705904983F366F_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStart() */, (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->set_m_Running_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mC7BBEDFC52A3D2D09EBFD945E87454D5CE36A49B_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStop() */, (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->set_m_Running_1((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_mE06FEB5A6401B2A0AB469738A82EE613C0F6A41A_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 *)__this);
		((  void (*) (Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
