/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */



@interface DAMailboxGetUpdatesRequest : DAMailboxRequest 
{
    NSInteger _maxSize;
    NSInteger _bodyFormat;
}


- (id)initRequestForBodyFormat:(NSInteger)arg1 withBodySizeLimit:(NSInteger)arg2;
- (NSInteger)maxSize;
- (NSInteger)bodyFormat;

@end
