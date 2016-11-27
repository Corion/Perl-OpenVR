#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <openvr_capi.h>

#include "const-c.inc"

MODULE = OpenVR		PACKAGE = OpenVR

INCLUDE: const-xs.inc
