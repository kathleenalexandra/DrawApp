#include "ofApp.h"
#define circle_count 8

float circle_x[circle_count];
float circle_y[circle_count];
float velocity_x[circle_count];
float velocity_y[circle_count];

void ofApp::setup(){
    
    ofSetFrameRate(24);
    
    for(int i = 0; i<circle_count; i++)
    {
        circle_x[i] = ofGetWindowWidth()*0.15 * (i+1);
        circle_y[i] = ofGetWindowHeight()*0.15 * (i+1);
        velocity_x[i] = int(ofRandom(1, 4));
        velocity_y[i] = int(ofRandom(1, 4));
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int j = 0; j < circle_count; j++){
    for (int i = 0; i < circle_count; i++){
        
        if (circle_x[i] < 30 || circle_x[i] > ofGetWindowWidth()-30){
            velocity_x[i] *= -1;
        }
        
        if (circle_y[i] < 30 || circle_y[i] > ofGetWindowHeight()-30){
            velocity_y[i] *= -1;
        }
        circle_x[i] += velocity_x[i];
        circle_y[i] += velocity_y[i];
        
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    for(int i = 0; i<circle_count; i++) {
        ofFill();
        ofSetColor( ofColor(100, 0, ofRandom( 0, 255 ) ));
        ofCircle(circle_x[i], circle_y[i], 35);
    }
    

    for(int i = 0; i<circle_count; i++) {
        ofFill();
        ofSetColor( ofColor(ofRandom( 100, 255 ),100 , 130 ));
        ofCircle(circle_y[i], circle_x[i], 55);
    }
    
    for(int i = 0; i<circle_count; i++){
        ofFill();
        ofSetColor( ofColor(100, ofRandom( 100, 255 ), 200 ));
        ofCircle(circle_y[i], circle_x[i], 45);
    
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
