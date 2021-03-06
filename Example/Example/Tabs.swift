//
//  Tabs.swift
//  Example
//
//  Created by John Blaine on 11/24/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit

class Tabs: UITabBarController, UITabBarControllerDelegate{

    override func viewDidLoad() {
        super.viewDidLoad()
        let demoA = DemoA()
        demoA.tabBarItem = UITabBarItem(title: "Demo A", image: self.resizeImage( s : "man" ), tag: 0 )
        
        self.viewControllers = [demoA]
    }
    
    
    override func tabBar(_ tabBar: UITabBar, didSelect item: UITabBarItem) {
        print("tabBar")
    }
    
    func resizeImage(s: String) -> UIImage {
        let image = UIImage(named: s)
        let newSize: CGSize = CGSize(width: 20,  height: 20 )
        let rect = CGRect(x: 0, y: 0, width: newSize.width, height: newSize.height)

        UIGraphicsBeginImageContextWithOptions(newSize, false, 1.0)
        image!.draw(in: rect)
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()

        return newImage!
    }

}
