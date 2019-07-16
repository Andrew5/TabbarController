

#import <UIKit/UIKit.h>

@interface MyNBTabNotification : UIView{
    UIImageView *imageView;
    UILabel *countLabel;
    NSInteger notificationCount;
}

-(NSInteger)notificationCount;
-(void)addNotifications:(NSInteger)n;
-(void)removeNotifications:(NSInteger)n;

-(void)setAllFrames:(CGRect)frame;
-(void)updateImageView;
@end
