
#include <QtGlobal>

#ifdef Q_OS_ANDROID
#include "botan_android.h"
#else
#if defined(Q_OS_WIN) || defined(Q_OS_LINUX) || defined(Q_OS_MAC)
#include "botan_unix.h"
#else
#endif
#endif
