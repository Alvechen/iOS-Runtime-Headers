/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementDataSourceUpdate : NSObject {
    NTKUpNextElement * _element;
    unsigned long long  _section;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NTKUpNextElement *element;
@property (nonatomic, readonly) unsigned long long section;
@property (nonatomic, readonly) unsigned long long type;

+ (id)insertElement:(id)arg1 inSection:(unsigned long long)arg2;
+ (id)refreshElement:(id)arg1 inSection:(unsigned long long)arg2;
+ (id)reloadElement:(id)arg1 inSection:(unsigned long long)arg2;
+ (id)removeElement:(id)arg1 inSection:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)element;
- (unsigned long long)hash;
- (id)initWithElement:(id)arg1 section:(unsigned long long)arg2 updateType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)section;
- (unsigned long long)type;

@end
