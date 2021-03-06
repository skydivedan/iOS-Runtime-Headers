/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {
    NSString * _feedId;
    int  _feedType;
    struct { 
        unsigned int feedType : 1; 
    }  _has;
    NSMutableArray * _recommendedFeedIds;
}

@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic, retain) NSMutableArray *recommendedFeedIds;

+ (Class)recommendedFeedIdsType;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (void)addRecommendedFeedIds:(id)arg1;
- (void)clearRecommendedFeedIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (BOOL)hasFeedId;
- (BOOL)hasFeedType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recommendedFeedIds;
- (id)recommendedFeedIdsAtIndex:(unsigned int)arg1;
- (unsigned int)recommendedFeedIdsCount;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setHasFeedType:(BOOL)arg1;
- (void)setRecommendedFeedIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
