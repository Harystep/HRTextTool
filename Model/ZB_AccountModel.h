//
//  ZB_AccountModel.h
//  ExcelDemo
//
//  Created by PC-N121 on 2022/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZB_AccountModel : NSObject

@property (nonatomic, copy) NSString *accountNo;
@property (nonatomic, copy) NSString *paymentTime;
@property (nonatomic, copy) NSString *allInPayOrderNo;
@property (nonatomic, copy) NSString *discountMoney;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *orderNo;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *num;
@property (nonatomic, copy) NSString *benefitCategoryName;
@property (nonatomic, copy) NSString *companyName;
@property (nonatomic, copy) NSString *payment;
@property (nonatomic, copy) NSString *originalPayment;
@property (nonatomic, copy) NSString *couponName;

@end

NS_ASSUME_NONNULL_END
