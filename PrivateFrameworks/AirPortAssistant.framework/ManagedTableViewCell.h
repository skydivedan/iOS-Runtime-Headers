/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSIndexPath, NSMutableDictionary, TableViewManager;

@interface ManagedTableViewCell : UITableViewCell {
    NSMutableDictionary *_cellDict;
    float _cellXEdgeInset;
    float _computedRightmostEditTextInset;
    NSIndexPath *_currentIndexPath;
    float _forcedRightmostEditTextInset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _modifiedContentViewFrame;
    float _neededContentHeight;
    TableViewManager *_parentTableManager;
}

@property(retain) NSMutableDictionary * cellDict;
@property(readonly) float computedRightmostEditTextInset;
@property(retain) NSIndexPath * currentIndexPath;
@property float forcedRightmostEditTextInset;
@property(readonly) float neededContentHeight;
@property TableViewManager * parentTableManager;

- (id)accessibilityValue;
- (float)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3 withRemainingContentWidth:(float)arg4;
- (void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3;
- (id)cellDict;
- (float)computedRightmostEditTextInset;
- (id)currentIndexPath;
- (void)dealloc;
- (float)edgeInsetValue:(id)arg1;
- (float)forcedRightmostEditTextInset;
- (float)horizontalSpacingForView:(id)arg1 withItem:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)leftInsetForView:(id)arg1 withItem:(id)arg2;
- (float)neededContentHeight;
- (id)parentTableManager;
- (void)prepareForReuse;
- (void)repositionView:(id)arg1 ifOverlapsPreviousView:(id)arg2;
- (float)rightInsetForView:(id)arg1 withItem:(id)arg2;
- (void)setCellDict:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setForcedRightmostEditTextInset:(float)arg1;
- (void)setParentTableManager:(id)arg1;
- (float)usableContentWidth;
- (float)usableContentWidthForItem:(id)arg1 withVerticalNeighborView:(id)arg2;
- (float)verticalInset;
- (float)verticalSpacingForView:(id)arg1 withItem:(id)arg2;

@end