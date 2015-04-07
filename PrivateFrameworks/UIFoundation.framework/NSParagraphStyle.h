/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    float _defaultTabInterval;
    id _extraData;
    float _firstLineHeadIndent;
    struct { 
        unsigned int alignment : 4; 
        unsigned int lineBreakMode : 4; 
        unsigned int tabStopsIsMutable : 1; 
        unsigned int isNaturalDirection : 1; 
        unsigned int rightToLeftDirection : 1; 
        unsigned int fixedMultiple : 2; 
        unsigned int refCount : 19; 
    } _flags;
    float _headIndent;
    float _lineSpacing;
    float _maximumLineHeight;
    float _minimumLineHeight;
    float _paragraphSpacing;
    NSArray *_tabStops;
    float _tailIndent;
}

@property(readonly) int alignment;
@property(readonly) int baseWritingDirection;
@property(readonly) float defaultTabInterval;
@property(readonly) float firstLineHeadIndent;
@property(readonly) float headIndent;
@property(readonly) float hyphenationFactor;
@property(readonly) int lineBreakMode;
@property(readonly) float lineHeightMultiple;
@property(readonly) float lineSpacing;
@property(readonly) float maximumLineHeight;
@property(readonly) float minimumLineHeight;
@property(readonly) float paragraphSpacing;
@property(readonly) float paragraphSpacingBefore;
@property(copy,readonly) NSArray * tabStops;
@property(readonly) float tailIndent;

+ (int)_defaultWritingDirection;
+ (id)defaultParagraphStyle;
+ (int)defaultWritingDirectionForLanguage:(id)arg1;
+ (void)initialize;

- (void)_allocExtraData;
- (void)_deallocExtraData;
- (id)_initWithParagraphStyle:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(int*)arg1 lineBreakMode:(int*)arg2 tighteningFactorForTruncation:(float*)arg3;
- (BOOL)_tryRetain;
- (int)_ui_resolvedTextAlignment;
- (int)alignment;
- (int)baseWritingDirection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)defaultTabInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)firstLineHeadIndent;
- (unsigned int)hash;
- (float)headIndent;
- (int)headerLevel;
- (float)hyphenationFactor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)lineBreakMode;
- (float)lineHeightMultiple;
- (float)lineSpacing;
- (float)maximumLineHeight;
- (float)minimumLineHeight;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)paragraphSpacing;
- (float)paragraphSpacingBefore;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (id)tabStops;
- (float)tailIndent;
- (id)textBlocks;
- (id)textLists;
- (float)tighteningFactorForTruncation;

@end