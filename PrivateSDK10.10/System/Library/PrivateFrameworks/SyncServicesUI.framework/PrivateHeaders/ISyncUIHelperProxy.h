/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ISyncUIHelperProxy : NSObject
{
}

+ (id)sharedProxy;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)identityStringFirstLineAttributes;
- (id)identitySeparatorAttributedString;
- (id)labelTextAttributes;
- (id)normalTextAttributes;
- (id)changedTextColor;
- (id)changedTextAttributes;
- (id)childNodeSeparatorAttributedString;
- (id)labelTextSeparator;
- (id)identityStringSecondLineAttributes;
- (id)orderedPropertyNamesForPropertyNames:(id)arg1 forRecordNode:(id)arg2 withComparisonNodes:(id)arg3;
- (id)attributedStringForRecordNode:(id)arg1 withComparisonNodes:(id)arg2;
- (id)relationshipIdentityStringForRecordNode:(id)arg1 withComparisonNodes:(id)arg2;
- (id)identityStringIgnoringDefaultUIHelperForRecordNode:(id)arg1 withComparisonNodes:(id)arg2;
- (id)identityStringForRecordNode:(id)arg1 withComparisonNodes:(id)arg2;
- (id)attributedStringLabelForRecordNode:(id)arg1 propertyName:(id)arg2 withComparisonNodes:(id)arg3;
- (id)attributedStringForRecordNode:(id)arg1 dependentPropertyNames:(id)arg2 withComparisonNodes:(id)arg3;
- (id)attributedStringForRecordNode:(id)arg1 propertyName:(id)arg2 withComparisonNodes:(id)arg3;
- (id)uiHelperForPropertyNames:(id)arg1 onEntityName:(id)arg2;
- (id)uiHelperForPropertyName:(id)arg1 onEntityName:(id)arg2;
- (id)uiHelperForEntityName:(id)arg1;
- (id)uiHelperForClassName:(id)arg1;

@end
