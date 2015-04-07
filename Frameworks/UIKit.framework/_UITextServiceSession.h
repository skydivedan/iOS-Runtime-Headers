/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIPopoverController, UIViewController;

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {
    BOOL _dismissed;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dismissedHandler;

    BOOL _isTextEffectsWindow;
    UIViewController *_modalViewController;
    UIPopoverController *_popoverController;
    int _type;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id dismissedHandler;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)canShowTextServices;
+ (id)showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
+ (id)textServiceSessionForType:(int)arg1;

- (void)_endSession;
- (void)dealloc;
- (void)dismissTextServiceAnimated:(BOOL)arg1;
- (id)dismissedHandler;
- (id)init;
- (id)initWithType:(int)arg1;
- (BOOL)isDisplaying;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)sessionDidDismiss;
- (void)setDismissedHandler:(id)arg1;
- (int)type;

@end