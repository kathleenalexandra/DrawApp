//
//  Box.h
//  Box
//
//  Created by alexandra on 8/10/17.
//
//

#ifndef Box_h
#define Box_h



#define _Box // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework
class Box {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void setup();	// setup method, use this to setup your object's initial state
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    
    // variables
    float x;        // position
    float y;
    float speedY;   // speed and direction
    float speedX;
    int dim;        // size
    ofColor color;  // color using ofColor type
    
    Box();  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private: // place private functions or variables declarations here
}; // don't forget the semicolon!
#endif
