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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.String
struct String_t;
// System.Xml.Linq.BaseUriAnnotation
struct BaseUriAnnotation_t3843949084;
// System.Xml.Linq.NamespaceResolver
struct NamespaceResolver_t1487275418;
// System.Xml.XmlWriter
struct XmlWriter_t127905479;
// System.Xml.Linq.XElement
struct XElement_t4185968754;
// System.Xml.Linq.XNamespace
struct XNamespace_t1843508170;
// System.Xml.Linq.XAttribute
struct XAttribute_t355876829;
// System.Xml.Linq.XName
struct XName_t3751455998;
// System.Xml.Linq.LineInfoAnnotation
struct LineInfoAnnotation_t2689670207;
// System.Xml.Linq.LineInfoEndElementAnnotation
struct LineInfoEndElementAnnotation_t493731080;
// System.Xml.Linq.NameSerializer
struct NameSerializer_t1284368626;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration
struct NamespaceDeclaration_t1302953724;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Xml.Linq.XObject
struct XObject_t1119084474;
// System.Xml.Linq.XObjectChangeEventArgs
struct XObjectChangeEventArgs_t652714535;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t3314986516;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Xml.Linq.XCData
struct XCData_t832623270;
// System.Xml.Linq.XText
struct XText_t1448860321;
// System.Xml.Linq.XNode
struct XNode_t716131460;
// System.Xml.Linq.XComment
struct XComment_t1832251191;
// System.Xml.Linq.XContainer
struct XContainer_t3387731002;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t3165821643;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Xml.Linq.XContainer/<GetDescendants>d__39
struct U3CGetDescendantsU3Ed__39_t2920852095;
// System.Xml.XmlReader
struct XmlReader_t3121518892;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_t2943691487;
// System.Xml.Linq.XDocumentType
struct XDocumentType_t1853592271;
// System.Xml.IDtdInfo
struct IDtdInfo_t4056024937;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement>
struct IEnumerator_1_t323571926;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t2907650823;
// System.Xml.Linq.XDocument
struct XDocument_t1376419702;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2186285234;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Type
struct Type_t;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>
struct ExtractKeyDelegate_t3535032598;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t2863682764;
// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_t2293621225;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t1622271391;
// System.WeakReference
struct WeakReference_t1334886716;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>
struct ExtractKeyDelegate_t1118463316;
// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_t4172019239;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Xml.Linq.XObjectChangeAnnotation
struct XObjectChangeAnnotation_t288737304;
// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>
struct EventHandler_1_t2871841264;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.EventArgs
struct EventArgs_t3591816995;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.WeakReference>
struct XHashtableState_t492100118;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Void
struct Void_t1185182177;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Xml.Linq.XName>
struct XHashtableState_t2908669400;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Func`2<System.Object,System.String>
struct Func_2_t1214474899;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2317969963;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t1959134050;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Collections.Generic.List`1<System.Xml.XmlQualifiedName>
struct List_1_t4232729054;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t791314227;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern const RuntimeMethod* U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2090043908_RuntimeMethod_var;
extern const uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2090043908_MetadataUsageId;
extern const RuntimeMethod* BaseUriAnnotation__ctor_m1617116133_RuntimeMethod_var;
extern const uint32_t BaseUriAnnotation__ctor_m1617116133_MetadataUsageId;
struct NamespaceResolver_t1487275418_marshaled_pinvoke;
struct NamespaceResolver_t1487275418;;
struct NamespaceResolver_t1487275418_marshaled_pinvoke;;
struct NamespaceResolver_t1487275418_marshaled_com;
struct NamespaceResolver_t1487275418_marshaled_com;;
extern const RuntimeMethod* ElementWriter__ctor_m3451443409_RuntimeMethod_var;
extern const uint32_t ElementWriter__ctor_m3451443409_MetadataUsageId;
extern RuntimeClass* XElement_t4185968754_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* XNode_t716131460_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ElementWriter_WriteElement_m2726179892_RuntimeMethod_var;
extern const uint32_t ElementWriter_WriteElement_m2726179892_MetadataUsageId;
extern const RuntimeMethod* ElementWriter_GetPrefixOfNamespace_m3506790810_RuntimeMethod_var;
extern String_t* _stringLiteral2984480440;
extern String_t* _stringLiteral2909972470;
extern String_t* _stringLiteral2829469855;
extern String_t* _stringLiteral3929236445;
extern const uint32_t ElementWriter_GetPrefixOfNamespace_m3506790810_MetadataUsageId;
extern const RuntimeMethod* ElementWriter_PushAncestors_m2035798448_RuntimeMethod_var;
extern const uint32_t ElementWriter_PushAncestors_m2035798448_MetadataUsageId;
extern const RuntimeMethod* ElementWriter_PushElement_m2420541029_RuntimeMethod_var;
extern const uint32_t ElementWriter_PushElement_m2420541029_MetadataUsageId;
extern const RuntimeMethod* ElementWriter_WriteEndElement_m4048521740_RuntimeMethod_var;
extern const uint32_t ElementWriter_WriteEndElement_m4048521740_MetadataUsageId;
extern const RuntimeMethod* ElementWriter_WriteFullEndElement_m3470268867_RuntimeMethod_var;
extern const uint32_t ElementWriter_WriteFullEndElement_m3470268867_MetadataUsageId;
extern const RuntimeMethod* ElementWriter_WriteStartElement_m2466481327_RuntimeMethod_var;
extern const uint32_t ElementWriter_WriteStartElement_m2466481327_MetadataUsageId;
extern const RuntimeMethod* LineInfoAnnotation__ctor_m1540747406_RuntimeMethod_var;
extern const uint32_t LineInfoAnnotation__ctor_m1540747406_MetadataUsageId;
extern const RuntimeMethod* LineInfoEndElementAnnotation__ctor_m4037848550_RuntimeMethod_var;
extern const uint32_t LineInfoEndElementAnnotation__ctor_m4037848550_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NameSerializer__ctor_m946590521_RuntimeMethod_var;
extern String_t* _stringLiteral79347;
extern String_t* _stringLiteral62725243;
extern const uint32_t NameSerializer__ctor_m946590521_MetadataUsageId;
extern const RuntimeMethod* NameSerializer_System_Runtime_Serialization_IObjectReference_GetRealObject_m1613220564_RuntimeMethod_var;
extern const uint32_t NameSerializer_System_Runtime_Serialization_IObjectReference_GetRealObject_m1613220564_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m764090128_RuntimeMethod_var;
extern const uint32_t NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m764090128_MetadataUsageId;
extern const RuntimeMethod* NamespaceCache_Get_m3575903994_RuntimeMethod_var;
extern const uint32_t NamespaceCache_Get_m3575903994_MetadataUsageId;
extern const RuntimeMethod* NamespaceResolver_PushScope_m2295210081_RuntimeMethod_var;
extern const uint32_t NamespaceResolver_PushScope_m2295210081_MetadataUsageId;
extern const RuntimeMethod* NamespaceResolver_PopScope_m2027933180_RuntimeMethod_var;
extern const uint32_t NamespaceResolver_PopScope_m2027933180_MetadataUsageId;
extern RuntimeClass* NamespaceDeclaration_t1302953724_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NamespaceResolver_Add_m2556732263_RuntimeMethod_var;
extern const uint32_t NamespaceResolver_Add_m2556732263_MetadataUsageId;
extern const RuntimeMethod* NamespaceResolver_AddFirst_m637257421_RuntimeMethod_var;
extern const uint32_t NamespaceResolver_AddFirst_m637257421_MetadataUsageId;
extern const RuntimeMethod* NamespaceResolver_GetPrefixOfNamespace_m1421437472_RuntimeMethod_var;
extern const uint32_t NamespaceResolver_GetPrefixOfNamespace_m1421437472_MetadataUsageId;
extern const RuntimeMethod* NamespaceDeclaration__ctor_m286273896_RuntimeMethod_var;
extern const uint32_t NamespaceDeclaration__ctor_m286273896_MetadataUsageId;
extern const RuntimeMethod* Res_GetString_m1829098876_RuntimeMethod_var;
extern String_t* _stringLiteral37302086;
extern String_t* _stringLiteral1473093608;
extern String_t* _stringLiteral834294703;
extern String_t* _stringLiteral1450029974;
extern String_t* _stringLiteral1812928724;
extern String_t* _stringLiteral3298996753;
extern String_t* _stringLiteral2380168007;
extern String_t* _stringLiteral2561865016;
extern String_t* _stringLiteral1876795418;
extern String_t* _stringLiteral1469956566;
extern String_t* _stringLiteral291713424;
extern String_t* _stringLiteral3699978413;
extern String_t* _stringLiteral3304741934;
extern String_t* _stringLiteral214076177;
extern String_t* _stringLiteral1867930491;
extern String_t* _stringLiteral3625734729;
extern String_t* _stringLiteral3820310384;
extern String_t* _stringLiteral3732074949;
extern String_t* _stringLiteral333778122;
extern String_t* _stringLiteral1321969992;
extern String_t* _stringLiteral4130171257;
extern String_t* _stringLiteral2919550222;
extern String_t* _stringLiteral2125722552;
extern String_t* _stringLiteral1058295211;
extern String_t* _stringLiteral2630609293;
extern String_t* _stringLiteral259855407;
extern String_t* _stringLiteral3265120625;
extern String_t* _stringLiteral137893848;
extern String_t* _stringLiteral4181048727;
extern String_t* _stringLiteral4213163659;
extern String_t* _stringLiteral3561416487;
extern String_t* _stringLiteral3660296198;
extern String_t* _stringLiteral1080128167;
extern String_t* _stringLiteral1482909617;
extern String_t* _stringLiteral318809131;
extern String_t* _stringLiteral1669673295;
extern String_t* _stringLiteral3373438723;
extern String_t* _stringLiteral1055297398;
extern String_t* _stringLiteral250338907;
extern String_t* _stringLiteral1002602296;
extern String_t* _stringLiteral530336010;
extern String_t* _stringLiteral1889797247;
extern String_t* _stringLiteral3876106276;
extern String_t* _stringLiteral3598200442;
extern String_t* _stringLiteral2042199142;
extern String_t* _stringLiteral2315047519;
extern String_t* _stringLiteral731812818;
extern String_t* _stringLiteral4041226291;
extern String_t* _stringLiteral3899683834;
extern String_t* _stringLiteral1492314906;
extern String_t* _stringLiteral2932166368;
extern String_t* _stringLiteral1463905796;
extern String_t* _stringLiteral2956943954;
extern String_t* _stringLiteral3704008936;
extern String_t* _stringLiteral2230202614;
extern String_t* _stringLiteral933941093;
extern String_t* _stringLiteral1093004055;
extern String_t* _stringLiteral2892410334;
extern String_t* _stringLiteral992912392;
extern String_t* _stringLiteral1634084548;
extern String_t* _stringLiteral3091098631;
extern String_t* _stringLiteral567016436;
extern String_t* _stringLiteral4173832088;
extern String_t* _stringLiteral2665344007;
extern const uint32_t Res_GetString_m1829098876_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Res_GetString_m419457679_RuntimeMethod_var;
extern const uint32_t Res_GetString_m419457679_MetadataUsageId;
extern const RuntimeMethod* XAttribute__ctor_m2609633652_RuntimeMethod_var;
extern String_t* _stringLiteral3493618073;
extern const uint32_t XAttribute__ctor_m2609633652_MetadataUsageId;
extern const RuntimeMethod* XAttribute__ctor_m4086971032_RuntimeMethod_var;
extern String_t* _stringLiteral2432405111;
extern const uint32_t XAttribute__ctor_m4086971032_MetadataUsageId;
extern const RuntimeMethod* XAttribute_get_IsNamespaceDeclaration_m3726745643_RuntimeMethod_var;
extern const uint32_t XAttribute_get_IsNamespaceDeclaration_m3726745643_MetadataUsageId;
extern const RuntimeMethod* XAttribute_get_Name_m2178653462_RuntimeMethod_var;
extern const uint32_t XAttribute_get_Name_m2178653462_MetadataUsageId;
extern const RuntimeMethod* XAttribute_get_NodeType_m2343038868_RuntimeMethod_var;
extern const uint32_t XAttribute_get_NodeType_m2343038868_MetadataUsageId;
extern const RuntimeMethod* XAttribute_get_Value_m822045865_RuntimeMethod_var;
extern const uint32_t XAttribute_get_Value_m822045865_MetadataUsageId;
extern RuntimeClass* XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XAttribute_set_Value_m724377387_RuntimeMethod_var;
extern const uint32_t XAttribute_set_Value_m724377387_MetadataUsageId;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XAttribute_ToString_m1941498034_RuntimeMethod_var;
extern const uint32_t XAttribute_ToString_m1941498034_MetadataUsageId;
extern const RuntimeMethod* XAttribute_GetPrefixOfNamespace_m3339376166_RuntimeMethod_var;
extern const uint32_t XAttribute_GetPrefixOfNamespace_m3339376166_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var;
extern const uint32_t XAttribute_ValidateAttribute_m3597441975_MetadataUsageId;
extern const RuntimeMethod* XCData__ctor_m2121219684_RuntimeMethod_var;
extern const uint32_t XCData__ctor_m2121219684_MetadataUsageId;
extern const RuntimeMethod* XCData__ctor_m2021185271_RuntimeMethod_var;
extern const uint32_t XCData__ctor_m2021185271_MetadataUsageId;
extern const RuntimeMethod* XCData_get_NodeType_m709580419_RuntimeMethod_var;
extern const uint32_t XCData_get_NodeType_m709580419_MetadataUsageId;
extern const RuntimeMethod* XCData_WriteTo_m381187891_RuntimeMethod_var;
extern String_t* _stringLiteral1980498921;
extern const uint32_t XCData_WriteTo_m381187891_MetadataUsageId;
extern RuntimeClass* XCData_t832623270_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XCData_CloneNode_m3205202476_RuntimeMethod_var;
extern const uint32_t XCData_CloneNode_m3205202476_MetadataUsageId;
extern const RuntimeMethod* XComment__ctor_m2613070977_RuntimeMethod_var;
extern const uint32_t XComment__ctor_m2613070977_MetadataUsageId;
extern const RuntimeMethod* XComment__ctor_m1691910914_RuntimeMethod_var;
extern const uint32_t XComment__ctor_m1691910914_MetadataUsageId;
extern const RuntimeMethod* XComment_get_NodeType_m2774887594_RuntimeMethod_var;
extern const uint32_t XComment_get_NodeType_m2774887594_MetadataUsageId;
extern const RuntimeMethod* XComment_WriteTo_m341824341_RuntimeMethod_var;
extern const uint32_t XComment_WriteTo_m341824341_MetadataUsageId;
extern RuntimeClass* XComment_t1832251191_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XComment_CloneNode_m3608751215_RuntimeMethod_var;
extern const uint32_t XComment_CloneNode_m3608751215_MetadataUsageId;
extern const RuntimeMethod* XContainer__ctor_m2392412783_RuntimeMethod_var;
extern const uint32_t XContainer__ctor_m2392412783_MetadataUsageId;
extern const RuntimeMethod* XContainer__ctor_m1059702699_RuntimeMethod_var;
extern const uint32_t XContainer__ctor_m1059702699_MetadataUsageId;
extern const RuntimeMethod* XContainer_Descendants_m15333368_RuntimeMethod_var;
extern const uint32_t XContainer_Descendants_m15333368_MetadataUsageId;
extern const RuntimeMethod* XContainer_Element_m902501614_RuntimeMethod_var;
extern const uint32_t XContainer_Element_m902501614_MetadataUsageId;
extern const RuntimeMethod* XContainer_AddNodeSkipNotify_m2405732094_RuntimeMethod_var;
extern const uint32_t XContainer_AddNodeSkipNotify_m2405732094_MetadataUsageId;
extern RuntimeClass* XText_t1448860321_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XContainer_AddStringSkipNotify_m1432095315_RuntimeMethod_var;
extern const uint32_t XContainer_AddStringSkipNotify_m1432095315_MetadataUsageId;
extern const RuntimeMethod* XContainer_AppendNodeSkipNotify_m2088981435_RuntimeMethod_var;
extern const uint32_t XContainer_AppendNodeSkipNotify_m2088981435_MetadataUsageId;
extern const RuntimeMethod* XContainer_AppendText_m448247265_RuntimeMethod_var;
extern const uint32_t XContainer_AppendText_m448247265_MetadataUsageId;
extern const RuntimeMethod* XContainer_ConvertTextToNode_m4002742466_RuntimeMethod_var;
extern const uint32_t XContainer_ConvertTextToNode_m4002742466_MetadataUsageId;
extern RuntimeClass* XmlConvert_t1981561327_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XContainer_GetDateTimeString_m3842888760_RuntimeMethod_var;
extern const uint32_t XContainer_GetDateTimeString_m3842888760_MetadataUsageId;
extern RuntimeClass* U3CGetDescendantsU3Ed__39_t2920852095_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XContainer_GetDescendants_m3487935990_RuntimeMethod_var;
extern const uint32_t XContainer_GetDescendants_m3487935990_MetadataUsageId;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeOffset_t3229287507_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* XObject_t1119084474_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XContainer_GetStringValue_m4268288823_RuntimeMethod_var;
extern const uint32_t XContainer_GetStringValue_m4268288823_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* XAttribute_t355876829_il2cpp_TypeInfo_var;
extern RuntimeClass* XProcessingInstruction_t2943691487_il2cpp_TypeInfo_var;
extern RuntimeClass* XDocumentType_t1853592271_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeType_t1672767151_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XContainer_ReadContentFrom_m1866981_RuntimeMethod_var;
extern String_t* _stringLiteral3984887517;
extern String_t* _stringLiteral3261774195;
extern const uint32_t XContainer_ReadContentFrom_m1866981_MetadataUsageId;
extern RuntimeClass* IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XContainer_ReadContentFrom_m3994758364_RuntimeMethod_var;
extern const uint32_t XContainer_ReadContentFrom_m3994758364_MetadataUsageId;
extern const RuntimeMethod* XContainer_ValidateNode_m3318702702_RuntimeMethod_var;
extern const uint32_t XContainer_ValidateNode_m3318702702_MetadataUsageId;
extern const RuntimeMethod* XContainer_ValidateString_m3795944561_RuntimeMethod_var;
extern const uint32_t XContainer_ValidateString_m3795944561_MetadataUsageId;
extern RuntimeClass* XDocument_t1376419702_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XContainer_WriteContentTo_m3843093128_RuntimeMethod_var;
extern const uint32_t XContainer_WriteContentTo_m3843093128_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39__ctor_m3867538981_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39__ctor_m3867538981_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39_System_IDisposable_Dispose_m3444531876_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39_System_IDisposable_Dispose_m3444531876_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39_MoveNext_m949420177_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39_MoveNext_m949420177_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_m1798985458_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_m1798985458_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m3811884003_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m3811884003_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_get_Current_m1753131874_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_get_Current_m1753131874_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m300366222_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m300366222_MetadataUsageId;
extern const RuntimeMethod* U3CGetDescendantsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_m3439842338_RuntimeMethod_var;
extern const uint32_t U3CGetDescendantsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_m3439842338_MetadataUsageId;
extern const RuntimeMethod* XDeclaration__ctor_m3840151100_RuntimeMethod_var;
extern const uint32_t XDeclaration__ctor_m3840151100_MetadataUsageId;
extern const RuntimeMethod* XDeclaration__ctor_m799194490_RuntimeMethod_var;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral3002372288;
extern String_t* _stringLiteral2469761506;
extern const uint32_t XDeclaration__ctor_m799194490_MetadataUsageId;
extern const RuntimeMethod* XDeclaration_get_Standalone_m2365902379_RuntimeMethod_var;
extern const uint32_t XDeclaration_get_Standalone_m2365902379_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XDeclaration_ToString_m4250318426_RuntimeMethod_var;
extern String_t* _stringLiteral3121692312;
extern String_t* _stringLiteral2120901972;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral4008185757;
extern String_t* _stringLiteral3804145326;
extern String_t* _stringLiteral3451697041;
extern const uint32_t XDeclaration_ToString_m4250318426_MetadataUsageId;
extern const RuntimeMethod* XDocument__ctor_m1715976504_RuntimeMethod_var;
extern const uint32_t XDocument__ctor_m1715976504_MetadataUsageId;
extern RuntimeClass* XDeclaration_t2907650823_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XDocument__ctor_m3958010189_RuntimeMethod_var;
extern const uint32_t XDocument__ctor_m3958010189_MetadataUsageId;
extern const RuntimeMethod* XDocument_set_Declaration_m1583407267_RuntimeMethod_var;
extern const uint32_t XDocument_set_Declaration_m1583407267_MetadataUsageId;
extern const RuntimeMethod* XDocument_get_NodeType_m3201257204_RuntimeMethod_var;
extern const uint32_t XDocument_get_NodeType_m3201257204_MetadataUsageId;
extern const RuntimeMethod* XDocument_get_Root_m2125125051_RuntimeMethod_var;
extern const RuntimeMethod* XDocument_GetFirstNode_TisXElement_t4185968754_m2723590789_RuntimeMethod_var;
extern const uint32_t XDocument_get_Root_m2125125051_MetadataUsageId;
extern const RuntimeMethod* XDocument_Load_m3800122983_RuntimeMethod_var;
extern const uint32_t XDocument_Load_m3800122983_MetadataUsageId;
extern RuntimeClass* XmlReader_t3121518892_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XDocument_Load_m1691125960_RuntimeMethod_var;
extern const uint32_t XDocument_Load_m1691125960_MetadataUsageId;
extern const RuntimeMethod* XDocument_Load_m3339189379_RuntimeMethod_var;
extern String_t* _stringLiteral3529812268;
extern const uint32_t XDocument_Load_m3339189379_MetadataUsageId;
extern const RuntimeMethod* XDocument_Parse_m2595360597_RuntimeMethod_var;
extern const uint32_t XDocument_Parse_m2595360597_MetadataUsageId;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XDocument_Parse_m271750636_RuntimeMethod_var;
extern const uint32_t XDocument_Parse_m271750636_MetadataUsageId;
extern const RuntimeMethod* XDocument_WriteTo_m2640830178_RuntimeMethod_var;
extern String_t* _stringLiteral4119301762;
extern String_t* _stringLiteral3454777282;
extern const uint32_t XDocument_WriteTo_m2640830178_MetadataUsageId;
extern const RuntimeMethod* XDocument_CloneNode_m1888657918_RuntimeMethod_var;
extern const uint32_t XDocument_CloneNode_m1888657918_MetadataUsageId;
extern const RuntimeMethod* XDocument_IsWhitespace_m4229137038_RuntimeMethod_var;
extern const uint32_t XDocument_IsWhitespace_m4229137038_MetadataUsageId;
extern const RuntimeMethod* XDocument_ValidateNode_m3035337470_RuntimeMethod_var;
extern const uint32_t XDocument_ValidateNode_m3035337470_MetadataUsageId;
extern const RuntimeMethod* XDocument_ValidateDocument_m2535406208_RuntimeMethod_var;
extern const uint32_t XDocument_ValidateDocument_m2535406208_MetadataUsageId;
extern const RuntimeMethod* XDocument_ValidateString_m2943022212_RuntimeMethod_var;
extern const uint32_t XDocument_ValidateString_m2943022212_MetadataUsageId;
extern const RuntimeMethod* XDocumentType__ctor_m4247116401_RuntimeMethod_var;
extern const uint32_t XDocumentType__ctor_m4247116401_MetadataUsageId;
extern const RuntimeMethod* XDocumentType__ctor_m3958915516_RuntimeMethod_var;
extern const uint32_t XDocumentType__ctor_m3958915516_MetadataUsageId;
extern const RuntimeMethod* XDocumentType__ctor_m1639303547_RuntimeMethod_var;
extern const uint32_t XDocumentType__ctor_m1639303547_MetadataUsageId;
extern const RuntimeMethod* XDocumentType_get_NodeType_m2244383995_RuntimeMethod_var;
extern const uint32_t XDocumentType_get_NodeType_m2244383995_MetadataUsageId;
extern const RuntimeMethod* XDocumentType_WriteTo_m464390746_RuntimeMethod_var;
extern const uint32_t XDocumentType_WriteTo_m464390746_MetadataUsageId;
extern const RuntimeMethod* XDocumentType_CloneNode_m375119809_RuntimeMethod_var;
extern const uint32_t XDocumentType_CloneNode_m375119809_MetadataUsageId;
extern const RuntimeMethod* XElement__ctor_m643760410_RuntimeMethod_var;
extern const uint32_t XElement__ctor_m643760410_MetadataUsageId;
extern const RuntimeMethod* XElement__ctor_m3926917909_RuntimeMethod_var;
extern const uint32_t XElement__ctor_m3926917909_MetadataUsageId;
extern const RuntimeMethod* XElement_get_Name_m619912033_RuntimeMethod_var;
extern const uint32_t XElement_get_Name_m619912033_MetadataUsageId;
extern const RuntimeMethod* XElement_get_NodeType_m1489408106_RuntimeMethod_var;
extern const uint32_t XElement_get_NodeType_m1489408106_MetadataUsageId;
extern const RuntimeMethod* XElement_get_Value_m2366324488_RuntimeMethod_var;
extern const uint32_t XElement_get_Value_m2366324488_MetadataUsageId;
extern const RuntimeMethod* XElement_Attribute_m3511762361_RuntimeMethod_var;
extern const uint32_t XElement_Attribute_m3511762361_MetadataUsageId;
extern const RuntimeMethod* XElement_GetPrefixOfNamespace_m2885939482_RuntimeMethod_var;
extern String_t* _stringLiteral3455563714;
extern const uint32_t XElement_GetPrefixOfNamespace_m2885939482_MetadataUsageId;
extern const RuntimeMethod* XElement_SetAttributeValue_m1466355986_RuntimeMethod_var;
extern const uint32_t XElement_SetAttributeValue_m1466355986_MetadataUsageId;
extern const RuntimeMethod* XElement_WriteTo_m3488799361_RuntimeMethod_var;
extern const uint32_t XElement_WriteTo_m3488799361_MetadataUsageId;
extern const RuntimeMethod* XElement_AppendAttribute_m78540157_RuntimeMethod_var;
extern const uint32_t XElement_AppendAttribute_m78540157_MetadataUsageId;
extern const RuntimeMethod* XElement_AppendAttributeSkipNotify_m1943425946_RuntimeMethod_var;
extern const uint32_t XElement_AppendAttributeSkipNotify_m1943425946_MetadataUsageId;
extern const RuntimeMethod* XElement_CloneNode_m287170390_RuntimeMethod_var;
extern const uint32_t XElement_CloneNode_m287170390_MetadataUsageId;
extern const RuntimeMethod* XElement_GetNamespaceOfPrefixInScope_m800190849_RuntimeMethod_var;
extern const uint32_t XElement_GetNamespaceOfPrefixInScope_m800190849_MetadataUsageId;
extern const RuntimeMethod* XElement_RemoveAttribute_m3798880449_RuntimeMethod_var;
extern const uint32_t XElement_RemoveAttribute_m3798880449_MetadataUsageId;
extern RuntimeClass* LineInfoEndElementAnnotation_t493731080_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XElement_SetEndElementLineInfo_m3917701571_RuntimeMethod_var;
extern const uint32_t XElement_SetEndElementLineInfo_m3917701571_MetadataUsageId;
extern const RuntimeMethod* XElement_ValidateNode_m267639648_RuntimeMethod_var;
extern const uint32_t XElement_ValidateNode_m267639648_MetadataUsageId;
extern const RuntimeMethod* XName__ctor_m10147428_RuntimeMethod_var;
extern const uint32_t XName__ctor_m10147428_MetadataUsageId;
extern const RuntimeMethod* XName_get_LocalName_m2163884361_RuntimeMethod_var;
extern const uint32_t XName_get_LocalName_m2163884361_MetadataUsageId;
extern const RuntimeMethod* XName_get_Namespace_m4023955522_RuntimeMethod_var;
extern const uint32_t XName_get_Namespace_m4023955522_MetadataUsageId;
extern const RuntimeMethod* XName_get_NamespaceName_m1113219825_RuntimeMethod_var;
extern const uint32_t XName_get_NamespaceName_m1113219825_MetadataUsageId;
extern const RuntimeMethod* XName_ToString_m2643581250_RuntimeMethod_var;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral3452614611;
extern const uint32_t XName_ToString_m2643581250_MetadataUsageId;
extern const RuntimeMethod* XName_Get_m1522378289_RuntimeMethod_var;
extern String_t* _stringLiteral3634912706;
extern const uint32_t XName_Get_m1522378289_MetadataUsageId;
extern const RuntimeMethod* XName_op_Implicit_m4126397159_RuntimeMethod_var;
extern const uint32_t XName_op_Implicit_m4126397159_MetadataUsageId;
extern const RuntimeMethod* XName_Equals_m2715300575_RuntimeMethod_var;
extern const uint32_t XName_Equals_m2715300575_MetadataUsageId;
extern const RuntimeMethod* XName_GetHashCode_m2555446476_RuntimeMethod_var;
extern const uint32_t XName_GetHashCode_m2555446476_MetadataUsageId;
extern const RuntimeMethod* XName_op_Equality_m1536062490_RuntimeMethod_var;
extern const uint32_t XName_op_Equality_m1536062490_MetadataUsageId;
extern const RuntimeMethod* XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_m923065646_RuntimeMethod_var;
extern const uint32_t XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_m923065646_MetadataUsageId;
extern const RuntimeType* NameSerializer_t1284368626_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XName_System_Runtime_Serialization_ISerializable_GetObjectData_m2812957368_RuntimeMethod_var;
extern const uint32_t XName_System_Runtime_Serialization_ISerializable_GetObjectData_m2812957368_MetadataUsageId;
extern RuntimeClass* ExtractKeyDelegate_t3535032598_il2cpp_TypeInfo_var;
extern RuntimeClass* XHashtable_1_t2293621225_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XNamespace__ctor_m1972467617_RuntimeMethod_var;
extern const RuntimeMethod* XNamespace_ExtractLocalName_m2332148048_RuntimeMethod_var;
extern const RuntimeMethod* ExtractKeyDelegate__ctor_m1028128969_RuntimeMethod_var;
extern const RuntimeMethod* XHashtable_1__ctor_m2987613868_RuntimeMethod_var;
extern const uint32_t XNamespace__ctor_m1972467617_MetadataUsageId;
extern const RuntimeMethod* XNamespace_get_NamespaceName_m2952101840_RuntimeMethod_var;
extern const uint32_t XNamespace_get_NamespaceName_m2952101840_MetadataUsageId;
extern const RuntimeMethod* XNamespace_GetName_m1445243739_RuntimeMethod_var;
extern String_t* _stringLiteral2412661638;
extern const uint32_t XNamespace_GetName_m1445243739_MetadataUsageId;
extern const RuntimeMethod* XNamespace_ToString_m4281238012_RuntimeMethod_var;
extern const uint32_t XNamespace_ToString_m4281238012_MetadataUsageId;
extern RuntimeClass* XNamespace_t1843508170_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XNamespace_get_None_m394397613_RuntimeMethod_var;
extern const uint32_t XNamespace_get_None_m394397613_MetadataUsageId;
extern const RuntimeMethod* XNamespace_get_Xml_m937341851_RuntimeMethod_var;
extern const uint32_t XNamespace_get_Xml_m937341851_MetadataUsageId;
extern const RuntimeMethod* XNamespace_get_Xmlns_m2148974693_RuntimeMethod_var;
extern const uint32_t XNamespace_get_Xmlns_m2148974693_MetadataUsageId;
extern const RuntimeMethod* XNamespace_Get_m9299589_RuntimeMethod_var;
extern String_t* _stringLiteral1875761611;
extern const uint32_t XNamespace_Get_m9299589_MetadataUsageId;
extern const RuntimeMethod* XNamespace_op_Implicit_m1109018013_RuntimeMethod_var;
extern const uint32_t XNamespace_op_Implicit_m1109018013_MetadataUsageId;
extern const RuntimeMethod* XNamespace_op_Addition_m245057238_RuntimeMethod_var;
extern const uint32_t XNamespace_op_Addition_m245057238_MetadataUsageId;
extern const RuntimeMethod* XNamespace_Equals_m291863040_RuntimeMethod_var;
extern const uint32_t XNamespace_Equals_m291863040_MetadataUsageId;
extern const RuntimeMethod* XNamespace_GetHashCode_m4127606670_RuntimeMethod_var;
extern const uint32_t XNamespace_GetHashCode_m4127606670_MetadataUsageId;
extern const RuntimeMethod* XNamespace_op_Equality_m3113830840_RuntimeMethod_var;
extern const uint32_t XNamespace_op_Equality_m3113830840_MetadataUsageId;
extern const RuntimeMethod* XNamespace_op_Inequality_m3269657107_RuntimeMethod_var;
extern const uint32_t XNamespace_op_Inequality_m3269657107_MetadataUsageId;
extern RuntimeClass* XName_t3751455998_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XNamespace_GetName_m1518993676_RuntimeMethod_var;
extern const RuntimeMethod* XHashtable_1_TryGetValue_m3827769208_RuntimeMethod_var;
extern const RuntimeMethod* XHashtable_1_Add_m3409537762_RuntimeMethod_var;
extern const uint32_t XNamespace_GetName_m1518993676_MetadataUsageId;
extern RuntimeClass* ExtractKeyDelegate_t1118463316_il2cpp_TypeInfo_var;
extern RuntimeClass* XHashtable_1_t4172019239_il2cpp_TypeInfo_var;
extern RuntimeClass* WeakReference_t1334886716_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XNamespace_Get_m2806450384_RuntimeMethod_var;
extern const RuntimeMethod* XNamespace_ExtractNamespace_m1191667730_RuntimeMethod_var;
extern const RuntimeMethod* ExtractKeyDelegate__ctor_m2194429002_RuntimeMethod_var;
extern const RuntimeMethod* XHashtable_1__ctor_m3583225800_RuntimeMethod_var;
extern const RuntimeMethod* XHashtable_1_TryGetValue_m935372797_RuntimeMethod_var;
extern const RuntimeMethod* XHashtable_1_Add_m2203465367_RuntimeMethod_var;
extern const uint32_t XNamespace_Get_m2806450384_MetadataUsageId;
extern const uint32_t XNamespace_ExtractLocalName_m2332148048_MetadataUsageId;
extern const uint32_t XNamespace_ExtractNamespace_m1191667730_MetadataUsageId;
extern const RuntimeMethod* XNamespace_EnsureNamespace_m3490636692_RuntimeMethod_var;
extern const uint32_t XNamespace_EnsureNamespace_m3490636692_MetadataUsageId;
extern const RuntimeMethod* XNode__ctor_m2640711240_RuntimeMethod_var;
extern const uint32_t XNode__ctor_m2640711240_MetadataUsageId;
extern const RuntimeMethod* XNode_ToString_m3831992069_RuntimeMethod_var;
extern const uint32_t XNode_ToString_m3831992069_MetadataUsageId;
extern const RuntimeMethod* XNode_AppendText_m2610480790_RuntimeMethod_var;
extern const uint32_t XNode_AppendText_m2610480790_MetadataUsageId;
extern RuntimeClass* XmlReaderSettings_t2186285234_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XNode_GetXmlReaderSettings_m1372944662_RuntimeMethod_var;
extern const uint32_t XNode_GetXmlReaderSettings_m1372944662_MetadataUsageId;
extern const RuntimeMethod* XNode_GetXmlString_m3314186111_RuntimeMethod_var;
extern const uint32_t XNode_GetXmlString_m3314186111_MetadataUsageId;
extern const RuntimeMethod* XObject__ctor_m1122439361_RuntimeMethod_var;
extern const uint32_t XObject__ctor_m1122439361_MetadataUsageId;
extern const RuntimeMethod* XObject_get_BaseUri_m1095757722_RuntimeMethod_var;
extern const RuntimeMethod* XObject_Annotation_TisBaseUriAnnotation_t3843949084_m4137211088_RuntimeMethod_var;
extern const uint32_t XObject_get_BaseUri_m1095757722_MetadataUsageId;
extern const RuntimeMethod* XObject_AddAnnotation_m3707945256_RuntimeMethod_var;
extern const RuntimeMethod* Array_Resize_TisRuntimeObject_m2485852162_RuntimeMethod_var;
extern String_t* _stringLiteral1102688753;
extern const uint32_t XObject_AddAnnotation_m3707945256_MetadataUsageId;
extern const RuntimeMethod* XObject_Annotation_m2852752487_RuntimeMethod_var;
extern String_t* _stringLiteral3243520166;
extern const uint32_t XObject_Annotation_m2852752487_MetadataUsageId;
extern const RuntimeMethod* XObject_System_Xml_IXmlLineInfo_HasLineInfo_m3672028656_RuntimeMethod_var;
extern const RuntimeMethod* XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682_RuntimeMethod_var;
extern const uint32_t XObject_System_Xml_IXmlLineInfo_HasLineInfo_m3672028656_MetadataUsageId;
extern const RuntimeMethod* XObject_System_Xml_IXmlLineInfo_get_LineNumber_m2664708307_RuntimeMethod_var;
extern const uint32_t XObject_System_Xml_IXmlLineInfo_get_LineNumber_m2664708307_MetadataUsageId;
extern const RuntimeMethod* XObject_System_Xml_IXmlLineInfo_get_LinePosition_m3477809919_RuntimeMethod_var;
extern const uint32_t XObject_System_Xml_IXmlLineInfo_get_LinePosition_m3477809919_MetadataUsageId;
extern const RuntimeMethod* XObject_get_HasBaseUri_m2712212936_RuntimeMethod_var;
extern const uint32_t XObject_get_HasBaseUri_m2712212936_MetadataUsageId;
extern const RuntimeMethod* XObject_NotifyChanged_m1712984418_RuntimeMethod_var;
extern const RuntimeMethod* XObject_Annotation_TisXObjectChangeAnnotation_t288737304_m4053231645_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3142395161_RuntimeMethod_var;
extern const uint32_t XObject_NotifyChanged_m1712984418_MetadataUsageId;
extern const RuntimeMethod* XObject_NotifyChanging_m2437571179_RuntimeMethod_var;
extern const uint32_t XObject_NotifyChanging_m2437571179_MetadataUsageId;
extern RuntimeClass* BaseUriAnnotation_t3843949084_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XObject_SetBaseUri_m4069814171_RuntimeMethod_var;
extern const uint32_t XObject_SetBaseUri_m4069814171_MetadataUsageId;
extern RuntimeClass* LineInfoAnnotation_t2689670207_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XObject_SetLineInfo_m1298245039_RuntimeMethod_var;
extern const uint32_t XObject_SetLineInfo_m1298245039_MetadataUsageId;
extern const RuntimeType* SaveOptions_t2609998520_0_0_0_var;
extern RuntimeClass* SaveOptions_t2609998520_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XObject_GetSaveOptionsFromAnnotations_m2533200236_RuntimeMethod_var;
extern const uint32_t XObject_GetSaveOptionsFromAnnotations_m2533200236_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XObjectChangeEventArgs__ctor_m3430477771_RuntimeMethod_var;
extern const uint32_t XObjectChangeEventArgs__ctor_m3430477771_MetadataUsageId;
extern const RuntimeMethod* XObjectChangeEventArgs__cctor_m1335316579_RuntimeMethod_var;
extern const uint32_t XObjectChangeEventArgs__cctor_m1335316579_MetadataUsageId;
extern const RuntimeMethod* XProcessingInstruction__ctor_m3301977354_RuntimeMethod_var;
extern String_t* _stringLiteral2037252866;
extern const uint32_t XProcessingInstruction__ctor_m3301977354_MetadataUsageId;
extern const RuntimeMethod* XProcessingInstruction__ctor_m1711994690_RuntimeMethod_var;
extern const uint32_t XProcessingInstruction__ctor_m1711994690_MetadataUsageId;
extern const RuntimeMethod* XProcessingInstruction_get_NodeType_m2260243504_RuntimeMethod_var;
extern const uint32_t XProcessingInstruction_get_NodeType_m2260243504_MetadataUsageId;
extern const RuntimeMethod* XProcessingInstruction_WriteTo_m1771043257_RuntimeMethod_var;
extern const uint32_t XProcessingInstruction_WriteTo_m1771043257_MetadataUsageId;
extern const RuntimeMethod* XProcessingInstruction_CloneNode_m1122870944_RuntimeMethod_var;
extern const uint32_t XProcessingInstruction_CloneNode_m1122870944_MetadataUsageId;
extern const RuntimeMethod* XProcessingInstruction_ValidateName_m1199905831_RuntimeMethod_var;
extern const uint32_t XProcessingInstruction_ValidateName_m1199905831_MetadataUsageId;
extern const RuntimeMethod* XText__ctor_m2401333842_RuntimeMethod_var;
extern const uint32_t XText__ctor_m2401333842_MetadataUsageId;
extern const RuntimeMethod* XText__ctor_m694960668_RuntimeMethod_var;
extern const uint32_t XText__ctor_m694960668_MetadataUsageId;
extern const RuntimeMethod* XText_get_NodeType_m366400984_RuntimeMethod_var;
extern const uint32_t XText_get_NodeType_m366400984_MetadataUsageId;
extern const RuntimeMethod* XText_get_Value_m3622993421_RuntimeMethod_var;
extern const uint32_t XText_get_Value_m3622993421_MetadataUsageId;
extern const RuntimeMethod* XText_WriteTo_m2140000141_RuntimeMethod_var;
extern const uint32_t XText_WriteTo_m2140000141_MetadataUsageId;
extern const RuntimeMethod* XText_AppendText_m514946451_RuntimeMethod_var;
extern const uint32_t XText_AppendText_m514946451_MetadataUsageId;
extern const RuntimeMethod* XText_CloneNode_m2233873024_RuntimeMethod_var;
extern const uint32_t XText_CloneNode_m2233873024_MetadataUsageId;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureData_t1899656083_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745558_H
#define U3CMODULEU3E_T692745558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745558 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745558_H
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
#ifndef XHASHTABLE_1_T4172019239_H
#define XHASHTABLE_1_T4172019239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct  XHashtable_1_t4172019239  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_t492100118 * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_t4172019239, ___state_0)); }
	inline XHashtableState_t492100118 * get_state_0() const { return ___state_0; }
	inline XHashtableState_t492100118 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_t492100118 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((&___state_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XHASHTABLE_1_T4172019239_H
#ifndef NAMESERIALIZER_T1284368626_H
#define NAMESERIALIZER_T1284368626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.NameSerializer
struct  NameSerializer_t1284368626  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.NameSerializer::expandedName
	String_t* ___expandedName_0;

public:
	inline static int32_t get_offset_of_expandedName_0() { return static_cast<int32_t>(offsetof(NameSerializer_t1284368626, ___expandedName_0)); }
	inline String_t* get_expandedName_0() const { return ___expandedName_0; }
	inline String_t** get_address_of_expandedName_0() { return &___expandedName_0; }
	inline void set_expandedName_0(String_t* value)
	{
		___expandedName_0 = value;
		Il2CppCodeGenWriteBarrier((&___expandedName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESERIALIZER_T1284368626_H
#ifndef XOBJECTCHANGEANNOTATION_T288737304_H
#define XOBJECTCHANGEANNOTATION_T288737304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObjectChangeAnnotation
struct  XObjectChangeAnnotation_t288737304  : public RuntimeObject
{
public:
	// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> System.Xml.Linq.XObjectChangeAnnotation::changing
	EventHandler_1_t2871841264 * ___changing_0;
	// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> System.Xml.Linq.XObjectChangeAnnotation::changed
	EventHandler_1_t2871841264 * ___changed_1;

public:
	inline static int32_t get_offset_of_changing_0() { return static_cast<int32_t>(offsetof(XObjectChangeAnnotation_t288737304, ___changing_0)); }
	inline EventHandler_1_t2871841264 * get_changing_0() const { return ___changing_0; }
	inline EventHandler_1_t2871841264 ** get_address_of_changing_0() { return &___changing_0; }
	inline void set_changing_0(EventHandler_1_t2871841264 * value)
	{
		___changing_0 = value;
		Il2CppCodeGenWriteBarrier((&___changing_0), value);
	}

	inline static int32_t get_offset_of_changed_1() { return static_cast<int32_t>(offsetof(XObjectChangeAnnotation_t288737304, ___changed_1)); }
	inline EventHandler_1_t2871841264 * get_changed_1() const { return ___changed_1; }
	inline EventHandler_1_t2871841264 ** get_address_of_changed_1() { return &___changed_1; }
	inline void set_changed_1(EventHandler_1_t2871841264 * value)
	{
		___changed_1 = value;
		Il2CppCodeGenWriteBarrier((&___changed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XOBJECTCHANGEANNOTATION_T288737304_H
#ifndef XMLRESOLVER_T626023767_H
#define XMLRESOLVER_T626023767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_t626023767  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_T626023767_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef XNAME_T3751455998_H
#define XNAME_T3751455998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XName
struct  XName_t3751455998  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t1843508170 * ___ns_0;
	// System.String System.Xml.Linq.XName::localName
	String_t* ___localName_1;
	// System.Int32 System.Xml.Linq.XName::hashCode
	int32_t ___hashCode_2;

public:
	inline static int32_t get_offset_of_ns_0() { return static_cast<int32_t>(offsetof(XName_t3751455998, ___ns_0)); }
	inline XNamespace_t1843508170 * get_ns_0() const { return ___ns_0; }
	inline XNamespace_t1843508170 ** get_address_of_ns_0() { return &___ns_0; }
	inline void set_ns_0(XNamespace_t1843508170 * value)
	{
		___ns_0 = value;
		Il2CppCodeGenWriteBarrier((&___ns_0), value);
	}

	inline static int32_t get_offset_of_localName_1() { return static_cast<int32_t>(offsetof(XName_t3751455998, ___localName_1)); }
	inline String_t* get_localName_1() const { return ___localName_1; }
	inline String_t** get_address_of_localName_1() { return &___localName_1; }
	inline void set_localName_1(String_t* value)
	{
		___localName_1 = value;
		Il2CppCodeGenWriteBarrier((&___localName_1), value);
	}

	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(XName_t3751455998, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAME_T3751455998_H
#ifndef LINEINFOANNOTATION_T2689670207_H
#define LINEINFOANNOTATION_T2689670207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.LineInfoAnnotation
struct  LineInfoAnnotation_t2689670207  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.LineInfoAnnotation::lineNumber
	int32_t ___lineNumber_0;
	// System.Int32 System.Xml.Linq.LineInfoAnnotation::linePosition
	int32_t ___linePosition_1;

public:
	inline static int32_t get_offset_of_lineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t2689670207, ___lineNumber_0)); }
	inline int32_t get_lineNumber_0() const { return ___lineNumber_0; }
	inline int32_t* get_address_of_lineNumber_0() { return &___lineNumber_0; }
	inline void set_lineNumber_0(int32_t value)
	{
		___lineNumber_0 = value;
	}

	inline static int32_t get_offset_of_linePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t2689670207, ___linePosition_1)); }
	inline int32_t get_linePosition_1() const { return ___linePosition_1; }
	inline int32_t* get_address_of_linePosition_1() { return &___linePosition_1; }
	inline void set_linePosition_1(int32_t value)
	{
		___linePosition_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEINFOANNOTATION_T2689670207_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef RES_T3368445868_H
#define RES_T3368445868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.Res
struct  Res_t3368445868  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RES_T3368445868_H
#ifndef U3CGETDESCENDANTSU3ED__39_T2920852095_H
#define U3CGETDESCENDANTSU3ED__39_T2920852095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer/<GetDescendants>d__39
struct  U3CGetDescendantsU3Ed__39_t2920852095  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<GetDescendants>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::<>2__current
	XElement_t4185968754 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<GetDescendants>d__39::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::self
	bool ___self_3;
	// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::<>3__self
	bool ___U3CU3E3__self_4;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<GetDescendants>d__39::<>4__this
	XContainer_t3387731002 * ___U3CU3E4__this_5;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetDescendants>d__39::name
	XName_t3751455998 * ___name_6;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetDescendants>d__39::<>3__name
	XName_t3751455998 * ___U3CU3E3__name_7;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<GetDescendants>d__39::<n>5__1
	XNode_t716131460 * ___U3CnU3E5__1_8;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::<e>5__2
	XElement_t4185968754 * ___U3CeU3E5__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CU3E2__current_1)); }
	inline XElement_t4185968754 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XElement_t4185968754 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XElement_t4185968754 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_self_3() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___self_3)); }
	inline bool get_self_3() const { return ___self_3; }
	inline bool* get_address_of_self_3() { return &___self_3; }
	inline void set_self_3(bool value)
	{
		___self_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__self_4() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CU3E3__self_4)); }
	inline bool get_U3CU3E3__self_4() const { return ___U3CU3E3__self_4; }
	inline bool* get_address_of_U3CU3E3__self_4() { return &___U3CU3E3__self_4; }
	inline void set_U3CU3E3__self_4(bool value)
	{
		___U3CU3E3__self_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CU3E4__this_5)); }
	inline XContainer_t3387731002 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline XContainer_t3387731002 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(XContainer_t3387731002 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___name_6)); }
	inline XName_t3751455998 * get_name_6() const { return ___name_6; }
	inline XName_t3751455998 ** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(XName_t3751455998 * value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_7() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CU3E3__name_7)); }
	inline XName_t3751455998 * get_U3CU3E3__name_7() const { return ___U3CU3E3__name_7; }
	inline XName_t3751455998 ** get_address_of_U3CU3E3__name_7() { return &___U3CU3E3__name_7; }
	inline void set_U3CU3E3__name_7(XName_t3751455998 * value)
	{
		___U3CU3E3__name_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__name_7), value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CnU3E5__1_8)); }
	inline XNode_t716131460 * get_U3CnU3E5__1_8() const { return ___U3CnU3E5__1_8; }
	inline XNode_t716131460 ** get_address_of_U3CnU3E5__1_8() { return &___U3CnU3E5__1_8; }
	inline void set_U3CnU3E5__1_8(XNode_t716131460 * value)
	{
		___U3CnU3E5__1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnU3E5__1_8), value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t2920852095, ___U3CeU3E5__2_9)); }
	inline XElement_t4185968754 * get_U3CeU3E5__2_9() const { return ___U3CeU3E5__2_9; }
	inline XElement_t4185968754 ** get_address_of_U3CeU3E5__2_9() { return &___U3CeU3E5__2_9; }
	inline void set_U3CeU3E5__2_9(XElement_t4185968754 * value)
	{
		___U3CeU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CeU3E5__2_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETDESCENDANTSU3ED__39_T2920852095_H
#ifndef XMLREADER_T3121518892_H
#define XMLREADER_T3121518892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3121518892  : public RuntimeObject
{
public:

public:
};

struct XmlReader_t3121518892_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3121518892_H
#ifndef XHASHTABLE_1_T2293621225_H
#define XHASHTABLE_1_T2293621225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct  XHashtable_1_t2293621225  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_t2908669400 * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_t2293621225, ___state_0)); }
	inline XHashtableState_t2908669400 * get_state_0() const { return ___state_0; }
	inline XHashtableState_t2908669400 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_t2908669400 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((&___state_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XHASHTABLE_1_T2293621225_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t1281789340* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t2843939325* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t3940880105* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t2736202052 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_members_3)); }
	inline StringU5BU5D_t1281789340* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t1281789340** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t1281789340* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_3), value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_data_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_4), value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_types_5)); }
	inline TypeU5BU5D_t3940880105* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t3940880105* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_5), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_nameToIndex_6)); }
	inline Dictionary_2_t2736202052 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_t2736202052 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_6), value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_8), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_9), value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_10), value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_11), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef NAMESPACEDECLARATION_T1302953724_H
#define NAMESPACEDECLARATION_T1302953724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration
struct  NamespaceDeclaration_t1302953724  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::prefix
	String_t* ___prefix_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::ns
	XNamespace_t1843508170 * ___ns_1;
	// System.Int32 System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::scope
	int32_t ___scope_2;
	// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::prev
	NamespaceDeclaration_t1302953724 * ___prev_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t1302953724, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t1302953724, ___ns_1)); }
	inline XNamespace_t1843508170 * get_ns_1() const { return ___ns_1; }
	inline XNamespace_t1843508170 ** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(XNamespace_t1843508170 * value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}

	inline static int32_t get_offset_of_scope_2() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t1302953724, ___scope_2)); }
	inline int32_t get_scope_2() const { return ___scope_2; }
	inline int32_t* get_address_of_scope_2() { return &___scope_2; }
	inline void set_scope_2(int32_t value)
	{
		___scope_2 = value;
	}

	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_t1302953724, ___prev_3)); }
	inline NamespaceDeclaration_t1302953724 * get_prev_3() const { return ___prev_3; }
	inline NamespaceDeclaration_t1302953724 ** get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(NamespaceDeclaration_t1302953724 * value)
	{
		___prev_3 = value;
		Il2CppCodeGenWriteBarrier((&___prev_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEDECLARATION_T1302953724_H
#ifndef XDECLARATION_T2907650823_H
#define XDECLARATION_T2907650823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDeclaration
struct  XDeclaration_t2907650823  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XDeclaration::version
	String_t* ___version_0;
	// System.String System.Xml.Linq.XDeclaration::encoding
	String_t* ___encoding_1;
	// System.String System.Xml.Linq.XDeclaration::standalone
	String_t* ___standalone_2;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(XDeclaration_t2907650823, ___version_0)); }
	inline String_t* get_version_0() const { return ___version_0; }
	inline String_t** get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(String_t* value)
	{
		___version_0 = value;
		Il2CppCodeGenWriteBarrier((&___version_0), value);
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(XDeclaration_t2907650823, ___encoding_1)); }
	inline String_t* get_encoding_1() const { return ___encoding_1; }
	inline String_t** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(String_t* value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_1), value);
	}

	inline static int32_t get_offset_of_standalone_2() { return static_cast<int32_t>(offsetof(XDeclaration_t2907650823, ___standalone_2)); }
	inline String_t* get_standalone_2() const { return ___standalone_2; }
	inline String_t** get_address_of_standalone_2() { return &___standalone_2; }
	inline void set_standalone_2(String_t* value)
	{
		___standalone_2 = value;
		Il2CppCodeGenWriteBarrier((&___standalone_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDECLARATION_T2907650823_H
#ifndef XNAMESPACE_T1843508170_H
#define XNAMESPACE_T1843508170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNamespace
struct  XNamespace_t1843508170  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XNamespace::namespaceName
	String_t* ___namespaceName_4;
	// System.Int32 System.Xml.Linq.XNamespace::hashCode
	int32_t ___hashCode_5;
	// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> System.Xml.Linq.XNamespace::names
	XHashtable_1_t2293621225 * ___names_6;

public:
	inline static int32_t get_offset_of_namespaceName_4() { return static_cast<int32_t>(offsetof(XNamespace_t1843508170, ___namespaceName_4)); }
	inline String_t* get_namespaceName_4() const { return ___namespaceName_4; }
	inline String_t** get_address_of_namespaceName_4() { return &___namespaceName_4; }
	inline void set_namespaceName_4(String_t* value)
	{
		___namespaceName_4 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceName_4), value);
	}

	inline static int32_t get_offset_of_hashCode_5() { return static_cast<int32_t>(offsetof(XNamespace_t1843508170, ___hashCode_5)); }
	inline int32_t get_hashCode_5() const { return ___hashCode_5; }
	inline int32_t* get_address_of_hashCode_5() { return &___hashCode_5; }
	inline void set_hashCode_5(int32_t value)
	{
		___hashCode_5 = value;
	}

	inline static int32_t get_offset_of_names_6() { return static_cast<int32_t>(offsetof(XNamespace_t1843508170, ___names_6)); }
	inline XHashtable_1_t2293621225 * get_names_6() const { return ___names_6; }
	inline XHashtable_1_t2293621225 ** get_address_of_names_6() { return &___names_6; }
	inline void set_names_6(XHashtable_1_t2293621225 * value)
	{
		___names_6 = value;
		Il2CppCodeGenWriteBarrier((&___names_6), value);
	}
};

struct XNamespace_t1843508170_StaticFields
{
public:
	// System.Xml.Linq.XHashtable`1<System.WeakReference> System.Xml.Linq.XNamespace::namespaces
	XHashtable_1_t4172019239 * ___namespaces_0;
	// System.WeakReference System.Xml.Linq.XNamespace::refNone
	WeakReference_t1334886716 * ___refNone_1;
	// System.WeakReference System.Xml.Linq.XNamespace::refXml
	WeakReference_t1334886716 * ___refXml_2;
	// System.WeakReference System.Xml.Linq.XNamespace::refXmlns
	WeakReference_t1334886716 * ___refXmlns_3;

public:
	inline static int32_t get_offset_of_namespaces_0() { return static_cast<int32_t>(offsetof(XNamespace_t1843508170_StaticFields, ___namespaces_0)); }
	inline XHashtable_1_t4172019239 * get_namespaces_0() const { return ___namespaces_0; }
	inline XHashtable_1_t4172019239 ** get_address_of_namespaces_0() { return &___namespaces_0; }
	inline void set_namespaces_0(XHashtable_1_t4172019239 * value)
	{
		___namespaces_0 = value;
		Il2CppCodeGenWriteBarrier((&___namespaces_0), value);
	}

	inline static int32_t get_offset_of_refNone_1() { return static_cast<int32_t>(offsetof(XNamespace_t1843508170_StaticFields, ___refNone_1)); }
	inline WeakReference_t1334886716 * get_refNone_1() const { return ___refNone_1; }
	inline WeakReference_t1334886716 ** get_address_of_refNone_1() { return &___refNone_1; }
	inline void set_refNone_1(WeakReference_t1334886716 * value)
	{
		___refNone_1 = value;
		Il2CppCodeGenWriteBarrier((&___refNone_1), value);
	}

	inline static int32_t get_offset_of_refXml_2() { return static_cast<int32_t>(offsetof(XNamespace_t1843508170_StaticFields, ___refXml_2)); }
	inline WeakReference_t1334886716 * get_refXml_2() const { return ___refXml_2; }
	inline WeakReference_t1334886716 ** get_address_of_refXml_2() { return &___refXml_2; }
	inline void set_refXml_2(WeakReference_t1334886716 * value)
	{
		___refXml_2 = value;
		Il2CppCodeGenWriteBarrier((&___refXml_2), value);
	}

	inline static int32_t get_offset_of_refXmlns_3() { return static_cast<int32_t>(offsetof(XNamespace_t1843508170_StaticFields, ___refXmlns_3)); }
	inline WeakReference_t1334886716 * get_refXmlns_3() const { return ___refXmlns_3; }
	inline WeakReference_t1334886716 ** get_address_of_refXmlns_3() { return &___refXmlns_3; }
	inline void set_refXmlns_3(WeakReference_t1334886716 * value)
	{
		___refXmlns_3 = value;
		Il2CppCodeGenWriteBarrier((&___refXmlns_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAMESPACE_T1843508170_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef BASEURIANNOTATION_T3843949084_H
#define BASEURIANNOTATION_T3843949084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.BaseUriAnnotation
struct  BaseUriAnnotation_t3843949084  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.BaseUriAnnotation::baseUri
	String_t* ___baseUri_0;

public:
	inline static int32_t get_offset_of_baseUri_0() { return static_cast<int32_t>(offsetof(BaseUriAnnotation_t3843949084, ___baseUri_0)); }
	inline String_t* get_baseUri_0() const { return ___baseUri_0; }
	inline String_t** get_address_of_baseUri_0() { return &___baseUri_0; }
	inline void set_baseUri_0(String_t* value)
	{
		___baseUri_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEURIANNOTATION_T3843949084_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef XOBJECT_T1119084474_H
#define XOBJECT_T1119084474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObject
struct  XObject_t1119084474  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_t3387731002 * ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject * ___annotations_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XObject_t1119084474, ___parent_0)); }
	inline XContainer_t3387731002 * get_parent_0() const { return ___parent_0; }
	inline XContainer_t3387731002 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XContainer_t3387731002 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_annotations_1() { return static_cast<int32_t>(offsetof(XObject_t1119084474, ___annotations_1)); }
	inline RuntimeObject * get_annotations_1() const { return ___annotations_1; }
	inline RuntimeObject ** get_address_of_annotations_1() { return &___annotations_1; }
	inline void set_annotations_1(RuntimeObject * value)
	{
		___annotations_1 = value;
		Il2CppCodeGenWriteBarrier((&___annotations_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XOBJECT_T1119084474_H
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
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef XMLWRITER_T127905479_H
#define XMLWRITER_T127905479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t127905479  : public RuntimeObject
{
public:
	// System.Char[] System.Xml.XmlWriter::writeNodeBuffer
	CharU5BU5D_t3528271667* ___writeNodeBuffer_0;

public:
	inline static int32_t get_offset_of_writeNodeBuffer_0() { return static_cast<int32_t>(offsetof(XmlWriter_t127905479, ___writeNodeBuffer_0)); }
	inline CharU5BU5D_t3528271667* get_writeNodeBuffer_0() const { return ___writeNodeBuffer_0; }
	inline CharU5BU5D_t3528271667** get_address_of_writeNodeBuffer_0() { return &___writeNodeBuffer_0; }
	inline void set_writeNodeBuffer_0(CharU5BU5D_t3528271667* value)
	{
		___writeNodeBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___writeNodeBuffer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T127905479_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t1214474899 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t2317969963 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t1214474899 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t1214474899 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t1214474899 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&____ReadLineDelegate_1), value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t2317969963 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t2317969963 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t2317969963 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____ReadDelegate_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_3)); }
	inline TextReader_t283511965 * get_Null_3() const { return ___Null_3; }
	inline TextReader_t283511965 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t283511965 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
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
#ifndef XATTRIBUTE_T355876829_H
#define XATTRIBUTE_T355876829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XAttribute
struct  XAttribute_t355876829  : public XObject_t1119084474
{
public:
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_t355876829 * ___next_2;
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_t3751455998 * ___name_3;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_4;

public:
	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(XAttribute_t355876829, ___next_2)); }
	inline XAttribute_t355876829 * get_next_2() const { return ___next_2; }
	inline XAttribute_t355876829 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(XAttribute_t355876829 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(XAttribute_t355876829, ___name_3)); }
	inline XName_t3751455998 * get_name_3() const { return ___name_3; }
	inline XName_t3751455998 ** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(XName_t3751455998 * value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(XAttribute_t355876829, ___value_4)); }
	inline String_t* get_value_4() const { return ___value_4; }
	inline String_t** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(String_t* value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier((&___value_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XATTRIBUTE_T355876829_H
#ifndef XNODE_T716131460_H
#define XNODE_T716131460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNode
struct  XNode_t716131460  : public XObject_t1119084474
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t716131460 * ___next_2;

public:
	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(XNode_t716131460, ___next_2)); }
	inline XNode_t716131460 * get_next_2() const { return ___next_2; }
	inline XNode_t716131460 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(XNode_t716131460 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODE_T716131460_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public MarshalByRefObject_t2760389100
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_9)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t3252573759 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t3252573759 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t3252573759 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t3252573759 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t3252573759 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_1)); }
	inline TextWriter_t3478189236 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t3478189236 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t3478189236 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t3252573759 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t3252573759 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t3252573759 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t3252573759 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t3252573759 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t3252573759 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t3252573759 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t3252573759 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t3252573759 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t3252573759 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t3252573759 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t3252573759 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t3252573759 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t3252573759 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t3252573759 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t3252573759 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef NAMESPACERESOLVER_T1487275418_H
#define NAMESPACERESOLVER_T1487275418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.NamespaceResolver
struct  NamespaceResolver_t1487275418 
{
public:
	// System.Int32 System.Xml.Linq.NamespaceResolver::scope
	int32_t ___scope_0;
	// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration System.Xml.Linq.NamespaceResolver::declaration
	NamespaceDeclaration_t1302953724 * ___declaration_1;
	// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration System.Xml.Linq.NamespaceResolver::rover
	NamespaceDeclaration_t1302953724 * ___rover_2;

public:
	inline static int32_t get_offset_of_scope_0() { return static_cast<int32_t>(offsetof(NamespaceResolver_t1487275418, ___scope_0)); }
	inline int32_t get_scope_0() const { return ___scope_0; }
	inline int32_t* get_address_of_scope_0() { return &___scope_0; }
	inline void set_scope_0(int32_t value)
	{
		___scope_0 = value;
	}

	inline static int32_t get_offset_of_declaration_1() { return static_cast<int32_t>(offsetof(NamespaceResolver_t1487275418, ___declaration_1)); }
	inline NamespaceDeclaration_t1302953724 * get_declaration_1() const { return ___declaration_1; }
	inline NamespaceDeclaration_t1302953724 ** get_address_of_declaration_1() { return &___declaration_1; }
	inline void set_declaration_1(NamespaceDeclaration_t1302953724 * value)
	{
		___declaration_1 = value;
		Il2CppCodeGenWriteBarrier((&___declaration_1), value);
	}

	inline static int32_t get_offset_of_rover_2() { return static_cast<int32_t>(offsetof(NamespaceResolver_t1487275418, ___rover_2)); }
	inline NamespaceDeclaration_t1302953724 * get_rover_2() const { return ___rover_2; }
	inline NamespaceDeclaration_t1302953724 ** get_address_of_rover_2() { return &___rover_2; }
	inline void set_rover_2(NamespaceDeclaration_t1302953724 * value)
	{
		___rover_2 = value;
		Il2CppCodeGenWriteBarrier((&___rover_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Linq.NamespaceResolver
struct NamespaceResolver_t1487275418_marshaled_pinvoke
{
	int32_t ___scope_0;
	NamespaceDeclaration_t1302953724 * ___declaration_1;
	NamespaceDeclaration_t1302953724 * ___rover_2;
};
// Native definition for COM marshalling of System.Xml.Linq.NamespaceResolver
struct NamespaceResolver_t1487275418_marshaled_com
{
	int32_t ___scope_0;
	NamespaceDeclaration_t1302953724 * ___declaration_1;
	NamespaceDeclaration_t1302953724 * ___rover_2;
};
#endif // NAMESPACERESOLVER_T1487275418_H
#ifndef NAMESPACECACHE_T3512832689_H
#define NAMESPACECACHE_T3512832689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.NamespaceCache
struct  NamespaceCache_t3512832689 
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceCache::ns
	XNamespace_t1843508170 * ___ns_0;
	// System.String System.Xml.Linq.NamespaceCache::namespaceName
	String_t* ___namespaceName_1;

public:
	inline static int32_t get_offset_of_ns_0() { return static_cast<int32_t>(offsetof(NamespaceCache_t3512832689, ___ns_0)); }
	inline XNamespace_t1843508170 * get_ns_0() const { return ___ns_0; }
	inline XNamespace_t1843508170 ** get_address_of_ns_0() { return &___ns_0; }
	inline void set_ns_0(XNamespace_t1843508170 * value)
	{
		___ns_0 = value;
		Il2CppCodeGenWriteBarrier((&___ns_0), value);
	}

	inline static int32_t get_offset_of_namespaceName_1() { return static_cast<int32_t>(offsetof(NamespaceCache_t3512832689, ___namespaceName_1)); }
	inline String_t* get_namespaceName_1() const { return ___namespaceName_1; }
	inline String_t** get_address_of_namespaceName_1() { return &___namespaceName_1; }
	inline void set_namespaceName_1(String_t* value)
	{
		___namespaceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Linq.NamespaceCache
struct NamespaceCache_t3512832689_marshaled_pinvoke
{
	XNamespace_t1843508170 * ___ns_0;
	char* ___namespaceName_1;
};
// Native definition for COM marshalling of System.Xml.Linq.NamespaceCache
struct NamespaceCache_t3512832689_marshaled_com
{
	XNamespace_t1843508170 * ___ns_0;
	Il2CppChar* ___namespaceName_1;
};
#endif // NAMESPACECACHE_T3512832689_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef LINEINFOENDELEMENTANNOTATION_T493731080_H
#define LINEINFOENDELEMENTANNOTATION_T493731080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.LineInfoEndElementAnnotation
struct  LineInfoEndElementAnnotation_t493731080  : public LineInfoAnnotation_t2689670207
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEINFOENDELEMENTANNOTATION_T493731080_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef XCONTAINER_T3387731002_H
#define XCONTAINER_T3387731002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer
struct  XContainer_t3387731002  : public XNode_t716131460
{
public:
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject * ___content_3;

public:
	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(XContainer_t3387731002, ___content_3)); }
	inline RuntimeObject * get_content_3() const { return ___content_3; }
	inline RuntimeObject ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(RuntimeObject * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier((&___content_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCONTAINER_T3387731002_H
#ifndef NAMESPACEHANDLING_T4087553436_H
#define NAMESPACEHANDLING_T4087553436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NamespaceHandling
struct  NamespaceHandling_t4087553436 
{
public:
	// System.Int32 System.Xml.NamespaceHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NamespaceHandling_t4087553436, ___value___2)); }
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
#endif // NAMESPACEHANDLING_T4087553436_H
#ifndef LOADOPTIONS_T4182560034_H
#define LOADOPTIONS_T4182560034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.LoadOptions
struct  LoadOptions_t4182560034 
{
public:
	// System.Int32 System.Xml.Linq.LoadOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadOptions_t4182560034, ___value___2)); }
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
#endif // LOADOPTIONS_T4182560034_H
#ifndef XOBJECTCHANGE_T358243840_H
#define XOBJECTCHANGE_T358243840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObjectChange
struct  XObjectChange_t358243840 
{
public:
	// System.Int32 System.Xml.Linq.XObjectChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XObjectChange_t358243840, ___value___2)); }
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
#endif // XOBJECTCHANGE_T358243840_H
#ifndef DTDPROCESSING_T1163997051_H
#define DTDPROCESSING_T1163997051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.DtdProcessing
struct  DtdProcessing_t1163997051 
{
public:
	// System.Int32 System.Xml.DtdProcessing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DtdProcessing_t1163997051, ___value___2)); }
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
#endif // DTDPROCESSING_T1163997051_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___2)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef VALIDATIONTYPE_T4049928607_H
#define VALIDATIONTYPE_T4049928607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ValidationType
struct  ValidationType_t4049928607 
{
public:
	// System.Int32 System.Xml.ValidationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidationType_t4049928607, ___value___2)); }
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
#endif // VALIDATIONTYPE_T4049928607_H
#ifndef XMLSTANDALONE_T2027388713_H
#define XMLSTANDALONE_T2027388713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlStandalone
struct  XmlStandalone_t2027388713 
{
public:
	// System.Int32 System.Xml.XmlStandalone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlStandalone_t2027388713, ___value___2)); }
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
#endif // XMLSTANDALONE_T2027388713_H
#ifndef XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#define XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidationFlags
struct  XmlSchemaValidationFlags_t877176585 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaValidationFlags_t877176585, ___value___2)); }
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
#endif // XMLSCHEMAVALIDATIONFLAGS_T877176585_H
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
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ELEMENTWRITER_T1843505097_H
#define ELEMENTWRITER_T1843505097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.ElementWriter
struct  ElementWriter_t1843505097 
{
public:
	// System.Xml.XmlWriter System.Xml.Linq.ElementWriter::writer
	XmlWriter_t127905479 * ___writer_0;
	// System.Xml.Linq.NamespaceResolver System.Xml.Linq.ElementWriter::resolver
	NamespaceResolver_t1487275418  ___resolver_1;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(ElementWriter_t1843505097, ___writer_0)); }
	inline XmlWriter_t127905479 * get_writer_0() const { return ___writer_0; }
	inline XmlWriter_t127905479 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(XmlWriter_t127905479 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((&___writer_0), value);
	}

	inline static int32_t get_offset_of_resolver_1() { return static_cast<int32_t>(offsetof(ElementWriter_t1843505097, ___resolver_1)); }
	inline NamespaceResolver_t1487275418  get_resolver_1() const { return ___resolver_1; }
	inline NamespaceResolver_t1487275418 * get_address_of_resolver_1() { return &___resolver_1; }
	inline void set_resolver_1(NamespaceResolver_t1487275418  value)
	{
		___resolver_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Linq.ElementWriter
struct ElementWriter_t1843505097_marshaled_pinvoke
{
	XmlWriter_t127905479 * ___writer_0;
	NamespaceResolver_t1487275418_marshaled_pinvoke ___resolver_1;
};
// Native definition for COM marshalling of System.Xml.Linq.ElementWriter
struct ElementWriter_t1843505097_marshaled_com
{
	XmlWriter_t127905479 * ___writer_0;
	NamespaceResolver_t1487275418_marshaled_com ___resolver_1;
};
#endif // ELEMENTWRITER_T1843505097_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___2)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef NEWLINEHANDLING_T850339274_H
#define NEWLINEHANDLING_T850339274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NewLineHandling
struct  NewLineHandling_t850339274 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NewLineHandling_t850339274, ___value___2)); }
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
#endif // NEWLINEHANDLING_T850339274_H
#ifndef XMLOUTPUTMETHOD_T2185361861_H
#define XMLOUTPUTMETHOD_T2185361861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlOutputMethod
struct  XmlOutputMethod_t2185361861 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t2185361861, ___value___2)); }
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
#endif // XMLOUTPUTMETHOD_T2185361861_H
#ifndef TRISTATE_T50539540_H
#define TRISTATE_T50539540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.TriState
struct  TriState_t50539540 
{
public:
	// System.Int32 System.Xml.TriState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriState_t50539540, ___value___2)); }
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
#endif // TRISTATE_T50539540_H
#ifndef SAVEOPTIONS_T2609998520_H
#define SAVEOPTIONS_T2609998520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.SaveOptions
struct  SaveOptions_t2609998520 
{
public:
	// System.Int32 System.Xml.Linq.SaveOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SaveOptions_t2609998520, ___value___2)); }
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
#endif // SAVEOPTIONS_T2609998520_H
#ifndef XMLNODETYPE_T1672767151_H
#define XMLNODETYPE_T1672767151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t1672767151 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_t1672767151, ___value___2)); }
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
#endif // XMLNODETYPE_T1672767151_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef XPROCESSINGINSTRUCTION_T2943691487_H
#define XPROCESSINGINSTRUCTION_T2943691487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XProcessingInstruction
struct  XProcessingInstruction_t2943691487  : public XNode_t716131460
{
public:
	// System.String System.Xml.Linq.XProcessingInstruction::target
	String_t* ___target_3;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_4;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2943691487, ___target_3)); }
	inline String_t* get_target_3() const { return ___target_3; }
	inline String_t** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(String_t* value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier((&___target_3), value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2943691487, ___data_4)); }
	inline String_t* get_data_4() const { return ___data_4; }
	inline String_t** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(String_t* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((&___data_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPROCESSINGINSTRUCTION_T2943691487_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef READSTATE_T944984020_H
#define READSTATE_T944984020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadState
struct  ReadState_t944984020 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadState_t944984020, ___value___2)); }
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
#endif // READSTATE_T944984020_H
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_12;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_13;

public:
	inline static int32_t get_offset_of__sb_12() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ____sb_12)); }
	inline StringBuilder_t * get__sb_12() const { return ____sb_12; }
	inline StringBuilder_t ** get_address_of__sb_12() { return &____sb_12; }
	inline void set__sb_12(StringBuilder_t * value)
	{
		____sb_12 = value;
		Il2CppCodeGenWriteBarrier((&____sb_12), value);
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}
};

struct StringWriter_t802263757_StaticFields
{
public:
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_t1959134050 * ___m_encoding_11;

public:
	inline static int32_t get_offset_of_m_encoding_11() { return static_cast<int32_t>(offsetof(StringWriter_t802263757_StaticFields, ___m_encoding_11)); }
	inline UnicodeEncoding_t1959134050 * get_m_encoding_11() const { return ___m_encoding_11; }
	inline UnicodeEncoding_t1959134050 ** get_address_of_m_encoding_11() { return &___m_encoding_11; }
	inline void set_m_encoding_11(UnicodeEncoding_t1959134050 * value)
	{
		___m_encoding_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
#ifndef XCOMMENT_T1832251191_H
#define XCOMMENT_T1832251191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XComment
struct  XComment_t1832251191  : public XNode_t716131460
{
public:
	// System.String System.Xml.Linq.XComment::value
	String_t* ___value_3;

public:
	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(XComment_t1832251191, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((&___value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCOMMENT_T1832251191_H
#ifndef XTEXT_T1448860321_H
#define XTEXT_T1448860321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XText
struct  XText_t1448860321  : public XNode_t716131460
{
public:
	// System.String System.Xml.Linq.XText::text
	String_t* ___text_3;

public:
	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(XText_t1448860321, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTEXT_T1448860321_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef CONFORMANCELEVEL_T3899847875_H
#define CONFORMANCELEVEL_T3899847875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3899847875 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3899847875, ___value___2)); }
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
#endif // CONFORMANCELEVEL_T3899847875_H
#ifndef XMLDATETIMESERIALIZATIONMODE_T1214355817_H
#define XMLDATETIMESERIALIZATIONMODE_T1214355817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDateTimeSerializationMode
struct  XmlDateTimeSerializationMode_t1214355817 
{
public:
	// System.Int32 System.Xml.XmlDateTimeSerializationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlDateTimeSerializationMode_t1214355817, ___value___2)); }
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
#endif // XMLDATETIMESERIALIZATIONMODE_T1214355817_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((&____s_4), value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef XDOCUMENTTYPE_T1853592271_H
#define XDOCUMENTTYPE_T1853592271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocumentType
struct  XDocumentType_t1853592271  : public XNode_t716131460
{
public:
	// System.String System.Xml.Linq.XDocumentType::name
	String_t* ___name_3;
	// System.String System.Xml.Linq.XDocumentType::publicId
	String_t* ___publicId_4;
	// System.String System.Xml.Linq.XDocumentType::systemId
	String_t* ___systemId_5;
	// System.String System.Xml.Linq.XDocumentType::internalSubset
	String_t* ___internalSubset_6;
	// System.Xml.IDtdInfo System.Xml.Linq.XDocumentType::dtdInfo
	RuntimeObject* ___dtdInfo_7;

public:
	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(XDocumentType_t1853592271, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_publicId_4() { return static_cast<int32_t>(offsetof(XDocumentType_t1853592271, ___publicId_4)); }
	inline String_t* get_publicId_4() const { return ___publicId_4; }
	inline String_t** get_address_of_publicId_4() { return &___publicId_4; }
	inline void set_publicId_4(String_t* value)
	{
		___publicId_4 = value;
		Il2CppCodeGenWriteBarrier((&___publicId_4), value);
	}

	inline static int32_t get_offset_of_systemId_5() { return static_cast<int32_t>(offsetof(XDocumentType_t1853592271, ___systemId_5)); }
	inline String_t* get_systemId_5() const { return ___systemId_5; }
	inline String_t** get_address_of_systemId_5() { return &___systemId_5; }
	inline void set_systemId_5(String_t* value)
	{
		___systemId_5 = value;
		Il2CppCodeGenWriteBarrier((&___systemId_5), value);
	}

	inline static int32_t get_offset_of_internalSubset_6() { return static_cast<int32_t>(offsetof(XDocumentType_t1853592271, ___internalSubset_6)); }
	inline String_t* get_internalSubset_6() const { return ___internalSubset_6; }
	inline String_t** get_address_of_internalSubset_6() { return &___internalSubset_6; }
	inline void set_internalSubset_6(String_t* value)
	{
		___internalSubset_6 = value;
		Il2CppCodeGenWriteBarrier((&___internalSubset_6), value);
	}

	inline static int32_t get_offset_of_dtdInfo_7() { return static_cast<int32_t>(offsetof(XDocumentType_t1853592271, ___dtdInfo_7)); }
	inline RuntimeObject* get_dtdInfo_7() const { return ___dtdInfo_7; }
	inline RuntimeObject** get_address_of_dtdInfo_7() { return &___dtdInfo_7; }
	inline void set_dtdInfo_7(RuntimeObject* value)
	{
		___dtdInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___dtdInfo_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDOCUMENTTYPE_T1853592271_H
#ifndef XMLWRITERSETTINGS_T3314986516_H
#define XMLWRITERSETTINGS_T3314986516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriterSettings
struct  XmlWriterSettings_t3314986516  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::useAsync
	bool ___useAsync_0;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t1523322056 * ___encoding_1;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDecl
	bool ___omitXmlDecl_2;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_3;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_4;
	// System.Xml.TriState System.Xml.XmlWriterSettings::indent
	int32_t ___indent_5;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_8;
	// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::namespaceHandling
	int32_t ___namespaceHandling_9;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformanceLevel
	int32_t ___conformanceLevel_10;
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_11;
	// System.Boolean System.Xml.XmlWriterSettings::writeEndDocumentOnClose
	bool ___writeEndDocumentOnClose_12;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_13;
	// System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> System.Xml.XmlWriterSettings::cdataSections
	List_1_t4232729054 * ___cdataSections_14;
	// System.Boolean System.Xml.XmlWriterSettings::doNotEscapeUriAttributes
	bool ___doNotEscapeUriAttributes_15;
	// System.Boolean System.Xml.XmlWriterSettings::mergeCDataSections
	bool ___mergeCDataSections_16;
	// System.String System.Xml.XmlWriterSettings::mediaType
	String_t* ___mediaType_17;
	// System.String System.Xml.XmlWriterSettings::docTypeSystem
	String_t* ___docTypeSystem_18;
	// System.String System.Xml.XmlWriterSettings::docTypePublic
	String_t* ___docTypePublic_19;
	// System.Xml.XmlStandalone System.Xml.XmlWriterSettings::standalone
	int32_t ___standalone_20;
	// System.Boolean System.Xml.XmlWriterSettings::autoXmlDecl
	bool ___autoXmlDecl_21;
	// System.Boolean System.Xml.XmlWriterSettings::isReadOnly
	bool ___isReadOnly_22;

public:
	inline static int32_t get_offset_of_useAsync_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___useAsync_0)); }
	inline bool get_useAsync_0() const { return ___useAsync_0; }
	inline bool* get_address_of_useAsync_0() { return &___useAsync_0; }
	inline void set_useAsync_0(bool value)
	{
		___useAsync_0 = value;
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___encoding_1)); }
	inline Encoding_t1523322056 * get_encoding_1() const { return ___encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(Encoding_t1523322056 * value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_1), value);
	}

	inline static int32_t get_offset_of_omitXmlDecl_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___omitXmlDecl_2)); }
	inline bool get_omitXmlDecl_2() const { return ___omitXmlDecl_2; }
	inline bool* get_address_of_omitXmlDecl_2() { return &___omitXmlDecl_2; }
	inline void set_omitXmlDecl_2(bool value)
	{
		___omitXmlDecl_2 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineHandling_3)); }
	inline int32_t get_newLineHandling_3() const { return ___newLineHandling_3; }
	inline int32_t* get_address_of_newLineHandling_3() { return &___newLineHandling_3; }
	inline void set_newLineHandling_3(int32_t value)
	{
		___newLineHandling_3 = value;
	}

	inline static int32_t get_offset_of_newLineChars_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineChars_4)); }
	inline String_t* get_newLineChars_4() const { return ___newLineChars_4; }
	inline String_t** get_address_of_newLineChars_4() { return &___newLineChars_4; }
	inline void set_newLineChars_4(String_t* value)
	{
		___newLineChars_4 = value;
		Il2CppCodeGenWriteBarrier((&___newLineChars_4), value);
	}

	inline static int32_t get_offset_of_indent_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indent_5)); }
	inline int32_t get_indent_5() const { return ___indent_5; }
	inline int32_t* get_address_of_indent_5() { return &___indent_5; }
	inline void set_indent_5(int32_t value)
	{
		___indent_5 = value;
	}

	inline static int32_t get_offset_of_indentChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indentChars_6)); }
	inline String_t* get_indentChars_6() const { return ___indentChars_6; }
	inline String_t** get_address_of_indentChars_6() { return &___indentChars_6; }
	inline void set_indentChars_6(String_t* value)
	{
		___indentChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___indentChars_6), value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_closeOutput_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___closeOutput_8)); }
	inline bool get_closeOutput_8() const { return ___closeOutput_8; }
	inline bool* get_address_of_closeOutput_8() { return &___closeOutput_8; }
	inline void set_closeOutput_8(bool value)
	{
		___closeOutput_8 = value;
	}

	inline static int32_t get_offset_of_namespaceHandling_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___namespaceHandling_9)); }
	inline int32_t get_namespaceHandling_9() const { return ___namespaceHandling_9; }
	inline int32_t* get_address_of_namespaceHandling_9() { return &___namespaceHandling_9; }
	inline void set_namespaceHandling_9(int32_t value)
	{
		___namespaceHandling_9 = value;
	}

	inline static int32_t get_offset_of_conformanceLevel_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___conformanceLevel_10)); }
	inline int32_t get_conformanceLevel_10() const { return ___conformanceLevel_10; }
	inline int32_t* get_address_of_conformanceLevel_10() { return &___conformanceLevel_10; }
	inline void set_conformanceLevel_10(int32_t value)
	{
		___conformanceLevel_10 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_11() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___checkCharacters_11)); }
	inline bool get_checkCharacters_11() const { return ___checkCharacters_11; }
	inline bool* get_address_of_checkCharacters_11() { return &___checkCharacters_11; }
	inline void set_checkCharacters_11(bool value)
	{
		___checkCharacters_11 = value;
	}

	inline static int32_t get_offset_of_writeEndDocumentOnClose_12() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___writeEndDocumentOnClose_12)); }
	inline bool get_writeEndDocumentOnClose_12() const { return ___writeEndDocumentOnClose_12; }
	inline bool* get_address_of_writeEndDocumentOnClose_12() { return &___writeEndDocumentOnClose_12; }
	inline void set_writeEndDocumentOnClose_12(bool value)
	{
		___writeEndDocumentOnClose_12 = value;
	}

	inline static int32_t get_offset_of_outputMethod_13() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___outputMethod_13)); }
	inline int32_t get_outputMethod_13() const { return ___outputMethod_13; }
	inline int32_t* get_address_of_outputMethod_13() { return &___outputMethod_13; }
	inline void set_outputMethod_13(int32_t value)
	{
		___outputMethod_13 = value;
	}

	inline static int32_t get_offset_of_cdataSections_14() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___cdataSections_14)); }
	inline List_1_t4232729054 * get_cdataSections_14() const { return ___cdataSections_14; }
	inline List_1_t4232729054 ** get_address_of_cdataSections_14() { return &___cdataSections_14; }
	inline void set_cdataSections_14(List_1_t4232729054 * value)
	{
		___cdataSections_14 = value;
		Il2CppCodeGenWriteBarrier((&___cdataSections_14), value);
	}

	inline static int32_t get_offset_of_doNotEscapeUriAttributes_15() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___doNotEscapeUriAttributes_15)); }
	inline bool get_doNotEscapeUriAttributes_15() const { return ___doNotEscapeUriAttributes_15; }
	inline bool* get_address_of_doNotEscapeUriAttributes_15() { return &___doNotEscapeUriAttributes_15; }
	inline void set_doNotEscapeUriAttributes_15(bool value)
	{
		___doNotEscapeUriAttributes_15 = value;
	}

	inline static int32_t get_offset_of_mergeCDataSections_16() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___mergeCDataSections_16)); }
	inline bool get_mergeCDataSections_16() const { return ___mergeCDataSections_16; }
	inline bool* get_address_of_mergeCDataSections_16() { return &___mergeCDataSections_16; }
	inline void set_mergeCDataSections_16(bool value)
	{
		___mergeCDataSections_16 = value;
	}

	inline static int32_t get_offset_of_mediaType_17() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___mediaType_17)); }
	inline String_t* get_mediaType_17() const { return ___mediaType_17; }
	inline String_t** get_address_of_mediaType_17() { return &___mediaType_17; }
	inline void set_mediaType_17(String_t* value)
	{
		___mediaType_17 = value;
		Il2CppCodeGenWriteBarrier((&___mediaType_17), value);
	}

	inline static int32_t get_offset_of_docTypeSystem_18() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___docTypeSystem_18)); }
	inline String_t* get_docTypeSystem_18() const { return ___docTypeSystem_18; }
	inline String_t** get_address_of_docTypeSystem_18() { return &___docTypeSystem_18; }
	inline void set_docTypeSystem_18(String_t* value)
	{
		___docTypeSystem_18 = value;
		Il2CppCodeGenWriteBarrier((&___docTypeSystem_18), value);
	}

	inline static int32_t get_offset_of_docTypePublic_19() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___docTypePublic_19)); }
	inline String_t* get_docTypePublic_19() const { return ___docTypePublic_19; }
	inline String_t** get_address_of_docTypePublic_19() { return &___docTypePublic_19; }
	inline void set_docTypePublic_19(String_t* value)
	{
		___docTypePublic_19 = value;
		Il2CppCodeGenWriteBarrier((&___docTypePublic_19), value);
	}

	inline static int32_t get_offset_of_standalone_20() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___standalone_20)); }
	inline int32_t get_standalone_20() const { return ___standalone_20; }
	inline int32_t* get_address_of_standalone_20() { return &___standalone_20; }
	inline void set_standalone_20(int32_t value)
	{
		___standalone_20 = value;
	}

	inline static int32_t get_offset_of_autoXmlDecl_21() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___autoXmlDecl_21)); }
	inline bool get_autoXmlDecl_21() const { return ___autoXmlDecl_21; }
	inline bool* get_address_of_autoXmlDecl_21() { return &___autoXmlDecl_21; }
	inline void set_autoXmlDecl_21(bool value)
	{
		___autoXmlDecl_21 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_22() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___isReadOnly_22)); }
	inline bool get_isReadOnly_22() const { return ___isReadOnly_22; }
	inline bool* get_address_of_isReadOnly_22() { return &___isReadOnly_22; }
	inline void set_isReadOnly_22(bool value)
	{
		___isReadOnly_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERSETTINGS_T3314986516_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef XCDATA_T832623270_H
#define XCDATA_T832623270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XCData
struct  XCData_t832623270  : public XText_t1448860321
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCDATA_T832623270_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef XOBJECTCHANGEEVENTARGS_T652714535_H
#define XOBJECTCHANGEEVENTARGS_T652714535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObjectChangeEventArgs
struct  XObjectChangeEventArgs_t652714535  : public EventArgs_t3591816995
{
public:
	// System.Xml.Linq.XObjectChange System.Xml.Linq.XObjectChangeEventArgs::objectChange
	int32_t ___objectChange_1;

public:
	inline static int32_t get_offset_of_objectChange_1() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t652714535, ___objectChange_1)); }
	inline int32_t get_objectChange_1() const { return ___objectChange_1; }
	inline int32_t* get_address_of_objectChange_1() { return &___objectChange_1; }
	inline void set_objectChange_1(int32_t value)
	{
		___objectChange_1 = value;
	}
};

struct XObjectChangeEventArgs_t652714535_StaticFields
{
public:
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Add
	XObjectChangeEventArgs_t652714535 * ___Add_2;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Remove
	XObjectChangeEventArgs_t652714535 * ___Remove_3;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Name
	XObjectChangeEventArgs_t652714535 * ___Name_4;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Value
	XObjectChangeEventArgs_t652714535 * ___Value_5;

public:
	inline static int32_t get_offset_of_Add_2() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t652714535_StaticFields, ___Add_2)); }
	inline XObjectChangeEventArgs_t652714535 * get_Add_2() const { return ___Add_2; }
	inline XObjectChangeEventArgs_t652714535 ** get_address_of_Add_2() { return &___Add_2; }
	inline void set_Add_2(XObjectChangeEventArgs_t652714535 * value)
	{
		___Add_2 = value;
		Il2CppCodeGenWriteBarrier((&___Add_2), value);
	}

	inline static int32_t get_offset_of_Remove_3() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t652714535_StaticFields, ___Remove_3)); }
	inline XObjectChangeEventArgs_t652714535 * get_Remove_3() const { return ___Remove_3; }
	inline XObjectChangeEventArgs_t652714535 ** get_address_of_Remove_3() { return &___Remove_3; }
	inline void set_Remove_3(XObjectChangeEventArgs_t652714535 * value)
	{
		___Remove_3 = value;
		Il2CppCodeGenWriteBarrier((&___Remove_3), value);
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t652714535_StaticFields, ___Name_4)); }
	inline XObjectChangeEventArgs_t652714535 * get_Name_4() const { return ___Name_4; }
	inline XObjectChangeEventArgs_t652714535 ** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(XObjectChangeEventArgs_t652714535 * value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___Name_4), value);
	}

	inline static int32_t get_offset_of_Value_5() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t652714535_StaticFields, ___Value_5)); }
	inline XObjectChangeEventArgs_t652714535 * get_Value_5() const { return ___Value_5; }
	inline XObjectChangeEventArgs_t652714535 ** get_address_of_Value_5() { return &___Value_5; }
	inline void set_Value_5(XObjectChangeEventArgs_t652714535 * value)
	{
		___Value_5 = value;
		Il2CppCodeGenWriteBarrier((&___Value_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XOBJECTCHANGEEVENTARGS_T652714535_H
#ifndef XMLREADERSETTINGS_T2186285234_H
#define XMLREADERSETTINGS_T2186285234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t2186285234  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::useAsync
	bool ___useAsync_0;
	// System.Xml.XmlNameTable System.Xml.XmlReaderSettings::nameTable
	XmlNameTable_t71772148 * ___nameTable_1;
	// System.Xml.XmlResolver System.Xml.XmlReaderSettings::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_2;
	// System.Int32 System.Xml.XmlReaderSettings::lineNumberOffset
	int32_t ___lineNumberOffset_3;
	// System.Int32 System.Xml.XmlReaderSettings::linePositionOffset
	int32_t ___linePositionOffset_4;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformanceLevel
	int32_t ___conformanceLevel_5;
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_6;
	// System.Int64 System.Xml.XmlReaderSettings::maxCharactersInDocument
	int64_t ___maxCharactersInDocument_7;
	// System.Int64 System.Xml.XmlReaderSettings::maxCharactersFromEntities
	int64_t ___maxCharactersFromEntities_8;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreWhitespace
	bool ___ignoreWhitespace_9;
	// System.Boolean System.Xml.XmlReaderSettings::ignorePIs
	bool ___ignorePIs_10;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreComments
	bool ___ignoreComments_11;
	// System.Xml.DtdProcessing System.Xml.XmlReaderSettings::dtdProcessing
	int32_t ___dtdProcessing_12;
	// System.Xml.ValidationType System.Xml.XmlReaderSettings::validationType
	int32_t ___validationType_13;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_14;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t266093086 * ___schemas_15;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlReaderSettings::valEventHandler
	ValidationEventHandler_t791314227 * ___valEventHandler_16;
	// System.Boolean System.Xml.XmlReaderSettings::closeInput
	bool ___closeInput_17;
	// System.Boolean System.Xml.XmlReaderSettings::isReadOnly
	bool ___isReadOnly_18;
	// System.Boolean System.Xml.XmlReaderSettings::<IsXmlResolverSet>k__BackingField
	bool ___U3CIsXmlResolverSetU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_useAsync_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___useAsync_0)); }
	inline bool get_useAsync_0() const { return ___useAsync_0; }
	inline bool* get_address_of_useAsync_0() { return &___useAsync_0; }
	inline void set_useAsync_0(bool value)
	{
		___useAsync_0 = value;
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___nameTable_1)); }
	inline XmlNameTable_t71772148 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t71772148 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_1), value);
	}

	inline static int32_t get_offset_of_xmlResolver_2() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___xmlResolver_2)); }
	inline XmlResolver_t626023767 * get_xmlResolver_2() const { return ___xmlResolver_2; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_2() { return &___xmlResolver_2; }
	inline void set_xmlResolver_2(XmlResolver_t626023767 * value)
	{
		___xmlResolver_2 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_2), value);
	}

	inline static int32_t get_offset_of_lineNumberOffset_3() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___lineNumberOffset_3)); }
	inline int32_t get_lineNumberOffset_3() const { return ___lineNumberOffset_3; }
	inline int32_t* get_address_of_lineNumberOffset_3() { return &___lineNumberOffset_3; }
	inline void set_lineNumberOffset_3(int32_t value)
	{
		___lineNumberOffset_3 = value;
	}

	inline static int32_t get_offset_of_linePositionOffset_4() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___linePositionOffset_4)); }
	inline int32_t get_linePositionOffset_4() const { return ___linePositionOffset_4; }
	inline int32_t* get_address_of_linePositionOffset_4() { return &___linePositionOffset_4; }
	inline void set_linePositionOffset_4(int32_t value)
	{
		___linePositionOffset_4 = value;
	}

	inline static int32_t get_offset_of_conformanceLevel_5() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___conformanceLevel_5)); }
	inline int32_t get_conformanceLevel_5() const { return ___conformanceLevel_5; }
	inline int32_t* get_address_of_conformanceLevel_5() { return &___conformanceLevel_5; }
	inline void set_conformanceLevel_5(int32_t value)
	{
		___conformanceLevel_5 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_6() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___checkCharacters_6)); }
	inline bool get_checkCharacters_6() const { return ___checkCharacters_6; }
	inline bool* get_address_of_checkCharacters_6() { return &___checkCharacters_6; }
	inline void set_checkCharacters_6(bool value)
	{
		___checkCharacters_6 = value;
	}

	inline static int32_t get_offset_of_maxCharactersInDocument_7() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___maxCharactersInDocument_7)); }
	inline int64_t get_maxCharactersInDocument_7() const { return ___maxCharactersInDocument_7; }
	inline int64_t* get_address_of_maxCharactersInDocument_7() { return &___maxCharactersInDocument_7; }
	inline void set_maxCharactersInDocument_7(int64_t value)
	{
		___maxCharactersInDocument_7 = value;
	}

	inline static int32_t get_offset_of_maxCharactersFromEntities_8() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___maxCharactersFromEntities_8)); }
	inline int64_t get_maxCharactersFromEntities_8() const { return ___maxCharactersFromEntities_8; }
	inline int64_t* get_address_of_maxCharactersFromEntities_8() { return &___maxCharactersFromEntities_8; }
	inline void set_maxCharactersFromEntities_8(int64_t value)
	{
		___maxCharactersFromEntities_8 = value;
	}

	inline static int32_t get_offset_of_ignoreWhitespace_9() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___ignoreWhitespace_9)); }
	inline bool get_ignoreWhitespace_9() const { return ___ignoreWhitespace_9; }
	inline bool* get_address_of_ignoreWhitespace_9() { return &___ignoreWhitespace_9; }
	inline void set_ignoreWhitespace_9(bool value)
	{
		___ignoreWhitespace_9 = value;
	}

	inline static int32_t get_offset_of_ignorePIs_10() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___ignorePIs_10)); }
	inline bool get_ignorePIs_10() const { return ___ignorePIs_10; }
	inline bool* get_address_of_ignorePIs_10() { return &___ignorePIs_10; }
	inline void set_ignorePIs_10(bool value)
	{
		___ignorePIs_10 = value;
	}

	inline static int32_t get_offset_of_ignoreComments_11() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___ignoreComments_11)); }
	inline bool get_ignoreComments_11() const { return ___ignoreComments_11; }
	inline bool* get_address_of_ignoreComments_11() { return &___ignoreComments_11; }
	inline void set_ignoreComments_11(bool value)
	{
		___ignoreComments_11 = value;
	}

	inline static int32_t get_offset_of_dtdProcessing_12() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___dtdProcessing_12)); }
	inline int32_t get_dtdProcessing_12() const { return ___dtdProcessing_12; }
	inline int32_t* get_address_of_dtdProcessing_12() { return &___dtdProcessing_12; }
	inline void set_dtdProcessing_12(int32_t value)
	{
		___dtdProcessing_12 = value;
	}

	inline static int32_t get_offset_of_validationType_13() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___validationType_13)); }
	inline int32_t get_validationType_13() const { return ___validationType_13; }
	inline int32_t* get_address_of_validationType_13() { return &___validationType_13; }
	inline void set_validationType_13(int32_t value)
	{
		___validationType_13 = value;
	}

	inline static int32_t get_offset_of_validationFlags_14() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___validationFlags_14)); }
	inline int32_t get_validationFlags_14() const { return ___validationFlags_14; }
	inline int32_t* get_address_of_validationFlags_14() { return &___validationFlags_14; }
	inline void set_validationFlags_14(int32_t value)
	{
		___validationFlags_14 = value;
	}

	inline static int32_t get_offset_of_schemas_15() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___schemas_15)); }
	inline XmlSchemaSet_t266093086 * get_schemas_15() const { return ___schemas_15; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_15() { return &___schemas_15; }
	inline void set_schemas_15(XmlSchemaSet_t266093086 * value)
	{
		___schemas_15 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_15), value);
	}

	inline static int32_t get_offset_of_valEventHandler_16() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___valEventHandler_16)); }
	inline ValidationEventHandler_t791314227 * get_valEventHandler_16() const { return ___valEventHandler_16; }
	inline ValidationEventHandler_t791314227 ** get_address_of_valEventHandler_16() { return &___valEventHandler_16; }
	inline void set_valEventHandler_16(ValidationEventHandler_t791314227 * value)
	{
		___valEventHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___valEventHandler_16), value);
	}

	inline static int32_t get_offset_of_closeInput_17() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___closeInput_17)); }
	inline bool get_closeInput_17() const { return ___closeInput_17; }
	inline bool* get_address_of_closeInput_17() { return &___closeInput_17; }
	inline void set_closeInput_17(bool value)
	{
		___closeInput_17 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_18() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___isReadOnly_18)); }
	inline bool get_isReadOnly_18() const { return ___isReadOnly_18; }
	inline bool* get_address_of_isReadOnly_18() { return &___isReadOnly_18; }
	inline void set_isReadOnly_18(bool value)
	{
		___isReadOnly_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsXmlResolverSetU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___U3CIsXmlResolverSetU3Ek__BackingField_19)); }
	inline bool get_U3CIsXmlResolverSetU3Ek__BackingField_19() const { return ___U3CIsXmlResolverSetU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsXmlResolverSetU3Ek__BackingField_19() { return &___U3CIsXmlResolverSetU3Ek__BackingField_19; }
	inline void set_U3CIsXmlResolverSetU3Ek__BackingField_19(bool value)
	{
		___U3CIsXmlResolverSetU3Ek__BackingField_19 = value;
	}
};

struct XmlReaderSettings_t2186285234_StaticFields
{
public:
	// System.Nullable`1<System.Boolean> System.Xml.XmlReaderSettings::s_enableLegacyXmlSettings
	Nullable_1_t1819850047  ___s_enableLegacyXmlSettings_20;

public:
	inline static int32_t get_offset_of_s_enableLegacyXmlSettings_20() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234_StaticFields, ___s_enableLegacyXmlSettings_20)); }
	inline Nullable_1_t1819850047  get_s_enableLegacyXmlSettings_20() const { return ___s_enableLegacyXmlSettings_20; }
	inline Nullable_1_t1819850047 * get_address_of_s_enableLegacyXmlSettings_20() { return &___s_enableLegacyXmlSettings_20; }
	inline void set_s_enableLegacyXmlSettings_20(Nullable_1_t1819850047  value)
	{
		___s_enableLegacyXmlSettings_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERSETTINGS_T2186285234_H
#ifndef XELEMENT_T4185968754_H
#define XELEMENT_T4185968754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement
struct  XElement_t4185968754  : public XContainer_t3387731002
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t3751455998 * ___name_4;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_t355876829 * ___lastAttr_5;

public:
	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(XElement_t4185968754, ___name_4)); }
	inline XName_t3751455998 * get_name_4() const { return ___name_4; }
	inline XName_t3751455998 ** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(XName_t3751455998 * value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((&___name_4), value);
	}

	inline static int32_t get_offset_of_lastAttr_5() { return static_cast<int32_t>(offsetof(XElement_t4185968754, ___lastAttr_5)); }
	inline XAttribute_t355876829 * get_lastAttr_5() const { return ___lastAttr_5; }
	inline XAttribute_t355876829 ** get_address_of_lastAttr_5() { return &___lastAttr_5; }
	inline void set_lastAttr_5(XAttribute_t355876829 * value)
	{
		___lastAttr_5 = value;
		Il2CppCodeGenWriteBarrier((&___lastAttr_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XELEMENT_T4185968754_H
#ifndef XDOCUMENT_T1376419702_H
#define XDOCUMENT_T1376419702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocument
struct  XDocument_t1376419702  : public XContainer_t3387731002
{
public:
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::declaration
	XDeclaration_t2907650823 * ___declaration_4;

public:
	inline static int32_t get_offset_of_declaration_4() { return static_cast<int32_t>(offsetof(XDocument_t1376419702, ___declaration_4)); }
	inline XDeclaration_t2907650823 * get_declaration_4() const { return ___declaration_4; }
	inline XDeclaration_t2907650823 ** get_address_of_declaration_4() { return &___declaration_4; }
	inline void set_declaration_4(XDeclaration_t2907650823 * value)
	{
		___declaration_4 = value;
		Il2CppCodeGenWriteBarrier((&___declaration_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDOCUMENT_T1376419702_H
#ifndef EVENTHANDLER_1_T2871841264_H
#define EVENTHANDLER_1_T2871841264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>
struct  EventHandler_1_t2871841264  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2871841264_H
#ifndef EXTRACTKEYDELEGATE_T1118463316_H
#define EXTRACTKEYDELEGATE_T1118463316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>
struct  ExtractKeyDelegate_t1118463316  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTRACTKEYDELEGATE_T1118463316_H
#ifndef EXTRACTKEYDELEGATE_T3535032598_H
#define EXTRACTKEYDELEGATE_T3535032598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>
struct  ExtractKeyDelegate_t3535032598  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTRACTKEYDELEGATE_T3535032598_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void NamespaceResolver_t1487275418_marshal_pinvoke(const NamespaceResolver_t1487275418& unmarshaled, NamespaceResolver_t1487275418_marshaled_pinvoke& marshaled);
extern "C" void NamespaceResolver_t1487275418_marshal_pinvoke_back(const NamespaceResolver_t1487275418_marshaled_pinvoke& marshaled, NamespaceResolver_t1487275418& unmarshaled);
extern "C" void NamespaceResolver_t1487275418_marshal_pinvoke_cleanup(NamespaceResolver_t1487275418_marshaled_pinvoke& marshaled);
extern "C" void NamespaceResolver_t1487275418_marshal_com(const NamespaceResolver_t1487275418& unmarshaled, NamespaceResolver_t1487275418_marshaled_com& marshaled);
extern "C" void NamespaceResolver_t1487275418_marshal_com_back(const NamespaceResolver_t1487275418_marshaled_com& marshaled, NamespaceResolver_t1487275418& unmarshaled);
extern "C" void NamespaceResolver_t1487275418_marshal_com_cleanup(NamespaceResolver_t1487275418_marshaled_com& marshaled);

// T System.Xml.Linq.XDocument::GetFirstNode<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XDocument_GetFirstNode_TisRuntimeObject_m2013966949_gshared (XDocument_t1376419702 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExtractKeyDelegate__ctor_m418271856_gshared (ExtractKeyDelegate_t2863682764 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m1695045399_gshared (XHashtable_1_t1622271391 * __this, ExtractKeyDelegate_t2863682764 * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
extern "C" IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m502924517_gshared (XHashtable_1_t1622271391 * __this, String_t* p0, int32_t p1, int32_t p2, RuntimeObject ** p3, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XHashtable_1_Add_m2855675056_gshared (XHashtable_1_t1622271391 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// T System.Xml.Linq.XObject::Annotation<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XObject_Annotation_TisRuntimeObject_m4153986854_gshared (XObject_t1119084474 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_m2485852162_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325** p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m341276322_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::.ctor(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter__ctor_m3451443409 (ElementWriter_t1843505097 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::PushAncestors(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_PushAncestors_m2035798448 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteStartElement(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteStartElement_m2466481327 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteEndElement()
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteEndElement_m4048521740 (ElementWriter_t1843505097 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteFullEndElement()
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteFullEndElement_m3470268867 (ElementWriter_t1843505097 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteElement(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteElement_m2726179892 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
extern "C" IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_m2952101840 (XNamespace_t1843508170 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.NamespaceResolver::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* NamespaceResolver_GetPrefixOfNamespace_m1421437472 (NamespaceResolver_t1487275418 * __this, XNamespace_t1843508170 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method);
// System.String System.Xml.Linq.ElementWriter::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* ElementWriter_GetPrefixOfNamespace_m3506790810 (ElementWriter_t1843505097 * __this, XNamespace_t1843508170 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XAttribute::get_IsNamespaceDeclaration()
extern "C" IL2CPP_METHOD_ATTR bool XAttribute_get_IsNamespaceDeclaration_m3726745643 (XAttribute_t355876829 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XAttribute_get_Name_m2178653462 (XAttribute_t355876829 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XName::get_NamespaceName()
extern "C" IL2CPP_METHOD_ATTR String_t* XName_get_NamespaceName_m1113219825 (XName_t3751455998 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XName::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m2163884361 (XName_t3751455998 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XAttribute::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_m822045865 (XAttribute_t355876829 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_Get_m9299589 (RuntimeObject * __this /* static, unused */, String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::AddFirst(System.String,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_AddFirst_m637257421 (NamespaceResolver_t1487275418 * __this, String_t* ___prefix0, XNamespace_t1843508170 * ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::PushScope()
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_PushScope_m2295210081 (NamespaceResolver_t1487275418 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::Add(System.String,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_Add_m2556732263 (NamespaceResolver_t1487275418 * __this, String_t* ___prefix0, XNamespace_t1843508170 * ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::PushElement(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_PushElement_m2420541029 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::PopScope()
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_PopScope_m2027933180 (NamespaceResolver_t1487275418 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XElement_get_Name_m619912033 (XElement_t4185968754 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XName::get_Namespace()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XName_get_Namespace_m4023955522 (XName_t3751455998 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m2341773285 (XmlWriter_t127905479 * __this, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void System.Xml.Linq.LineInfoAnnotation::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_m1540747406 (LineInfoAnnotation_t2689670207 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m3155282843 (SerializationInfo_t950877179 * __this, String_t* p0, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XName_Get_m1522378289 (RuntimeObject * __this /* static, unused */, String_t* ___expandedName0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceCache::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * NamespaceCache_Get_m3575903994 (NamespaceCache_t3512832689 * __this, String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NamespaceDeclaration__ctor_m286273896 (NamespaceDeclaration_t1302953724 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR bool XNamespace_op_Equality_m3113830840 (RuntimeObject * __this /* static, unused */, XNamespace_t1843508170 * ___left0, XNamespace_t1843508170 * ___right1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2090043908 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.String System.Xml.Linq.Res::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Res_GetString_m1829098876 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XObject__ctor_m1122439361 (XObject_t1119084474 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR bool XName_op_Equality_m1536062490 (RuntimeObject * __this /* static, unused */, XName_t3751455998 * ___left0, XName_t3751455998 * ___right1, const RuntimeMethod* method);
// System.String System.Xml.Linq.XContainer::GetStringValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* XContainer_GetStringValue_m4268288823 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XAttribute::ValidateAttribute(System.Xml.Linq.XName,System.String)
extern "C" IL2CPP_METHOD_ATTR void XAttribute_ValidateAttribute_m3597441975 (RuntimeObject * __this /* static, unused */, XName_t3751455998 * ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XObject::NotifyChanging(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
extern "C" IL2CPP_METHOD_ATTR bool XObject_NotifyChanging_m2437571179 (XObject_t1119084474 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t652714535 * ___e1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XObject::NotifyChanged(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
extern "C" IL2CPP_METHOD_ATTR bool XObject_NotifyChanged_m1712984418 (XObject_t1119084474 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t652714535 * ___e1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR void StringWriter__ctor_m2474332877 (StringWriter_t802263757 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings__ctor_m2465852079 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_ConformanceLevel(System.Xml.ConformanceLevel)
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_set_ConformanceLevel_m2379836262 (XmlWriterSettings_t3314986516 * __this, int32_t p0, const RuntimeMethod* method);
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.IO.TextWriter,System.Xml.XmlWriterSettings)
extern "C" IL2CPP_METHOD_ATTR XmlWriter_t127905479 * XmlWriter_Create_m1754013770 (RuntimeObject * __this /* static, unused */, TextWriter_t3478189236 * p0, XmlWriterSettings_t3314986516 * p1, const RuntimeMethod* method);
// System.String System.Xml.Linq.XAttribute::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR String_t* XAttribute_GetPrefixOfNamespace_m3339376166 (XAttribute_t355876829 * __this, XNamespace_t1843508170 * ___ns0, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR String_t* XElement_GetPrefixOfNamespace_m2885939482 (XElement_t4185968754 * __this, XNamespace_t1843508170 * ___ns0, const RuntimeMethod* method);
// System.String System.Xml.Linq.Res::GetString(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Res_GetString_m419457679 (RuntimeObject * __this /* static, unused */, String_t* ___name0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XText::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XText__ctor_m2401333842 (XText_t1448860321 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XText::.ctor(System.Xml.Linq.XText)
extern "C" IL2CPP_METHOD_ATTR void XText__ctor_m694960668 (XText_t1448860321 * __this, XText_t1448860321 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XCData::.ctor(System.Xml.Linq.XCData)
extern "C" IL2CPP_METHOD_ATTR void XCData__ctor_m2021185271 (XCData_t832623270 * __this, XCData_t832623270 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XNode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XNode__ctor_m2640711240 (XNode_t716131460 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XComment::.ctor(System.Xml.Linq.XComment)
extern "C" IL2CPP_METHOD_ATTR void XComment__ctor_m1691910914 (XComment_t1832251191 * __this, XComment_t1832251191 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AppendNodeSkipNotify(System.Xml.Linq.XNode)
extern "C" IL2CPP_METHOD_ATTR void XContainer_AppendNodeSkipNotify_m2088981435 (XContainer_t3387731002 * __this, XNode_t716131460 * ___n0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetDescendants(System.Xml.Linq.XName,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetDescendants_m3487935990 (XContainer_t3387731002 * __this, XName_t3751455998 * ___name0, bool ___self1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::ConvertTextToNode()
extern "C" IL2CPP_METHOD_ATTR void XContainer_ConvertTextToNode_m4002742466 (XContainer_t3387731002 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m1019655946 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39__ctor_m3867538981 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Double)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m2027917565 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Single)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m934314535 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m732346799 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m142518199 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XContainer::GetDateTimeString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XContainer_GetDateTimeString_m3842888760 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.DateTimeOffset)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m158558848 (RuntimeObject * __this /* static, unused */, DateTimeOffset_t3229287507  p0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m1102839109 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XNamespace_GetName_m1445243739 (XNamespace_t1843508170 * __this, String_t* ___localName0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR void XElement__ctor_m643760410 (XElement_t4185968754 * __this, XName_t3751455998 * ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
extern "C" IL2CPP_METHOD_ATTR void XAttribute__ctor_m2609633652 (XAttribute_t355876829 * __this, XName_t3751455998 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::AppendAttributeSkipNotify(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XElement_AppendAttributeSkipNotify_m1943425946 (XElement_t4185968754 * __this, XAttribute_t355876829 * ___a0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AddNodeSkipNotify(System.Xml.Linq.XNode)
extern "C" IL2CPP_METHOD_ATTR void XContainer_AddNodeSkipNotify_m2405732094 (XContainer_t3387731002 * __this, XNode_t716131460 * ___n0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AddStringSkipNotify(System.String)
extern "C" IL2CPP_METHOD_ATTR void XContainer_AddStringSkipNotify_m1432095315 (XContainer_t3387731002 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XCData__ctor_m2121219684 (XCData_t832623270 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XComment__ctor_m2613070977 (XComment_t1832251191 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m3301977354 (XProcessingInstruction_t2943691487 * __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.IDtdInfo)
extern "C" IL2CPP_METHOD_ATTR void XDocumentType__ctor_m1639303547 (XDocumentType_t1853592271 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, RuntimeObject* ___dtdInfo4, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_m1866981 (XContainer_t3387731002 * __this, XmlReader_t3121518892 * ___r0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::SetBaseUri(System.String)
extern "C" IL2CPP_METHOD_ATTR void XObject_SetBaseUri_m4069814171 (XObject_t1119084474 * __this, String_t* ___baseUri0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::SetLineInfo(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XObject_SetLineInfo_m1298245039 (XObject_t1119084474 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::SetEndElementLineInfo(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XElement_SetEndElementLineInfo_m3917701571 (XElement_t4185968754 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XObject::get_HasBaseUri()
extern "C" IL2CPP_METHOD_ATTR bool XObject_get_HasBaseUri_m2712212936 (XObject_t1119084474 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XObject::get_BaseUri()
extern "C" IL2CPP_METHOD_ATTR String_t* XObject_get_BaseUri_m1095757722 (XObject_t1119084474 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
extern "C" IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m3454612449 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m300366222 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XContainer__ctor_m2392412783 (XContainer_t3387731002 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::.ctor(System.Xml.Linq.XContainer)
extern "C" IL2CPP_METHOD_ATTR void XContainer__ctor_m1059702699 (XContainer_t3387731002 * __this, XContainer_t3387731002 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.Linq.XDeclaration)
extern "C" IL2CPP_METHOD_ATTR void XDeclaration__ctor_m3840151100 (XDeclaration_t2907650823 * __this, XDeclaration_t2907650823 * ___other0, const RuntimeMethod* method);
// T System.Xml.Linq.XDocument::GetFirstNode<System.Xml.Linq.XElement>()
#define XDocument_GetFirstNode_TisXElement_t4185968754_m2723590789(__this, method) ((  XElement_t4185968754 * (*) (XDocument_t1376419702 *, const RuntimeMethod*))XDocument_GetFirstNode_TisRuntimeObject_m2013966949_gshared)(__this, method)
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Load(System.String,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Load_m1691125960 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, int32_t ___options1, const RuntimeMethod* method);
// System.Xml.XmlReaderSettings System.Xml.Linq.XNode::GetXmlReaderSettings(System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_t2186285234 * XNode_GetXmlReaderSettings_m1372944662 (RuntimeObject * __this /* static, unused */, int32_t ___o0, const RuntimeMethod* method);
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.String,System.Xml.XmlReaderSettings)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XmlReader_Create_m140634513 (RuntimeObject * __this /* static, unused */, String_t* p0, XmlReaderSettings_t2186285234 * p1, const RuntimeMethod* method);
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Load(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Load_m3339189379 (RuntimeObject * __this /* static, unused */, XmlReader_t3121518892 * ___reader0, int32_t ___options1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocument::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XDocument__ctor_m1715976504 (XDocument_t1376419702 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XDeclaration__ctor_m799194490 (XDeclaration_t2907650823 * __this, XmlReader_t3121518892 * ___r0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocument::set_Declaration(System.Xml.Linq.XDeclaration)
extern "C" IL2CPP_METHOD_ATTR void XDocument_set_Declaration_m1583407267 (XDocument_t1376419702 * __this, XDeclaration_t2907650823 * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_m3994758364 (XContainer_t3387731002 * __this, XmlReader_t3121518892 * ___r0, int32_t ___o1, const RuntimeMethod* method);
// System.Xml.Linq.XElement System.Xml.Linq.XDocument::get_Root()
extern "C" IL2CPP_METHOD_ATTR XElement_t4185968754 * XDocument_get_Root_m2125125051 (XDocument_t1376419702 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Parse(System.String,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Parse_m271750636 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___options1, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method);
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.TextReader,System.Xml.XmlReaderSettings)
extern "C" IL2CPP_METHOD_ATTR XmlReader_t3121518892 * XmlReader_Create_m2377285192 (RuntimeObject * __this /* static, unused */, TextReader_t283511965 * p0, XmlReaderSettings_t2186285234 * p1, const RuntimeMethod* method);
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
extern "C" IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_m2365902379 (XDeclaration_t2907650823 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::WriteContentTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XContainer_WriteContentTo_m3843093128 (XContainer_t3387731002 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocument::.ctor(System.Xml.Linq.XDocument)
extern "C" IL2CPP_METHOD_ATTR void XDocument__ctor_m3958010189 (XDocument_t1376419702 * __this, XDocument_t1376419702 * ___other0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XText::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XText_get_Value_m3622993421 (XText_t1448860321 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocument::ValidateDocument(System.Xml.Linq.XNode,System.Xml.XmlNodeType,System.Xml.XmlNodeType)
extern "C" IL2CPP_METHOD_ATTR void XDocument_ValidateDocument_m2535406208 (XDocument_t1376419702 * __this, XNode_t716131460 * ___previous0, int32_t ___allowBefore1, int32_t ___allowAfter2, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XDocument::IsWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XDocument_IsWhitespace_m4229137038 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyName_m2131148908 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XDocumentType__ctor_m4247116401 (XDocumentType_t1853592271 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.Xml.Linq.XDocumentType)
extern "C" IL2CPP_METHOD_ATTR void XDocumentType__ctor_m3958915516 (XDocumentType_t1853592271 * __this, XDocumentType_t1853592271 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XAttribute__ctor_m4086971032 (XAttribute_t355876829 * __this, XAttribute_t355876829 * ___other0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XElement::GetNamespaceOfPrefixInScope(System.String,System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR String_t* XElement_GetNamespaceOfPrefixInScope_m800190849 (XElement_t4185968754 * __this, String_t* ___prefix0, XElement_t4185968754 * ___outOfScope1, const RuntimeMethod* method);
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::Attribute(System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR XAttribute_t355876829 * XElement_Attribute_m3511762361 (XElement_t4185968754 * __this, XName_t3751455998 * ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::RemoveAttribute(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XElement_RemoveAttribute_m3798880449 (XElement_t4185968754 * __this, XAttribute_t355876829 * ___a0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XAttribute_set_Value_m724377387 (XAttribute_t355876829 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::AppendAttribute(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XElement_AppendAttribute_m78540157 (XElement_t4185968754 * __this, XAttribute_t355876829 * ___a0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void XElement__ctor_m3926917909 (XElement_t4185968754 * __this, XElement_t4185968754 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.LineInfoEndElementAnnotation::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineInfoEndElementAnnotation__ctor_m4037848550 (LineInfoEndElementAnnotation_t493731080 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::AddAnnotation(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XObject_AddAnnotation_m3707945256 (XObject_t1119084474 * __this, RuntimeObject * ___annotation0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyNCName_m3085528481 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m3451222878 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_Get_m2806450384 (RuntimeObject * __this /* static, unused */, String_t* ___namespaceName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XNamespace_GetName_m1518993676 (XNamespace_t1843508170 * __this, String_t* ___localName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_get_None_m394397613 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m3923964808 (SerializationInfo_t950877179 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>::.ctor(System.Object,System.IntPtr)
#define ExtractKeyDelegate__ctor_m1028128969(__this, p0, p1, method) ((  void (*) (ExtractKeyDelegate_t3535032598 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ExtractKeyDelegate__ctor_m418271856_gshared)(__this, p0, p1, method)
// System.Void System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
#define XHashtable_1__ctor_m2987613868(__this, p0, p1, method) ((  void (*) (XHashtable_1_t2293621225 *, ExtractKeyDelegate_t3535032598 *, int32_t, const RuntimeMethod*))XHashtable_1__ctor_m1695045399_gshared)(__this, p0, p1, method)
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::EnsureNamespace(System.WeakReference&,System.String)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_EnsureNamespace_m3490636692 (RuntimeObject * __this /* static, unused */, WeakReference_t1334886716 ** ___refNmsp0, String_t* ___namespaceName1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
#define XHashtable_1_TryGetValue_m3827769208(__this, p0, p1, p2, p3, method) ((  bool (*) (XHashtable_1_t2293621225 *, String_t*, int32_t, int32_t, XName_t3751455998 **, const RuntimeMethod*))XHashtable_1_TryGetValue_m502924517_gshared)(__this, p0, p1, p2, p3, method)
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XName::.ctor(System.Xml.Linq.XNamespace,System.String)
extern "C" IL2CPP_METHOD_ATTR void XName__ctor_m10147428 (XName_t3751455998 * __this, XNamespace_t1843508170 * ___ns0, String_t* ___localName1, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::Add(TValue)
#define XHashtable_1_Add_m3409537762(__this, p0, method) ((  XName_t3751455998 * (*) (XHashtable_1_t2293621225 *, XName_t3751455998 *, const RuntimeMethod*))XHashtable_1_Add_m2855675056_gshared)(__this, p0, method)
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>::.ctor(System.Object,System.IntPtr)
#define ExtractKeyDelegate__ctor_m2194429002(__this, p0, p1, method) ((  void (*) (ExtractKeyDelegate_t1118463316 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ExtractKeyDelegate__ctor_m418271856_gshared)(__this, p0, p1, method)
// System.Void System.Xml.Linq.XHashtable`1<System.WeakReference>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
#define XHashtable_1__ctor_m3583225800(__this, p0, p1, method) ((  void (*) (XHashtable_1_t4172019239 *, ExtractKeyDelegate_t1118463316 *, int32_t, const RuntimeMethod*))XHashtable_1__ctor_m1695045399_gshared)(__this, p0, p1, method)
// System.Boolean System.Xml.Linq.XHashtable`1<System.WeakReference>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
#define XHashtable_1_TryGetValue_m935372797(__this, p0, p1, p2, p3, method) ((  bool (*) (XHashtable_1_t4172019239 *, String_t*, int32_t, int32_t, WeakReference_t1334886716 **, const RuntimeMethod*))XHashtable_1_TryGetValue_m502924517_gshared)(__this, p0, p1, p2, p3, method)
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m1012192092 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, String_t* p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xml()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_get_Xml_m937341851 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_get_Xmlns_m2148974693 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XNamespace__ctor_m1972467617 (XNamespace_t1843508170 * __this, String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m2401547918 (WeakReference_t1334886716 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.WeakReference>::Add(TValue)
#define XHashtable_1_Add_m2203465367(__this, p0, method) ((  WeakReference_t1334886716 * (*) (XHashtable_1_t4172019239 *, WeakReference_t1334886716 *, const RuntimeMethod*))XHashtable_1_Add_m2855675056_gshared)(__this, p0, method)
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR bool XNamespace_op_Inequality_m3269657107 (RuntimeObject * __this /* static, unused */, XNamespace_t1843508170 * ___left0, XNamespace_t1843508170 * ___right1, const RuntimeMethod* method);
// System.Xml.Linq.SaveOptions System.Xml.Linq.XObject::GetSaveOptionsFromAnnotations()
extern "C" IL2CPP_METHOD_ATTR int32_t XObject_GetSaveOptionsFromAnnotations_m2533200236 (XObject_t1119084474 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XNode::GetXmlString(System.Xml.Linq.SaveOptions)
extern "C" IL2CPP_METHOD_ATTR String_t* XNode_GetXmlString_m3314186111 (XNode_t716131460 * __this, int32_t ___o0, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings__ctor_m3137625896 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_IgnoreWhitespace(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings_set_IgnoreWhitespace_m519251602 (XmlReaderSettings_t2186285234 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_DtdProcessing(System.Xml.DtdProcessing)
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings_set_DtdProcessing_m3380020100 (XmlReaderSettings_t2186285234 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_MaxCharactersFromEntities(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings_set_MaxCharactersFromEntities_m2434535626 (XmlReaderSettings_t2186285234 * __this, int64_t p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings_set_XmlResolver_m522760227 (XmlReaderSettings_t2186285234 * __this, XmlResolver_t626023767 * p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_OmitXmlDeclaration(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_set_OmitXmlDeclaration_m605658549 (XmlWriterSettings_t3314986516 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_Indent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_set_Indent_m2801213143 (XmlWriterSettings_t3314986516 * __this, bool p0, const RuntimeMethod* method);
// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::get_NamespaceHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_NamespaceHandling_m2805092960 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_NamespaceHandling(System.Xml.NamespaceHandling)
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_set_NamespaceHandling_m1591779902 (XmlWriterSettings_t3314986516 * __this, int32_t p0, const RuntimeMethod* method);
// T System.Xml.Linq.XObject::Annotation<System.Xml.Linq.BaseUriAnnotation>()
#define XObject_Annotation_TisBaseUriAnnotation_t3843949084_m4137211088(__this, method) ((  BaseUriAnnotation_t3843949084 * (*) (XObject_t1119084474 *, const RuntimeMethod*))XObject_Annotation_TisRuntimeObject_m4153986854_gshared)(__this, method)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
#define Array_Resize_TisRuntimeObject_m2485852162(__this /* static, unused */, p0, p1, method) ((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_m2485852162_gshared)(__this /* static, unused */, p0, p1, method)
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m2683486427 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// T System.Xml.Linq.XObject::Annotation<System.Xml.Linq.LineInfoAnnotation>()
#define XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682(__this, method) ((  LineInfoAnnotation_t2689670207 * (*) (XObject_t1119084474 *, const RuntimeMethod*))XObject_Annotation_TisRuntimeObject_m4153986854_gshared)(__this, method)
// T System.Xml.Linq.XObject::Annotation<System.Xml.Linq.XObjectChangeAnnotation>()
#define XObject_Annotation_TisXObjectChangeAnnotation_t288737304_m4053231645(__this, method) ((  XObjectChangeAnnotation_t288737304 * (*) (XObject_t1119084474 *, const RuntimeMethod*))XObject_Annotation_TisRuntimeObject_m4153986854_gshared)(__this, method)
// System.Void System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3142395161(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2871841264 *, RuntimeObject *, XObjectChangeEventArgs_t652714535 *, const RuntimeMethod*))EventHandler_1_Invoke_m341276322_gshared)(__this, p0, p1, method)
// System.Void System.Xml.Linq.BaseUriAnnotation::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void BaseUriAnnotation__ctor_m1617116133 (BaseUriAnnotation_t3843949084 * __this, String_t* ___baseUri0, const RuntimeMethod* method);
// System.Object System.Xml.Linq.XObject::Annotation(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XObject_Annotation_m2852752487 (XObject_t1119084474 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObjectChangeEventArgs::.ctor(System.Xml.Linq.XObjectChange)
extern "C" IL2CPP_METHOD_ATTR void XObjectChangeEventArgs__ctor_m3430477771 (XObjectChangeEventArgs_t652714535 * __this, int32_t ___objectChange0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XProcessingInstruction::ValidateName(System.String)
extern "C" IL2CPP_METHOD_ATTR void XProcessingInstruction_ValidateName_m1199905831 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.Xml.Linq.XProcessingInstruction)
extern "C" IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m1711994690 (XProcessingInstruction_t2943691487 * __this, XProcessingInstruction_t2943691487 * ___other0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m3203413707 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, int32_t p2, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2090043908 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2090043908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2090043908_RuntimeMethod_var);
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void System.Xml.Linq.BaseUriAnnotation::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void BaseUriAnnotation__ctor_m1617116133 (BaseUriAnnotation_t3843949084 * __this, String_t* ___baseUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseUriAnnotation__ctor_m1617116133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(BaseUriAnnotation__ctor_m1617116133_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseUri0;
		__this->set_baseUri_0(L_0);
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


// Conversion methods for marshalling of: System.Xml.Linq.ElementWriter
extern "C" void ElementWriter_t1843505097_marshal_pinvoke(const ElementWriter_t1843505097& unmarshaled, ElementWriter_t1843505097_marshaled_pinvoke& marshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL, NULL);
}
extern "C" void ElementWriter_t1843505097_marshal_pinvoke_back(const ElementWriter_t1843505097_marshaled_pinvoke& marshaled, ElementWriter_t1843505097& unmarshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.ElementWriter
extern "C" void ElementWriter_t1843505097_marshal_pinvoke_cleanup(ElementWriter_t1843505097_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.Xml.Linq.ElementWriter
extern "C" void ElementWriter_t1843505097_marshal_com(const ElementWriter_t1843505097& unmarshaled, ElementWriter_t1843505097_marshaled_com& marshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL, NULL);
}
extern "C" void ElementWriter_t1843505097_marshal_com_back(const ElementWriter_t1843505097_marshaled_com& marshaled, ElementWriter_t1843505097& unmarshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.ElementWriter
extern "C" void ElementWriter_t1843505097_marshal_com_cleanup(ElementWriter_t1843505097_marshaled_com& marshaled)
{
}
// System.Void System.Xml.Linq.ElementWriter::.ctor(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter__ctor_m3451443409 (ElementWriter_t1843505097 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter__ctor_m3451443409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter__ctor_m3451443409_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		__this->set_writer_0(L_0);
		NamespaceResolver_t1487275418 * L_1 = __this->get_address_of_resolver_1();
		il2cpp_codegen_initobj(L_1, sizeof(NamespaceResolver_t1487275418 ));
		return;
	}
}
extern "C"  void ElementWriter__ctor_m3451443409_AdjustorThunk (RuntimeObject * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	ElementWriter__ctor_m3451443409(_thisAdjusted, ___writer0, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteElement(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteElement_m2726179892 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter_WriteElement_m2726179892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter_WriteElement_m2726179892_RuntimeMethod_var);
	XElement_t4185968754 * V_0 = NULL;
	XNode_t716131460 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		XElement_t4185968754 * L_0 = ___e0;
		ElementWriter_PushAncestors_m2035798448((ElementWriter_t1843505097 *)__this, L_0, /*hidden argument*/NULL);
		XElement_t4185968754 * L_1 = ___e0;
		V_0 = L_1;
		XElement_t4185968754 * L_2 = ___e0;
		V_1 = L_2;
	}

IL_000b:
	{
		XNode_t716131460 * L_3 = V_1;
		___e0 = ((XElement_t4185968754 *)IsInstClass((RuntimeObject*)L_3, XElement_t4185968754_il2cpp_TypeInfo_var));
		XElement_t4185968754 * L_4 = ___e0;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		XElement_t4185968754 * L_5 = ___e0;
		ElementWriter_WriteStartElement_m2466481327((ElementWriter_t1843505097 *)__this, L_5, /*hidden argument*/NULL);
		XElement_t4185968754 * L_6 = ___e0;
		NullCheck(L_6);
		RuntimeObject * L_7 = ((XContainer_t3387731002 *)L_6)->get_content_3();
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		ElementWriter_WriteEndElement_m4048521740((ElementWriter_t1843505097 *)__this, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_002d:
	{
		XElement_t4185968754 * L_8 = ___e0;
		NullCheck(L_8);
		RuntimeObject * L_9 = ((XContainer_t3387731002 *)L_8)->get_content_3();
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		String_t* L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		XmlWriter_t127905479 * L_11 = __this->get_writer_0();
		String_t* L_12 = V_2;
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_11, L_12);
		ElementWriter_WriteFullEndElement_m3470268867((ElementWriter_t1843505097 *)__this, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0050:
	{
		XElement_t4185968754 * L_13 = ___e0;
		NullCheck(L_13);
		RuntimeObject * L_14 = ((XContainer_t3387731002 *)L_13)->get_content_3();
		NullCheck(((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_14, XNode_t716131460_il2cpp_TypeInfo_var)));
		XNode_t716131460 * L_15 = ((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_14, XNode_t716131460_il2cpp_TypeInfo_var))->get_next_2();
		V_1 = L_15;
		goto IL_000b;
	}

IL_0063:
	{
		XNode_t716131460 * L_16 = V_1;
		XmlWriter_t127905479 * L_17 = __this->get_writer_0();
		NullCheck(L_16);
		VirtActionInvoker1< XmlWriter_t127905479 * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, L_16, L_17);
		goto IL_007e;
	}

IL_0071:
	{
		XNode_t716131460 * L_18 = V_1;
		NullCheck(L_18);
		XContainer_t3387731002 * L_19 = ((XObject_t1119084474 *)L_18)->get_parent_0();
		V_1 = L_19;
		ElementWriter_WriteFullEndElement_m3470268867((ElementWriter_t1843505097 *)__this, /*hidden argument*/NULL);
	}

IL_007e:
	{
		XNode_t716131460 * L_20 = V_1;
		XElement_t4185968754 * L_21 = V_0;
		if ((((RuntimeObject*)(XNode_t716131460 *)L_20) == ((RuntimeObject*)(XElement_t4185968754 *)L_21)))
		{
			goto IL_0090;
		}
	}
	{
		XNode_t716131460 * L_22 = V_1;
		XNode_t716131460 * L_23 = V_1;
		NullCheck(L_23);
		XContainer_t3387731002 * L_24 = ((XObject_t1119084474 *)L_23)->get_parent_0();
		NullCheck(L_24);
		RuntimeObject * L_25 = L_24->get_content_3();
		if ((((RuntimeObject*)(XNode_t716131460 *)L_22) == ((RuntimeObject*)(RuntimeObject *)L_25)))
		{
			goto IL_0071;
		}
	}

IL_0090:
	{
		XNode_t716131460 * L_26 = V_1;
		XElement_t4185968754 * L_27 = V_0;
		if ((((RuntimeObject*)(XNode_t716131460 *)L_26) == ((RuntimeObject*)(XElement_t4185968754 *)L_27)))
		{
			goto IL_00a0;
		}
	}
	{
		XNode_t716131460 * L_28 = V_1;
		NullCheck(L_28);
		XNode_t716131460 * L_29 = L_28->get_next_2();
		V_1 = L_29;
		goto IL_000b;
	}

IL_00a0:
	{
		return;
	}
}
extern "C"  void ElementWriter_WriteElement_m2726179892_AdjustorThunk (RuntimeObject * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	ElementWriter_WriteElement_m2726179892(_thisAdjusted, ___e0, method);
}
// System.String System.Xml.Linq.ElementWriter::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* ElementWriter_GetPrefixOfNamespace_m3506790810 (ElementWriter_t1843505097 * __this, XNamespace_t1843508170 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter_GetPrefixOfNamespace_m3506790810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter_GetPrefixOfNamespace_m3506790810_RuntimeMethod_var);
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		XNamespace_t1843508170 * L_0 = ___ns0;
		NullCheck(L_0);
		String_t* L_1 = XNamespace_get_NamespaceName_m2952101840(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_0015:
	{
		NamespaceResolver_t1487275418 * L_5 = __this->get_address_of_resolver_1();
		XNamespace_t1843508170 * L_6 = ___ns0;
		bool L_7 = ___allowDefaultNamespace1;
		String_t* L_8 = NamespaceResolver_GetPrefixOfNamespace_m1421437472((NamespaceResolver_t1487275418 *)L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_10 = V_1;
		return L_10;
	}

IL_0028:
	{
		String_t* L_11 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_11) == ((RuntimeObject*)(String_t*)_stringLiteral2984480440))))
		{
			goto IL_0036;
		}
	}
	{
		return _stringLiteral2909972470;
	}

IL_0036:
	{
		String_t* L_12 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_12) == ((RuntimeObject*)(String_t*)_stringLiteral2829469855))))
		{
			goto IL_0044;
		}
	}
	{
		return _stringLiteral3929236445;
	}

IL_0044:
	{
		return (String_t*)NULL;
	}
}
extern "C"  String_t* ElementWriter_GetPrefixOfNamespace_m3506790810_AdjustorThunk (RuntimeObject * __this, XNamespace_t1843508170 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	return ElementWriter_GetPrefixOfNamespace_m3506790810(_thisAdjusted, ___ns0, ___allowDefaultNamespace1, method);
}
// System.Void System.Xml.Linq.ElementWriter::PushAncestors(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_PushAncestors_m2035798448 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter_PushAncestors_m2035798448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter_PushAncestors_m2035798448_RuntimeMethod_var);
	XAttribute_t355876829 * V_0 = NULL;
	NamespaceResolver_t1487275418 * G_B5_0 = NULL;
	NamespaceResolver_t1487275418 * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	NamespaceResolver_t1487275418 * G_B6_1 = NULL;

IL_0000:
	{
		XElement_t4185968754 * L_0 = ___e0;
		NullCheck(L_0);
		XContainer_t3387731002 * L_1 = ((XObject_t1119084474 *)L_0)->get_parent_0();
		___e0 = ((XElement_t4185968754 *)IsInstClass((RuntimeObject*)L_1, XElement_t4185968754_il2cpp_TypeInfo_var));
		XElement_t4185968754 * L_2 = ___e0;
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		XElement_t4185968754 * L_3 = ___e0;
		NullCheck(L_3);
		XAttribute_t355876829 * L_4 = L_3->get_lastAttr_5();
		V_0 = L_4;
		XAttribute_t355876829 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0000;
		}
	}

IL_001a:
	{
		XAttribute_t355876829 * L_6 = V_0;
		NullCheck(L_6);
		XAttribute_t355876829 * L_7 = L_6->get_next_2();
		V_0 = L_7;
		XAttribute_t355876829 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = XAttribute_get_IsNamespaceDeclaration_m3726745643(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		NamespaceResolver_t1487275418 * L_10 = __this->get_address_of_resolver_1();
		XAttribute_t355876829 * L_11 = V_0;
		NullCheck(L_11);
		XName_t3751455998 * L_12 = XAttribute_get_Name_m2178653462(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = XName_get_NamespaceName_m1113219825(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		G_B4_0 = L_10;
		if (!L_14)
		{
			G_B5_0 = L_10;
			goto IL_004e;
		}
	}
	{
		XAttribute_t355876829 * L_15 = V_0;
		NullCheck(L_15);
		XName_t3751455998 * L_16 = XAttribute_get_Name_m2178653462(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = XName_get_LocalName_m2163884361(L_16, /*hidden argument*/NULL);
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		goto IL_0053;
	}

IL_004e:
	{
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B6_0 = L_18;
		G_B6_1 = G_B5_0;
	}

IL_0053:
	{
		XAttribute_t355876829 * L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20 = XAttribute_get_Value_m822045865(L_19, /*hidden argument*/NULL);
		XNamespace_t1843508170 * L_21 = XNamespace_Get_m9299589(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NamespaceResolver_AddFirst_m637257421((NamespaceResolver_t1487275418 *)G_B6_1, G_B6_0, L_21, /*hidden argument*/NULL);
	}

IL_0063:
	{
		XAttribute_t355876829 * L_22 = V_0;
		XElement_t4185968754 * L_23 = ___e0;
		NullCheck(L_23);
		XAttribute_t355876829 * L_24 = L_23->get_lastAttr_5();
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_22) == ((RuntimeObject*)(XAttribute_t355876829 *)L_24))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0000;
	}

IL_006e:
	{
		return;
	}
}
extern "C"  void ElementWriter_PushAncestors_m2035798448_AdjustorThunk (RuntimeObject * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	ElementWriter_PushAncestors_m2035798448(_thisAdjusted, ___e0, method);
}
// System.Void System.Xml.Linq.ElementWriter::PushElement(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_PushElement_m2420541029 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter_PushElement_m2420541029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter_PushElement_m2420541029_RuntimeMethod_var);
	XAttribute_t355876829 * V_0 = NULL;
	NamespaceResolver_t1487275418 * G_B4_0 = NULL;
	NamespaceResolver_t1487275418 * G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	NamespaceResolver_t1487275418 * G_B5_1 = NULL;
	{
		NamespaceResolver_t1487275418 * L_0 = __this->get_address_of_resolver_1();
		NamespaceResolver_PushScope_m2295210081((NamespaceResolver_t1487275418 *)L_0, /*hidden argument*/NULL);
		XElement_t4185968754 * L_1 = ___e0;
		NullCheck(L_1);
		XAttribute_t355876829 * L_2 = L_1->get_lastAttr_5();
		V_0 = L_2;
		XAttribute_t355876829 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0067;
		}
	}

IL_0015:
	{
		XAttribute_t355876829 * L_4 = V_0;
		NullCheck(L_4);
		XAttribute_t355876829 * L_5 = L_4->get_next_2();
		V_0 = L_5;
		XAttribute_t355876829 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = XAttribute_get_IsNamespaceDeclaration_m3726745643(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		NamespaceResolver_t1487275418 * L_8 = __this->get_address_of_resolver_1();
		XAttribute_t355876829 * L_9 = V_0;
		NullCheck(L_9);
		XName_t3751455998 * L_10 = XAttribute_get_Name_m2178653462(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = XName_get_NamespaceName_m1113219825(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		if (!L_12)
		{
			G_B4_0 = L_8;
			goto IL_0049;
		}
	}
	{
		XAttribute_t355876829 * L_13 = V_0;
		NullCheck(L_13);
		XName_t3751455998 * L_14 = XAttribute_get_Name_m2178653462(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = XName_get_LocalName_m2163884361(L_14, /*hidden argument*/NULL);
		G_B5_0 = L_15;
		G_B5_1 = G_B3_0;
		goto IL_004e;
	}

IL_0049:
	{
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_004e:
	{
		XAttribute_t355876829 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = XAttribute_get_Value_m822045865(L_17, /*hidden argument*/NULL);
		XNamespace_t1843508170 * L_19 = XNamespace_Get_m9299589(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		NamespaceResolver_Add_m2556732263((NamespaceResolver_t1487275418 *)G_B5_1, G_B5_0, L_19, /*hidden argument*/NULL);
	}

IL_005e:
	{
		XAttribute_t355876829 * L_20 = V_0;
		XElement_t4185968754 * L_21 = ___e0;
		NullCheck(L_21);
		XAttribute_t355876829 * L_22 = L_21->get_lastAttr_5();
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_20) == ((RuntimeObject*)(XAttribute_t355876829 *)L_22))))
		{
			goto IL_0015;
		}
	}

IL_0067:
	{
		return;
	}
}
extern "C"  void ElementWriter_PushElement_m2420541029_AdjustorThunk (RuntimeObject * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	ElementWriter_PushElement_m2420541029(_thisAdjusted, ___e0, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteEndElement()
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteEndElement_m4048521740 (ElementWriter_t1843505097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter_WriteEndElement_m4048521740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter_WriteEndElement_m4048521740_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_0);
		NamespaceResolver_t1487275418 * L_1 = __this->get_address_of_resolver_1();
		NamespaceResolver_PopScope_m2027933180((NamespaceResolver_t1487275418 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void ElementWriter_WriteEndElement_m4048521740_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	ElementWriter_WriteEndElement_m4048521740(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteFullEndElement()
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteFullEndElement_m3470268867 (ElementWriter_t1843505097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter_WriteFullEndElement_m3470268867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter_WriteFullEndElement_m3470268867_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, L_0);
		NamespaceResolver_t1487275418 * L_1 = __this->get_address_of_resolver_1();
		NamespaceResolver_PopScope_m2027933180((NamespaceResolver_t1487275418 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void ElementWriter_WriteFullEndElement_m3470268867_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	ElementWriter_WriteFullEndElement_m3470268867(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteStartElement(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void ElementWriter_WriteStartElement_m2466481327 (ElementWriter_t1843505097 * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ElementWriter_WriteStartElement_m2466481327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ElementWriter_WriteStartElement_m2466481327_RuntimeMethod_var);
	XNamespace_t1843508170 * V_0 = NULL;
	XAttribute_t355876829 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	XmlWriter_t127905479 * G_B3_2 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	XmlWriter_t127905479 * G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	XmlWriter_t127905479 * G_B4_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	XmlWriter_t127905479 * G_B5_3 = NULL;
	{
		XElement_t4185968754 * L_0 = ___e0;
		ElementWriter_PushElement_m2420541029((ElementWriter_t1843505097 *)__this, L_0, /*hidden argument*/NULL);
		XElement_t4185968754 * L_1 = ___e0;
		NullCheck(L_1);
		XName_t3751455998 * L_2 = XElement_get_Name_m619912033(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		XNamespace_t1843508170 * L_3 = XName_get_Namespace_m4023955522(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlWriter_t127905479 * L_4 = __this->get_writer_0();
		XNamespace_t1843508170 * L_5 = V_0;
		String_t* L_6 = ElementWriter_GetPrefixOfNamespace_m3506790810((ElementWriter_t1843505097 *)__this, L_5, (bool)1, /*hidden argument*/NULL);
		XElement_t4185968754 * L_7 = ___e0;
		NullCheck(L_7);
		XName_t3751455998 * L_8 = XElement_get_Name_m619912033(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = XName_get_LocalName_m2163884361(L_8, /*hidden argument*/NULL);
		XNamespace_t1843508170 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = XNamespace_get_NamespaceName_m2952101840(L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(9 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_4, L_6, L_9, L_11);
		XElement_t4185968754 * L_12 = ___e0;
		NullCheck(L_12);
		XAttribute_t355876829 * L_13 = L_12->get_lastAttr_5();
		V_1 = L_13;
		XAttribute_t355876829 * L_14 = V_1;
		if (!L_14)
		{
			goto IL_00a7;
		}
	}

IL_0041:
	{
		XAttribute_t355876829 * L_15 = V_1;
		NullCheck(L_15);
		XAttribute_t355876829 * L_16 = L_15->get_next_2();
		V_1 = L_16;
		XAttribute_t355876829 * L_17 = V_1;
		NullCheck(L_17);
		XName_t3751455998 * L_18 = XAttribute_get_Name_m2178653462(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		XNamespace_t1843508170 * L_19 = XName_get_Namespace_m4023955522(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		XAttribute_t355876829 * L_20 = V_1;
		NullCheck(L_20);
		XName_t3751455998 * L_21 = XAttribute_get_Name_m2178653462(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = XName_get_LocalName_m2163884361(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		XNamespace_t1843508170 * L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24 = XNamespace_get_NamespaceName_m2952101840(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		XmlWriter_t127905479 * L_25 = __this->get_writer_0();
		XNamespace_t1843508170 * L_26 = V_0;
		String_t* L_27 = ElementWriter_GetPrefixOfNamespace_m3506790810((ElementWriter_t1843505097 *)__this, L_26, (bool)0, /*hidden argument*/NULL);
		String_t* L_28 = V_2;
		String_t* L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		G_B2_0 = L_28;
		G_B2_1 = L_27;
		G_B2_2 = L_25;
		if (L_30)
		{
			G_B3_0 = L_28;
			G_B3_1 = L_27;
			G_B3_2 = L_25;
			goto IL_008b;
		}
	}
	{
		String_t* L_31 = V_2;
		bool L_32 = String_op_Equality_m920492651(NULL /*static, unused*/, L_31, _stringLiteral3929236445, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		if (L_32)
		{
			G_B4_0 = G_B2_0;
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			goto IL_008e;
		}
	}

IL_008b:
	{
		String_t* L_33 = V_3;
		G_B5_0 = L_33;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0093;
	}

IL_008e:
	{
		G_B5_0 = _stringLiteral2829469855;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0093:
	{
		XAttribute_t355876829 * L_34 = V_1;
		NullCheck(L_34);
		String_t* L_35 = XAttribute_get_Value_m822045865(L_34, /*hidden argument*/NULL);
		NullCheck(G_B5_3);
		XmlWriter_WriteAttributeString_m2341773285(G_B5_3, G_B5_2, G_B5_1, G_B5_0, L_35, /*hidden argument*/NULL);
		XAttribute_t355876829 * L_36 = V_1;
		XElement_t4185968754 * L_37 = ___e0;
		NullCheck(L_37);
		XAttribute_t355876829 * L_38 = L_37->get_lastAttr_5();
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_36) == ((RuntimeObject*)(XAttribute_t355876829 *)L_38))))
		{
			goto IL_0041;
		}
	}

IL_00a7:
	{
		return;
	}
}
extern "C"  void ElementWriter_WriteStartElement_m2466481327_AdjustorThunk (RuntimeObject * __this, XElement_t4185968754 * ___e0, const RuntimeMethod* method)
{
	ElementWriter_t1843505097 * _thisAdjusted = reinterpret_cast<ElementWriter_t1843505097 *>(__this + 1);
	ElementWriter_WriteStartElement_m2466481327(_thisAdjusted, ___e0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.LineInfoAnnotation::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_m1540747406 (LineInfoAnnotation_t2689670207 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineInfoAnnotation__ctor_m1540747406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(LineInfoAnnotation__ctor_m1540747406_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_lineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_linePosition_1(L_1);
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
// System.Void System.Xml.Linq.LineInfoEndElementAnnotation::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineInfoEndElementAnnotation__ctor_m4037848550 (LineInfoEndElementAnnotation_t493731080 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineInfoEndElementAnnotation__ctor_m4037848550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(LineInfoEndElementAnnotation__ctor_m4037848550_RuntimeMethod_var);
	{
		int32_t L_0 = ___lineNumber0;
		int32_t L_1 = ___linePosition1;
		LineInfoAnnotation__ctor_m1540747406(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Xml.Linq.NameSerializer::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void NameSerializer__ctor_m946590521 (NameSerializer_t1284368626 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameSerializer__ctor_m946590521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NameSerializer__ctor_m946590521_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NameSerializer__ctor_m946590521_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m3155282843(L_2, _stringLiteral62725243, /*hidden argument*/NULL);
		__this->set_expandedName_0(L_3);
		return;
	}
}
// System.Object System.Xml.Linq.NameSerializer::System.Runtime.Serialization.IObjectReference.GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * NameSerializer_System_Runtime_Serialization_IObjectReference_GetRealObject_m1613220564 (NameSerializer_t1284368626 * __this, StreamingContext_t3711869237  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameSerializer_System_Runtime_Serialization_IObjectReference_GetRealObject_m1613220564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NameSerializer_System_Runtime_Serialization_IObjectReference_GetRealObject_m1613220564_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get_expandedName_0();
		XName_t3751455998 * L_1 = XName_Get_m1522378289(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.Linq.NameSerializer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m764090128 (NameSerializer_t1284368626 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m764090128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m764090128_RuntimeMethod_var);
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m764090128_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceCache
extern "C" void NamespaceCache_t3512832689_marshal_pinvoke(const NamespaceCache_t3512832689& unmarshaled, NamespaceCache_t3512832689_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL, NULL);
}
extern "C" void NamespaceCache_t3512832689_marshal_pinvoke_back(const NamespaceCache_t3512832689_marshaled_pinvoke& marshaled, NamespaceCache_t3512832689& unmarshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceCache
extern "C" void NamespaceCache_t3512832689_marshal_pinvoke_cleanup(NamespaceCache_t3512832689_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceCache
extern "C" void NamespaceCache_t3512832689_marshal_com(const NamespaceCache_t3512832689& unmarshaled, NamespaceCache_t3512832689_marshaled_com& marshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL, NULL);
}
extern "C" void NamespaceCache_t3512832689_marshal_com_back(const NamespaceCache_t3512832689_marshaled_com& marshaled, NamespaceCache_t3512832689& unmarshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceCache
extern "C" void NamespaceCache_t3512832689_marshal_com_cleanup(NamespaceCache_t3512832689_marshaled_com& marshaled)
{
}
// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceCache::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * NamespaceCache_Get_m3575903994 (NamespaceCache_t3512832689 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceCache_Get_m3575903994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NamespaceCache_Get_m3575903994_RuntimeMethod_var);
	{
		String_t* L_0 = ___namespaceName0;
		String_t* L_1 = __this->get_namespaceName_1();
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		XNamespace_t1843508170 * L_2 = __this->get_ns_0();
		return L_2;
	}

IL_0010:
	{
		String_t* L_3 = ___namespaceName0;
		__this->set_namespaceName_1(L_3);
		String_t* L_4 = ___namespaceName0;
		XNamespace_t1843508170 * L_5 = XNamespace_Get_m9299589(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_ns_0(L_5);
		XNamespace_t1843508170 * L_6 = __this->get_ns_0();
		return L_6;
	}
}
extern "C"  XNamespace_t1843508170 * NamespaceCache_Get_m3575903994_AdjustorThunk (RuntimeObject * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	NamespaceCache_t3512832689 * _thisAdjusted = reinterpret_cast<NamespaceCache_t3512832689 *>(__this + 1);
	return NamespaceCache_Get_m3575903994(_thisAdjusted, ___namespaceName0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceResolver
extern "C" void NamespaceResolver_t1487275418_marshal_pinvoke(const NamespaceResolver_t1487275418& unmarshaled, NamespaceResolver_t1487275418_marshaled_pinvoke& marshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL, NULL);
}
extern "C" void NamespaceResolver_t1487275418_marshal_pinvoke_back(const NamespaceResolver_t1487275418_marshaled_pinvoke& marshaled, NamespaceResolver_t1487275418& unmarshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceResolver
extern "C" void NamespaceResolver_t1487275418_marshal_pinvoke_cleanup(NamespaceResolver_t1487275418_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceResolver
extern "C" void NamespaceResolver_t1487275418_marshal_com(const NamespaceResolver_t1487275418& unmarshaled, NamespaceResolver_t1487275418_marshaled_com& marshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL, NULL);
}
extern "C" void NamespaceResolver_t1487275418_marshal_com_back(const NamespaceResolver_t1487275418_marshaled_com& marshaled, NamespaceResolver_t1487275418& unmarshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceResolver
extern "C" void NamespaceResolver_t1487275418_marshal_com_cleanup(NamespaceResolver_t1487275418_marshaled_com& marshaled)
{
}
// System.Void System.Xml.Linq.NamespaceResolver::PushScope()
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_PushScope_m2295210081 (NamespaceResolver_t1487275418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceResolver_PushScope_m2295210081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NamespaceResolver_PushScope_m2295210081_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_scope_0();
		__this->set_scope_0(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		return;
	}
}
extern "C"  void NamespaceResolver_PushScope_m2295210081_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NamespaceResolver_t1487275418 * _thisAdjusted = reinterpret_cast<NamespaceResolver_t1487275418 *>(__this + 1);
	NamespaceResolver_PushScope_m2295210081(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.NamespaceResolver::PopScope()
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_PopScope_m2027933180 (NamespaceResolver_t1487275418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceResolver_PopScope_m2027933180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NamespaceResolver_PopScope_m2027933180_RuntimeMethod_var);
	NamespaceDeclaration_t1302953724 * V_0 = NULL;
	{
		NamespaceDeclaration_t1302953724 * L_0 = __this->get_declaration_1();
		V_0 = L_0;
		NamespaceDeclaration_t1302953724 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}

IL_000a:
	{
		NamespaceDeclaration_t1302953724 * L_2 = V_0;
		NullCheck(L_2);
		NamespaceDeclaration_t1302953724 * L_3 = L_2->get_prev_3();
		V_0 = L_3;
		NamespaceDeclaration_t1302953724 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_scope_2();
		int32_t L_6 = __this->get_scope_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_005a;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_7 = V_0;
		NamespaceDeclaration_t1302953724 * L_8 = __this->get_declaration_1();
		if ((!(((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_7) == ((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_8))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_declaration_1((NamespaceDeclaration_t1302953724 *)NULL);
		goto IL_0042;
	}

IL_0031:
	{
		NamespaceDeclaration_t1302953724 * L_9 = __this->get_declaration_1();
		NamespaceDeclaration_t1302953724 * L_10 = V_0;
		NullCheck(L_10);
		NamespaceDeclaration_t1302953724 * L_11 = L_10->get_prev_3();
		NullCheck(L_9);
		L_9->set_prev_3(L_11);
	}

IL_0042:
	{
		__this->set_rover_2((NamespaceDeclaration_t1302953724 *)NULL);
		NamespaceDeclaration_t1302953724 * L_12 = V_0;
		NamespaceDeclaration_t1302953724 * L_13 = __this->get_declaration_1();
		if ((((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_12) == ((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_14 = __this->get_declaration_1();
		if (L_14)
		{
			goto IL_000a;
		}
	}

IL_005a:
	{
		int32_t L_15 = __this->get_scope_0();
		__this->set_scope_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
		return;
	}
}
extern "C"  void NamespaceResolver_PopScope_m2027933180_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NamespaceResolver_t1487275418 * _thisAdjusted = reinterpret_cast<NamespaceResolver_t1487275418 *>(__this + 1);
	NamespaceResolver_PopScope_m2027933180(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.NamespaceResolver::Add(System.String,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_Add_m2556732263 (NamespaceResolver_t1487275418 * __this, String_t* ___prefix0, XNamespace_t1843508170 * ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceResolver_Add_m2556732263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NamespaceResolver_Add_m2556732263_RuntimeMethod_var);
	NamespaceDeclaration_t1302953724 * V_0 = NULL;
	{
		NamespaceDeclaration_t1302953724 * L_0 = (NamespaceDeclaration_t1302953724 *)il2cpp_codegen_object_new(NamespaceDeclaration_t1302953724_il2cpp_TypeInfo_var);
		NamespaceDeclaration__ctor_m286273896(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		NamespaceDeclaration_t1302953724 * L_1 = V_0;
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		L_1->set_prefix_0(L_2);
		NamespaceDeclaration_t1302953724 * L_3 = V_0;
		XNamespace_t1843508170 * L_4 = ___ns1;
		NullCheck(L_3);
		L_3->set_ns_1(L_4);
		NamespaceDeclaration_t1302953724 * L_5 = V_0;
		int32_t L_6 = __this->get_scope_0();
		NullCheck(L_5);
		L_5->set_scope_2(L_6);
		NamespaceDeclaration_t1302953724 * L_7 = __this->get_declaration_1();
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_8 = V_0;
		__this->set_declaration_1(L_8);
		goto IL_0042;
	}

IL_0031:
	{
		NamespaceDeclaration_t1302953724 * L_9 = V_0;
		NamespaceDeclaration_t1302953724 * L_10 = __this->get_declaration_1();
		NullCheck(L_10);
		NamespaceDeclaration_t1302953724 * L_11 = L_10->get_prev_3();
		NullCheck(L_9);
		L_9->set_prev_3(L_11);
	}

IL_0042:
	{
		NamespaceDeclaration_t1302953724 * L_12 = __this->get_declaration_1();
		NamespaceDeclaration_t1302953724 * L_13 = V_0;
		NullCheck(L_12);
		L_12->set_prev_3(L_13);
		__this->set_rover_2((NamespaceDeclaration_t1302953724 *)NULL);
		return;
	}
}
extern "C"  void NamespaceResolver_Add_m2556732263_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, XNamespace_t1843508170 * ___ns1, const RuntimeMethod* method)
{
	NamespaceResolver_t1487275418 * _thisAdjusted = reinterpret_cast<NamespaceResolver_t1487275418 *>(__this + 1);
	NamespaceResolver_Add_m2556732263(_thisAdjusted, ___prefix0, ___ns1, method);
}
// System.Void System.Xml.Linq.NamespaceResolver::AddFirst(System.String,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR void NamespaceResolver_AddFirst_m637257421 (NamespaceResolver_t1487275418 * __this, String_t* ___prefix0, XNamespace_t1843508170 * ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceResolver_AddFirst_m637257421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NamespaceResolver_AddFirst_m637257421_RuntimeMethod_var);
	NamespaceDeclaration_t1302953724 * V_0 = NULL;
	{
		NamespaceDeclaration_t1302953724 * L_0 = (NamespaceDeclaration_t1302953724 *)il2cpp_codegen_object_new(NamespaceDeclaration_t1302953724_il2cpp_TypeInfo_var);
		NamespaceDeclaration__ctor_m286273896(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		NamespaceDeclaration_t1302953724 * L_1 = V_0;
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		L_1->set_prefix_0(L_2);
		NamespaceDeclaration_t1302953724 * L_3 = V_0;
		XNamespace_t1843508170 * L_4 = ___ns1;
		NullCheck(L_3);
		L_3->set_ns_1(L_4);
		NamespaceDeclaration_t1302953724 * L_5 = V_0;
		int32_t L_6 = __this->get_scope_0();
		NullCheck(L_5);
		L_5->set_scope_2(L_6);
		NamespaceDeclaration_t1302953724 * L_7 = __this->get_declaration_1();
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_8 = V_0;
		NamespaceDeclaration_t1302953724 * L_9 = V_0;
		NullCheck(L_8);
		L_8->set_prev_3(L_9);
		goto IL_004e;
	}

IL_0031:
	{
		NamespaceDeclaration_t1302953724 * L_10 = V_0;
		NamespaceDeclaration_t1302953724 * L_11 = __this->get_declaration_1();
		NullCheck(L_11);
		NamespaceDeclaration_t1302953724 * L_12 = L_11->get_prev_3();
		NullCheck(L_10);
		L_10->set_prev_3(L_12);
		NamespaceDeclaration_t1302953724 * L_13 = __this->get_declaration_1();
		NamespaceDeclaration_t1302953724 * L_14 = V_0;
		NullCheck(L_13);
		L_13->set_prev_3(L_14);
	}

IL_004e:
	{
		NamespaceDeclaration_t1302953724 * L_15 = V_0;
		__this->set_declaration_1(L_15);
		__this->set_rover_2((NamespaceDeclaration_t1302953724 *)NULL);
		return;
	}
}
extern "C"  void NamespaceResolver_AddFirst_m637257421_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, XNamespace_t1843508170 * ___ns1, const RuntimeMethod* method)
{
	NamespaceResolver_t1487275418 * _thisAdjusted = reinterpret_cast<NamespaceResolver_t1487275418 *>(__this + 1);
	NamespaceResolver_AddFirst_m637257421(_thisAdjusted, ___prefix0, ___ns1, method);
}
// System.String System.Xml.Linq.NamespaceResolver::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* NamespaceResolver_GetPrefixOfNamespace_m1421437472 (NamespaceResolver_t1487275418 * __this, XNamespace_t1843508170 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceResolver_GetPrefixOfNamespace_m1421437472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NamespaceResolver_GetPrefixOfNamespace_m1421437472_RuntimeMethod_var);
	NamespaceDeclaration_t1302953724 * V_0 = NULL;
	NamespaceDeclaration_t1302953724 * V_1 = NULL;
	{
		NamespaceDeclaration_t1302953724 * L_0 = __this->get_rover_2();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_1 = __this->get_rover_2();
		NullCheck(L_1);
		XNamespace_t1843508170 * L_2 = L_1->get_ns_1();
		XNamespace_t1843508170 * L_3 = ___ns0;
		bool L_4 = XNamespace_op_Equality_m3113830840(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		bool L_5 = ___allowDefaultNamespace1;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_6 = __this->get_rover_2();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_prefix_0();
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_0031:
	{
		NamespaceDeclaration_t1302953724 * L_9 = __this->get_rover_2();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_prefix_0();
		return L_10;
	}

IL_003d:
	{
		NamespaceDeclaration_t1302953724 * L_11 = __this->get_declaration_1();
		V_0 = L_11;
		NamespaceDeclaration_t1302953724 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_00bb;
		}
	}

IL_0047:
	{
		NamespaceDeclaration_t1302953724 * L_13 = V_0;
		NullCheck(L_13);
		NamespaceDeclaration_t1302953724 * L_14 = L_13->get_prev_3();
		V_0 = L_14;
		NamespaceDeclaration_t1302953724 * L_15 = V_0;
		NullCheck(L_15);
		XNamespace_t1843508170 * L_16 = L_15->get_ns_1();
		XNamespace_t1843508170 * L_17 = ___ns0;
		bool L_18 = XNamespace_op_Equality_m3113830840(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_19 = __this->get_declaration_1();
		NullCheck(L_19);
		NamespaceDeclaration_t1302953724 * L_20 = L_19->get_prev_3();
		V_1 = L_20;
		goto IL_0071;
	}

IL_006a:
	{
		NamespaceDeclaration_t1302953724 * L_21 = V_1;
		NullCheck(L_21);
		NamespaceDeclaration_t1302953724 * L_22 = L_21->get_prev_3();
		V_1 = L_22;
	}

IL_0071:
	{
		NamespaceDeclaration_t1302953724 * L_23 = V_1;
		NamespaceDeclaration_t1302953724 * L_24 = V_0;
		if ((((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_23) == ((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_24)))
		{
			goto IL_0088;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_prefix_0();
		NamespaceDeclaration_t1302953724 * L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_prefix_0();
		bool L_29 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_26, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_006a;
		}
	}

IL_0088:
	{
		NamespaceDeclaration_t1302953724 * L_30 = V_1;
		NamespaceDeclaration_t1302953724 * L_31 = V_0;
		if ((!(((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_30) == ((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_31))))
		{
			goto IL_00b2;
		}
	}
	{
		bool L_32 = ___allowDefaultNamespace1;
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_33 = V_0;
		__this->set_rover_2(L_33);
		NamespaceDeclaration_t1302953724 * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = L_34->get_prefix_0();
		return L_35;
	}

IL_009d:
	{
		NamespaceDeclaration_t1302953724 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = L_36->get_prefix_0();
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m3847582255(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		NamespaceDeclaration_t1302953724 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = L_39->get_prefix_0();
		return L_40;
	}

IL_00b2:
	{
		NamespaceDeclaration_t1302953724 * L_41 = V_0;
		NamespaceDeclaration_t1302953724 * L_42 = __this->get_declaration_1();
		if ((!(((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_41) == ((RuntimeObject*)(NamespaceDeclaration_t1302953724 *)L_42))))
		{
			goto IL_0047;
		}
	}

IL_00bb:
	{
		return (String_t*)NULL;
	}
}
extern "C"  String_t* NamespaceResolver_GetPrefixOfNamespace_m1421437472_AdjustorThunk (RuntimeObject * __this, XNamespace_t1843508170 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	NamespaceResolver_t1487275418 * _thisAdjusted = reinterpret_cast<NamespaceResolver_t1487275418 *>(__this + 1);
	return NamespaceResolver_GetPrefixOfNamespace_m1421437472(_thisAdjusted, ___ns0, ___allowDefaultNamespace1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NamespaceDeclaration__ctor_m286273896 (NamespaceDeclaration_t1302953724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceDeclaration__ctor_m286273896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NamespaceDeclaration__ctor_m286273896_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.String System.Xml.Linq.Res::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Res_GetString_m1829098876 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Res_GetString_m1829098876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Res_GetString_m1829098876_RuntimeMethod_var);
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		uint32_t L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2090043908(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-1949800506)))))
		{
			goto IL_0125;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)626770679)))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)272356109)))))
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)85233838)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)15713876))))
		{
			goto IL_0355;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)85233838))))
		{
			goto IL_0394;
		}
	}
	{
		goto IL_058f;
	}

IL_0048:
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)103965186))))
		{
			goto IL_0412;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)272356109))))
		{
			goto IL_043c;
		}
	}
	{
		goto IL_058f;
	}

IL_0063:
	{
		uint32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)569780718)))))
		{
			goto IL_0086;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)407913795))))
		{
			goto IL_02ec;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)569780718))))
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_058f;
	}

IL_0086:
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)625070019))))
		{
			goto IL_0451;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)626770679))))
		{
			goto IL_0427;
		}
	}
	{
		goto IL_058f;
	}

IL_00a1:
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1639487891)))))
		{
			goto IL_00e7;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1004902937)))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)922706940))))
		{
			goto IL_0298;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1004902937))))
		{
			goto IL_036a;
		}
	}
	{
		goto IL_058f;
	}

IL_00cc:
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1405029661))))
		{
			goto IL_047b;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1639487891))))
		{
			goto IL_0301;
		}
	}
	{
		goto IL_058f;
	}

IL_00e7:
	{
		uint32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)1755217186)))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1718317927))))
		{
			goto IL_032b;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1755217186))))
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_058f;
	}

IL_010a:
	{
		uint32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)1837980878))))
		{
			goto IL_03d3;
		}
	}
	{
		uint32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1949800506))))
		{
			goto IL_02ad;
		}
	}
	{
		goto IL_058f;
	}

IL_0125:
	{
		uint32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-784584768)))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-1014396228)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1803877632)))))
		{
			goto IL_015b;
		}
	}
	{
		uint32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1857585789))))
		{
			goto IL_03e8;
		}
	}
	{
		uint32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1803877632))))
		{
			goto IL_03be;
		}
	}
	{
		goto IL_058f;
	}

IL_015b:
	{
		uint32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1122788132))))
		{
			goto IL_0316;
		}
	}
	{
		uint32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1014396228))))
		{
			goto IL_02d7;
		}
	}
	{
		goto IL_058f;
	}

IL_0176:
	{
		uint32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-864757643)))))
		{
			goto IL_0199;
		}
	}
	{
		uint32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-906458386))))
		{
			goto IL_026e;
		}
	}
	{
		uint32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-864757643))))
		{
			goto IL_0340;
		}
	}
	{
		goto IL_058f;
	}

IL_0199:
	{
		uint32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-863392252))))
		{
			goto IL_0259;
		}
	}
	{
		uint32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)-784584768))))
		{
			goto IL_037f;
		}
	}
	{
		goto IL_058f;
	}

IL_01b4:
	{
		uint32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-571087830)))))
		{
			goto IL_01f7;
		}
	}
	{
		uint32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) <= ((uint32_t)((int32_t)-700897642)))))
		{
			goto IL_01df;
		}
	}
	{
		uint32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-755692016))))
		{
			goto IL_0490;
		}
	}
	{
		uint32_t L_41 = V_0;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-700897642))))
		{
			goto IL_03fd;
		}
	}
	{
		goto IL_058f;
	}

IL_01df:
	{
		uint32_t L_42 = V_0;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)-666966205))))
		{
			goto IL_04a5;
		}
	}
	{
		uint32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)-571087830))))
		{
			goto IL_0244;
		}
	}
	{
		goto IL_058f;
	}

IL_01f7:
	{
		uint32_t L_44 = V_0;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-497792745)))))
		{
			goto IL_0217;
		}
	}
	{
		uint32_t L_45 = V_0;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)-560446364))))
		{
			goto IL_0283;
		}
	}
	{
		uint32_t L_46 = V_0;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)-497792745))))
		{
			goto IL_0466;
		}
	}
	{
		goto IL_058f;
	}

IL_0217:
	{
		uint32_t L_47 = V_0;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)-492803734))))
		{
			goto IL_022f;
		}
	}
	{
		uint32_t L_48 = V_0;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-461614960))))
		{
			goto IL_04ba;
		}
	}
	{
		goto IL_058f;
	}

IL_022f:
	{
		String_t* L_49 = ___name0;
		bool L_50 = String_op_Equality_m920492651(NULL /*static, unused*/, L_49, _stringLiteral37302086, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_04cf;
		}
	}
	{
		goto IL_058f;
	}

IL_0244:
	{
		String_t* L_51 = ___name0;
		bool L_52 = String_op_Equality_m920492651(NULL /*static, unused*/, L_51, _stringLiteral1473093608, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_04d5;
		}
	}
	{
		goto IL_058f;
	}

IL_0259:
	{
		String_t* L_53 = ___name0;
		bool L_54 = String_op_Equality_m920492651(NULL /*static, unused*/, L_53, _stringLiteral834294703, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_04db;
		}
	}
	{
		goto IL_058f;
	}

IL_026e:
	{
		String_t* L_55 = ___name0;
		bool L_56 = String_op_Equality_m920492651(NULL /*static, unused*/, L_55, _stringLiteral1450029974, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_04e1;
		}
	}
	{
		goto IL_058f;
	}

IL_0283:
	{
		String_t* L_57 = ___name0;
		bool L_58 = String_op_Equality_m920492651(NULL /*static, unused*/, L_57, _stringLiteral1812928724, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_04e7;
		}
	}
	{
		goto IL_058f;
	}

IL_0298:
	{
		String_t* L_59 = ___name0;
		bool L_60 = String_op_Equality_m920492651(NULL /*static, unused*/, L_59, _stringLiteral3298996753, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_04ed;
		}
	}
	{
		goto IL_058f;
	}

IL_02ad:
	{
		String_t* L_61 = ___name0;
		bool L_62 = String_op_Equality_m920492651(NULL /*static, unused*/, L_61, _stringLiteral2380168007, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_04f3;
		}
	}
	{
		goto IL_058f;
	}

IL_02c2:
	{
		String_t* L_63 = ___name0;
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral2561865016, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_04f9;
		}
	}
	{
		goto IL_058f;
	}

IL_02d7:
	{
		String_t* L_65 = ___name0;
		bool L_66 = String_op_Equality_m920492651(NULL /*static, unused*/, L_65, _stringLiteral1876795418, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_04ff;
		}
	}
	{
		goto IL_058f;
	}

IL_02ec:
	{
		String_t* L_67 = ___name0;
		bool L_68 = String_op_Equality_m920492651(NULL /*static, unused*/, L_67, _stringLiteral1469956566, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0505;
		}
	}
	{
		goto IL_058f;
	}

IL_0301:
	{
		String_t* L_69 = ___name0;
		bool L_70 = String_op_Equality_m920492651(NULL /*static, unused*/, L_69, _stringLiteral291713424, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_050b;
		}
	}
	{
		goto IL_058f;
	}

IL_0316:
	{
		String_t* L_71 = ___name0;
		bool L_72 = String_op_Equality_m920492651(NULL /*static, unused*/, L_71, _stringLiteral3699978413, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0511;
		}
	}
	{
		goto IL_058f;
	}

IL_032b:
	{
		String_t* L_73 = ___name0;
		bool L_74 = String_op_Equality_m920492651(NULL /*static, unused*/, L_73, _stringLiteral3304741934, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_0517;
		}
	}
	{
		goto IL_058f;
	}

IL_0340:
	{
		String_t* L_75 = ___name0;
		bool L_76 = String_op_Equality_m920492651(NULL /*static, unused*/, L_75, _stringLiteral214076177, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_051d;
		}
	}
	{
		goto IL_058f;
	}

IL_0355:
	{
		String_t* L_77 = ___name0;
		bool L_78 = String_op_Equality_m920492651(NULL /*static, unused*/, L_77, _stringLiteral1867930491, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_0523;
		}
	}
	{
		goto IL_058f;
	}

IL_036a:
	{
		String_t* L_79 = ___name0;
		bool L_80 = String_op_Equality_m920492651(NULL /*static, unused*/, L_79, _stringLiteral3625734729, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_0529;
		}
	}
	{
		goto IL_058f;
	}

IL_037f:
	{
		String_t* L_81 = ___name0;
		bool L_82 = String_op_Equality_m920492651(NULL /*static, unused*/, L_81, _stringLiteral3820310384, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_052f;
		}
	}
	{
		goto IL_058f;
	}

IL_0394:
	{
		String_t* L_83 = ___name0;
		bool L_84 = String_op_Equality_m920492651(NULL /*static, unused*/, L_83, _stringLiteral3732074949, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0535;
		}
	}
	{
		goto IL_058f;
	}

IL_03a9:
	{
		String_t* L_85 = ___name0;
		bool L_86 = String_op_Equality_m920492651(NULL /*static, unused*/, L_85, _stringLiteral333778122, /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_053b;
		}
	}
	{
		goto IL_058f;
	}

IL_03be:
	{
		String_t* L_87 = ___name0;
		bool L_88 = String_op_Equality_m920492651(NULL /*static, unused*/, L_87, _stringLiteral1321969992, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_0541;
		}
	}
	{
		goto IL_058f;
	}

IL_03d3:
	{
		String_t* L_89 = ___name0;
		bool L_90 = String_op_Equality_m920492651(NULL /*static, unused*/, L_89, _stringLiteral4130171257, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_0547;
		}
	}
	{
		goto IL_058f;
	}

IL_03e8:
	{
		String_t* L_91 = ___name0;
		bool L_92 = String_op_Equality_m920492651(NULL /*static, unused*/, L_91, _stringLiteral2919550222, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_054d;
		}
	}
	{
		goto IL_058f;
	}

IL_03fd:
	{
		String_t* L_93 = ___name0;
		bool L_94 = String_op_Equality_m920492651(NULL /*static, unused*/, L_93, _stringLiteral2125722552, /*hidden argument*/NULL);
		if (L_94)
		{
			goto IL_0553;
		}
	}
	{
		goto IL_058f;
	}

IL_0412:
	{
		String_t* L_95 = ___name0;
		bool L_96 = String_op_Equality_m920492651(NULL /*static, unused*/, L_95, _stringLiteral1058295211, /*hidden argument*/NULL);
		if (L_96)
		{
			goto IL_0559;
		}
	}
	{
		goto IL_058f;
	}

IL_0427:
	{
		String_t* L_97 = ___name0;
		bool L_98 = String_op_Equality_m920492651(NULL /*static, unused*/, L_97, _stringLiteral2630609293, /*hidden argument*/NULL);
		if (L_98)
		{
			goto IL_055f;
		}
	}
	{
		goto IL_058f;
	}

IL_043c:
	{
		String_t* L_99 = ___name0;
		bool L_100 = String_op_Equality_m920492651(NULL /*static, unused*/, L_99, _stringLiteral259855407, /*hidden argument*/NULL);
		if (L_100)
		{
			goto IL_0565;
		}
	}
	{
		goto IL_058f;
	}

IL_0451:
	{
		String_t* L_101 = ___name0;
		bool L_102 = String_op_Equality_m920492651(NULL /*static, unused*/, L_101, _stringLiteral3265120625, /*hidden argument*/NULL);
		if (L_102)
		{
			goto IL_056b;
		}
	}
	{
		goto IL_058f;
	}

IL_0466:
	{
		String_t* L_103 = ___name0;
		bool L_104 = String_op_Equality_m920492651(NULL /*static, unused*/, L_103, _stringLiteral137893848, /*hidden argument*/NULL);
		if (L_104)
		{
			goto IL_0571;
		}
	}
	{
		goto IL_058f;
	}

IL_047b:
	{
		String_t* L_105 = ___name0;
		bool L_106 = String_op_Equality_m920492651(NULL /*static, unused*/, L_105, _stringLiteral4181048727, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_0577;
		}
	}
	{
		goto IL_058f;
	}

IL_0490:
	{
		String_t* L_107 = ___name0;
		bool L_108 = String_op_Equality_m920492651(NULL /*static, unused*/, L_107, _stringLiteral4213163659, /*hidden argument*/NULL);
		if (L_108)
		{
			goto IL_057d;
		}
	}
	{
		goto IL_058f;
	}

IL_04a5:
	{
		String_t* L_109 = ___name0;
		bool L_110 = String_op_Equality_m920492651(NULL /*static, unused*/, L_109, _stringLiteral3561416487, /*hidden argument*/NULL);
		if (L_110)
		{
			goto IL_0583;
		}
	}
	{
		goto IL_058f;
	}

IL_04ba:
	{
		String_t* L_111 = ___name0;
		bool L_112 = String_op_Equality_m920492651(NULL /*static, unused*/, L_111, _stringLiteral3660296198, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_0589;
		}
	}
	{
		goto IL_058f;
	}

IL_04cf:
	{
		return _stringLiteral1080128167;
	}

IL_04d5:
	{
		return _stringLiteral1482909617;
	}

IL_04db:
	{
		return _stringLiteral318809131;
	}

IL_04e1:
	{
		return _stringLiteral1669673295;
	}

IL_04e7:
	{
		return _stringLiteral3373438723;
	}

IL_04ed:
	{
		return _stringLiteral1055297398;
	}

IL_04f3:
	{
		return _stringLiteral250338907;
	}

IL_04f9:
	{
		return _stringLiteral1002602296;
	}

IL_04ff:
	{
		return _stringLiteral530336010;
	}

IL_0505:
	{
		return _stringLiteral1889797247;
	}

IL_050b:
	{
		return _stringLiteral3876106276;
	}

IL_0511:
	{
		return _stringLiteral3598200442;
	}

IL_0517:
	{
		return _stringLiteral2042199142;
	}

IL_051d:
	{
		return _stringLiteral2315047519;
	}

IL_0523:
	{
		return _stringLiteral731812818;
	}

IL_0529:
	{
		return _stringLiteral4041226291;
	}

IL_052f:
	{
		return _stringLiteral3899683834;
	}

IL_0535:
	{
		return _stringLiteral1492314906;
	}

IL_053b:
	{
		return _stringLiteral2932166368;
	}

IL_0541:
	{
		return _stringLiteral1463905796;
	}

IL_0547:
	{
		return _stringLiteral2956943954;
	}

IL_054d:
	{
		return _stringLiteral3704008936;
	}

IL_0553:
	{
		return _stringLiteral2230202614;
	}

IL_0559:
	{
		return _stringLiteral933941093;
	}

IL_055f:
	{
		return _stringLiteral1093004055;
	}

IL_0565:
	{
		return _stringLiteral2892410334;
	}

IL_056b:
	{
		return _stringLiteral992912392;
	}

IL_0571:
	{
		return _stringLiteral1634084548;
	}

IL_0577:
	{
		return _stringLiteral3091098631;
	}

IL_057d:
	{
		return _stringLiteral567016436;
	}

IL_0583:
	{
		return _stringLiteral4173832088;
	}

IL_0589:
	{
		return _stringLiteral2665344007;
	}

IL_058f:
	{
		return (String_t*)NULL;
	}
}
// System.String System.Xml.Linq.Res::GetString(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Res_GetString_m419457679 (RuntimeObject * __this /* static, unused */, String_t* ___name0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Res_GetString_m419457679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Res_GetString_m419457679_RuntimeMethod_var);
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = Res_GetString_m1829098876(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t2843939325* L_2 = ___args1;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___args1;
		NullCheck(L_3);
		if ((((RuntimeArray *)L_3)->max_length))
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_5 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		ObjectU5BU5D_t2843939325* L_7 = ___args1;
		String_t* L_8 = String_Format_m1881875187(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
extern "C" IL2CPP_METHOD_ATTR void XAttribute__ctor_m2609633652 (XAttribute_t355876829 * __this, XName_t3751455998 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute__ctor_m2609633652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute__ctor_m2609633652_RuntimeMethod_var);
	String_t* V_0 = NULL;
	{
		XObject__ctor_m1122439361(__this, /*hidden argument*/NULL);
		XName_t3751455998 * L_0 = ___name0;
		bool L_1 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_0, (XName_t3751455998 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XAttribute__ctor_m2609633652_RuntimeMethod_var);
	}

IL_001a:
	{
		RuntimeObject * L_3 = ___value1;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_4 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_4, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XAttribute__ctor_m2609633652_RuntimeMethod_var);
	}

IL_0028:
	{
		RuntimeObject * L_5 = ___value1;
		String_t* L_6 = XContainer_GetStringValue_m4268288823(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		XName_t3751455998 * L_7 = ___name0;
		String_t* L_8 = V_0;
		XAttribute_ValidateAttribute_m3597441975(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		XName_t3751455998 * L_9 = ___name0;
		__this->set_name_3(L_9);
		String_t* L_10 = V_0;
		__this->set_value_4(L_10);
		return;
	}
}
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XAttribute__ctor_m4086971032 (XAttribute_t355876829 * __this, XAttribute_t355876829 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute__ctor_m4086971032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute__ctor_m4086971032_RuntimeMethod_var);
	{
		XObject__ctor_m1122439361(__this, /*hidden argument*/NULL);
		XAttribute_t355876829 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XAttribute__ctor_m4086971032_RuntimeMethod_var);
	}

IL_0014:
	{
		XAttribute_t355876829 * L_2 = ___other0;
		NullCheck(L_2);
		XName_t3751455998 * L_3 = L_2->get_name_3();
		__this->set_name_3(L_3);
		XAttribute_t355876829 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_value_4();
		__this->set_value_4(L_5);
		return;
	}
}
// System.Boolean System.Xml.Linq.XAttribute::get_IsNamespaceDeclaration()
extern "C" IL2CPP_METHOD_ATTR bool XAttribute_get_IsNamespaceDeclaration_m3726745643 (XAttribute_t355876829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_get_IsNamespaceDeclaration_m3726745643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_get_IsNamespaceDeclaration_m3726745643_RuntimeMethod_var);
	String_t* V_0 = NULL;
	{
		XName_t3751455998 * L_0 = __this->get_name_3();
		NullCheck(L_0);
		String_t* L_1 = XName_get_NamespaceName_m1113219825(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		XName_t3751455998 * L_4 = __this->get_name_3();
		NullCheck(L_4);
		String_t* L_5 = XName_get_LocalName_m2163884361(L_4, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral3929236445, /*hidden argument*/NULL);
		return L_6;
	}

IL_002a:
	{
		String_t* L_7 = V_0;
		return (bool)((((RuntimeObject*)(String_t*)L_7) == ((RuntimeObject*)(String_t*)_stringLiteral2829469855))? 1 : 0);
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XAttribute_get_Name_m2178653462 (XAttribute_t355876829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_get_Name_m2178653462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_get_Name_m2178653462_RuntimeMethod_var);
	{
		XName_t3751455998 * L_0 = __this->get_name_3();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XAttribute::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XAttribute_get_NodeType_m2343038868 (XAttribute_t355876829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_get_NodeType_m2343038868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_get_NodeType_m2343038868_RuntimeMethod_var);
	{
		return (int32_t)(2);
	}
}
// System.String System.Xml.Linq.XAttribute::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_m822045865 (XAttribute_t355876829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_get_Value_m822045865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_get_Value_m822045865_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get_value_4();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XAttribute_set_Value_m724377387 (XAttribute_t355876829 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_set_Value_m724377387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_set_Value_m724377387_RuntimeMethod_var);
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XAttribute_set_Value_m724377387_RuntimeMethod_var);
	}

IL_000e:
	{
		XName_t3751455998 * L_2 = __this->get_name_3();
		String_t* L_3 = ___value0;
		XAttribute_ValidateAttribute_m3597441975(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t652714535 * L_4 = ((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_5 = XObject_NotifyChanging_m2437571179(__this, __this, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___value0;
		__this->set_value_4(L_6);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t652714535 * L_7 = ((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->get_Value_5();
		XObject_NotifyChanged_m1712984418(__this, __this, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.String System.Xml.Linq.XAttribute::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XAttribute_ToString_m1941498034 (XAttribute_t355876829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_ToString_m1941498034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_ToString_m1941498034_RuntimeMethod_var);
	StringWriter_t802263757 * V_0 = NULL;
	XmlWriterSettings_t3314986516 * V_1 = NULL;
	XmlWriter_t127905479 * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringWriter_t802263757 * L_1 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m2474332877(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			XmlWriterSettings_t3314986516 * L_2 = (XmlWriterSettings_t3314986516 *)il2cpp_codegen_object_new(XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var);
			XmlWriterSettings__ctor_m2465852079(L_2, /*hidden argument*/NULL);
			V_1 = L_2;
			XmlWriterSettings_t3314986516 * L_3 = V_1;
			NullCheck(L_3);
			XmlWriterSettings_set_ConformanceLevel_m2379836262(L_3, 1, /*hidden argument*/NULL);
			StringWriter_t802263757 * L_4 = V_0;
			XmlWriterSettings_t3314986516 * L_5 = V_1;
			XmlWriter_t127905479 * L_6 = XmlWriter_Create_m1754013770(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_0020:
		try
		{ // begin try (depth: 2)
			XmlWriter_t127905479 * L_7 = V_2;
			XName_t3751455998 * L_8 = __this->get_name_3();
			NullCheck(L_8);
			XNamespace_t1843508170 * L_9 = XName_get_Namespace_m4023955522(L_8, /*hidden argument*/NULL);
			String_t* L_10 = XAttribute_GetPrefixOfNamespace_m3339376166(__this, L_9, /*hidden argument*/NULL);
			XName_t3751455998 * L_11 = __this->get_name_3();
			NullCheck(L_11);
			String_t* L_12 = XName_get_LocalName_m2163884361(L_11, /*hidden argument*/NULL);
			XName_t3751455998 * L_13 = __this->get_name_3();
			NullCheck(L_13);
			String_t* L_14 = XName_get_NamespaceName_m1113219825(L_13, /*hidden argument*/NULL);
			String_t* L_15 = __this->get_value_4();
			NullCheck(L_7);
			XmlWriter_WriteAttributeString_m2341773285(L_7, L_10, L_12, L_14, L_15, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5F, FINALLY_0055);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0055;
		}

FINALLY_0055:
		{ // begin finally (depth: 2)
			{
				XmlWriter_t127905479 * L_16 = V_2;
				if (!L_16)
				{
					goto IL_005e;
				}
			}

IL_0058:
			{
				XmlWriter_t127905479 * L_17 = V_2;
				NullCheck(L_17);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_17);
			}

IL_005e:
			{
				IL2CPP_END_FINALLY(85)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(85)
		{
			IL2CPP_JUMP_TBL(0x5F, IL_005f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_005f:
		{
			StringWriter_t802263757 * L_18 = V_0;
			NullCheck(L_18);
			String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
			NullCheck(L_19);
			String_t* L_20 = String_Trim_m923598732(L_19, /*hidden argument*/NULL);
			V_3 = L_20;
			IL2CPP_LEAVE(0x77, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		{
			StringWriter_t802263757 * L_21 = V_0;
			if (!L_21)
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			StringWriter_t802263757 * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(109)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0077:
	{
		String_t* L_23 = V_3;
		return L_23;
	}
}
// System.String System.Xml.Linq.XAttribute::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR String_t* XAttribute_GetPrefixOfNamespace_m3339376166 (XAttribute_t355876829 * __this, XNamespace_t1843508170 * ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_GetPrefixOfNamespace_m3339376166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_GetPrefixOfNamespace_m3339376166_RuntimeMethod_var);
	String_t* V_0 = NULL;
	{
		XNamespace_t1843508170 * L_0 = ___ns0;
		NullCheck(L_0);
		String_t* L_1 = XNamespace_get_NamespaceName_m2952101840(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_0015:
	{
		XContainer_t3387731002 * L_5 = ((XObject_t1119084474 *)__this)->get_parent_0();
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XContainer_t3387731002 * L_6 = ((XObject_t1119084474 *)__this)->get_parent_0();
		XNamespace_t1843508170 * L_7 = ___ns0;
		NullCheck(((XElement_t4185968754 *)CastclassClass((RuntimeObject*)L_6, XElement_t4185968754_il2cpp_TypeInfo_var)));
		String_t* L_8 = XElement_GetPrefixOfNamespace_m2885939482(((XElement_t4185968754 *)CastclassClass((RuntimeObject*)L_6, XElement_t4185968754_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		String_t* L_9 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(String_t*)_stringLiteral2984480440))))
		{
			goto IL_003d;
		}
	}
	{
		return _stringLiteral2909972470;
	}

IL_003d:
	{
		String_t* L_10 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_10) == ((RuntimeObject*)(String_t*)_stringLiteral2829469855))))
		{
			goto IL_004b;
		}
	}
	{
		return _stringLiteral3929236445;
	}

IL_004b:
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.Linq.XAttribute::ValidateAttribute(System.Xml.Linq.XName,System.String)
extern "C" IL2CPP_METHOD_ATTR void XAttribute_ValidateAttribute_m3597441975 (RuntimeObject * __this /* static, unused */, XName_t3751455998 * ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_ValidateAttribute_m3597441975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		XName_t3751455998 * L_0 = ___name0;
		NullCheck(L_0);
		String_t* L_1 = XName_get_NamespaceName_m1113219825(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(String_t*)_stringLiteral2829469855))))
		{
			goto IL_00c9;
		}
	}
	{
		String_t* L_3 = ___value1;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		XName_t3751455998 * L_7 = ___name0;
		NullCheck(L_7);
		String_t* L_8 = XName_get_LocalName_m2163884361(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		String_t* L_9 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral1469956566, L_6, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	}

IL_0039:
	{
		String_t* L_11 = ___value1;
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral2984480440, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		XName_t3751455998 * L_13 = ___name0;
		NullCheck(L_13);
		String_t* L_14 = XName_get_LocalName_m2163884361(L_13, /*hidden argument*/NULL);
		bool L_15 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_14, _stringLiteral2909972470, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_16 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral291713424, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	}

IL_006b:
	{
		String_t* L_18 = ___value1;
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_18, _stringLiteral2829469855, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_20 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3699978413, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_21 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	}

IL_0088:
	{
		XName_t3751455998 * L_22 = ___name0;
		NullCheck(L_22);
		String_t* L_23 = XName_get_LocalName_m2163884361(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		String_t* L_24 = V_1;
		bool L_25 = String_op_Equality_m920492651(NULL /*static, unused*/, L_24, _stringLiteral2909972470, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ac;
		}
	}
	{
		String_t* L_26 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral291713424, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_27 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	}

IL_00ac:
	{
		String_t* L_28 = V_1;
		bool L_29 = String_op_Equality_m920492651(NULL /*static, unused*/, L_28, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_30 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3699978413, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_31 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	}

IL_00c9:
	{
		String_t* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m3847582255(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_011d;
		}
	}
	{
		XName_t3751455998 * L_34 = ___name0;
		NullCheck(L_34);
		String_t* L_35 = XName_get_LocalName_m2163884361(L_34, /*hidden argument*/NULL);
		bool L_36 = String_op_Equality_m920492651(NULL /*static, unused*/, L_35, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_37 = ___value1;
		bool L_38 = String_op_Equality_m920492651(NULL /*static, unused*/, L_37, _stringLiteral2984480440, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_39 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral291713424, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_40 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, NULL, XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	}

IL_0100:
	{
		String_t* L_41 = ___value1;
		bool L_42 = String_op_Equality_m920492651(NULL /*static, unused*/, L_41, _stringLiteral2829469855, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_43 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3699978413, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_44 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_44, L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, NULL, XAttribute_ValidateAttribute_m3597441975_RuntimeMethod_var);
	}

IL_011d:
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
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XCData__ctor_m2121219684 (XCData_t832623270 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XCData__ctor_m2121219684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XCData__ctor_m2121219684_RuntimeMethod_var);
	{
		String_t* L_0 = ___value0;
		XText__ctor_m2401333842(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XCData::.ctor(System.Xml.Linq.XCData)
extern "C" IL2CPP_METHOD_ATTR void XCData__ctor_m2021185271 (XCData_t832623270 * __this, XCData_t832623270 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XCData__ctor_m2021185271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XCData__ctor_m2021185271_RuntimeMethod_var);
	{
		XCData_t832623270 * L_0 = ___other0;
		XText__ctor_m694960668(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XCData::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XCData_get_NodeType_m709580419 (XCData_t832623270 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XCData_get_NodeType_m709580419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XCData_get_NodeType_m709580419_RuntimeMethod_var);
	{
		return (int32_t)(4);
	}
}
// System.Void System.Xml.Linq.XCData::WriteTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XCData_WriteTo_m381187891 (XCData_t832623270 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XCData_WriteTo_m381187891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XCData_WriteTo_m381187891_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XCData_WriteTo_m381187891_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlWriter_t127905479 * L_2 = ___writer0;
		String_t* L_3 = ((XText_t1448860321 *)__this)->get_text_3();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, L_2, L_3);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XCData::CloneNode()
extern "C" IL2CPP_METHOD_ATTR XNode_t716131460 * XCData_CloneNode_m3205202476 (XCData_t832623270 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XCData_CloneNode_m3205202476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XCData_CloneNode_m3205202476_RuntimeMethod_var);
	{
		XCData_t832623270 * L_0 = (XCData_t832623270 *)il2cpp_codegen_object_new(XCData_t832623270_il2cpp_TypeInfo_var);
		XCData__ctor_m2021185271(L_0, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XComment__ctor_m2613070977 (XComment_t1832251191 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XComment__ctor_m2613070977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XComment__ctor_m2613070977_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XComment__ctor_m2613070977_RuntimeMethod_var);
	}

IL_0014:
	{
		String_t* L_2 = ___value0;
		__this->set_value_3(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XComment::.ctor(System.Xml.Linq.XComment)
extern "C" IL2CPP_METHOD_ATTR void XComment__ctor_m1691910914 (XComment_t1832251191 * __this, XComment_t1832251191 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XComment__ctor_m1691910914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XComment__ctor_m1691910914_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		XComment_t1832251191 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XComment__ctor_m1691910914_RuntimeMethod_var);
	}

IL_0014:
	{
		XComment_t1832251191 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_value_3();
		__this->set_value_3(L_3);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XComment::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XComment_get_NodeType_m2774887594 (XComment_t1832251191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XComment_get_NodeType_m2774887594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XComment_get_NodeType_m2774887594_RuntimeMethod_var);
	{
		return (int32_t)(8);
	}
}
// System.Void System.Xml.Linq.XComment::WriteTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XComment_WriteTo_m341824341 (XComment_t1832251191 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XComment_WriteTo_m341824341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XComment_WriteTo_m341824341_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XComment_WriteTo_m341824341_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlWriter_t127905479 * L_2 = ___writer0;
		String_t* L_3 = __this->get_value_3();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, L_2, L_3);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XComment::CloneNode()
extern "C" IL2CPP_METHOD_ATTR XNode_t716131460 * XComment_CloneNode_m3608751215 (XComment_t1832251191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XComment_CloneNode_m3608751215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XComment_CloneNode_m3608751215_RuntimeMethod_var);
	{
		XComment_t1832251191 * L_0 = (XComment_t1832251191 *)il2cpp_codegen_object_new(XComment_t1832251191_il2cpp_TypeInfo_var);
		XComment__ctor_m1691910914(L_0, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XContainer__ctor_m2392412783 (XContainer_t3387731002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer__ctor_m2392412783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer__ctor_m2392412783_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::.ctor(System.Xml.Linq.XContainer)
extern "C" IL2CPP_METHOD_ATTR void XContainer__ctor_m1059702699 (XContainer_t3387731002 * __this, XContainer_t3387731002 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer__ctor_m1059702699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer__ctor_m1059702699_RuntimeMethod_var);
	XNode_t716131460 * V_0 = NULL;
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		XContainer_t3387731002 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XContainer__ctor_m1059702699_RuntimeMethod_var);
	}

IL_0014:
	{
		XContainer_t3387731002 * L_2 = ___other0;
		NullCheck(L_2);
		RuntimeObject * L_3 = L_2->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		XContainer_t3387731002 * L_4 = ___other0;
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_content_3();
		__this->set_content_3(L_5);
		return;
	}

IL_002e:
	{
		XContainer_t3387731002 * L_6 = ___other0;
		NullCheck(L_6);
		RuntimeObject * L_7 = L_6->get_content_3();
		V_0 = ((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_7, XNode_t716131460_il2cpp_TypeInfo_var));
		XNode_t716131460 * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0059;
		}
	}

IL_003d:
	{
		XNode_t716131460 * L_9 = V_0;
		NullCheck(L_9);
		XNode_t716131460 * L_10 = L_9->get_next_2();
		V_0 = L_10;
		XNode_t716131460 * L_11 = V_0;
		NullCheck(L_11);
		XNode_t716131460 * L_12 = VirtFuncInvoker0< XNode_t716131460 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_11);
		XContainer_AppendNodeSkipNotify_m2088981435(__this, L_12, /*hidden argument*/NULL);
		XNode_t716131460 * L_13 = V_0;
		XContainer_t3387731002 * L_14 = ___other0;
		NullCheck(L_14);
		RuntimeObject * L_15 = L_14->get_content_3();
		if ((!(((RuntimeObject*)(XNode_t716131460 *)L_13) == ((RuntimeObject*)(RuntimeObject *)L_15))))
		{
			goto IL_003d;
		}
	}

IL_0059:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Descendants()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Descendants_m15333368 (XContainer_t3387731002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_Descendants_m15333368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_Descendants_m15333368_RuntimeMethod_var);
	{
		RuntimeObject* L_0 = XContainer_GetDescendants_m3487935990(__this, (XName_t3751455998 *)NULL, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XContainer::Element(System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR XElement_t4185968754 * XContainer_Element_m902501614 (XContainer_t3387731002 * __this, XName_t3751455998 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_Element_m902501614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_Element_m902501614_RuntimeMethod_var);
	XNode_t716131460 * V_0 = NULL;
	XElement_t4185968754 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		V_0 = ((XNode_t716131460 *)IsInstClass((RuntimeObject*)L_0, XNode_t716131460_il2cpp_TypeInfo_var));
		XNode_t716131460 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}

IL_000f:
	{
		XNode_t716131460 * L_2 = V_0;
		NullCheck(L_2);
		XNode_t716131460 * L_3 = L_2->get_next_2();
		V_0 = L_3;
		XNode_t716131460 * L_4 = V_0;
		V_1 = ((XElement_t4185968754 *)IsInstClass((RuntimeObject*)L_4, XElement_t4185968754_il2cpp_TypeInfo_var));
		XElement_t4185968754 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		XElement_t4185968754 * L_6 = V_1;
		NullCheck(L_6);
		XName_t3751455998 * L_7 = L_6->get_name_4();
		XName_t3751455998 * L_8 = ___name0;
		bool L_9 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		XElement_t4185968754 * L_10 = V_1;
		return L_10;
	}

IL_0030:
	{
		XNode_t716131460 * L_11 = V_0;
		RuntimeObject * L_12 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_t716131460 *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_12))))
		{
			goto IL_000f;
		}
	}

IL_0039:
	{
		return (XElement_t4185968754 *)NULL;
	}
}
// System.Void System.Xml.Linq.XContainer::AddNodeSkipNotify(System.Xml.Linq.XNode)
extern "C" IL2CPP_METHOD_ATTR void XContainer_AddNodeSkipNotify_m2405732094 (XContainer_t3387731002 * __this, XNode_t716131460 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_AddNodeSkipNotify_m2405732094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_AddNodeSkipNotify_m2405732094_RuntimeMethod_var);
	XNode_t716131460 * V_0 = NULL;
	{
		XNode_t716131460 * L_0 = ___n0;
		VirtActionInvoker2< XNode_t716131460 *, XNode_t716131460 * >::Invoke(11 /* System.Void System.Xml.Linq.XContainer::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode) */, __this, L_0, __this);
		XNode_t716131460 * L_1 = ___n0;
		NullCheck(L_1);
		XContainer_t3387731002 * L_2 = ((XObject_t1119084474 *)L_1)->get_parent_0();
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		XNode_t716131460 * L_3 = ___n0;
		NullCheck(L_3);
		XNode_t716131460 * L_4 = VirtFuncInvoker0< XNode_t716131460 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_3);
		___n0 = L_4;
		goto IL_0039;
	}

IL_001a:
	{
		V_0 = __this;
		goto IL_0025;
	}

IL_001e:
	{
		XNode_t716131460 * L_5 = V_0;
		NullCheck(L_5);
		XContainer_t3387731002 * L_6 = ((XObject_t1119084474 *)L_5)->get_parent_0();
		V_0 = L_6;
	}

IL_0025:
	{
		XNode_t716131460 * L_7 = V_0;
		NullCheck(L_7);
		XContainer_t3387731002 * L_8 = ((XObject_t1119084474 *)L_7)->get_parent_0();
		if (L_8)
		{
			goto IL_001e;
		}
	}
	{
		XNode_t716131460 * L_9 = ___n0;
		XNode_t716131460 * L_10 = V_0;
		if ((!(((RuntimeObject*)(XNode_t716131460 *)L_9) == ((RuntimeObject*)(XNode_t716131460 *)L_10))))
		{
			goto IL_0039;
		}
	}
	{
		XNode_t716131460 * L_11 = ___n0;
		NullCheck(L_11);
		XNode_t716131460 * L_12 = VirtFuncInvoker0< XNode_t716131460 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_11);
		___n0 = L_12;
	}

IL_0039:
	{
		XContainer_ConvertTextToNode_m4002742466(__this, /*hidden argument*/NULL);
		XNode_t716131460 * L_13 = ___n0;
		XContainer_AppendNodeSkipNotify_m2088981435(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddStringSkipNotify(System.String)
extern "C" IL2CPP_METHOD_ATTR void XContainer_AddStringSkipNotify_m1432095315 (XContainer_t3387731002 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_AddStringSkipNotify_m1432095315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_AddStringSkipNotify_m1432095315_RuntimeMethod_var);
	XText_t1448860321 * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Xml.Linq.XContainer::ValidateString(System.String) */, __this, L_0);
		RuntimeObject * L_1 = __this->get_content_3();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_2 = ___s0;
		__this->set_content_3(L_2);
		return;
	}

IL_0017:
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_5 = __this->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject * L_6 = __this->get_content_3();
		String_t* L_7 = ___s0;
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
		__this->set_content_3(L_8);
		return;
	}

IL_0045:
	{
		RuntimeObject * L_9 = __this->get_content_3();
		V_0 = ((XText_t1448860321 *)IsInstClass((RuntimeObject*)L_9, XText_t1448860321_il2cpp_TypeInfo_var));
		XText_t1448860321 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		XText_t1448860321 * L_11 = V_0;
		if (((XCData_t832623270 *)IsInstClass((RuntimeObject*)L_11, XCData_t832623270_il2cpp_TypeInfo_var)))
		{
			goto IL_006f;
		}
	}
	{
		XText_t1448860321 * L_12 = V_0;
		XText_t1448860321 * L_13 = L_12;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_text_3();
		String_t* L_15 = ___s0;
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_text_3(L_16);
		return;
	}

IL_006f:
	{
		String_t* L_17 = ___s0;
		XText_t1448860321 * L_18 = (XText_t1448860321 *)il2cpp_codegen_object_new(XText_t1448860321_il2cpp_TypeInfo_var);
		XText__ctor_m2401333842(L_18, L_17, /*hidden argument*/NULL);
		XContainer_AppendNodeSkipNotify_m2088981435(__this, L_18, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AppendNodeSkipNotify(System.Xml.Linq.XNode)
extern "C" IL2CPP_METHOD_ATTR void XContainer_AppendNodeSkipNotify_m2088981435 (XContainer_t3387731002 * __this, XNode_t716131460 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_AppendNodeSkipNotify_m2088981435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_AppendNodeSkipNotify_m2088981435_RuntimeMethod_var);
	XNode_t716131460 * V_0 = NULL;
	{
		XNode_t716131460 * L_0 = ___n0;
		NullCheck(L_0);
		((XObject_t1119084474 *)L_0)->set_parent_0(__this);
		RuntimeObject * L_1 = __this->get_content_3();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}

IL_001c:
	{
		XNode_t716131460 * L_3 = ___n0;
		XNode_t716131460 * L_4 = ___n0;
		NullCheck(L_3);
		L_3->set_next_2(L_4);
		goto IL_0044;
	}

IL_0025:
	{
		RuntimeObject * L_5 = __this->get_content_3();
		V_0 = ((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_5, XNode_t716131460_il2cpp_TypeInfo_var));
		XNode_t716131460 * L_6 = ___n0;
		XNode_t716131460 * L_7 = V_0;
		NullCheck(L_7);
		XNode_t716131460 * L_8 = L_7->get_next_2();
		NullCheck(L_6);
		L_6->set_next_2(L_8);
		XNode_t716131460 * L_9 = V_0;
		XNode_t716131460 * L_10 = ___n0;
		NullCheck(L_9);
		L_9->set_next_2(L_10);
	}

IL_0044:
	{
		XNode_t716131460 * L_11 = ___n0;
		__this->set_content_3(L_11);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AppendText(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void XContainer_AppendText_m448247265 (XContainer_t3387731002 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_AppendText_m448247265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_AppendText_m448247265_RuntimeMethod_var);
	String_t* V_0 = NULL;
	XNode_t716131460 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		StringBuilder_t * L_2 = ___sb0;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0018:
	{
		RuntimeObject * L_4 = __this->get_content_3();
		V_1 = ((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_4, XNode_t716131460_il2cpp_TypeInfo_var));
		XNode_t716131460 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}

IL_0027:
	{
		XNode_t716131460 * L_6 = V_1;
		NullCheck(L_6);
		XNode_t716131460 * L_7 = L_6->get_next_2();
		V_1 = L_7;
		XNode_t716131460 * L_8 = V_1;
		StringBuilder_t * L_9 = ___sb0;
		NullCheck(L_8);
		VirtActionInvoker1< StringBuilder_t * >::Invoke(9 /* System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder) */, L_8, L_9);
		XNode_t716131460 * L_10 = V_1;
		RuntimeObject * L_11 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_t716131460 *)L_10) == ((RuntimeObject*)(RuntimeObject *)L_11))))
		{
			goto IL_0027;
		}
	}

IL_003e:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ConvertTextToNode()
extern "C" IL2CPP_METHOD_ATTR void XContainer_ConvertTextToNode_m4002742466 (XContainer_t3387731002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_ConvertTextToNode_m4002742466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_ConvertTextToNode_m4002742466_RuntimeMethod_var);
	String_t* V_0 = NULL;
	XText_t1448860321 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_4 = V_0;
		XText_t1448860321 * L_5 = (XText_t1448860321 *)il2cpp_codegen_object_new(XText_t1448860321_il2cpp_TypeInfo_var);
		XText__ctor_m2401333842(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		XText_t1448860321 * L_6 = V_1;
		NullCheck(L_6);
		((XObject_t1119084474 *)L_6)->set_parent_0(__this);
		XText_t1448860321 * L_7 = V_1;
		XText_t1448860321 * L_8 = V_1;
		NullCheck(L_7);
		((XNode_t716131460 *)L_7)->set_next_2(L_8);
		XText_t1448860321 * L_9 = V_1;
		__this->set_content_3(L_9);
	}

IL_0034:
	{
		return;
	}
}
// System.String System.Xml.Linq.XContainer::GetDateTimeString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* XContainer_GetDateTimeString_m3842888760 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_GetDateTimeString_m3842888760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_GetDateTimeString_m3842888760_RuntimeMethod_var);
	{
		DateTime_t3738529785  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m1019655946(NULL /*static, unused*/, L_0, 3, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetDescendants(System.Xml.Linq.XName,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetDescendants_m3487935990 (XContainer_t3387731002 * __this, XName_t3751455998 * ___name0, bool ___self1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_GetDescendants_m3487935990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_GetDescendants_m3487935990_RuntimeMethod_var);
	{
		U3CGetDescendantsU3Ed__39_t2920852095 * L_0 = (U3CGetDescendantsU3Ed__39_t2920852095 *)il2cpp_codegen_object_new(U3CGetDescendantsU3Ed__39_t2920852095_il2cpp_TypeInfo_var);
		U3CGetDescendantsU3Ed__39__ctor_m3867538981(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetDescendantsU3Ed__39_t2920852095 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CGetDescendantsU3Ed__39_t2920852095 * L_2 = L_1;
		XName_t3751455998 * L_3 = ___name0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__name_7(L_3);
		U3CGetDescendantsU3Ed__39_t2920852095 * L_4 = L_2;
		bool L_5 = ___self1;
		NullCheck(L_4);
		L_4->set_U3CU3E3__self_4(L_5);
		return L_4;
	}
}
// System.String System.Xml.Linq.XContainer::GetStringValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* XContainer_GetStringValue_m4268288823 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_GetStringValue_m4268288823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_GetStringValue_m4268288823_RuntimeMethod_var);
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		goto IL_00d3;
	}

IL_0014:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_4 = XmlConvert_ToString_m2027917565(NULL /*static, unused*/, ((*(double*)((double*)UnBox(L_3, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_00d3;
	}

IL_002d:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_7 = XmlConvert_ToString_m934314535(NULL /*static, unused*/, ((*(float*)((float*)UnBox(L_6, Single_t1397266774_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_00d3;
	}

IL_0046:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_10 = XmlConvert_ToString_m732346799(NULL /*static, unused*/, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_9, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_00d3;
	}

IL_005c:
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_13 = XmlConvert_ToString_m142518199(NULL /*static, unused*/, ((*(bool*)((bool*)UnBox(L_12, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_00d3;
	}

IL_0072:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, DateTime_t3738529785_il2cpp_TypeInfo_var)))
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = XContainer_GetDateTimeString_m3842888760(NULL /*static, unused*/, ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_15, DateTime_t3738529785_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00d3;
	}

IL_0088:
	{
		RuntimeObject * L_17 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, DateTimeOffset_t3229287507_il2cpp_TypeInfo_var)))
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_19 = XmlConvert_ToString_m158558848(NULL /*static, unused*/, ((*(DateTimeOffset_t3229287507 *)((DateTimeOffset_t3229287507 *)UnBox(L_18, DateTimeOffset_t3229287507_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_00d3;
	}

IL_009e:
	{
		RuntimeObject * L_20 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, TimeSpan_t881159249_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject * L_21 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_22 = XmlConvert_ToString_m1102839109(NULL /*static, unused*/, ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_21, TimeSpan_t881159249_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_00d3;
	}

IL_00b4:
	{
		RuntimeObject * L_23 = ___value0;
		if (!((XObject_t1119084474 *)IsInstClass((RuntimeObject*)L_23, XObject_t1119084474_il2cpp_TypeInfo_var)))
		{
			goto IL_00cc;
		}
	}
	{
		String_t* L_24 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3304741934, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_25 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_25, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, XContainer_GetStringValue_m4268288823_RuntimeMethod_var);
	}

IL_00cc:
	{
		RuntimeObject * L_26 = ___value0;
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_0 = L_27;
	}

IL_00d3:
	{
		String_t* L_28 = V_0;
		if (L_28)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_29 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral1450029974, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_30 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, XContainer_GetStringValue_m4268288823_RuntimeMethod_var);
	}

IL_00e6:
	{
		String_t* L_31 = V_0;
		return L_31;
	}
}
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_m1866981 (XContainer_t3387731002 * __this, XmlReader_t3121518892 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_ReadContentFrom_m1866981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_ReadContentFrom_m1866981_RuntimeMethod_var);
	XContainer_t3387731002 * V_0 = NULL;
	NamespaceCache_t3512832689  V_1;
	memset(&V_1, 0, sizeof(V_1));
	NamespaceCache_t3512832689  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	XElement_t4185968754 * V_4 = NULL;
	NamespaceCache_t3512832689 * G_B8_0 = NULL;
	XElement_t4185968754 * G_B8_1 = NULL;
	NamespaceCache_t3512832689 * G_B7_0 = NULL;
	XElement_t4185968754 * G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	NamespaceCache_t3512832689 * G_B9_1 = NULL;
	XElement_t4185968754 * G_B9_2 = NULL;
	{
		XmlReader_t3121518892 * L_0 = ___r0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3732074949, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XContainer_ReadContentFrom_m1866981_RuntimeMethod_var);
	}

IL_0019:
	{
		V_0 = __this;
		il2cpp_codegen_initobj((&V_1), sizeof(NamespaceCache_t3512832689 ));
		il2cpp_codegen_initobj((&V_2), sizeof(NamespaceCache_t3512832689 ));
	}

IL_002b:
	{
		XmlReader_t3121518892 * L_4 = ___r0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_4);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_01dd;
			}
			case 2:
			{
				goto IL_0132;
			}
			case 3:
			{
				goto IL_0143;
			}
			case 4:
			{
				goto IL_01bd;
			}
			case 5:
			{
				goto IL_01dd;
			}
			case 6:
			{
				goto IL_016f;
			}
			case 7:
			{
				goto IL_0159;
			}
			case 8:
			{
				goto IL_01dd;
			}
			case 9:
			{
				goto IL_0188;
			}
			case 10:
			{
				goto IL_01dd;
			}
			case 11:
			{
				goto IL_01dd;
			}
			case 12:
			{
				goto IL_0132;
			}
			case 13:
			{
				goto IL_0132;
			}
			case 14:
			{
				goto IL_010e;
			}
			case 15:
			{
				goto IL_0201;
			}
		}
	}
	{
		goto IL_01dd;
	}

IL_007f:
	{
		XmlReader_t3121518892 * L_7 = ___r0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		XNamespace_t1843508170 * L_9 = NamespaceCache_Get_m3575903994((NamespaceCache_t3512832689 *)(&V_1), L_8, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_10 = ___r0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_10);
		NullCheck(L_9);
		XName_t3751455998 * L_12 = XNamespace_GetName_m1445243739(L_9, L_11, /*hidden argument*/NULL);
		XElement_t4185968754 * L_13 = (XElement_t4185968754 *)il2cpp_codegen_object_new(XElement_t4185968754_il2cpp_TypeInfo_var);
		XElement__ctor_m643760410(L_13, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		XmlReader_t3121518892 * L_14 = ___r0;
		NullCheck(L_14);
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_14);
		if (!L_15)
		{
			goto IL_00f3;
		}
	}

IL_00a6:
	{
		XElement_t4185968754 * L_16 = V_4;
		XmlReader_t3121518892 * L_17 = ___r0;
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_17);
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		G_B7_0 = (&V_2);
		G_B7_1 = L_16;
		if (!L_19)
		{
			G_B8_0 = (&V_2);
			G_B8_1 = L_16;
			goto IL_00bf;
		}
	}
	{
		XmlReader_t3121518892 * L_20 = ___r0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_20);
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00c4;
	}

IL_00bf:
	{
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B9_0 = L_22;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00c4:
	{
		XNamespace_t1843508170 * L_23 = NamespaceCache_Get_m3575903994((NamespaceCache_t3512832689 *)G_B9_1, G_B9_0, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_24 = ___r0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_24);
		NullCheck(L_23);
		XName_t3751455998 * L_26 = XNamespace_GetName_m1445243739(L_23, L_25, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_27 = ___r0;
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_27);
		XAttribute_t355876829 * L_29 = (XAttribute_t355876829 *)il2cpp_codegen_object_new(XAttribute_t355876829_il2cpp_TypeInfo_var);
		XAttribute__ctor_m2609633652(L_29, L_26, L_28, /*hidden argument*/NULL);
		NullCheck(G_B9_2);
		XElement_AppendAttributeSkipNotify_m1943425946(G_B9_2, L_29, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_30 = ___r0;
		NullCheck(L_30);
		bool L_31 = VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_30);
		if (L_31)
		{
			goto IL_00a6;
		}
	}
	{
		XmlReader_t3121518892 * L_32 = ___r0;
		NullCheck(L_32);
		VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_32);
	}

IL_00f3:
	{
		XContainer_t3387731002 * L_33 = V_0;
		XElement_t4185968754 * L_34 = V_4;
		NullCheck(L_33);
		XContainer_AddNodeSkipNotify_m2405732094(L_33, L_34, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_35 = ___r0;
		NullCheck(L_35);
		bool L_36 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_35);
		if (L_36)
		{
			goto IL_0201;
		}
	}
	{
		XElement_t4185968754 * L_37 = V_4;
		V_0 = L_37;
		goto IL_0201;
	}

IL_010e:
	{
		XContainer_t3387731002 * L_38 = V_0;
		NullCheck(L_38);
		RuntimeObject * L_39 = L_38->get_content_3();
		if (L_39)
		{
			goto IL_0121;
		}
	}
	{
		XContainer_t3387731002 * L_40 = V_0;
		String_t* L_41 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_40);
		L_40->set_content_3(L_41);
	}

IL_0121:
	{
		XContainer_t3387731002 * L_42 = V_0;
		if ((!(((RuntimeObject*)(XContainer_t3387731002 *)L_42) == ((RuntimeObject*)(XContainer_t3387731002 *)__this))))
		{
			goto IL_0126;
		}
	}
	{
		return;
	}

IL_0126:
	{
		XContainer_t3387731002 * L_43 = V_0;
		NullCheck(L_43);
		XContainer_t3387731002 * L_44 = ((XObject_t1119084474 *)L_43)->get_parent_0();
		V_0 = L_44;
		goto IL_0201;
	}

IL_0132:
	{
		XContainer_t3387731002 * L_45 = V_0;
		XmlReader_t3121518892 * L_46 = ___r0;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_46);
		NullCheck(L_45);
		XContainer_AddStringSkipNotify_m1432095315(L_45, L_47, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_0143:
	{
		XContainer_t3387731002 * L_48 = V_0;
		XmlReader_t3121518892 * L_49 = ___r0;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		XCData_t832623270 * L_51 = (XCData_t832623270 *)il2cpp_codegen_object_new(XCData_t832623270_il2cpp_TypeInfo_var);
		XCData__ctor_m2121219684(L_51, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		XContainer_AddNodeSkipNotify_m2405732094(L_48, L_51, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_0159:
	{
		XContainer_t3387731002 * L_52 = V_0;
		XmlReader_t3121518892 * L_53 = ___r0;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_53);
		XComment_t1832251191 * L_55 = (XComment_t1832251191 *)il2cpp_codegen_object_new(XComment_t1832251191_il2cpp_TypeInfo_var);
		XComment__ctor_m2613070977(L_55, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		XContainer_AddNodeSkipNotify_m2405732094(L_52, L_55, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_016f:
	{
		XContainer_t3387731002 * L_56 = V_0;
		XmlReader_t3121518892 * L_57 = ___r0;
		NullCheck(L_57);
		String_t* L_58 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_57);
		XmlReader_t3121518892 * L_59 = ___r0;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		XProcessingInstruction_t2943691487 * L_61 = (XProcessingInstruction_t2943691487 *)il2cpp_codegen_object_new(XProcessingInstruction_t2943691487_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_m3301977354(L_61, L_58, L_60, /*hidden argument*/NULL);
		NullCheck(L_56);
		XContainer_AddNodeSkipNotify_m2405732094(L_56, L_61, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_0188:
	{
		XContainer_t3387731002 * L_62 = V_0;
		XmlReader_t3121518892 * L_63 = ___r0;
		NullCheck(L_63);
		String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_63);
		XmlReader_t3121518892 * L_65 = ___r0;
		NullCheck(L_65);
		String_t* L_66 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_65, _stringLiteral3984887517);
		XmlReader_t3121518892 * L_67 = ___r0;
		NullCheck(L_67);
		String_t* L_68 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_67, _stringLiteral3261774195);
		XmlReader_t3121518892 * L_69 = ___r0;
		NullCheck(L_69);
		String_t* L_70 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_69);
		XmlReader_t3121518892 * L_71 = ___r0;
		NullCheck(L_71);
		RuntimeObject* L_72 = VirtFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_71);
		XDocumentType_t1853592271 * L_73 = (XDocumentType_t1853592271 *)il2cpp_codegen_object_new(XDocumentType_t1853592271_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m1639303547(L_73, L_64, L_66, L_68, L_70, L_72, /*hidden argument*/NULL);
		NullCheck(L_62);
		XContainer_AddNodeSkipNotify_m2405732094(L_62, L_73, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_01bd:
	{
		XmlReader_t3121518892 * L_74 = ___r0;
		NullCheck(L_74);
		bool L_75 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::get_CanResolveEntity() */, L_74);
		if (L_75)
		{
			goto IL_01d5;
		}
	}
	{
		String_t* L_76 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3265120625, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_77 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_77, L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, NULL, XContainer_ReadContentFrom_m1866981_RuntimeMethod_var);
	}

IL_01d5:
	{
		XmlReader_t3121518892 * L_78 = ___r0;
		NullCheck(L_78);
		VirtActionInvoker0::Invoke(34 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_78);
		goto IL_0201;
	}

IL_01dd:
	{
		ObjectU5BU5D_t2843939325* L_79 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_80 = L_79;
		XmlReader_t3121518892 * L_81 = ___r0;
		NullCheck(L_81);
		int32_t L_82 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_81);
		int32_t L_83 = L_82;
		RuntimeObject * L_84 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_84);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_84);
		String_t* L_85 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral259855407, L_80, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_86 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_86, L_85, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, NULL, XContainer_ReadContentFrom_m1866981_RuntimeMethod_var);
	}

IL_0201:
	{
		XmlReader_t3121518892 * L_87 = ___r0;
		NullCheck(L_87);
		bool L_88 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_87);
		if (L_88)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_m3994758364 (XContainer_t3387731002 * __this, XmlReader_t3121518892 * ___r0, int32_t ___o1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_ReadContentFrom_m3994758364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_ReadContentFrom_m3994758364_RuntimeMethod_var);
	XContainer_t3387731002 * V_0 = NULL;
	XNode_t716131460 * V_1 = NULL;
	NamespaceCache_t3512832689  V_2;
	memset(&V_2, 0, sizeof(V_2));
	NamespaceCache_t3512832689  V_3;
	memset(&V_3, 0, sizeof(V_3));
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	XElement_t4185968754 * V_8 = NULL;
	XAttribute_t355876829 * V_9 = NULL;
	XElement_t4185968754 * V_10 = NULL;
	String_t* G_B7_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	NamespaceCache_t3512832689 * G_B22_0 = NULL;
	NamespaceCache_t3512832689 * G_B21_0 = NULL;
	String_t* G_B23_0 = NULL;
	NamespaceCache_t3512832689 * G_B23_1 = NULL;
	{
		int32_t L_0 = ___o1;
		if (((int32_t)((int32_t)L_0&(int32_t)6)))
		{
			goto IL_000d;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = ___r0;
		XContainer_ReadContentFrom_m1866981(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_2 = ___r0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_4 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3732074949, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, XContainer_ReadContentFrom_m3994758364_RuntimeMethod_var);
	}

IL_0026:
	{
		V_0 = __this;
		V_1 = (XNode_t716131460 *)NULL;
		il2cpp_codegen_initobj((&V_2), sizeof(NamespaceCache_t3512832689 ));
		il2cpp_codegen_initobj((&V_3), sizeof(NamespaceCache_t3512832689 ));
		int32_t L_6 = ___o1;
		if (((int32_t)((int32_t)L_6&(int32_t)2)))
		{
			goto IL_0042;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		goto IL_0048;
	}

IL_0042:
	{
		XmlReader_t3121518892 * L_7 = ___r0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_7);
		G_B7_0 = L_8;
	}

IL_0048:
	{
		V_4 = G_B7_0;
		int32_t L_9 = ___o1;
		if (((int32_t)((int32_t)L_9&(int32_t)4)))
		{
			goto IL_0052;
		}
	}
	{
		G_B10_0 = ((RuntimeObject*)(NULL));
		goto IL_0058;
	}

IL_0052:
	{
		XmlReader_t3121518892 * L_10 = ___r0;
		G_B10_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
	}

IL_0058:
	{
		V_5 = G_B10_0;
	}

IL_005a:
	{
		XmlReader_t3121518892 * L_11 = ___r0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_11);
		V_6 = L_12;
		XmlReader_t3121518892 * L_13 = ___r0;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_13);
		V_7 = L_14;
		int32_t L_15 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00b8;
			}
			case 1:
			{
				goto IL_02e1;
			}
			case 2:
			{
				goto IL_021d;
			}
			case 3:
			{
				goto IL_025b;
			}
			case 4:
			{
				goto IL_02c1;
			}
			case 5:
			{
				goto IL_02e1;
			}
			case 6:
			{
				goto IL_027d;
			}
			case 7:
			{
				goto IL_026c;
			}
			case 8:
			{
				goto IL_02e1;
			}
			case 9:
			{
				goto IL_0291;
			}
			case 10:
			{
				goto IL_02e1;
			}
			case 11:
			{
				goto IL_02e1;
			}
			case 12:
			{
				goto IL_021d;
			}
			case 13:
			{
				goto IL_021d;
			}
			case 14:
			{
				goto IL_01b2;
			}
			case 15:
			{
				goto IL_0305;
			}
		}
	}
	{
		goto IL_02e1;
	}

IL_00b8:
	{
		XmlReader_t3121518892 * L_16 = ___r0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		XNamespace_t1843508170 * L_18 = NamespaceCache_Get_m3575903994((NamespaceCache_t3512832689 *)(&V_2), L_17, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_19 = ___r0;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_19);
		NullCheck(L_18);
		XName_t3751455998 * L_21 = XNamespace_GetName_m1445243739(L_18, L_20, /*hidden argument*/NULL);
		XElement_t4185968754 * L_22 = (XElement_t4185968754 *)il2cpp_codegen_object_new(XElement_t4185968754_il2cpp_TypeInfo_var);
		XElement__ctor_m643760410(L_22, L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		String_t* L_23 = V_4;
		if (!L_23)
		{
			goto IL_00ef;
		}
	}
	{
		String_t* L_24 = V_4;
		String_t* L_25 = V_6;
		bool L_26 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ef;
		}
	}
	{
		XElement_t4185968754 * L_27 = V_8;
		String_t* L_28 = V_6;
		NullCheck(L_27);
		XObject_SetBaseUri_m4069814171(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		RuntimeObject* L_29 = V_5;
		if (!L_29)
		{
			goto IL_0111;
		}
	}
	{
		RuntimeObject* L_30 = V_5;
		NullCheck(L_30);
		bool L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_30);
		if (!L_31)
		{
			goto IL_0111;
		}
	}
	{
		XElement_t4185968754 * L_32 = V_8;
		RuntimeObject* L_33 = V_5;
		NullCheck(L_33);
		int32_t L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_32);
		XObject_SetLineInfo_m1298245039(L_32, L_34, L_36, /*hidden argument*/NULL);
	}

IL_0111:
	{
		XmlReader_t3121518892 * L_37 = ___r0;
		NullCheck(L_37);
		bool L_38 = VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_37);
		if (!L_38)
		{
			goto IL_018c;
		}
	}

IL_0119:
	{
		XmlReader_t3121518892 * L_39 = ___r0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_39);
		NullCheck(L_40);
		int32_t L_41 = String_get_Length_m3847582255(L_40, /*hidden argument*/NULL);
		G_B21_0 = (&V_3);
		if (!L_41)
		{
			G_B22_0 = (&V_3);
			goto IL_0130;
		}
	}
	{
		XmlReader_t3121518892 * L_42 = ___r0;
		NullCheck(L_42);
		String_t* L_43 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_42);
		G_B23_0 = L_43;
		G_B23_1 = G_B21_0;
		goto IL_0135;
	}

IL_0130:
	{
		String_t* L_44 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B23_0 = L_44;
		G_B23_1 = G_B22_0;
	}

IL_0135:
	{
		XNamespace_t1843508170 * L_45 = NamespaceCache_Get_m3575903994((NamespaceCache_t3512832689 *)G_B23_1, G_B23_0, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_46 = ___r0;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_46);
		NullCheck(L_45);
		XName_t3751455998 * L_48 = XNamespace_GetName_m1445243739(L_45, L_47, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_49 = ___r0;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		XAttribute_t355876829 * L_51 = (XAttribute_t355876829 *)il2cpp_codegen_object_new(XAttribute_t355876829_il2cpp_TypeInfo_var);
		XAttribute__ctor_m2609633652(L_51, L_48, L_50, /*hidden argument*/NULL);
		V_9 = L_51;
		RuntimeObject* L_52 = V_5;
		if (!L_52)
		{
			goto IL_0174;
		}
	}
	{
		RuntimeObject* L_53 = V_5;
		NullCheck(L_53);
		bool L_54 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_53);
		if (!L_54)
		{
			goto IL_0174;
		}
	}
	{
		XAttribute_t355876829 * L_55 = V_9;
		RuntimeObject* L_56 = V_5;
		NullCheck(L_56);
		int32_t L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_56);
		RuntimeObject* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_55);
		XObject_SetLineInfo_m1298245039(L_55, L_57, L_59, /*hidden argument*/NULL);
	}

IL_0174:
	{
		XElement_t4185968754 * L_60 = V_8;
		XAttribute_t355876829 * L_61 = V_9;
		NullCheck(L_60);
		XElement_AppendAttributeSkipNotify_m1943425946(L_60, L_61, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_62 = ___r0;
		NullCheck(L_62);
		bool L_63 = VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_62);
		if (L_63)
		{
			goto IL_0119;
		}
	}
	{
		XmlReader_t3121518892 * L_64 = ___r0;
		NullCheck(L_64);
		VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_64);
	}

IL_018c:
	{
		XContainer_t3387731002 * L_65 = V_0;
		XElement_t4185968754 * L_66 = V_8;
		NullCheck(L_65);
		XContainer_AddNodeSkipNotify_m2405732094(L_65, L_66, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_67 = ___r0;
		NullCheck(L_67);
		bool L_68 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_67);
		if (L_68)
		{
			goto IL_0305;
		}
	}
	{
		XElement_t4185968754 * L_69 = V_8;
		V_0 = L_69;
		String_t* L_70 = V_4;
		if (!L_70)
		{
			goto IL_0305;
		}
	}
	{
		String_t* L_71 = V_6;
		V_4 = L_71;
		goto IL_0305;
	}

IL_01b2:
	{
		XContainer_t3387731002 * L_72 = V_0;
		NullCheck(L_72);
		RuntimeObject * L_73 = L_72->get_content_3();
		if (L_73)
		{
			goto IL_01c5;
		}
	}
	{
		XContainer_t3387731002 * L_74 = V_0;
		String_t* L_75 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_74);
		L_74->set_content_3(L_75);
	}

IL_01c5:
	{
		XContainer_t3387731002 * L_76 = V_0;
		V_10 = ((XElement_t4185968754 *)IsInstClass((RuntimeObject*)L_76, XElement_t4185968754_il2cpp_TypeInfo_var));
		XElement_t4185968754 * L_77 = V_10;
		if (!L_77)
		{
			goto IL_01f3;
		}
	}
	{
		RuntimeObject* L_78 = V_5;
		if (!L_78)
		{
			goto IL_01f3;
		}
	}
	{
		RuntimeObject* L_79 = V_5;
		NullCheck(L_79);
		bool L_80 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_79);
		if (!L_80)
		{
			goto IL_01f3;
		}
	}
	{
		XElement_t4185968754 * L_81 = V_10;
		RuntimeObject* L_82 = V_5;
		NullCheck(L_82);
		int32_t L_83 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_82);
		RuntimeObject* L_84 = V_5;
		NullCheck(L_84);
		int32_t L_85 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_84);
		NullCheck(L_81);
		XElement_SetEndElementLineInfo_m3917701571(L_81, L_83, L_85, /*hidden argument*/NULL);
	}

IL_01f3:
	{
		XContainer_t3387731002 * L_86 = V_0;
		if ((!(((RuntimeObject*)(XContainer_t3387731002 *)L_86) == ((RuntimeObject*)(XContainer_t3387731002 *)__this))))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_01f8:
	{
		String_t* L_87 = V_4;
		if (!L_87)
		{
			goto IL_0211;
		}
	}
	{
		XContainer_t3387731002 * L_88 = V_0;
		NullCheck(L_88);
		bool L_89 = XObject_get_HasBaseUri_m2712212936(L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0211;
		}
	}
	{
		XContainer_t3387731002 * L_90 = V_0;
		NullCheck(L_90);
		XContainer_t3387731002 * L_91 = ((XObject_t1119084474 *)L_90)->get_parent_0();
		NullCheck(L_91);
		String_t* L_92 = XObject_get_BaseUri_m1095757722(L_91, /*hidden argument*/NULL);
		V_4 = L_92;
	}

IL_0211:
	{
		XContainer_t3387731002 * L_93 = V_0;
		NullCheck(L_93);
		XContainer_t3387731002 * L_94 = ((XObject_t1119084474 *)L_93)->get_parent_0();
		V_0 = L_94;
		goto IL_0305;
	}

IL_021d:
	{
		String_t* L_95 = V_4;
		if (!L_95)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_96 = V_4;
		String_t* L_97 = V_6;
		bool L_98 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_96, L_97, /*hidden argument*/NULL);
		if (L_98)
		{
			goto IL_0239;
		}
	}

IL_022c:
	{
		RuntimeObject* L_99 = V_5;
		if (!L_99)
		{
			goto IL_024a;
		}
	}
	{
		RuntimeObject* L_100 = V_5;
		NullCheck(L_100);
		bool L_101 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_100);
		if (!L_101)
		{
			goto IL_024a;
		}
	}

IL_0239:
	{
		XmlReader_t3121518892 * L_102 = ___r0;
		NullCheck(L_102);
		String_t* L_103 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_102);
		XText_t1448860321 * L_104 = (XText_t1448860321 *)il2cpp_codegen_object_new(XText_t1448860321_il2cpp_TypeInfo_var);
		XText__ctor_m2401333842(L_104, L_103, /*hidden argument*/NULL);
		V_1 = L_104;
		goto IL_0305;
	}

IL_024a:
	{
		XContainer_t3387731002 * L_105 = V_0;
		XmlReader_t3121518892 * L_106 = ___r0;
		NullCheck(L_106);
		String_t* L_107 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_106);
		NullCheck(L_105);
		XContainer_AddStringSkipNotify_m1432095315(L_105, L_107, /*hidden argument*/NULL);
		goto IL_0305;
	}

IL_025b:
	{
		XmlReader_t3121518892 * L_108 = ___r0;
		NullCheck(L_108);
		String_t* L_109 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_108);
		XCData_t832623270 * L_110 = (XCData_t832623270 *)il2cpp_codegen_object_new(XCData_t832623270_il2cpp_TypeInfo_var);
		XCData__ctor_m2121219684(L_110, L_109, /*hidden argument*/NULL);
		V_1 = L_110;
		goto IL_0305;
	}

IL_026c:
	{
		XmlReader_t3121518892 * L_111 = ___r0;
		NullCheck(L_111);
		String_t* L_112 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_111);
		XComment_t1832251191 * L_113 = (XComment_t1832251191 *)il2cpp_codegen_object_new(XComment_t1832251191_il2cpp_TypeInfo_var);
		XComment__ctor_m2613070977(L_113, L_112, /*hidden argument*/NULL);
		V_1 = L_113;
		goto IL_0305;
	}

IL_027d:
	{
		XmlReader_t3121518892 * L_114 = ___r0;
		NullCheck(L_114);
		String_t* L_115 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_114);
		XmlReader_t3121518892 * L_116 = ___r0;
		NullCheck(L_116);
		String_t* L_117 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_116);
		XProcessingInstruction_t2943691487 * L_118 = (XProcessingInstruction_t2943691487 *)il2cpp_codegen_object_new(XProcessingInstruction_t2943691487_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_m3301977354(L_118, L_115, L_117, /*hidden argument*/NULL);
		V_1 = L_118;
		goto IL_0305;
	}

IL_0291:
	{
		XmlReader_t3121518892 * L_119 = ___r0;
		NullCheck(L_119);
		String_t* L_120 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_119);
		XmlReader_t3121518892 * L_121 = ___r0;
		NullCheck(L_121);
		String_t* L_122 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_121, _stringLiteral3984887517);
		XmlReader_t3121518892 * L_123 = ___r0;
		NullCheck(L_123);
		String_t* L_124 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_123, _stringLiteral3261774195);
		XmlReader_t3121518892 * L_125 = ___r0;
		NullCheck(L_125);
		String_t* L_126 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_125);
		XmlReader_t3121518892 * L_127 = ___r0;
		NullCheck(L_127);
		RuntimeObject* L_128 = VirtFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_127);
		XDocumentType_t1853592271 * L_129 = (XDocumentType_t1853592271 *)il2cpp_codegen_object_new(XDocumentType_t1853592271_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m1639303547(L_129, L_120, L_122, L_124, L_126, L_128, /*hidden argument*/NULL);
		V_1 = L_129;
		goto IL_0305;
	}

IL_02c1:
	{
		XmlReader_t3121518892 * L_130 = ___r0;
		NullCheck(L_130);
		bool L_131 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Xml.XmlReader::get_CanResolveEntity() */, L_130);
		if (L_131)
		{
			goto IL_02d9;
		}
	}
	{
		String_t* L_132 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3265120625, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_133 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_133, L_132, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_133, NULL, XContainer_ReadContentFrom_m3994758364_RuntimeMethod_var);
	}

IL_02d9:
	{
		XmlReader_t3121518892 * L_134 = ___r0;
		NullCheck(L_134);
		VirtActionInvoker0::Invoke(34 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_134);
		goto IL_0305;
	}

IL_02e1:
	{
		ObjectU5BU5D_t2843939325* L_135 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_136 = L_135;
		XmlReader_t3121518892 * L_137 = ___r0;
		NullCheck(L_137);
		int32_t L_138 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_137);
		int32_t L_139 = L_138;
		RuntimeObject * L_140 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_139);
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, L_140);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_140);
		String_t* L_141 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral259855407, L_136, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_142 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_142, L_141, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_142, NULL, XContainer_ReadContentFrom_m3994758364_RuntimeMethod_var);
	}

IL_0305:
	{
		XNode_t716131460 * L_143 = V_1;
		if (!L_143)
		{
			goto IL_0349;
		}
	}
	{
		String_t* L_144 = V_4;
		if (!L_144)
		{
			goto IL_031f;
		}
	}
	{
		String_t* L_145 = V_4;
		String_t* L_146 = V_6;
		bool L_147 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_145, L_146, /*hidden argument*/NULL);
		if (!L_147)
		{
			goto IL_031f;
		}
	}
	{
		XNode_t716131460 * L_148 = V_1;
		String_t* L_149 = V_6;
		NullCheck(L_148);
		XObject_SetBaseUri_m4069814171(L_148, L_149, /*hidden argument*/NULL);
	}

IL_031f:
	{
		RuntimeObject* L_150 = V_5;
		if (!L_150)
		{
			goto IL_0340;
		}
	}
	{
		RuntimeObject* L_151 = V_5;
		NullCheck(L_151);
		bool L_152 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_151);
		if (!L_152)
		{
			goto IL_0340;
		}
	}
	{
		XNode_t716131460 * L_153 = V_1;
		RuntimeObject* L_154 = V_5;
		NullCheck(L_154);
		int32_t L_155 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_154);
		RuntimeObject* L_156 = V_5;
		NullCheck(L_156);
		int32_t L_157 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_156);
		NullCheck(L_153);
		XObject_SetLineInfo_m1298245039(L_153, L_155, L_157, /*hidden argument*/NULL);
	}

IL_0340:
	{
		XContainer_t3387731002 * L_158 = V_0;
		XNode_t716131460 * L_159 = V_1;
		NullCheck(L_158);
		XContainer_AddNodeSkipNotify_m2405732094(L_158, L_159, /*hidden argument*/NULL);
		V_1 = (XNode_t716131460 *)NULL;
	}

IL_0349:
	{
		XmlReader_t3121518892 * L_160 = ___r0;
		NullCheck(L_160);
		bool L_161 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_160);
		if (L_161)
		{
			goto IL_005a;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C" IL2CPP_METHOD_ATTR void XContainer_ValidateNode_m3318702702 (XContainer_t3387731002 * __this, XNode_t716131460 * ___node0, XNode_t716131460 * ___previous1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_ValidateNode_m3318702702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_ValidateNode_m3318702702_RuntimeMethod_var);
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ValidateString(System.String)
extern "C" IL2CPP_METHOD_ATTR void XContainer_ValidateString_m3795944561 (XContainer_t3387731002 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_ValidateString_m3795944561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_ValidateString_m3795944561_RuntimeMethod_var);
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::WriteContentTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XContainer_WriteContentTo_m3843093128 (XContainer_t3387731002 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_WriteContentTo_m3843093128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XContainer_WriteContentTo_m3843093128_RuntimeMethod_var);
	XNode_t716131460 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject * L_1 = __this->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		if (!((XDocument_t1376419702 *)IsInstClass((RuntimeObject*)__this, XDocument_t1376419702_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		XmlWriter_t127905479 * L_2 = ___writer0;
		RuntimeObject * L_3 = __this->get_content_3();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_2, ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_002f:
	{
		XmlWriter_t127905479 * L_4 = ___writer0;
		RuntimeObject * L_5 = __this->get_content_3();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_4, ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_0041:
	{
		RuntimeObject * L_6 = __this->get_content_3();
		V_0 = ((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_6, XNode_t716131460_il2cpp_TypeInfo_var));
	}

IL_004d:
	{
		XNode_t716131460 * L_7 = V_0;
		NullCheck(L_7);
		XNode_t716131460 * L_8 = L_7->get_next_2();
		V_0 = L_8;
		XNode_t716131460 * L_9 = V_0;
		XmlWriter_t127905479 * L_10 = ___writer0;
		NullCheck(L_9);
		VirtActionInvoker1< XmlWriter_t127905479 * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, L_9, L_10);
		XNode_t716131460 * L_11 = V_0;
		RuntimeObject * L_12 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_t716131460 *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_12))))
		{
			goto IL_004d;
		}
	}

IL_0064:
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
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39__ctor_m3867538981 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39__ctor_m3867538981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39__ctor_m3867538981_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m3454612449(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39_System_IDisposable_Dispose_m3444531876 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39_System_IDisposable_Dispose_m3444531876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39_System_IDisposable_Dispose_m3444531876_RuntimeMethod_var);
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetDescendantsU3Ed__39_MoveNext_m949420177 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39_MoveNext_m949420177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39_MoveNext_m949420177_RuntimeMethod_var);
	int32_t V_0 = 0;
	XContainer_t3387731002 * V_1 = NULL;
	XContainer_t3387731002 * V_2 = NULL;
	XElement_t4185968754 * V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XContainer_t3387731002 * L_1 = __this->get_U3CU3E4__this_5();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_0141;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		bool L_3 = __this->get_self_3();
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		XContainer_t3387731002 * L_4 = V_1;
		V_3 = ((XElement_t4185968754 *)CastclassClass((RuntimeObject*)L_4, XElement_t4185968754_il2cpp_TypeInfo_var));
		XName_t3751455998 * L_5 = __this->get_name_6();
		bool L_6 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_5, (XName_t3751455998 *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		XElement_t4185968754 * L_7 = V_3;
		NullCheck(L_7);
		XName_t3751455998 * L_8 = L_7->get_name_4();
		XName_t3751455998 * L_9 = __this->get_name_6();
		bool L_10 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0070;
		}
	}

IL_0059:
	{
		XElement_t4185968754 * L_11 = V_3;
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0070:
	{
		XContainer_t3387731002 * L_12 = V_1;
		__this->set_U3CnU3E5__1_8(L_12);
		XContainer_t3387731002 * L_13 = V_1;
		V_2 = L_13;
	}

IL_0079:
	{
		XContainer_t3387731002 * L_14 = V_2;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		XContainer_t3387731002 * L_15 = V_2;
		NullCheck(L_15);
		RuntimeObject * L_16 = L_15->get_content_3();
		if (!((XNode_t716131460 *)IsInstClass((RuntimeObject*)L_16, XNode_t716131460_il2cpp_TypeInfo_var)))
		{
			goto IL_00b2;
		}
	}
	{
		XContainer_t3387731002 * L_17 = V_2;
		NullCheck(L_17);
		RuntimeObject * L_18 = L_17->get_content_3();
		NullCheck(((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_18, XNode_t716131460_il2cpp_TypeInfo_var)));
		XNode_t716131460 * L_19 = ((XNode_t716131460 *)CastclassClass((RuntimeObject*)L_18, XNode_t716131460_il2cpp_TypeInfo_var))->get_next_2();
		__this->set_U3CnU3E5__1_8(L_19);
		goto IL_00ed;
	}

IL_00a1:
	{
		XNode_t716131460 * L_20 = __this->get_U3CnU3E5__1_8();
		NullCheck(L_20);
		XContainer_t3387731002 * L_21 = ((XObject_t1119084474 *)L_20)->get_parent_0();
		__this->set_U3CnU3E5__1_8(L_21);
	}

IL_00b2:
	{
		XNode_t716131460 * L_22 = __this->get_U3CnU3E5__1_8();
		XContainer_t3387731002 * L_23 = V_1;
		if ((((RuntimeObject*)(XNode_t716131460 *)L_22) == ((RuntimeObject*)(XContainer_t3387731002 *)L_23)))
		{
			goto IL_00d3;
		}
	}
	{
		XNode_t716131460 * L_24 = __this->get_U3CnU3E5__1_8();
		XNode_t716131460 * L_25 = __this->get_U3CnU3E5__1_8();
		NullCheck(L_25);
		XContainer_t3387731002 * L_26 = ((XObject_t1119084474 *)L_25)->get_parent_0();
		NullCheck(L_26);
		RuntimeObject * L_27 = L_26->get_content_3();
		if ((((RuntimeObject*)(XNode_t716131460 *)L_24) == ((RuntimeObject*)(RuntimeObject *)L_27)))
		{
			goto IL_00a1;
		}
	}

IL_00d3:
	{
		XNode_t716131460 * L_28 = __this->get_U3CnU3E5__1_8();
		XContainer_t3387731002 * L_29 = V_1;
		if ((((RuntimeObject*)(XNode_t716131460 *)L_28) == ((RuntimeObject*)(XContainer_t3387731002 *)L_29)))
		{
			goto IL_015b;
		}
	}
	{
		XNode_t716131460 * L_30 = __this->get_U3CnU3E5__1_8();
		NullCheck(L_30);
		XNode_t716131460 * L_31 = L_30->get_next_2();
		__this->set_U3CnU3E5__1_8(L_31);
	}

IL_00ed:
	{
		XNode_t716131460 * L_32 = __this->get_U3CnU3E5__1_8();
		__this->set_U3CeU3E5__2_9(((XElement_t4185968754 *)IsInstClass((RuntimeObject*)L_32, XElement_t4185968754_il2cpp_TypeInfo_var)));
		XElement_t4185968754 * L_33 = __this->get_U3CeU3E5__2_9();
		if (!L_33)
		{
			goto IL_0148;
		}
	}
	{
		XName_t3751455998 * L_34 = __this->get_name_6();
		bool L_35 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_34, (XName_t3751455998 *)NULL, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_012c;
		}
	}
	{
		XElement_t4185968754 * L_36 = __this->get_U3CeU3E5__2_9();
		NullCheck(L_36);
		XName_t3751455998 * L_37 = L_36->get_name_4();
		XName_t3751455998 * L_38 = __this->get_name_6();
		bool L_39 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0148;
		}
	}

IL_012c:
	{
		XElement_t4185968754 * L_40 = __this->get_U3CeU3E5__2_9();
		__this->set_U3CU3E2__current_1(L_40);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0141:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0148:
	{
		XElement_t4185968754 * L_41 = __this->get_U3CeU3E5__2_9();
		V_2 = L_41;
		__this->set_U3CeU3E5__2_9((XElement_t4185968754 *)NULL);
		goto IL_0079;
	}

IL_015b:
	{
		return (bool)0;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current()
extern "C" IL2CPP_METHOD_ATTR XElement_t4185968754 * U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_m1798985458 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_m1798985458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_m1798985458_RuntimeMethod_var);
	{
		XElement_t4185968754 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m3811884003 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m3811884003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m3811884003_RuntimeMethod_var);
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m3811884003_RuntimeMethod_var);
	}
}
// System.Object System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_get_Current_m1753131874 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_get_Current_m1753131874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_get_Current_m1753131874_RuntimeMethod_var);
	{
		XElement_t4185968754 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m300366222 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m300366222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m300366222_RuntimeMethod_var);
	U3CGetDescendantsU3Ed__39_t2920852095 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m3454612449(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetDescendantsU3Ed__39_t2920852095 * L_3 = (U3CGetDescendantsU3Ed__39_t2920852095 *)il2cpp_codegen_object_new(U3CGetDescendantsU3Ed__39_t2920852095_il2cpp_TypeInfo_var);
		U3CGetDescendantsU3Ed__39__ctor_m3867538981(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetDescendantsU3Ed__39_t2920852095 * L_4 = V_0;
		XContainer_t3387731002 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CGetDescendantsU3Ed__39_t2920852095 * L_6 = V_0;
		XName_t3751455998 * L_7 = __this->get_U3CU3E3__name_7();
		NullCheck(L_6);
		L_6->set_name_6(L_7);
		U3CGetDescendantsU3Ed__39_t2920852095 * L_8 = V_0;
		bool L_9 = __this->get_U3CU3E3__self_4();
		NullCheck(L_8);
		L_8->set_self_3(L_9);
		U3CGetDescendantsU3Ed__39_t2920852095 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_m3439842338 (U3CGetDescendantsU3Ed__39_t2920852095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDescendantsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_m3439842338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CGetDescendantsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_m3439842338_RuntimeMethod_var);
	{
		RuntimeObject* L_0 = U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m300366222(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.Linq.XDeclaration)
extern "C" IL2CPP_METHOD_ATTR void XDeclaration__ctor_m3840151100 (XDeclaration_t2907650823 * __this, XDeclaration_t2907650823 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDeclaration__ctor_m3840151100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDeclaration__ctor_m3840151100_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XDeclaration_t2907650823 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XDeclaration__ctor_m3840151100_RuntimeMethod_var);
	}

IL_0014:
	{
		XDeclaration_t2907650823 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_version_0();
		__this->set_version_0(L_3);
		XDeclaration_t2907650823 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_encoding_1();
		__this->set_encoding_1(L_5);
		XDeclaration_t2907650823 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_standalone_2();
		__this->set_standalone_2(L_7);
		return;
	}
}
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.XmlReader)
extern "C" IL2CPP_METHOD_ATTR void XDeclaration__ctor_m799194490 (XDeclaration_t2907650823 * __this, XmlReader_t3121518892 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDeclaration__ctor_m799194490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDeclaration__ctor_m799194490_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, _stringLiteral1902401671);
		__this->set_version_0(L_1);
		XmlReader_t3121518892 * L_2 = ___r0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_2, _stringLiteral3002372288);
		__this->set_encoding_1(L_3);
		XmlReader_t3121518892 * L_4 = ___r0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_4, _stringLiteral2469761506);
		__this->set_standalone_2(L_5);
		XmlReader_t3121518892 * L_6 = ___r0;
		NullCheck(L_6);
		VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_6);
		return;
	}
}
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
extern "C" IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_m2365902379 (XDeclaration_t2907650823 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDeclaration_get_Standalone_m2365902379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDeclaration_get_Standalone_m2365902379_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get_standalone_2();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDeclaration::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XDeclaration_ToString_m4250318426 (XDeclaration_t2907650823 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDeclaration_ToString_m4250318426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDeclaration_ToString_m4250318426_RuntimeMethod_var);
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_0, _stringLiteral3121692312, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get_version_0();
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, _stringLiteral2120901972, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		String_t* L_4 = __this->get_version_0();
		NullCheck(L_3);
		StringBuilder_Append_m1965104174(L_3, L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, _stringLiteral3452614526, /*hidden argument*/NULL);
	}

IL_0038:
	{
		String_t* L_6 = __this->get_encoding_1();
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m1965104174(L_7, _stringLiteral4008185757, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = V_0;
		String_t* L_9 = __this->get_encoding_1();
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3452614526, /*hidden argument*/NULL);
	}

IL_0065:
	{
		String_t* L_11 = __this->get_standalone_2();
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3804145326, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = V_0;
		String_t* L_14 = __this->get_standalone_2();
		NullCheck(L_13);
		StringBuilder_Append_m1965104174(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3452614526, /*hidden argument*/NULL);
	}

IL_0092:
	{
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3451697041, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
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
// System.Void System.Xml.Linq.XDocument::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XDocument__ctor_m1715976504 (XDocument_t1376419702 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument__ctor_m1715976504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument__ctor_m1715976504_RuntimeMethod_var);
	{
		XContainer__ctor_m2392412783(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::.ctor(System.Xml.Linq.XDocument)
extern "C" IL2CPP_METHOD_ATTR void XDocument__ctor_m3958010189 (XDocument_t1376419702 * __this, XDocument_t1376419702 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument__ctor_m3958010189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument__ctor_m3958010189_RuntimeMethod_var);
	{
		XDocument_t1376419702 * L_0 = ___other0;
		XContainer__ctor_m1059702699(__this, L_0, /*hidden argument*/NULL);
		XDocument_t1376419702 * L_1 = ___other0;
		NullCheck(L_1);
		XDeclaration_t2907650823 * L_2 = L_1->get_declaration_4();
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		XDocument_t1376419702 * L_3 = ___other0;
		NullCheck(L_3);
		XDeclaration_t2907650823 * L_4 = L_3->get_declaration_4();
		XDeclaration_t2907650823 * L_5 = (XDeclaration_t2907650823 *)il2cpp_codegen_object_new(XDeclaration_t2907650823_il2cpp_TypeInfo_var);
		XDeclaration__ctor_m3840151100(L_5, L_4, /*hidden argument*/NULL);
		__this->set_declaration_4(L_5);
	}

IL_0020:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::set_Declaration(System.Xml.Linq.XDeclaration)
extern "C" IL2CPP_METHOD_ATTR void XDocument_set_Declaration_m1583407267 (XDocument_t1376419702 * __this, XDeclaration_t2907650823 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_set_Declaration_m1583407267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_set_Declaration_m1583407267_RuntimeMethod_var);
	{
		XDeclaration_t2907650823 * L_0 = ___value0;
		__this->set_declaration_4(L_0);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XDocument::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XDocument_get_NodeType_m3201257204 (XDocument_t1376419702 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_get_NodeType_m3201257204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_get_NodeType_m3201257204_RuntimeMethod_var);
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XDocument::get_Root()
extern "C" IL2CPP_METHOD_ATTR XElement_t4185968754 * XDocument_get_Root_m2125125051 (XDocument_t1376419702 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_get_Root_m2125125051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_get_Root_m2125125051_RuntimeMethod_var);
	{
		XElement_t4185968754 * L_0 = XDocument_GetFirstNode_TisXElement_t4185968754_m2723590789(__this, /*hidden argument*/XDocument_GetFirstNode_TisXElement_t4185968754_m2723590789_RuntimeMethod_var);
		return L_0;
	}
}
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Load_m3800122983 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_Load_m3800122983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_Load_m3800122983_RuntimeMethod_var);
	{
		String_t* L_0 = ___uri0;
		XDocument_t1376419702 * L_1 = XDocument_Load_m1691125960(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Load(System.String,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Load_m1691125960 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_Load_m1691125960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_Load_m1691125960_RuntimeMethod_var);
	XmlReaderSettings_t2186285234 * V_0 = NULL;
	XmlReader_t3121518892 * V_1 = NULL;
	XDocument_t1376419702 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___options1;
		XmlReaderSettings_t2186285234 * L_1 = XNode_GetXmlReaderSettings_m1372944662(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___uri0;
		XmlReaderSettings_t2186285234 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlReader_t3121518892_il2cpp_TypeInfo_var);
		XmlReader_t3121518892 * L_4 = XmlReader_Create_m140634513(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		XmlReader_t3121518892 * L_5 = V_1;
		int32_t L_6 = ___options1;
		XDocument_t1376419702 * L_7 = XDocument_Load_m3339189379(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		IL2CPP_LEAVE(0x23, FINALLY_0019);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0019;
	}

FINALLY_0019:
	{ // begin finally (depth: 1)
		{
			XmlReader_t3121518892 * L_8 = V_1;
			if (!L_8)
			{
				goto IL_0022;
			}
		}

IL_001c:
		{
			XmlReader_t3121518892 * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0022:
		{
			IL2CPP_END_FINALLY(25)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(25)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0023:
	{
		XDocument_t1376419702 * L_10 = V_2;
		return L_10;
	}
}
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Load(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Load_m3339189379 (RuntimeObject * __this /* static, unused */, XmlReader_t3121518892 * ___reader0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_Load_m3339189379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_Load_m3339189379_RuntimeMethod_var);
	XDocument_t1376419702 * V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3529812268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XDocument_Load_m3339189379_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlReader_t3121518892 * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		XmlReader_t3121518892 * L_4 = ___reader0;
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001d:
	{
		XDocument_t1376419702 * L_5 = (XDocument_t1376419702 *)il2cpp_codegen_object_new(XDocument_t1376419702_il2cpp_TypeInfo_var);
		XDocument__ctor_m1715976504(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = ___options1;
		if (!((int32_t)((int32_t)L_6&(int32_t)2)))
		{
			goto IL_0041;
		}
	}
	{
		XmlReader_t3121518892 * L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_7);
		V_1 = L_8;
		String_t* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		XDocument_t1376419702 * L_12 = V_0;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		XObject_SetBaseUri_m4069814171(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0041:
	{
		int32_t L_14 = ___options1;
		if (!((int32_t)((int32_t)L_14&(int32_t)4)))
		{
			goto IL_006a;
		}
	}
	{
		XmlReader_t3121518892 * L_15 = ___reader0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_16 = V_2;
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_17 = V_2;
		NullCheck(L_17);
		bool L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_17);
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		XDocument_t1376419702 * L_19 = V_0;
		RuntimeObject* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_20);
		RuntimeObject* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_19);
		XObject_SetLineInfo_m1298245039(L_19, L_21, L_23, /*hidden argument*/NULL);
	}

IL_006a:
	{
		XmlReader_t3121518892 * L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_24);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0080;
		}
	}
	{
		XDocument_t1376419702 * L_26 = V_0;
		XmlReader_t3121518892 * L_27 = ___reader0;
		XDeclaration_t2907650823 * L_28 = (XDeclaration_t2907650823 *)il2cpp_codegen_object_new(XDeclaration_t2907650823_il2cpp_TypeInfo_var);
		XDeclaration__ctor_m799194490(L_28, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		XDocument_set_Declaration_m1583407267(L_26, L_28, /*hidden argument*/NULL);
	}

IL_0080:
	{
		XDocument_t1376419702 * L_29 = V_0;
		XmlReader_t3121518892 * L_30 = ___reader0;
		int32_t L_31 = ___options1;
		NullCheck(L_29);
		XContainer_ReadContentFrom_m3994758364(L_29, L_30, L_31, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_32 = ___reader0;
		NullCheck(L_32);
		bool L_33 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_32);
		if (L_33)
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_34 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral3820310384, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_35 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, NULL, XDocument_Load_m3339189379_RuntimeMethod_var);
	}

IL_00a0:
	{
		XDocument_t1376419702 * L_36 = V_0;
		NullCheck(L_36);
		XElement_t4185968754 * L_37 = XDocument_get_Root_m2125125051(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_38 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral1058295211, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_39 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_39, L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, NULL, XDocument_Load_m3339189379_RuntimeMethod_var);
	}

IL_00b8:
	{
		XDocument_t1376419702 * L_40 = V_0;
		return L_40;
	}
}
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Parse_m2595360597 (RuntimeObject * __this /* static, unused */, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_Parse_m2595360597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_Parse_m2595360597_RuntimeMethod_var);
	{
		String_t* L_0 = ___text0;
		XDocument_t1376419702 * L_1 = XDocument_Parse_m271750636(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.Linq.XDocument System.Xml.Linq.XDocument::Parse(System.String,System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XDocument_t1376419702 * XDocument_Parse_m271750636 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_Parse_m271750636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_Parse_m271750636_RuntimeMethod_var);
	StringReader_t3465604688 * V_0 = NULL;
	XmlReaderSettings_t2186285234 * V_1 = NULL;
	XmlReader_t3121518892 * V_2 = NULL;
	XDocument_t1376419702 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___text0;
		StringReader_t3465604688 * L_1 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = ___options1;
			XmlReaderSettings_t2186285234 * L_3 = XNode_GetXmlReaderSettings_m1372944662(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			StringReader_t3465604688 * L_4 = V_0;
			XmlReaderSettings_t2186285234 * L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(XmlReader_t3121518892_il2cpp_TypeInfo_var);
			XmlReader_t3121518892 * L_6 = XmlReader_Create_m2377285192(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_0016:
		try
		{ // begin try (depth: 2)
			XmlReader_t3121518892 * L_7 = V_2;
			int32_t L_8 = ___options1;
			XDocument_t1376419702 * L_9 = XDocument_Load_m3339189379(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			IL2CPP_LEAVE(0x34, FINALLY_0020);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0020;
		}

FINALLY_0020:
		{ // begin finally (depth: 2)
			{
				XmlReader_t3121518892 * L_10 = V_2;
				if (!L_10)
				{
					goto IL_0029;
				}
			}

IL_0023:
			{
				XmlReader_t3121518892 * L_11 = V_2;
				NullCheck(L_11);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
			}

IL_0029:
			{
				IL2CPP_END_FINALLY(32)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(32)
		{
			IL2CPP_END_CLEANUP(0x34, FINALLY_002a);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			StringReader_t3465604688 * L_12 = V_0;
			if (!L_12)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			StringReader_t3465604688 * L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		XDocument_t1376419702 * L_14 = V_3;
		return L_14;
	}
}
// System.Void System.Xml.Linq.XDocument::WriteTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XDocument_WriteTo_m2640830178 (XDocument_t1376419702 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_WriteTo_m2640830178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_WriteTo_m2640830178_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XDocument_WriteTo_m2640830178_RuntimeMethod_var);
	}

IL_000e:
	{
		XDeclaration_t2907650823 * L_2 = __this->get_declaration_4();
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		XDeclaration_t2907650823 * L_3 = __this->get_declaration_4();
		NullCheck(L_3);
		String_t* L_4 = XDeclaration_get_Standalone_m2365902379(L_3, /*hidden argument*/NULL);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral4119301762, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		XmlWriter_t127905479 * L_6 = ___writer0;
		NullCheck(L_6);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Xml.XmlWriter::WriteStartDocument(System.Boolean) */, L_6, (bool)1);
		goto IL_0064;
	}

IL_0036:
	{
		XDeclaration_t2907650823 * L_7 = __this->get_declaration_4();
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		XDeclaration_t2907650823 * L_8 = __this->get_declaration_4();
		NullCheck(L_8);
		String_t* L_9 = XDeclaration_get_Standalone_m2365902379(L_8, /*hidden argument*/NULL);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral3454777282, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		XmlWriter_t127905479 * L_11 = ___writer0;
		NullCheck(L_11);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Xml.XmlWriter::WriteStartDocument(System.Boolean) */, L_11, (bool)0);
		goto IL_0064;
	}

IL_005e:
	{
		XmlWriter_t127905479 * L_12 = ___writer0;
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Xml.XmlWriter::WriteStartDocument() */, L_12);
	}

IL_0064:
	{
		XmlWriter_t127905479 * L_13 = ___writer0;
		XContainer_WriteContentTo_m3843093128(__this, L_13, /*hidden argument*/NULL);
		XmlWriter_t127905479 * L_14 = ___writer0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::WriteEndDocument() */, L_14);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XDocument::CloneNode()
extern "C" IL2CPP_METHOD_ATTR XNode_t716131460 * XDocument_CloneNode_m1888657918 (XDocument_t1376419702 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_CloneNode_m1888657918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_CloneNode_m1888657918_RuntimeMethod_var);
	{
		XDocument_t1376419702 * L_0 = (XDocument_t1376419702 *)il2cpp_codegen_object_new(XDocument_t1376419702_il2cpp_TypeInfo_var);
		XDocument__ctor_m3958010189(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XDocument::IsWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XDocument_IsWhitespace_m4229137038 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_IsWhitespace_m4229137038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_IsWhitespace_m4229137038_RuntimeMethod_var);
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___s0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0006:
	{
		String_t* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)9))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)13))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)10))))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void System.Xml.Linq.XDocument::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C" IL2CPP_METHOD_ATTR void XDocument_ValidateNode_m3035337470 (XDocument_t1376419702 * __this, XNode_t716131460 * ___node0, XNode_t716131460 * ___previous1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_ValidateNode_m3035337470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_ValidateNode_m3035337470_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		XNode_t716131460 * L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)10))))
		{
			goto IL_0047;
		}
	}
	{
		return;
	}

IL_002a:
	{
		XNode_t716131460 * L_5 = ___node0;
		NullCheck(((XText_t1448860321 *)CastclassClass((RuntimeObject*)L_5, XText_t1448860321_il2cpp_TypeInfo_var)));
		String_t* L_6 = XText_get_Value_m3622993421(((XText_t1448860321 *)CastclassClass((RuntimeObject*)L_5, XText_t1448860321_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Xml.Linq.XContainer::ValidateString(System.String) */, __this, L_6);
		return;
	}

IL_003c:
	{
		XNode_t716131460 * L_7 = ___previous1;
		XDocument_ValidateDocument_m2535406208(__this, L_7, ((int32_t)10), 0, /*hidden argument*/NULL);
		return;
	}

IL_0047:
	{
		XNode_t716131460 * L_8 = ___previous1;
		XDocument_ValidateDocument_m2535406208(__this, L_8, 0, 1, /*hidden argument*/NULL);
		return;
	}

IL_0051:
	{
		ObjectU5BU5D_t2843939325* L_9 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		int32_t L_11 = ((int32_t)4);
		RuntimeObject * L_12 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		String_t* L_13 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral1473093608, L_10, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, XDocument_ValidateNode_m3035337470_RuntimeMethod_var);
	}

IL_0070:
	{
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		int32_t L_17 = ((int32_t)((int32_t)9));
		RuntimeObject * L_18 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		String_t* L_19 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral1473093608, L_16, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_20 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, XDocument_ValidateNode_m3035337470_RuntimeMethod_var);
	}

IL_0090:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::ValidateDocument(System.Xml.Linq.XNode,System.Xml.XmlNodeType,System.Xml.XmlNodeType)
extern "C" IL2CPP_METHOD_ATTR void XDocument_ValidateDocument_m2535406208 (XDocument_t1376419702 * __this, XNode_t716131460 * ___previous0, int32_t ___allowBefore1, int32_t ___allowAfter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_ValidateDocument_m2535406208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_ValidateDocument_m2535406208_RuntimeMethod_var);
	XNode_t716131460 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ((XContainer_t3387731002 *)__this)->get_content_3();
		V_0 = ((XNode_t716131460 *)IsInstClass((RuntimeObject*)L_0, XNode_t716131460_il2cpp_TypeInfo_var));
		XNode_t716131460 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		XNode_t716131460 * L_2 = ___previous0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___allowAfter2;
		___allowBefore1 = L_3;
	}

IL_0015:
	{
		XNode_t716131460 * L_4 = V_0;
		NullCheck(L_4);
		XNode_t716131460 * L_5 = L_4->get_next_2();
		V_0 = L_5;
		XNode_t716131460 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_6);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0043;
		}
	}

IL_002c:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___allowBefore1;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_12 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral1867930491, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, XDocument_ValidateDocument_m2535406208_RuntimeMethod_var);
	}

IL_0040:
	{
		___allowBefore1 = 0;
	}

IL_0043:
	{
		XNode_t716131460 * L_14 = V_0;
		XNode_t716131460 * L_15 = ___previous0;
		if ((!(((RuntimeObject*)(XNode_t716131460 *)L_14) == ((RuntimeObject*)(XNode_t716131460 *)L_15))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_16 = ___allowAfter2;
		___allowBefore1 = L_16;
	}

IL_004a:
	{
		XNode_t716131460 * L_17 = V_0;
		RuntimeObject * L_18 = ((XContainer_t3387731002 *)__this)->get_content_3();
		if ((!(((RuntimeObject*)(XNode_t716131460 *)L_17) == ((RuntimeObject*)(RuntimeObject *)L_18))))
		{
			goto IL_0015;
		}
	}

IL_0053:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::ValidateString(System.String)
extern "C" IL2CPP_METHOD_ATTR void XDocument_ValidateString_m2943022212 (XDocument_t1376419702 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_ValidateString_m2943022212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocument_ValidateString_m2943022212_RuntimeMethod_var);
	{
		String_t* L_0 = ___s0;
		bool L_1 = XDocument_IsWhitespace_m4229137038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral834294703, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XDocument_ValidateString_m2943022212_RuntimeMethod_var);
	}

IL_0018:
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
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XDocumentType__ctor_m4247116401 (XDocumentType_t1853592271 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType__ctor_m4247116401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocumentType__ctor_m4247116401_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_VerifyName_m2131148908(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_name_3(L_1);
		String_t* L_2 = ___publicId1;
		__this->set_publicId_4(L_2);
		String_t* L_3 = ___systemId2;
		__this->set_systemId_5(L_3);
		String_t* L_4 = ___internalSubset3;
		__this->set_internalSubset_6(L_4);
		return;
	}
}
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.Xml.Linq.XDocumentType)
extern "C" IL2CPP_METHOD_ATTR void XDocumentType__ctor_m3958915516 (XDocumentType_t1853592271 * __this, XDocumentType_t1853592271 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType__ctor_m3958915516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocumentType__ctor_m3958915516_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		XDocumentType_t1853592271 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XDocumentType__ctor_m3958915516_RuntimeMethod_var);
	}

IL_0014:
	{
		XDocumentType_t1853592271 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_3();
		__this->set_name_3(L_3);
		XDocumentType_t1853592271 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_publicId_4();
		__this->set_publicId_4(L_5);
		XDocumentType_t1853592271 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_systemId_5();
		__this->set_systemId_5(L_7);
		XDocumentType_t1853592271 * L_8 = ___other0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_internalSubset_6();
		__this->set_internalSubset_6(L_9);
		XDocumentType_t1853592271 * L_10 = ___other0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_dtdInfo_7();
		__this->set_dtdInfo_7(L_11);
		return;
	}
}
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.IDtdInfo)
extern "C" IL2CPP_METHOD_ATTR void XDocumentType__ctor_m1639303547 (XDocumentType_t1853592271 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, RuntimeObject* ___dtdInfo4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType__ctor_m1639303547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocumentType__ctor_m1639303547_RuntimeMethod_var);
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___publicId1;
		String_t* L_2 = ___systemId2;
		String_t* L_3 = ___internalSubset3;
		XDocumentType__ctor_m4247116401(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___dtdInfo4;
		__this->set_dtdInfo_7(L_4);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XDocumentType::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XDocumentType_get_NodeType_m2244383995 (XDocumentType_t1853592271 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType_get_NodeType_m2244383995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocumentType_get_NodeType_m2244383995_RuntimeMethod_var);
	{
		return (int32_t)(((int32_t)10));
	}
}
// System.Void System.Xml.Linq.XDocumentType::WriteTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XDocumentType_WriteTo_m464390746 (XDocumentType_t1853592271 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType_WriteTo_m464390746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocumentType_WriteTo_m464390746_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XDocumentType_WriteTo_m464390746_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlWriter_t127905479 * L_2 = ___writer0;
		String_t* L_3 = __this->get_name_3();
		String_t* L_4 = __this->get_publicId_4();
		String_t* L_5 = __this->get_systemId_5();
		String_t* L_6 = __this->get_internalSubset_6();
		NullCheck(L_2);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XDocumentType::CloneNode()
extern "C" IL2CPP_METHOD_ATTR XNode_t716131460 * XDocumentType_CloneNode_m375119809 (XDocumentType_t1853592271 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType_CloneNode_m375119809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XDocumentType_CloneNode_m375119809_RuntimeMethod_var);
	{
		XDocumentType_t1853592271 * L_0 = (XDocumentType_t1853592271 *)il2cpp_codegen_object_new(XDocumentType_t1853592271_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m3958915516(L_0, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR void XElement__ctor_m643760410 (XElement_t4185968754 * __this, XName_t3751455998 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement__ctor_m643760410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement__ctor_m643760410_RuntimeMethod_var);
	{
		XContainer__ctor_m2392412783(__this, /*hidden argument*/NULL);
		XName_t3751455998 * L_0 = ___name0;
		bool L_1 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_0, (XName_t3751455998 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XElement__ctor_m643760410_RuntimeMethod_var);
	}

IL_001a:
	{
		XName_t3751455998 * L_3 = ___name0;
		__this->set_name_4(L_3);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR void XElement__ctor_m3926917909 (XElement_t4185968754 * __this, XElement_t4185968754 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement__ctor_m3926917909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement__ctor_m3926917909_RuntimeMethod_var);
	XAttribute_t355876829 * V_0 = NULL;
	{
		XElement_t4185968754 * L_0 = ___other0;
		XContainer__ctor_m1059702699(__this, L_0, /*hidden argument*/NULL);
		XElement_t4185968754 * L_1 = ___other0;
		NullCheck(L_1);
		XName_t3751455998 * L_2 = L_1->get_name_4();
		__this->set_name_4(L_2);
		XElement_t4185968754 * L_3 = ___other0;
		NullCheck(L_3);
		XAttribute_t355876829 * L_4 = L_3->get_lastAttr_5();
		V_0 = L_4;
		XAttribute_t355876829 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_001d:
	{
		XAttribute_t355876829 * L_6 = V_0;
		NullCheck(L_6);
		XAttribute_t355876829 * L_7 = L_6->get_next_2();
		V_0 = L_7;
		XAttribute_t355876829 * L_8 = V_0;
		XAttribute_t355876829 * L_9 = (XAttribute_t355876829 *)il2cpp_codegen_object_new(XAttribute_t355876829_il2cpp_TypeInfo_var);
		XAttribute__ctor_m4086971032(L_9, L_8, /*hidden argument*/NULL);
		XElement_AppendAttributeSkipNotify_m1943425946(__this, L_9, /*hidden argument*/NULL);
		XAttribute_t355876829 * L_10 = V_0;
		XElement_t4185968754 * L_11 = ___other0;
		NullCheck(L_11);
		XAttribute_t355876829 * L_12 = L_11->get_lastAttr_5();
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_10) == ((RuntimeObject*)(XAttribute_t355876829 *)L_12))))
		{
			goto IL_001d;
		}
	}

IL_0039:
	{
		return;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XElement_get_Name_m619912033 (XElement_t4185968754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_get_Name_m619912033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_get_Name_m619912033_RuntimeMethod_var);
	{
		XName_t3751455998 * L_0 = __this->get_name_4();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XElement::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XElement_get_NodeType_m1489408106 (XElement_t4185968754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_get_NodeType_m1489408106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_get_NodeType_m1489408106_RuntimeMethod_var);
	{
		return (int32_t)(1);
	}
}
// System.String System.Xml.Linq.XElement::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XElement_get_Value_m2366324488 (XElement_t4185968754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_get_Value_m2366324488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_get_Value_m2366324488_RuntimeMethod_var);
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	{
		RuntimeObject * L_0 = ((XContainer_t3387731002 *)__this)->get_content_3();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		RuntimeObject * L_2 = ((XContainer_t3387731002 *)__this)->get_content_3();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_001f:
	{
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		StringBuilder_t * L_6 = V_1;
		VirtActionInvoker1< StringBuilder_t * >::Invoke(9 /* System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder) */, __this, L_6);
		StringBuilder_t * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::Attribute(System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR XAttribute_t355876829 * XElement_Attribute_m3511762361 (XElement_t4185968754 * __this, XName_t3751455998 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_Attribute_m3511762361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_Attribute_m3511762361_RuntimeMethod_var);
	XAttribute_t355876829 * V_0 = NULL;
	{
		XAttribute_t355876829 * L_0 = __this->get_lastAttr_5();
		V_0 = L_0;
		XAttribute_t355876829 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}

IL_000a:
	{
		XAttribute_t355876829 * L_2 = V_0;
		NullCheck(L_2);
		XAttribute_t355876829 * L_3 = L_2->get_next_2();
		V_0 = L_3;
		XAttribute_t355876829 * L_4 = V_0;
		NullCheck(L_4);
		XName_t3751455998 * L_5 = L_4->get_name_3();
		XName_t3751455998 * L_6 = ___name0;
		bool L_7 = XName_op_Equality_m1536062490(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		XAttribute_t355876829 * L_8 = V_0;
		return L_8;
	}

IL_0021:
	{
		XAttribute_t355876829 * L_9 = V_0;
		XAttribute_t355876829 * L_10 = __this->get_lastAttr_5();
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_9) == ((RuntimeObject*)(XAttribute_t355876829 *)L_10))))
		{
			goto IL_000a;
		}
	}

IL_002a:
	{
		return (XAttribute_t355876829 *)NULL;
	}
}
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR String_t* XElement_GetPrefixOfNamespace_m2885939482 (XElement_t4185968754 * __this, XNamespace_t1843508170 * ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_GetPrefixOfNamespace_m2885939482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_GetPrefixOfNamespace_m2885939482_RuntimeMethod_var);
	String_t* V_0 = NULL;
	bool V_1 = false;
	XElement_t4185968754 * V_2 = NULL;
	XAttribute_t355876829 * V_3 = NULL;
	bool V_4 = false;
	{
		XNamespace_t1843508170 * L_0 = ___ns0;
		bool L_1 = XNamespace_op_Equality_m3113830840(NULL /*static, unused*/, L_0, (XNamespace_t1843508170 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3455563714, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XElement_GetPrefixOfNamespace_m2885939482_RuntimeMethod_var);
	}

IL_0014:
	{
		XNamespace_t1843508170 * L_3 = ___ns0;
		NullCheck(L_3);
		String_t* L_4 = XNamespace_get_NamespaceName_m2952101840(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = (bool)0;
		V_2 = __this;
	}

IL_001f:
	{
		XElement_t4185968754 * L_5 = V_2;
		NullCheck(L_5);
		XAttribute_t355876829 * L_6 = L_5->get_lastAttr_5();
		V_3 = L_6;
		XAttribute_t355876829 * L_7 = V_3;
		if (!L_7)
		{
			goto IL_008f;
		}
	}
	{
		V_4 = (bool)0;
	}

IL_002c:
	{
		XAttribute_t355876829 * L_8 = V_3;
		NullCheck(L_8);
		XAttribute_t355876829 * L_9 = L_8->get_next_2();
		V_3 = L_9;
		XAttribute_t355876829 * L_10 = V_3;
		NullCheck(L_10);
		bool L_11 = XAttribute_get_IsNamespaceDeclaration_m3726745643(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		XAttribute_t355876829 * L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13 = XAttribute_get_Value_m822045865(L_12, /*hidden argument*/NULL);
		String_t* L_14 = V_0;
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		XAttribute_t355876829 * L_16 = V_3;
		NullCheck(L_16);
		XName_t3751455998 * L_17 = XAttribute_get_Name_m2178653462(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = XName_get_NamespaceName_m1113219825(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		XAttribute_t355876829 * L_21 = V_3;
		NullCheck(L_21);
		XName_t3751455998 * L_22 = XAttribute_get_Name_m2178653462(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = XName_get_LocalName_m2163884361(L_22, /*hidden argument*/NULL);
		XElement_t4185968754 * L_24 = V_2;
		String_t* L_25 = XElement_GetNamespaceOfPrefixInScope_m800190849(__this, L_23, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_007e;
		}
	}

IL_0072:
	{
		XAttribute_t355876829 * L_26 = V_3;
		NullCheck(L_26);
		XName_t3751455998 * L_27 = XAttribute_get_Name_m2178653462(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28 = XName_get_LocalName_m2163884361(L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_007e:
	{
		V_4 = (bool)1;
	}

IL_0081:
	{
		XAttribute_t355876829 * L_29 = V_3;
		XElement_t4185968754 * L_30 = V_2;
		NullCheck(L_30);
		XAttribute_t355876829 * L_31 = L_30->get_lastAttr_5();
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_29) == ((RuntimeObject*)(XAttribute_t355876829 *)L_31))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_32 = V_1;
		bool L_33 = V_4;
		V_1 = (bool)((int32_t)((int32_t)L_32|(int32_t)L_33));
	}

IL_008f:
	{
		XElement_t4185968754 * L_34 = V_2;
		NullCheck(L_34);
		XContainer_t3387731002 * L_35 = ((XObject_t1119084474 *)L_34)->get_parent_0();
		V_2 = ((XElement_t4185968754 *)IsInstClass((RuntimeObject*)L_35, XElement_t4185968754_il2cpp_TypeInfo_var));
		XElement_t4185968754 * L_36 = V_2;
		if (L_36)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_37 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_37) == ((RuntimeObject*)(String_t*)_stringLiteral2984480440))))
		{
			goto IL_00bd;
		}
	}
	{
		bool L_38 = V_1;
		if (!L_38)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_39 = XElement_GetNamespaceOfPrefixInScope_m800190849(__this, _stringLiteral2909972470, (XElement_t4185968754 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00cb;
		}
	}

IL_00b7:
	{
		return _stringLiteral2909972470;
	}

IL_00bd:
	{
		String_t* L_40 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_40) == ((RuntimeObject*)(String_t*)_stringLiteral2829469855))))
		{
			goto IL_00cb;
		}
	}
	{
		return _stringLiteral3929236445;
	}

IL_00cb:
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.Linq.XElement::SetAttributeValue(System.Xml.Linq.XName,System.Object)
extern "C" IL2CPP_METHOD_ATTR void XElement_SetAttributeValue_m1466355986 (XElement_t4185968754 * __this, XName_t3751455998 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_SetAttributeValue_m1466355986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_SetAttributeValue_m1466355986_RuntimeMethod_var);
	XAttribute_t355876829 * V_0 = NULL;
	{
		XName_t3751455998 * L_0 = ___name0;
		XAttribute_t355876829 * L_1 = XElement_Attribute_m3511762361(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = ___value1;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		XAttribute_t355876829 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		XAttribute_t355876829 * L_4 = V_0;
		XElement_RemoveAttribute_m3798880449(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		XAttribute_t355876829 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		XAttribute_t355876829 * L_6 = V_0;
		RuntimeObject * L_7 = ___value1;
		String_t* L_8 = XContainer_GetStringValue_m4268288823(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		XAttribute_set_Value_m724377387(L_6, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		XName_t3751455998 * L_9 = ___name0;
		RuntimeObject * L_10 = ___value1;
		XAttribute_t355876829 * L_11 = (XAttribute_t355876829 *)il2cpp_codegen_object_new(XAttribute_t355876829_il2cpp_TypeInfo_var);
		XAttribute__ctor_m2609633652(L_11, L_9, L_10, /*hidden argument*/NULL);
		XElement_AppendAttribute_m78540157(__this, L_11, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement::WriteTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XElement_WriteTo_m3488799361 (XElement_t4185968754 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_WriteTo_m3488799361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_WriteTo_m3488799361_RuntimeMethod_var);
	ElementWriter_t1843505097  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XElement_WriteTo_m3488799361_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlWriter_t127905479 * L_2 = ___writer0;
		ElementWriter_t1843505097  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ElementWriter__ctor_m3451443409((&L_3), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ElementWriter_WriteElement_m2726179892((ElementWriter_t1843505097 *)(&V_0), __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::AppendAttribute(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XElement_AppendAttribute_m78540157 (XElement_t4185968754 * __this, XAttribute_t355876829 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_AppendAttribute_m78540157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_AppendAttribute_m78540157_RuntimeMethod_var);
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		XAttribute_t355876829 * L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t652714535 * L_1 = ((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->get_Add_2();
		bool L_2 = XObject_NotifyChanging_m2437571179(__this, L_0, L_1, /*hidden argument*/NULL);
		XAttribute_t355876829 * L_3 = ___a0;
		NullCheck(L_3);
		XContainer_t3387731002 * L_4 = ((XObject_t1119084474 *)L_3)->get_parent_0();
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral1321969992, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XElement_AppendAttribute_m78540157_RuntimeMethod_var);
	}

IL_0024:
	{
		XAttribute_t355876829 * L_7 = ___a0;
		XElement_AppendAttributeSkipNotify_m1943425946(__this, L_7, /*hidden argument*/NULL);
		if (!G_B2_0)
		{
			goto IL_003a;
		}
	}
	{
		XAttribute_t355876829 * L_8 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t652714535 * L_9 = ((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->get_Add_2();
		XObject_NotifyChanged_m1712984418(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement::AppendAttributeSkipNotify(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XElement_AppendAttributeSkipNotify_m1943425946 (XElement_t4185968754 * __this, XAttribute_t355876829 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_AppendAttributeSkipNotify_m1943425946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_AppendAttributeSkipNotify_m1943425946_RuntimeMethod_var);
	{
		XAttribute_t355876829 * L_0 = ___a0;
		NullCheck(L_0);
		((XObject_t1119084474 *)L_0)->set_parent_0(__this);
		XAttribute_t355876829 * L_1 = __this->get_lastAttr_5();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		XAttribute_t355876829 * L_2 = ___a0;
		XAttribute_t355876829 * L_3 = ___a0;
		NullCheck(L_2);
		L_2->set_next_2(L_3);
		goto IL_0035;
	}

IL_0018:
	{
		XAttribute_t355876829 * L_4 = ___a0;
		XAttribute_t355876829 * L_5 = __this->get_lastAttr_5();
		NullCheck(L_5);
		XAttribute_t355876829 * L_6 = L_5->get_next_2();
		NullCheck(L_4);
		L_4->set_next_2(L_6);
		XAttribute_t355876829 * L_7 = __this->get_lastAttr_5();
		XAttribute_t355876829 * L_8 = ___a0;
		NullCheck(L_7);
		L_7->set_next_2(L_8);
	}

IL_0035:
	{
		XAttribute_t355876829 * L_9 = ___a0;
		__this->set_lastAttr_5(L_9);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XElement::CloneNode()
extern "C" IL2CPP_METHOD_ATTR XNode_t716131460 * XElement_CloneNode_m287170390 (XElement_t4185968754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_CloneNode_m287170390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_CloneNode_m287170390_RuntimeMethod_var);
	{
		XElement_t4185968754 * L_0 = (XElement_t4185968754 *)il2cpp_codegen_object_new(XElement_t4185968754_il2cpp_TypeInfo_var);
		XElement__ctor_m3926917909(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.Linq.XElement::GetNamespaceOfPrefixInScope(System.String,System.Xml.Linq.XElement)
extern "C" IL2CPP_METHOD_ATTR String_t* XElement_GetNamespaceOfPrefixInScope_m800190849 (XElement_t4185968754 * __this, String_t* ___prefix0, XElement_t4185968754 * ___outOfScope1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_GetNamespaceOfPrefixInScope_m800190849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_GetNamespaceOfPrefixInScope_m800190849_RuntimeMethod_var);
	XElement_t4185968754 * V_0 = NULL;
	XAttribute_t355876829 * V_1 = NULL;
	{
		V_0 = __this;
		goto IL_004c;
	}

IL_0004:
	{
		XElement_t4185968754 * L_0 = V_0;
		NullCheck(L_0);
		XAttribute_t355876829 * L_1 = L_0->get_lastAttr_5();
		V_1 = L_1;
		XAttribute_t355876829 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0040;
		}
	}

IL_000e:
	{
		XAttribute_t355876829 * L_3 = V_1;
		NullCheck(L_3);
		XAttribute_t355876829 * L_4 = L_3->get_next_2();
		V_1 = L_4;
		XAttribute_t355876829 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = XAttribute_get_IsNamespaceDeclaration_m3726745643(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		XAttribute_t355876829 * L_7 = V_1;
		NullCheck(L_7);
		XName_t3751455998 * L_8 = XAttribute_get_Name_m2178653462(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = XName_get_LocalName_m2163884361(L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___prefix0;
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0037;
		}
	}
	{
		XAttribute_t355876829 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = XAttribute_get_Value_m822045865(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0037:
	{
		XAttribute_t355876829 * L_14 = V_1;
		XElement_t4185968754 * L_15 = V_0;
		NullCheck(L_15);
		XAttribute_t355876829 * L_16 = L_15->get_lastAttr_5();
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_14) == ((RuntimeObject*)(XAttribute_t355876829 *)L_16))))
		{
			goto IL_000e;
		}
	}

IL_0040:
	{
		XElement_t4185968754 * L_17 = V_0;
		NullCheck(L_17);
		XContainer_t3387731002 * L_18 = ((XObject_t1119084474 *)L_17)->get_parent_0();
		V_0 = ((XElement_t4185968754 *)IsInstClass((RuntimeObject*)L_18, XElement_t4185968754_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		XElement_t4185968754 * L_19 = V_0;
		XElement_t4185968754 * L_20 = ___outOfScope1;
		if ((!(((RuntimeObject*)(XElement_t4185968754 *)L_19) == ((RuntimeObject*)(XElement_t4185968754 *)L_20))))
		{
			goto IL_0004;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.Linq.XElement::RemoveAttribute(System.Xml.Linq.XAttribute)
extern "C" IL2CPP_METHOD_ATTR void XElement_RemoveAttribute_m3798880449 (XElement_t4185968754 * __this, XAttribute_t355876829 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_RemoveAttribute_m3798880449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_RemoveAttribute_m3798880449_RuntimeMethod_var);
	bool V_0 = false;
	XAttribute_t355876829 * V_1 = NULL;
	XAttribute_t355876829 * V_2 = NULL;
	{
		XAttribute_t355876829 * L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t652714535 * L_1 = ((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->get_Remove_3();
		bool L_2 = XObject_NotifyChanging_m2437571179(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		XAttribute_t355876829 * L_3 = ___a0;
		NullCheck(L_3);
		XContainer_t3387731002 * L_4 = ((XObject_t1119084474 *)L_3)->get_parent_0();
		if ((((RuntimeObject*)(XContainer_t3387731002 *)L_4) == ((RuntimeObject*)(XElement_t4185968754 *)__this)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_5 = Res_GetString_m1829098876(NULL /*static, unused*/, _stringLiteral1321969992, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XElement_RemoveAttribute_m3798880449_RuntimeMethod_var);
	}

IL_0026:
	{
		XAttribute_t355876829 * L_7 = __this->get_lastAttr_5();
		V_1 = L_7;
		goto IL_0031;
	}

IL_002f:
	{
		XAttribute_t355876829 * L_8 = V_2;
		V_1 = L_8;
	}

IL_0031:
	{
		XAttribute_t355876829 * L_9 = V_1;
		NullCheck(L_9);
		XAttribute_t355876829 * L_10 = L_9->get_next_2();
		XAttribute_t355876829 * L_11 = L_10;
		V_2 = L_11;
		XAttribute_t355876829 * L_12 = ___a0;
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_11) == ((RuntimeObject*)(XAttribute_t355876829 *)L_12))))
		{
			goto IL_002f;
		}
	}
	{
		XAttribute_t355876829 * L_13 = V_1;
		XAttribute_t355876829 * L_14 = ___a0;
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_13) == ((RuntimeObject*)(XAttribute_t355876829 *)L_14))))
		{
			goto IL_0049;
		}
	}
	{
		__this->set_lastAttr_5((XAttribute_t355876829 *)NULL);
		goto IL_0065;
	}

IL_0049:
	{
		XAttribute_t355876829 * L_15 = __this->get_lastAttr_5();
		XAttribute_t355876829 * L_16 = ___a0;
		if ((!(((RuntimeObject*)(XAttribute_t355876829 *)L_15) == ((RuntimeObject*)(XAttribute_t355876829 *)L_16))))
		{
			goto IL_0059;
		}
	}
	{
		XAttribute_t355876829 * L_17 = V_1;
		__this->set_lastAttr_5(L_17);
	}

IL_0059:
	{
		XAttribute_t355876829 * L_18 = V_1;
		XAttribute_t355876829 * L_19 = ___a0;
		NullCheck(L_19);
		XAttribute_t355876829 * L_20 = L_19->get_next_2();
		NullCheck(L_18);
		L_18->set_next_2(L_20);
	}

IL_0065:
	{
		XAttribute_t355876829 * L_21 = ___a0;
		NullCheck(L_21);
		((XObject_t1119084474 *)L_21)->set_parent_0((XContainer_t3387731002 *)NULL);
		XAttribute_t355876829 * L_22 = ___a0;
		NullCheck(L_22);
		L_22->set_next_2((XAttribute_t355876829 *)NULL);
		bool L_23 = V_0;
		if (!L_23)
		{
			goto IL_0083;
		}
	}
	{
		XAttribute_t355876829 * L_24 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t652714535 * L_25 = ((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->get_Remove_3();
		XObject_NotifyChanged_m1712984418(__this, L_24, L_25, /*hidden argument*/NULL);
	}

IL_0083:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement::SetEndElementLineInfo(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XElement_SetEndElementLineInfo_m3917701571 (XElement_t4185968754 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_SetEndElementLineInfo_m3917701571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_SetEndElementLineInfo_m3917701571_RuntimeMethod_var);
	{
		int32_t L_0 = ___lineNumber0;
		int32_t L_1 = ___linePosition1;
		LineInfoEndElementAnnotation_t493731080 * L_2 = (LineInfoEndElementAnnotation_t493731080 *)il2cpp_codegen_object_new(LineInfoEndElementAnnotation_t493731080_il2cpp_TypeInfo_var);
		LineInfoEndElementAnnotation__ctor_m4037848550(L_2, L_0, L_1, /*hidden argument*/NULL);
		XObject_AddAnnotation_m3707945256(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C" IL2CPP_METHOD_ATTR void XElement_ValidateNode_m267639648 (XElement_t4185968754 * __this, XNode_t716131460 * ___node0, XNode_t716131460 * ___previous1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_ValidateNode_m267639648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XElement_ValidateNode_m267639648_RuntimeMethod_var);
	{
		XNode_t716131460 * L_0 = ___node0;
		if (!((XDocument_t1376419702 *)IsInstClass((RuntimeObject*)L_0, XDocument_t1376419702_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		int32_t L_3 = ((int32_t)((int32_t)9));
		RuntimeObject * L_4 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		String_t* L_5 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral1473093608, L_2, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XElement_ValidateNode_m267639648_RuntimeMethod_var);
	}

IL_0028:
	{
		XNode_t716131460 * L_7 = ___node0;
		if (!((XDocumentType_t1853592271 *)IsInstClass((RuntimeObject*)L_7, XDocumentType_t1853592271_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		int32_t L_10 = ((int32_t)((int32_t)10));
		RuntimeObject * L_11 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		String_t* L_12 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral1473093608, L_9, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, XElement_ValidateNode_m267639648_RuntimeMethod_var);
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
// System.Void System.Xml.Linq.XName::.ctor(System.Xml.Linq.XNamespace,System.String)
extern "C" IL2CPP_METHOD_ATTR void XName__ctor_m10147428 (XName_t3751455998 * __this, XNamespace_t1843508170 * ___ns0, String_t* ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName__ctor_m10147428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName__ctor_m10147428_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XNamespace_t1843508170 * L_0 = ___ns0;
		__this->set_ns_0(L_0);
		String_t* L_1 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_2 = XmlConvert_VerifyNCName_m3085528481(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_localName_1(L_2);
		XNamespace_t1843508170 * L_3 = ___ns0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		String_t* L_5 = ___localName1;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		__this->set_hashCode_2(((int32_t)((int32_t)L_4^(int32_t)L_6)));
		return;
	}
}
// System.String System.Xml.Linq.XName::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m2163884361 (XName_t3751455998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_get_LocalName_m2163884361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_get_LocalName_m2163884361_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get_localName_1();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XName::get_Namespace()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XName_get_Namespace_m4023955522 (XName_t3751455998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_get_Namespace_m4023955522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_get_Namespace_m4023955522_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = __this->get_ns_0();
		return L_0;
	}
}
// System.String System.Xml.Linq.XName::get_NamespaceName()
extern "C" IL2CPP_METHOD_ATTR String_t* XName_get_NamespaceName_m1113219825 (XName_t3751455998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_get_NamespaceName_m1113219825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_get_NamespaceName_m1113219825_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = __this->get_ns_0();
		NullCheck(L_0);
		String_t* L_1 = XNamespace_get_NamespaceName_m2952101840(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.Linq.XName::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XName_ToString_m2643581250 (XName_t3751455998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_ToString_m2643581250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_ToString_m2643581250_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = __this->get_ns_0();
		NullCheck(L_0);
		String_t* L_1 = XNamespace_get_NamespaceName_m2952101840(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = __this->get_localName_1();
		return L_3;
	}

IL_0019:
	{
		XNamespace_t1843508170 * L_4 = __this->get_ns_0();
		NullCheck(L_4);
		String_t* L_5 = XNamespace_get_NamespaceName_m2952101840(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_localName_1();
		String_t* L_7 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3452614613, L_5, _stringLiteral3452614611, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XName_Get_m1522378289 (RuntimeObject * __this /* static, unused */, String_t* ___expandedName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_Get_m1522378289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_Get_m1522378289_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___expandedName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3634912706, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XName_Get_m1522378289_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___expandedName0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		String_t* L_6 = ___expandedName0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral3298996753, L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, XName_Get_m1522378289_RuntimeMethod_var);
	}

IL_0030:
	{
		String_t* L_9 = ___expandedName0;
		NullCheck(L_9);
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_9, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_11 = ___expandedName0;
		NullCheck(L_11);
		int32_t L_12 = String_LastIndexOf_m3451222878(L_11, ((int32_t)125), /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_14 = V_0;
		String_t* L_15 = ___expandedName0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))))
		{
			goto IL_006d;
		}
	}

IL_0053:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		String_t* L_19 = ___expandedName0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		String_t* L_20 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral3298996753, L_18, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_21 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, XName_Get_m1522378289_RuntimeMethod_var);
	}

IL_006d:
	{
		String_t* L_22 = ___expandedName0;
		int32_t L_23 = V_0;
		XNamespace_t1843508170 * L_24 = XNamespace_Get_m2806450384(NULL /*static, unused*/, L_22, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_25 = ___expandedName0;
		int32_t L_26 = V_0;
		String_t* L_27 = ___expandedName0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		NullCheck(L_24);
		XName_t3751455998 * L_30 = XNamespace_GetName_m1518993676(L_24, L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), (int32_t)1)), /*hidden argument*/NULL);
		return L_30;
	}

IL_008b:
	{
		XNamespace_t1843508170 * L_31 = XNamespace_get_None_m394397613(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_32 = ___expandedName0;
		NullCheck(L_31);
		XName_t3751455998 * L_33 = XNamespace_GetName_m1445243739(L_31, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::op_Implicit(System.String)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XName_op_Implicit_m4126397159 (RuntimeObject * __this /* static, unused */, String_t* ___expandedName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_op_Implicit_m4126397159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_op_Implicit_m4126397159_RuntimeMethod_var);
	{
		String_t* L_0 = ___expandedName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (XName_t3751455998 *)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___expandedName0;
		XName_t3751455998 * L_2 = XName_Get_m1522378289(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.Linq.XName::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XName_Equals_m2715300575 (XName_t3751455998 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_Equals_m2715300575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_Equals_m2715300575_RuntimeMethod_var);
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(XName_t3751455998 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XName::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XName_GetHashCode_m2555446476 (XName_t3751455998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_GetHashCode_m2555446476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_GetHashCode_m2555446476_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_hashCode_2();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR bool XName_op_Equality_m1536062490 (RuntimeObject * __this /* static, unused */, XName_t3751455998 * ___left0, XName_t3751455998 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_op_Equality_m1536062490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_op_Equality_m1536062490_RuntimeMethod_var);
	{
		XName_t3751455998 * L_0 = ___left0;
		XName_t3751455998 * L_1 = ___right1;
		return (bool)((((RuntimeObject*)(XName_t3751455998 *)L_0) == ((RuntimeObject*)(XName_t3751455998 *)L_1))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XName::System.IEquatable<System.Xml.Linq.XName>.Equals(System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR bool XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_m923065646 (XName_t3751455998 * __this, XName_t3751455998 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_m923065646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_m923065646_RuntimeMethod_var);
	{
		XName_t3751455998 * L_0 = ___other0;
		return (bool)((((RuntimeObject*)(XName_t3751455998 *)__this) == ((RuntimeObject*)(XName_t3751455998 *)L_0))? 1 : 0);
	}
}
// System.Void System.Xml.Linq.XName::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void XName_System_Runtime_Serialization_ISerializable_GetObjectData_m2812957368 (XName_t3751455998 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_System_Runtime_Serialization_ISerializable_GetObjectData_m2812957368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XName_System_Runtime_Serialization_ISerializable_GetObjectData_m2812957368_RuntimeMethod_var);
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XName_System_Runtime_Serialization_ISerializable_GetObjectData_m2812957368_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m2872281893(L_2, _stringLiteral62725243, L_3, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (NameSerializer_t1284368626_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_SetType_m3923964808(L_4, L_6, /*hidden argument*/NULL);
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
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XNamespace__ctor_m1972467617 (XNamespace_t1843508170 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace__ctor_m1972467617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace__ctor_m1972467617_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___namespaceName0;
		__this->set_namespaceName_4(L_0);
		String_t* L_1 = ___namespaceName0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		__this->set_hashCode_5(L_2);
		intptr_t L_3 = (intptr_t)XNamespace_ExtractLocalName_m2332148048_RuntimeMethod_var;
		ExtractKeyDelegate_t3535032598 * L_4 = (ExtractKeyDelegate_t3535032598 *)il2cpp_codegen_object_new(ExtractKeyDelegate_t3535032598_il2cpp_TypeInfo_var);
		ExtractKeyDelegate__ctor_m1028128969(L_4, NULL, L_3, /*hidden argument*/ExtractKeyDelegate__ctor_m1028128969_RuntimeMethod_var);
		XHashtable_1_t2293621225 * L_5 = (XHashtable_1_t2293621225 *)il2cpp_codegen_object_new(XHashtable_1_t2293621225_il2cpp_TypeInfo_var);
		XHashtable_1__ctor_m2987613868(L_5, L_4, 8, /*hidden argument*/XHashtable_1__ctor_m2987613868_RuntimeMethod_var);
		__this->set_names_6(L_5);
		return;
	}
}
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
extern "C" IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_m2952101840 (XNamespace_t1843508170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_get_NamespaceName_m2952101840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_get_NamespaceName_m2952101840_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XNamespace_GetName_m1445243739 (XNamespace_t1843508170 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_GetName_m1445243739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_GetName_m1445243739_RuntimeMethod_var);
	{
		String_t* L_0 = ___localName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2412661638, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XNamespace_GetName_m1445243739_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___localName0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		XName_t3751455998 * L_5 = XNamespace_GetName_m1518993676(__this, L_2, 0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Xml.Linq.XNamespace::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XNamespace_ToString_m4281238012 (XNamespace_t1843508170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_ToString_m4281238012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_ToString_m4281238012_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_get_None_m394397613 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_get_None_m394397613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_get_None_m394397613_RuntimeMethod_var);
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XNamespace_t1843508170 * L_1 = XNamespace_EnsureNamespace_m3490636692(NULL /*static, unused*/, (WeakReference_t1334886716 **)(((XNamespace_t1843508170_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1843508170_il2cpp_TypeInfo_var))->get_address_of_refNone_1()), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xml()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_get_Xml_m937341851 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_get_Xml_m937341851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_get_Xml_m937341851_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = XNamespace_EnsureNamespace_m3490636692(NULL /*static, unused*/, (WeakReference_t1334886716 **)(((XNamespace_t1843508170_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1843508170_il2cpp_TypeInfo_var))->get_address_of_refXml_2()), _stringLiteral2984480440, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_get_Xmlns_m2148974693 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_get_Xmlns_m2148974693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_get_Xmlns_m2148974693_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = XNamespace_EnsureNamespace_m3490636692(NULL /*static, unused*/, (WeakReference_t1334886716 **)(((XNamespace_t1843508170_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1843508170_il2cpp_TypeInfo_var))->get_address_of_refXmlns_3()), _stringLiteral2829469855, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_Get_m9299589 (RuntimeObject * __this /* static, unused */, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_Get_m9299589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_Get_m9299589_RuntimeMethod_var);
	{
		String_t* L_0 = ___namespaceName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1875761611, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XNamespace_Get_m9299589_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___namespaceName0;
		String_t* L_3 = ___namespaceName0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		XNamespace_t1843508170 * L_5 = XNamespace_Get_m2806450384(NULL /*static, unused*/, L_2, 0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::op_Implicit(System.String)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_op_Implicit_m1109018013 (RuntimeObject * __this /* static, unused */, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_op_Implicit_m1109018013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_op_Implicit_m1109018013_RuntimeMethod_var);
	{
		String_t* L_0 = ___namespaceName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (XNamespace_t1843508170 *)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___namespaceName0;
		XNamespace_t1843508170 * L_2 = XNamespace_Get_m9299589(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::op_Addition(System.Xml.Linq.XNamespace,System.String)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XNamespace_op_Addition_m245057238 (RuntimeObject * __this /* static, unused */, XNamespace_t1843508170 * ___ns0, String_t* ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_op_Addition_m245057238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_op_Addition_m245057238_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = ___ns0;
		bool L_1 = XNamespace_op_Equality_m3113830840(NULL /*static, unused*/, L_0, (XNamespace_t1843508170 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3455563714, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XNamespace_op_Addition_m245057238_RuntimeMethod_var);
	}

IL_0014:
	{
		XNamespace_t1843508170 * L_3 = ___ns0;
		String_t* L_4 = ___localName1;
		NullCheck(L_3);
		XName_t3751455998 * L_5 = XNamespace_GetName_m1445243739(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XNamespace_Equals_m291863040 (XNamespace_t1843508170 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_Equals_m291863040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_Equals_m291863040_RuntimeMethod_var);
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(XNamespace_t1843508170 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XNamespace::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XNamespace_GetHashCode_m4127606670 (XNamespace_t1843508170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_GetHashCode_m4127606670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_GetHashCode_m4127606670_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_hashCode_5();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR bool XNamespace_op_Equality_m3113830840 (RuntimeObject * __this /* static, unused */, XNamespace_t1843508170 * ___left0, XNamespace_t1843508170 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_op_Equality_m3113830840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_op_Equality_m3113830840_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = ___left0;
		XNamespace_t1843508170 * L_1 = ___right1;
		return (bool)((((RuntimeObject*)(XNamespace_t1843508170 *)L_0) == ((RuntimeObject*)(XNamespace_t1843508170 *)L_1))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C" IL2CPP_METHOD_ATTR bool XNamespace_op_Inequality_m3269657107 (RuntimeObject * __this /* static, unused */, XNamespace_t1843508170 * ___left0, XNamespace_t1843508170 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_op_Inequality_m3269657107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_op_Inequality_m3269657107_RuntimeMethod_var);
	{
		XNamespace_t1843508170 * L_0 = ___left0;
		XNamespace_t1843508170 * L_1 = ___right1;
		return (bool)((((int32_t)((((RuntimeObject*)(XNamespace_t1843508170 *)L_0) == ((RuntimeObject*)(XNamespace_t1843508170 *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR XName_t3751455998 * XNamespace_GetName_m1518993676 (XNamespace_t1843508170 * __this, String_t* ___localName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_GetName_m1518993676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_GetName_m1518993676_RuntimeMethod_var);
	XName_t3751455998 * V_0 = NULL;
	{
		XHashtable_1_t2293621225 * L_0 = __this->get_names_6();
		String_t* L_1 = ___localName0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		bool L_4 = XHashtable_1_TryGetValue_m3827769208(L_0, L_1, L_2, L_3, (XName_t3751455998 **)(&V_0), /*hidden argument*/XHashtable_1_TryGetValue_m3827769208_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		XName_t3751455998 * L_5 = V_0;
		return L_5;
	}

IL_0014:
	{
		XHashtable_1_t2293621225 * L_6 = __this->get_names_6();
		String_t* L_7 = ___localName0;
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m1610150815(L_7, L_8, L_9, /*hidden argument*/NULL);
		XName_t3751455998 * L_11 = (XName_t3751455998 *)il2cpp_codegen_object_new(XName_t3751455998_il2cpp_TypeInfo_var);
		XName__ctor_m10147428(L_11, __this, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		XName_t3751455998 * L_12 = XHashtable_1_Add_m3409537762(L_6, L_11, /*hidden argument*/XHashtable_1_Add_m3409537762_RuntimeMethod_var);
		return L_12;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_Get_m2806450384 (RuntimeObject * __this /* static, unused */, String_t* ___namespaceName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_Get_m2806450384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_Get_m2806450384_RuntimeMethod_var);
	WeakReference_t1334886716 * V_0 = NULL;
	XNamespace_t1843508170 * V_1 = NULL;
	XNamespace_t1843508170 * G_B15_0 = NULL;
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		XNamespace_t1843508170 * L_1 = XNamespace_get_None_m394397613(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0009:
	{
		XHashtable_1_t4172019239 * L_2 = ((XNamespace_t1843508170_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1843508170_il2cpp_TypeInfo_var))->get_namespaces_0();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		intptr_t L_3 = (intptr_t)XNamespace_ExtractNamespace_m1191667730_RuntimeMethod_var;
		ExtractKeyDelegate_t1118463316 * L_4 = (ExtractKeyDelegate_t1118463316 *)il2cpp_codegen_object_new(ExtractKeyDelegate_t1118463316_il2cpp_TypeInfo_var);
		ExtractKeyDelegate__ctor_m2194429002(L_4, NULL, L_3, /*hidden argument*/ExtractKeyDelegate__ctor_m2194429002_RuntimeMethod_var);
		XHashtable_1_t4172019239 * L_5 = (XHashtable_1_t4172019239 *)il2cpp_codegen_object_new(XHashtable_1_t4172019239_il2cpp_TypeInfo_var);
		XHashtable_1__ctor_m3583225800(L_5, L_4, ((int32_t)32), /*hidden argument*/XHashtable_1__ctor_m3583225800_RuntimeMethod_var);
		InterlockedCompareExchangeImpl<XHashtable_1_t4172019239 *>((XHashtable_1_t4172019239 **)(((XNamespace_t1843508170_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1843508170_il2cpp_TypeInfo_var))->get_address_of_namespaces_0()), L_5, (XHashtable_1_t4172019239 *)NULL);
	}

IL_002f:
	{
		XHashtable_1_t4172019239 * L_6 = ((XNamespace_t1843508170_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1843508170_il2cpp_TypeInfo_var))->get_namespaces_0();
		String_t* L_7 = ___namespaceName0;
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		NullCheck(L_6);
		bool L_10 = XHashtable_1_TryGetValue_m935372797(L_6, L_7, L_8, L_9, (WeakReference_t1334886716 **)(&V_0), /*hidden argument*/XHashtable_1_TryGetValue_m935372797_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_11 = ___count2;
		NullCheck(_stringLiteral2984480440);
		int32_t L_12 = String_get_Length_m3847582255(_stringLiteral2984480440, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_13 = ___namespaceName0;
		int32_t L_14 = ___index1;
		int32_t L_15 = ___count2;
		int32_t L_16 = String_CompareOrdinal_m1012192092(NULL /*static, unused*/, L_13, L_14, _stringLiteral2984480440, 0, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0063;
		}
	}
	{
		XNamespace_t1843508170 * L_17 = XNamespace_get_Xml_m937341851(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_17;
	}

IL_0063:
	{
		int32_t L_18 = ___count2;
		NullCheck(_stringLiteral2829469855);
		int32_t L_19 = String_get_Length_m3847582255(_stringLiteral2829469855, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_20 = ___namespaceName0;
		int32_t L_21 = ___index1;
		int32_t L_22 = ___count2;
		int32_t L_23 = String_CompareOrdinal_m1012192092(NULL /*static, unused*/, L_20, L_21, _stringLiteral2829469855, 0, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0086;
		}
	}
	{
		XNamespace_t1843508170 * L_24 = XNamespace_get_Xmlns_m2148974693(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_24;
	}

IL_0086:
	{
		XHashtable_1_t4172019239 * L_25 = ((XNamespace_t1843508170_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1843508170_il2cpp_TypeInfo_var))->get_namespaces_0();
		String_t* L_26 = ___namespaceName0;
		int32_t L_27 = ___index1;
		int32_t L_28 = ___count2;
		NullCheck(L_26);
		String_t* L_29 = String_Substring_m1610150815(L_26, L_27, L_28, /*hidden argument*/NULL);
		XNamespace_t1843508170 * L_30 = (XNamespace_t1843508170 *)il2cpp_codegen_object_new(XNamespace_t1843508170_il2cpp_TypeInfo_var);
		XNamespace__ctor_m1972467617(L_30, L_29, /*hidden argument*/NULL);
		WeakReference_t1334886716 * L_31 = (WeakReference_t1334886716 *)il2cpp_codegen_object_new(WeakReference_t1334886716_il2cpp_TypeInfo_var);
		WeakReference__ctor_m2401547918(L_31, L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		WeakReference_t1334886716 * L_32 = XHashtable_1_Add_m2203465367(L_25, L_31, /*hidden argument*/XHashtable_1_Add_m2203465367_RuntimeMethod_var);
		V_0 = L_32;
	}

IL_00a3:
	{
		WeakReference_t1334886716 * L_33 = V_0;
		if (L_33)
		{
			goto IL_00a9;
		}
	}
	{
		G_B15_0 = ((XNamespace_t1843508170 *)(NULL));
		goto IL_00b4;
	}

IL_00a9:
	{
		WeakReference_t1334886716 * L_34 = V_0;
		NullCheck(L_34);
		RuntimeObject * L_35 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_34);
		G_B15_0 = ((XNamespace_t1843508170 *)CastclassSealed((RuntimeObject*)L_35, XNamespace_t1843508170_il2cpp_TypeInfo_var));
	}

IL_00b4:
	{
		V_1 = G_B15_0;
		XNamespace_t1843508170 * L_36 = V_1;
		bool L_37 = XNamespace_op_Equality_m3113830840(NULL /*static, unused*/, L_36, (XNamespace_t1843508170 *)NULL, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_002f;
		}
	}
	{
		XNamespace_t1843508170 * L_38 = V_1;
		return L_38;
	}
}
// System.String System.Xml.Linq.XNamespace::ExtractLocalName(System.Xml.Linq.XName)
extern "C" IL2CPP_METHOD_ATTR String_t* XNamespace_ExtractLocalName_m2332148048 (RuntimeObject * __this /* static, unused */, XName_t3751455998 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_ExtractLocalName_m2332148048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_ExtractLocalName_m2332148048_RuntimeMethod_var);
	{
		XName_t3751455998 * L_0 = ___n0;
		NullCheck(L_0);
		String_t* L_1 = XName_get_LocalName_m2163884361(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.Linq.XNamespace::ExtractNamespace(System.WeakReference)
extern "C" IL2CPP_METHOD_ATTR String_t* XNamespace_ExtractNamespace_m1191667730 (RuntimeObject * __this /* static, unused */, WeakReference_t1334886716 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_ExtractNamespace_m1191667730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_ExtractNamespace_m1191667730_RuntimeMethod_var);
	XNamespace_t1843508170 * V_0 = NULL;
	{
		WeakReference_t1334886716 * L_0 = ___r0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		WeakReference_t1334886716 * L_1 = ___r0;
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_1);
		XNamespace_t1843508170 * L_3 = ((XNamespace_t1843508170 *)CastclassSealed((RuntimeObject*)L_2, XNamespace_t1843508170_il2cpp_TypeInfo_var));
		V_0 = L_3;
		bool L_4 = XNamespace_op_Equality_m3113830840(NULL /*static, unused*/, L_3, (XNamespace_t1843508170 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (String_t*)NULL;
	}

IL_001a:
	{
		XNamespace_t1843508170 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = XNamespace_get_NamespaceName_m2952101840(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::EnsureNamespace(System.WeakReference&,System.String)
extern "C" IL2CPP_METHOD_ATTR XNamespace_t1843508170 * XNamespace_EnsureNamespace_m3490636692 (RuntimeObject * __this /* static, unused */, WeakReference_t1334886716 ** ___refNmsp0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_EnsureNamespace_m3490636692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNamespace_EnsureNamespace_m3490636692_RuntimeMethod_var);
	WeakReference_t1334886716 * V_0 = NULL;
	XNamespace_t1843508170 * V_1 = NULL;

IL_0000:
	{
		WeakReference_t1334886716 ** L_0 = ___refNmsp0;
		WeakReference_t1334886716 * L_1 = *((WeakReference_t1334886716 **)L_0);
		V_0 = L_1;
		WeakReference_t1334886716 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		WeakReference_t1334886716 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_3);
		V_1 = ((XNamespace_t1843508170 *)CastclassSealed((RuntimeObject*)L_4, XNamespace_t1843508170_il2cpp_TypeInfo_var));
		XNamespace_t1843508170 * L_5 = V_1;
		bool L_6 = XNamespace_op_Inequality_m3269657107(NULL /*static, unused*/, L_5, (XNamespace_t1843508170 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		XNamespace_t1843508170 * L_7 = V_1;
		return L_7;
	}

IL_001d:
	{
		WeakReference_t1334886716 ** L_8 = ___refNmsp0;
		String_t* L_9 = ___namespaceName1;
		XNamespace_t1843508170 * L_10 = (XNamespace_t1843508170 *)il2cpp_codegen_object_new(XNamespace_t1843508170_il2cpp_TypeInfo_var);
		XNamespace__ctor_m1972467617(L_10, L_9, /*hidden argument*/NULL);
		WeakReference_t1334886716 * L_11 = (WeakReference_t1334886716 *)il2cpp_codegen_object_new(WeakReference_t1334886716_il2cpp_TypeInfo_var);
		WeakReference__ctor_m2401547918(L_11, L_10, /*hidden argument*/NULL);
		WeakReference_t1334886716 * L_12 = V_0;
		InterlockedCompareExchangeImpl<WeakReference_t1334886716 *>((WeakReference_t1334886716 **)L_8, L_11, L_12);
		goto IL_0000;
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
// System.Void System.Xml.Linq.XNode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XNode__ctor_m2640711240 (XNode_t716131460 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode__ctor_m2640711240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNode__ctor_m2640711240_RuntimeMethod_var);
	{
		XObject__ctor_m1122439361(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.Linq.XNode::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XNode_ToString_m3831992069 (XNode_t716131460 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode_ToString_m3831992069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNode_ToString_m3831992069_RuntimeMethod_var);
	{
		int32_t L_0 = XObject_GetSaveOptionsFromAnnotations_m2533200236(__this, /*hidden argument*/NULL);
		String_t* L_1 = XNode_GetXmlString_m3314186111(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void XNode_AppendText_m2610480790 (XNode_t716131460 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode_AppendText_m2610480790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNode_AppendText_m2610480790_RuntimeMethod_var);
	{
		return;
	}
}
// System.Xml.XmlReaderSettings System.Xml.Linq.XNode::GetXmlReaderSettings(System.Xml.Linq.LoadOptions)
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_t2186285234 * XNode_GetXmlReaderSettings_m1372944662 (RuntimeObject * __this /* static, unused */, int32_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode_GetXmlReaderSettings_m1372944662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNode_GetXmlReaderSettings_m1372944662_RuntimeMethod_var);
	XmlReaderSettings_t2186285234 * V_0 = NULL;
	{
		XmlReaderSettings_t2186285234 * L_0 = (XmlReaderSettings_t2186285234 *)il2cpp_codegen_object_new(XmlReaderSettings_t2186285234_il2cpp_TypeInfo_var);
		XmlReaderSettings__ctor_m3137625896(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___o0;
		if (((int32_t)((int32_t)L_1&(int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		XmlReaderSettings_t2186285234 * L_2 = V_0;
		NullCheck(L_2);
		XmlReaderSettings_set_IgnoreWhitespace_m519251602(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		XmlReaderSettings_t2186285234 * L_3 = V_0;
		NullCheck(L_3);
		XmlReaderSettings_set_DtdProcessing_m3380020100(L_3, 2, /*hidden argument*/NULL);
		XmlReaderSettings_t2186285234 * L_4 = V_0;
		NullCheck(L_4);
		XmlReaderSettings_set_MaxCharactersFromEntities_m2434535626(L_4, (((int64_t)((int64_t)((int32_t)10000000)))), /*hidden argument*/NULL);
		XmlReaderSettings_t2186285234 * L_5 = V_0;
		NullCheck(L_5);
		XmlReaderSettings_set_XmlResolver_m522760227(L_5, (XmlResolver_t626023767 *)NULL, /*hidden argument*/NULL);
		XmlReaderSettings_t2186285234 * L_6 = V_0;
		return L_6;
	}
}
// System.String System.Xml.Linq.XNode::GetXmlString(System.Xml.Linq.SaveOptions)
extern "C" IL2CPP_METHOD_ATTR String_t* XNode_GetXmlString_m3314186111 (XNode_t716131460 * __this, int32_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode_GetXmlString_m3314186111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XNode_GetXmlString_m3314186111_RuntimeMethod_var);
	StringWriter_t802263757 * V_0 = NULL;
	XmlWriterSettings_t3314986516 * V_1 = NULL;
	XmlWriter_t127905479 * V_2 = NULL;
	XDocument_t1376419702 * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringWriter_t802263757 * L_1 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m2474332877(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			XmlWriterSettings_t3314986516 * L_2 = (XmlWriterSettings_t3314986516 *)il2cpp_codegen_object_new(XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var);
			XmlWriterSettings__ctor_m2465852079(L_2, /*hidden argument*/NULL);
			V_1 = L_2;
			XmlWriterSettings_t3314986516 * L_3 = V_1;
			NullCheck(L_3);
			XmlWriterSettings_set_OmitXmlDeclaration_m605658549(L_3, (bool)1, /*hidden argument*/NULL);
			int32_t L_4 = ___o0;
			if (((int32_t)((int32_t)L_4&(int32_t)1)))
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			XmlWriterSettings_t3314986516 * L_5 = V_1;
			NullCheck(L_5);
			XmlWriterSettings_set_Indent_m2801213143(L_5, (bool)1, /*hidden argument*/NULL);
		}

IL_0024:
		{
			int32_t L_6 = ___o0;
			if (!((int32_t)((int32_t)L_6&(int32_t)2)))
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			XmlWriterSettings_t3314986516 * L_7 = V_1;
			XmlWriterSettings_t3314986516 * L_8 = L_7;
			NullCheck(L_8);
			int32_t L_9 = XmlWriterSettings_get_NamespaceHandling_m2805092960(L_8, /*hidden argument*/NULL);
			NullCheck(L_8);
			XmlWriterSettings_set_NamespaceHandling_m1591779902(L_8, ((int32_t)((int32_t)L_9|(int32_t)1)), /*hidden argument*/NULL);
		}

IL_0037:
		{
			if (!((XText_t1448860321 *)IsInstClass((RuntimeObject*)__this, XText_t1448860321_il2cpp_TypeInfo_var)))
			{
				goto IL_0046;
			}
		}

IL_003f:
		{
			XmlWriterSettings_t3314986516 * L_10 = V_1;
			NullCheck(L_10);
			XmlWriterSettings_set_ConformanceLevel_m2379836262(L_10, 1, /*hidden argument*/NULL);
		}

IL_0046:
		{
			StringWriter_t802263757 * L_11 = V_0;
			XmlWriterSettings_t3314986516 * L_12 = V_1;
			XmlWriter_t127905479 * L_13 = XmlWriter_Create_m1754013770(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
			V_2 = L_13;
		}

IL_004e:
		try
		{ // begin try (depth: 2)
			{
				V_3 = ((XDocument_t1376419702 *)IsInstClass((RuntimeObject*)__this, XDocument_t1376419702_il2cpp_TypeInfo_var));
				XDocument_t1376419702 * L_14 = V_3;
				if (!L_14)
				{
					goto IL_0061;
				}
			}

IL_0058:
			{
				XDocument_t1376419702 * L_15 = V_3;
				XmlWriter_t127905479 * L_16 = V_2;
				NullCheck(L_15);
				XContainer_WriteContentTo_m3843093128(L_15, L_16, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x74, FINALLY_006a);
			}

IL_0061:
			{
				XmlWriter_t127905479 * L_17 = V_2;
				VirtActionInvoker1< XmlWriter_t127905479 * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, __this, L_17);
				IL2CPP_LEAVE(0x74, FINALLY_006a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006a;
		}

FINALLY_006a:
		{ // begin finally (depth: 2)
			{
				XmlWriter_t127905479 * L_18 = V_2;
				if (!L_18)
				{
					goto IL_0073;
				}
			}

IL_006d:
			{
				XmlWriter_t127905479 * L_19 = V_2;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_19);
			}

IL_0073:
			{
				IL2CPP_END_FINALLY(106)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(106)
		{
			IL2CPP_JUMP_TBL(0x74, IL_0074)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0074:
		{
			StringWriter_t802263757 * L_20 = V_0;
			NullCheck(L_20);
			String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
			V_4 = L_21;
			IL2CPP_LEAVE(0x88, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			StringWriter_t802263757 * L_22 = V_0;
			if (!L_22)
			{
				goto IL_0087;
			}
		}

IL_0081:
		{
			StringWriter_t802263757 * L_23 = V_0;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_0087:
		{
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x88, IL_0088)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0088:
	{
		String_t* L_24 = V_4;
		return L_24;
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
// System.Void System.Xml.Linq.XObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XObject__ctor_m1122439361 (XObject_t1119084474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject__ctor_m1122439361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject__ctor_m1122439361_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.Linq.XObject::get_BaseUri()
extern "C" IL2CPP_METHOD_ATTR String_t* XObject_get_BaseUri_m1095757722 (XObject_t1119084474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_get_BaseUri_m1095757722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_get_BaseUri_m1095757722_RuntimeMethod_var);
	XObject_t1119084474 * V_0 = NULL;
	BaseUriAnnotation_t3843949084 * V_1 = NULL;
	{
		V_0 = __this;
		goto IL_000b;
	}

IL_0004:
	{
		XObject_t1119084474 * L_0 = V_0;
		NullCheck(L_0);
		XContainer_t3387731002 * L_1 = L_0->get_parent_0();
		V_0 = L_1;
	}

IL_000b:
	{
		XObject_t1119084474 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		XObject_t1119084474 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0004;
		}
	}

IL_0016:
	{
		XObject_t1119084474 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		XObject_t1119084474 * L_6 = V_0;
		NullCheck(L_6);
		BaseUriAnnotation_t3843949084 * L_7 = XObject_Annotation_TisBaseUriAnnotation_t3843949084_m4137211088(L_6, /*hidden argument*/XObject_Annotation_TisBaseUriAnnotation_t3843949084_m4137211088_RuntimeMethod_var);
		V_1 = L_7;
		BaseUriAnnotation_t3843949084 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		BaseUriAnnotation_t3843949084 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_baseUri_0();
		return L_10;
	}

IL_002a:
	{
		XObject_t1119084474 * L_11 = V_0;
		NullCheck(L_11);
		XContainer_t3387731002 * L_12 = L_11->get_parent_0();
		V_0 = L_12;
		goto IL_000b;
	}

IL_0033:
	{
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_13;
	}
}
// System.Void System.Xml.Linq.XObject::AddAnnotation(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XObject_AddAnnotation_m3707945256 (XObject_t1119084474 * __this, RuntimeObject * ___annotation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_AddAnnotation_m3707945256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_AddAnnotation_m3707945256_RuntimeMethod_var);
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	XObject_t1119084474 * G_B5_0 = NULL;
	XObject_t1119084474 * G_B4_0 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	XObject_t1119084474 * G_B6_1 = NULL;
	{
		RuntimeObject * L_0 = ___annotation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1102688753, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XObject_AddAnnotation_m3707945256_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject * L_2 = __this->get_annotations_1();
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject * L_3 = ___annotation0;
		G_B4_0 = __this;
		if (((ObjectU5BU5D_t2843939325*)IsInst((RuntimeObject*)L_3, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)))
		{
			G_B5_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_4 = ___annotation0;
		G_B6_0 = L_4;
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		RuntimeObject * L_7 = ___annotation0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		G_B6_0 = ((RuntimeObject *)(L_6));
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_annotations_1(G_B6_0);
		return;
	}

IL_0032:
	{
		RuntimeObject * L_8 = __this->get_annotations_1();
		V_0 = ((ObjectU5BU5D_t2843939325*)IsInst((RuntimeObject*)L_8, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t2843939325* L_9 = V_0;
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		RuntimeObject * L_12 = __this->get_annotations_1();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_11;
		RuntimeObject * L_14 = ___annotation0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		__this->set_annotations_1((RuntimeObject *)L_13);
		return;
	}

IL_005b:
	{
		V_1 = 0;
		goto IL_0063;
	}

IL_005f:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_16 = V_1;
		ObjectU5BU5D_t2843939325* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_006e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if (L_21)
		{
			goto IL_005f;
		}
	}

IL_006e:
	{
		int32_t L_22 = V_1;
		ObjectU5BU5D_t2843939325* L_23 = V_0;
		NullCheck(L_23);
		if ((!(((uint32_t)L_22) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length))))))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = V_1;
		Array_Resize_TisRuntimeObject_m2485852162(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(&V_0), ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)2)), /*hidden argument*/Array_Resize_TisRuntimeObject_m2485852162_RuntimeMethod_var);
		ObjectU5BU5D_t2843939325* L_25 = V_0;
		__this->set_annotations_1((RuntimeObject *)L_25);
	}

IL_0085:
	{
		ObjectU5BU5D_t2843939325* L_26 = V_0;
		int32_t L_27 = V_1;
		RuntimeObject * L_28 = ___annotation0;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject *)L_28);
		return;
	}
}
// System.Object System.Xml.Linq.XObject::Annotation(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XObject_Annotation_m2852752487 (XObject_t1119084474 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_Annotation_m2852752487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_Annotation_m2852752487_RuntimeMethod_var);
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3243520166, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XObject_Annotation_m2852752487_RuntimeMethod_var);
	}

IL_0014:
	{
		RuntimeObject * L_3 = __this->get_annotations_1();
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject * L_4 = __this->get_annotations_1();
		V_0 = ((ObjectU5BU5D_t2843939325*)IsInst((RuntimeObject*)L_4, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t2843939325* L_5 = V_0;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_6 = ___type0;
		RuntimeObject * L_7 = __this->get_annotations_1();
		NullCheck(L_6);
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(114 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject * L_9 = __this->get_annotations_1();
		return L_9;
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_005a;
	}

IL_0044:
	{
		ObjectU5BU5D_t2843939325* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		RuntimeObject * L_14 = V_2;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_15 = ___type0;
		RuntimeObject * L_16 = V_2;
		NullCheck(L_15);
		bool L_17 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(114 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject * L_18 = V_2;
		return L_18;
	}

IL_0056:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_20 = V_1;
		ObjectU5BU5D_t2843939325* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0044;
		}
	}

IL_0060:
	{
		return NULL;
	}
}
// System.Boolean System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C" IL2CPP_METHOD_ATTR bool XObject_System_Xml_IXmlLineInfo_HasLineInfo_m3672028656 (XObject_t1119084474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_System_Xml_IXmlLineInfo_HasLineInfo_m3672028656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_System_Xml_IXmlLineInfo_HasLineInfo_m3672028656_RuntimeMethod_var);
	{
		LineInfoAnnotation_t2689670207 * L_0 = XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682(__this, /*hidden argument*/XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(LineInfoAnnotation_t2689670207 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XObject_System_Xml_IXmlLineInfo_get_LineNumber_m2664708307 (XObject_t1119084474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_System_Xml_IXmlLineInfo_get_LineNumber_m2664708307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_System_Xml_IXmlLineInfo_get_LineNumber_m2664708307_RuntimeMethod_var);
	LineInfoAnnotation_t2689670207 * V_0 = NULL;
	{
		LineInfoAnnotation_t2689670207 * L_0 = XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682(__this, /*hidden argument*/XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682_RuntimeMethod_var);
		V_0 = L_0;
		LineInfoAnnotation_t2689670207 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		LineInfoAnnotation_t2689670207 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_lineNumber_0();
		return L_3;
	}

IL_0011:
	{
		return 0;
	}
}
// System.Int32 System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XObject_System_Xml_IXmlLineInfo_get_LinePosition_m3477809919 (XObject_t1119084474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_System_Xml_IXmlLineInfo_get_LinePosition_m3477809919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_System_Xml_IXmlLineInfo_get_LinePosition_m3477809919_RuntimeMethod_var);
	LineInfoAnnotation_t2689670207 * V_0 = NULL;
	{
		LineInfoAnnotation_t2689670207 * L_0 = XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682(__this, /*hidden argument*/XObject_Annotation_TisLineInfoAnnotation_t2689670207_m2519256682_RuntimeMethod_var);
		V_0 = L_0;
		LineInfoAnnotation_t2689670207 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		LineInfoAnnotation_t2689670207 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_linePosition_1();
		return L_3;
	}

IL_0011:
	{
		return 0;
	}
}
// System.Boolean System.Xml.Linq.XObject::get_HasBaseUri()
extern "C" IL2CPP_METHOD_ATTR bool XObject_get_HasBaseUri_m2712212936 (XObject_t1119084474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_get_HasBaseUri_m2712212936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_get_HasBaseUri_m2712212936_RuntimeMethod_var);
	{
		BaseUriAnnotation_t3843949084 * L_0 = XObject_Annotation_TisBaseUriAnnotation_t3843949084_m4137211088(__this, /*hidden argument*/XObject_Annotation_TisBaseUriAnnotation_t3843949084_m4137211088_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(BaseUriAnnotation_t3843949084 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XObject::NotifyChanged(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
extern "C" IL2CPP_METHOD_ATTR bool XObject_NotifyChanged_m1712984418 (XObject_t1119084474 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t652714535 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_NotifyChanged_m1712984418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_NotifyChanged_m1712984418_RuntimeMethod_var);
	bool V_0 = false;
	XObject_t1119084474 * V_1 = NULL;
	XObjectChangeAnnotation_t288737304 * V_2 = NULL;
	{
		V_0 = (bool)0;
		V_1 = __this;
		goto IL_000d;
	}

IL_0006:
	{
		XObject_t1119084474 * L_0 = V_1;
		NullCheck(L_0);
		XContainer_t3387731002 * L_1 = L_0->get_parent_0();
		V_1 = L_1;
	}

IL_000d:
	{
		XObject_t1119084474 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		XObject_t1119084474 * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0006;
		}
	}

IL_0018:
	{
		XObject_t1119084474 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		XObject_t1119084474 * L_6 = V_1;
		NullCheck(L_6);
		XObjectChangeAnnotation_t288737304 * L_7 = XObject_Annotation_TisXObjectChangeAnnotation_t288737304_m4053231645(L_6, /*hidden argument*/XObject_Annotation_TisXObjectChangeAnnotation_t288737304_m4053231645_RuntimeMethod_var);
		V_2 = L_7;
		XObjectChangeAnnotation_t288737304 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		V_0 = (bool)1;
		XObjectChangeAnnotation_t288737304 * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_t2871841264 * L_10 = L_9->get_changed_1();
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		XObjectChangeAnnotation_t288737304 * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_t2871841264 * L_12 = L_11->get_changed_1();
		RuntimeObject * L_13 = ___sender0;
		XObjectChangeEventArgs_t652714535 * L_14 = ___e1;
		NullCheck(L_12);
		EventHandler_1_Invoke_m3142395161(L_12, L_13, L_14, /*hidden argument*/EventHandler_1_Invoke_m3142395161_RuntimeMethod_var);
	}

IL_003c:
	{
		XObject_t1119084474 * L_15 = V_1;
		NullCheck(L_15);
		XContainer_t3387731002 * L_16 = L_15->get_parent_0();
		V_1 = L_16;
		goto IL_000d;
	}

IL_0045:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Boolean System.Xml.Linq.XObject::NotifyChanging(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
extern "C" IL2CPP_METHOD_ATTR bool XObject_NotifyChanging_m2437571179 (XObject_t1119084474 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t652714535 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_NotifyChanging_m2437571179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_NotifyChanging_m2437571179_RuntimeMethod_var);
	bool V_0 = false;
	XObject_t1119084474 * V_1 = NULL;
	XObjectChangeAnnotation_t288737304 * V_2 = NULL;
	{
		V_0 = (bool)0;
		V_1 = __this;
		goto IL_000d;
	}

IL_0006:
	{
		XObject_t1119084474 * L_0 = V_1;
		NullCheck(L_0);
		XContainer_t3387731002 * L_1 = L_0->get_parent_0();
		V_1 = L_1;
	}

IL_000d:
	{
		XObject_t1119084474 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		XObject_t1119084474 * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0006;
		}
	}

IL_0018:
	{
		XObject_t1119084474 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		XObject_t1119084474 * L_6 = V_1;
		NullCheck(L_6);
		XObjectChangeAnnotation_t288737304 * L_7 = XObject_Annotation_TisXObjectChangeAnnotation_t288737304_m4053231645(L_6, /*hidden argument*/XObject_Annotation_TisXObjectChangeAnnotation_t288737304_m4053231645_RuntimeMethod_var);
		V_2 = L_7;
		XObjectChangeAnnotation_t288737304 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		V_0 = (bool)1;
		XObjectChangeAnnotation_t288737304 * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_t2871841264 * L_10 = L_9->get_changing_0();
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		XObjectChangeAnnotation_t288737304 * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_t2871841264 * L_12 = L_11->get_changing_0();
		RuntimeObject * L_13 = ___sender0;
		XObjectChangeEventArgs_t652714535 * L_14 = ___e1;
		NullCheck(L_12);
		EventHandler_1_Invoke_m3142395161(L_12, L_13, L_14, /*hidden argument*/EventHandler_1_Invoke_m3142395161_RuntimeMethod_var);
	}

IL_003c:
	{
		XObject_t1119084474 * L_15 = V_1;
		NullCheck(L_15);
		XContainer_t3387731002 * L_16 = L_15->get_parent_0();
		V_1 = L_16;
		goto IL_000d;
	}

IL_0045:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void System.Xml.Linq.XObject::SetBaseUri(System.String)
extern "C" IL2CPP_METHOD_ATTR void XObject_SetBaseUri_m4069814171 (XObject_t1119084474 * __this, String_t* ___baseUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_SetBaseUri_m4069814171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_SetBaseUri_m4069814171_RuntimeMethod_var);
	{
		String_t* L_0 = ___baseUri0;
		BaseUriAnnotation_t3843949084 * L_1 = (BaseUriAnnotation_t3843949084 *)il2cpp_codegen_object_new(BaseUriAnnotation_t3843949084_il2cpp_TypeInfo_var);
		BaseUriAnnotation__ctor_m1617116133(L_1, L_0, /*hidden argument*/NULL);
		XObject_AddAnnotation_m3707945256(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XObject::SetLineInfo(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XObject_SetLineInfo_m1298245039 (XObject_t1119084474 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_SetLineInfo_m1298245039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_SetLineInfo_m1298245039_RuntimeMethod_var);
	{
		int32_t L_0 = ___lineNumber0;
		int32_t L_1 = ___linePosition1;
		LineInfoAnnotation_t2689670207 * L_2 = (LineInfoAnnotation_t2689670207 *)il2cpp_codegen_object_new(LineInfoAnnotation_t2689670207_il2cpp_TypeInfo_var);
		LineInfoAnnotation__ctor_m1540747406(L_2, L_0, L_1, /*hidden argument*/NULL);
		XObject_AddAnnotation_m3707945256(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.SaveOptions System.Xml.Linq.XObject::GetSaveOptionsFromAnnotations()
extern "C" IL2CPP_METHOD_ATTR int32_t XObject_GetSaveOptionsFromAnnotations_m2533200236 (XObject_t1119084474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_GetSaveOptionsFromAnnotations_m2533200236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObject_GetSaveOptionsFromAnnotations_m2533200236_RuntimeMethod_var);
	XObject_t1119084474 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = __this;
		goto IL_000b;
	}

IL_0004:
	{
		XObject_t1119084474 * L_0 = V_0;
		NullCheck(L_0);
		XContainer_t3387731002 * L_1 = L_0->get_parent_0();
		V_0 = L_1;
	}

IL_000b:
	{
		XObject_t1119084474 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		XObject_t1119084474 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0004;
		}
	}

IL_0016:
	{
		XObject_t1119084474 * L_5 = V_0;
		if (L_5)
		{
			goto IL_001b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_001b:
	{
		XObject_t1119084474 * L_6 = V_0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (SaveOptions_t2609998520_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = XObject_Annotation_m2852752487(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		RuntimeObject * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject * L_11 = V_1;
		return ((*(int32_t*)((int32_t*)UnBox(L_11, SaveOptions_t2609998520_il2cpp_TypeInfo_var))));
	}

IL_0036:
	{
		XObject_t1119084474 * L_12 = V_0;
		NullCheck(L_12);
		XContainer_t3387731002 * L_13 = L_12->get_parent_0();
		V_0 = L_13;
		goto IL_000b;
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
// System.Void System.Xml.Linq.XObjectChangeEventArgs::.ctor(System.Xml.Linq.XObjectChange)
extern "C" IL2CPP_METHOD_ATTR void XObjectChangeEventArgs__ctor_m3430477771 (XObjectChangeEventArgs_t652714535 * __this, int32_t ___objectChange0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObjectChangeEventArgs__ctor_m3430477771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObjectChangeEventArgs__ctor_m3430477771_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___objectChange0;
		__this->set_objectChange_1(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XObjectChangeEventArgs::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XObjectChangeEventArgs__cctor_m1335316579 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObjectChangeEventArgs__cctor_m1335316579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XObjectChangeEventArgs__cctor_m1335316579_RuntimeMethod_var);
	{
		XObjectChangeEventArgs_t652714535 * L_0 = (XObjectChangeEventArgs_t652714535 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m3430477771(L_0, 0, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->set_Add_2(L_0);
		XObjectChangeEventArgs_t652714535 * L_1 = (XObjectChangeEventArgs_t652714535 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m3430477771(L_1, 1, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->set_Remove_3(L_1);
		XObjectChangeEventArgs_t652714535 * L_2 = (XObjectChangeEventArgs_t652714535 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m3430477771(L_2, 2, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->set_Name_4(L_2);
		XObjectChangeEventArgs_t652714535 * L_3 = (XObjectChangeEventArgs_t652714535 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m3430477771(L_3, 3, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t652714535_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t652714535_il2cpp_TypeInfo_var))->set_Value_5(L_3);
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
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m3301977354 (XProcessingInstruction_t2943691487 * __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction__ctor_m3301977354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XProcessingInstruction__ctor_m3301977354_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2037252866, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XProcessingInstruction__ctor_m3301977354_RuntimeMethod_var);
	}

IL_0014:
	{
		String_t* L_2 = ___target0;
		XProcessingInstruction_ValidateName_m1199905831(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___target0;
		__this->set_target_3(L_3);
		String_t* L_4 = ___data1;
		__this->set_data_4(L_4);
		return;
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.Xml.Linq.XProcessingInstruction)
extern "C" IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m1711994690 (XProcessingInstruction_t2943691487 * __this, XProcessingInstruction_t2943691487 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction__ctor_m1711994690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XProcessingInstruction__ctor_m1711994690_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		XProcessingInstruction_t2943691487 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XProcessingInstruction__ctor_m1711994690_RuntimeMethod_var);
	}

IL_0014:
	{
		XProcessingInstruction_t2943691487 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_target_3();
		__this->set_target_3(L_3);
		XProcessingInstruction_t2943691487 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_data_4();
		__this->set_data_4(L_5);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XProcessingInstruction::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XProcessingInstruction_get_NodeType_m2260243504 (XProcessingInstruction_t2943691487 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction_get_NodeType_m2260243504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XProcessingInstruction_get_NodeType_m2260243504_RuntimeMethod_var);
	{
		return (int32_t)(7);
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::WriteTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XProcessingInstruction_WriteTo_m1771043257 (XProcessingInstruction_t2943691487 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction_WriteTo_m1771043257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XProcessingInstruction_WriteTo_m1771043257_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XProcessingInstruction_WriteTo_m1771043257_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlWriter_t127905479 * L_2 = ___writer0;
		String_t* L_3 = __this->get_target_3();
		String_t* L_4 = __this->get_data_4();
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, L_2, L_3, L_4);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XProcessingInstruction::CloneNode()
extern "C" IL2CPP_METHOD_ATTR XNode_t716131460 * XProcessingInstruction_CloneNode_m1122870944 (XProcessingInstruction_t2943691487 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction_CloneNode_m1122870944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XProcessingInstruction_CloneNode_m1122870944_RuntimeMethod_var);
	{
		XProcessingInstruction_t2943691487 * L_0 = (XProcessingInstruction_t2943691487 *)il2cpp_codegen_object_new(XProcessingInstruction_t2943691487_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_m1711994690(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::ValidateName(System.String)
extern "C" IL2CPP_METHOD_ATTR void XProcessingInstruction_ValidateName_m1199905831 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction_ValidateName_m1199905831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XProcessingInstruction_ValidateName_m1199905831_RuntimeMethod_var);
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		XmlConvert_VerifyNCName_m3085528481(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		int32_t L_2 = String_Compare_m3203413707(NULL /*static, unused*/, L_1, _stringLiteral2909972470, 5, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		String_t* L_6 = Res_GetString_m419457679(NULL /*static, unused*/, _stringLiteral2380168007, L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XProcessingInstruction_ValidateName_m1199905831_RuntimeMethod_var);
	}

IL_002f:
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
// System.Void System.Xml.Linq.XText::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XText__ctor_m2401333842 (XText_t1448860321 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText__ctor_m2401333842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XText__ctor_m2401333842_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XText__ctor_m2401333842_RuntimeMethod_var);
	}

IL_0014:
	{
		String_t* L_2 = ___value0;
		__this->set_text_3(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XText::.ctor(System.Xml.Linq.XText)
extern "C" IL2CPP_METHOD_ATTR void XText__ctor_m694960668 (XText_t1448860321 * __this, XText_t1448860321 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText__ctor_m694960668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XText__ctor_m694960668_RuntimeMethod_var);
	{
		XNode__ctor_m2640711240(__this, /*hidden argument*/NULL);
		XText_t1448860321 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XText__ctor_m694960668_RuntimeMethod_var);
	}

IL_0014:
	{
		XText_t1448860321 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_text_3();
		__this->set_text_3(L_3);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XText::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XText_get_NodeType_m366400984 (XText_t1448860321 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText_get_NodeType_m366400984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XText_get_NodeType_m366400984_RuntimeMethod_var);
	{
		return (int32_t)(3);
	}
}
// System.String System.Xml.Linq.XText::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XText_get_Value_m3622993421 (XText_t1448860321 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText_get_Value_m3622993421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XText_get_Value_m3622993421_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get_text_3();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XText::WriteTo(System.Xml.XmlWriter)
extern "C" IL2CPP_METHOD_ATTR void XText_WriteTo_m2140000141 (XText_t1448860321 * __this, XmlWriter_t127905479 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText_WriteTo_m2140000141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XText_WriteTo_m2140000141_RuntimeMethod_var);
	{
		XmlWriter_t127905479 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XText_WriteTo_m2140000141_RuntimeMethod_var);
	}

IL_000e:
	{
		XContainer_t3387731002 * L_2 = ((XObject_t1119084474 *)__this)->get_parent_0();
		if (!((XDocument_t1376419702 *)IsInstClass((RuntimeObject*)L_2, XDocument_t1376419702_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		XmlWriter_t127905479 * L_3 = ___writer0;
		String_t* L_4 = __this->get_text_3();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_3, L_4);
		return;
	}

IL_0028:
	{
		XmlWriter_t127905479 * L_5 = ___writer0;
		String_t* L_6 = __this->get_text_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_5, L_6);
		return;
	}
}
// System.Void System.Xml.Linq.XText::AppendText(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void XText_AppendText_m514946451 (XText_t1448860321 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText_AppendText_m514946451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XText_AppendText_m514946451_RuntimeMethod_var);
	{
		StringBuilder_t * L_0 = ___sb0;
		String_t* L_1 = __this->get_text_3();
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XText::CloneNode()
extern "C" IL2CPP_METHOD_ATTR XNode_t716131460 * XText_CloneNode_m2233873024 (XText_t1448860321 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText_CloneNode_m2233873024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(XText_CloneNode_m2233873024_RuntimeMethod_var);
	{
		XText_t1448860321 * L_0 = (XText_t1448860321 *)il2cpp_codegen_object_new(XText_t1448860321_il2cpp_TypeInfo_var);
		XText__ctor_m694960668(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
