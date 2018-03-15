
#include <QtGlobal>

#ifdef Q_OS_ANDROID
#include "botan_android.h"
#else
#ifdef Q_OS_IOS
#include "botan_ios.h"
#else
#include "botan_unix.h"
#endif
#endif
