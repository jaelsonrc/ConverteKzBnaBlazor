#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
186,
187,
188,
189,
190,
191,
192,
193,
194,
197,
198,
308,
309,
311,
340,
341,
342,
362,
363,
364,
365,
366,
457,
458,
459,
462,
502,
503,
504,
507,
509,
511,
513,
518,
526,
527,
528,
529,
530,
531,
532,
533,
534,
535,
536,
675,
676,
684,
687,
689,
694,
695,
697,
698,
702,
703,
704,
705,
707,
708,
709,
712,
713,
716,
717,
718,
787,
788,
790,
798,
799,
800,
801,
802,
806,
807,
808,
809,
810,
811,
813,
814,
815,
817,
818,
819,
821,
1025,
1208,
1209,
6070,
6071,
6073,
6074,
6075,
6076,
6077,
6079,
6081,
6083,
6084,
6091,
6093,
6097,
6098,
6100,
6102,
6104,
6116,
6125,
6126,
6128,
6129,
6130,
6131,
6132,
6134,
6136,
7030,
7034,
7036,
7037,
7038,
7039,
7085,
7086,
7087,
7088,
7107,
7108,
7109,
7110,
7142,
7185,
7188,
7196,
7197,
7198,
7458,
7462,
7463,
7492,
7493,
7494,
7510,
7516,
7523,
7533,
7537,
7618,
7625,
7626,
7627,
7628,
7629,
7635,
7648,
7668,
7669,
7677,
7679,
7686,
7687,
7690,
7692,
7697,
7703,
7704,
7711,
7713,
7723,
7726,
7727,
7728,
7738,
7749,
7755,
7756,
7757,
7759,
7760,
7770,
7788,
7803,
7804,
7822,
7827,
7857,
7858,
8292,
8365,
8449,
8742,
8743,
8751,
8752,
8753,
8759,
8833,
9007,
9008,
9585,
9586,
10292,
10311,
10318,
10319,
10321,
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
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
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
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
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
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
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
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
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
// token 181,
ves_icall_System_Array_InternalCreate,
// token 186,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 187,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 188,
ves_icall_System_Array_CanChangePrimitive,
// token 189,
ves_icall_System_Array_FastCopy_raw,
// token 190,
ves_icall_System_Array_GetLength_raw,
// token 191,
ves_icall_System_Array_GetLowerBound_raw,
// token 192,
ves_icall_System_Array_GetGenericValue_icall,
// token 193,
ves_icall_System_Array_GetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetGenericValue_icall,
// token 197,
ves_icall_System_Array_SetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 308,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 309,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 311,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 340,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 341,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 342,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 362,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 363,
ves_icall_System_Enum_ToObject_raw,
// token 364,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 365,
ves_icall_System_Enum_get_underlying_type_raw,
// token 366,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 457,
ves_icall_System_Environment_get_ProcessorCount,
// token 458,
ves_icall_System_Environment_get_TickCount,
// token 459,
ves_icall_System_Environment_get_TickCount64,
// token 462,
ves_icall_System_Environment_FailFast_raw,
// token 502,
ves_icall_System_GC_GetCollectionCount,
// token 503,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 504,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 507,
ves_icall_System_GC_SuppressFinalize_raw,
// token 509,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 511,
ves_icall_System_GC_GetGCMemoryInfo,
// token 513,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 518,
ves_icall_System_Object_MemberwiseClone_raw,
// token 526,
ves_icall_System_Math_Abs_double,
// token 527,
ves_icall_System_Math_Atan,
// token 528,
ves_icall_System_Math_Ceiling,
// token 529,
ves_icall_System_Math_Cos,
// token 530,
ves_icall_System_Math_Floor,
// token 531,
ves_icall_System_Math_Log10,
// token 532,
ves_icall_System_Math_Pow,
// token 533,
ves_icall_System_Math_Sin,
// token 534,
ves_icall_System_Math_Sqrt,
// token 535,
ves_icall_System_Math_Tan,
// token 536,
ves_icall_System_Math_ModF,
// token 675,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 676,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 684,
ves_icall_RuntimeType_make_array_type_raw,
// token 687,
ves_icall_RuntimeType_make_byref_type_raw,
// token 689,
ves_icall_RuntimeType_MakePointerType_raw,
// token 694,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 695,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 697,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 698,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 702,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 703,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 704,
ves_icall_System_RuntimeType_getFullName_raw,
// token 705,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 707,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 708,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 709,
ves_icall_RuntimeType_GetFields_native_raw,
// token 712,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 713,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 716,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 717,
ves_icall_RuntimeType_get_Name_raw,
// token 718,
ves_icall_RuntimeType_get_Namespace_raw,
// token 787,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 788,
ves_icall_reflection_get_token_raw,
// token 790,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 798,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 799,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 800,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 801,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 802,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 806,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 807,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 808,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 809,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 810,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 811,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 813,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 814,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 815,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 817,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 818,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 819,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 821,
ves_icall_System_String_FastAllocateString_raw,
// token 1025,
ves_icall_System_Type_internal_from_handle_raw,
// token 1208,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1209,
ves_icall_System_ValueType_Equals_raw,
// token 6070,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6071,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6073,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6074,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6075,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6076,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6077,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6079,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6081,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6083,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6084,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6091,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6093,
mono_monitor_exit_icall_raw,
// token 6097,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 6098,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6100,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6102,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6104,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6116,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 6125,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6126,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6128,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6129,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6130,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6131,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6132,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6134,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6136,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7030,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7034,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7036,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7037,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7038,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7039,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7085,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7086,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7087,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7088,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7107,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7108,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7109,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7110,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 7142,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7185,
mono_object_hash_icall_raw,
// token 7188,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 7196,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7197,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7198,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7458,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7462,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7463,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7492,
mono_digest_get_public_token,
// token 7493,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7494,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 7510,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7516,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7523,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7533,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7537,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7618,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7625,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 7626,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 7627,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 7628,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7629,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 7635,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7648,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7668,
ves_icall_reflection_get_token_raw,
// token 7669,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7677,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7679,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7686,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7687,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7690,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7692,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7697,
ves_icall_reflection_get_token_raw,
// token 7703,
ves_icall_get_method_info_raw,
// token 7704,
ves_icall_get_method_attributes,
// token 7711,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7713,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7723,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7726,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7727,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7728,
ves_icall_reflection_get_token_raw,
// token 7738,
ves_icall_InternalInvoke_raw,
// token 7749,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7755,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7756,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7757,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7759,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7760,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7770,
ves_icall_InternalInvoke_raw,
// token 7788,
ves_icall_reflection_get_token_raw,
// token 7803,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 7804,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7822,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 7827,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7857,
ves_icall_reflection_get_token_raw,
// token 7858,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8292,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8365,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 8449,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8742,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8743,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8751,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8752,
ves_icall_ModuleBuilder_getToken_raw,
// token 8753,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8759,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8833,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9007,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9008,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9585,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 9586,
ves_icall_System_Diagnostics_Debugger_Log,
// token 10292,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10311,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10318,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 10319,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10321,
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
0,
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
0,
0,
0,
0,
0,
0,
0,
};
