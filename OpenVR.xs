#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#define OPENVR_API_NODLL
#include <openvr_capi.h>

#include "const-c.inc"

MODULE = OpenVR		PACKAGE = OpenVR

INCLUDE: const-xs.inc

# Global OpenVR entry points
# These need to by dynaloaded from openvr_api.dll / openvr_api.so
# But I don't know how to do that from XS

# intptr_t VR_InitInternal( EVRInitError *peError, EVRApplicationType eType );

void
VR_ShutdownInternal();

bool
VR_IsHmdPresent();
CODE:
    RETVAL = VR_IsHmdPresent();

intptr_t
VR_GetGenericInterface( const char *pchInterfaceVersion, EVRInitError *peError );

bool
VR_IsRuntimeInstalled();

const char*
VR_GetVRInitErrorAsSymbol( EVRInitError error );

const char*
VR_GetVRInitErrorAsEnglishDescription( EVRInitError error );
