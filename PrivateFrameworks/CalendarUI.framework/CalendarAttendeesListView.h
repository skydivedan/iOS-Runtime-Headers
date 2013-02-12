/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarModel, NSArray;

@interface CalendarAttendeesListView : UIPreferencesTable <CalendarView> {
    NSArray *_attendeeDisplayStrings;
    NSArray *_attendees;
    CalendarModel *_model;
}

+ (id)navigationTitleForModel:(id)arg1;

- (void)_selectedAttendeeChanged:(id)arg1;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)cleanUp;
- (void)dealloc;
- (void)finishedTransitionIn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (NSInteger)numberOfRowsInTable:(id)arg1;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (void)setDisplayedOccurrence:(struct CalEventOccurrence { }*)arg1;
- (void)setModel:(id)arg1;
- (BOOL)table:(id)arg1 showDisclosureForRow:(NSInteger)arg2;
- (void)tableSelectionDidChange:(id)arg1;

@end