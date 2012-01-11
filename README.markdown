IXKeychain
===

IXKeychain is a simple ARC compliant keychain wrapper for iOS. 

It features only basic functions:

    + (BOOL)hasValueForKey:(NSString *)aKey;
    + (NSString *)secureValueForKey:(NSString *)key;
    + (BOOL)setSecureValue:(NSString *)string forKey:(NSString *)key;
    + (BOOL)removeSecureValueForKey:(NSString *)aKey;

    + (OSStatus)valueStatusForKey:(NSString *)aKey;

How to get it?
---
	git clone <github url above>
	
I suggest adding IXKeychain as a `submodule` to your existing project so that you can grab any updates as they come down.

License
---

The MIT License (MIT)
Copyright (c) 2011 Luke Freeman.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.