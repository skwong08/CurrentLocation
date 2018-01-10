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

@interface Map_ViewController : UIViewController<CLLocationManagerDelegate,MKMapViewDelegate>
{
    CLLocationManager *objLocationManager;
    double latitude_UserLocation, longitude_UserLocation;
    
}

@property (weak, nonatomic) IBOutlet MKMapView *objMapView;

@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, strong) CLLocation* currentLocation;

@end
