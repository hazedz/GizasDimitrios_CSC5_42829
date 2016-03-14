/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 14, 2016, 9:50 AM
 * Purpose: Truth Table 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    bool x, y, notx, noty, xAndy, xORy, xXORy, xXORyy, xXORyx, notxAndy,
            notxORnoty, notxORy, notxAndnoty; 
    
    //&& = and
    //|| = or
    // ^ = XOR
    
    
    x = true;
    
    y = true; 
    
    notx = !x;
    
    noty = !y;
    
    xAndy = x&&y;
    
    xORy = x||y;
    
    xXORy = x^y;
    
    xXORyy = x^y^y;
    
    xXORyx = x^y^x;
    
    notxAndy = !(x&&y);
    
    notxORnoty = !x||!y;
    
    notxORy = !(x||y);
    
    notxAndnoty = !x&&!y;
       

    cout << (x? 'T' : 'F') << (y? 'T' : 'F') << (notx? 'T' : 'F') 
            << (noty? 'T' : 'F') << (xAndy? 'T' : 'F') << (xORy? 'T' : 'F') 
            << (xXORy? 'T' : 'F') << (xXORyy? 'T' : 'F')<< 
            (xXORyx? 'T' : 'F') << (notxAndy? 'T' : 'F') << 
            (notxORnoty? 'T' : 'F') << (notxORy? 'T' : 'F') << 
            (notxAndnoty? 'T' : 'F') << endl;
    
    x = true;
    
    y = false;
    
    notx = !x;
    
    noty = !y;
    
    xAndy = x&&y;
    
    xORy = x||y;
    
    xXORy = x^y;
    
    xXORyy = x^y^y;
    
    xXORyx = x^y^x;
    
    notxAndy = !(x&&y);
    
    notxORnoty = !x||!y;
    
    notxORy = !(x||y);
    
    notxAndnoty = !x&&!y;
 
    
    cout << (x? 'T' : 'F') << (y? 'T' : 'F') << (notx? 'T' : 'F') 
            << (noty? 'T' : 'F') << (xAndy? 'T' : 'F') << (xORy? 'T' : 'F') 
            << (xXORy? 'T' : 'F') << (xXORyy? 'T' : 'F')<< 
            (xXORyx? 'T' : 'F') << (notxAndy? 'T' : 'F') << 
            (notxORnoty? 'T' : 'F') << (notxORy? 'T' : 'F') << 
            (notxAndnoty? 'T' : 'F') << endl;
    
    
    x = false;
    
    y = true;
    
    notx = !x;
    
    noty = !y;
    
    xAndy = x&&y;
    
    xORy = x||y;
    
    xXORy = x^y;
    
    xXORyy = x^y^y;
    
    xXORyx = x^y^x;
    
    notxAndy = !(x&&y);
    
    notxORnoty = !x||!y;
    
    notxORy = !(x||y);
    
    notxAndnoty = !x&&!y;
    
    
    cout << (x? 'T' : 'F') << (y? 'T' : 'F') << (notx? 'T' : 'F') 
            << (noty? 'T' : 'F') << (xAndy? 'T' : 'F') << (xORy? 'T' : 'F') 
            << (xXORy? 'T' : 'F') << (xXORyy? 'T' : 'F')<< 
            (xXORyx? 'T' : 'F') << (notxAndy? 'T' : 'F') << 
            (notxORnoty? 'T' : 'F') << (notxORy? 'T' : 'F') << 
            (notxAndnoty? 'T' : 'F') << endl;
    
    
    x = false;
    
    y = false;
    
    notx = !x;
    
    noty = !y;
    
    xAndy = x&&y;
    
    xORy = x||y;
    
    xXORy = x^y;
    
    xXORyy = x^y^y;
    
    xXORyx = x^y^x;
    
    notxAndy = !(x&&y);
    
    notxORnoty = !x||!y;
    
    notxORy = !(x||y);
    
    notxAndnoty = !x&&!y;
    
    
    cout << (x? 'T' : 'F') << (y? 'T' : 'F') << (notx? 'T' : 'F') 
            << (noty? 'T' : 'F') << (xAndy? 'T' : 'F') << (xORy? 'T' : 'F') 
            << (xXORy? 'T' : 'F') << (xXORyy? 'T' : 'F')<< 
            (xXORyx? 'T' : 'F') << (notxAndy? 'T' : 'F') << 
            (notxORnoty? 'T' : 'F') << (notxORy? 'T' : 'F') << 
            (notxAndnoty? 'T' : 'F') << endl;

 
    return 0;
}

