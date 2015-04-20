A simple (unofficial) Objective-C API for Google Translate.

Example:
```
LKGoogleTranslator* translator = [[[LKGoogleTranslator alloc] init] autorelease];
NSString* translation = [translator translateText: @"I'm feeling lucky."
  fromLanguage: LKLanguageEnglish
  toLanguage: LKLanguageFrench];
```