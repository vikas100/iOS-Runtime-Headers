/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImageView;

@interface UIWebDragDotView : UIView {
    UIImageView *m_dot;
    UIColor *m_insertionPointColor;
    int m_orientation;
    UIColor *m_selectionBarColor;
}

@property BOOL showsBall;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 container:(id)arg2 orientation:(int)arg3;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;
- (BOOL)isPointedUp;
- (BOOL)isVertical;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShowsBall:(BOOL)arg1;
- (BOOL)showsBall;

@end