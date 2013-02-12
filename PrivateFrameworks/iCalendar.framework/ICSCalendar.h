/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSColor, ICSDuration, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ICSCalendar : ICSComponent {
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableArray *_parsingErrors;
    NSMutableDictionary *_timezones;
}

@property(retain) NSString * calscale;
@property int method;
@property(retain) NSString * prodid;
@property(retain) NSString * version;
@property(retain) ICSDuration * x_apple_auto_refresh;
@property(retain) ICSColor * x_apple_calendar_color;
@property BOOL x_apple_ignore_on_restore;
@property int x_calendarserver_access;
@property(retain) NSString * x_wr_caldesc;
@property(retain) NSString * x_wr_calname;
@property(retain) NSString * x_wr_relcalid;
@property(retain) NSString * x_wr_timezone;

+ (id)ICSStringFromCalendarServerAccess:(int)arg1;
+ (id)ICSStringFromMethod:(int)arg1;
+ (int)calendarServerAccessFromICSString:(id)arg1;
+ (id)calendarWithKnownTimeZones;
+ (id)defaultProdid;
+ (int)methodFromICSString:(id)arg1;
+ (id)name;
+ (void)setDefaultProdid:(id)arg1;

- (void)_addComponent:(id)arg1;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (id)_init;
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;
- (void)addComponent:(id)arg1;
- (void)addParsingError:(id)arg1;
- (id)calscale;
- (id)componentForKey:(id)arg1;
- (id)componentKeys;
- (id)componentOccurrencesForKey:(id)arg1;
- (void)dealloc;
- (void)fixComponent;
- (void)fixEntities;
- (void)fixPropertiesInheritance;
- (id)init;
- (int)method;
- (id)parsingErrors;
- (id)prodid;
- (void)setCalscale:(id)arg1;
- (void)setComponents:(id)arg1 options:(int)arg2;
- (void)setComponents:(id)arg1 timeZones:(BOOL)arg2;
- (void)setComponents:(id)arg1;
- (void)setMethod:(int)arg1;
- (void)setProdid:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setX_apple_auto_refresh:(id)arg1;
- (void)setX_apple_calendar_color:(id)arg1;
- (void)setX_wr_caldesc:(id)arg1;
- (void)setX_wr_calname:(id)arg1;
- (void)setX_wr_relcalid:(id)arg1;
- (void)setX_wr_timezone:(id)arg1;
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;
- (id)systemDateForDate:(id)arg1 options:(int)arg2;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)version;
- (id)x_apple_auto_refresh;
- (id)x_apple_calendar_color;
- (id)x_wr_caldesc;
- (id)x_wr_calname;
- (id)x_wr_relcalid;
- (id)x_wr_timezone;

@end