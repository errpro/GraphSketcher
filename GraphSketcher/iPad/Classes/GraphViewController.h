// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/trunk/OmniGroup/Applications/OmniGraphSketcher/iPad/Classes/GraphViewController.h 200244 2013-12-10 00:11:55Z correia $

#import <OmniUI/OUIScalingViewController.h>

#import <OmniUIDocument/OUIDocumentViewController.h>

@class OUIDirectTapGestureRecognizer;
@class GraphView, RSGraphEditor;

@interface GraphViewController : OUIScalingViewController <OUIDocumentViewController>

- initWithEditor:(RSGraphEditor *)editor;

@property(nonatomic,retain) IBOutlet GraphView *graphView;

@property(nonatomic,retain) RSGraphEditor *editor;

@end

