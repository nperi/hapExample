#include "ofMain.h"
#include "ofApp.h"
#include "ofGLProgrammableRenderer.cpp"
#include "ofAppGlutWindow.h"

//========================================================================
//int main( ){
//
//    ofAppGlutWindow window; // create a window
//    // set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
//    ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);
//    ofRunApp(new ofApp());
//}

int main() {
    
    ofSetCurrentRenderer(ofGLProgrammableRenderer::TYPE);
    ofSetupOpenGL(1024,768, OF_WINDOW);
    ofRunApp(new ofApp());
}