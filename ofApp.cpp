#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 350);
    ofEnableAntiAliasing(); // This is enabled by default
    ofSetCircleResolution(50); // For smoother looking circles + ellipses

    
}

//--------------------------------------------------------------
void ofApp::update(){
    allSize;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofSetColor(255);
    
    ofFill();
    ofSetLineWidth(2);
    
    ofDrawRectangle(50, 50, allSize, allSize);
    
    ofDrawCircle(250, 100, allSize);
    
    ofDrawEllipse(400, 100, allSize, allSize);
    
    ofDrawRectangle(150, 20, allSize, allSize);
    
    ofDrawCircle(350, 50, allSize);
    
    ofDrawEllipse(400, 30, allSize, allSize);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_UP)
    {
        allSize += 10;
    }
    
    if(key == OF_KEY_DOWN)
    {
        allSize -= 10;
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
