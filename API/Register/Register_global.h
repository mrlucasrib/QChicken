#ifndef REGISTER_GLOBAL_H
#define REGISTER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(REGISTER_LIBRARY)
#  define REGISTER_EXPORT Q_DECL_EXPORT
#else
#  define REGISTER_EXPORT Q_DECL_IMPORT
#endif

#endif // REGISTER_GLOBAL_H
