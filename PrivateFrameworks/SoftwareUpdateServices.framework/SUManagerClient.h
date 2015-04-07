/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class <SUManagerClientDelegate>, NSXPCConnection, SUDescriptor;

@interface SUManagerClient : NSObject <SUManagerClientInterface> {
    int _clientType;
    BOOL _connected;
    <SUManagerClientDelegate> *_delegate;
    SUDescriptor *_installDescriptor;
    BOOL _installing;
    NSXPCConnection *_serverConnection;
    BOOL _serverIsExiting;
}

@property int clientType;
@property <SUManagerClientDelegate> * delegate;
@property(retain) SUDescriptor * installDescriptor;

+ (BOOL)_shouldDisallowAvailabilityNotifications;

- (void)_invalidateConnection;
- (id)_remoteInterface;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1 connectIfNecessary:(BOOL)arg2;
- (void)_setClientType;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)cancelDownload:(id)arg1;
- (int)clientType;
- (void)connectToServerIfNecessary;
- (BOOL)createInstallationKeybag:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)download:(id)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)installDescriptor;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidFinish:(id)arg1;
- (void)installDidStart:(id)arg1;
- (void)installUpdate:(id)arg1;
- (void)invalidate;
- (void)isDownloading:(id)arg1;
- (BOOL)isInstallationKeybagRequired;
- (void)isScanning:(id)arg1;
- (void)isUpdateReadyForInstallation:(id)arg1;
- (void)noteConnectionDropped;
- (void)noteServerExiting;
- (void)pauseDownload:(id)arg1;
- (void)purgeDownload:(id)arg1;
- (void)resumeDownload:(id)arg1;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanForUpdates:(id)arg1 withResult:(id)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)setClientType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstallDescriptor:(id)arg1;
- (void)startDownload:(id)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id)arg2;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id)arg2;

@end