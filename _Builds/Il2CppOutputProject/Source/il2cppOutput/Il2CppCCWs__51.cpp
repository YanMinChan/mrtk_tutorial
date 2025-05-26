#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct KeyCollection_t83B5C938D73A29E7198A545AE88DC67240DDA6DF;
struct KeyCollection_t8155644C2AFB1DBC821FF6C6368D2C87CD7D91BE;
struct KeyCollection_t9FA4A1B49D30A23C8262B03069FD3B0DCC9BF421;
struct KeyCollection_tEE3BEC9725BC3986744D7717D1013907A39EA512;
struct KeyCollection_tF759573176BBAED036A214CEA429B149E9F6D744;
struct KeyCollection_tB2054BCF60804B669D23CECA7CA3792C18D15A93;
struct ValueCollection_t3E29B738F3CBD87E653C7CFAB2378AC1A8A80551;
struct ValueCollection_tF6BDA5C796A886A30A3FD9F1D9A568F23C3B27A5;
struct ValueCollection_tFA5292B978998D73BF0874AF8668B559028FC5FF;
struct ValueCollection_t48E2D4A0327C3490ABD7A34C86168108C3EA9996;
struct ValueCollection_tD5EF36D68F13438B89570428949A40F358B64456;
struct ValueCollection_tC9A54FF9C03F46B62E702B31AA334FBF6E01B518;
struct EntryU5BU5D_t6C29FF550EBFCB1FB1D47B65646B53092304C037;
struct EntryU5BU5D_tF40DC51FD05798833805D88391B0AEB1C54252A8;
struct EntryU5BU5D_t64A6C47481A3D5C15A9BA5216F3FF0644E2B1A50;
struct EntryU5BU5D_t43642987DD87A380B8B95541F74FFC3C495AE9B0;
struct EntryU5BU5D_tEED0BB4144E2C359BC0DF42F4CF282FABA950202;
struct EntryU5BU5D_t99331DEC545188AA0A9314A556039D16D916D9A6;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t3C7E6B9C420BB1376AE211C3C392515ECE5C1687;
struct IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_tA71EE55696201DD9360B8064BAD481A238D10C4C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA9454F59A8B1BFAB7CCF0A7957F265BB0BAFD07B(IIterator_1_t3C7E6B9C420BB1376AE211C3C392515ECE5C1687** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mEF03293132C3103DCF77380F1331B2C2CE5890C3(Il2CppIInspectable* ___0_key, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mB2382B8D0C26002AC3CA8F4099D9E6958F5EFC77(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m712D9B91374913B11B40957B7A290D7C2716C04A(Il2CppIInspectable* ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mF6FEDD6150E938451B279ED7BC28A018E6F6DA61(IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** ___0_first, IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t21CA6E5DE0D90C75A07FFEBB9C8D729AC412AEB2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m823F886A0A9A3FAE759DB719D6B937381AD24145(Il2CppIInspectable* ___0_key, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m7AB9D044164B4B6BD931491955AFDAB474E83290(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8D5438D51B6F7FECB1AEAE697B9D5DEAECC6B336(Il2CppIInspectable* ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mF872C4CCE71EB09053E2363AB42F964D1EF96405(IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC017EA70008F31C88246C5C70E870E0D428AA9AD(Il2CppIInspectable* ___0_key, float ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m6079CEE8E29ABC546D7E2F6942D6DBEB20B87DB5(Il2CppIInspectable* ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m90CA837FF28E2C5078345163862BBA596BA3328A() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6C29FF550EBFCB1FB1D47B65646B53092304C037* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t83B5C938D73A29E7198A545AE88DC67240DDA6DF* ____keys;
	ValueCollection_t3E29B738F3CBD87E653C7CFAB2378AC1A8A80551* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF40DC51FD05798833805D88391B0AEB1C54252A8* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t8155644C2AFB1DBC821FF6C6368D2C87CD7D91BE* ____keys;
	ValueCollection_tF6BDA5C796A886A30A3FD9F1D9A568F23C3B27A5* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t64A6C47481A3D5C15A9BA5216F3FF0644E2B1A50* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9FA4A1B49D30A23C8262B03069FD3B0DCC9BF421* ____keys;
	ValueCollection_tFA5292B978998D73BF0874AF8668B559028FC5FF* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t43642987DD87A380B8B95541F74FFC3C495AE9B0* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tEE3BEC9725BC3986744D7717D1013907A39EA512* ____keys;
	ValueCollection_t48E2D4A0327C3490ABD7A34C86168108C3EA9996* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEED0BB4144E2C359BC0DF42F4CF282FABA950202* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF759573176BBAED036A214CEA429B149E9F6D744* ____keys;
	ValueCollection_tD5EF36D68F13438B89570428949A40F358B64456* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t99331DEC545188AA0A9314A556039D16D916D9A6* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB2054BCF60804B669D23CECA7CA3792C18D15A93* ____keys;
	ValueCollection_tC9A54FF9C03F46B62E702B31AA334FBF6E01B518* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_m823F886A0A9A3FAE759DB719D6B937381AD24145_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, float* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m7AB9D044164B4B6BD931491955AFDAB474E83290_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m8D5438D51B6F7FECB1AEAE697B9D5DEAECC6B336_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mF872C4CCE71EB09053E2363AB42F964D1EF96405_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mC017EA70008F31C88246C5C70E870E0D428AA9AD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, float ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m6079CEE8E29ABC546D7E2F6942D6DBEB20B87DB5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key);
il2cpp_hresult_t IMap_2_Clear_m90CA837FF28E2C5078345163862BBA596BA3328A_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mA9454F59A8B1BFAB7CCF0A7957F265BB0BAFD07B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t3C7E6B9C420BB1376AE211C3C392515ECE5C1687** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mEF03293132C3103DCF77380F1331B2C2CE5890C3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, float* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mB2382B8D0C26002AC3CA8F4099D9E6958F5EFC77_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m712D9B91374913B11B40957B7A290D7C2716C04A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mF6FEDD6150E938451B279ED7BC28A018E6F6DA61_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** ___0_first, IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** ___1_second);



struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB_ComCallableWrapper>, IMap_2_t21CA6E5DE0D90C75A07FFEBB9C8D729AC412AEB2, IIterable_1_tA71EE55696201DD9360B8064BAD481A238D10C4C, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3
{
	inline Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_t21CA6E5DE0D90C75A07FFEBB9C8D729AC412AEB2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t21CA6E5DE0D90C75A07FFEBB9C8D729AC412AEB2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA71EE55696201DD9360B8064BAD481A238D10C4C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA71EE55696201DD9360B8064BAD481A238D10C4C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t21CA6E5DE0D90C75A07FFEBB9C8D729AC412AEB2::IID;
		interfaceIds[1] = IIterable_1_tA71EE55696201DD9360B8064BAD481A238D10C4C::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m823F886A0A9A3FAE759DB719D6B937381AD24145(Il2CppIInspectable* ___0_key, float* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m823F886A0A9A3FAE759DB719D6B937381AD24145_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m7AB9D044164B4B6BD931491955AFDAB474E83290(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m7AB9D044164B4B6BD931491955AFDAB474E83290_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8D5438D51B6F7FECB1AEAE697B9D5DEAECC6B336(Il2CppIInspectable* ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m8D5438D51B6F7FECB1AEAE697B9D5DEAECC6B336_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mF872C4CCE71EB09053E2363AB42F964D1EF96405(IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mF872C4CCE71EB09053E2363AB42F964D1EF96405_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC017EA70008F31C88246C5C70E870E0D428AA9AD(Il2CppIInspectable* ___0_key, float ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mC017EA70008F31C88246C5C70E870E0D428AA9AD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m6079CEE8E29ABC546D7E2F6942D6DBEB20B87DB5(Il2CppIInspectable* ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m6079CEE8E29ABC546D7E2F6942D6DBEB20B87DB5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m90CA837FF28E2C5078345163862BBA596BA3328A() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m90CA837FF28E2C5078345163862BBA596BA3328A_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA9454F59A8B1BFAB7CCF0A7957F265BB0BAFD07B(IIterator_1_t3C7E6B9C420BB1376AE211C3C392515ECE5C1687** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA9454F59A8B1BFAB7CCF0A7957F265BB0BAFD07B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mEF03293132C3103DCF77380F1331B2C2CE5890C3(Il2CppIInspectable* ___0_key, float* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mEF03293132C3103DCF77380F1331B2C2CE5890C3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mB2382B8D0C26002AC3CA8F4099D9E6958F5EFC77(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mB2382B8D0C26002AC3CA8F4099D9E6958F5EFC77_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m712D9B91374913B11B40957B7A290D7C2716C04A(Il2CppIInspectable* ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m712D9B91374913B11B40957B7A290D7C2716C04A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mF6FEDD6150E938451B279ED7BC28A018E6F6DA61(IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** ___0_first, IMapView_2_tC57D6FF1BDEFF87F54ACB62F3CAB6B9AD432ABF3** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mF6FEDD6150E938451B279ED7BC28A018E6F6DA61_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB_ComCallableWrapper(obj));
}

struct Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tB5CB9488A3978B3AB90F59900B856EBBC71BA129_ComCallableWrapper(obj));
}

struct Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tBD65E24014B9F7A15F0B95E6C6F47D4DEECE226A_ComCallableWrapper(obj));
}

struct Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tB64F565212CB642ED119A4EFAC1389A923429B7F_ComCallableWrapper(obj));
}

struct Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4_ComCallableWrapper(obj));
}

struct Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t3473B782371CC3AE5FA7302796ED2C8FD8581CC5_ComCallableWrapper(obj));
}
