//
//  Copyright (c) 2013 Luke Scott
//  https://github.com/lukescott/DraggableCollectionView
//  Distributed under MIT license
//

#import <Foundation/Foundation.h>

@class LSCollectionViewHelper;

@protocol UICollectionViewDataSource_Draggable <UICollectionViewDataSource>
@required

- (void)collectionView:(UICollectionView *)collectionView moveItemAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath;
- (BOOL)collectionView:(UICollectionView *)collectionView canMoveItemAtIndexPath:(NSIndexPath *)indexPath;

@optional

- (BOOL)collectionView:(UICollectionView *)collectionView canMoveItemAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)toIndexPath;

// When dragging by default a cell copy (image) is created and tranform is applied.
// If you think the image looks blur when transform is applied, you can provide your own view by invoking this method.
// This method assumes that your view big enough so no transform is applied. 
- (UIView *)collectionView:(UICollectionView *)collectionView viewForDraggingAtIndexPath:(NSIndexPath *)indexPath;

@end
