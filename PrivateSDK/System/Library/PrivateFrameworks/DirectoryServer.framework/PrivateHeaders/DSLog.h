//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DSLog : NSObject
{
    struct __aslclient {
        unsigned int _field1;
        struct sockaddr_un _field2;
        int _field3;
        int _field4;
        unsigned int _field5;
        unsigned int _field6;
        char *_field7;
        char *_field8;
        unsigned int _field9;
        int _field10;
        int _field11;
        unsigned int _field12;
        CDStruct_183601bc *_field13;
        CDStruct_183601bc *_field14;
        unsigned long long _field15;
        unsigned int _field16;
        void *_field17;
        int _field18;
    } *asl;
    int logfd;
}

+ (id)logWithLogFilePath:(id)arg1;
+ (id)logWithName:(id)arg1 andLogFilePath:(id)arg2;
+ (id)log;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 andLogFilePath:(id)arg2;
- (id)initWithLogFilePath:(id)arg1;
- (id)init;

@end
