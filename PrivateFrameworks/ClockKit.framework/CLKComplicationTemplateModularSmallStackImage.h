/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateModularSmallStackImage : CLKComplicationTemplate {
    unsigned int  _highlightMode;
    CLKImageProvider * _line1ImageProvider;
    CLKTextProvider * _line2TextProvider;
}

@property (nonatomic) BOOL highlightLine2;
@property (nonatomic) unsigned int highlightMode;
@property (nonatomic, copy) CLKImageProvider *line1ImageProvider;
@property (nonatomic, copy) CLKTextProvider *line2TextProvider;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (BOOL)highlightLine2;
- (unsigned int)highlightMode;
- (BOOL)isCompatibleWithFamily:(int)arg1;
- (id)line1ImageProvider;
- (id)line2TextProvider;
- (void)setHighlightLine2:(BOOL)arg1;
- (void)setHighlightMode:(unsigned int)arg1;
- (void)setLine1ImageProvider:(id)arg1;
- (void)setLine2TextProvider:(id)arg1;

@end
