//
//  CRConfirmOrderViewController.h
//  CRConfirmOrder
//
//  Created by 牛投邦 on 2017/1/10.
//  Copyright © 2017年 牛投邦. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CRConfirmOrderViewController : UIViewController

- (instancetype)initWithGoodsId:(NSString *)goodsId sureComplete:(dispatch_block_t)sureComplete;

@end
