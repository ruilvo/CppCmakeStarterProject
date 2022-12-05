#pragma once

#define CCSP_LIB_NO_MOVE(classname)   \
    classname(classname &&) = delete; \
    classname &operator=(classname &&) = delete;

#define CCSP_LIB_NO_COPY(classname)        \
    classname(const classname &) = delete; \
    classname &operator=(const classname &) = delete;

#define CCSP_LIB_NO_COPY_MOVE(classname) \
    CCSP_LIB_NO_MOVE(classname)          \
    CCSP_LIB_NO_COPY(classname)

#define CCSP_LIB_DEFAULT_MOVE(classname) \
    classname(classname &&) = default;   \
    classname &operator=(classname &&) = default;

#define CCSP_LIB_DEFAULT_COPY(classname)    \
    classname(const classname &) = default; \
    classname &operator=(const classname &) = default;

#define CCSP_LIB_DEFAULT_COPY_MOVE(classname) \
    CCSP_LIB_DEFAULT_MOVE(classname)          \
    CCSP_LIB_DEFAULT_COPY(classname)
