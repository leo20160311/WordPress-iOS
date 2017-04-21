//
//  LoginSelfHostedViewController.swift
//  WordPress
//
//  Created by Nate Heagy on 2017-04-20.
//  Copyright © 2017 WordPress. All rights reserved.
//

import UIKit

class LoginSelfHostedViewController: SigninSelfHostedViewController {
    override func needsMultifactorCode() {
        self.performSegue(withIdentifier: "show2FA", sender: self)
    }
    
    override func dismiss() {
        self.performSegue(withIdentifier: "showEpilogue", sender: self)
    }
}
