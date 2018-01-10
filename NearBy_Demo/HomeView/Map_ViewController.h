//
//  Map_ViewController.h
//  NearBy_Demo
//
//  Created by Trinity  Wizards  on 1/10/18.
//  Copyright © 2018 SK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "MapPoint.h"

#define kGOOGLE_API_KEY @"AIzaSyAKGborGL-ZVOkGgKi2u-y_04MB6f2pfes"
#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)

@interface Map_ViewController : UIViewController<CLLocationManagerDelegate,MKMapViewDelegate>
{
    CLLocationManager *objLocationManager;
    CLLocationCoordinate2D currentCentre;
    int currenDist;
    BOOL firstLaunch;
}

- (IBAction)buttonDidPressed:(id)sender;

@property (weak, nonatomic) IBOutlet MKMapView *objMapView;

@end
