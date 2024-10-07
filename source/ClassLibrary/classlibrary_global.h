#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(CLASS_LIBRARY_LIB)
#  define CLASS_LIBRARY_EXPORT Q_DECL_EXPORT
# else
#  define CLASS_LIBRARY_EXPORT Q_DECL_IMPORT
# endif
#else
# define CLASS_LIBRARY_EXPORT
#endif
