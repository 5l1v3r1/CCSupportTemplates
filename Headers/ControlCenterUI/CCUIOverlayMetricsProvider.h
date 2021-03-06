/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

@class CCUIStatusBarStyleSnapshot;


@protocol CCUIOverlayMetricsProvider <NSObject>
@property (nonatomic,readonly) CGSize overlayContentSize;
@property (nonatomic,readonly) CGRect overlayContainerFrame;
@property (nonatomic,readonly) UIEdgeInsets overlayAdditionalEdgeInsets;
@property (getter=isReachabilityActive,nonatomic,readonly) BOOL reachabilityActive;
@property (nonatomic,readonly) CGFloat reachabilityOffset;
@property (nonatomic,readonly) NSInteger overlayInterfaceOrientation;
@property (nonatomic,copy,readonly) CCUIStatusBarStyleSnapshot * overlayStatusBarStyle;
@required
- (CGFloat)reachabilityOffset;
- (NSInteger)overlayInterfaceOrientation;
- (BOOL)isReachabilityActive;
- (CGRect)overlayContainerFrame;
- (CGSize)overlayContentSize;
- (CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;
- (UIEdgeInsets)overlayAdditionalEdgeInsets;

@end
