//
//  LKGoogleTranslator.h
//  GoogleTranslator
//
//  Created by Petr Homola on 01.10.08.
//  Copyright 2008 Univerzita Karlova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LKConstants.h"

@interface LKGoogleTranslator : NSObject {

}

- (NSString*)translateText:(NSString*)sourceText fromLanguage:(NSString*)sourceLanguage toLanguage:(NSString*)targetLanguage;
- (NSString*)translateCharacters:(NSString*)text;

@end
