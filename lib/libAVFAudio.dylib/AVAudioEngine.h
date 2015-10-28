/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioEngine : NSObject {
    void *_impl;
}

@property (nonatomic, readonly) AVAudioInputNode *inputNode;
@property (nonatomic, readonly) AVAudioMixerNode *mainMixerNode;
@property (nonatomic) struct OpaqueMusicSequence { }*musicSequence;
@property (nonatomic, readonly) AVAudioOutputNode *outputNode;
@property (getter=isRunning, nonatomic, readonly) BOOL running;

- (void)attachNode:(id)arg1;
- (void)connect:(id)arg1 to:(id)arg2 format:(id)arg3;
- (void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned int)arg3 toBus:(unsigned int)arg4 format:(id)arg5;
- (void)connect:(id)arg1 toConnectionPoints:(id)arg2 fromBus:(unsigned int)arg3 format:(id)arg4;
- (void)dealloc;
- (id)description;
- (void)detachNode:(id)arg1;
- (void)disconnectNodeInput:(id)arg1;
- (void)disconnectNodeInput:(id)arg1 bus:(unsigned int)arg2;
- (void)disconnectNodeOutput:(id)arg1;
- (void)disconnectNodeOutput:(id)arg1 bus:(unsigned int)arg2;
- (struct AVAudioEngineImpl { id x1; struct AVAudioEngineGraph {} x2; bool x3; bool x4; id x5; id x6; struct AVAudioIOUnit {} *x7; id x8; int x9; }*)implementation;
- (id)init;
- (id)inputConnectionPointForNode:(id)arg1 inputBus:(unsigned int)arg2;
- (id)inputNode;
- (BOOL)isRunning;
- (id)mainMixerNode;
- (struct OpaqueMusicSequence { }*)musicSequence;
- (id)outputConnectionPointsForNode:(id)arg1 outputBus:(unsigned int)arg2;
- (id)outputNode;
- (void)pause;
- (void)prepare;
- (void)reset;
- (void)setMusicSequence:(struct OpaqueMusicSequence { }*)arg1;
- (BOOL)startAndReturnError:(id*)arg1;
- (void)stop;

@end