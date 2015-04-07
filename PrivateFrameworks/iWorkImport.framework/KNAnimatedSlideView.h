/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimatedSlideModel, KNPlaybackSession, KNSlide, KNSlideNode, NSIndexSet, NSMutableArray, NSMutableSet, NSSet, NSString, TSDCanvas, TSUNoCopyDictionary;

@interface KNAnimatedSlideView : NSObject <TSDCanvasDelegate, TSDConnectedInfoReplacing> {
    NSMutableSet *mActiveAnimatedBuilds;
    KNSlideNode *mAlternateDestinationSlideNode;
    KNAnimatedSlideModel *mAnimatedSlideModel;
    unsigned int mAnimationsActive;
    unsigned int mAnimationsStarted;
    TSUNoCopyDictionary *mBuildsToStartAfterMovieStartsMap;
    TSDCanvas *mCanvas;
    NSMutableArray *mChunks;
    unsigned int mCurrentEventIndex;
    SEL mEventAnimationActiveCallbackSelector;
    id mEventAnimationActiveCallbackTarget;
    SEL mEventEndCallbackSelector;
    id mEventEndCallbackTarget;
    SEL mEventImmediateEndCallbackSelector;
    id mEventImmediateEndCallbackTarget;
    NSIndexSet *mEventIndexesToAnimate;
    SEL mEventStartCallbackSelector;
    id mEventStartCallbackTarget;
    BOOL mEventTriggered;
    BOOL mIsInDelayBeforeActiveAnimations;
    int mIsTexturePreloadingCancelled;
    SEL mMovieEndCallbackSelector;
    id mMovieEndCallbackTarget;
    NSMutableSet *mMovieRenderers;
    SEL mMovieStartCallbackSelector;
    id mMovieStartCallbackTarget;
    BOOL mPlaysAutomaticTransitions;
    BOOL mQueuedTrigger;
    KNPlaybackSession *mSession;
    BOOL mShouldStopAnimations;
    BOOL mSkipDelayOnTransition;
    KNSlide *mSlide;
    BOOL mSlideIsBuildable;
    unsigned int mSlideNumber;
    TSUNoCopyDictionary *mTextureSetForRepMap;
    NSMutableSet *mTextureSets;
    BOOL mTransitionInitialized;
    double mTransitionStartTime;
}

@property(readonly) NSSet * activeAnimatedBuilds;
@property(readonly) TSDCanvas * canvas;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int eventCount;
@property BOOL eventHasTriggered;
@property unsigned int eventIndex;
@property(copy) NSIndexSet * eventIndexesToAnimate;
@property(readonly) BOOL hasBuilds;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isAnimating;
@property(readonly) BOOL isDoneAnimating;
@property(readonly) BOOL isMovieAnimating;
@property(readonly) BOOL isNonMovieAnimationActive;
@property(readonly) BOOL isNonMovieAnimationAnimating;
@property(readonly) KNAnimatedSlideModel * model;
@property(readonly) NSSet * movieRenderers;
@property BOOL playsAutomaticTransitions;
@property(readonly) KNPlaybackSession * session;
@property BOOL skipDelayOnTransition;
@property(readonly) Class superclass;
@property BOOL triggerQueued;

+ (void)initialize;
+ (void)registerUserDefaults;

- (id)activeAnimatedBuilds;
- (void)addActiveAnimatedBuild:(id)arg1;
- (void)buildHasFinishedAnimating:(id)arg1;
- (void)cancelTexturePreloading;
- (id)canvas;
- (void)clearActiveAnimatedBuilds;
- (void)dealloc;
- (id)documentRoot;
- (unsigned int)eventCount;
- (BOOL)eventHasTriggered;
- (unsigned int)eventIndex;
- (id)eventIndexesToAnimate;
- (BOOL)hasBuilds;
- (BOOL)hasTransitionAtEventIndex:(int)arg1;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)infosCurrentlyVisible;
- (id)infosVisibleAtEvent:(unsigned int)arg1 ignoreBuildVisibility:(BOOL)arg2;
- (id)initForSlideNode:(id)arg1 session:(id)arg2;
- (void)interruptAndReset;
- (BOOL)isAnimating;
- (BOOL)isAtFirstEvent;
- (BOOL)isCanvasDrawingIntoPDF:(id)arg1;
- (BOOL)isDoneAnimating;
- (BOOL)isMovieAnimating;
- (BOOL)isNonMovieAnimationActive;
- (BOOL)isNonMovieAnimationAnimating;
- (BOOL)isPrintingCanvas;
- (id)model;
- (void)movieHasFinishedPlayback:(id)arg1;
- (id)movieRenderers;
- (void)p_addMovieRenderer:(id)arg1;
- (void)p_animateBuild:(id)arg1;
- (void)p_animateBuild:(id)arg1 afterDelay:(double)arg2;
- (void)p_animateBuild:(id)arg1 isMoviePlayback:(BOOL)arg2;
- (void)p_animateCurrentEventIgnoringDelays:(BOOL)arg1;
- (void)p_animateTransition:(id)arg1;
- (void)p_clearMovieRenderers;
- (id)p_getRenderersAtEventIndex:(int)arg1;
- (id)p_infosForSlide;
- (double)p_minimumDelay;
- (void)p_movieStarted:(id)arg1;
- (void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)arg1;
- (void)p_removeMovieRenderer:(id)arg1;
- (void)p_renderTexturesForEvent:(unsigned int)arg1 onBaseLayer:(id)arg2 intoContext:(struct CGContext { }*)arg3 shouldPrepareBuildAnimation:(BOOL)arg4 ignoreBuildVisibility:(BOOL)arg5;
- (void)p_resetMovieTextures;
- (void)p_setupTransitionStartTime;
- (BOOL)p_shouldAddInfoToTree:(id)arg1;
- (BOOL)p_shouldSkipActionBuild:(id)arg1 onMovieInfo:(id)arg2;
- (void)p_stopAllMovieRenderers;
- (void)p_tearDownTexturesIsExitingShow:(BOOL)arg1;
- (void)pauseAnimations;
- (BOOL)playAutomaticEvents;
- (BOOL)playsAutomaticTransitions;
- (void)preloadTexturesForEvent:(unsigned int)arg1 ignoreBuildVisibility:(BOOL)arg2;
- (void)preloadTexturesForEvent:(unsigned int)arg1 ignoreBuildVisibility:(BOOL)arg2 priority:(long)arg3 completionHandler:(id)arg4;
- (void)registerForEventAnimationActiveCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventStartCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeActiveAnimatedBuild:(id)arg1;
- (void)renderCurrentEvent;
- (void)renderCurrentEventPreparingNextEvent:(BOOL)arg1;
- (void)renderEvent:(unsigned int)arg1 intoContext:(struct CGContext { }*)arg2 ignoreBuildVisibility:(BOOL)arg3;
- (void)renderEvent:(unsigned int)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(BOOL)arg3;
- (void)renderEvent:(unsigned int)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(BOOL)arg3 isIncomingSlideInTransition:(BOOL)arg4;
- (void)renderEvent:(unsigned int)arg1 shouldPrepareBuildAnimation:(BOOL)arg2 shouldPrepareTransition:(BOOL)arg3;
- (id)repsCurrentlyVisible;
- (void)reset;
- (void)resumeAnimationsIfPaused;
- (id)session;
- (void)setEventHasTriggered:(BOOL)arg1;
- (void)setEventIndex:(unsigned int)arg1;
- (void)setEventIndexesToAnimate:(id)arg1;
- (void)setNewDestinationSlideNode:(id)arg1;
- (void)setPlaysAutomaticTransitions:(BOOL)arg1;
- (void)setSkipDelayOnTransition:(BOOL)arg1;
- (void)setTexture:(id)arg1 forRep:(id)arg2;
- (void)setTriggerQueued:(BOOL)arg1;
- (void)setupTransition;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)skipDelayOnTransition;
- (BOOL)slideContainsRepsThatMustDrawOnMainThread;
- (unsigned int)slideNumber;
- (void)stopAnimations;
- (id)textureSetForRep:(id)arg1;
- (void)transitionHasFinishedAnimating:(id)arg1;
- (void)transitionHasImmediatelyFinishedAnimating:(id)arg1;
- (void)triggerNextEvent;
- (void)triggerNextEventIgnoringDelay:(BOOL)arg1;
- (BOOL)triggerQueued;

@end