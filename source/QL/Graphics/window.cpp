#include <QL/Definitions/protocols.hpp>
#include <QL/Graphics/window.hpp>

#include <stdlib.h>

#if defined(__QL_WINSERVER_XORG)
    #include "Window/impl_xorg.inl"
#elif defined(__QL_WINSERVER_WINAPI)
    #include "Window/impl_win32.inl"
#endif
