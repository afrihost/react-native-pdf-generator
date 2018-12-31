
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import "API/BNHtmlPdfKit.h"


@interface RNMyLibrary : NSObject <RCTBridgeModule, UIDocumentInteractionControllerDelegate>
    @property  BNHtmlPdfKit *htmlPdfKit;
    @property UIDocumentInteractionController *docController;
@end
  
