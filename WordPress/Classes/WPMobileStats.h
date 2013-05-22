//
//  WPMobileStats.h
//  WordPress
//
//  Created by Sendhil Panchadsaram on 5/14/13.
//  Copyright (c) 2013 WordPress. All rights reserved.
//

#import <Foundation/Foundation.h>

// General
extern NSString *const StatsAppOpened;

// Top Level Menu Items
extern NSString *const StatsEventSidebarClickedReader;
extern NSString *const StatsEventSidebarClickedNotifications;
extern NSString *const StatsEventSidebarSiteClickedPosts;
extern NSString *const StatsEventSidebarSiteClickedPages;
extern NSString *const StatsEventSidebarSiteClickedComments;
extern NSString *const StatsEventSidebarSiteClickedStats;
extern NSString *const StatsEventSidebarSiteClickedViewSite;
extern NSString *const StatsEventSidebarSiteClickedViewAdmin;
extern NSString *const StatsEventSidebarClickedSettings;
extern NSString *const StatsEventSidebarClickedQuickPhoto;

// Reader
extern NSString *const StatsEventReaderOpened;
extern NSString *const StatsEventReaderClickedShowTopicSelector;
extern NSString *const StatsEventReaderSelectedFreshlyPressedTopic;
extern NSString *const StatsEventReaderSelectedTopic;
extern NSString *const StatsEventReaderClickedArticleDetails;

// Reader Detail
extern NSString *const StatsEventReaderDetailClickedNext;
extern NSString *const StatsEventReaderDetailClickedPrevious;

// Web View Sharing
extern NSString *const StatsEventWebviewClickedShowLinkOptions;
extern NSString *const StatsEventWebviewSharedArticleViaEmail;
extern NSString *const StatsEventWebviewSharedArticleViaSMS;
extern NSString *const StatsEventWebviewSharedArticleViaTwitter;
extern NSString *const StatsEventWebviewSharedArticleViaFacebook;
extern NSString *const StatsEventWebviewSharedArticleViaWeibo;
extern NSString *const StatsEventWebviewCopiedArticleDetails;
extern NSString *const StatsEventWebviewOpenedArticleInSafari;
extern NSString *const StatsEventWebviewSentArticleToPocket;
extern NSString *const StatsEventWebviewSentArticleToInstapaper;

// Notifications
extern NSString *const StatsEventNotificationsOpened;
extern NSString *const StatsEventNotificationsOpenedNotificationDetails;

// Notifications Detail
extern NSString *const StatsEventNotificationsDetailClickedReplyButton;
extern NSString *const StatsEventNotificationsDetailRepliedToComment;
extern NSString *const StatsEventNotificationsDetailApproveComment;
extern NSString *const StatsEventNotificationsDetailUnapproveComment;
extern NSString *const StatsEventNotificationsDetailTrashComment;
extern NSString *const StatsEventNotificationsDetailUntrashComment;
extern NSString *const StatsEventNotificationsDetailFlagCommentAsSpam;
extern NSString *const StatsEventNotificationsDetailUnflagCommentAsSpam;
extern NSString *const StatsEventNotificationsDetailFollowBlog;
extern NSString *const StatsEventNotificationsDetailUnfollowBlog;

// Posts
extern NSString *const StatsEventPostsOpened;
extern NSString *const StatsEventPostsClickedPostDetail;
extern NSString *const StatsEventPostsClickedNewPost;

// Post Detail
extern NSString *const StatsEventPostDetailClickedSettings;
extern NSString *const StatsEventPostDetailClickedEdit;
extern NSString *const StatsEventPostDetailClickedMedia;
extern NSString *const StatsEventPostDetailClickedPreview;
extern NSString *const StatsEventPostDetailClickedAddVideo;
extern NSString *const StatsEventPostDetailClickedAddPhoto;
extern NSString *const StatsEventPostDetailClickedShowCategories;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarBoldButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarItalicButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarLinkButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarBlockquoteButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarDelButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarOrderedListButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarUnorderedListButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarListItemButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarCodeButton;
extern NSString *const StatsEventPostDetailClickedKeyboardToolbarMoreButton;
extern NSString *const StatsEventPostDetailAddedPhoto;
extern NSString *const StatsEventPostDetailRemovedPhoto;
extern NSString *const StatsEventPostDetailClickedSchedule;
extern NSString *const StatsEventPostDetailClickedSave;
extern NSString *const StatsEventPostDetailClickedUpdate;
extern NSString *const StatsEventPostDetailClickedPublish;
extern NSString *const StatsEventPostDetailOpenedEditor;
extern NSString *const StatsEventPostDetailClosedEditor;

// Post Detail - Settings
extern NSString *const StatsEventPostDetailSettingsClickedStatus;
extern NSString *const StatsEventPostDetailSettingsClickedVisibility;
extern NSString *const StatsEventPostDetailSettingsClickedScheduleFor;
extern NSString *const StatsEventPostDetailSettingsClickedPostFormat;
extern NSString *const StatsEventPostDetailSettingsClickedSetFeaturedImage;
extern NSString *const StatsEventPostDetailSettingsClickedRemoveFeaturedImage;
extern NSString *const StatsEventPostDetailSettingsClickedAddLocation;
extern NSString *const StatsEventPostDetailSettingsClickedUpdateLocation;
extern NSString *const StatsEventPostDetailSettingsClickedRemoveLocation;

// Pages
extern NSString *const StatsEventPagesOpened;
extern NSString *const StatsEventPagesClickedPageDetail;
extern NSString *const StatsEventPagesClickedNewPage;

// Comments
extern NSString *const StatsEventCommentsApproved;
extern NSString *const StatsEventCommentsUnapproved;
extern NSString *const StatsEventCommentsFlagAsSpam;
extern NSString *const StatsEventCommentsDeleted;
extern NSString *const StatsEventCommentsReplied;
extern NSString *const StatsEventCommentsViewCommentDetails;

// Comment Detail
extern NSString *const StatsEventCommentDetailApprove;
extern NSString *const StatsEventCommentDetailUnapprove;
extern NSString *const StatsEventCommentDetailDelete;
extern NSString *const StatsEventCommentDetailFlagAsSpam;
extern NSString *const StatsEventCommentDetailEditComment;
extern NSString *const StatsEventCommentDetailClickedReplyToComment;
extern NSString *const StatsEventCommentDetailRepliedToComment;
extern NSString *const StatsEventCommentDetailClickedShowPreviousComment;
extern NSString *const StatsEventCommentDetailClickedShowNextComment;

// Settings
extern NSString *const StatsEventSettingsRemovedBlog;
extern NSString *const StatsEventSettingsClickedEditBlog;
extern NSString *const StatsEventSettingsClickedAddBlog;
extern NSString *const StatsEventSettingsSignedOutOfDotCom;
extern NSString *const StatsEventSettingsClickedSignIntoDotCom;
extern NSString *const StatsEventSettingsClickedSignOutOfDotCom;
extern NSString *const StatsEventSettingsMediaClickedImageResize;
extern NSString *const StatsEventSettingsMediaClickedVideoQuality;
extern NSString *const StatsEventSettingsMediaClickedVideoContent;
extern NSString *const StatsEventSettingsClickedManageNotifications;
extern NSString *const StatsEventSettingsEnabledSounds;
extern NSString *const StatsEventSettingsDisabledSounds;
extern NSString *const StatsEventSettingsClickedAbout;

// Manage Notifications
extern NSString *const StatsEventManageNotificationsTurnOn;
extern NSString *const StatsEventManageNotificationsTurnOff;
extern NSString *const StatsEventManageNotificationsTurnOffForOneHour;
extern NSString *const StatsEventManageNotificationsTurnOffUntil8AM;
extern NSString *const StatsEventManageNotificationsEnabledFollowNotifications;
extern NSString *const StatsEventManageNotificationsDisabledFollowNotifications;
extern NSString *const StatsEventManageNotificationsEnabledAchievementsNotifications;
extern NSString *const StatsEventManageNotificationsDisabledAchievementsNotifications;
extern NSString *const StatsEventManageNotificationsEnabledCommentNotifications;
extern NSString *const StatsEventManageNotificationsDisabledCommentNotifications;
extern NSString *const StatsEventManageNotificationsEnabledReblogNotifications;
extern NSString *const StatsEventManageNotificationsDisabledReblogNotifications;
extern NSString *const StatsEventManageNotificationsEnabledLikeNotifications;
extern NSString *const StatsEventManageNotificationsDisabledLikeNotifications;
extern NSString *const StatsEventManageNotificationsEnabledBlogNotifications;
extern NSString *const StatsEventManageNotificationsDisabledBlogNotifications;

// Quick Photo
extern NSString *const StatsEventQuickPhotoOpened;
extern NSString *const StatsEventQuickPhotoPosted;

// Welcome View Controller
extern NSString *const StatsEventWelcomeViewControllerClickedAddSelfHostedBlog;
extern NSString *const StatsEventWelcomeViewControllerClickedAddWordpressDotComBlog;
extern NSString *const StatsEventWelcomeViewControllerClickedCreateWordpressDotComBlog;


// NUX Related
extern NSString *const StatsEventNUXFirstWalkthroughOpened;
extern NSString *const StatsEventNUXFirstWalkthroughViewedPage2;
extern NSString *const StatsEventNUXFirstWalkthroughViewedPage3;
extern NSString *const StatsEventNUXFirstWalkthroughClickedSkipToCreateAccount;
extern NSString *const StatsEventNUXFirstWalkthroughClickedSkipToSignIn;
extern NSString *const StatsEventNUXFirstWalkthroughClickedInfo;
extern NSString *const StatsEventNUXFirstWalkthroughClickedCreateAccount;
extern NSString *const StatsEventNUXFirstWalkthroughSignedInWithoutUrl;
extern NSString *const StatsEventNUXFirstWalkthroughSignedInWithUrl;
extern NSString *const StatsEventNUXFirstWalkthroughSignedInForDotCom;
extern NSString *const StatsEventNUXFirstWalkthroughSignedInForSelfHosted;
extern NSString *const StatsEventNUXFirstWalkthroughClickedNeededHelpOnError;

// NUX Create Account
extern NSString *const StatsEventNUXCreateAccountOpened;
extern NSString *const StatsEventNUXCreateAccountClickedCancel;
extern NSString *const StatsEventNUXCreateAccountClickedHelp;
extern NSString *const StatsEventNUXCreateAccountClickedPage1Next;
extern NSString *const StatsEventNUXCreateAccountClickedPage2Next;
extern NSString *const StatsEventNUXCreateAccountClickedPage2Previous;
extern NSString *const StatsEventNUXCreateAccountCreatedAccount;
extern NSString *const StatsEventNUXCreateAccountClickedPage3Previous;
extern NSString *const StatsEventNUXCreateAccountClickedViewLanguages;
extern NSString *const StatsEventNUXCreateAccountChangedDefaultURL;

// NUX Second Walkthrough
extern NSString *const StatsEventNUXSecondWalkthroughOpened;
extern NSString *const StatsEventNUXSecondWalkthroughViewedPage2;
extern NSString *const StatsEventNUXSecondWalkthroughViewedPage3;
extern NSString *const StatsEventNUXSecondWalkthroughViewedPage4;
extern NSString *const StatsEventNUXSecondWalkthroughClickedStartUsingApp;
extern NSString *const StatsEventNUXSecondWalkthroughClickedStartUsingAppOnFinalPage;

// Add Blogs
extern NSString *const StatsEventAddBlogsOpened;
extern NSString *const StatsEventAddBlogsClickedSelectAll;
extern NSString *const StatsEventAddBlogsClickedDeselectAll;
extern NSString *const StatsEventAddBlogsClickedAddSelected;

@interface WPMobileStats : NSObject

+ (void)initializeStats;

+ (void)trackEventForSelfHostedAndWPCom:(NSString *)event;
+ (void)trackEventForSelfHostedAndWPCom:(NSString *)event properties:(NSDictionary *)properties;
+ (void)trackEventForWPCom:(NSString *)event;
+ (void)trackEventForWPCom:(NSString *)event properties:(NSDictionary *)properties;

@end
