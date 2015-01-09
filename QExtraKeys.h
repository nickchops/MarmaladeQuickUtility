/*
 * Additional key codes from C++ Marmalade SDK, that are missing from
 * quick/include/QEvbentX.h
 * This just ads them to the existing Lua "keys" table
 * You can always refer to any C++ s3eKeyboard key codes with raw numbers
 * anyway, but nice to have these easily available to Quick!
 */
 
#ifndef __Q_EXTRAKEYS_H
#define __Q_EXTRAKEYS_H

#include "QDefines.h"

// tolua_begin
namespace key {
    enum
    {
        search = 128,       //!< Search key
        threeDMode = 129,   //!< 3D Mode key - note naming change from C++ version due to starting with a number!
        myApps = 130,       //!< My Apps key
        printScreen = 131,  //!< Print screen key
        scrollLock = 132,   //!< Scroll lock key

        absGameA = 200,     //!< Abstract Game keyA.
        absGameB = 201,     //!< Abstract Game keyB.
        absGameC = 202,     //!< Abstract Game keyC.
        absGameD = 203,     //!< Abstract Game keyD.
        absUp = 204,        //!< Abstract Up.
        absDown = 205,      //!< Abstract Down.
        absLeft = 206,      //!< Abstract Left.
        absRight = 207,     //!< Abstract Right.
        absOk = 208,        //!< Abstract Ok.
        absASK = 209,       //!< Abstract action softkey.
        absBSK = 210,       //!< Abstract backwards softkey.

        leftWindows = 211,  //!< The left Windows key.
        rightWindows = 212, //!< The right Windows key.
        leftBackSlash = 213,//!< The left backslash "\" key.
    };
}
// tolua_end

#endif // __Q_EXTRAKEYS_H
