#include "ofApp.h"

int main() {
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofSetupOpenGL(450, 450, OF_WINDOW);

	ofRunApp(new ofApp());
}
