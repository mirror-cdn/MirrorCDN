#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
189,
196,
197,
198,
199,
200,
201,
202,
203,
204,
207,
208,
375,
376,
378,
407,
408,
409,
429,
430,
431,
432,
433,
524,
525,
526,
529,
571,
572,
573,
576,
578,
580,
582,
587,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
610,
611,
612,
613,
614,
615,
616,
617,
618,
619,
620,
621,
705,
706,
707,
708,
709,
710,
711,
712,
713,
714,
715,
716,
717,
718,
719,
720,
721,
722,
723,
724,
725,
726,
727,
728,
729,
863,
864,
872,
875,
877,
883,
884,
886,
887,
891,
893,
894,
895,
896,
898,
899,
900,
903,
904,
907,
908,
909,
984,
985,
987,
995,
996,
997,
998,
999,
1003,
1004,
1005,
1006,
1007,
1008,
1010,
1011,
1012,
1014,
1015,
1017,
1021,
1022,
1023,
1296,
1512,
1513,
8308,
8309,
8311,
8312,
8313,
8314,
8315,
8317,
8319,
8321,
8322,
8323,
8331,
8333,
8339,
8340,
8342,
8344,
8346,
8358,
8367,
8368,
8370,
8371,
8372,
8373,
8374,
8376,
8378,
9420,
9424,
9426,
9427,
9428,
9429,
9499,
9500,
9501,
9518,
9519,
9520,
9521,
9555,
9604,
9607,
9617,
9618,
9619,
9620,
10017,
10018,
10023,
10024,
10075,
10076,
10077,
10105,
10111,
10118,
10128,
10132,
10224,
10234,
10235,
10248,
10249,
10250,
10251,
10252,
10253,
10254,
10261,
10277,
10298,
10299,
10308,
10310,
10317,
10318,
10321,
10323,
10328,
10334,
10335,
10342,
10344,
10354,
10357,
10358,
10359,
10370,
10382,
10388,
10389,
10390,
10392,
10393,
10403,
10422,
10444,
10445,
10446,
10447,
10448,
10465,
10470,
10475,
10506,
10507,
11001,
11002,
11085,
11165,
11426,
11427,
11436,
11437,
11438,
11444,
11525,
11697,
11698,
12699,
12700,
13564,
13583,
13590,
13591,
13593,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 189,
ves_icall_System_Array_InternalCreate,
// token 196,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 197,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 198,
ves_icall_System_Array_CanChangePrimitive,
// token 199,
ves_icall_System_Array_FastCopy_raw,
// token 200,
ves_icall_System_Array_GetLength_raw,
// token 201,
ves_icall_System_Array_GetLowerBound_raw,
// token 202,
ves_icall_System_Array_GetGenericValue_icall,
// token 203,
ves_icall_System_Array_GetValueImpl_raw,
// token 204,
ves_icall_System_Array_SetGenericValue_icall,
// token 207,
ves_icall_System_Array_SetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 375,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 376,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 378,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 407,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 408,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 409,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 429,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 430,
ves_icall_System_Enum_ToObject_raw,
// token 431,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 432,
ves_icall_System_Enum_get_underlying_type_raw,
// token 433,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 524,
ves_icall_System_Environment_get_ProcessorCount,
// token 525,
ves_icall_System_Environment_get_TickCount,
// token 526,
ves_icall_System_Environment_get_TickCount64,
// token 529,
ves_icall_System_Environment_FailFast_raw,
// token 571,
ves_icall_System_GC_GetCollectionCount,
// token 572,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 573,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 576,
ves_icall_System_GC_SuppressFinalize_raw,
// token 578,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 580,
ves_icall_System_GC_GetGCMemoryInfo,
// token 582,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 587,
ves_icall_System_Object_MemberwiseClone_raw,
// token 595,
ves_icall_System_Math_Abs_double,
// token 596,
ves_icall_System_Math_Abs_single,
// token 597,
ves_icall_System_Math_Acos,
// token 598,
ves_icall_System_Math_Acosh,
// token 599,
ves_icall_System_Math_Asin,
// token 600,
ves_icall_System_Math_Asinh,
// token 601,
ves_icall_System_Math_Atan,
// token 602,
ves_icall_System_Math_Atan2,
// token 603,
ves_icall_System_Math_Atanh,
// token 604,
ves_icall_System_Math_Cbrt,
// token 605,
ves_icall_System_Math_Ceiling,
// token 606,
ves_icall_System_Math_Cos,
// token 607,
ves_icall_System_Math_Cosh,
// token 608,
ves_icall_System_Math_Exp,
// token 609,
ves_icall_System_Math_Floor,
// token 610,
ves_icall_System_Math_Log,
// token 611,
ves_icall_System_Math_Log10,
// token 612,
ves_icall_System_Math_Pow,
// token 613,
ves_icall_System_Math_Sin,
// token 614,
ves_icall_System_Math_Sinh,
// token 615,
ves_icall_System_Math_Sqrt,
// token 616,
ves_icall_System_Math_Tan,
// token 617,
ves_icall_System_Math_Tanh,
// token 618,
ves_icall_System_Math_FusedMultiplyAdd,
// token 619,
ves_icall_System_Math_ILogB,
// token 620,
ves_icall_System_Math_Log2,
// token 621,
ves_icall_System_Math_ModF,
// token 705,
ves_icall_System_MathF_Acos,
// token 706,
ves_icall_System_MathF_Acosh,
// token 707,
ves_icall_System_MathF_Asin,
// token 708,
ves_icall_System_MathF_Asinh,
// token 709,
ves_icall_System_MathF_Atan,
// token 710,
ves_icall_System_MathF_Atan2,
// token 711,
ves_icall_System_MathF_Atanh,
// token 712,
ves_icall_System_MathF_Cbrt,
// token 713,
ves_icall_System_MathF_Ceiling,
// token 714,
ves_icall_System_MathF_Cos,
// token 715,
ves_icall_System_MathF_Cosh,
// token 716,
ves_icall_System_MathF_Exp,
// token 717,
ves_icall_System_MathF_Floor,
// token 718,
ves_icall_System_MathF_Log,
// token 719,
ves_icall_System_MathF_Log10,
// token 720,
ves_icall_System_MathF_Pow,
// token 721,
ves_icall_System_MathF_Sin,
// token 722,
ves_icall_System_MathF_Sinh,
// token 723,
ves_icall_System_MathF_Sqrt,
// token 724,
ves_icall_System_MathF_Tan,
// token 725,
ves_icall_System_MathF_Tanh,
// token 726,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 727,
ves_icall_System_MathF_ILogB,
// token 728,
ves_icall_System_MathF_Log2,
// token 729,
ves_icall_System_MathF_ModF,
// token 863,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 864,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 872,
ves_icall_RuntimeType_make_array_type_raw,
// token 875,
ves_icall_RuntimeType_make_byref_type_raw,
// token 877,
ves_icall_RuntimeType_MakePointerType_raw,
// token 883,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 884,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 886,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 887,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 891,
ves_icall_RuntimeType_GetPacking_raw,
// token 893,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 894,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 895,
ves_icall_System_RuntimeType_getFullName_raw,
// token 896,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 898,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 899,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 900,
ves_icall_RuntimeType_GetFields_native_raw,
// token 903,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 904,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 907,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 908,
ves_icall_RuntimeType_get_Name_raw,
// token 909,
ves_icall_RuntimeType_get_Namespace_raw,
// token 984,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 985,
ves_icall_reflection_get_token_raw,
// token 987,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 995,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 996,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 997,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 998,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 999,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1003,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1004,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1005,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1006,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1007,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1008,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1010,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1011,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1012,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1014,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1015,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1017,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1021,
ves_icall_System_String_FastAllocateString_raw,
// token 1022,
ves_icall_System_String_InternalIsInterned_raw,
// token 1023,
ves_icall_System_String_InternalIntern_raw,
// token 1296,
ves_icall_System_Type_internal_from_handle_raw,
// token 1512,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1513,
ves_icall_System_ValueType_Equals_raw,
// token 8308,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8309,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8311,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8312,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8313,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8314,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8315,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8317,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8319,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8321,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8322,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8323,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8331,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8333,
mono_monitor_exit_icall_raw,
// token 8339,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8340,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8342,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8344,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8346,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8358,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8367,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8368,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8370,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8371,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8372,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8373,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8374,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8376,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8378,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9420,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9424,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9426,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9427,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9428,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9429,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9499,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9500,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9501,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9518,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9519,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9520,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9521,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9555,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9604,
mono_object_hash_icall_raw,
// token 9607,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9617,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9618,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9619,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9620,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10017,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10018,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10023,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10024,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10075,
mono_digest_get_public_token,
// token 10076,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10077,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 10105,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10111,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10118,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10128,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10132,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10224,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 10234,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10235,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10248,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 10249,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 10250,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 10251,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 10252,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10253,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10254,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10261,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10277,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10298,
ves_icall_reflection_get_token_raw,
// token 10299,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10308,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10310,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10317,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10318,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10321,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10323,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10328,
ves_icall_reflection_get_token_raw,
// token 10334,
ves_icall_get_method_info_raw,
// token 10335,
ves_icall_get_method_attributes,
// token 10342,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10344,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10354,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10357,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10358,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10359,
ves_icall_reflection_get_token_raw,
// token 10370,
ves_icall_InternalInvoke_raw,
// token 10382,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10388,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10389,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10390,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10392,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10393,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10403,
ves_icall_InternalInvoke_raw,
// token 10422,
ves_icall_reflection_get_token_raw,
// token 10444,
ves_icall_reflection_get_token_raw,
// token 10445,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10446,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10447,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10448,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10465,
ves_icall_reflection_get_token_raw,
// token 10470,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10475,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10506,
ves_icall_reflection_get_token_raw,
// token 10507,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11001,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11002,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11085,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11165,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11426,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11427,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11436,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11437,
ves_icall_ModuleBuilder_getToken_raw,
// token 11438,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11444,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11525,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11697,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11698,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12699,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12700,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13564,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13583,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13590,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13591,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13593,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
