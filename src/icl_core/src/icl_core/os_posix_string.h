// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This file is part of FZIs ic_workspace.
//
// This program is free software licensed under the LGPL
// (GNU LESSER GENERAL PUBLIC LICENSE Version 3).
// You can find a copy of this license in LICENSE folder in the top
// directory of the source code.
//
// © Copyright 2016 FZI Forschungszentrum Informatik, Karlsruhe, Germany
//
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Klaus Uhl <uhl@fzi.de>
 * \date    2008-01-28
 *
 * \brief   Posix implementation of the global functions
 *          for string manipulation,
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_OS_POSIX_STRING_H_INCLUDED
#define ICL_CORE_OS_POSIX_STRING_H_INCLUDED

#include "icl_core/ImportExport.h"

namespace icl_core {
namespace os {
namespace hidden_posix {

char * stpcpy(char *dst, const char *src);
ICL_CORE_IMPORT_EXPORT char * strdup(const char *s);
ICL_CORE_IMPORT_EXPORT int vsnprintf(char *buffer, size_t maxlen, const char *format, va_list argptr);

}
}
}

#endif
