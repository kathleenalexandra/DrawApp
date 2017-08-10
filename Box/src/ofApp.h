#pragma once

#include "ofMain.h"
#include "Box.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    Box myBox1;
    Box myBox2;
    Box myBox3;
    
    Box myBox4;
    Box myBox5;
    Box myBox6;
    Box myBox7;
    Box myBox8;
    Box myBox9;
    Box myBox10;
    Box myBox11;
    Box myBox12;
    
};

