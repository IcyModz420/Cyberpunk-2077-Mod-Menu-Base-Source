// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DX12BASEICYMODZ420_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DX12BASEICYMODZ420_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DX12BASEICYMODZ420_EXPORTS
#define DX12BASEICYMODZ420_API __declspec(dllexport)
#else
#define DX12BASEICYMODZ420_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DX12BASEICYMODZ420_API CDX12BaseIcyModz420 {
public:
	CDX12BaseIcyModz420(void);
	// TODO: add your methods here.
};

extern DX12BASEICYMODZ420_API int nDX12BaseIcyModz420;

DX12BASEICYMODZ420_API int fnDX12BaseIcyModz420(void);
