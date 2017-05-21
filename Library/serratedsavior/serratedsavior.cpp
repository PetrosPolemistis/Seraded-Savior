// serratedsavior.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "serratedsavior.h"


// This is an example of an exported variable
SERRATEDSAVIOR_API int nserratedsavior=0;

// This is an example of an exported function.
SERRATEDSAVIOR_API int fnserratedsavior(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see serratedsavior.h for the class definition
Cserratedsavior::Cserratedsavior()
{
    return;
}
