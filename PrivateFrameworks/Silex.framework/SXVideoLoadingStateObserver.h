/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoLoadingStateObserver : NSObject <SXVideoLoadingStateObserving, SXVideoPlaybackObserver> {
    id /* block */  _failedBlock;
    id /* block */  _finishedBlock;
    id /* block */  _startBlock;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=onFailed:, nonatomic, copy) id /* block */ failedBlock;
@property (setter=onFinished:, nonatomic, copy) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (setter=onStart:, nonatomic, copy) id /* block */ startBlock;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)failedBlock;
- (id /* block */)finishedBlock;
- (id)initWithPlaybackCoordinator:(id)arg1;
- (void)onFailed:(id /* block */)arg1;
- (void)onFinished:(id /* block */)arg1;
- (void)onStart:(id /* block */)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id /* block */)startBlock;
- (unsigned long long)state;

@end