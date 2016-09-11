#ifndef FATIGUE_DETECTION_H
#define FATIGUE_DETECTION_H
#include "FaceTracker.h"

class FatigueDetection
{
public:
	FatigueDetection();
	bool DetectFatigue(const Pose& pose);
	bool DetectYawn(const FaceFeature &faceFeature);

private:
	bool fatigued = false;
	bool yawn = false;
	int countFrames = 0;
};
#endif
