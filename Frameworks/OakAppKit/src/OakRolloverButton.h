#include <oak/misc.h>

extern NSNotificationName const OakRolloverButtonMouseDidEnterNotification;
extern NSNotificationName const OakRolloverButtonMouseDidLeaveNotification;

PUBLIC @interface OakRolloverButton : NSButton
@property (nonatomic) NSImage* regularImage;
@property (nonatomic) NSImage* pressedImage;
@property (nonatomic) NSImage* rolloverImage;
@property (nonatomic) NSImage* inactiveRegularImage;
@property (nonatomic) NSImage* inactivePressedImage;
@property (nonatomic) NSImage* inactiveRolloverImage;
@property (nonatomic) BOOL disableWindowOrderingForFirstMouse;
@end
