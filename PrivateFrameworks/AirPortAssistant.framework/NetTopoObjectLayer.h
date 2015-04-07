/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class BubbleTextLayer, NSMutableArray, NSString, NSTimer, NetTopoObjectLayer, TopoNumberBadge, TopoProgressBar, UIImage;

@interface NetTopoObjectLayer : CALayer {
    NetTopoObjectLayer *_ancestor;
    id _associatedNode;
    struct CGSize { 
        float width; 
        float height; 
    } _boundsSizeConstraint;
    float _change;
    NSMutableArray *_children;
    unsigned int _column;
    NetTopoObjectLayer *_contourThread;
    BOOL _ghosted;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageCoreFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageSelectionFrame;
    BOOL _isExpanded;
    BubbleTextLayer *_labelLayer;
    float _labelPinnedHeight;
    struct CGColor { } *_labelSelectedFillColor;
    struct CGColor { } *_labelSelectedFillColor2;
    struct CGColor { } *_labelSelectedTextColor;
    NSString *_labelString;
    struct CGColor { } *_labelUnselectedFillColor;
    struct CGColor { } *_labelUnselectedTextColor;
    struct CGPoint { 
        float x; 
        float y; 
    } _layoutOrigin;
    float _layoutScale;
    float _mod;
    unsigned int _number;
    struct CGImage { } *_objectImage;
    id _owningView;
    NetTopoObjectLayer *_parent;
    float _prelim;
    unsigned int _row;
    NSString *_saveLabel;
    NSString *_saveLable;
    BubbleTextLayer *_secondaryLabelLayer;
    struct CGColor { } *_secondaryLabelSelectedTextColor;
    NSString *_secondaryLabelString;
    struct CGColor { } *_secondaryLabelUnselectedTextColor;
    BOOL _selectable;
    BOOL _selected;
    struct CGColor { } *_selectionColor;
    float _selectionCornerRadius;
    float _selectionRectOutset;
    float _shift;
    BOOL _smallSize;
    UIImage *_statusBadgeImage;
    float _statusLightInterval;
    unsigned int _statusLightMode;
    unsigned int _statusLightState;
    NSTimer *_statusLightTimer;
    UIImage *_statusLights[4];
    unsigned int _topoBadgeNumber;
    TopoNumberBadge *_topoNumberBadge;
    TopoProgressBar *_topoProgressBar;
    float _topoProgressValue;
    int _topoStyle;
    id _userObject;
}

@property NetTopoObjectLayer * ancestor;
@property(retain) id associatedNode;
@property struct CGSize { float x1; float x2; } boundsSizeConstraint;
@property float change;
@property(retain) NSMutableArray * children;
@property unsigned int column;
@property NetTopoObjectLayer * contourThread;
@property(getter=isExpanded) BOOL expanded;
@property(getter=isGhosted) BOOL ghosted;
@property(retain) NSString * label;
@property float labelPinnedHeight;
@property struct CGPoint { float x1; float x2; } layoutOrigin;
@property float layoutScale;
@property float mod;
@property unsigned int number;
@property(readonly) unsigned int numberOfChildren;
@property(retain) struct CGImage { }* objectImage;
@property id owningView;
@property(retain) NetTopoObjectLayer * parent;
@property(readonly) NetTopoObjectLayer * parentDevice;
@property float prelim;
@property unsigned int row;
@property(retain) NSString * saveLabel;
@property(retain) NSString * secondaryLabel;
@property(getter=isSelectable) BOOL selectable;
@property(getter=isSelected) BOOL selected;
@property float shift;
@property BOOL smallSize;
@property(retain) UIImage * statusBadgeImage;
@property unsigned int statusLightMode;
@property unsigned int topoBadgeNumber;
@property float topoProgressValue;
@property(retain) id userObject;

+ (BOOL)needsDisplayForKey:(id)arg1;

- (void)addChild:(id)arg1;
- (id)ancestor;
- (id)associatedNode;
- (struct CGSize { float x1; float x2; })boundsSizeConstraint;
- (float)change;
- (id)childAtIndex:(unsigned int)arg1;
- (id)children;
- (unsigned int)column;
- (id)contourThread;
- (void)dealloc;
- (void)deallocStatusImages;
- (id)debugDescription;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned int)arg3;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)firstChild;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })getConnectionAttachmentLocations;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getFrameContainingAllSublayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getUserInteractionBounds;
- (id)init;
- (void)initNetTopoObjectLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isExpanded;
- (BOOL)isGhosted;
- (BOOL)isSelectable;
- (BOOL)isSelected;
- (id)label;
- (float)labelPinnedHeight;
- (id)lastChild;
- (struct CGPoint { float x1; float x2; })layoutOrigin;
- (float)layoutScale;
- (void)layoutSublayers;
- (void)loadStatusImagesForScale:(float)arg1;
- (float)mod;
- (unsigned int)number;
- (unsigned int)numberOfChildren;
- (struct CGImage { }*)objectImage;
- (id)owningView;
- (id)parent;
- (id)parentDevice;
- (void)pickCorrectImagesForContentsScale:(float)arg1;
- (float)prelim;
- (void)removeChild:(id)arg1;
- (unsigned int)row;
- (id)saveLabel;
- (id)secondaryLabel;
- (void)setAncestor:(id)arg1;
- (void)setAssociatedNode:(id)arg1;
- (void)setBoundsSizeConstraint:(struct CGSize { float x1; float x2; })arg1;
- (void)setChange:(float)arg1;
- (void)setChildren:(id)arg1;
- (void)setColumn:(unsigned int)arg1;
- (void)setContourThread:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setGhosted:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelPinnedHeight:(float)arg1;
- (void)setLayoutOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLayoutScale:(float)arg1;
- (void)setMod:(float)arg1;
- (void)setNumber:(unsigned int)arg1;
- (void)setObjectImage:(struct CGImage { }*)arg1;
- (void)setOwningView:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPrelim:(float)arg1;
- (void)setRow:(unsigned int)arg1;
- (void)setSaveLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShift:(float)arg1;
- (void)setSmallSize:(BOOL)arg1;
- (void)setStatusBadgeImage:(id)arg1;
- (void)setStatusBadgeImagePriv:(id)arg1;
- (void)setStatusLightMode:(unsigned int)arg1;
- (void)setStatusLightStateFromMode;
- (void)setTopoBadgeNumber:(unsigned int)arg1;
- (void)setTopoProgressValue:(float)arg1;
- (void)setUserObject:(id)arg1;
- (float)shift;
- (BOOL)smallSize;
- (id)statusBadgeImage;
- (unsigned int)statusLightMode;
- (void)statusLightUpdateTimer:(id)arg1;
- (unsigned int)topoBadgeNumber;
- (float)topoProgressValue;
- (id)userObject;

@end