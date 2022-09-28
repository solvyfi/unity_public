#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047;
// System.Security.Cryptography.AesManaged
struct AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517;
// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479;
// ExitGames.Client.Photon.Encryption.EncryptorNative
struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0;
// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214;
// System.Exception
struct Exception_t;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693;
IL2CPP_EXTERN_C String_t* _stringLiteral0C674C434602F2C350E8DEC293E708D4CC2CE339;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E;
IL2CPP_EXTERN_C String_t* _stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD;
IL2CPP_EXTERN_C String_t* _stringLiteral420C015E6084500174F1912E91954C1A742F270F;
IL2CPP_EXTERN_C String_t* _stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75;
IL2CPP_EXTERN_C String_t* _stringLiteral4FD880CA5D311C1C431BD0CB104456E35EF84148;
IL2CPP_EXTERN_C String_t* _stringLiteral8F35A290E0C52584695F3B0342580DAB07F7B8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralA37EF8AD7DEABEF988E748C47A435D6BB3F6FC3B;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E96470B64DD3DB50F2E9C79034F94898F64537;
IL2CPP_EXTERN_C String_t* _stringLiteralA9AFEBAB5E371E8B24466D4A2FBB943F2E675545;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DA96E4398E04C75ACA0CBE183972952BDB1A28;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFE867641BA2826180B2167D7038C421CA025C7A2;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Addition_m8518866353242B9741D3723CCA6C414535CFF993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNative_OnNativeLog_mA01764B83C8B50F283755F07FEC157CD09A85F89_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94  : public RuntimeObject
{
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data_1;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_2;
};

struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields
{
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primesBelow2000_0;
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517  : public RuntimeObject
{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKey_5;
};

struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields
{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___primeRoot_0;
};

// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214  : public RuntimeObject
{
	// System.Security.Cryptography.Aes ExitGames.Client.Photon.Encryption.EncryptorNet::encryptorIn
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* ___encryptorIn_0;
	// System.Security.Cryptography.Aes ExitGames.Client.Photon.Encryption.EncryptorNet::encryptorOut
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* ___encryptorOut_1;
	// System.Security.Cryptography.HMACSHA256 ExitGames.Client.Photon.Encryption.EncryptorNet::hmacsha256In
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* ___hmacsha256In_2;
	// System.Security.Cryptography.HMACSHA256 ExitGames.Client.Photon.Encryption.EncryptorNet::hmacsha256Out
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* ___hmacsha256Out_3;
	// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::reusedIvBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___reusedIvBuffer_4;
	// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::reusedReadBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___reusedReadBuffer_5;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Photon.SocketServer.Security.OakleyGroups
struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8  : public RuntimeObject
{
};

struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields
{
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1536_3;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
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

// ExitGames.Client.Photon.StructWrapping.StructWrapperUtility
struct StructWrapperUtility_t52EED288DCD9C436B8085AA8D6269666AC327F4C  : public RuntimeObject
{
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
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

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
};

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9__padding[120];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C__padding[1212];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299__padding[192];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20__padding[9];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_tE60051DFE6339331A9F7F3F131E4810F50468E25 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tE60051DFE6339331A9F7F3F131E4810F50468E25__padding[96];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0
	__StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0;
	// System.Int32 <PrivateImplementationDetails>::55D48225770E7273976B2ADB147AACE542E2D0C92F8EA678EBFAE99038D21462
	int32_t ___55D48225770E7273976B2ADB147AACE542E2D0C92F8EA678EBFAE99038D21462_1;
	// System.Int64 <PrivateImplementationDetails>::5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5
	int64_t ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B
	__StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>::AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080
	__StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D
	__StaticArrayInitTypeSizeU3D96_tE60051DFE6339331A9F7F3F131E4810F50468E25 ___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC
	__StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175
	__StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9 ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7;
};

// System.Security.Cryptography.AesManaged
struct AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819  : public Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047
{
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* ___m_rijndael_11;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_5;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_16;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_17;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479  : public RuntimeObject
{
	// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::cryptor
	intptr_t ___cryptor_0;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::sharedKeyHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash_1;
};

// ExitGames.Client.Photon.Encryption.EncryptorNative
struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0  : public RuntimeObject
{
	// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNative::hmacHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacHash_3;
	// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::encryptor
	intptr_t ___encryptor_4;
};

struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields
{
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::BLOCK_SIZE
	int32_t ___BLOCK_SIZE_0;
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::IV_SIZE
	int32_t ___IV_SIZE_1;
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::HMAC_SIZE
	int32_t ___HMAC_SIZE_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C  : public SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9
{
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____W_7;
};

struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____K_8;
};

// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Security.Cryptography.AesManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241 (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA256::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5 (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::OnNativeLog(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_OnNativeLog_mA01764B83C8B50F283755F07FEC157CD09A85F89 (intptr_t ___userData0, int32_t ___debugLevel1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, bool ___dispose0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingCallback(System.IntPtr,ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egsetEncryptorLoggingCallback_m736B66747E697EEA6A6FA29D8566BFA0152C999C (intptr_t ___userData0, LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* ___callback1, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_egsetEncryptorLoggingLevel_mB88AC2F507852AB4CE1DCBBC5A9B515D3960CD4E (int32_t ___level0, const RuntimeMethod* method) ;
// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::egconstructEncryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncryptorNative_egconstructEncryptor_m121FBC6C244D0FC69F80B0FEF35D6FC89DBAAB20 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pEncryptSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHmacSecret1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdestructEncryptor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdestructEncryptor_m3EDF2C2ADBA1A401C3E48B7B8E366EAABEF7B2F3 (intptr_t ___pEncryptor0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egencrypt(System.IntPtr,System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egencrypt_mCCF60E6AD98071A00A5CF7FC826559D27BA2B83A (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut3, int32_t* ___outSize4, int32_t* ___outOffset5, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egHMAC(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egHMAC_mCC5B6EF3A7D41F7BB316C9C11FC053F502F1E33A (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdecrypt_m6BCE48634D3BB8372EDA257807ACF2296B8EF73D (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSizem2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_GenerateRandomSecret_m5FD5517D674F53A97E8BF2DFD9AE346D1EFEF5FF (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___secretLength0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculatePublicKey_mB89E0C4885E84F68D45A0E16A5A991791D342533 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculateSharedKey_m84FA649EC2D24689E1EE479701FC435C90F73C94 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___otherPartyPublicKey0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___exp0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_GenerateRandom_mC7A55B8F97AE4282BD96520E7BE9E08AE9D96792 (int32_t ___bits0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m22F0871707B92E909B0F11BA027E5B05996EE958 (int32_t ___value0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mF2AF5FB9F649D22D7B6DDA90921D09F406969D27 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mE22E3117362E32E1018A6E80BF5EB7D451FE0794 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_mC43941C5EAAC11E84E67154EDFFE499311A1F47F (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m930D64EE9694812C02B22EAAA056C8F143EF51A9 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m9CC86920A2E7369804EBAB50CAE311A8E0BB13DE (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mE706AD6F5B3198E9B68A6AAAFBAEA4D9D70F0F3F (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m9A46AB5375D8F04605549BF2FF400EB39CD7058E (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_m39C61E0B394B8AAE11FC488223C6CE6D1A75999B (intptr_t ___cryptor0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0 (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m7DFC01B40A3838F4C8E2679C0EA0F1830D27A0E7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m555738433CD04D0ECFF60A1918E0D3B58765DC48 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_LeftShift_mD5907395EAE9860C14D2B627399DD2925C990EC0 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inData0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m126B9BB32EE376C6EA351C7B81D828DCE206DED0 (int64_t ___value0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m76653FE5D4C89AE18F9FFC527CF8746357DD8B51 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m63E9153B6901BA63DF691AE488F05B030C791045 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_mC5A5D9E7F4D2511A6657108784959479B7BC4017 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m8AD9A22E9C23D9606721F874C3DE512E471303F1 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) ;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___radix0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Modulus_mE6A6E0394299EFBFF5CA54D47FEE1A0B145C21CE (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Division_mAD743FA3943D337B31B1623E210DD9B806A30EC2 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___x0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant2, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Addition_m8518866353242B9741D3723CCA6C414535CFF993 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL egconstructEncryptor(uint8_t*, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egdestructEncryptor(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egencrypt(intptr_t, uint8_t*, int32_t, uint8_t*, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egdecrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egHMAC(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egsetEncryptorLoggingCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egsetEncryptorLoggingLevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL egCryptorCreate();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorPublicKey(intptr_t, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDeriveSharedKey(intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorEncrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDecrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egCryptorDispose(intptr_t);
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
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Init(System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Init_m9266A04A195F70744F3DB04BF2BDF4FCB542DF24 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptionSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacSecret1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes2, bool ___chainingModeGCM3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_0 = (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819*)il2cpp_codegen_object_new(AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241(L_0, NULL);
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___encryptionSecret0;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		__this->___encryptorIn_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encryptorIn_0), (void*)L_1);
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_3 = (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819*)il2cpp_codegen_object_new(AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241(L_3, NULL);
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_4 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___encryptionSecret0;
		NullCheck(L_4);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_4, L_5);
		__this->___encryptorOut_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encryptorOut_1), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___hmacSecret1;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_7 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_7, L_6, NULL);
		__this->___hmacsha256In_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmacsha256In_2), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___hmacSecret1;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_9 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_9, L_8, NULL);
		__this->___hmacsha256Out_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmacsha256Out_3), (void*)L_9);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Encrypt(System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Encrypt_mCCDE4B1AEC145C1456D85EBD32F3EB7268F56949 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t* ___offset3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_5 = NULL;
	{
		bool L_0 = ___ivPrefix4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_2 = __this->___encryptorOut_1;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(27 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV() */, L_2);
	}

IL_0015:
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_3 = __this->___encryptorOut_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_00ae;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00ae:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output2;
				int32_t* L_8 = ___offset3;
				int32_t L_9 = *((int32_t*)L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output2;
				NullCheck(L_10);
				int32_t* L_11 = ___offset3;
				int32_t L_12 = *((int32_t*)L_11);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC(L_13, L_7, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), L_12)), NULL);
				V_2 = L_13;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0096_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_2;
							if (!L_14)
							{
								goto IL_00a0_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_2;
							NullCheck(L_15);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
						}

IL_00a0_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						bool L_16 = ___ivPrefix4;
						V_3 = L_16;
						bool L_17 = V_3;
						if (!L_17)
						{
							goto IL_0057_2;
						}
					}
					{
						Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_18 = __this->___encryptorOut_1;
						NullCheck(L_18);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
						L_19 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_18);
						V_4 = L_19;
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = V_2;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
						NullCheck(L_22);
						NullCheck(L_20);
						VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)));
					}

IL_0057_2:
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_2;
						RuntimeObject* L_24 = V_1;
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_25 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_25);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_25, L_23, L_24, 1, NULL);
						V_5 = L_25;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0086_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_26 = V_5;
									if (!L_26)
									{
										goto IL_0092_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_27 = V_5;
									NullCheck(L_27);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
								}

IL_0092_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_28 = V_5;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___data0;
							int32_t L_30 = ___len1;
							NullCheck(L_28);
							VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, L_30);
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_31 = V_5;
							NullCheck(L_31);
							CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05(L_31, NULL);
							int32_t* L_32 = ___offset3;
							int32_t* L_33 = ___offset3;
							int32_t L_34 = *((int32_t*)L_33);
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = V_2;
							NullCheck(L_35);
							int64_t L_36;
							L_36 = VirtualFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_35);
							*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_34, ((int32_t)L_36)));
							goto IL_0093_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0093_2:
					{
						goto IL_00a1_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a1_1:
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::Decrypt(System.Byte[],System.Int32,System.Int32,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNet_Decrypt_mF0C02888DFB10D65C188F9F86E678B5BC5316727 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___len2, int32_t* ___outLen3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_3 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	{
		bool L_0 = ___ivPrefix4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___reusedIvBuffer_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, ((int32_t)16), NULL);
		int32_t L_5 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)16)));
		int32_t L_6 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)16)));
	}

IL_0026:
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_7 = __this->___encryptorIn_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___reusedIvBuffer_4;
		NullCheck(L_7);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_7, L_8);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_9 = __this->___encryptorIn_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_9);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_1;
					if (!L_11)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_12 = V_1;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_00e1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___data0;
				int32_t L_14 = ___offset1;
				int32_t L_15 = ___len2;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC(L_16, L_13, L_14, L_15, NULL);
				V_2 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00cc_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_2;
							if (!L_17)
							{
								goto IL_00d6_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = V_2;
							NullCheck(L_18);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
						}

IL_00d6_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = V_2;
						RuntimeObject* L_20 = V_1;
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_21 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_21);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_21, L_19, L_20, 0, NULL);
						V_3 = L_21;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00c1_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_22 = V_3;
									if (!L_22)
									{
										goto IL_00cb_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_23 = V_3;
									NullCheck(L_23);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
								}

IL_00cb_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								int32_t L_24 = ___len2;
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
								NullCheck(L_25);
								MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_25, L_24, NULL);
								V_4 = L_25;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_00b4_3:
									{// begin finally (depth: 4)
										{
											MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_4;
											if (!L_26)
											{
												goto IL_00c0_3;
											}
										}
										{
											MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_4;
											NullCheck(L_27);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
										}

IL_00c0_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
									}

IL_0062_4:
									{
										CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_28 = V_3;
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___reusedReadBuffer_5;
										NullCheck(L_28);
										int32_t L_30;
										L_30 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, ((int32_t)16));
										V_5 = L_30;
										int32_t L_31 = V_5;
										V_6 = (bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0);
										bool L_32 = V_6;
										if (!L_32)
										{
											goto IL_0092_4;
										}
									}
									{
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_33 = V_4;
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___reusedReadBuffer_5;
										int32_t L_35 = V_5;
										NullCheck(L_33);
										VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, L_35);
									}

IL_0092_4:
									{
										int32_t L_36 = V_5;
										V_7 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
										bool L_37 = V_7;
										if (L_37)
										{
											goto IL_0062_4;
										}
									}
									{
										int32_t* L_38 = ___outLen3;
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_39 = V_4;
										NullCheck(L_39);
										int64_t L_40;
										L_40 = VirtualFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_39);
										*((int32_t*)L_38) = (int32_t)((int32_t)L_40);
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_41 = V_4;
										NullCheck(L_41);
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
										L_42 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_41);
										V_8 = L_42;
										goto IL_00e2;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_8;
		return L_43;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::CreateHMAC(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNet_CreateHMAC_m071584A28037EBD4DB63ADDA88C4E34C917DC567 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_0 = __this->___hmacsha256Out_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_0, L_1, L_2, L_3, NULL);
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_5 = __this->___hmacsha256Out_3;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_5);
		V_0 = L_6;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_7 = __this->___hmacsha256Out_3;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		V_1 = L_8;
		goto IL_002c;
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNet::CheckHMAC(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNet_CheckHMAC_mFECEB4B2E793A5C3A10CFE8EFD4DDA23443506C8 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B10_0 = 0;
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_0 = __this->___hmacsha256In_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___len1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710(L_0, L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)32))), NULL);
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_4 = __this->___hmacsha256In_2;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_4);
		V_0 = L_5;
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_00a1;
	}

IL_0025:
	{
		int32_t L_6 = ___len1;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)32))), ((int32_t)il2cpp_codegen_multiply(L_7, 8))));
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_8, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_12) == ((uint32_t)L_16))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___data0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((!(((uint32_t)L_20) == ((uint32_t)L_24))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___data0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 2));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 2));
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((uint32_t)L_28) == ((uint32_t)L_32))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___data0;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 3));
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_40))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___data0;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 4));
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 4));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((uint32_t)L_44) == ((uint32_t)L_48))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___data0;
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 5));
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_0;
		int32_t L_54 = V_4;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 5));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)L_52) == ((uint32_t)L_56))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___data0;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 6));
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		int32_t L_62 = V_4;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 6));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_60) == ((uint32_t)L_64))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ___data0;
		int32_t L_66 = V_3;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 7));
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_0;
		int32_t L_70 = V_4;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 7));
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		G_B10_0 = ((((int32_t)L_68) == ((int32_t)L_72))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B10_0 = 0;
	}

IL_009b:
	{
		V_1 = (bool)G_B10_0;
		int32_t L_73 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00a1:
	{
		int32_t L_74 = V_2;
		bool L_75 = V_1;
		V_5 = (bool)((int32_t)(((((int32_t)L_74) < ((int32_t)4))? 1 : 0)&(int32_t)L_75));
		bool L_76 = V_5;
		if (L_76)
		{
			goto IL_0025;
		}
	}
	{
		bool L_77 = V_1;
		V_6 = L_77;
		goto IL_00b5;
	}

IL_00b5:
	{
		bool L_78 = V_6;
		return L_78;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet__ctor_m2957F804DA7D56350E57F5D63DD2E79AA7F57963 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___reusedIvBuffer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reusedIvBuffer_4), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___reusedReadBuffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reusedReadBuffer_5), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_EncryptorNative_OnNativeLog_mA01764B83C8B50F283755F07FEC157CD09A85F89(intptr_t ___userData0, int32_t ___debugLevel1, char* ___message2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message2' to managed representation
	String_t* ____message2_unmarshaled = NULL;
	____message2_unmarshaled = il2cpp_codegen_marshal_string_result(___message2);

	// Managed method invocation
	EncryptorNative_OnNativeLog_mA01764B83C8B50F283755F07FEC157CD09A85F89(___userData0, ___debugLevel1, ____message2_unmarshaled, NULL);

}
// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::egconstructEncryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncryptorNative_egconstructEncryptor_m121FBC6C244D0FC69F80B0FEF35D6FC89DBAAB20 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pEncryptSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHmacSecret1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egconstructEncryptor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pEncryptSecret0' to native representation
	uint8_t* ____pEncryptSecret0_marshaled = NULL;
	if (___pEncryptSecret0 != NULL)
	{
		____pEncryptSecret0_marshaled = reinterpret_cast<uint8_t*>((___pEncryptSecret0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pHmacSecret1' to native representation
	uint8_t* ____pHmacSecret1_marshaled = NULL;
	if (___pHmacSecret1 != NULL)
	{
		____pHmacSecret1_marshaled = reinterpret_cast<uint8_t*>((___pHmacSecret1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(egconstructEncryptor)(____pEncryptSecret0_marshaled, ____pHmacSecret1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____pEncryptSecret0_marshaled, ____pHmacSecret1_marshaled);
	#endif

	return returnValue;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdestructEncryptor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdestructEncryptor_m3EDF2C2ADBA1A401C3E48B7B8E366EAABEF7B2F3 (intptr_t ___pEncryptor0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egdestructEncryptor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egdestructEncryptor)(___pEncryptor0);
	#else
	il2cppPInvokeFunc(___pEncryptor0);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egencrypt(System.IntPtr,System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egencrypt_mCCF60E6AD98071A00A5CF7FC826559D27BA2B83A (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut3, int32_t* ___outSize4, int32_t* ___outOffset5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, uint8_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egencrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut3' to native representation
	uint8_t* ____pOut3_marshaled = NULL;
	if (___pOut3 != NULL)
	{
		____pOut3_marshaled = reinterpret_cast<uint8_t*>((___pOut3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egencrypt)(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ____pOut3_marshaled, ___outSize4, ___outOffset5);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ____pOut3_marshaled, ___outSize4, ___outOffset5);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdecrypt_m6BCE48634D3BB8372EDA257807ACF2296B8EF73D (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSizem2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egdecrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut4' to native representation
	uint8_t* ____pOut4_marshaled = NULL;
	if (___pOut4 != NULL)
	{
		____pOut4_marshaled = reinterpret_cast<uint8_t*>((___pOut4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egdecrypt)(___pEncryptor0, ____pIn1_marshaled, ___inSizem2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSizem2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egHMAC(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egHMAC_mCC5B6EF3A7D41F7BB316C9C11FC053F502F1E33A (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egHMAC", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut4' to native representation
	uint8_t* ____pOut4_marshaled = NULL;
	if (___pOut4 != NULL)
	{
		____pOut4_marshaled = reinterpret_cast<uint8_t*>((___pOut4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egHMAC)(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingCallback(System.IntPtr,ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egsetEncryptorLoggingCallback_m736B66747E697EEA6A6FA29D8566BFA0152C999C (intptr_t ___userData0, LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egsetEncryptorLoggingCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egsetEncryptorLoggingCallback)(___userData0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___userData0, ____callback1_marshaled);
	#endif

}
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_egsetEncryptorLoggingLevel_mB88AC2F507852AB4CE1DCBBC5A9B515D3960CD4E (int32_t ___level0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egsetEncryptorLoggingLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egsetEncryptorLoggingLevel)(___level0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___level0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Finalize_m2FC8EBF92FFBE5D6E01DB86F0CBB56631EA1238F (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::OnNativeLog(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_OnNativeLog_mA01764B83C8B50F283755F07FEC157CD09A85F89 (intptr_t ___userData0, int32_t ___debugLevel1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___debugLevel1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_005a;
	}

IL_0021:
	{
		String_t* L_3 = ___message2;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		goto IL_005a;
	}

IL_0034:
	{
		String_t* L_5 = ___message2;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
		goto IL_005a;
	}

IL_0047:
	{
		String_t* L_7 = ___message2;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		goto IL_005a;
	}

IL_005a:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Init(System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Init_mFA0B1EF9B57DE411AA72B1E42D4E78BF5CD832BA (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptionSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacSecret1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes2, bool ___chainingModeGCM3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_OnNativeLog_mA01764B83C8B50F283755F07FEC157CD09A85F89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* L_1 = (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913*)il2cpp_codegen_object_new(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9(L_1, NULL, (intptr_t)((void*)EncryptorNative_OnNativeLog_mA01764B83C8B50F283755F07FEC157CD09A85F89_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		EncryptorNative_egsetEncryptorLoggingCallback_m736B66747E697EEA6A6FA29D8566BFA0152C999C(L_0, L_1, NULL);
		bool L_2;
		L_2 = EncryptorNative_egsetEncryptorLoggingLevel_mB88AC2F507852AB4CE1DCBBC5A9B515D3960CD4E(1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___encryptionSecret0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___hmacSecret1;
		intptr_t L_5;
		L_5 = EncryptorNative_egconstructEncryptor_m121FBC6C244D0FC69F80B0FEF35D6FC89DBAAB20(L_3, L_4, NULL);
		__this->___encryptor_4 = L_5;
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, bool ___dispose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___encryptor_4;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___encryptor_4;
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		EncryptorNative_egdestructEncryptor_m3EDF2C2ADBA1A401C3E48B7B8E366EAABEF7B2F3(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___encryptor_4 = L_5;
	}

IL_002e:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Encrypt(System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Encrypt_mA7D142E8748D80FC67C0BDBEAE7DCBD46B2B88FF (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t* ___offset3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output2;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		intptr_t L_1 = __this->___encryptor_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		int32_t L_3 = ___len1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t* L_5 = ___offset3;
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		EncryptorNative_egencrypt_mCCF60E6AD98071A00A5CF7FC826559D27BA2B83A(L_1, L_2, L_3, L_4, (&V_0), L_5, NULL);
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNative::CreateHMAC(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNative_CreateHMAC_mECA64DE3C87B57B1A553142A5DB67FEEBF5006C7 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hmacHash_3;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___hmacHash_3;
			NullCheck(L_3);
			V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
			intptr_t L_4 = __this->___encryptor_4;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___count2;
			int32_t L_7 = ___offset1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___hmacHash_3;
			il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
			EncryptorNative_egHMAC_mCC5B6EF3A7D41F7BB316C9C11FC053F502F1E33A(L_4, L_5, L_6, L_7, L_8, (&V_1), NULL);
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___hmacHash_3;
		V_2 = L_9;
		goto IL_0044;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		return L_10;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNative::Decrypt(System.Byte[],System.Int32,System.Int32,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNative_Decrypt_m1A3107015C18AA153A1A1FD623AAE6BEECED303D (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___len2, int32_t* ___outLen3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t* L_0 = ___outLen3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		*((int32_t*)L_0) = (int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length));
		intptr_t L_2 = __this->___encryptor_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		int32_t L_4 = ___len2;
		int32_t L_5 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
		int32_t* L_7 = ___outLen3;
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		EncryptorNative_egdecrypt_m6BCE48634D3BB8372EDA257807ACF2296B8EF73D(L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___data0;
		V_0 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::CheckHMAC(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_CheckHMAC_mF2895D3C820FECF5AA1A80BCE5042D03E20D6554 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B11_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hmacHash_3;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___hmacHash_3;
				NullCheck(L_3);
				V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
				intptr_t L_4 = __this->___encryptor_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
				int32_t L_6 = ___len1;
				il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
				int32_t L_7 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___hmacHash_3;
				EncryptorNative_egHMAC_mCC5B6EF3A7D41F7BB316C9C11FC053F502F1E33A(L_4, L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), 0, L_8, (&V_1), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___hmacHash_3;
				V_2 = L_9;
				V_3 = (bool)1;
				V_4 = 0;
				goto IL_00d3_1;
			}

IL_0047_1:
			{
				int32_t L_10 = ___len1;
				il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
				int32_t L_11 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2;
				int32_t L_12 = V_4;
				V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, 8))));
				int32_t L_13 = V_4;
				V_6 = ((int32_t)il2cpp_codegen_multiply(L_13, 8));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___data0;
				int32_t L_15 = V_5;
				NullCheck(L_14);
				int32_t L_16 = L_15;
				uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
				int32_t L_19 = V_6;
				NullCheck(L_18);
				int32_t L_20 = L_19;
				uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
				if ((!(((uint32_t)L_17) == ((uint32_t)L_21))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___data0;
				int32_t L_23 = V_5;
				NullCheck(L_22);
				int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
				int32_t L_27 = V_6;
				NullCheck(L_26);
				int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
				uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				if ((!(((uint32_t)L_25) == ((uint32_t)L_29))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___data0;
				int32_t L_31 = V_5;
				NullCheck(L_30);
				int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 2));
				uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
				int32_t L_35 = V_6;
				NullCheck(L_34);
				int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
				uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
				if ((!(((uint32_t)L_33) == ((uint32_t)L_37))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___data0;
				int32_t L_39 = V_5;
				NullCheck(L_38);
				int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 3));
				uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_2;
				int32_t L_43 = V_6;
				NullCheck(L_42);
				int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 3));
				uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				if ((!(((uint32_t)L_41) == ((uint32_t)L_45))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___data0;
				int32_t L_47 = V_5;
				NullCheck(L_46);
				int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 4));
				uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_2;
				int32_t L_51 = V_6;
				NullCheck(L_50);
				int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 4));
				uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
				if ((!(((uint32_t)L_49) == ((uint32_t)L_53))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___data0;
				int32_t L_55 = V_5;
				NullCheck(L_54);
				int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 5));
				uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_2;
				int32_t L_59 = V_6;
				NullCheck(L_58);
				int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 5));
				uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
				if ((!(((uint32_t)L_57) == ((uint32_t)L_61))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___data0;
				int32_t L_63 = V_5;
				NullCheck(L_62);
				int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 6));
				uint8_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_2;
				int32_t L_67 = V_6;
				NullCheck(L_66);
				int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 6));
				uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
				if ((!(((uint32_t)L_65) == ((uint32_t)L_69))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___data0;
				int32_t L_71 = V_5;
				NullCheck(L_70);
				int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 7));
				uint8_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_2;
				int32_t L_75 = V_6;
				NullCheck(L_74);
				int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 7));
				uint8_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
				G_B11_0 = ((((int32_t)L_73) == ((int32_t)L_77))? 1 : 0);
				goto IL_00cb_1;
			}

IL_00ca_1:
			{
				G_B11_0 = 0;
			}

IL_00cb_1:
			{
				V_3 = (bool)G_B11_0;
				int32_t L_78 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
			}

IL_00d3_1:
			{
				int32_t L_79 = V_4;
				bool L_80 = V_3;
				V_7 = (bool)((int32_t)(((((int32_t)L_79) < ((int32_t)4))? 1 : 0)&(int32_t)L_80));
				bool L_81 = V_7;
				if (L_81)
				{
					goto IL_0047_1;
				}
			}
			{
				bool L_82 = V_3;
				V_8 = L_82;
				goto IL_00f0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f0:
	{
		bool L_83 = V_8;
		return L_83;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative__ctor_m021D66E62997DA345BB611363FE26B3980B7D031 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___hmacHash_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmacHash_3), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative__cctor_m3BCA54E318B67EA1F0D070D7FEA0BB63C8B3DBD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___BLOCK_SIZE_0 = ((int32_t)16);
		((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___IV_SIZE_1 = ((int32_t)16);
		((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2 = ((int32_t)32);
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
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Multicast(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* currentDelegate = reinterpret_cast<LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___userData0, ___level1, ___msg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenInst(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___userData0, ___level1, ___msg2, method);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStatic(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___userData0, ___level1, ___msg2, method);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStaticInvoker(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___userData0, ___level1, ___msg2);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_ClosedStaticInvoker(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___userData0, ___level1, ___msg2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Multicast;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___userData0, ___level1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_mB0961B8367CE25888BF77E12A5515AA595EDA392 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9(L_1, L_0, NULL);
		__this->___prime_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prime_1), (void*)L_1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2;
		L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_m5FD5517D674F53A97E8BF2DFD9AE346D1EFEF5FF(__this, ((int32_t)160), NULL);
		__this->___secret_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secret_2), (void*)L_2);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_mB89E0C4885E84F68D45A0E16A5A991791D342533(__this, NULL);
		__this->___publicKey_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___publicKey_3), (void*)L_3);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m2183C5CD4BEB69F1E9024E5D2F6355DF37497A91 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cryptoKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_0 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_0, NULL);
		__this->___crypto_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_0);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_1 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___cryptoKey0;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_3 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_3, L_4);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_5 = __this->___crypto_4;
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_5, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_get_PublicKey_m6835C493E240517B934D3ECD1B0B0AE5B693F6F0 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = __this->___publicKey_3;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_DeriveSharedKey_m8FB84859C4CB3A1F2CED2562DF55FBD014568646 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___otherPartyPublicKey0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9(L_1, L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = DiffieHellmanCryptoProvider_CalculateSharedKey_m84FA649EC2D24689E1EE479701FC435C90F73C94(__this, L_2, NULL);
		V_1 = L_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8(L_4, NULL);
		__this->___sharedKey_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedKey_5), (void*)L_5);
		SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* L_6 = (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C*)il2cpp_codegen_object_new(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F(L_6, NULL);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_7 = V_3;
					if (!L_7)
					{
						goto IL_003d;
					}
				}
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_9 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___sharedKey_5;
			NullCheck(L_9);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_9, L_10, NULL);
			V_2 = L_11;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_12 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_12, NULL);
		__this->___crypto_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_12);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_13 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_13);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_13, L_14);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_15 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_15);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_15, L_16);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_17 = __this->___crypto_4;
		NullCheck(L_17);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_17, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Encrypt_m2FE785BD6C29653FA2E50ADE2D63DC3CCCC2A563 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___offset1;
			int32_t L_7 = ___count2;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Decrypt_mE867D145E9EC7B883E6A512D7E51DE1F429925A3 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___offset1;
			int32_t L_7 = ___count2;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_mF87C3E8E916083DDAE4F1696E0CE8A1662F1B71F (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculatePublicKey_mB89E0C4885E84F68D45A0E16A5A991791D342533 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = __this->___secret_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = __this->___prime_1;
		NullCheck(L_0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculateSharedKey_m84FA649EC2D24689E1EE479701FC435C90F73C94 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___otherPartyPublicKey0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = __this->___secret_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = __this->___prime_1;
		NullCheck(L_0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_GenerateRandomSecret_m5FD5517D674F53A97E8BF2DFD9AE346D1EFEF5FF (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___secretLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	{
		int32_t L_0 = ___secretLength0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1;
		L_1 = BigInteger_GenerateRandom_mC7A55B8F97AE4282BD96520E7BE9E08AE9D96792(L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = __this->___prime_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_Implicit_m22F0871707B92E909B0F11BA027E5B05996EE958(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5;
		L_5 = BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732(L_3, L_4, NULL);
		bool L_6;
		L_6 = BigInteger_op_GreaterThanOrEqual_mF2AF5FB9F649D22D7B6DDA90921D09F406969D27(L_2, L_5, NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8;
		L_8 = BigInteger_op_Implicit_m22F0871707B92E909B0F11BA027E5B05996EE958(0, NULL);
		bool L_9;
		L_9 = BigInteger_op_Equality_mE22E3117362E32E1018A6E80BF5EB7D451FE0794(L_7, L_8, NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 1;
	}

IL_0032:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0001;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = V_0;
		V_2 = L_11;
		goto IL_003a;
	}

IL_003a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_2;
		return L_12;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__cctor_mD74430A6C87FC890FED39280CD05B809E264AD0B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, ((int64_t)L_0), NULL);
		((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0), (void*)L_1);
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
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_mC43941C5EAAC11E84E67154EDFFE499311A1F47F (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorCreate)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m930D64EE9694812C02B22EAAA056C8F143EF51A9 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorPublicKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorPublicKey)(___cryptor0, ___key1, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ___key1, ___keySize2);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m9CC86920A2E7369804EBAB50CAE311A8E0BB13DE (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDeriveSharedKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___serverPublicKey1' to native representation
	uint8_t* ____serverPublicKey1_marshaled = NULL;
	if (___serverPublicKey1 != NULL)
	{
		____serverPublicKey1_marshaled = reinterpret_cast<uint8_t*>((___serverPublicKey1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDeriveSharedKey)(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mE706AD6F5B3198E9B68A6AAAFBAEA4D9D70F0F3F (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorEncrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___plainData1' to native representation
	uint8_t* ____plainData1_marshaled = NULL;
	if (___plainData1 != NULL)
	{
		____plainData1_marshaled = reinterpret_cast<uint8_t*>((___plainData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorEncrypt)(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m9A46AB5375D8F04605549BF2FF400EB39CD7058E (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDecrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___encodedData1' to native representation
	uint8_t* ____encodedData1_marshaled = NULL;
	if (___encodedData1 != NULL)
	{
		____encodedData1_marshaled = reinterpret_cast<uint8_t*>((___encodedData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDecrypt)(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#endif

	return returnValue;
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_m39C61E0B394B8AAE11FC488223C6CE6D1A75999B (intptr_t ___cryptor0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDispose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egCryptorDispose)(___cryptor0);
	#else
	il2cppPInvokeFunc(___cryptor0);
	#endif

}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_mBD08D87430C43103482A94798B7BC11BF8B15BD3 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = DiffieHellmanCryptoProviderNative_egCryptorCreate_mC43941C5EAAC11E84E67154EDFFE499311A1F47F(NULL);
		__this->___cryptor_0 = L_0;
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sharedKeyHash0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5E96470B64DD3DB50F2E9C79034F94898F64537)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___sharedKeyHash0;
		__this->___sharedKeyHash_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedKeyHash_1), (void*)L_3);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sharedKeyHash_1;
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9AFEBAB5E371E8B24466D4A2FBB943F2E675545)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66_RuntimeMethod_var)));
	}

IL_001a:
	{
		intptr_t L_3 = __this->___cryptor_0;
		int32_t L_4;
		L_4 = DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m930D64EE9694812C02B22EAAA056C8F143EF51A9(L_3, (&V_0), (&V_1), NULL);
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		intptr_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_7, L_8, 0, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		V_4 = L_10;
		goto IL_0040;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_4;
		return L_11;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sharedKeyHash_1;
		V_0 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C674C434602F2C350E8DEC293E708D4CC2CE339)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915_RuntimeMethod_var)));
	}

IL_001a:
	{
		intptr_t L_3 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___otherPartyPublicKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___otherPartyPublicKey0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m9CC86920A2E7369804EBAB50CAE311A8E0BB13DE(L_3, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Encrypt_m5B3F30527EF804357E7A914DBD9C2589AF222BA6 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		intptr_t L_0 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sharedKeyHash_1;
		int32_t L_5;
		L_5 = DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mE706AD6F5B3198E9B68A6AAAFBAEA4D9D70F0F3F(L_0, L_1, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_9, L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		return L_13;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Decrypt_m5361BC3B147ECE265B2E13C2F433F7E0318BCA88 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		intptr_t L_0 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sharedKeyHash_1;
		int32_t L_5;
		L_5 = DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m9A46AB5375D8F04605549BF2FF400EB39CD7058E(L_0, L_1, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_9, L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		return L_13;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m21967A478B1791DB161FEEA6826EC3795D0D4F8E (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->___cryptor_0;
		V_1 = (bool)1;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_4 = __this->___cryptor_0;
		DiffieHellmanCryptoProviderNative_egCryptorDispose_m39C61E0B394B8AAE11FC488223C6CE6D1A75999B(L_4, NULL);
	}

IL_0021:
	{
	}

IL_0022:
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
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OakleyGroups__cctor_mC4B19E0DC216DCABF2EC3F4B2E0593CF999F1CEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0 = ((int32_t)22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3), (void*)L_7);
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
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_0);
		__this->___dataLength_2 = 1;
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_0);
		int64_t L_1 = ___value0;
		V_0 = L_1;
		__this->___dataLength_2 = 0;
		goto IL_004f;
	}

IL_0027:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		int32_t L_3 = __this->___dataLength_2;
		int64_t L_4 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_4&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_5 = ___value0;
		___value0 = ((int64_t)(L_5>>((int32_t)32)));
		int32_t L_6 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_004f:
	{
		int64_t L_7 = ___value0;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = __this->___dataLength_2;
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B5_0 = 0;
	}

IL_005f:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_10 = V_0;
		V_2 = (bool)((((int64_t)L_10) > ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		int64_t L_12 = ___value0;
		if (L_12)
		{
			goto IL_0084;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___data_1;
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)69);
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B10_0 = ((!(((uint32_t)((int32_t)((int32_t)L_15&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 1;
	}

IL_0085:
	{
		V_3 = (bool)G_B10_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_17 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var)));
	}

IL_0094:
	{
		goto IL_00d5;
	}

IL_0097:
	{
		int64_t L_18 = V_0;
		V_4 = (bool)((((int64_t)L_18) < ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00d5;
		}
	}
	{
		int64_t L_20 = ___value0;
		if ((!(((uint64_t)L_20) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_00c2;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___data_1;
		int32_t L_22 = __this->___dataLength_2;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B17_0 = ((((int32_t)((int32_t)((int32_t)L_24&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B17_0 = 1;
	}

IL_00c3:
	{
		V_5 = (bool)G_B17_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_26 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FD880CA5D311C1C431BD0CB104456E35EF84148)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var)));
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		int32_t L_27 = __this->___dataLength_2;
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00eb;
		}
	}
	{
		__this->___dataLength_2 = 1;
	}

IL_00eb:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_2;
		__this->___dataLength_2 = L_2;
		V_0 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___data_1;
		int32_t L_4 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi0;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___dataLength_2;
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B18_0 = 0;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inData0;
		NullCheck(L_0);
		__this->___dataLength_2 = ((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))>>2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inData0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))&3));
		int32_t L_2 = V_0;
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0036:
	{
		int32_t L_5 = __this->___dataLength_2;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_7 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9_RuntimeMethod_var)));
	}

IL_004f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inData0;
		NullCheck(L_9);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1));
		V_4 = 0;
		goto IL_0099;
	}

IL_0067:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		int32_t L_11 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___inData0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___inData0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 2));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___inData0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___inData0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_15<<((int32_t)24))), ((int32_t)((int32_t)L_19<<((int32_t)16))))), ((int32_t)((int32_t)L_23<<8)))), (int32_t)L_27)));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_28, 4));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0099:
	{
		int32_t L_30 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_32 = V_0;
		V_6 = (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00c4;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___data_1;
		int32_t L_35 = __this->___dataLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___inData0;
		NullCheck(L_36);
		int32_t L_37 = 0;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_35, 1))), (uint32_t)L_38);
		goto IL_0111;
	}

IL_00c4:
	{
		int32_t L_39 = V_0;
		V_7 = (bool)((((int32_t)L_39) == ((int32_t)2))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___data_1;
		int32_t L_42 = __this->___dataLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___inData0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___inData0;
		NullCheck(L_46);
		int32_t L_47 = 1;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_45<<8)), (int32_t)L_48)));
		goto IL_0111;
	}

IL_00e8:
	{
		int32_t L_49 = V_0;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)3))? 1 : 0);
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0111;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = __this->___data_1;
		int32_t L_52 = __this->___dataLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___inData0;
		NullCheck(L_53);
		int32_t L_54 = 0;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___inData0;
		NullCheck(L_56);
		int32_t L_57 = 1;
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___inData0;
		NullCheck(L_59);
		int32_t L_60 = 2;
		uint8_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_52, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_55<<((int32_t)16))), ((int32_t)((int32_t)L_58<<8)))), (int32_t)L_61)));
	}

IL_0111:
	{
		goto IL_0121;
	}

IL_0113:
	{
		int32_t L_62 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
	}

IL_0121:
	{
		int32_t L_63 = __this->___dataLength_2;
		if ((((int32_t)L_63) <= ((int32_t)1)))
		{
			goto IL_013e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = __this->___data_1;
		int32_t L_65 = __this->___dataLength_2;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B18_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B18_0;
		bool L_68 = V_9;
		if (L_68)
		{
			goto IL_0113;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___inData0;
		NullCheck(L_0);
		__this->___dataLength_2 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = __this->___dataLength_2;
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_3 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343_RuntimeMethod_var)));
	}

IL_0031:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_4);
		int32_t L_5 = __this->___dataLength_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_2 = 0;
		goto IL_005e;
	}

IL_004b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___data_1;
		int32_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___inData0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		int32_t L_14 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0079;
	}

IL_006b:
	{
		int32_t L_16 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0079:
	{
		int32_t L_17 = __this->___dataLength_2;
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			goto IL_0096;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___data_1;
		int32_t L_19 = __this->___dataLength_2;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B10_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B10_0 = 0;
	}

IL_0097:
	{
		V_4 = (bool)G_B10_0;
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m126B9BB32EE376C6EA351C7B81D828DCE206DED0 (int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m22F0871707B92E909B0F11BA027E5B05996EE958 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		int32_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, ((int64_t)L_0), NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Addition_m8518866353242B9741D3723CCA6C414535CFF993 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_9 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B2_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B3_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___dataLength_2;
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dataLength_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->___dataLength_2;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->___dataLength_2 = G_B3_0;
		V_1 = ((int64_t)0);
		V_3 = 0;
		goto IL_0061;
	}

IL_0030:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_14), ((int64_t)(uint64_t)L_19))), L_20));
		int64_t L_21 = V_4;
		V_1 = ((int64_t)(L_21>>((int32_t)32)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		NullCheck(L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___data_1;
		int32_t L_24 = V_3;
		int64_t L_25 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_25&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0061:
	{
		int32_t L_27 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_2;
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_31 = V_1;
		if (!L_31)
		{
			goto IL_007f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___dataLength_2;
		G_B9_0 = ((((int32_t)L_33) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B9_0 = 0;
	}

IL_0080:
	{
		V_6 = (bool)G_B9_0;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00a5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = V_0;
		NullCheck(L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = L_35->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->___dataLength_2;
		int64_t L_39 = V_1;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)((int32_t)(uint32_t)L_39));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_2;
		NullCheck(L_41);
		L_41->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00a5:
	{
		goto IL_00b5;
	}

IL_00a7:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_2;
		NullCheck(L_44);
		L_44->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00b5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_2;
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_2;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B16_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B16_0 = 0;
	}

IL_00d3:
	{
		V_7 = (bool)G_B16_0;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_00a7;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_1;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = L_60->___data_1;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)((int32_t)((int32_t)L_59&((int32_t)-2147483648LL)))) == ((uint32_t)((int32_t)((int32_t)L_64&((int32_t)-2147483648LL)))))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_1;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = L_70->___data_1;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B20_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B20_0 = 0;
	}

IL_011e:
	{
		V_8 = (bool)G_B20_0;
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_012b;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_76 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0(L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Addition_m8518866353242B9741D3723CCA6C414535CFF993_RuntimeMethod_var)));
	}

IL_012b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_0;
		V_9 = L_77;
		goto IL_0130;
	}

IL_0130:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_9;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_12 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B2_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B3_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___dataLength_2;
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dataLength_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->___dataLength_2;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->___dataLength_2 = G_B3_0;
		V_1 = ((int64_t)0);
		V_3 = 0;
		goto IL_006f;
	}

IL_0030:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_14), ((int64_t)(uint64_t)L_19))), L_20));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_1;
		int32_t L_23 = V_3;
		int64_t L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_24&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_25 = V_4;
		V_5 = (bool)((((int64_t)L_25) < ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_006a;
	}

IL_0067:
	{
		V_1 = ((int64_t)0);
	}

IL_006a:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006f:
	{
		int32_t L_28 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___dataLength_2;
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_32 = V_1;
		V_7 = (bool)((!(((uint64_t)L_32) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->___dataLength_2;
		V_8 = L_35;
		goto IL_00a4;
	}

IL_0094:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_0;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		int32_t L_38 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)(-1));
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00a4:
	{
		int32_t L_40 = V_8;
		V_9 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_0094;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_42 = V_0;
		NullCheck(L_42);
		L_42->___dataLength_2 = ((int32_t)70);
	}

IL_00b9:
	{
		goto IL_00c9;
	}

IL_00bb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_2;
		NullCheck(L_44);
		L_44->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00c9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_2;
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_2;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B19_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B19_0 = 0;
	}

IL_00e7:
	{
		V_10 = (bool)G_B19_0;
		bool L_54 = V_10;
		if (L_54)
		{
			goto IL_00bb;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_1;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = L_60->___data_1;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((((int32_t)((int32_t)((int32_t)L_59&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_64&((int32_t)-2147483648LL))))))
		{
			goto IL_0131;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_1;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = L_70->___data_1;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B23_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0132;
	}

IL_0131:
	{
		G_B23_0 = 0;
	}

IL_0132:
	{
		V_11 = (bool)G_B23_0;
		bool L_75 = V_11;
		if (!L_75)
		{
			goto IL_013f;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_76 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0(L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732_RuntimeMethod_var)));
	}

IL_013f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_0;
		V_12 = L_77;
		goto IL_0144;
	}

IL_0144:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_12;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_20 = NULL;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = ((int32_t)69);
		V_1 = (bool)0;
		V_2 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
			NullCheck(L_0);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
			int32_t L_2 = V_0;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_5 = V_4;
			if (!L_5)
			{
				goto IL_002c_1;
			}
		}
		{
			V_1 = (bool)1;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi10;
			il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7;
			L_7 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_6, NULL);
			___bi10 = L_7;
		}

IL_002c_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi21;
			NullCheck(L_8);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_1;
			int32_t L_10 = V_0;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_12&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_004f_1;
			}
		}
		{
			V_2 = (bool)1;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___bi21;
			il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
			L_15 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_14, NULL);
			___bi21 = L_15;
		}

IL_004f_1:
		{
			goto IL_0057;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0057;
	}// end catch (depth: 1)

IL_0057:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_16, NULL);
		V_3 = L_16;
	}
	try
	{// begin try (depth: 1)
		{
			V_6 = 0;
			goto IL_010a_1;
		}

IL_0066_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___bi10;
			NullCheck(L_17);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_1;
			int32_t L_19 = V_6;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			V_8 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
			bool L_22 = V_8;
			if (!L_22)
			{
				goto IL_007e_1;
			}
		}
		{
			goto IL_0104_1;
		}

IL_007e_1:
		{
			V_7 = ((int64_t)0);
			V_9 = 0;
			int32_t L_23 = V_6;
			V_10 = L_23;
			goto IL_00d4_1;
		}

IL_008b_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi10;
			NullCheck(L_24);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___data_1;
			int32_t L_26 = V_6;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = ___bi21;
			NullCheck(L_29);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_1;
			int32_t L_31 = V_9;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_3;
			NullCheck(L_34);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___data_1;
			int32_t L_36 = V_10;
			NullCheck(L_35);
			int32_t L_37 = L_36;
			uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			uint64_t L_39 = V_7;
			V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_28), ((int64_t)(uint64_t)L_33))), ((int64_t)(uint64_t)L_38))), (int64_t)L_39));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_3;
			NullCheck(L_40);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_1;
			int32_t L_42 = V_10;
			uint64_t L_43 = V_11;
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_43&((int64_t)(uint64_t)((uint32_t)(-1)))))));
			uint64_t L_44 = V_11;
			V_7 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
			int32_t L_45 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			int32_t L_46 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		}

IL_00d4_1:
		{
			int32_t L_47 = V_9;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = ___bi21;
			NullCheck(L_48);
			int32_t L_49 = L_48->___dataLength_2;
			V_12 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
			bool L_50 = V_12;
			if (L_50)
			{
				goto IL_008b_1;
			}
		}
		{
			uint64_t L_51 = V_7;
			V_13 = (bool)((!(((uint64_t)L_51) <= ((uint64_t)((int64_t)0))))? 1 : 0);
			bool L_52 = V_13;
			if (!L_52)
			{
				goto IL_0103_1;
			}
		}
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_3;
			NullCheck(L_53);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_1;
			int32_t L_55 = V_6;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = ___bi21;
			NullCheck(L_56);
			int32_t L_57 = L_56->___dataLength_2;
			uint64_t L_58 = V_7;
			NullCheck(L_54);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_55, L_57))), (uint32_t)((int32_t)(uint32_t)L_58));
		}

IL_0103_1:
		{
		}

IL_0104_1:
		{
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		}

IL_010a_1:
		{
			int32_t L_60 = V_6;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_61 = ___bi10;
			NullCheck(L_61);
			int32_t L_62 = L_61->___dataLength_2;
			V_14 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
			bool L_63 = V_14;
			if (L_63)
			{
				goto IL_0066_1;
			}
		}
		{
			goto IL_012d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0120;
		}
		throw e;
	}

CATCH_0120:
	{// begin catch(System.Exception)
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_64 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_64);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_64, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_012d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_66 = ___bi10;
		NullCheck(L_66);
		int32_t L_67 = L_66->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_68 = ___bi21;
		NullCheck(L_68);
		int32_t L_69 = L_68->___dataLength_2;
		NullCheck(L_65);
		L_65->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_67, L_69));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = V_3;
		NullCheck(L_70);
		int32_t L_71 = L_70->___dataLength_2;
		V_15 = (bool)((((int32_t)L_71) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_0158;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = V_3;
		NullCheck(L_73);
		L_73->___dataLength_2 = ((int32_t)70);
	}

IL_0158:
	{
		goto IL_0168;
	}

IL_015a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75 = L_74;
		NullCheck(L_75);
		int32_t L_76 = L_75->___dataLength_2;
		NullCheck(L_75);
		L_75->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
	}

IL_0168:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_3;
		NullCheck(L_77);
		int32_t L_78 = L_77->___dataLength_2;
		if ((((int32_t)L_78) <= ((int32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79 = V_3;
		NullCheck(L_79);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = L_79->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = V_3;
		NullCheck(L_81);
		int32_t L_82 = L_81->___dataLength_2;
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)il2cpp_codegen_subtract(L_82, 1));
		uint32_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		G_B28_0 = ((((int32_t)L_84) == ((int32_t)0))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B28_0 = 0;
	}

IL_0186:
	{
		V_16 = (bool)G_B28_0;
		bool L_85 = V_16;
		if (L_85)
		{
			goto IL_015a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_86 = V_3;
		NullCheck(L_86);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = L_86->___data_1;
		int32_t L_88 = V_0;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_17 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_90&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_91 = V_17;
		if (!L_91)
		{
			goto IL_022d;
		}
	}
	{
		bool L_92 = V_1;
		bool L_93 = V_2;
		if ((((int32_t)L_92) == ((int32_t)L_93)))
		{
			goto IL_01bc;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = V_3;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_1;
		int32_t L_96 = V_0;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B33_0 = ((((int32_t)L_98) == ((int32_t)((int32_t)-2147483648LL)))? 1 : 0);
		goto IL_01bd;
	}

IL_01bc:
	{
		G_B33_0 = 0;
	}

IL_01bd:
	{
		V_18 = (bool)G_B33_0;
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_0222;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_3;
		NullCheck(L_100);
		int32_t L_101 = L_100->___dataLength_2;
		V_19 = (bool)((((int32_t)L_101) == ((int32_t)1))? 1 : 0);
		bool L_102 = V_19;
		if (!L_102)
		{
			goto IL_01d8;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103 = V_3;
		V_20 = L_103;
		goto IL_0249;
	}

IL_01d8:
	{
		V_21 = (bool)1;
		V_22 = 0;
		goto IL_01fe;
	}

IL_01e1:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_3;
		NullCheck(L_104);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = L_104->___data_1;
		int32_t L_106 = V_22;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_23 = (bool)((!(((uint32_t)L_108) <= ((uint32_t)0)))? 1 : 0);
		bool L_109 = V_23;
		if (!L_109)
		{
			goto IL_01f7;
		}
	}
	{
		V_21 = (bool)0;
	}

IL_01f7:
	{
		int32_t L_110 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_01fe:
	{
		int32_t L_111 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_112 = V_3;
		NullCheck(L_112);
		int32_t L_113 = L_112->___dataLength_2;
		bool L_114 = V_21;
		V_24 = (bool)((int32_t)(((((int32_t)L_111) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, 1))))? 1 : 0)&(int32_t)L_114));
		bool L_115 = V_24;
		if (L_115)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_116 = V_21;
		V_25 = L_116;
		bool L_117 = V_25;
		if (!L_117)
		{
			goto IL_0220;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_118 = V_3;
		V_20 = L_118;
		goto IL_0249;
	}

IL_0220:
	{
	}

IL_0222:
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_119 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_119);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_119, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_119, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD_RuntimeMethod_var)));
	}

IL_022d:
	{
		bool L_120 = V_1;
		bool L_121 = V_2;
		V_26 = (bool)((((int32_t)((((int32_t)L_120) == ((int32_t)L_121))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_122 = V_26;
		if (!L_122)
		{
			goto IL_0244;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_123 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_124;
		L_124 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_123, NULL);
		V_20 = L_124;
		goto IL_0249;
	}

IL_0244:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_125 = V_3;
		V_20 = L_125;
		goto IL_0249;
	}

IL_0249:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_126 = V_20;
		return L_126;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_LeftShift_mD5907395EAE9860C14D2B627399DD2925C990EC0 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_1, L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		int32_t L_5 = ___shiftVal1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = BigInteger_shiftLeft_m7DFC01B40A3838F4C8E2679C0EA0F1830D27A0E7(L_4, L_5, NULL);
		NullCheck(L_2);
		L_2->___dataLength_2 = L_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_1;
		return L_8;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m7DFC01B40A3838F4C8E2679C0EA0F1830D27A0E7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = ((int32_t)32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___buffer0;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000e;
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___buffer0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B5_0 = 0;
	}

IL_001d:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_3 = L_8;
		goto IL_00a2;
	}

IL_0025:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_12 = V_3;
		V_0 = L_12;
	}

IL_0032:
	{
		V_4 = ((int64_t)0);
		V_6 = 0;
		goto IL_0067;
	}

IL_003b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___buffer0;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_0;
		V_7 = ((int64_t)(((int64_t)(uint64_t)L_16)<<((int32_t)(L_17&((int32_t)63)))));
		uint64_t L_18 = V_7;
		uint64_t L_19 = V_4;
		V_7 = ((int64_t)((int64_t)L_18|(int64_t)L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___buffer0;
		int32_t L_21 = V_6;
		uint64_t L_22 = V_7;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_22&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		uint64_t L_23 = V_7;
		V_4 = ((int64_t)((uint64_t)L_23>>((int32_t)32)));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0067:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_28 = V_4;
		V_9 = (bool)((!(((uint64_t)L_28) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_30 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___buffer0;
		NullCheck(L_31);
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_30, 1))) > ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_009c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___buffer0;
		int32_t L_34 = V_1;
		uint64_t L_35 = V_4;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)((int32_t)(uint32_t)L_35));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_009c:
	{
	}

IL_009d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_37, L_38));
	}

IL_00a2:
	{
		int32_t L_39 = V_3;
		V_11 = (bool)((((int32_t)L_39) > ((int32_t)0))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_41 = V_1;
		V_12 = L_41;
		goto IL_00b4;
	}

IL_00b4:
	{
		int32_t L_42 = V_12;
		return L_42;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m76653FE5D4C89AE18F9FFC527CF8746357DD8B51 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B19_0 = 0;
	{
		V_0 = ((int32_t)32);
		V_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___buffer0;
		NullCheck(L_0);
		V_2 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_0010;
	}

IL_000c:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}

IL_0010:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___buffer0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_4 = L_8;
		goto IL_008c;
	}

IL_0028:
	{
		int32_t L_9 = V_4;
		int32_t L_10 = V_0;
		V_6 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_4;
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_13));
	}

IL_003e:
	{
		V_5 = ((int64_t)0);
		int32_t L_14 = V_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0077;
	}

IL_0049:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___buffer0;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_0;
		V_8 = ((int64_t)((uint64_t)((int64_t)(uint64_t)L_18)>>((int32_t)(L_19&((int32_t)63)))));
		uint64_t L_20 = V_8;
		uint64_t L_21 = V_5;
		V_8 = ((int64_t)((int64_t)L_20|(int64_t)L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___buffer0;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_1;
		V_5 = ((int64_t)(((int64_t)(uint64_t)L_25)<<((int32_t)(L_26&((int32_t)63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___buffer0;
		int32_t L_28 = V_7;
		uint64_t L_29 = V_8;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)((int32_t)(uint32_t)L_29));
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_0077:
	{
		int32_t L_31 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_9;
		if (L_32)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, L_34));
	}

IL_008c:
	{
		int32_t L_35 = V_4;
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_009d;
	}

IL_0099:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_009d:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___buffer0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B19_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B19_0 = 0;
	}

IL_00ac:
	{
		V_11 = (bool)G_B19_0;
		bool L_43 = V_11;
		if (L_43)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_44 = V_2;
		V_12 = L_44;
		goto IL_00b7;
	}

IL_00b7:
	{
		int32_t L_45 = V_12;
		return L_45;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		int32_t L_1 = L_0->___dataLength_2;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_7, NULL);
		V_5 = L_7;
		goto IL_010c;
	}

IL_002a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_9, L_8, NULL);
		V_0 = L_9;
		V_6 = 0;
		goto IL_004f;
	}

IL_0036:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = V_0;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = ___bi10;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___data_1;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((~L_17)));
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004f:
	{
		int32_t L_19 = V_6;
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = ((int64_t)1);
		V_3 = 0;
		goto IL_0089;
	}

IL_0062:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = ((int64_t)(uint64_t)L_25);
		int64_t L_26 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		int32_t L_29 = V_3;
		int64_t L_30 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_30&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_31 = V_1;
		V_2 = ((int64_t)(L_31>>((int32_t)32)));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0089:
	{
		int64_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_34 = V_3;
		G_B13_0 = ((((int32_t)L_34) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
	}

IL_0094:
	{
		V_8 = (bool)G_B13_0;
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0062;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___bi10;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)69);
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_1;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)69);
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = (bool)((((int32_t)((int32_t)((int32_t)L_39&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_43&((int32_t)-2147483648LL)))))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_00cb;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_45 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_45);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F35A290E0C52584695F3B0342580DAB07F7B8D3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25_RuntimeMethod_var)));
	}

IL_00cb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		L_46->___dataLength_2 = ((int32_t)70);
		goto IL_00e3;
	}

IL_00d5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_2;
		NullCheck(L_48);
		L_48->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_00e3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_2;
		if ((((int32_t)L_51) <= ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52 = V_0;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___dataLength_2;
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		uint32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		G_B21_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B21_0 = 0;
	}

IL_0101:
	{
		V_10 = (bool)G_B21_0;
		bool L_58 = V_10;
		if (L_58)
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = V_0;
		V_5 = L_59;
		goto IL_010c;
	}

IL_010c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = V_5;
		return L_60;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mE22E3117362E32E1018A6E80BF5EB7D451FE0794 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m8F9DCA3E1288A4EB9FC05739BB9BAF15031FFD40 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)CastclassClass((RuntimeObject*)L_0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var));
		int32_t L_1 = __this->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_2;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_004a;
	}

IL_0025:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_1;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = V_0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0045:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = __this->___dataLength_2;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0025;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_mE19E5E597434F45BA186E6843010DB4AE3F8FEBB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m555738433CD04D0ECFF60A1918E0D3B58765DC48 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_2;
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_2;
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___data_1;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_1;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = L_51->___data_1;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) <= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m63E9153B6901BA63DF691AE488F05B030C791045 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_2;
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_2;
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___data_1;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_1;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = L_51->___data_1;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) >= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mF2AF5FB9F649D22D7B6DDA90921D09F406969D27 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_mE22E3117362E32E1018A6E80BF5EB7D451FE0794(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_GreaterThan_m555738433CD04D0ECFF60A1918E0D3B58765DC48(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m8AD9A22E9C23D9606721F874C3DE512E471303F1 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	bool V_20 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_21 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_22 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	int32_t V_33 = 0;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B42_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		V_3 = ((int32_t)-2147483648LL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___bi21;
		NullCheck(L_7);
		int32_t L_8 = L_7->___dataLength_2;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		V_5 = 0;
		V_6 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint32_t L_12 = V_3;
		V_3 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0044:
	{
		uint32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_14 = V_4;
		uint32_t L_15 = V_3;
		G_B5_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_14 = (bool)G_B5_0;
		bool L_16 = V_14;
		if (L_16)
		{
			goto IL_0038;
		}
	}
	{
		V_15 = 0;
		goto IL_006f;
	}

IL_005c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
		int32_t L_18 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi10;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_1;
		int32_t L_21 = V_15;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_23);
		int32_t L_24 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006f:
	{
		int32_t L_25 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi10;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_2;
		V_16 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_16;
		if (L_28)
		{
			goto IL_005c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		int32_t L_30 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = BigInteger_shiftLeft_m7DFC01B40A3838F4C8E2679C0EA0F1830D27A0E7(L_29, L_30, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___bi21;
		int32_t L_33 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34;
		L_34 = BigInteger_op_LeftShift_mD5907395EAE9860C14D2B627399DD2925C990EC0(L_32, L_33, NULL);
		___bi21 = L_34;
		int32_t L_35 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___bi21;
		NullCheck(L_36);
		int32_t L_37 = L_36->___dataLength_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_35, L_37));
		int32_t L_38 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = ___bi21;
		NullCheck(L_39);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = ___bi21;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_2;
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		uint32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = ((int64_t)(uint64_t)L_44);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = ___bi21;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = ___bi21;
		NullCheck(L_47);
		int32_t L_48 = L_47->___dataLength_2;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_48, 2));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_10 = ((int64_t)(uint64_t)L_50);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		int32_t L_52 = L_51->___dataLength_2;
		V_11 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_53);
		V_12 = L_54;
		goto IL_0215;
	}

IL_00dd:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_2;
		int32_t L_56 = V_8;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_2;
		int32_t L_60 = V_8;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_58)<<((int32_t)32))), ((int64_t)(uint64_t)L_62)));
		uint64_t L_63 = V_17;
		uint64_t L_64 = V_9;
		V_18 = ((int64_t)((uint64_t)(int64_t)L_63/(uint64_t)(int64_t)L_64));
		uint64_t L_65 = V_17;
		uint64_t L_66 = V_9;
		V_19 = ((int64_t)((uint64_t)(int64_t)L_65%(uint64_t)(int64_t)L_66));
		V_20 = (bool)0;
		goto IL_0158;
	}

IL_0103:
	{
		V_20 = (bool)1;
		uint64_t L_67 = V_18;
		if ((((int64_t)L_67) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_012a;
		}
	}
	{
		uint64_t L_68 = V_18;
		uint64_t L_69 = V_10;
		uint64_t L_70 = V_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_2;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 2));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B14_0 = ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_68, (int64_t)L_69))) <= ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_70<<((int32_t)32))), ((int64_t)(uint64_t)L_74))))))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B14_0 = 1;
	}

IL_012b:
	{
		V_24 = (bool)G_B14_0;
		bool L_75 = V_24;
		if (!L_75)
		{
			goto IL_0157;
		}
	}
	{
		uint64_t L_76 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_76, ((int64_t)1)));
		uint64_t L_77 = V_19;
		uint64_t L_78 = V_9;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, (int64_t)L_78));
		uint64_t L_79 = V_19;
		V_25 = (bool)((!(((uint64_t)L_79) >= ((uint64_t)((int64_t)4294967296LL))))? 1 : 0);
		bool L_80 = V_25;
		if (!L_80)
		{
			goto IL_0156;
		}
	}
	{
		V_20 = (bool)0;
	}

IL_0156:
	{
	}

IL_0157:
	{
	}

IL_0158:
	{
		bool L_81 = V_20;
		V_26 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_26;
		if (L_82)
		{
			goto IL_0103;
		}
	}
	{
		V_27 = 0;
		goto IL_017a;
	}

IL_0168:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_12;
		int32_t L_84 = V_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = V_2;
		int32_t L_86 = V_8;
		int32_t L_87 = V_27;
		NullCheck(L_85);
		int32_t L_88 = ((int32_t)il2cpp_codegen_subtract(L_86, L_87));
		uint32_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (uint32_t)L_89);
		int32_t L_90 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_017a:
	{
		int32_t L_91 = V_27;
		int32_t L_92 = V_11;
		V_28 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_28;
		if (L_93)
		{
			goto IL_0168;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_12;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343(L_95, L_94, NULL);
		V_21 = L_95;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_96 = ___bi21;
		uint64_t L_97 = V_18;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_98;
		L_98 = BigInteger_op_Implicit_m126B9BB32EE376C6EA351C7B81D828DCE206DED0(L_97, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_99;
		L_99 = BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD(L_96, L_98, NULL);
		V_22 = L_99;
		goto IL_01b3;
	}

IL_01a0:
	{
		uint64_t L_100 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_100, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_102 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103;
		L_103 = BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732(L_101, L_102, NULL);
		V_22 = L_103;
	}

IL_01b3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_105 = V_21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_106;
		L_106 = BigInteger_op_GreaterThan_m555738433CD04D0ECFF60A1918E0D3B58765DC48(L_104, L_105, NULL);
		V_29 = L_106;
		bool L_107 = V_29;
		if (L_107)
		{
			goto IL_01a0;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = V_21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_109 = V_22;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_110;
		L_110 = BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732(L_108, L_109, NULL);
		V_23 = L_110;
		V_30 = 0;
		goto IL_01f0;
	}

IL_01d2:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = V_2;
		int32_t L_112 = V_8;
		int32_t L_113 = V_30;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_114 = V_23;
		NullCheck(L_114);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = L_114->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = ___bi21;
		NullCheck(L_116);
		int32_t L_117 = L_116->___dataLength_2;
		int32_t L_118 = V_30;
		NullCheck(L_115);
		int32_t L_119 = ((int32_t)il2cpp_codegen_subtract(L_117, L_118));
		uint32_t L_120 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_112, L_113))), (uint32_t)L_120);
		int32_t L_121 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_01f0:
	{
		int32_t L_122 = V_30;
		int32_t L_123 = V_11;
		V_31 = (bool)((((int32_t)L_122) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_31;
		if (L_124)
		{
			goto IL_01d2;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = V_0;
		int32_t L_126 = V_6;
		int32_t L_127 = L_126;
		V_6 = ((int32_t)il2cpp_codegen_add(L_127, 1));
		uint64_t L_128 = V_18;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_127), (uint32_t)((int32_t)(uint32_t)L_128));
		int32_t L_129 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_129, 1));
		int32_t L_130 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_130, 1));
	}

IL_0215:
	{
		int32_t L_131 = V_7;
		V_32 = (bool)((((int32_t)L_131) > ((int32_t)0))? 1 : 0);
		bool L_132 = V_32;
		if (L_132)
		{
			goto IL_00dd;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_133 = ___outQuotient2;
		int32_t L_134 = V_6;
		NullCheck(L_133);
		L_133->___dataLength_2 = L_134;
		V_13 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_135 = ___outQuotient2;
		NullCheck(L_135);
		int32_t L_136 = L_135->___dataLength_2;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_136, 1));
		goto IL_0253;
	}

IL_023a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_137 = ___outQuotient2;
		NullCheck(L_137);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = L_137->___data_1;
		int32_t L_139 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_0;
		int32_t L_141 = V_33;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(L_139), (uint32_t)L_143);
		int32_t L_144 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_144, 1));
		int32_t L_145 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_0253:
	{
		int32_t L_146 = V_33;
		V_34 = (bool)((((int32_t)((((int32_t)L_146) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_147 = V_34;
		if (L_147)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_0273;
	}

IL_0263:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_148 = ___outQuotient2;
		NullCheck(L_148);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = L_148->___data_1;
		int32_t L_150 = V_13;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)0);
		int32_t L_151 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_0273:
	{
		int32_t L_152 = V_13;
		V_35 = (bool)((((int32_t)L_152) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_153 = V_35;
		if (L_153)
		{
			goto IL_0263;
		}
	}
	{
		goto IL_028f;
	}

IL_0281:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_154 = ___outQuotient2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155 = L_154;
		NullCheck(L_155);
		int32_t L_156 = L_155->___dataLength_2;
		NullCheck(L_155);
		L_155->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_156, 1));
	}

IL_028f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_157 = ___outQuotient2;
		NullCheck(L_157);
		int32_t L_158 = L_157->___dataLength_2;
		if ((((int32_t)L_158) <= ((int32_t)1)))
		{
			goto IL_02ac;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_159 = ___outQuotient2;
		NullCheck(L_159);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_160 = L_159->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_161 = ___outQuotient2;
		NullCheck(L_161);
		int32_t L_162 = L_161->___dataLength_2;
		NullCheck(L_160);
		int32_t L_163 = ((int32_t)il2cpp_codegen_subtract(L_162, 1));
		uint32_t L_164 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		G_B42_0 = ((((int32_t)L_164) == ((int32_t)0))? 1 : 0);
		goto IL_02ad;
	}

IL_02ac:
	{
		G_B42_0 = 0;
	}

IL_02ad:
	{
		V_36 = (bool)G_B42_0;
		bool L_165 = V_36;
		if (L_165)
		{
			goto IL_0281;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_166 = ___outQuotient2;
		NullCheck(L_166);
		int32_t L_167 = L_166->___dataLength_2;
		V_37 = (bool)((((int32_t)L_167) == ((int32_t)0))? 1 : 0);
		bool L_168 = V_37;
		if (!L_168)
		{
			goto IL_02c9;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_169 = ___outQuotient2;
		NullCheck(L_169);
		L_169->___dataLength_2 = 1;
	}

IL_02c9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_170 = ___outRemainder3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = V_2;
		int32_t L_172 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_173;
		L_173 = BigInteger_shiftRight_m76653FE5D4C89AE18F9FFC527CF8746357DD8B51(L_171, L_172, NULL);
		NullCheck(L_170);
		L_170->___dataLength_2 = L_173;
		V_13 = 0;
		goto IL_02ef;
	}

IL_02dc:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_174 = ___outRemainder3;
		NullCheck(L_174);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = L_174->___data_1;
		int32_t L_176 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = V_2;
		int32_t L_178 = V_13;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		uint32_t L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(L_176), (uint32_t)L_180);
		int32_t L_181 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_181, 1));
	}

IL_02ef:
	{
		int32_t L_182 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_183 = ___outRemainder3;
		NullCheck(L_183);
		int32_t L_184 = L_183->___dataLength_2;
		V_38 = (bool)((((int32_t)L_182) < ((int32_t)L_184))? 1 : 0);
		bool L_185 = V_38;
		if (L_185)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_0311;
	}

IL_0301:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_186 = ___outRemainder3;
		NullCheck(L_186);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = L_186->___data_1;
		int32_t L_188 = V_13;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_188), (uint32_t)0);
		int32_t L_189 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_189, 1));
	}

IL_0311:
	{
		int32_t L_190 = V_13;
		V_39 = (bool)((((int32_t)L_190) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_191 = V_39;
		if (L_191)
		{
			goto IL_0301;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_mC5A5D9E7F4D2511A6657108784959479B7BC4017 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		V_1 = 0;
		V_6 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___outRemainder3;
		NullCheck(L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1->___data_1;
		int32_t L_3 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi10;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		int32_t L_9 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		int32_t L_10 = V_6;
		V_7 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_11 = V_7;
		if (L_11)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = ___bi10;
		NullCheck(L_13);
		int32_t L_14 = L_13->___dataLength_2;
		NullCheck(L_12);
		L_12->___dataLength_2 = L_14;
		goto IL_0050;
	}

IL_0042:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->___dataLength_2;
		NullCheck(L_16);
		L_16->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0050:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = ___outRemainder3;
		NullCheck(L_18);
		int32_t L_19 = L_18->___dataLength_2;
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___outRemainder3;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___outRemainder3;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_2;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint32_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		G_B8_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 0;
	}

IL_006e:
	{
		V_8 = (bool)G_B8_0;
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_0042;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi21;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		NullCheck(L_28);
		int32_t L_29 = 0;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = ((int64_t)(uint64_t)L_30);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___outRemainder3;
		NullCheck(L_31);
		int32_t L_32 = L_31->___dataLength_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___outRemainder3;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_4 = ((int64_t)(uint64_t)L_37);
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_2;
		V_9 = (bool)((((int32_t)((!(((uint64_t)L_38) >= ((uint64_t)L_39)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00bf;
		}
	}
	{
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_2;
		V_10 = ((int64_t)((uint64_t)(int64_t)L_41/(uint64_t)(int64_t)L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_0;
		int32_t L_44 = V_1;
		int32_t L_45 = L_44;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		uint64_t L_46 = V_10;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint32_t)((int32_t)(uint32_t)L_46));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = ___outRemainder3;
		NullCheck(L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = L_47->___data_1;
		int32_t L_49 = V_3;
		uint64_t L_50 = V_4;
		uint64_t L_51 = V_2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_50%(uint64_t)(int64_t)L_51))));
	}

IL_00bf:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		goto IL_010d;
	}

IL_00c5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___outRemainder3;
		NullCheck(L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_1;
		int32_t L_55 = V_3;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = ___outRemainder3;
		NullCheck(L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58->___data_1;
		int32_t L_60 = V_3;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_57)<<((int32_t)32))), ((int64_t)(uint64_t)L_62)));
		uint64_t L_63 = V_4;
		uint64_t L_64 = V_2;
		V_11 = ((int64_t)((uint64_t)(int64_t)L_63/(uint64_t)(int64_t)L_64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		V_1 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		uint64_t L_68 = V_11;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint32_t)((int32_t)(uint32_t)L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = ___outRemainder3;
		NullCheck(L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = L_69->___data_1;
		int32_t L_71 = V_3;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 1))), (uint32_t)0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = ___outRemainder3;
		NullCheck(L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = L_72->___data_1;
		int32_t L_74 = V_3;
		int32_t L_75 = L_74;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		uint64_t L_76 = V_4;
		uint64_t L_77 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_76%(uint64_t)(int64_t)L_77))));
	}

IL_010d:
	{
		int32_t L_78 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_78) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_12;
		if (L_79)
		{
			goto IL_00c5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = ___outQuotient2;
		int32_t L_81 = V_1;
		NullCheck(L_80);
		L_80->___dataLength_2 = L_81;
		V_5 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = ___outQuotient2;
		NullCheck(L_82);
		int32_t L_83 = L_82->___dataLength_2;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_83, 1));
		goto IL_0149;
	}

IL_0130:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = ___outQuotient2;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_1;
		int32_t L_86 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_0;
		int32_t L_88 = V_13;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (uint32_t)L_90);
		int32_t L_91 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_91, 1));
		int32_t L_92 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0149:
	{
		int32_t L_93 = V_13;
		V_14 = (bool)((((int32_t)((((int32_t)L_93) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_14;
		if (L_94)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_0169;
	}

IL_0159:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = ___outQuotient2;
		NullCheck(L_95);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = L_95->___data_1;
		int32_t L_97 = V_5;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (uint32_t)0);
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0169:
	{
		int32_t L_99 = V_5;
		V_15 = (bool)((((int32_t)L_99) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_100 = V_15;
		if (L_100)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_0185;
	}

IL_0177:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = ___outQuotient2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_102 = L_101;
		NullCheck(L_102);
		int32_t L_103 = L_102->___dataLength_2;
		NullCheck(L_102);
		L_102->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
	}

IL_0185:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = ___outQuotient2;
		NullCheck(L_104);
		int32_t L_105 = L_104->___dataLength_2;
		if ((((int32_t)L_105) <= ((int32_t)1)))
		{
			goto IL_01a2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_106 = ___outQuotient2;
		NullCheck(L_106);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = L_106->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = ___outQuotient2;
		NullCheck(L_108);
		int32_t L_109 = L_108->___dataLength_2;
		NullCheck(L_107);
		int32_t L_110 = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
		uint32_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		G_B25_0 = ((((int32_t)L_111) == ((int32_t)0))? 1 : 0);
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B25_0 = 0;
	}

IL_01a3:
	{
		V_16 = (bool)G_B25_0;
		bool L_112 = V_16;
		if (L_112)
		{
			goto IL_0177;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_113 = ___outQuotient2;
		NullCheck(L_113);
		int32_t L_114 = L_113->___dataLength_2;
		V_17 = (bool)((((int32_t)L_114) == ((int32_t)0))? 1 : 0);
		bool L_115 = V_17;
		if (!L_115)
		{
			goto IL_01bf;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = ___outQuotient2;
		NullCheck(L_116);
		L_116->___dataLength_2 = 1;
	}

IL_01bf:
	{
		goto IL_01cf;
	}

IL_01c1:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_117 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_118 = L_117;
		NullCheck(L_118);
		int32_t L_119 = L_118->___dataLength_2;
		NullCheck(L_118);
		L_118->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_119, 1));
	}

IL_01cf:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_120 = ___outRemainder3;
		NullCheck(L_120);
		int32_t L_121 = L_120->___dataLength_2;
		if ((((int32_t)L_121) <= ((int32_t)1)))
		{
			goto IL_01ec;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = ___outRemainder3;
		NullCheck(L_122);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = L_122->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_124 = ___outRemainder3;
		NullCheck(L_124);
		int32_t L_125 = L_124->___dataLength_2;
		NullCheck(L_123);
		int32_t L_126 = ((int32_t)il2cpp_codegen_subtract(L_125, 1));
		uint32_t L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		G_B33_0 = ((((int32_t)L_127) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B33_0 = 0;
	}

IL_01ed:
	{
		V_18 = (bool)G_B33_0;
		bool L_128 = V_18;
		if (L_128)
		{
			goto IL_01c1;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Division_mAD743FA3943D337B31B1623E210DD9B806A30EC2 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_1, NULL);
		V_1 = L_1;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		V_4 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9;
		L_9 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_8, NULL);
		___bi10 = L_9;
		V_4 = (bool)1;
	}

IL_0039:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi21;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_14&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17;
		L_17 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_16, NULL);
		___bi21 = L_17;
		V_3 = (bool)1;
	}

IL_005c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = BigInteger_op_LessThan_m63E9153B6901BA63DF691AE488F05B030C791045(L_18, L_19, NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		V_8 = L_22;
		goto IL_00b2;
	}

IL_006f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = ___bi21;
		NullCheck(L_23);
		int32_t L_24 = L_23->___dataLength_2;
		V_9 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_mC5A5D9E7F4D2511A6657108784959479B7BC4017(L_26, L_27, L_28, L_29, NULL);
		goto IL_0095;
	}

IL_008b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m8AD9A22E9C23D9606721F874C3DE512E471303F1(L_30, L_31, L_32, L_33, NULL);
	}

IL_0095:
	{
		bool L_34 = V_4;
		bool L_35 = V_3;
		V_10 = (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00ad;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38;
		L_38 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_37, NULL);
		V_8 = L_38;
		goto IL_00b2;
	}

IL_00ad:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_0;
		V_8 = L_39;
		goto IL_00b2;
	}

IL_00b2:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_8;
		return L_40;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Modulus_mE6A6E0394299EFBFF5CA54D47FEE1A0B145C21CE (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_2, L_1, NULL);
		V_1 = L_2;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi10;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_9, NULL);
		___bi10 = L_10;
		V_3 = (bool)1;
	}

IL_0036:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi21;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18;
		L_18 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_17, NULL);
		___bi21 = L_18;
	}

IL_0055:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = BigInteger_op_LessThan_m63E9153B6901BA63DF691AE488F05B030C791045(L_19, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_1;
		V_7 = L_23;
		goto IL_00a4;
	}

IL_0068:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0084;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_mC5A5D9E7F4D2511A6657108784959479B7BC4017(L_27, L_28, L_29, L_30, NULL);
		goto IL_008e;
	}

IL_0084:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m8AD9A22E9C23D9606721F874C3DE512E471303F1(L_31, L_32, L_33, L_34, NULL);
	}

IL_008e:
	{
		bool L_35 = V_3;
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_009f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38;
		L_38 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_37, NULL);
		V_7 = L_38;
		goto IL_00a4;
	}

IL_009f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_1;
		V_7 = L_39;
		goto IL_00a4;
	}

IL_00a4:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_7;
		return L_40;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m4A6DFFE0BB8633647E773E5C70FFA8900E461D63 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(__this, ((int32_t)10), NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___radix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420C015E6084500174F1912E91954C1A742F270F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	bool V_3 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Il2CppChar V_11 = 0x0;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = ___radix0;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___radix0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)36)))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		V_7 = (bool)G_B3_0;
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA37EF8AD7DEABEF988E748C47A435D6BB3F6FC3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25_RuntimeMethod_var)));
	}

IL_001e:
	{
		V_0 = _stringLiteral420C015E6084500174F1912E91954C1A742F270F;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = __this;
		V_3 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_2;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		NullCheck(L_5);
		int32_t L_6 = ((int32_t)69);
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		V_3 = (bool)1;
	}
	try
	{// begin try (depth: 1)
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_9, NULL);
		V_2 = L_10;
		goto IL_0059;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	}// end catch (depth: 1)

IL_0059:
	{
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_11, NULL);
		V_4 = L_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_12, NULL);
		V_5 = L_12;
		int32_t L_13 = ___radix0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_14, ((int64_t)L_13), NULL);
		V_6 = L_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___dataLength_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_2;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B13_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_9 = (bool)G_B13_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		V_1 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		goto IL_013e;
	}

IL_0099:
	{
		goto IL_00fe;
	}

IL_009c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_mC5A5D9E7F4D2511A6657108784959479B7BC4017(L_22, L_23, L_24, L_25, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_5;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_1;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_10 = (bool)((!(((uint32_t)L_29) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00d8;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_5;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___data_1;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		String_t* L_34 = V_1;
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_33, L_34, NULL);
		V_1 = L_35;
		goto IL_00fa;
	}

IL_00d8:
	{
		String_t* L_36 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_5;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___data_1;
		NullCheck(L_38);
		int32_t L_39 = 0;
		uint32_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		Il2CppChar L_41;
		L_41 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_36, ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, ((int32_t)10))), NULL);
		V_11 = L_41;
		String_t* L_42;
		L_42 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_11), NULL);
		String_t* L_43 = V_1;
		String_t* L_44;
		L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_42, L_43, NULL);
		V_1 = L_44;
	}

IL_00fa:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = V_4;
		V_2 = L_45;
	}

IL_00fe:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_2;
		if ((((int32_t)L_47) > ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_2;
		NullCheck(L_50);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50->___data_1;
		NullCheck(L_51);
		int32_t L_52 = 0;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B24_0 = ((!(((uint32_t)L_53) <= ((uint32_t)0)))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B24_0 = 0;
	}

IL_011e:
	{
		G_B26_0 = G_B24_0;
		goto IL_0121;
	}

IL_0120:
	{
		G_B26_0 = 1;
	}

IL_0121:
	{
		V_12 = (bool)G_B26_0;
		bool L_54 = V_12;
		if (L_54)
		{
			goto IL_009c;
		}
	}
	{
		bool L_55 = V_3;
		V_13 = L_55;
		bool L_56 = V_13;
		if (!L_56)
		{
			goto IL_013d;
		}
	}
	{
		String_t* L_57 = V_1;
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_57, NULL);
		V_1 = L_58;
	}

IL_013d:
	{
	}

IL_013e:
	{
		String_t* L_59 = V_1;
		V_14 = L_59;
		goto IL_0143;
	}

IL_0143:
	{
		String_t* L_60 = V_14;
		return L_60;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___exp0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	bool V_2 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B30_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___exp0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		NullCheck(L_1);
		int32_t L_2 = ((int32_t)69);
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_5 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9DA96E4398E04C75ACA0CBE183972952BDB1A28)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F_RuntimeMethod_var)));
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6;
		L_6 = BigInteger_op_Implicit_m22F0871707B92E909B0F11BA027E5B05996EE958(1, NULL);
		V_0 = L_6;
		V_2 = (bool)0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_1;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)69);
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11;
		L_11 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(__this, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13;
		L_13 = BigInteger_op_Modulus_mE6A6E0394299EFBFF5CA54D47FEE1A0B145C21CE(L_11, L_12, NULL);
		V_1 = L_13;
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0058:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
		L_15 = BigInteger_op_Modulus_mE6A6E0394299EFBFF5CA54D47FEE1A0B145C21CE(__this, L_14, NULL);
		V_1 = L_15;
	}

IL_0060:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___n1;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)69);
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22;
		L_22 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_21, NULL);
		___n1 = L_22;
	}

IL_0080:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_23, NULL);
		V_3 = L_23;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___n1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		V_4 = ((int32_t)(L_25<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_3;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_1;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_3;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		L_29->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33;
		L_33 = BigInteger_op_Division_mAD743FA3943D337B31B1623E210DD9B806A30EC2(L_31, L_32, NULL);
		V_3 = L_33;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = ___exp0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_34, NULL);
		V_5 = L_35;
		V_6 = 0;
		V_10 = 0;
		goto IL_017e;
	}

IL_00bf:
	{
		V_11 = 1;
		V_12 = 0;
		goto IL_0168;
	}

IL_00cb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___exp0;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		int32_t L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		uint32_t L_41 = V_11;
		V_13 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_40&(int32_t)L_41))) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45;
		L_45 = BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD(L_43, L_44, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48;
		L_48 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(__this, L_45, L_46, L_47, NULL);
		V_0 = L_48;
	}

IL_00f1:
	{
		uint32_t L_49 = V_11;
		V_11 = ((int32_t)((int32_t)L_49<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52;
		L_52 = BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD(L_50, L_51, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55;
		L_55 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(__this, L_52, L_53, L_54, NULL);
		V_1 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = L_56->___dataLength_2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = V_1;
		NullCheck(L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58->___data_1;
		NullCheck(L_59);
		int32_t L_60 = 0;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B14_0 = ((((int32_t)L_61) == ((int32_t)1))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B14_0 = 0;
	}

IL_011e:
	{
		V_14 = (bool)G_B14_0;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_014d;
		}
	}
	{
		bool L_63 = V_2;
		if (!L_63)
		{
			goto IL_0137;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = ___exp0;
		NullCheck(L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___data_1;
		NullCheck(L_65);
		int32_t L_66 = 0;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((!(((uint32_t)((int32_t)((int32_t)L_67&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0138;
	}

IL_0137:
	{
		G_B18_0 = 0;
	}

IL_0138:
	{
		V_15 = (bool)G_B18_0;
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_0148;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70;
		L_70 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_69, NULL);
		V_16 = L_70;
		goto IL_01b9;
	}

IL_0148:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = V_0;
		V_16 = L_71;
		goto IL_01b9;
	}

IL_014d:
	{
		int32_t L_72 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_6;
		int32_t L_74 = V_5;
		V_17 = (bool)((((int32_t)L_73) == ((int32_t)L_74))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0177;
	}

IL_0161:
	{
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0168:
	{
		int32_t L_77 = V_12;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_78 = V_18;
		if (L_78)
		{
			goto IL_00cb;
		}
	}

IL_0177:
	{
		int32_t L_79 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_017e:
	{
		int32_t L_80 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = ___exp0;
		NullCheck(L_81);
		int32_t L_82 = L_81->___dataLength_2;
		V_19 = (bool)((((int32_t)L_80) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_19;
		if (L_83)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_84 = V_2;
		if (!L_84)
		{
			goto IL_01a3;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_85 = ___exp0;
		NullCheck(L_85);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = L_85->___data_1;
		NullCheck(L_86);
		int32_t L_87 = 0;
		uint32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		G_B30_0 = ((!(((uint32_t)((int32_t)((int32_t)L_88&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B30_0 = 0;
	}

IL_01a4:
	{
		V_20 = (bool)G_B30_0;
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_01b4;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_91;
		L_91 = BigInteger_op_UnaryNegation_m206B2F54BFB36B44EDD503C10A0E784E0BC6DC25(L_90, NULL);
		V_16 = L_91;
		goto IL_01b9;
	}

IL_01b4:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_92 = V_0;
		V_16 = L_92;
		goto IL_01b9;
	}

IL_01b9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_93 = V_16;
		return L_93;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___x0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	uint64_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_30 = NULL;
	bool V_31 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_32 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B35_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___n1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___dataLength_2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_4, NULL);
		V_3 = L_4;
		int32_t L_5 = V_2;
		V_9 = L_5;
		V_10 = 0;
		goto IL_003c;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = V_3;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___data_1;
		int32_t L_8 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___x0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		int32_t L_11 = V_9;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_13);
		int32_t L_14 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		int32_t L_16 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___x0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___dataLength_2;
		V_11 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_11;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = ___x0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___dataLength_2;
		int32_t L_23 = V_2;
		NullCheck(L_20);
		L_20->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		V_12 = (bool)((((int32_t)((((int32_t)L_25) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_0073;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_3;
		NullCheck(L_27);
		L_27->___dataLength_2 = 1;
	}

IL_0073:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = ___constant2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30;
		L_30 = BigInteger_op_Multiply_mBB705FD7E860EEA059508703D52DA9103AD7BDAD(L_28, L_29, NULL);
		V_4 = L_30;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_31, NULL);
		V_5 = L_31;
		int32_t L_32 = V_1;
		V_13 = L_32;
		V_14 = 0;
		goto IL_00ab;
	}

IL_008b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_5;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_4;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		int32_t L_38 = V_13;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint32_t)L_40);
		int32_t L_41 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ab:
	{
		int32_t L_43 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_2;
		V_15 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_15;
		if (L_46)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_2;
		int32_t L_50 = V_1;
		NullCheck(L_47);
		L_47->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_49, L_50));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = L_51->___dataLength_2;
		V_16 = (bool)((((int32_t)((((int32_t)L_52) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_16;
		if (!L_53)
		{
			goto IL_00e7;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_5;
		NullCheck(L_54);
		L_54->___dataLength_2 = 1;
	}

IL_00e7:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_55, NULL);
		V_6 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = ___x0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___dataLength_2;
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) > ((int32_t)L_58)))
		{
			goto IL_00ff;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = ___x0;
		NullCheck(L_59);
		int32_t L_60 = L_59->___dataLength_2;
		G_B13_0 = L_60;
		goto IL_0100;
	}

IL_00ff:
	{
		int32_t L_61 = V_1;
		G_B13_0 = L_61;
	}

IL_0100:
	{
		V_7 = G_B13_0;
		V_17 = 0;
		goto IL_0120;
	}

IL_0107:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_62 = V_6;
		NullCheck(L_62);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = L_62->___data_1;
		int32_t L_64 = V_17;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = ___x0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_1;
		int32_t L_67 = V_17;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_69);
		int32_t L_70 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0120:
	{
		int32_t L_71 = V_17;
		int32_t L_72 = V_7;
		V_18 = (bool)((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_18;
		if (L_73)
		{
			goto IL_0107;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_6;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		L_74->___dataLength_2 = L_75;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_76, NULL);
		V_8 = L_76;
		V_19 = 0;
		goto IL_01ed;
	}

IL_0144:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_5;
		NullCheck(L_77);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = L_77->___data_1;
		int32_t L_79 = V_19;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_22 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_22;
		if (!L_82)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01e7;
	}

IL_015d:
	{
		V_20 = ((int64_t)0);
		int32_t L_83 = V_19;
		V_21 = L_83;
		V_23 = 0;
		goto IL_01b6;
	}

IL_016a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = V_5;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_1;
		int32_t L_86 = V_19;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_89 = ___n1;
		NullCheck(L_89);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = L_89->___data_1;
		int32_t L_91 = V_23;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = V_8;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_1;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint64_t L_99 = V_20;
		V_24 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_88), ((int64_t)(uint64_t)L_93))), ((int64_t)(uint64_t)L_98))), (int64_t)L_99));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_8;
		NullCheck(L_100);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = L_100->___data_1;
		int32_t L_102 = V_21;
		uint64_t L_103 = V_24;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_103&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		uint64_t L_104 = V_24;
		V_20 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		int32_t L_105 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_01b6:
	{
		int32_t L_107 = V_23;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = ___n1;
		NullCheck(L_108);
		int32_t L_109 = L_108->___dataLength_2;
		if ((((int32_t)L_107) >= ((int32_t)L_109)))
		{
			goto IL_01c7;
		}
	}
	{
		int32_t L_110 = V_21;
		int32_t L_111 = V_1;
		G_B24_0 = ((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		goto IL_01c8;
	}

IL_01c7:
	{
		G_B24_0 = 0;
	}

IL_01c8:
	{
		V_25 = (bool)G_B24_0;
		bool L_112 = V_25;
		if (L_112)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_113 = V_21;
		int32_t L_114 = V_1;
		V_26 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_26;
		if (!L_115)
		{
			goto IL_01e6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = V_8;
		NullCheck(L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = L_116->___data_1;
		int32_t L_118 = V_21;
		uint64_t L_119 = V_20;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint32_t)((int32_t)(uint32_t)L_119));
	}

IL_01e6:
	{
	}

IL_01e7:
	{
		int32_t L_120 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_01ed:
	{
		int32_t L_121 = V_19;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = V_5;
		NullCheck(L_122);
		int32_t L_123 = L_122->___dataLength_2;
		V_27 = (bool)((((int32_t)L_121) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_27;
		if (L_124)
		{
			goto IL_0144;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_125 = V_8;
		int32_t L_126 = V_1;
		NullCheck(L_125);
		L_125->___dataLength_2 = L_126;
		goto IL_021a;
	}

IL_020b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_127 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_128 = L_127;
		NullCheck(L_128);
		int32_t L_129 = L_128->___dataLength_2;
		NullCheck(L_128);
		L_128->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_129, 1));
	}

IL_021a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_130 = V_8;
		NullCheck(L_130);
		int32_t L_131 = L_130->___dataLength_2;
		if ((((int32_t)L_131) <= ((int32_t)1)))
		{
			goto IL_023a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_132 = V_8;
		NullCheck(L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = L_132->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_134 = V_8;
		NullCheck(L_134);
		int32_t L_135 = L_134->___dataLength_2;
		NullCheck(L_133);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract(L_135, 1));
		uint32_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		G_B35_0 = ((((int32_t)L_137) == ((int32_t)0))? 1 : 0);
		goto IL_023b;
	}

IL_023a:
	{
		G_B35_0 = 0;
	}

IL_023b:
	{
		V_28 = (bool)G_B35_0;
		bool L_138 = V_28;
		if (L_138)
		{
			goto IL_020b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_139 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_140 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_141;
		L_141 = BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732(L_139, L_140, NULL);
		V_6 = L_141;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = L_142->___data_1;
		NullCheck(L_143);
		int32_t L_144 = ((int32_t)69);
		uint32_t L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_29 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_145&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_29;
		if (!L_146)
		{
			goto IL_028d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_147 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_147, NULL);
		V_30 = L_147;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_148 = V_30;
		NullCheck(L_148);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = L_148->___data_1;
		int32_t L_150 = V_1;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_151 = V_30;
		int32_t L_152 = V_1;
		NullCheck(L_151);
		L_151->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_152, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_153 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_154 = V_30;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155;
		L_155 = BigInteger_op_Addition_m8518866353242B9741D3723CCA6C414535CFF993(L_153, L_154, NULL);
		V_6 = L_155;
	}

IL_028d:
	{
		goto IL_0299;
	}

IL_028f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_156 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_157 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_158;
		L_158 = BigInteger_op_Subtraction_m4603FDF06BD9817F9E4AAF37718F4D98E4003732(L_156, L_157, NULL);
		V_6 = L_158;
	}

IL_0299:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_159 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_160 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_161;
		L_161 = BigInteger_op_GreaterThanOrEqual_mF2AF5FB9F649D22D7B6DDA90921D09F406969D27(L_159, L_160, NULL);
		V_31 = L_161;
		bool L_162 = V_31;
		if (L_162)
		{
			goto IL_028f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_163 = V_6;
		V_32 = L_163;
		goto IL_02ad;
	}

IL_02ad:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_164 = V_32;
		return L_164;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_GenerateRandom_mC7A55B8F97AE4282BD96520E7BE9E08AE9D96792 (int32_t ___bits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		int32_t L_2 = ___bits0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_3, NULL);
		NullCheck(L_1);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_1, L_2, L_3, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	uint32_t V_9 = 0;
	bool V_10 = false;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)(L_0>>5));
		int32_t L_1 = ___bits0;
		V_1 = ((int32_t)(L_1&((int32_t)31)));
		int32_t L_2 = V_1;
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_7 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE867641BA2826180B2167D7038C421CA025C7A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_4 = 0;
		goto IL_004f;
	}

IL_002f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___data_1;
		int32_t L_9 = V_4;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = ___rand1;
		NullCheck(L_10);
		double L_11;
		L_11 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_11, (4294967296.0)))));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_6 = L_16;
		goto IL_006f;
	}

IL_005f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->___data_1;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)0);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006f:
	{
		int32_t L_20 = V_6;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_22 = V_1;
		V_8 = (bool)((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_24 = V_1;
		V_9 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_24, 1))&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___data_1;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		uint32_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_26, 1)))));
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t L_29 = V_9;
		*((int32_t*)L_27) = (int32_t)((int32_t)(L_28|(int32_t)L_29));
		int32_t L_30 = V_1;
		V_9 = ((int32_t)((uint32_t)(-1)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_30))&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___data_1;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		uint32_t* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 1)))));
		int32_t L_34 = *((uint32_t*)L_33);
		uint32_t L_35 = V_9;
		*((int32_t*)L_33) = (int32_t)((int32_t)(L_34&(int32_t)L_35));
		goto IL_00dd;
	}

IL_00c6:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___data_1;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		uint32_t* L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 1)))));
		int32_t L_39 = *((uint32_t*)L_38);
		*((int32_t*)L_38) = (int32_t)((int32_t)(L_39|((int32_t)-2147483648LL)));
	}

IL_00dd:
	{
		int32_t L_40 = V_0;
		__this->___dataLength_2 = L_40;
		int32_t L_41 = __this->___dataLength_2;
		V_10 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_00fa;
		}
	}
	{
		__this->___dataLength_2 = 1;
	}

IL_00fa:
	{
		return;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		goto IL_0011;
	}

IL_0003:
	{
		int32_t L_0 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}

IL_0011:
	{
		int32_t L_1 = __this->___dataLength_2;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		int32_t L_3 = __this->___dataLength_2;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		V_3 = (bool)G_B5_0;
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0003;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_1;
		int32_t L_8 = __this->___dataLength_2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0058;
	}

IL_004e:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B11_0 = 0;
	}

IL_0065:
	{
		V_4 = (bool)G_B11_0;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_17 = V_2;
		int32_t L_18 = __this->___dataLength_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, 1))<<5))));
		int32_t L_19 = V_2;
		V_5 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		int32_t L_20 = V_5;
		return L_20;
	}
}
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0;
		L_0 = BigInteger_op_Implicit_m22F0871707B92E909B0F11BA027E5B05996EE958(0, NULL);
		bool L_1;
		L_1 = BigInteger_op_Equality_mE22E3117362E32E1018A6E80BF5EB7D451FE0794(__this, L_0, NULL);
		V_5 = L_1;
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_3;
		goto IL_00c7;
	}

IL_0021:
	{
		int32_t L_4;
		L_4 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(__this, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(L_5>>3));
		int32_t L_6 = V_0;
		V_7 = (bool)((!(((uint32_t)((int32_t)(L_6&7))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003e:
	{
		int32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		int32_t L_11 = V_1;
		V_3 = ((int32_t)(L_11&3));
		int32_t L_12 = V_3;
		V_8 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		V_3 = 4;
	}

IL_0057:
	{
		V_4 = 0;
		int32_t L_14 = __this->___dataLength_2;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_00b4;
	}

IL_0066:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___data_1;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_10 = L_18;
		int32_t L_19 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		goto IL_0097;
	}

IL_0079:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = V_11;
		uint32_t L_23 = V_10;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, L_22))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23&((int32_t)255)))));
		uint32_t L_24 = V_10;
		V_10 = ((int32_t)((uint32_t)L_24>>8));
		int32_t L_25 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0097:
	{
		int32_t L_26 = V_11;
		V_12 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_12;
		if (L_27)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		V_3 = 4;
		int32_t L_30 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_00b4:
	{
		int32_t L_31 = V_9;
		V_13 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_13;
		if (L_32)
		{
			goto IL_0066;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		V_6 = L_33;
		goto IL_00c7;
	}

IL_00c7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_6;
		return L_34;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_m495619A1C4585207BD72F6DDA509DB1C5514C545 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)303));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_0), (void*)L_1);
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
