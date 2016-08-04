//
//  iPokeServerSync.h
//  iPokeGo
//
//  Created by Curtis herbert on 7/30/16.
//  Copyright © 2016 Dimitri Dessus. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;

@interface iPokeServerSync : NSObject

- (void)fetchData;
- (void)fetchDataAtLocNE:(CLLocationCoordinate2D)locNE
                   locSW:(CLLocationCoordinate2D)locSW;

- (void)setLocation:(CLLocationCoordinate2D)location;
- (void)setLocationAtLocNE:(CLLocationCoordinate2D)locNE
                     locSW:(CLLocationCoordinate2D)locSW;

@end
