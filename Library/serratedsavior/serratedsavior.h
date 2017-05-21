// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SERRATEDSAVIOR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SERRATEDSAVIOR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SERRATEDSAVIOR_EXPORTS
#define SERRATEDSAVIOR_API __declspec(dllexport)
#else
#define SERRATEDSAVIOR_API __declspec(dllimport)
#endif

// This class is exported from the serratedsavior.dll
class SERRATEDSAVIOR_API Cserratedsavior {
public:
	Cserratedsavior(void);
	// TODO: add your methods here.
};

extern SERRATEDSAVIOR_API int nserratedsavior;

SERRATEDSAVIOR_API int fnserratedsavior(void);
