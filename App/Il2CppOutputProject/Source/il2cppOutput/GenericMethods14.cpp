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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Attribute[]
struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Vuforia.TargetFinder>[]
struct EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Vuforia.TargetFinder>
struct KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Vuforia.TargetFinder>
struct ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>
struct IDictionary_2_t65436DD2A0CD24BF17F9982FD4B13222784AC8CE;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>
struct IDictionary_2_tA4088FA2F05B4123A03EE48CDFE689D215A4F69D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_tFCC39A24F3BFD8D086D9F52069CE27CAB1BA2918;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t12D495D4AF335010DEC3E91C58474E59EE2E50D8;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Matrix4x4>
struct List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t6D705EF83FAD15122163275744EC868FD75312E2;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Boolean>
struct Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Byte>
struct Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Char>
struct Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTime>
struct Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTimeOffset>
struct Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Decimal>
struct Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Double>
struct Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Guid>
struct Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int16>
struct Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int32>
struct Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int64>
struct Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.IntPtr>
struct Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Object>
struct Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.SByte>
struct Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Single>
struct Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.TimeSpan>
struct Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt16>
struct Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt32>
struct Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt64>
struct Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UIntPtr>
struct Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Boolean>
struct Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Byte>
struct Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Char>
struct Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTime>
struct Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTimeOffset>
struct Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Decimal>
struct Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Double>
struct Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Guid>
struct Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int16>
struct Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int32>
struct Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int64>
struct Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.IntPtr>
struct Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Object>
struct Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.SByte>
struct Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Single>
struct Transformer_1_t761E0F084572634E94674D7C1912B56771C73045;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.TimeSpan>
struct Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt16>
struct Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt32>
struct Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt64>
struct Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UIntPtr>
struct Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Boolean>
struct Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Byte>
struct Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Char>
struct Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTime>
struct Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTimeOffset>
struct Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Decimal>
struct Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Double>
struct Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Guid>
struct Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int16>
struct Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int32>
struct Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int64>
struct Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.IntPtr>
struct Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Object>
struct Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.SByte>
struct Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Single>
struct Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.TimeSpan>
struct Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt16>
struct Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt32>
struct Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt64>
struct Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UIntPtr>
struct Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Boolean>
struct Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Byte>
struct Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Char>
struct Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTime>
struct Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTimeOffset>
struct Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Decimal>
struct Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Double>
struct Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Guid>
struct Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int16>
struct Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct Transformer_1_t873B2E4C2418F756278367655E1C64D654382460;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>>
struct Func_2_tFB89B3055D8384D5313A610D5CE710F430889708;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.Linq.Expressions.Expression
struct Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588;
// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t42C0BE7206A4F6F4259238B41D40D5106A38E83F;
// Vuforia.IlluminationManager
struct IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898;
// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04;
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<System.Object>
struct IJEnumerable_1_t909B6DB96408BE6B24A37EDFD61882442BDF4E2B;
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IJEnumerable_1_tE9E52B5762CD11B4AA54548D2EEAD036915354AC;
// Vuforia.Newtonsoft.Json.Linq.JContainer
struct JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819;
// Vuforia.Newtonsoft.Json.Linq.JToken
struct JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491;
// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726;
// Vuforia.Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9;
// Vuforia.Newtonsoft.Json.Linq.JValue
struct JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F;
// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811;
// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory
struct ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A;
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232;
// Vuforia.ObjectTracker
struct ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811;
// Vuforia.RuntimeImageSource
struct RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D;
// Vuforia.TargetFinder
struct TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A;
// Vuforia.VuMarkManager
struct VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuforiaWrapper_t42C0BE7206A4F6F4259238B41D40D5106A38E83F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_t0A3ECBBDC96B9B57BEE93670CBACA8C4A674EB4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8A3AD980EC179856012B7EECF4327E99CD44CD;
IL2CPP_EXTERN_C String_t* _stringLiteral3030E728F154BF51419109EFB93B6B8AEEC9A976;
IL2CPP_EXTERN_C String_t* _stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137;
IL2CPP_EXTERN_C String_t* _stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D;
IL2CPP_EXTERN_C String_t* _stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85;
IL2CPP_EXTERN_C String_t* _stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExpressionReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mE7FB1048BFC77AC8143C6EC28FBBEBA7CEE5ABC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_AncestorsAndSelf_TisRuntimeObject_m94435B8469EB22B11B4E4ECE716E48FECE4FF581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Ancestors_TisRuntimeObject_m547FC65D74C1BC5B65A3713B88D43C8B68532AC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_DescendantsAndSelf_TisRuntimeObject_mAF06374A391C8662B0656A7D9EDB6106EF0B7549_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Descendants_TisRuntimeObject_m004CD7680ECAC11CE2AAAE0EC5F0B1BD9A25E455_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FSharpUtils_BuildMapCreator_TisRuntimeObject_TisRuntimeObject_mFDA8E816C8D99E8536554B1DE58B6FD027973044_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JToken_Children_TisRuntimeObject_m23BAB984B9274897CD72A545F92DC5EF2BABE348_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LateBoundReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mAA959F1FBE61DFF65D48AB9BD8593307E989AC77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectTracker_GetTargetFinder_TisRuntimeObject_m1AC68DC4D5C220184900120977D34C2D6585F85E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetAttributes_TisRuntimeObject_mD07994B46CC3B773ECA0563F20E81E9BBD622077_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m5B4C13F4D9D5A76B18DDB539A62EAE0511F4A63D_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17;
struct ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

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


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct  Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___entries_1)); }
	inline EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___keys_7)); }
	inline KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___values_8)); }
	inline ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Matrix4x4>
struct  List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7, ____items_1)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get__items_1() const { return ____items_1; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7_StaticFields, ____emptyArray_5)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Boolean>
struct  Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Byte>
struct  Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Char>
struct  Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields, ___Instance_0)); }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.DateTime>
struct  Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.DateTimeOffset>
struct  Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Decimal>
struct  Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Double>
struct  Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Guid>
struct  Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Int16>
struct  Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Int32>
struct  Caster_1_t847B65F78580B4C35C46212B37066290881E839D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Int64>
struct  Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.IntPtr>
struct  Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Object>
struct  Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.SByte>
struct  Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields, ___Instance_0)); }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Single>
struct  Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.TimeSpan>
struct  Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UInt16>
struct  Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UInt32>
struct  Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UInt64>
struct  Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UIntPtr>
struct  Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Boolean>
struct  Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Byte>
struct  Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Char>
struct  Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields, ___Instance_0)); }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields, ___Instance_0)); }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.DateTime>
struct  Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.DateTimeOffset>
struct  Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Decimal>
struct  Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Double>
struct  Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Guid>
struct  Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Int16>
struct  Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Int32>
struct  Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Int64>
struct  Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields, ___Instance_0)); }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.IntPtr>
struct  Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Object>
struct  Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields, ___Instance_0)); }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.SByte>
struct  Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Single>
struct  Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.TimeSpan>
struct  Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UInt16>
struct  Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UInt32>
struct  Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UInt64>
struct  Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UIntPtr>
struct  Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Boolean>
struct  Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Byte>
struct  Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Char>
struct  Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.DateTime>
struct  Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.DateTimeOffset>
struct  Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Decimal>
struct  Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields, ___Instance_0)); }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Double>
struct  Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Guid>
struct  Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Int16>
struct  Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Int32>
struct  Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Int64>
struct  Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.IntPtr>
struct  Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Object>
struct  Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.SByte>
struct  Caster_1_t9347D88993875351431679E4107168C7CD28B825  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Single>
struct  Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.TimeSpan>
struct  Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UInt16>
struct  Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UInt32>
struct  Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UInt64>
struct  Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UIntPtr>
struct  Caster_1_t0233A96550545D6F17A5141586520D492131F3AF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Boolean>
struct  Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Byte>
struct  Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Char>
struct  Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields, ___Instance_0)); }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.DateTime>
struct  Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.DateTimeOffset>
struct  Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Decimal>
struct  Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Double>
struct  Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Guid>
struct  Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields, ___Instance_0)); }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Int16>
struct  Caster_1_tE25B230380E2CE54B9276690CD814DE511450833  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Int32>
struct  Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Int64>
struct  Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.IntPtr>
struct  Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields, ___Instance_0)); }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Object>
struct  Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields, ___Instance_0)); }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.SByte>
struct  Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Single>
struct  Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.TimeSpan>
struct  Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UInt16>
struct  Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UInt32>
struct  Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UInt64>
struct  Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UIntPtr>
struct  Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Object,System.Object>
struct  Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Boolean>
struct  Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Byte>
struct  Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Char>
struct  Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields, ___Instance_0)); }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.DateTime>
struct  Caster_1_tB027436891672D8E446545806D30A74D601A125F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.DateTimeOffset>
struct  Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Decimal>
struct  Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Double>
struct  Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Guid>
struct  Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Int16>
struct  Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Int32>
struct  Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Int64>
struct  Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.IntPtr>
struct  Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Object>
struct  Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.SByte>
struct  Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields, ___Instance_0)); }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Single>
struct  Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.TimeSpan>
struct  Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UInt16>
struct  Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UInt32>
struct  Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UInt64>
struct  Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UIntPtr>
struct  Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Boolean>
struct  Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Byte>
struct  Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Char>
struct  Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.DateTime>
struct  Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.DateTimeOffset>
struct  Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Decimal>
struct  Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Double>
struct  Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Guid>
struct  Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Int16>
struct  Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields, ___Instance_0)); }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Int32>
struct  Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Int64>
struct  Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields, ___Instance_0)); }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.IntPtr>
struct  Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields, ___Instance_0)); }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Object>
struct  Caster_1_t0E97020316A62558167F5F018A989125D28729AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.SByte>
struct  Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Single>
struct  Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.TimeSpan>
struct  Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields, ___Instance_0)); }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UInt16>
struct  Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UInt32>
struct  Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UInt64>
struct  Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UIntPtr>
struct  Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Boolean>
struct  Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Byte>
struct  Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Char>
struct  Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.DateTime>
struct  Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.DateTimeOffset>
struct  Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields, ___Instance_0)); }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Decimal>
struct  Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Double>
struct  Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Guid>
struct  Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Int16>
struct  Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Int32>
struct  Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Int64>
struct  Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.IntPtr>
struct  Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Object>
struct  Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.SByte>
struct  Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Single>
struct  Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.TimeSpan>
struct  Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UInt16>
struct  Caster_1_t42992A2C9D038623500C211031C77C7208D43273  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields, ___Instance_0)); }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UInt32>
struct  Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UInt64>
struct  Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UIntPtr>
struct  Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Boolean>
struct  Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Byte>
struct  Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Char>
struct  Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.DateTime>
struct  Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.DateTimeOffset>
struct  Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Decimal>
struct  Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Double>
struct  Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Guid>
struct  Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Int16>
struct  Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Int32>
struct  Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Int64>
struct  Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.IntPtr>
struct  Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Object>
struct  Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.SByte>
struct  Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Single>
struct  Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.TimeSpan>
struct  Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UInt16>
struct  Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UInt32>
struct  Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UInt64>
struct  Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UIntPtr>
struct  Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Byte>
struct  EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int16>
struct  EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int32>
struct  EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int64>
struct  EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Object>
struct  EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.SByte>
struct  EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>
struct  EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>
struct  EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>
struct  EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
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
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
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
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Linq.Expressions.Expression
struct  Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F  : public RuntimeObject
{
public:

public:
};

struct Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


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

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.NoAllocHelpers
struct  NoAllocHelpers_t4BC4E5F5C10AE3134CFD94FF764240E3B1E45270  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.StyleValueExtensions
struct  StyleValueExtensions_tB5C36975F3FBDF3E96DF727123E9F2BF45840915  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.NativeCopyUtility
struct  NativeCopyUtility_t829515E8900A8C56970A8DCA18252FF587DA40D1  : public RuntimeObject
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.Extensions
struct  Extensions_t6C85C596E5A496CE7E4F0427A9980AA55EFFF88B  : public RuntimeObject
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__0`1<System.Object>
struct  U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__0`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__0`1::<>9
	U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__0`1::<>9__0_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__1`1<System.Object>
struct  U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__1`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__1`1::<>9
	U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__1`1::<>9__1_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__2`1<System.Object>
struct  U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__2`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__2`1::<>9
	U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__2`1::<>9__2_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__3`1<System.Object>
struct  U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__3`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__3`1::<>9
	U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions/<>c__3`1::<>9__3_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JToken
struct  JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JContainer Vuforia.Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 * ____parent_1;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_previous
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * ____previous_2;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_next
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * ____next_3;
	// System.Object Vuforia.Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____parent_1)); }
	inline JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____previous_2)); }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * get__previous_2() const { return ____previous_2; }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____next_3)); }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * get__next_3() const { return ____next_3; }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer Vuforia.Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 * ____equalityComparer_0;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___BooleanTypes_5;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___NumberTypes_6;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___StringTypes_7;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___GuidTypes_8;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___TimeSpanTypes_9;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___UriTypes_10;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___CharTypes_11;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___DateTimeTypes_12;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils
struct  FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636  : public RuntimeObject
{
public:

public:
};

struct FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields
{
public:
	// System.Object Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::Lock
	RuntimeObject * ___Lock_0;
	// System.Boolean Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::_initialized
	bool ____initialized_1;
	// System.Reflection.MethodInfo Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::_ofSeq
	MethodInfo_t * ____ofSeq_2;
	// System.Type Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::_mapType
	Type_t * ____mapType_3;
	// System.Reflection.Assembly Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<FSharpCoreAssembly>k__BackingField
	Assembly_t * ___U3CFSharpCoreAssemblyU3Ek__BackingField_4;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<IsUnion>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CIsUnionU3Ek__BackingField_5;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCases>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CGetUnionCasesU3Ek__BackingField_6;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<PreComputeUnionTagReader>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CPreComputeUnionTagReaderU3Ek__BackingField_7;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<PreComputeUnionReader>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CPreComputeUnionReaderU3Ek__BackingField_8;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<PreComputeUnionConstructor>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CPreComputeUnionConstructorU3Ek__BackingField_9;
	// System.Func`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoDeclaringType>k__BackingField
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10;
	// System.Func`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoName>k__BackingField
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___U3CGetUnionCaseInfoNameU3Ek__BackingField_11;
	// System.Func`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoTag>k__BackingField
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___U3CGetUnionCaseInfoTagU3Ek__BackingField_12;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoFields>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_Lock_0() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___Lock_0)); }
	inline RuntimeObject * get_Lock_0() const { return ___Lock_0; }
	inline RuntimeObject ** get_address_of_Lock_0() { return &___Lock_0; }
	inline void set_Lock_0(RuntimeObject * value)
	{
		___Lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_1() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ____initialized_1)); }
	inline bool get__initialized_1() const { return ____initialized_1; }
	inline bool* get_address_of__initialized_1() { return &____initialized_1; }
	inline void set__initialized_1(bool value)
	{
		____initialized_1 = value;
	}

	inline static int32_t get_offset_of__ofSeq_2() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ____ofSeq_2)); }
	inline MethodInfo_t * get__ofSeq_2() const { return ____ofSeq_2; }
	inline MethodInfo_t ** get_address_of__ofSeq_2() { return &____ofSeq_2; }
	inline void set__ofSeq_2(MethodInfo_t * value)
	{
		____ofSeq_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ofSeq_2), (void*)value);
	}

	inline static int32_t get_offset_of__mapType_3() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ____mapType_3)); }
	inline Type_t * get__mapType_3() const { return ____mapType_3; }
	inline Type_t ** get_address_of__mapType_3() { return &____mapType_3; }
	inline void set__mapType_3(Type_t * value)
	{
		____mapType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapType_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFSharpCoreAssemblyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CFSharpCoreAssemblyU3Ek__BackingField_4)); }
	inline Assembly_t * get_U3CFSharpCoreAssemblyU3Ek__BackingField_4() const { return ___U3CFSharpCoreAssemblyU3Ek__BackingField_4; }
	inline Assembly_t ** get_address_of_U3CFSharpCoreAssemblyU3Ek__BackingField_4() { return &___U3CFSharpCoreAssemblyU3Ek__BackingField_4; }
	inline void set_U3CFSharpCoreAssemblyU3Ek__BackingField_4(Assembly_t * value)
	{
		___U3CFSharpCoreAssemblyU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFSharpCoreAssemblyU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUnionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CIsUnionU3Ek__BackingField_5)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CIsUnionU3Ek__BackingField_5() const { return ___U3CIsUnionU3Ek__BackingField_5; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CIsUnionU3Ek__BackingField_5() { return &___U3CIsUnionU3Ek__BackingField_5; }
	inline void set_U3CIsUnionU3Ek__BackingField_5(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CIsUnionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIsUnionU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCasesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCasesU3Ek__BackingField_6)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CGetUnionCasesU3Ek__BackingField_6() const { return ___U3CGetUnionCasesU3Ek__BackingField_6; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CGetUnionCasesU3Ek__BackingField_6() { return &___U3CGetUnionCasesU3Ek__BackingField_6; }
	inline void set_U3CGetUnionCasesU3Ek__BackingField_6(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CGetUnionCasesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCasesU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreComputeUnionTagReaderU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CPreComputeUnionTagReaderU3Ek__BackingField_7)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CPreComputeUnionTagReaderU3Ek__BackingField_7() const { return ___U3CPreComputeUnionTagReaderU3Ek__BackingField_7; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CPreComputeUnionTagReaderU3Ek__BackingField_7() { return &___U3CPreComputeUnionTagReaderU3Ek__BackingField_7; }
	inline void set_U3CPreComputeUnionTagReaderU3Ek__BackingField_7(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CPreComputeUnionTagReaderU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreComputeUnionTagReaderU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreComputeUnionReaderU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CPreComputeUnionReaderU3Ek__BackingField_8)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CPreComputeUnionReaderU3Ek__BackingField_8() const { return ___U3CPreComputeUnionReaderU3Ek__BackingField_8; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CPreComputeUnionReaderU3Ek__BackingField_8() { return &___U3CPreComputeUnionReaderU3Ek__BackingField_8; }
	inline void set_U3CPreComputeUnionReaderU3Ek__BackingField_8(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CPreComputeUnionReaderU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreComputeUnionReaderU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreComputeUnionConstructorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CPreComputeUnionConstructorU3Ek__BackingField_9)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CPreComputeUnionConstructorU3Ek__BackingField_9() const { return ___U3CPreComputeUnionConstructorU3Ek__BackingField_9; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CPreComputeUnionConstructorU3Ek__BackingField_9() { return &___U3CPreComputeUnionConstructorU3Ek__BackingField_9; }
	inline void set_U3CPreComputeUnionConstructorU3Ek__BackingField_9(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CPreComputeUnionConstructorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreComputeUnionConstructorU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10() const { return ___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10() { return &___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10; }
	inline void set_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoNameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoNameU3Ek__BackingField_11)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get_U3CGetUnionCaseInfoNameU3Ek__BackingField_11() const { return ___U3CGetUnionCaseInfoNameU3Ek__BackingField_11; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of_U3CGetUnionCaseInfoNameU3Ek__BackingField_11() { return &___U3CGetUnionCaseInfoNameU3Ek__BackingField_11; }
	inline void set_U3CGetUnionCaseInfoNameU3Ek__BackingField_11(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		___U3CGetUnionCaseInfoNameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoNameU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoTagU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoTagU3Ek__BackingField_12)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get_U3CGetUnionCaseInfoTagU3Ek__BackingField_12() const { return ___U3CGetUnionCaseInfoTagU3Ek__BackingField_12; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of_U3CGetUnionCaseInfoTagU3Ek__BackingField_12() { return &___U3CGetUnionCaseInfoTagU3Ek__BackingField_12; }
	inline void set_U3CGetUnionCaseInfoTagU3Ek__BackingField_12(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		___U3CGetUnionCaseInfoTagU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoTagU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13() const { return ___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13() { return &___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13; }
	inline void set_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils/<>c__DisplayClass52_0`2<System.Object,System.Object>
struct  U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils/<>c__DisplayClass52_0`2::ctorDelegate
	ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * ___ctorDelegate_0;

public:
	inline static int32_t get_offset_of_ctorDelegate_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3, ___ctorDelegate_0)); }
	inline ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * get_ctorDelegate_0() const { return ___ctorDelegate_0; }
	inline ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 ** get_address_of_ctorDelegate_0() { return &___ctorDelegate_0; }
	inline void set_ctorDelegate_0(ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * value)
	{
		___ctorDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorDelegate_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass4_0`1<System.Object>
struct  U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass4_0`1::c
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___c_0;
	// System.Reflection.MethodBase Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass4_0`1::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57, ___c_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct  ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232  : public RuntimeObject
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils
struct  ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_StaticFields
{
public:
	// System.Type[] Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_0;

public:
	inline static int32_t get_offset_of_EmptyTypes_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_StaticFields, ___EmptyTypes_0)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_0() const { return ___EmptyTypes_0; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_0() { return &___EmptyTypes_0; }
	inline void set_EmptyTypes_0(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_0), (void*)value);
	}
};


// Vuforia.StateManager
struct  StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * ___mActiveTrackableBehaviours_3;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA * ___mVuMarkManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mCameraPositioningHelper_6;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 * ___mIlluminationManager_7;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviours_0), (void*)value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAutomaticallyCreatedBehaviours_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBehavioursMarkedForDeletion_2), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mActiveTrackableBehaviours_3)); }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveTrackableBehaviours_3), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_4() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mVuMarkManager_4)); }
	inline VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA * get_mVuMarkManager_4() const { return ___mVuMarkManager_4; }
	inline VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA ** get_address_of_mVuMarkManager_4() { return &___mVuMarkManager_4; }
	inline void set_mVuMarkManager_4(VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA * value)
	{
		___mVuMarkManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_5() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mDeviceTrackingManager_5)); }
	inline DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA * get_mDeviceTrackingManager_5() const { return ___mDeviceTrackingManager_5; }
	inline DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA ** get_address_of_mDeviceTrackingManager_5() { return &___mDeviceTrackingManager_5; }
	inline void set_mDeviceTrackingManager_5(DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA * value)
	{
		___mDeviceTrackingManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTrackingManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_6() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mCameraPositioningHelper_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mCameraPositioningHelper_6() const { return ___mCameraPositioningHelper_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mCameraPositioningHelper_6() { return &___mCameraPositioningHelper_6; }
	inline void set_mCameraPositioningHelper_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mCameraPositioningHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraPositioningHelper_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_7() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mIlluminationManager_7)); }
	inline IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 * get_mIlluminationManager_7() const { return ___mIlluminationManager_7; }
	inline IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 ** get_address_of_mIlluminationManager_7() { return &___mIlluminationManager_7; }
	inline void set_mIlluminationManager_7(IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 * value)
	{
		___mIlluminationManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIlluminationManager_7), (void*)value);
	}
};


// Vuforia.Tracker
struct  Tracker_tF4436941290E0947C6A345FBEC0ABD56E51AB244  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_tF4436941290E0947C6A345FBEC0ABD56E51AB244, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// Vuforia.UnityComponentExtensions
struct  UnityComponentExtensions_t051FC3F8337902825CACAD05D5EE45441C313004  : public RuntimeObject
{
public:

public:
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
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
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Diagnostics.Tracing.EmptyStruct
struct  EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082__padding[1];
	};

public:
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4  : public Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4, ____body_3)); }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * get__body_3() const { return ____body_3; }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217  : public Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// Vuforia.DatasetTracker
struct  DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294  : public Tracker_tF4436941290E0947C6A345FBEC0ABD56E51AB244
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mActiveDataSets
	List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mDataSets
	List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * ___mDataSets_2;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294, ___mActiveDataSets_1)); }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294, ___mDataSets_2)); }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<System.Object>
struct  JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F 
{
public:
	// System.Collections.Generic.IEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::_enumerable
	RuntimeObject* ____enumerable_1;

public:
	inline static int32_t get_offset_of__enumerable_1() { return static_cast<int32_t>(offsetof(JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F, ____enumerable_1)); }
	inline RuntimeObject* get__enumerable_1() const { return ____enumerable_1; }
	inline RuntimeObject** get_address_of__enumerable_1() { return &____enumerable_1; }
	inline void set__enumerable_1(RuntimeObject* value)
	{
		____enumerable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enumerable_1), (void*)value);
	}
};

struct JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::Empty
	JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F_StaticFields, ___Empty_0)); }
	inline JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  get_Empty_0() const { return ___Empty_0; }
	inline JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_0))->____enumerable_1), (void*)NULL);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct  JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E 
{
public:
	// System.Collections.Generic.IEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::_enumerable
	RuntimeObject* ____enumerable_1;

public:
	inline static int32_t get_offset_of__enumerable_1() { return static_cast<int32_t>(offsetof(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E, ____enumerable_1)); }
	inline RuntimeObject* get__enumerable_1() const { return ____enumerable_1; }
	inline RuntimeObject** get_address_of__enumerable_1() { return &____enumerable_1; }
	inline void set__enumerable_1(RuntimeObject* value)
	{
		____enumerable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enumerable_1), (void*)value);
	}
};

struct JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::Empty
	JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_StaticFields, ___Empty_0)); }
	inline JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  get_Empty_0() const { return ___Empty_0; }
	inline JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_0))->____enumerable_1), (void*)NULL);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory
struct  ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE  : public ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232
{
public:

public:
};

struct ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory::_instance
	ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE_StaticFields, ____instance_0)); }
	inline ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * get__instance_0() const { return ____instance_0; }
	inline ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct  LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A  : public ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232
{
public:

public:
};

struct LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::_instance
	LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A_StaticFields, ____instance_0)); }
	inline LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * get__instance_0() const { return ____instance_0; }
	inline LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Vuforia.TargetFinder/TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325 
{
public:
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct  VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct  VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct  StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Newtonsoft.Json.Linq.JTokenType
struct  JTokenType_tF29495BE4F8BFE607656DE5CE03F5753AA56A7F3 
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JTokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JTokenType_tF29495BE4F8BFE607656DE5CE03F5753AA56A7F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.ObjectTracker
struct  ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811  : public DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * ___mTargetFinders_3;
	// Vuforia.RuntimeImageSource Vuforia.ObjectTracker::mRuntimeImageSource
	RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D * ___mRuntimeImageSource_4;

public:
	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811, ___mTargetFinders_3)); }
	inline Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mRuntimeImageSource_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811, ___mRuntimeImageSource_4)); }
	inline RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D * get_mRuntimeImageSource_4() const { return ___mRuntimeImageSource_4; }
	inline RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D ** get_address_of_mRuntimeImageSource_4() { return &___mRuntimeImageSource_4; }
	inline void set_mRuntimeImageSource_4(RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D * value)
	{
		___mRuntimeImageSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRuntimeImageSource_4), (void*)value);
	}
};


// Vuforia.TargetFinder
struct  TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder/TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargets_1)); }
	inline Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargetFinderState_3)); }
	inline TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325 * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mNewResults_4)); }
	inline List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TrackableBehaviour/Status
struct  Status_t0FAE561347BC0DCE2E6F4217138ECD017254C5D6 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t0FAE561347BC0DCE2E6F4217138ECD017254C5D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour/StatusInfo
struct  StatusInfo_t0A4AC2AFE1F5149420F302A187EF008CDF17D7D4 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t0A4AC2AFE1F5149420F302A187EF008CDF17D7D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackerData/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/PoseData::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData/PoseData::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// System.Int32 Vuforia.TrackerData/PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct  StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleInt
struct  StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04  : public TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.JValue
struct  JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F  : public JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JTokenType Vuforia.Newtonsoft.Json.Linq.JValue::_valueType
	int32_t ____valueType_14;
	// System.Object Vuforia.Newtonsoft.Json.Linq.JValue::_value
	RuntimeObject * ____value_15;

public:
	inline static int32_t get_offset_of__valueType_14() { return static_cast<int32_t>(offsetof(JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F, ____valueType_14)); }
	inline int32_t get__valueType_14() const { return ____valueType_14; }
	inline int32_t* get_address_of__valueType_14() { return &____valueType_14; }
	inline void set__valueType_14(int32_t value)
	{
		____valueType_14 = value;
	}

	inline static int32_t get_offset_of__value_15() { return static_cast<int32_t>(offsetof(JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F, ____value_15)); }
	inline RuntimeObject * get__value_15() const { return ____value_15; }
	inline RuntimeObject ** get_address_of__value_15() { return &____value_15; }
	inline void set__value_15(RuntimeObject * value)
	{
		____value_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_15), (void*)value);
	}
};


// Vuforia.TrackerData/TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/TrackableResultData::pose
	PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  ___pose_0;
	// System.Double Vuforia.TrackerData/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___pose_0)); }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  get_pose_0() const { return ___pose_0; }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/VuMarkTargetResultData::pose
	PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  ___pose_0;
	// System.Double Vuforia.TrackerData/VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___pose_0)); }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  get_pose_0() const { return ___pose_0; }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Boolean>
struct  Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Byte>
struct  Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Char>
struct  Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTime>
struct  Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTimeOffset>
struct  Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Decimal>
struct  Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Double>
struct  Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Guid>
struct  Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int16>
struct  Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int32>
struct  Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int64>
struct  Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.IntPtr>
struct  Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Object>
struct  Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.SByte>
struct  Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Single>
struct  Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.TimeSpan>
struct  Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt16>
struct  Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt32>
struct  Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt64>
struct  Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UIntPtr>
struct  Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Boolean>
struct  Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Byte>
struct  Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Char>
struct  Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTime>
struct  Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTimeOffset>
struct  Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Decimal>
struct  Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Double>
struct  Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Guid>
struct  Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int16>
struct  Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int32>
struct  Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int64>
struct  Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.IntPtr>
struct  Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Object>
struct  Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.SByte>
struct  Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Single>
struct  Transformer_1_t761E0F084572634E94674D7C1912B56771C73045  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.TimeSpan>
struct  Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt16>
struct  Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt32>
struct  Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt64>
struct  Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UIntPtr>
struct  Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Boolean>
struct  Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Byte>
struct  Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Char>
struct  Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTime>
struct  Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTimeOffset>
struct  Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Decimal>
struct  Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Double>
struct  Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Guid>
struct  Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int16>
struct  Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int32>
struct  Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int64>
struct  Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.IntPtr>
struct  Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Object>
struct  Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.SByte>
struct  Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Single>
struct  Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.TimeSpan>
struct  Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt16>
struct  Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt32>
struct  Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt64>
struct  Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UIntPtr>
struct  Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Boolean>
struct  Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Byte>
struct  Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Char>
struct  Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTime>
struct  Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTimeOffset>
struct  Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Decimal>
struct  Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Double>
struct  Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Guid>
struct  Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int16>
struct  Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct  Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct  Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct  Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct  Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct  Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct  Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct  Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct  Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct  Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct  Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct  Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct  Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct  Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct  Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct  Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct  Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct  Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct  Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct  Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct  Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct  Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct  Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct  Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct  Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct  Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct  Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct  Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct  Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct  Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct  Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct  Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct  Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct  Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct  Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct  Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct  Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct  Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct  Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct  Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct  Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct  Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct  Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct  Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct  Transformer_1_t873B2E4C2418F756278367655E1C64D654382460  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct  Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct  Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct  Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct  Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct  Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct  Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct  Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct  Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct  Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct  Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct  Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct  Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct  Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct  Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct  Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct  Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct  Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct  Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct  Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct  Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct  Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct  Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct  Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct  Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct  Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct  Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct  Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct  Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct  Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct  Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct  Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct  Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct  Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct  Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct  Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct  Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct  Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct  Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct  Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct  Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct  Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct  Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct  Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct  Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct  Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct  Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct  Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct  Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>>
struct  Func_2_tFB89B3055D8384D5313A610D5CE710F430889708  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct  Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct  Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct  Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct  Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct  Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct  EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct  ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct  MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  m_Items[1];

public:
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * m_Items[1];

public:
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * m_Items[1];

public:
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3727FEA5B0A5089AECAC7A8386659F8B5FD405FA_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1_gshared (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F * __this, RuntimeObject* ___enumerable0, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_gshared (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___attr0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * NoAllocHelpers_ExtractArrayFromList_mB4B8B76B4F160975C949FB3E15C1D497DBAE8EDC (RuntimeObject * ___list0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// System.Attribute[] Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* ReflectionUtils_GetAttributes_m6067358A341C1927CC81D2A5D9C11AAEF573409B (RuntimeObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Vuforia.Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m6EE5629FF992C29438179322CFFACA67191CB471 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object Vuforia.Newtonsoft.Json.Linq.JValue::get_Value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_m863622B6BF93E0B40C47255B89A05AFEE3417FF1 (Type_t * ___t0, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926 (RuntimeObject * ___value0, Type_t * ___conversionType1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755 (RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___t0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m3727FEA5B0A5089AECAC7A8386659F8B5FD405FA (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m3727FEA5B0A5089AECAC7A8386659F8B5FD405FA_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyReplicate_mEDC15DE05FF5C303EB7E28DAFC3AB790190367FC (void* ___destination0, void* ___source1, int32_t ___size2, int32_t ___count3, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F (void* ___destination0, int32_t ___destinationStride1, void* ___source2, int32_t ___sourceStride3, int32_t ___elementSize4, int32_t ___count5, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77 (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104 (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Int32 UnityEngine.UIElements.StyleInt::get_specificity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1 (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F * __this, RuntimeObject* ___enumerable0, const RuntimeMethod* method)
{
	((  void (*) (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F *, RuntimeObject*, const RuntimeMethod*))JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1_gshared)(__this, ___enumerable0, method);
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::AsJEnumerable(System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * Type_GetConstructor_m4371D7AD6A8E15067C698696B0167323CBC7F3DA (Type_t * __this, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___types0, const RuntimeMethod* method);
// Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory Vuforia.Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 * JsonTypeReflector_get_ReflectionDelegateFactory_mDFB8BCA5867EB532325030FA3D2BCCA294792766 (const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8 (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * Expression_Parameter_m6760804AC590CD46A47282028B0D728E82745D3C (Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory::BuildMethodCall(System.Reflection.MethodBase,System.Type,System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ExpressionReflectionDelegateFactory_BuildMethodCall_m1B92DC483935B73BA0CA4DEDBF6FB83768EF6666 (ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * __this, MethodBase_t * ___method0, Type_t * ___type1, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___targetParameterExpression2, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___argsParameterExpression3, const RuntimeMethod* method);
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::Lambda(System.Type,System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 * Expression_Lambda_m7F96089BE8674C877390AA3412C02BB5AEBB87D0 (Type_t * ___delegateType0, Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___body1, ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* ___parameters2, const RuntimeMethod* method);
// System.Delegate System.Linq.Expressions.LambdaExpression::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * LambdaExpression_Compile_m5F5C8361E0088640BE4D3A23E00B3FF6505EAEA3 (LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_m7BACC92FB27D1999A084F5346451CEE9FD0445E4 (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___left0, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * __this, Type_t * ___key0, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *, Type_t *, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_mC5CE5D963BD80599045C7370AE0C384AB52857B9 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Vuforia.ImageTargetFinder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetFinder__ctor_m628F3FD8293B684B399E21D807806229FF69FB99 (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04 * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * __this, Type_t * ___key0, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *, Type_t *, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m37863ECCB395B23FD2A694C9A67E2332D1CE97D0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m334E2B648F386B328A8E5A260B686242B9B1A825_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m56104E1DFC5F47D3DB51348DD3935EEE53DCB433_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_m800C0157D5841A8D4C6A741E6C4F9FFFC0E0E33F_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m72CF8BBE548B570F27C87B6900191B9BC58FCA73_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_2;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_m4B3891162A682BB637507D7D7529AFA4F0C80CE3_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_10 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_11 = V_2;
		return (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Mesh_GetAllocArrayFromChannel_TisColor_t119BCA590009762C7223FDD3AF9706653AC84ED2_mA88E7613D69601BA856B9A2C4308B927F7486944_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_3 = ((  ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_4 = V_0;
		return (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Mesh_GetAllocArrayFromChannel_TisColor_t119BCA590009762C7223FDD3AF9706653AC84ED2_m8ED35A012018D4438C73F6D29FBC13CDEC95833F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)((ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_10 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_11 = V_2;
		return (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m6D8AF77439E7F5AD3656075625D18D191068C09F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_10 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_11 = V_2;
		return (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m083189084CF765FF8179220A926820E814D85F56_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = V_2;
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mEADBC5B21EE5EA79F60D83CCD98B1BE0E5C03752_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_10 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_11 = V_2;
		return (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_11;
	}
}
// T[] UnityEngine.NoAllocHelpers::ExtractArrayFromListT<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* NoAllocHelpers_ExtractArrayFromListT_TisRuntimeObject_mE481DEB3FC4919526C045BE7F46FF14FF9C19C8C_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		RuntimeArray * L_1 = NoAllocHelpers_ExtractArrayFromList_mB4B8B76B4F160975C949FB3E15C1D497DBAE8EDC((RuntimeObject *)L_0, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
	}
}
// T[] UnityEngine.NoAllocHelpers::ExtractArrayFromListT<UnityEngine.Matrix4x4>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* NoAllocHelpers_ExtractArrayFromListT_TisMatrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_m3F4D7A90A21AB7E2CB7C9415F454FB1AF1E92B4F_gshared (List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7 * ___list0, const RuntimeMethod* method)
{
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* V_0 = NULL;
	{
		List_1_tEB5A83AED8C110BD9C7C0230388DC70C83A6B4D7 * L_0 = ___list0;
		RuntimeArray * L_1 = NoAllocHelpers_ExtractArrayFromList_mB4B8B76B4F160975C949FB3E15C1D497DBAE8EDC((RuntimeObject *)L_0, /*hidden argument*/NULL);
		V_0 = (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)((Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_000f;
	}

IL_000f:
	{
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_2 = V_0;
		return (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)L_2;
	}
}
// T[] UnityEngine.NoAllocHelpers::ExtractArrayFromListT<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* NoAllocHelpers_ExtractArrayFromListT_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m853C6F703156A3DD8E35F6F207655A277145623B_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___list0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___list0;
		RuntimeArray * L_1 = NoAllocHelpers_ExtractArrayFromList_mB4B8B76B4F160975C949FB3E15C1D497DBAE8EDC((RuntimeObject *)L_0, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_000f;
	}

IL_000f:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_2 = V_0;
		return (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_2;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_ConvertObjects_TisRuntimeObject_m94711E44E9B970084C63588FDEBE3D295D14A0DA_gshared (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = ___rawObjects0;
		NullCheck(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_2;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_15;
	}
}
// T[] Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes<System.Object>(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ReflectionUtils_GetAttributes_TisRuntimeObject_mD07994B46CC3B773ECA0563F20E81E9BBD622077_gshared (RuntimeObject * ___attributeProvider0, bool ___inherit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetAttributes_TisRuntimeObject_mD07994B46CC3B773ECA0563F20E81E9BBD622077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___attributeProvider0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		bool L_3 = ___inherit1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var);
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_4 = ReflectionUtils_GetAttributes_m6067358A341C1927CC81D2A5D9C11AAEF573409B((RuntimeObject *)L_0, (Type_t *)L_2, (bool)L_3, /*hidden argument*/NULL);
		V_0 = (AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17*)L_4;
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_5 = V_0;
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_1;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_1;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
	}

IL_001e:
	{
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_8 = V_0;
		RuntimeObject* L_9 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m83C2448BF685A4A8F6F810EB434B5675787F2C2E_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, const RuntimeMethod* method)
{
	{
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_0 = ___obj0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m5B4C13F4D9D5A76B18DDB539A62EAE0511F4A63D_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, bool ___includeInactive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m5B4C13F4D9D5A76B18DDB539A62EAE0511F4A63D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0;
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_1 = ___obj0;
		bool L_2 = ___includeInactive1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_2 = (int32_t)0;
		goto IL_003d;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_3;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8, /*hidden argument*/NULL);
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_10 = ___obj0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_13 = V_0;
		RuntimeObject * L_14 = V_3;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Convert<System.Object,System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_gshared (RuntimeObject * ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___token0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		return (RuntimeObject *)L_1;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___token0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		bool L_7 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_4, (Type_t *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		bool L_12 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_9, (Type_t *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject * L_13 = ___token0;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0061:
	{
		RuntimeObject * L_14 = ___token0;
		V_1 = (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)IsInst((RuntimeObject*)L_14, JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F_il2cpp_TypeInfo_var));
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_15 = V_1;
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_16 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		RuntimeObject * L_17 = ___token0;
		NullCheck((RuntimeObject *)L_17);
		Type_t * L_18 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_19, /*hidden argument*/NULL);
		String_t* L_21 = StringUtils_FormatWith_m6EE5629FF992C29438179322CFFACA67191CB471((String_t*)_stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85, (RuntimeObject*)L_16, (RuntimeObject *)L_18, (RuntimeObject *)L_20, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_22 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_22, (String_t*)L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_RuntimeMethod_var);
	}

IL_009a:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_23 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23);
		RuntimeObject * L_24 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_00b3;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_25 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25);
		RuntimeObject * L_26 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_26, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_00b3:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_27, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_28;
		Type_t * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var);
		bool L_30 = ReflectionUtils_IsNullableType_m863622B6BF93E0B40C47255B89A05AFEE3417FF1((Type_t *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00df;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_31 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31);
		RuntimeObject * L_32 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_33 = V_0;
		return (RuntimeObject *)L_33;
	}

IL_00d8:
	{
		Type_t * L_34 = V_2;
		Type_t * L_35 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04((Type_t *)L_34, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_35;
	}

IL_00df:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_36 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36);
		RuntimeObject * L_37 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36, /*hidden argument*/NULL);
		Type_t * L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_39 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_40 = Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926((RuntimeObject *)L_37, (Type_t *)L_38, (RuntimeObject*)L_39, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_40, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Convert<System.Object,System.Single>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_gshared (RuntimeObject * ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___token0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return (float)L_1;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___token0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		bool L_7 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_4, (Type_t *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		bool L_12 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_9, (Type_t *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject * L_13 = ___token0;
		return (float)((*(float*)((float*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}

IL_0061:
	{
		RuntimeObject * L_14 = ___token0;
		V_1 = (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)IsInst((RuntimeObject*)L_14, JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F_il2cpp_TypeInfo_var));
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_15 = V_1;
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_16 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		RuntimeObject * L_17 = ___token0;
		NullCheck((RuntimeObject *)L_17);
		Type_t * L_18 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_19, /*hidden argument*/NULL);
		String_t* L_21 = StringUtils_FormatWith_m6EE5629FF992C29438179322CFFACA67191CB471((String_t*)_stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85, (RuntimeObject*)L_16, (RuntimeObject *)L_18, (RuntimeObject *)L_20, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_22 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_22, (String_t*)L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_RuntimeMethod_var);
	}

IL_009a:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_23 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23);
		RuntimeObject * L_24 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_00b3;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_25 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25);
		RuntimeObject * L_26 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25, /*hidden argument*/NULL);
		return (float)((*(float*)((float*)UnBox(L_26, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}

IL_00b3:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_27, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_28;
		Type_t * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var);
		bool L_30 = ReflectionUtils_IsNullableType_m863622B6BF93E0B40C47255B89A05AFEE3417FF1((Type_t *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00df;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_31 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31);
		RuntimeObject * L_32 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_33 = V_0;
		return (float)L_33;
	}

IL_00d8:
	{
		Type_t * L_34 = V_2;
		Type_t * L_35 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04((Type_t *)L_34, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_35;
	}

IL_00df:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_36 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36);
		RuntimeObject * L_37 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36, /*hidden argument*/NULL);
		Type_t * L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_39 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_40 = Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926((RuntimeObject *)L_37, (Type_t *)L_38, (RuntimeObject*)L_39, /*hidden argument*/NULL);
		return (float)((*(float*)((float*)UnBox(L_40, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B2_0 = NULL;
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value0;
		JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * L_2 = (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)IsInst((RuntimeObject*)L_1, JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, (String_t*)_stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_4;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B2_0 = NULL;
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value0;
		JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * L_2 = (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)IsInst((RuntimeObject*)L_1, JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, (String_t*)_stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_RuntimeMethod_var);
	}

IL_001f:
	{
		float L_4 = ((  float (*) (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (float)L_4;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m7FF65E698C272097AD445C5259868F08F3BEFD85_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Single>(System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Value_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m50EAC9F5F7119856C9ACE8C20E00C201CD59B1E2_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		float L_1 = ((  float (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (float)L_1;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m4703200E8457C0A92046ED760F00CE44005EF424_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * L_0 = ((Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m39405AED72DA92F26E0172BAAE2234CAD45EBB81_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * L_0 = ((Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m98E56B5A92D022D027A74E25FDCC3D799EAB6804_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * L_0 = ((Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mB928A3EAFC85B48CA5F8746998096D6892171B3C_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * L_0 = ((Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m67EC6A4FF20B881663660072CA639825FC347F8C_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * L_0 = ((Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3F6FD286745E992B6827D8C75772F7A3012CB51E_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * L_0 = ((Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m27A19C22B04469C383D0777A361CC0504DBFF8ED_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * L_0 = ((Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mFE62B63ADDBFC56BD3809BA6A7C01D084B593D37_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * L_0 = ((Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m2642AADE370AEBFF905A6B0DA0A6259F236F748C_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * L_0 = ((Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisGuid_t_m5A0AFEE2BF910E98D56D0880005B1DDD51FD939C_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * L_0 = ((Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m230E24E784CB02937D8335B389AEB021289B0A82_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * L_0 = ((Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mB2ED9C3B935700D4BE55749949D58FE3B63B9B55_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * L_0 = ((Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m8DCE839F3A6EA158B607CC83266509F8F1BE588F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * L_0 = ((Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisIntPtr_t_mABB7C010A235E7F7443E34811536985C56709032_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * L_0 = ((Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisRuntimeObject_mB6959F0D52C5FF6F05B485070A979E423C7C058C_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * L_0 = ((Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m562963CD9F91D60E971EFA159959EF8A92E0C3AD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * L_0 = ((Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m0349C7393DD78A2B9EAFD91BBD31A83D1AEF0E06_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * L_0 = ((Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mA16C77DBC2AE7C44F2DD9EF81CB34C302590EBBB_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * L_0 = ((Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m90785014402CE39C95C6A464FF15913865F0D20A_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * L_0 = ((Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m9BCA2BA360B336C8F1990736BDD2CD3C0532B5F9_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * L_0 = ((Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2C4DC528C0AE341726424A1F3F5856B320DD6B99_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * L_0 = ((Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUIntPtr_t_m1E02775612B080FE1AF0FD5661569EDC66A781E0_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * L_0 = ((Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m192073E98ADAA1A5F226CDF612C5F4A1EA326F04_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * L_0 = ((Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mB151EF5C27C8C3E67DC8EF7612BB364AF5AE71CB_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * L_0 = ((Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mA781CBF81CB566C5B97681482DDE49EE24BF2D39_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * L_0 = ((Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mD2D22DC060CF312B9A3016DE6A971B06E2A060E7_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * L_0 = ((Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m25D70E9A31AFD54807927CE75E424595D55EE885_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * L_0 = ((Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3C1554928412F1AFB670D5FE501C29108FD1BE6A_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * L_0 = ((Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m5C13043D24E9A69C7DCB2C4FCEF55CF0AF1C2C5F_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * L_0 = ((Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m4923214A4EAA4DAA4CEC11C2C911816FE1F47ABD_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * L_0 = ((Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mF5FF48C2DBF5A36B8C7AAEBD55DA020E48AF83FB_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * L_0 = ((Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisGuid_t_mB76EE32A727B7F98A0F65C59B00E43C0D8FB43A7_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * L_0 = ((Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m8F6C334DF8F1564AB5E45BA8211EE4456CBBB231_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * L_0 = ((Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m1D6C095DECABD7ECA612CE50A9323CC7558CE492_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * L_0 = ((Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mA8667973E976E623362B3916BD0A01EEFB22FB84_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * L_0 = ((Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisIntPtr_t_m5938B0521628AA9D2A57E92925B307C735673EDC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * L_0 = ((Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisRuntimeObject_m8EE8133972CA40759750FDFE5701582530670348_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * L_0 = ((Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m93E20FE7F1103F6F41FD560C2458DD73F85633A3_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * L_0 = ((Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD0181E906F9F43D543F29CE6062EB5408367D10C_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * L_0 = ((Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m69F9C79C03AB361FF42EBA7B6B818AF9BC434D35_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * L_0 = ((Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m98848A814468F001D1BAE2AC1382BB04F4B9A0FA_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * L_0 = ((Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB30F83D8D6EF175B27FD93FA87B6997566BDC30E_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * L_0 = ((Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m40973C82E1D5B4B70939CE0007C506D0AB05F808_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * L_0 = ((Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUIntPtr_t_mB8B15AA4089033746DB5FC9A7D782222FA37760A_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * L_0 = ((Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mD87021825E28AB9152A64711E36E831AB5BC1A69_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * L_0 = ((Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m904BD89D0794EDD4BA1ECD63B007E98198FE842A_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * L_0 = ((Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m250DB1C0688ED8987DEA68C8B4005B4C94701E81_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * L_0 = ((Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mE245467808C465EB51EE6E7A6D381E77C35886C1_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * L_0 = ((Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mE31527D1BE35D2661853F15F4C0D708E9C0B8FD9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * L_0 = ((Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m9DE76E933754179F978E8996F91230BAC513DE6D_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * L_0 = ((Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m6B23A7ADD84FEEFE2CF495A10C5F7F8A237F12F8_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * L_0 = ((Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mE33D0543DFD396F129480CE6EBB5AB7ED4953C63_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * L_0 = ((Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m18B425A1BD292BF835CD978A840B2B0495672AB6_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * L_0 = ((Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisGuid_t_m929A4D0FCC3C16092FBF35AB0C12A9A3C4ACA976_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * L_0 = ((Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m79C33E1C8F36629007121977ACA4722E2BFB97A5_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * L_0 = ((Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m3352690FD9B7810E53BD0226ABA15061DABC3861_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * L_0 = ((Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mCE856A4A6FA913D30106882D36D439389EBED04F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * L_0 = ((Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisIntPtr_t_mCFDB3D5473BAE1CBA9286BB2552E06C1C389121A_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * L_0 = ((Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisRuntimeObject_m5381A5A027D55D6BD1F5AFEFDEFA4F6045D163AE_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * L_0 = ((Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m60FDEFA18A26FD45A8D1668C7844B4EC02D525B0_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * L_0 = ((Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m120DF6B1F211DE3BB1CB7D07FEF84C22A6704F3F_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * L_0 = ((Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m77E6D4B131D8064BC00515F25FC3D872D1F189D1_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * L_0 = ((Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m76AE6217EF496F71CA44BF726149CA82CA98A851_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * L_0 = ((Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mCF05B647DA52B81D78F7C1C9E805162DCC534EC0_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * L_0 = ((Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mD9ACCDE304740CCDD7DE5D3061FEBA4751A50AAD_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * L_0 = ((Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUIntPtr_t_mCF8F606BDF81C71855C4901A31FE3DDE2B41D07D_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * L_0 = ((Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mB862CD59E18B5D6DE3975635D248445FC1DCFEDC_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * L_0 = ((Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m767C2FDFF9ED64B0241800DCD45D84B6C424BBAF_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * L_0 = ((Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCA8359EA41F7B4D4F0334509E5C772674870DF27_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * L_0 = ((Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mDED6BE58F3B45FF48522331B6D37042116DC852B_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * L_0 = ((Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m7AF2CC9A88EF6C7BA7062CBC9E6671DCFDDDE6C4_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * L_0 = ((Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA79E752D231DF346C6FDB3DB95DC5E91D1E994D5_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * L_0 = ((Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mF70A048030A6D511CFFA1F5C68CDF76AF0817985_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * L_0 = ((Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m438A2CEB68A593F5B57AC0CC95CCBDF3E5746A53_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * L_0 = ((Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m576C2E63208E9FA2318899CD5A9E0CD526980673_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * L_0 = ((Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisGuid_t_m0AB9E683843C5F8026B4BE353B704B9C0445562B_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * L_0 = ((Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mC7DC8A4161C7584AECE6AF041D57B381EE5A477F_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * L_0 = ((Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m037FE224C3CFAAD3497F4B3F31C82178225B384B_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * L_0 = ((Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mECC8829C16BE4538050F0A94F292AB8BC5EEE745_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * L_0 = ((Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisIntPtr_t_mA69192E793A3C7BEE631D420533AFFBBEE0E6F70_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * L_0 = ((Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisRuntimeObject_m9841D59B401BD9CBB358259BD32F5CE8276474C0_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * L_0 = ((Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m053631F41BC7D2E505B1600D5DF0B87718AC9F26_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * L_0 = ((Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD79C3D4ADCAC01009016633870F0F851B99BD7C7_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * L_0 = ((Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m5562E71891F3CD5A26093B67877C592DC57BF410_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * L_0 = ((Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD5B60AFDB1E022C0979DE3346D185C44D2022A2C_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * L_0 = ((Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB6D6836EC3E9686143CEF67C24015E934AFFF69D_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * L_0 = ((Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m17B3592AA114BB4F62C43FBE77386893E6A81672_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * L_0 = ((Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUIntPtr_t_mBC233F334A4E586EC36F2284329A6B2E317ABF44_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * L_0 = ((Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Object>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EnumHelper_1_Cast_TisRuntimeObject_m14B8662697DCB26B5CE66EFF6D0A9BA01937351F_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * L_0 = ((Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mAE533483D2EB9736CA5036F45470ADB1E9F54524_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * L_0 = ((Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m9C053DC9213280343424F5D4E6CA5412421EE9C1_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * L_0 = ((Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m76E7947556939FCC5864462556D6EABBED1A2885_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * L_0 = ((Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mFEFA14B14A9E77A4CE09CAE160CF3D675326177F_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * L_0 = ((Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m673C9F8CB81B95A3CB90E49ABBE57EF86259907F_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * L_0 = ((Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mC26286A6D4E8B13D974E305ED759B60852346A79_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * L_0 = ((Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m740C047BDE43758747E4B36E049DC0AE266AFA60_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * L_0 = ((Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mECD8FBA0366809F56BB17362A9D59211AE7C3285_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * L_0 = ((Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m51A5D50B60E6833C3719179DAE4C745C4F72C18E_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * L_0 = ((Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisGuid_t_m0FE9A2031A026A598CD001010D084B0045B6A34D_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * L_0 = ((Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF38F852ACA2D84A5A751E725A2BD6E8075EAF7BF_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * L_0 = ((Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mDC45B432580ACAEF29CFB6EAD130C43FD4EE2EE0_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * L_0 = ((Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m02A2989AD15E5C61CC8170CC360AD7D12462E6B0_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * L_0 = ((Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisIntPtr_t_m10DFA878C4388DB28234BEDE38F5B5102467D111_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * L_0 = ((Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisRuntimeObject_mE1FDE0675779B26082666516C621FEC19B207148_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * L_0 = ((Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m8ADF6B2EB361F9687FF8AD704E272E4CC73B65DD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * L_0 = ((Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC50E5A46276EEA9830E1DC4EE36D82C22F66C64A_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * L_0 = ((Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m136ECC8F15796D07201EF82AB5087C8577204CE7_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * L_0 = ((Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mB9241B4372765DCC3E2FB1E580E530F582D1DC42_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * L_0 = ((Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD1099AA921562AC8786F080BFFE193F342C52968_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * L_0 = ((Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2D0D20AC9F0E60DE8262A897B6FE18ED9D025C75_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * L_0 = ((Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUIntPtr_t_mD2B5AC3EAE3E39B8293CD9DC72D51C837C0783F5_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * L_0 = ((Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m3B872FF621B738CE1DF433FB14FE279F77DB875B_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * L_0 = ((Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDA9B765AC14F77C923A7CDB3C0D706221CFD15E5_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * L_0 = ((Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m08A6E25B90A3E4623E4D4C20C9BDED75E046317C_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * L_0 = ((Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mC622F6D0E6E8E105E53938B01F21FBBE3929BE59_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * L_0 = ((Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mC92B8CBBB0C4B10ED4E2450902EE2786DC858170_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * L_0 = ((Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA1D9F1862F772E31942176AD3F8CD00167E46851_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * L_0 = ((Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mCD324132C02011B0B32CCC47A4808A77236AED44_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * L_0 = ((Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m9B67538CB09A9BE23FFCE9BEC85E666C9A431017_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * L_0 = ((Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m47C7D923FD0FB3DB00E561558507770017AE9BCE_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * L_0 = ((Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisGuid_t_m654610841B56D96AD377D93B265DFEA5BCCD849F_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * L_0 = ((Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m68BD7EC0E8A27ABE7F05B6775C994BBF0AC9CF61_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * L_0 = ((Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFD2ADB5D6FF91AD34628103AB08D7D69E52B3F80_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * L_0 = ((Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mDEB00F12BF02652DD353CC17480C93E61DAD532F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * L_0 = ((Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisIntPtr_t_mA4FC52AC62D68943074BF8C0C5BFD283DBCC73D0_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * L_0 = ((Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisRuntimeObject_m33C8E0733764B34A5BCE1F2E6AFB8C155F39BEBF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * L_0 = ((Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m0E9A83FB710C70A26B0CCECD93E36054FD591BC6_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * L_0 = ((Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCF0D075974C55087E231D074BC65919B184F61B0_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * L_0 = ((Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m2B04CEE74D1BE3CF4EDB28113F73829B46C02053_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * L_0 = ((Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD814412C42F9D58EA1FDD6CE78D85CD7912178EC_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * L_0 = ((Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m569864A50A8516B4ED140C81F5208CAF8ABE5054_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * L_0 = ((Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m10412A2B6C85347835984822C2FA20E792A40553_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * L_0 = ((Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUIntPtr_t_m4C89E4587F264A9DCAD1F7C77B9D279AA1CC44D1_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * L_0 = ((Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mE45474D78C9C75421B50BA3B6F0D8A036086E3D4_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * L_0 = ((Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mA021FB7B9377D61AD510EFEE22C14B074DE4A97C_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * L_0 = ((Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCB509FD508A9096FD819CB976FCE17421E34AD79_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * L_0 = ((Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m3214E0BD22A7B25FE44C18CF248F52316E7BC735_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * L_0 = ((Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mB9853A7D22563E8B8B771F5876882C9B092C5B20_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * L_0 = ((Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m7D5EB067A14234897ACF89E7DF83657410CC2A50_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * L_0 = ((Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m31875099D68E21BE514D36A42DE21BFB3C26AB90_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * L_0 = ((Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m52991F9C4A2BAFC16B33C6A3C863FF0EECE550DE_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * L_0 = ((Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mE4FDEAE7059AF2D9FAFF04E2F28F252697F34DD3_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * L_0 = ((Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisGuid_t_m6635AF97CD8EFCDC822515F565C0503A6035A773_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * L_0 = ((Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m3A03746E9FB5A67E1FAFBC546A726D7D461367CB_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * L_0 = ((Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m817E92EDAC63A713BB5FC2374E08E7999D44CC40_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * L_0 = ((Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m802F634F8484AA08CF5375C2FA35BFA704082BEC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * L_0 = ((Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisIntPtr_t_mB193F58608DFB76891B646A614E6FFA5CAF045AC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * L_0 = ((Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisRuntimeObject_m2FF75954BEE32E7CBA81F696CFADEB32570A5295_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * L_0 = ((Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_mB1165679FE03D30141CFB54B4E2BE302E9BA770A_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * L_0 = ((Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m70BC7C784870C55D1141CCE9A5418C9043782C55_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * L_0 = ((Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m29031690307B405A095E8E3B3592FF735CA185CF_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * L_0 = ((Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m12942B34C5E83255DBD90AEB2A90B3E7951E8864_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * L_0 = ((Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m71AFD836AA7C64489EEF9407F203B4EC27425961_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * L_0 = ((Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mE1C98F17A06AA92C3F21999A6E0FFE8EBEE7EC00_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * L_0 = ((Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUIntPtr_t_mE20967A9C6BCC22F95A0C0F33954E8F20C099B10_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * L_0 = ((Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mA6D4DB9B4A0AEBFDB545206DD5F50F1B3B99E137_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * L_0 = ((Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBB6EBFF5DB5352C897AF4E4871D475088E798CE8_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * L_0 = ((Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m9A4AE5F28B661AB3608A08D4A008C6EFD59C8EF3_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * L_0 = ((Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mBE29FD6567FF1B7F5CC17B11E8A50CBCB4E457F8_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * L_0 = ((Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mAC44106BE1CC32C04B8323E028317909E16DE5D9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * L_0 = ((Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA92902179E75C6237A1FAF1A93DBC8A54C3D9F1C_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * L_0 = ((Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mD190CF4C4FFCF5CF0B55A6551271A963D62BACB4_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * L_0 = ((Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mD96A07754EB55396C0767DDFF0990FDE4642BA5C_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * L_0 = ((Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m89DE2BCD31E38F694C6C046DD591D93E6A4905BD_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * L_0 = ((Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisGuid_t_m6A79FE5AAC75B2E933B0F2DF4316BDA9E79E6848_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * L_0 = ((Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mED333DF6FD1DC9723DE9E7A47A894EF358196150_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * L_0 = ((Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC432022B01CCED53D1279F08CCAAB4DBB83FBB41_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * L_0 = ((Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m51B47E785BA2597ABFBD0A9E7CAEBF2ECF1877AC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * L_0 = ((Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisIntPtr_t_m1BE5340DBEDC930432982B6738A5820A9A4FCD42_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * L_0 = ((Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisRuntimeObject_m24E9DBADCE63823F1FB2AA2A116982AD2BEA67FF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * L_0 = ((Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m40171CC2B05F787A453D415B7B354C70FA91EB3C_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * L_0 = ((Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m08399F0F8C4F12BD2E29A845B2D5F7796C41B29E_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * L_0 = ((Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mBD8CF0C29D9F8046510C4F5872622EB351F706AE_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * L_0 = ((Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m663895C442194B5C317393C7D716656B08408CAE_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * L_0 = ((Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3A2842E06D5905F6E685A3033ECE6BB76E8912CF_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * L_0 = ((Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m4F2C115C6D08D4097EC80756F75A08786FF84C9B_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * L_0 = ((Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUIntPtr_t_mF6BC18592D238BE188D32FDF0722A5D2882A7763_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * L_0 = ((Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_2 = Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_3;
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		intptr_t L_4 = Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, (int32_t)0, /*hidden argument*/NULL);
		void* L_5 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		int64_t L_6 = Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_8 = ((  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_5, (int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_6/(int64_t)(((int64_t)((int64_t)L_7)))))))), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_8;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_9 = V_1;
		V_3 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_10 = V_3;
		return (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_10;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.TrackableId>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  NativeCopyUtility_PtrToNativeArrayWithDefault_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m00D7B4AB915F2F6601658140428DA9F6C2AFE39B_gshared (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var array = new NativeArray<T>(length, allocator);
		int32_t L_0 = ___length3;
		int32_t L_1 = ___allocator4;
		NativeArray_1__ctor_m3727FEA5B0A5089AECAC7A8386659F8B5FD405FA((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_0), (int32_t)L_0, (int32_t)L_1, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// if (length == 0)
		int32_t L_2 = ___length3;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return array;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_3 = V_0;
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_3;
	}

IL_0010:
	{
		// var sizeOfT = UnsafeUtility.SizeOf<T>();
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (int32_t)L_4;
		// var addressOfT = UnsafeUtility.AddressOf(ref defaultT);
		void* L_5 = ((  void* (*) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(&___defaultT0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_2 = (void*)L_5;
		// UnsafeUtility.MemCpyReplicate(array.GetUnsafePtr(), addressOfT, sizeOfT, length);
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_6 = V_0;
		void* L_7 = ((  void* (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		void* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyReplicate_mEDC15DE05FF5C303EB7E28DAFC3AB790190367FC((void*)(void*)L_7, (void*)(void*)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// UnsafeUtility.MemCpyStride(array.GetUnsafePtr(), sizeOfT, source, sourceElementSize, sourceElementSize, length);
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_11 = V_0;
		void* L_12 = ((  void* (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_13 = V_1;
		void* L_14 = ___source1;
		int32_t L_15 = ___sourceElementSize2;
		int32_t L_16 = ___sourceElementSize2;
		int32_t L_17 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_12, (int32_t)L_13, (void*)(void*)L_14, (int32_t)L_15, (int32_t)L_16, (int32_t)L_17, /*hidden argument*/NULL);
		// return array;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_18 = V_0;
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_18;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_mF4B10BF59F58D5A871B615BF3BCA1E754363A736_gshared (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var array = new NativeArray<T>(length, allocator);
		int32_t L_0 = ___length3;
		int32_t L_1 = ___allocator4;
		NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_0), (int32_t)L_0, (int32_t)L_1, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// if (length == 0)
		int32_t L_2 = ___length3;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return array;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_3 = V_0;
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_3;
	}

IL_0010:
	{
		// var sizeOfT = UnsafeUtility.SizeOf<T>();
		int32_t L_4 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (int32_t)L_4;
		// var addressOfT = UnsafeUtility.AddressOf(ref defaultT);
		void* L_5 = ((  void* (*) (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___defaultT0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_2 = (void*)L_5;
		// UnsafeUtility.MemCpyReplicate(array.GetUnsafePtr(), addressOfT, sizeOfT, length);
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_6 = V_0;
		void* L_7 = ((  void* (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		void* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyReplicate_mEDC15DE05FF5C303EB7E28DAFC3AB790190367FC((void*)(void*)L_7, (void*)(void*)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// UnsafeUtility.MemCpyStride(array.GetUnsafePtr(), sizeOfT, source, sourceElementSize, sourceElementSize, length);
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_11 = V_0;
		void* L_12 = ((  void* (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_13 = V_1;
		void* L_14 = ___source1;
		int32_t L_15 = ___sourceElementSize2;
		int32_t L_16 = ___sourceElementSize2;
		int32_t L_17 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_12, (int32_t)L_13, (void*)(void*)L_14, (int32_t)L_15, (int32_t)L_16, (int32_t)L_17, /*hidden argument*/NULL);
		// return array;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_18 = V_0;
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_18;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
	}

IL_0031:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14);
		int32_t L_15 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8;
	}

IL_0028:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleValueExtensions::ToStyleEnum<System.Int32Enum>(UnityEngine.UIElements.StyleInt,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  StyleValueExtensions_ToStyleEnum_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m23F1DB8B35560B2F8A54DBB59C111DE0ED0FF86E_gshared (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___styleInt0, int32_t ___value1, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___value1;
		int32_t L_1 = StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_2 = StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		V_1 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = V_1;
		return (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions::AsJEnumerable<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_AsJEnumerable_TisRuntimeObject_mFB01DA48CC8CECE07CCB3C796A1D9E32C219395B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___source0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_2 = ___source0;
		return (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___source0;
		JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1((&L_4), (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_5);
		return (RuntimeObject*)L_6;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::Ancestors<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Ancestors_TisRuntimeObject_m547FC65D74C1BC5B65A3713B88D43C8B68532AC9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Ancestors_TisRuntimeObject_m547FC65D74C1BC5B65A3713B88D43C8B68532AC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__0_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * L_4 = ((U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::AncestorsAndSelf<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_AncestorsAndSelf_TisRuntimeObject_m94435B8469EB22B11B4E4ECE716E48FECE4FF581_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_AncestorsAndSelf_TisRuntimeObject_m94435B8469EB22B11B4E4ECE716E48FECE4FF581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__1_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * L_4 = ((U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__1_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::Children<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Children_TisRuntimeObject_m6B9EE5EBA6CECB324519B8137180E1E6195A1861_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject* L_2 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_1, /*hidden argument*/NULL);
		return (RuntimeObject*)L_2;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::Descendants<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Descendants_TisRuntimeObject_m004CD7680ECAC11CE2AAAE0EC5F0B1BD9A25E455_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Descendants_TisRuntimeObject_m004CD7680ECAC11CE2AAAE0EC5F0B1BD9A25E455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__2_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * L_4 = ((U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__2_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::DescendantsAndSelf<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_DescendantsAndSelf_TisRuntimeObject_mAF06374A391C8662B0656A7D9EDB6106EF0B7549_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_DescendantsAndSelf_TisRuntimeObject_mAF06374A391C8662B0656A7D9EDB6106EF0B7549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__3_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * L_4 = ((U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__3_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JToken::Children<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  JToken_Children_TisRuntimeObject_m23BAB984B9274897CD72A545F92DC5EF2BABE348_gshared (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JToken_Children_TisRuntimeObject_m23BAB984B9274897CD72A545F92DC5EF2BABE348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)__this);
		JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  L_0 = VirtFuncInvoker0< JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  >::Invoke(19 /* Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JToken::Children() */, (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)__this);
		JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  L_1 = L_0;
		RuntimeObject * L_2 = Box(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1((&L_4), (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F )L_4;
	}
}
// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::BuildMapCreator<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * FSharpUtils_BuildMapCreator_TisRuntimeObject_TisRuntimeObject_mFDA8E816C8D99E8536554B1DE58B6FD027973044_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FSharpUtils_BuildMapCreator_TisRuntimeObject_TisRuntimeObject_mFDA8E816C8D99E8536554B1DE58B6FD027973044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * V_0 = NULL;
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * L_0 = (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 *)L_0;
		IL2CPP_RUNTIME_CLASS_INIT(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_il2cpp_TypeInfo_var);
		Type_t * L_1 = ((FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields*)il2cpp_codegen_static_fields_for(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_il2cpp_TypeInfo_var))->get__mapType_3();
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		NullCheck((Type_t *)L_1);
		Type_t * L_9 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(100 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_10 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_11 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_10;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 4)) };
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_13);
		NullCheck((Type_t *)L_9);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_14 = Type_GetConstructor_m4371D7AD6A8E15067C698696B0167323CBC7F3DA((Type_t *)L_9, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_11, /*hidden argument*/NULL);
		V_1 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_14;
		U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t0A3ECBBDC96B9B57BEE93670CBACA8C4A674EB4F_il2cpp_TypeInfo_var);
		ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 * L_16 = JsonTypeReflector_get_ReflectionDelegateFactory_mDFB8BCA5867EB532325030FA3D2BCCA294792766(/*hidden argument*/NULL);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_17 = V_1;
		NullCheck((ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 *)L_16);
		ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * L_18 = VirtFuncInvoker1< ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *, MethodBase_t * >::Invoke(5 /* Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, (ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 *)L_16, (MethodBase_t *)L_17);
		NullCheck(L_15);
		L_15->set_ctorDelegate_0(L_18);
		U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * L_19 = V_0;
		ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * L_20 = (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *)il2cpp_codegen_object_new(ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8(L_20, (RuntimeObject *)L_19, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)), /*hidden argument*/ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_RuntimeMethod_var);
		return (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *)L_20;
	}
}
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<T,System.Object> Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory::CreateMethodCall<System.Object>(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ExpressionReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mE7FB1048BFC77AC8143C6EC28FBBEBA7CEE5ABC1_gshared (ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * __this, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mE7FB1048BFC77AC8143C6EC28FBBEBA7CEE5ABC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * V_1 = NULL;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * V_2 = NULL;
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * V_3 = NULL;
	{
		MethodBase_t * L_0 = ___method0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_il2cpp_TypeInfo_var);
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_4 = Expression_Parameter_m6760804AC590CD46A47282028B0D728E82745D3C((Type_t *)L_3, (String_t*)_stringLiteral0E8A3AD980EC179856012B7EECF4327E99CD44CD, /*hidden argument*/NULL);
		V_1 = (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_4;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_7 = Expression_Parameter_m6760804AC590CD46A47282028B0D728E82745D3C((Type_t *)L_6, (String_t*)_stringLiteral3030E728F154BF51419109EFB93B6B8AEEC9A976, /*hidden argument*/NULL);
		V_2 = (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_7;
		MethodBase_t * L_8 = ___method0;
		Type_t * L_9 = V_0;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_10 = V_1;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_11 = V_2;
		NullCheck((ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE *)__this);
		Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * L_12 = ExpressionReflectionDelegateFactory_BuildMethodCall_m1B92DC483935B73BA0CA4DEDBF6FB83768EF6666((ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE *)__this, (MethodBase_t *)L_8, (Type_t *)L_9, (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_10, (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_11, /*hidden argument*/NULL);
		V_3 = (Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F *)L_12;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * L_15 = V_3;
		ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* L_16 = (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)(ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)SZArrayNew(ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* L_17 = (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)L_16;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_18 = V_1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_18);
		ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* L_19 = (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)L_17;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_20);
		LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 * L_21 = Expression_Lambda_m7F96089BE8674C877390AA3412C02BB5AEBB87D0((Type_t *)L_14, (Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F *)L_15, (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)L_19, /*hidden argument*/NULL);
		NullCheck((LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 *)L_21);
		Delegate_t * L_22 = LambdaExpression_Compile_m5F5C8361E0088640BE4D3A23E00B3FF6505EAEA3((LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 *)L_21, /*hidden argument*/NULL);
		return (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)((MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<T,System.Object> Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::CreateMethodCall<System.Object>(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * LateBoundReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mAA959F1FBE61DFF65D48AB9BD8593307E989AC77_gshared (LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * __this, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mAA959F1FBE61DFF65D48AB9BD8593307E989AC77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_0 = (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 *)L_0;
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_1 = V_0;
		MethodBase_t * L_2 = ___method0;
		NullCheck(L_1);
		L_1->set_method_1(L_2);
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_3 = V_0;
		NullCheck(L_3);
		MethodBase_t * L_4 = (MethodBase_t *)L_3->get_method_1();
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_4, (String_t*)_stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_5 = V_0;
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_6 = V_0;
		NullCheck(L_6);
		MethodBase_t * L_7 = (MethodBase_t *)L_6->get_method_1();
		NullCheck(L_5);
		L_5->set_c_0(((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)IsInst((RuntimeObject*)L_7, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_8 = V_0;
		NullCheck(L_8);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_9 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_8->get_c_0();
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var);
		bool L_10 = ConstructorInfo_op_Inequality_m7BACC92FB27D1999A084F5346451CEE9FD0445E4((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_9, (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_11 = V_0;
		MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * L_12 = (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_12, (RuntimeObject *)L_11, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)L_12;
	}

IL_0049:
	{
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_13 = V_0;
		MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * L_14 = (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_14, (RuntimeObject *)L_13, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)L_14;
	}
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::GetTargetFinder<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * ObjectTracker_GetTargetFinder_TisRuntimeObject_m1AC68DC4D5C220184900120977D34C2D6585F85E_gshared (ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_GetTargetFinder_TisRuntimeObject_m1AC68DC4D5C220184900120977D34C2D6585F85E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_002d;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898, /*hidden argument*/NULL);
		return (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)NULL;
	}

IL_002d:
	{
		Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * L_5 = (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)__this->get_mTargetFinders_3();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_6, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_5);
		bool L_8 = Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_5, (Type_t *)L_7, (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A **)(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_mC5CE5D963BD80599045C7370AE0C384AB52857B9(/*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck((RuntimeObject*)L_9);
		intptr_t L_11 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(122 /* System.IntPtr Vuforia.IVuforiaWrapper::ObjectTrackerGetTargetFinder(System.Int32) */, IVuforiaWrapper_t42C0BE7206A4F6F4259238B41D40D5106A38E83F_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (int32_t)L_10);
		V_2 = (intptr_t)L_11;
		intptr_t L_12 = V_2;
		bool L_13 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137, /*hidden argument*/NULL);
		return (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)NULL;
	}

IL_006b:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_14, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_16, /*hidden argument*/NULL);
		bool L_18 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_15, (Type_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		intptr_t L_19 = V_2;
		ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04 * L_20 = (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04 *)il2cpp_codegen_object_new(ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_il2cpp_TypeInfo_var);
		ImageTargetFinder__ctor_m628F3FD8293B684B399E21D807806229FF69FB99(L_20, (intptr_t)L_19, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)L_20;
	}

IL_008d:
	{
		Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * L_21 = (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)__this->get_mTargetFinders_3();
		TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		Type_t * L_23 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_22, /*hidden argument*/NULL);
		TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * L_24 = V_0;
		NullCheck((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_21);
		Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_21, (Type_t *)L_23, (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)L_24, /*hidden argument*/Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D_RuntimeMethod_var);
	}

IL_009f:
	{
		TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * L_25 = V_0;
		return (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)L_25;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.StateManager::GetStatusOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisRuntimeObject_m1FFA578DBEA8A07EA20FD49F127BA82C471B3733_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData/TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisTrackableResultData_tA964110473BFD006708B67E537F021944C1D923D_m36105DADA6731D566FD9BBD36016C3B864E9026B_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D  L_6 = InterfaceFuncInvoker1< TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 *, TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 *)L_3, (TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData/VuMarkTargetResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisVuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA_mFAD1E285F8A9582343CA6B92D5E3F5F14F0246D3_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA  L_6 = InterfaceFuncInvoker1< VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 *, VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 *)L_3, (VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisRuntimeObject_m9793CD2D7C90F4549E2B85F245A77422B3C7EEE2_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<Vuforia.TrackerData/TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisTrackableResultData_tA964110473BFD006708B67E537F021944C1D923D_m75040E3B3CB62E139B881CD5318F83D2F73264F0_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D  L_6 = InterfaceFuncInvoker1< TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B *, TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B *)L_3, (TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
