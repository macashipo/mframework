#import <MFramework/MGAUtils.h>

// Insert in Constant.h
static NSString *const kTrackingId = @"UA-45244250-4";

// Insert in AppDelegate.m
[MGAUtils setupGAWithTrackID:kTrackingId];

// Track Screen
[MGAUtils trackScreen:@"Name"];

// Track Action
[MGAUtils trackGA:@"Category" withAction:@"Action" withLabel:@"Label"];
