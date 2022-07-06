#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef GROOBEEKIT_SWIFT_H
#define GROOBEEKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GroobeeKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC10GroobeeKit5Goods")
@interface Goods : NSObject
- (NSString * _Nullable)getGoodsNm SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsCd SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsCate SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsCateNm SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsAmt SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsPrc SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsSalePrc SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsCnt SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsImg SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsNm:(NSString * _Nonnull)goodsNm SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCd:(NSString * _Nonnull)goodsCd SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCate:(NSString * _Nonnull)goodsCate SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCateNm:(NSString * _Nonnull)goodsCateNm SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsAmt:(NSInteger)goodsAmt SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsPrc:(NSInteger)goodsPrc SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsSalePrc:(NSInteger)goodsSalePrc SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCnt:(NSInteger)goodsCnt SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsImg:(NSString * _Nonnull)goodsImg SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GroobeeConfig;
@class NSMutableDictionary;
@class CLLocation;
@class WKWebView;

SWIFT_CLASS("_TtC10GroobeeKit7Groobee") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface Groobee : NSObject
+ (Groobee * _Nonnull)getInstance SWIFT_WARN_UNUSED_RESULT;
+ (void)configureWithGroobeeConfig:(GroobeeConfig * _Nullable)groobeeConfig;
- (void)setServiceKeyWithGroobeeConfig:(GroobeeConfig * _Nullable)groobeeConfig;
- (void)setServiceLoginWithMemberId:(NSString * _Nullable)memberId;
- (void)setPushAgreeAPWithIsPushAgreedAP:(BOOL)isPushAgreedAP;
- (void)setPushAgreeAAWithIsPushAgreedAA:(BOOL)isPushAgreedAA;
- (void)setPushAgreeANWithIsPushAgreedAN:(BOOL)isPushAgreedAN;
- (void)setPushTokenWithPushToken:(NSString * _Nonnull)pushToken;
- (void)userNotificationCenterWithUserInfo:(NSDictionary * _Nonnull)userInfo;
- (void)didReceiveRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo;
- (void)inDirectPushOpened;
- (void)setUserInfoWithId:(NSString * _Nonnull)id grade:(NSString * _Nonnull)grade age:(NSString * _Nonnull)age gender:(NSString * _Nonnull)gender type:(NSString * _Nonnull)type;
- (void)setUserInfoWithId:(NSString * _Nonnull)id grade:(NSString * _Nonnull)grade age:(NSString * _Nonnull)age gender:(NSString * _Nonnull)gender type:(NSString * _Nonnull)type pagr:(NSString * _Nonnull)pagr iagr:(NSString * _Nonnull)iagr;
- (void)setMemberJoinWithMemberId:(NSString * _Nonnull)memberId screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setSearchKeywordWithSearchKwd:(NSString * _Nonnull)searchKwd screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setShoppingCartWithGoods:(NSArray<Goods *> * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setGoodsOrderWithGoods:(NSArray<Goods *> * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setGoodsOrderCompleteWithOrderNo:(NSString * _Nonnull)orderNo goods:(NSArray<Goods *> * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setViewGoodsWithGoods:(Goods * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setCategoryWithCateCd:(NSString * _Nonnull)cateCd cateNm:(NSString * _Nonnull)cateNm screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setCustomerDataWithCustomData:(NSMutableDictionary * _Nonnull)customData;
- (void)setScreenDataWithScreenName:(NSString * _Nonnull)screenName screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setAppSessionStartWithIsTerminated:(BOOL)isTerminated;
- (void)setAppSessionEndWithIsTerminated:(BOOL)isTerminated iosSessionDtm:(NSString * _Nonnull)iosSessionDtm;
- (void)setAppLocationInfoWithUserLocation:(CLLocation * _Nonnull)userLocation;
- (void)setWebViewCookiesWithWebView:(WKWebView * _Nonnull)webView urlRequest:(NSURLRequest * _Nonnull)urlRequest;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GroobeeConfigBuilder;

SWIFT_CLASS("_TtC10GroobeeKit13GroobeeConfig")
@interface GroobeeConfig : NSObject
- (nonnull instancetype)initWithBuilder:(GroobeeConfigBuilder * _Nonnull)builder OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getServiceKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getBundleId SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getInAppMsgMarginTop SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getInAppMsgMarginBottom SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC10GroobeeKit13GroobeeConfig20GroobeeConfigBuilder")
@interface GroobeeConfigBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (GroobeeConfigBuilder * _Nonnull)setServiceKeyWithServiceKey:(NSString * _Nonnull)serviceKey bundleId:(NSString * _Nonnull)bundleId SWIFT_WARN_UNUSED_RESULT;
- (GroobeeConfigBuilder * _Nonnull)setInAppMsgMarginTop:(CGFloat)topMarginValue SWIFT_WARN_UNUSED_RESULT;
- (GroobeeConfigBuilder * _Nonnull)setInAppMsgMarginBottom:(CGFloat)bottomMarginValue SWIFT_WARN_UNUSED_RESULT;
- (GroobeeConfig * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC10GroobeeKit19GroobeeKitLifeCycle") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface GroobeeKitLifeCycle : NSObject
+ (void)sceneDidDisconnect;
+ (void)sceneDidBecomeActive;
+ (void)sceneWillResignActive;
+ (void)sceneWillEnterForeground;
+ (void)sceneDidEnterBackground;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UNNotificationRequest;
@class UNMutableNotificationContent;
@class UNNotificationContent;
@class UNNotification;

SWIFT_CLASS("_TtC10GroobeeKit19GroobeeNotification") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface GroobeeNotification : NSObject
+ (GroobeeNotification * _Nonnull)getInstance SWIFT_WARN_UNUSED_RESULT;
- (BOOL)receiveService:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)bestAttemptContent withContentHandler:(void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler SWIFT_WARN_UNUSED_RESULT;
- (BOOL)receiveContent:(UNNotification * _Nonnull)notification SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10GroobeeKit8PushData")
@interface PushData : NSObject
- (NSString * _Nullable)getCampaignKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getPushMsgType SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getPushMsgCnt SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getSendDtm SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setCampaignKey:(NSString * _Nonnull)campaignKey SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setPushMsgType:(NSString * _Nonnull)pushMsgType SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setPushMsgCnt:(NSString * _Nonnull)pushMsgCnt SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setSendDtm:(NSString * _Nonnull)sendDtm SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






@class NSError;

@interface NSURLSession (SWIFT_EXTENSION(GroobeeKit))
+ (void)downloadImageWithUrl:(NSURL * _Nonnull)url withCompletionHandler:(void (^ _Nonnull)(NSData * _Nullable, NSError * _Nullable))completionHandler;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef GROOBEEKIT_SWIFT_H
#define GROOBEEKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GroobeeKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC10GroobeeKit5Goods")
@interface Goods : NSObject
- (NSString * _Nullable)getGoodsNm SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsCd SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsCate SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsCateNm SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsAmt SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsPrc SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsSalePrc SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getGoodsCnt SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getGoodsImg SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsNm:(NSString * _Nonnull)goodsNm SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCd:(NSString * _Nonnull)goodsCd SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCate:(NSString * _Nonnull)goodsCate SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCateNm:(NSString * _Nonnull)goodsCateNm SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsAmt:(NSInteger)goodsAmt SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsPrc:(NSInteger)goodsPrc SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsSalePrc:(NSInteger)goodsSalePrc SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsCnt:(NSInteger)goodsCnt SWIFT_WARN_UNUSED_RESULT;
- (Goods * _Nonnull)setGoodsImg:(NSString * _Nonnull)goodsImg SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GroobeeConfig;
@class NSMutableDictionary;
@class CLLocation;
@class WKWebView;

SWIFT_CLASS("_TtC10GroobeeKit7Groobee") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface Groobee : NSObject
+ (Groobee * _Nonnull)getInstance SWIFT_WARN_UNUSED_RESULT;
+ (void)configureWithGroobeeConfig:(GroobeeConfig * _Nullable)groobeeConfig;
- (void)setServiceKeyWithGroobeeConfig:(GroobeeConfig * _Nullable)groobeeConfig;
- (void)setServiceLoginWithMemberId:(NSString * _Nullable)memberId;
- (void)setPushAgreeAPWithIsPushAgreedAP:(BOOL)isPushAgreedAP;
- (void)setPushAgreeAAWithIsPushAgreedAA:(BOOL)isPushAgreedAA;
- (void)setPushAgreeANWithIsPushAgreedAN:(BOOL)isPushAgreedAN;
- (void)setPushTokenWithPushToken:(NSString * _Nonnull)pushToken;
- (void)userNotificationCenterWithUserInfo:(NSDictionary * _Nonnull)userInfo;
- (void)didReceiveRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo;
- (void)inDirectPushOpened;
- (void)setUserInfoWithId:(NSString * _Nonnull)id grade:(NSString * _Nonnull)grade age:(NSString * _Nonnull)age gender:(NSString * _Nonnull)gender type:(NSString * _Nonnull)type;
- (void)setUserInfoWithId:(NSString * _Nonnull)id grade:(NSString * _Nonnull)grade age:(NSString * _Nonnull)age gender:(NSString * _Nonnull)gender type:(NSString * _Nonnull)type pagr:(NSString * _Nonnull)pagr iagr:(NSString * _Nonnull)iagr;
- (void)setMemberJoinWithMemberId:(NSString * _Nonnull)memberId screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setSearchKeywordWithSearchKwd:(NSString * _Nonnull)searchKwd screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setShoppingCartWithGoods:(NSArray<Goods *> * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setGoodsOrderWithGoods:(NSArray<Goods *> * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setGoodsOrderCompleteWithOrderNo:(NSString * _Nonnull)orderNo goods:(NSArray<Goods *> * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setViewGoodsWithGoods:(Goods * _Nonnull)goods screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setCategoryWithCateCd:(NSString * _Nonnull)cateCd cateNm:(NSString * _Nonnull)cateNm screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setCustomerDataWithCustomData:(NSMutableDictionary * _Nonnull)customData;
- (void)setScreenDataWithScreenName:(NSString * _Nonnull)screenName screenId:(NSString * _Nonnull)screenId clickButton:(void (^ _Nullable)(void))clickButton;
- (void)setAppSessionStartWithIsTerminated:(BOOL)isTerminated;
- (void)setAppSessionEndWithIsTerminated:(BOOL)isTerminated iosSessionDtm:(NSString * _Nonnull)iosSessionDtm;
- (void)setAppLocationInfoWithUserLocation:(CLLocation * _Nonnull)userLocation;
- (void)setWebViewCookiesWithWebView:(WKWebView * _Nonnull)webView urlRequest:(NSURLRequest * _Nonnull)urlRequest;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GroobeeConfigBuilder;

SWIFT_CLASS("_TtC10GroobeeKit13GroobeeConfig")
@interface GroobeeConfig : NSObject
- (nonnull instancetype)initWithBuilder:(GroobeeConfigBuilder * _Nonnull)builder OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getServiceKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getBundleId SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getInAppMsgMarginTop SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getInAppMsgMarginBottom SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC10GroobeeKit13GroobeeConfig20GroobeeConfigBuilder")
@interface GroobeeConfigBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (GroobeeConfigBuilder * _Nonnull)setServiceKeyWithServiceKey:(NSString * _Nonnull)serviceKey bundleId:(NSString * _Nonnull)bundleId SWIFT_WARN_UNUSED_RESULT;
- (GroobeeConfigBuilder * _Nonnull)setInAppMsgMarginTop:(CGFloat)topMarginValue SWIFT_WARN_UNUSED_RESULT;
- (GroobeeConfigBuilder * _Nonnull)setInAppMsgMarginBottom:(CGFloat)bottomMarginValue SWIFT_WARN_UNUSED_RESULT;
- (GroobeeConfig * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC10GroobeeKit19GroobeeKitLifeCycle") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface GroobeeKitLifeCycle : NSObject
+ (void)sceneDidDisconnect;
+ (void)sceneDidBecomeActive;
+ (void)sceneWillResignActive;
+ (void)sceneWillEnterForeground;
+ (void)sceneDidEnterBackground;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UNNotificationRequest;
@class UNMutableNotificationContent;
@class UNNotificationContent;
@class UNNotification;

SWIFT_CLASS("_TtC10GroobeeKit19GroobeeNotification") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface GroobeeNotification : NSObject
+ (GroobeeNotification * _Nonnull)getInstance SWIFT_WARN_UNUSED_RESULT;
- (BOOL)receiveService:(UNNotificationRequest * _Nonnull)request :(UNMutableNotificationContent * _Nonnull)bestAttemptContent withContentHandler:(void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler SWIFT_WARN_UNUSED_RESULT;
- (BOOL)receiveContent:(UNNotification * _Nonnull)notification SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10GroobeeKit8PushData")
@interface PushData : NSObject
- (NSString * _Nullable)getCampaignKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getPushMsgType SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getPushMsgCnt SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getSendDtm SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setCampaignKey:(NSString * _Nonnull)campaignKey SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setPushMsgType:(NSString * _Nonnull)pushMsgType SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setPushMsgCnt:(NSString * _Nonnull)pushMsgCnt SWIFT_WARN_UNUSED_RESULT;
- (PushData * _Nonnull)setSendDtm:(NSString * _Nonnull)sendDtm SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






@class NSError;

@interface NSURLSession (SWIFT_EXTENSION(GroobeeKit))
+ (void)downloadImageWithUrl:(NSURL * _Nonnull)url withCompletionHandler:(void (^ _Nonnull)(NSData * _Nullable, NSError * _Nullable))completionHandler;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
