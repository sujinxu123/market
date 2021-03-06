//
//  UICollectionView+IndexPath.h
//  VirtualCoinMarket
//
//  Created by sujinxu on 2018/6/11.
//  Copyright © 2018年 SleepWalker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (IndexPath)

/**
 *  设置某一indexPath，用于记录
 *
 *  @param indexPath 目标indexPath
 */
-(void)setCurrentIndexPath:(NSIndexPath*)indexPath;


/**
 *  获取上述方法某一indexPath，把记录起来的拿回来用
 *
 *  @return 返回记录的indexPath
 */
-(NSIndexPath *)currentIndexPath;

@end
