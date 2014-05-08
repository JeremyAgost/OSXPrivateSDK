//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/NFFolderProxy.h>

#import "IMAPMailboxDelegate.h"
#import "IMAPMessageDataSource.h"
#import "MCMailbox.h"

@class IMAPCommandPipeline, IMAPDownloadCache, IMAPMailbox, IMAPMailboxSyncEngine, NFIMAPAccountProxy, NSLock, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface NFIMAPFolderProxy : NFFolderProxy <IMAPMailboxDelegate, IMAPMessageDataSource, MCMailbox>
{
    IMAPCommandPipeline *_fetchPipeline;
    IMAPDownloadCache *_downloadCache;
    IMAPMailboxSyncEngine *_mailboxSyncEngine;
    NSMutableArray *_messagesToAdd;
    NSMutableSet *_messagesBeingAdded;
    NSOperationQueue *_messagesWereAddedQueue;
    NSMutableSet *_noteIDsBeingUpdated;
    NSLock *_copyLock;
    NSOperationQueue *_imapMailboxQueue;
    id _imapMailboxLock;
    IMAPMailbox *_imapMailbox;
    BOOL _doingHasNotes;
    NFIMAPAccountProxy *_account;
}

@property BOOL doingHasNotes; // @synthesize doingHasNotes=_doingHasNotes;
@property __weak NFIMAPAccountProxy *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_copyMailboxSyncEngineCreateIfNecessary:(BOOL)arg1 setupGatewayIfNecessary:(BOOL)arg2;
- (BOOL)deleteNoteFromRemote:(unsigned int)arg1;
- (unsigned int)_permanentFlags;
- (BOOL)addNoteToRemote:(id)arg1;
- (void)_noteDidSetBody:(id)arg1;
- (void)resetSyncEngine;
- (void)folderWithServerName:(id)arg1 wasRenamed:(id)arg2;
@property(retain) NSString *serverName;
@property(retain) NSString *name;
- (BOOL)hasNotes;
- (void)synchronizeWithServer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)computedHighestModificationSequenceForMailbox:(id)arg1;
- (void)updateAllegedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)allegedHighestModificationSequenceForMailbox:(id)arg1;
- (void)updateSelectedGatewayFromMailbox:(id)arg1;
- (void)updateUidValidityFromMailbox:(id)arg1;
- (void)processResponsesFromMailbox:(id)arg1;
- (void)updateCountFromMailbox:(id)arg1 fromIDLE:(BOOL)arg2;
- (unsigned long long)unseenCount;
- (BOOL)unseenCountIsKnown;
- (id)URLString;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (id)extendedDisplayName;
- (id)displayName;
- (id)recentFlagChangesForManagedObjectID:(id)arg1;
- (id)messagesWithManagedObjectIDs:(id)arg1;
- (id)messageWithDefaultLoadOptionsAndManagedObjectID:(id)arg1;
- (void)syncEngineDidSynchronizeMessageList;
- (void)removeAllLocalMessages;
- (void)setComputedHighestModificationSequence:(unsigned long long)arg1;
- (void)setAllegedHighestModificationSequence:(unsigned long long)arg1;
- (unsigned long long)allegedHighestModificationSequence;
- (void)setUidValidityStatus:(unsigned int)arg1;
- (void)setUidNextStatus:(unsigned int)arg1;
- (unsigned int)uidNextStatus;
- (unsigned int)maximumRemoteID;
- (void)syncEngineDidFinish;
- (void)syncEngineDidStart;
- (id)newDictionaryForLocalFlags:(unsigned int)arg1 serverFlags:(unsigned int)arg2 existingDictionary:(id)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 updatingServer:(BOOL)arg3;
- (BOOL)messageHasBeenDeleted:(id)arg1;
- (void)compactMessagesFromSyncEngine:(id)arg1;
- (id)messagesBeingAdded;
- (BOOL)messagesAreBeingAdded;
- (void)addMessages:(id)arg1;
- (id)downloadCache;
- (id)fetchPipeline;
- (BOOL)hasValidCacheFileForMessage:(id)arg1;
- (BOOL)hasCacheFileForMessage:(id)arg1 part:(id)arg2 directoryContents:(id)arg3;
- (BOOL)hasCacheFileForMessage:(id)arg1 directoryContents:(id)arg2;
- (id)cacheDirectoryContents;
- (id)copyOfAllMessagesWithSubjects;
- (id)getDetailsForMessagesWithRemoteIDs:(id)arg1;
- (unsigned long long)totalCountOfMessages;
- (BOOL)isInbox;
- (id)mailboxName;
@property(readonly) BOOL persistentIDType;
- (id)uniquedString:(id)arg1;
- (void)flushAllCaches;
- (void)invalidateMessage:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2;
- (id)routeMessages:(id)arg1;
- (void)doCompact;
- (BOOL)canCompact;
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;
- (void)undeleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)saveSnippetsForMessages:(id)arg1;
- (id)snippetsForMessages:(id)arg1;
- (BOOL)supportsSnippets;
- (BOOL)synchronouslySetPreferredEncoding:(unsigned long long)arg1 forMessages:(id)arg2;
- (BOOL)setPreferredEncoding:(unsigned long long)arg1 forMessage:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)dataForMimePart:(id)arg1;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)fullBodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headersForMessage:(id)arg1;
- (id)messagesForMessageIDHeader:(id)arg1;
- (id)messageForMessageID:(id)arg1;
@property __weak IMAPMailbox *imapMailbox;
- (id)mailbox;
@property(readonly) BOOL isReadOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFolder:(id)arg1;
- (id)initWithManagedObjectID:(id)arg1;

@end
