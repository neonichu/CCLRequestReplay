//
//  CCLRequestJSONRecording.h
//  CCLRequestReplay
//
//  Created by Boris Bügling on 30/04/2014.
//

#import "CCLRequestRecording.h"

typedef BOOL(^CCLURLRequestMatcher)(NSURLRequest* request);

@interface CCLRequestJSONRecording : NSObject <CCLRequestRecordingProtocol>

-(id)initWithBundledJSONNamed:(NSString*)JSONName
                  inDirectory:(NSString*)directoryName
                      matcher:(CCLURLRequestMatcher)matcher
                   statusCode:(NSInteger)statusCode
                 headerFields:(NSDictionary*)headerFields;

@end
