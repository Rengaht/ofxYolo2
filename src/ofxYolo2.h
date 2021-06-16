#pragma once


#include "yolo_v2_class.hpp"	
#include "ofMain.h"

#define USE_TRACKING_ID
#define USE_YOLO_9000

class ofxYolo2 {

	Detector* detector;
	std::vector<std::string> objectNames;

	
public:

	void setup();
	void setup(string config, string weights, string names);

	std::string getName(int index);
	image_t convert(ofPixels & pix);

	std::vector<bbox_t> ofxYolo2::detect(ofPixels& pixels);

	int trackHistory;
};