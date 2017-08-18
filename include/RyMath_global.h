#ifndef RYMATH_GLOBAL_H
#define RYMATH_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RYMATH_LIBRARY)
#  define RYMATHSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RYMATH_EXPORT Q_DECL_IMPORT
#endif

#endif // RYMATH_GLOBAL_H
