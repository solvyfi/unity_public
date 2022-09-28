#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern void ConfigurationElement_get_Properties_m85E584B7C5EAFA411191A245AF41DEC274DE8F93 (void);
// 0x00000002 System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern void ConfigurationElement_DeserializeElement_m3879FAA612D3277C35E1D596A9A3FD48574C229F (void);
// 0x00000003 System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern void ConfigurationElement_InitializeDefault_mA8696AA37753B0A94BB3AD25CE288AE88DF3DDA3 (void);
// 0x00000004 System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern void ConfigurationElement_PostDeserialize_m74D87BC76FD5F23DBF6D3ED938C6B8D9BD2B7EC1 (void);
// 0x00000005 System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern void ConfigurationElement_Reset_mA1EA05A353D2606B81CF9B50BDBC9D5F9B6DF8AF (void);
// 0x00000006 System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern void ConfigurationElementCollection_get_ThrowOnDuplicate_mCF2E6A87DA72AB9E0D75BC31B29EE8C8A3078927 (void);
// 0x00000007 System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement()
// 0x00000008 System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
// 0x00000009 System.Void Unity.ThrowStub::ThrowNotSupportedException()
extern void ThrowStub_ThrowNotSupportedException_mA14F496FFE8A1B92C4565A9F18F2113E1C1F2A77 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	ConfigurationElement_get_Properties_m85E584B7C5EAFA411191A245AF41DEC274DE8F93,
	ConfigurationElement_DeserializeElement_m3879FAA612D3277C35E1D596A9A3FD48574C229F,
	ConfigurationElement_InitializeDefault_mA8696AA37753B0A94BB3AD25CE288AE88DF3DDA3,
	ConfigurationElement_PostDeserialize_m74D87BC76FD5F23DBF6D3ED938C6B8D9BD2B7EC1,
	ConfigurationElement_Reset_mA1EA05A353D2606B81CF9B50BDBC9D5F9B6DF8AF,
	ConfigurationElementCollection_get_ThrowOnDuplicate_mCF2E6A87DA72AB9E0D75BC31B29EE8C8A3078927,
	NULL,
	NULL,
	ThrowStub_ThrowNotSupportedException_mA14F496FFE8A1B92C4565A9F18F2113E1C1F2A77,
};
static const int32_t s_InvokerIndices[9] = 
{
	3508,
	1634,
	3589,
	3589,
	2911,
	3447,
	0,
	0,
	5540,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Configuration_CodeGenModule;
const Il2CppCodeGenModule g_System_Configuration_CodeGenModule = 
{
	"System.Configuration.dll",
	9,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
