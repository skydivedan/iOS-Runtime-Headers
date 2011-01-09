/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSNumberFormatter, UIImageView, UILabel;



@interface PLProgressView : UIView 
{
    UIImageView *_backgroundView;
    UILabel *_labelView;
    UIImageView *_progressView;
    UIImageView *_wellView;
    unsigned int _didLayout : 1;
    NSNumberFormatter *_progressFormatter;
    float _percentComplete;
}

@property float percentComplete;

+ (void)_initializeSafeCategory;

- (float)percentComplete;
- (void)setLabelText:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (void)updateUIForPublishingAgent:(id)arg1;
- (void)_updateProgressView;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end