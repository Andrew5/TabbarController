

#import <UIKit/UIKit.h>
@class MyNBTabController;
@protocol MyNBTabBarDelegate <NSObject>

- (void)switchViewController:(MyNBTabController *)viewController;

@end


@interface MyNBTabBar : UIView
@property (nonatomic,assign)id<MyNBTabBarDelegate> delegate;


- (id)initWithItems:(NSArray *)items;

- (void)showDefauls;
- (void)showIndex:(NSInteger)index;

- (void)touchDownForButton:(UIButton *)button;
- (void)touchUpForButton:(UIButton *)button;
@end
