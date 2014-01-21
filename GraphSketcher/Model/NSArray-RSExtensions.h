// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/trunk/OmniGroup/Applications/OmniGraphSketcher/Model/NSArray-RSExtensions.h 200244 2013-12-10 00:11:55Z correia $

#import <Foundation/NSArray.h>


@interface NSArray (RSExtensions)

- (NSMutableArray *)objectsWithClass:(Class)c;
- (NSUInteger)numberOfObjectsWithClass:(Class)c;
- (id)firstObjectWithClass:(Class)c;

@end
