//
//
//

#import <Foundation/Foundation.h>

@interface NSObject (JSONExtension)

- (void)setDict:(NSDictionary *)dict;
+ (instancetype )objectWithDict:(NSDictionary *)dict;

// 告诉数组中都是什么类型的模型对象 子类中需要重写;
- (NSDictionary *)objectClassInArray ;

@end
