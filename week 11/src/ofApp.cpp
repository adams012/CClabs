#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(128, 128, 128);
    
    mCamWidth = 320;
    mCamHeight = 240;
    
    //set device you wanna use
    mVidGrabber.setDeviceID(0);
    
    //setframrate
    mVidGrabber.setDesiredFrameRate(30);
    
    //set size
    mVidGrabber.initGrabber(mCamWidth,mCamHeight);
    
    mColorImg.allocate(mCamWidth, mCamHeight);
    mGrayImage.allocate(mCamWidth, mCamHeight);
    mGrayBg.allocate(mCamWidth, mCamHeight);
    mGrayDiff.allocate(mCamWidth, mCamHeight);
    
    mThreshold = 80;
    mLearnBackground = true;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    mVidGrabber.update();
    if (mVidGrabber.isFrameNew()){
        //convert the webcam feed to openCv format
        mColorImg.setFromPixels(mVidGrabber.getPixels());
        
        //convert the ofxCvColorImage into grayscale image
        mGrayImage = mColorImg;
        
        if (mLearnBackground){
            mGrayBg = mGrayImage;
            mLearnBackground = false;
        }
        //take the absolute value of the difference between background and current fram, then use threshold
        mGrayDiff.absDiff(mGrayBg, mGrayImage);
        mGrayDiff.threshold(mThreshold);
        
        // pixels that has the value >= mThreshold, become white (255); other image becomes black (0.f);
        
        mContourFinder.findContours(mGrayDiff, 20, (340*240)/3, 10, true);
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    mVidGrabber.draw(20,20);
    
    
    mGrayImage.draw(360,20);
    mGrayBg.draw(20,280);
    mGrayDiff.draw(360,280);
    
    ofFill();
    ofSetColor(0, 0, 0);
    ofDrawRectangle(360, 540, 320, 240);
    ofSetColor(255, 255, 255);
    
    //draw blobs
    
    mVidGrabber.draw(20,540);
    
    mContourFinder.draw(360, 540);

    for(int i = 0; i < mContourFinder.nBlobs; i++){
        
        mContourFinder.blobs[i].draw(200, 340);
        ofSetColor(255, 255, 255);
        
        if(mContourFinder.blobs[i].hole){
            ofDrawBitmapString("Beautiful!!!", mContourFinder.blobs[i].boundingRect.getCenter().x + 20, mContourFinder.blobs[i].boundingRect.getCenter().y + 540);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    //use space key
    switch (key) {
            case ' ':
            mLearnBackground = true;
            break;
            
        default:
            break;
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
