#ifndef MURASAME_CONFIG_HPP
#define MURASAME_CONFIG_HPP

// platform
#if defined(_WIN32) || defined(_WIN64)
#define MURASAME_WINDOWS 1
#endif

// toolkit
#if defined(_MSC_VER)
#if _MSC_VER < 1900
#error "Visual C++ 2015 required."
#endif
#define MURASAME_MSVC 1
#endif

// debug
#if defined(DEBUG) || defined(_DEBUG)
#define MURASAME_DEBUG 1
#else
#define MURASAME_RELEASE 1
#ifndef NDEBUG
#define NDEBUG 1
#endif
#endif

// version
#define MURASAME_VERSION 010000
#define MURASAME_MAJOR_VERSION 01
#define MURASAME_MINOR_VERSION 00
#define MURASAME_VERSION_STR "01_00_00"

#endif //MURASAME_CONFIG_HPP
