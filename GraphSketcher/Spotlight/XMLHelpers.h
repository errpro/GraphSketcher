// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/trunk/OmniGroup/Applications/OmniGraphSketcher/Spotlight/XMLHelpers.h 200244 2013-12-10 00:11:55Z correia $

#import <CoreFoundation/CoreFoundation.h>

__private_extern__ CFStringRef GetReplacmentForInternalEntityName(CFStringRef);
__private_extern__ CFStringRef CreateEntityReplacementStringForCharacterEntity(CFXMLParserRef parser, CFStringRef str);

__private_extern__ void XMLParserAbort(CFXMLParserRef parser, CFXMLParserStatusCode errorCode, CFStringRef format, ...);
