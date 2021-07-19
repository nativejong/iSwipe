//
//  DemoAViewController.swift
//  Example
//
//  Created by John Blaine on 12/29/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import iSwipe

class DemoAViewController: UIViewController {
    var swipe : iSwipe?

    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.edgesForExtendedLayout = []
        self.navigationController?.setNavigationBarHidden(true, animated: false)
        swipe = iSwipe(frame: CGRect.zero)
        self.view.addSubview(swipe!)
        
        self.view.backgroundColor = UIColor.white
        
        self.watchAction()
    }
    
    func watchAction() {
        swipe?.watch(false, currentValue: { ( value : CGFloat )  in
            print( "value : \(value)"  )
        })
    }

    
    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        swipe?.frame = CGRect(x: w * 0.1, y: h * 0.1, width: w * 0.8, height: h * 0.4)
    }

}

