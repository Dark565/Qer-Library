#pragma once

#include <QL/Definitions/libs.hpp>
#include "../../dynamic_lib.hpp"

#include <X11/Xlib.h>

#include <stdint.h>

#define __QL_LIB_X11_PATH "libX11.so"

namespace X11 {
    inline Display* OpenDisplay(const char*);
    inline int CloseDisplay(Display*);
    inline Window CreateWindow 
                    (
                        Display*,                   //X11 connection data pointer
                        Window,                     //Parent
                        int32_t, int32_t,           //x, y
                        uint32_t, uint32_t,         //width, height
                        uint32_t,                   //border width
                        int32_t,                    //depth
                        uint32_t,                   //class
                        Visual*,                    //visual
                        uint32_t,                   //value mask
                        XSetWindowAttributes*       //attributes
                    );
    inline int StoreName(Display*, Window, char*);
    inline char* GetAtomName(Display*,Atom);
    inline void Free(void*);
    inline Window _DefaultRootWindow(Display*);

    inline bool load();
    inline bool unload();
}

#if defined(__QL_LIBRARY_LINK)
    #include "X11/link.inl"
#elif defined(__QL_LIBRARY_LOAD)
    #include "X11/load.inl"
#endif