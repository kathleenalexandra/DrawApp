// followed tutorial from http://openframeworks.cc/ofBook/chapters/OOPs!.html

#include "ofApp.h"
#include "Box.h"


Box myBox;


Box::Box(){
}

void Box::setup(){
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 10);
    speedY = ofRandom(-1, 10);
    
    dim = 10;
    
    
}

void Box::update(){
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
}

void Box::draw(){
    
    ofSetColor( ofColor(ofRandom( 100, 250 ),0 , 250 ));
    ofDrawBox(x, y, dim, 100);
}



//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    myBox.setup();
    myBox1.setup();
    myBox2.setup();
    myBox3.setup();
    myBox4.setup();
    myBox5.setup();
    myBox6.setup();
    myBox7.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    myBox.update();
    myBox1.update();
    myBox2.update();
    myBox3.update();
    myBox4.update();
    myBox5.update();
    myBox6.update();
    myBox7.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    myBox.draw();
    myBox1.draw();
    myBox2.draw();
    myBox3.draw();
    myBox4.draw();
    myBox5.draw();
    myBox6.draw();
    myBox7.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
