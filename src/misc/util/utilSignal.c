/**CFile****************************************************************

  FileName    [utilSignal.c]

  SystemName  [ABC: Logic synthesis and verification system.]

  PackageName []

  Synopsis    []

  Author      [Baruch Sterin]
  
  Affiliation [UC Berkeley]

  Date        [Ver. 1.0. Started - February 1, 2011.]

  Revision    [$Id: utilSignal.c,v 1.00 2011/02/01 00:00:00 alanmi Exp $]

***********************************************************************/

#include <stdlib.h>
#include "abc_global.h"
#include "utilSignal.h"

#ifdef _MSC_VER
#define remove _remove
#else
#include <unistd.h>
#endif

ABC_NAMESPACE_IMPL_START

////////////////////////////////////////////////////////////////////////
///                        DECLARATIONS                              ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                     FUNCTION DEFINITIONS                         ///
////////////////////////////////////////////////////////////////////////

#ifndef ABC_PYTHON_EMBED

int Util_SignalSystem(const char* cmd)
{
    return system(cmd);
}

int tmpFile(const char* prefix, const char* suffix, char** out_name);

int Util_SignalTmpFile(const char* prefix, const char* suffix, char** out_name)
{
    return tmpFile(prefix, suffix, out_name);
}

void Util_SignalTmpFileRemove(const char* fname, int fLeave)
{
    if (! fLeave)
    {
        remove(fname);
    }
}

#endif /* ABC_PYTHON_EMBED */

ABC_NAMESPACE_IMPL_END

////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////
