#include "ofApp.h"



ofImage     img;

ofPolyline line;

bool myColorChanged = false;







//--------------------------------------------------------------

void ofApp::setup(){
    
    
    
    
    
    ofBackground(0,0,0);
    
    
    
}



//--------------------------------------------------------------

void ofApp::update(){
    
    
    
}



//--------------------------------------------------------------

void ofApp::draw(){
    
    
    
    
    
    
    
    if (myColorChanged){
        
        ofSetColor(ofColor::red);
        
    }else{
        
        ofSetColor(ofColor::blue);
        
    }
    
    
    
    ofFill();
    
    ofSetLineWidth(10);
    
    line.draw();
    
    
    
    
    
}



//--------------------------------------------------------------

void ofApp::keyPressed(int key){
    
    
    
    
    
    
    
    
    
    if(key == 'b'){
        
        
        
        //ofSetColor(ofColor::blue);
        
        myColorChanged = !myColorChanged;
        
        
        
    }
    
    
    
    
    
    
    
    
    
    if(key == 'x'){
        
        
        
        line.clear();
        
        
        
    }
    
    
    
}



//--------------------------------------------------------------

void ofApp::keyReleased(int key){
    
    
    
}



//--------------------------------------------------------------

void ofApp::mouseMoved(int x, int y ){
    
    
    
}



//--------------------------------------------------------------

void ofApp::mouseDragged(int x, int y, int button){
    
    
    
    
    
    
    
    ofPoint pt;
    
    pt.set(x,y);
    
    line.addVertex(pt);
    
    
    
    
    
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
