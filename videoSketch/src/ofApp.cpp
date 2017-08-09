#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0,0,0);
    //ofSetVerticalSync(true);
    oneFrame = false;
    
    // Uncomment this to show movies with alpha channels
    videoMovie.setPixelFormat(OF_PIXELS_RGBA);
    
    videoMovie.load("movies/strokes.mp4");
    videoMovie.setLoopState(OF_LOOP_NORMAL);
    videoMovie.play();
    
   // newTexture.allocate(videoMovie.getWidth(), videoMovie.getHeight(), GL_RGB);

    /*for ( int i=0; i < 16; i++) {
        table[i] = ofRandom(0,255); 
    } */
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
    videoMovie.update();
    
    /*if (videoMovie.isFrameNew())  {
        ofPixels pixels = videoMovie.getPixelsRef();
        
        for (int y=0; y < pixels.getHeight(); y++) {
            
            for (int x=0; pixels.getWidth(); x++) {
                
                ofColor col = pixels.getColor(x,y);
                col.r = table[col.r/16];
                col.g = table[col.r/16];
                col.b = table[col.r/16];
                
                pixels.setColor(x,y, col);
            }
                
                
        } */
        
    }
    
        
        

             
             
//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetHexColor(0xFFFFFF);
    
    videoMovie.draw(0,0);
    ofSetHexColor(0x000000);
    //ofPixels & pixels = videoMovie.getPixels();
    
    ofSetHexColor(0xFFFFFF);
    
    //videoMovie.draw(20,20);
    ofSetHexColor(0x000000);
    ofPixels & pixels = videoMovie.getPixels();
    
    int vidWidth = pixels.getWidth();
    int vidHeight = pixels.getHeight();
    int nChannels = pixels.getNumChannels();
    
    
    
    for (int i = 4; i < vidWidth; i+=8){
        for (int j = 4; j < vidHeight; j+=8){
            unsigned char r = pixels[(j * 320 + i)*nChannels];
            float val = 1 - ((float)r / 255.0f);
            ofDrawRectangle(i,j,val,10);
            ofSetColor(0,0,255);
            ofFill();
        }
    }
    
    
    
    
    
/*
    for (int i = 4; i < vidWidth; i+=8){
        for (int j = 4; j < vidHeight; j+=8){
            unsigned char r = pixels[(j * 320 + i)*nChannels];
            float val = 1 - ((float)r / 255.0f);
            ofDrawCircle(i,360+j,2*val);
            
        }
    }
    
    
    for (int i = 4; i < vidWidth; i+=8){
        for (int j = 4; j < vidHeight; j+=8){
            unsigned char r = pixels[(j * 320 + i)*nChannels];
            float val = 1 - ((float)r / 255.0f);
            ofDrawRectangle(400+ i,360+j,0.8*val,10);
            
            
            
        }
    }
 
    
    
    

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
