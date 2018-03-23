//
//  ViewController.h
//  WebViewApp
//
//  Created by Duminica Octavian on 23/03/2018.
//  Copyright © 2018 Duminica Octavian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UISearchBarDelegate>{
    NSTimer *timer;
}

@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *actInd;

@end

