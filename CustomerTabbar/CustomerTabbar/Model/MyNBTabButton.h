

#import <Foundation/Foundation.h>
#import "MyNBTabController.h"
#import "MyNBTabNotification.h"

@interface MyNBTabButton : NSObject {
    UIImage *icon;
    UIImage *highlightedIcon;
    NSMutableArray *_notifications;
    MyNBTabNotification *_notification;
}
@property (nonatomic,strong) UIImage *icon;
@property (nonatomic,strong) UIImage *highlightedIcon;
@property (nonatomic,strong) MyNBTabController *viewController;

- (id)initWithIcon:(UIImage *)icon;
- (void)addNotification:(NSDictionary *)notification;
- (void)removeNotification:(NSUInteger)index;
- (void)clearNotifications;

- (NSInteger)notificationCount;

- (MyNBTabNotification *)notificationView;
@end
