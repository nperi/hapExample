#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(220, 220, 220);
    
    // Load a movie file
//    bool a = player.loadMovie("SampleHap.mov");
    ofxHapPlayer* a = new ofxHapPlayer();
//    a->loadMovie("duck.mov");
    bool b = a->loadMovie("SampleHap.mov");
    cout << "b: " << b << endl;
//    player.
    
    // Start playback
//    a->play();
    player.push_back(a);
//    player.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i < player.size(); ++i) {
        player[i]->update();
    }
//    unsigned char* aux = player.getPixels();
//    unsigned char* aux = player.ofBaseHasPixels_<unsigned char>::getPixels();
//    player.getTexture()->getTextureData();
//    unsigned char* aux = player.getPixels();
//    ofPixelsRef aux2 = player.getPixelsRef();
//    ofPixels_<unsigned char> aux3 = player.ofBaseHasPixels_<unsigned char>::getPixelsRef();
//    player.getTexture();
}

//--------------------------------------------------------------
void ofApp::draw(){
    int j = 0;
    for (int i=0; i < player.size(); ++i) {
        if (player[i]->isLoaded())
        {
            // Draw the frame
            ofSetColor(255, 255, 255);
//            player[i]->draw(20, 30);
            player[i]->draw(20 + j, 30 + j, 40, 50);
        }
        j += 100;
        
        // Draw the FPS display
        ofSetColor(20,20,20);
        ofDrawBitmapString(ofToString(ofGetFrameRate(), 0) + " FPS", 20, 20);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    for (int i=0; i < player.size(); ++i) {
        player[i]->play();
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
    ofxHapPlayer* a = new ofxHapPlayer();
    bool  b = a->loadMovie("SampleHap.mov");
//    a->play();
    while (!a->isLoaded()) {
        ofSleepMillis(10);
        ofLog() << "sleeping" << endl;
    }
    player.push_back(a);
//    float position = (float) x / (float) ofGetWindowWidth();
//    cout << "Setting playhead to " << ofToString(position) << endl;
//    player.setPosition(position);
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
    vector< string > fileList = dragInfo.files;
//    player.loadMovie(fileList[0]);
}
