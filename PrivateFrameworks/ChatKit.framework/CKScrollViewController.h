/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKScheduledUpdater, UIScrollView;

@interface CKScrollViewController : CKViewController {
    float _bottomInsetPadding;
    BOOL _keyboardInteractionCancelled;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardScreenFrame;
    BOOL _keyboardVisible;
    UIScrollView *_scrollView;
    BOOL _topInsetIncludesPalette;
    float _topInsetPadding;
    CKScheduledUpdater *_updater;
}

@property(readonly) float bottomInsetPadding;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } keyboardFrame;
@property BOOL keyboardInteractionCancelled;
@property(getter=isKeyboardOnscreenWithoutAccessoryView,readonly) BOOL keyboardOnscreenWithoutAccessoryView;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } keyboardScreenFrame;
@property(getter=isKeyboardUndocked,readonly) BOOL keyboardUndocked;
@property(getter=isKeyboardVisible) BOOL keyboardVisible;
@property(readonly) UIScrollView * scrollView;
@property(readonly) BOOL topInsetIncludesPalette;
@property(readonly) float topInsetPadding;
@property(retain) CKScheduledUpdater * updater;

- (float)_bottomRotatingFooterHeight;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_updateScrollGeometryWithDuration:(float)arg1;
- (float)_visibleKeyboardHeight;
- (float)accessoryViewHeight;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (float)bottomInsetPadding;
- (float)bottomInsetWithoutAccessoryView;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 animated:(BOOL)arg2 duration:(float)arg3;
- (void)dealloc;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (id)init;
- (BOOL)isKeyboardOnscreenWithoutAccessoryView;
- (BOOL)isKeyboardUndocked;
- (BOOL)isKeyboardVisible;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidShowOrHide:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyboardFrame;
- (BOOL)keyboardInteractionCancelled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyboardScreenFrame;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHideViaGesture;
- (void)keyboardWillShowOrHide:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })navigationBarInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })navigationBarInsetsWithoutPalette;
- (id)scrollView;
- (void)setKeyboardInteractionCancelled:(BOOL)arg1;
- (void)setKeyboardScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)setUpdater:(id)arg1;
- (BOOL)topInsetIncludesPalette;
- (float)topInsetPadding;
- (void)updateScrollGeometry;
- (id)updater;
- (float)visibleHeightAboveKeyboard;

@end