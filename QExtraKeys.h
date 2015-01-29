/*
 * Additional key codes from C++ Marmalade SDK, that are missing from
 * quick/include/QEvbentX.h
 * This just ads them to the existing Lua "keys" table
 * largely these are the same as the C++ s3eKey equivalents, with the
 * "s3eKey" prefix trimmed off and first letter switched to lower-case.
 * Acronyms have retianed all-upper-case for readability (eg LSK, CLR).
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
        RSK = 72,           //!< Right soft key.
        LSK = 73,           //!< Left soft key.
        ok = 78,            //!< Select/OK key.
        CLR = 79,           //!< CLR/clear key.
        
        button1 = 89,       //!< Generic Button1.
        button2 = 90,       //!< Generic Button2.
        button3 = 91,       //!< Generic Button3.
        button4 = 92,       //!< Generic Button4.
        button5 = 93,       //!< Generic Button5.
        button6 = 94,       //!< Generic Button6.
        button7 = 95,       //!< Generic Button7.
        button8 = 96,       //!< Generic Button8.
        
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
