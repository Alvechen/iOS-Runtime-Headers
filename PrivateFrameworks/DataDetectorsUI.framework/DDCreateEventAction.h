/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate> {
    DDRemoteActionViewController * viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) DDRemoteActionViewController *viewController;

+ (bool)actionAvailableForEvent:(id)arg1;
+ (id)cachedEventForICSString:(id)arg1;

- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (int)interactionType;
- (void)invalidate;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)prepareViewControllerForActionController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
