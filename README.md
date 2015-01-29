
Utility helper functions use with Marmalade Quick
(C) Nick Smith 2013-2015

Provides helper functions for general Quick things. Used by a bunch of my
other Quick repos.

Hopefully these will get merged into Quick itself at some point.

You need a Marmalade license and Marmalade SDK 7.0 or newer to use this code
    www.madewithmarmalade.com

    
Quick missing key codes
-----------------------

I've also added defines for keys from Marmalade's s3eKey API that are missing
from quick/include/QKeys.h in Marmlade 7.4.3 at least. The codes match the ones
in teh C++ s3eKeyboard API
(see http://api.madewithmarmalade.com/group__keyboardapigroup.html)

To use them either:
- Put LazyExtraKeys.lua in your resources folder and add
  dofile("LazyExtraKeys.lua") or require("LazyExtraKeys") to your code
- Just use the numbers! You can just use the key codes from QExtraKeys.h
  directly in your Lua code. e.g. just do things like "if myKey == 200 then"
  since you can see from QExtraKeys.h that 200 is meant to be absGameA.     
- Recommended: build the header into the engine as described below...

  
1. Edit quick/quickuser_tolua.pkg and add this new line:

        $cfile "full/path/to/QExtraKeys.h"

2. Edit quick/quickuser.mkf and add the following to the 'files' block:

        full/path/to/QExtraKeys.h
   
3. Run quick/quickuser_tolua.bat to generate Lua bindings.

4. Rebuild the Quick binaries by running the scripts (build_quick_prebuilt.bat
   etc.) from here https://github.com/nickchops/MarmaladeQuickRebuildScripts
   
-------------------------------------------------------------------------------

Provided under the MIT license:

/*
 * (C) 2013-2014 Nick Smith.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

Hack away and re-use code for your own projects :)
