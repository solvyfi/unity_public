#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_t731311DC35E31CEB666B4A4099E518236EA55F79;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3;
// System.String
struct String_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD;
// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7;

IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED  : public RuntimeObject
{
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* ___Parameters_3;
};

// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3  : public RuntimeObject
{
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_t731311DC35E31CEB666B4A4099E518236EA55F79* ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD* ___wrapperPools_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA  : public RuntimeObject
{
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;
};

struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields
{
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___Default_0;
};

// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7  : public RuntimeObject
{
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CParametersU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A__padding[13];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6C220874B8288F2E9E07FEA41E6C8D50B90BBFF5  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t6C220874B8288F2E9E07FEA41E6C8D50B90BBFF5_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13 <PrivateImplementationDetails>::1995DEFE26C524A9CB3CF007B4A76A325342658A716A5F50C3B262D2F38DF919
	__StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A ___1995DEFE26C524A9CB3CF007B4A76A325342658A716A5F50C3B262D2F38DF919_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5 (ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* __this, uint8_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, uint8_t ___webhookFlags0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m07F774596848E8D7638725CCDDD315B2306E5DE7 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m54C63D7CA0AB1521398A01C8C720D581F65564CC (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->___U3CResultCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m1A6458393A9B1F01BAD460ADF1F01AAEBBD429C7 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_mE668F820EB3B8CF1E65495CC490285A9585EF011 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_0 = ___response0;
		NullCheck(L_0);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_1 = L_0->___Parameters_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_1, (uint8_t)((int32_t)209), (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject* L_3 = V_0;
		WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), NULL);
	}

IL_0026:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline(__this, (-1), NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_4 = ___response0;
		NullCheck(L_4);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_5 = L_4->___Parameters_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_5, (uint8_t)((int32_t)207), (&V_0), NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject* L_7 = V_0;
		WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
	}

IL_004d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_8 = ___response0;
		NullCheck(L_8);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_9 = L_8->___Parameters_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_9, (uint8_t)((int32_t)208), (&V_0), NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject* L_11 = V_0;
		WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline(__this, ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_11, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var)), NULL);
	}

IL_006d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_12 = ___response0;
		NullCheck(L_12);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_13 = L_12->___Parameters_3;
		NullCheck(L_13);
		bool L_14;
		L_14 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_13, (uint8_t)((int32_t)206), (&V_0), NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject* L_15 = V_0;
		WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), NULL);
	}

IL_008d:
	{
		// }
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_mE953246AA2C870572F2E41210166F3DB34983801 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->___WebhookFlags_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, uint8_t ___webhookFlags0, const RuntimeMethod* method) 
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->___WebhookFlags_1 = L_0;
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m6D0971E6B8627026E0C8195C2ED0C7C44C16258B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* L_0 = (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)il2cpp_codegen_object_new(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D(L_0, (uint8_t)0, NULL);
		((WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
