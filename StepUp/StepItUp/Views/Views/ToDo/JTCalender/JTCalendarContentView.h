//
//  JTCalendarContentView.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

@class JTCalendar;

@interface JTCalendarContentView : UIScrollView

@property (weak, nonatomic) JTCalendar *calendarManager;

@property (strong, nonatomic) NSDate *currentDate;
-(NSMutableArray *)getViews;
- (void)reloadData;
- (void)reloadAppearance;

@end