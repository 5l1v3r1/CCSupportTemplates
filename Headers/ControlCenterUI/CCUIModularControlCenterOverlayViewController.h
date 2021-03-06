/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIModularControlCenterViewController.h>
#import "CCUIScrollViewDelegate.h"
#import "CCUIStatusLabelViewControllerDelegate.h"
#import "CCUIOverlayViewProvider.h"
#import "CCUIOverlayMetricsProvider.h"
#import "CCUIStatusBarDelegate.h"

#import "CCUIModularControlCenterOverlayViewControllerDelegate.h"
#import "CCUIOverlayPresentationProvider.h"
#import "CCUIHostStatusBarStyleProvider.h"

@class MTMaterialView, UIScrollView, UIView, CCUIModuleCollectionView, CCUIStatusLabelViewController, CCUIHeaderPocketView, UIStatusBar, CCUIStatusBarStyleSnapshot, CCUIAnimationRunner, CCUIScrollView, UIPanGestureRecognizer, UITapGestureRecognizer, CCUIFlickGestureRecognizer, NSHashTable, NSUUID, CCUIOverlayTransitionState, NSString;

@interface CCUIModularControlCenterOverlayViewController : CCUIModularControlCenterViewController <UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate, CCUIOverlayViewProvider, CCUIOverlayMetricsProvider, CCUIStatusBarDelegate> {

	id<CCUIOverlayPresentationProvider> _presentationProvider;
	CCUIAnimationRunner* _primaryAnimationRunner;
	CCUIAnimationRunner* _secondaryAnimationRunner;
	MTMaterialView* _backgroundView;
	CCUIHeaderPocketView* _headerPocketView;
	CCUIScrollView* _scrollView;
	UIView* _containerView;
	UIStatusBar* _compactLeadingStatusBar;
	BOOL _presentationPanGestureActive;
	UIPanGestureRecognizer* _headerPocketViewDismissalPanGesture;
	UITapGestureRecognizer* _headerPocketViewDismissalTapGesture;
	CCUIFlickGestureRecognizer* _collectionViewDismissalFlickGesture;
	UIPanGestureRecognizer* _collectionViewDismissalPanGesture;
	UITapGestureRecognizer* _collectionViewDismissalTapGesture;
	UIPanGestureRecognizer* _collectionViewScrollPanGesture;
	NSHashTable* _blockingGestureRecognizers;
	BOOL _interactiveTransition;
	NSUUID* _currentTransitionUUID;
	CCUIOverlayTransitionState* _previousTransitionState;
	CCUIStatusBarStyleSnapshot* _hostStatusBarStyleSnapshot;
	BOOL _reachabilityActive;
	NSUInteger _presentationState;
	id<CCUIHostStatusBarStyleProvider> _hostStatusBarStyleProvider;

}

@property (assign,nonatomic) NSUInteger presentationState;							//@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,weak) id<CCUIModularControlCenterOverlayViewControllerDelegate> delegate;
@property (nonatomic,weak) id<CCUIHostStatusBarStyleProvider> hostStatusBarStyleProvider;			//@synthesize hostStatusBarStyleProvider=_hostStatusBarStyleProvider - In the implementation block
@property (assign,getter=isReachabilityActive,nonatomic) BOOL reachabilityActive;					//@synthesize reachabilityActive=_reachabilityActive - In the implementation block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
@property (nonatomic,readonly) MTMaterialView * overlayBackgroundView;
@property (nonatomic,readonly) UIScrollView * overlayScrollView;
@property (nonatomic,readonly) UIView * overlayContainerView;
@property (nonatomic,readonly) CCUIModuleCollectionView * overlayModuleCollectionView;
@property (nonatomic,readonly) CCUIStatusLabelViewController * overlayStatusLabelViewController;
@property (nonatomic,readonly) CCUIHeaderPocketView * overlayHeaderView;
@property (nonatomic,readonly) UIStatusBar * overlayLeadingStatusBar;
@property (nonatomic,readonly) CGSize overlayContentSize;
@property (nonatomic,readonly) CGRect overlayContainerFrame;
@property (nonatomic,readonly) UIEdgeInsets overlayAdditionalEdgeInsets;
@property (nonatomic,readonly) CGFloat reachabilityOffset;
@property (nonatomic,readonly) NSInteger overlayInterfaceOrientation;
@property (nonatomic,copy,readonly) CCUIStatusBarStyleSnapshot * overlayStatusBarStyle;
+ (id)_presentationProviderForDevice;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (NSUInteger)preferredScreenEdgesDeferringSystemGestures;
- (NSUInteger)supportedInterfaceOrientations;
- (NSUInteger)__supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (CGFloat)reachabilityOffset;
- (void)setReachabilityActive:(BOOL)arg1;
- (UIScrollView *)overlayScrollView;
- (void)presentAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2;
- (void)setPresentationState:(NSUInteger)arg1;
- (UIView *)overlayContainerView;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (NSInteger)overlayInterfaceOrientation;
- (BOOL)isReachabilityActive;
- (CGRect)overlayContainerFrame;
- (MTMaterialView *)overlayBackgroundView;
- (CGSize)overlayContentSize;
- (CCUIHeaderPocketView *)overlayHeaderView;
- (UIStatusBar *)overlayLeadingStatusBar;
- (CCUIStatusLabelViewController *)overlayStatusLabelViewController;
- (CCUIModuleCollectionView *)overlayModuleCollectionView;
- (CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;
- (void)setOverlayStatusBarHidden:(BOOL)arg1;
- (UIEdgeInsets)overlayAdditionalEdgeInsets;
- (instancetype)initWithSystemAgent:(id)arg1;
- (id)_statusLabelViewContainerView;
- (id)_moduleCollectionViewContainerView;
- (void)_reparentAndBecomeActive;
- (instancetype)_initWithSystemAgent:(id)arg1 presentationProvider:(id)arg2;
- (id)_beginPresentationAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (void)_endPresentationWithUUID:(id)arg1 success:(BOOL)arg2;
- (void)_updatePresentationForTransitionState:(id)arg1 withCompletionHander:(/*^block*/ id)arg2;
- (id<CCUIHostStatusBarStyleProvider>)hostStatusBarStyleProvider;
- (void)_cancelDismissalPanGestures;
- (id)_beginDismissalAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (void)_endDismissalWithUUID:(id)arg1 animated:(BOOL)arg2 success:(BOOL)arg3;
- (void)_updateHotPocketAnimated:(BOOL)arg1;
- (void)_updateHotPocket:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupPanGestureFailureRequirements;
- (void)_handleDismissalPanGestureRecognizer:(id)arg1;
- (void)_handleDismissalTapGestureRecognizer:(id)arg1;
- (void)_handleDismissalFlickGestureRecognizer:(id)arg1;
- (BOOL)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_dismissalTapGestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_dismissalPanGestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_scrollPanGestureRecognizerShouldBegin:(id)arg1;
- (void)updatePresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)_updatePresentationForTransitionType:(NSUInteger)arg1 translation:(CGPoint)arg2 interactive:(BOOL)arg3;
- (BOOL)_scrollViewIsScrollable;
- (BOOL)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(CGPoint)arg1;
- (BOOL)_scrollViewCanAcceptDownwardsPan;
- (BOOL)_gestureRecognizerIsActive:(id)arg1;
- (void)_dismissalPanGestureRecognizerBegan:(id)arg1;
- (void)_dismissalPanGestureRecognizerChanged:(id)arg1;
- (void)_dismissalPanGestureRecognizerEnded:(id)arg1;
- (void)_dismissalPanGestureRecognizerCancelled:(id)arg1;
- (void)_dismissalPanGestureRecognizerFailed:(id)arg1;
- (BOOL)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1;
- (void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1;
- (id)compactStyleRequestForStatusBar:(id)arg1;
- (void)beginPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)endPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)cancelPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)setHostStatusBarStyleProvider:(id<CCUIHostStatusBarStyleProvider>)arg1;
- (NSUInteger)presentationState;
- (void)dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2;
@end
