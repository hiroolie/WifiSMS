/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASEmailItem;



@interface ASMailMessage : DAMailMessage 
{
    ASEmailItem *_ASEmailItem;
}


- (void)dealloc;
- (id)initWithASEmailItem:(id)arg1;
- (id)description;
- (id)to;
- (id)cc;
- (id)from;
- (id)replyTo;
- (id)date;
- (id)subject;
- (id)displayTo;
- (NSInteger)importance;
- (BOOL)read;
- (id)body;
- (NSInteger)bodySize;
- (NSInteger)bodyTruncated;
- (id)messageClass;
- (id)attachments;
- (id)meetingRequestUUID;
- (id)meetingRequestMetaData;
- (id)threadTopic;
- (id)remoteID;
- (id)longID;
- (id)rfc822Data;

@end
