// dllmain.h : Declaration of module class.

class CMpbCheckModule : public ATL::CAtlDllModuleT< CMpbCheckModule >
{
public :
	DECLARE_LIBID(LIBID_MpbCheckLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MPBCHECK, "{91191180-5488-444F-ADD6-8A72D7A2C2A2}")
};

extern class CMpbCheckModule _AtlModule;
