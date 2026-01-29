// AFNetworking.h (SwiftPM umbrella)
//
// This umbrella header is used by SwiftPM. It must include all public headers
// under `include/` to avoid incomplete-umbrella warnings.

#import <Foundation/Foundation.h>
#import <Availability.h>
#import <TargetConditionals.h>

#ifndef _AFNETWORKING_
    #define _AFNETWORKING_

    #import "AFURLRequestSerialization.h"
    #import "AFURLResponseSerialization.h"
    #import "AFSecurityPolicy.h"
    #import "AFCompatibilityMacros.h"

#if !TARGET_OS_WATCH
    #import "AFNetworkReachabilityManager.h"
#endif

    #import "AFURLSessionManager.h"
    #import "AFHTTPSessionManager.h"

    // UIKit+AFNetworking (headers are internally platform-guarded)
    #import "UIKit+AFNetworking.h"
    #import "AFAutoPurgingImageCache.h"
    #import "AFImageDownloader.h"
    #import "UIActivityIndicatorView+AFNetworking.h"
    #import "UIButton+AFNetworking.h"
    #import "UIImageView+AFNetworking.h"
    #import "UIProgressView+AFNetworking.h"
    #import "AFNetworkActivityIndicatorManager.h"
    #import "UIRefreshControl+AFNetworking.h"
    #import "WKWebView+AFNetworking.h"

#endif /* _AFNETWORKING_ */
