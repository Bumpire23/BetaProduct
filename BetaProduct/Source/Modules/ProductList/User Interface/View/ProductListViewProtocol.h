//
//  ProductListViewProtocol.h
//  BetaProduct
//
//  Created by User on 10/25/17.
//  Copyright © 2017 User. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ProductListViewProtocol <NSObject>

- (void)showNoContentMessage;
- (void)showProductList : (NSArray *) products;

@end
